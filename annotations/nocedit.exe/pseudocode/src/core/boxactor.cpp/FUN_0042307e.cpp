// Name: core_boxactor.cpp_FUN_0042307e
// Address: 0042307e
// Address Range: [[0042307e, 004230ad]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_0042307e()

#include "nocturne.h"

ulonglong
core_boxactor_cpp_FUN_0042307e
          (uint param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  switch(param_5) {
  case 0:
    return CONCAT44 /* combine 2-byte values */(param_2,"Custom");
  case 1:
    return CONCAT44 /* combine 2-byte values */(param_2,"Flashlight");
  case 2:
    return CONCAT44 /* combine 2-byte values */(param_2,"Lantern");
  case 3:
    return CONCAT44 /* combine 2-byte values */(param_2,"Globe");
  default:
    return CONCAT44 /* combine 2-byte values */(param_2,"???");
  }
}
