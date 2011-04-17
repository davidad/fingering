typedef enum {
  A = 1,
  AS = 2,
  BF = 2,
  B = 3,
  C = 4,
  CS = 5,
  DF = 5,
  D = 6,
  DS = 7,
  EF = 7,
  E = 8,
  F = 9,
  FS = 10,
  GF = 10,
  G = 11,
  GS = 12,
  AF = 12,
} name_t;

typedef struct {
  name_t name;
  enum {
    REQUIRED = 0,
    OPTIONAL = 1,
    ANY_OCTAVE = 2,
    OPTIONAL_ANY_OCTAVE = 3,
  } status;
  uint8_t octave;
} note_t;

typedef struct {
  int n;
  note_t note[0];
} chord_t;

enum {
  X = -1,
};
typedef struct {
  int n[2];
  int string[0][0];
} stringss_t;

typedef enum {
  LEFT_PINKY = -5,
  LEFT_RING = -4,
  LEFT_MIDDLE = -3,
  LEFT_INDEX = -2,
  LEFT_THUMB = -1,
  NO_FINGER = 0,
  RIGHT_THUMB = 1,
  RIGHT_INDEX = 2,
  RIGHT_MIDDLE = 3,
  RIGHT_RING = 4,
  RIGHT_PINKY = 5
} finger_t;
