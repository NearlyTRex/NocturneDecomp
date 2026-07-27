// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20
// Address: 00407a20
// Address Range: [[00407a20, 00407cb3]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
    if (DAT_006b0278 == 0) {
      if (DAT_006b0274 == 0) {
        if (_DAT_01c03948 == 0) {
          if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
          }
          else {
            _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
          }
        }
        else if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        if (0x00000001 == 0) {
          if (_DAT_01c03948 == 0) {
            if (DAT_005b7624 == 0x20) {
              _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
            }
            else {
              _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
            }
          }
          else if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
          }
          else {
            _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
          }
          _DAT_01c039a4 = 0;
          _DAT_01c039a0 = 0xc1;
        }
        else {
          _DAT_01c039a4 = 1;
          _DAT_01c039a0 = 0xc1;
        }
      }
      else {
        if (_DAT_01c03948 == 0) {
          if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
          }
          else {
            _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
          }
        }
        else if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a0 = 0xc0;
        _DAT_01c039a4 = 1;
        engine_light_cpp_calculateLighting_FUN_004c6cc0
                  (*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                   *(uint *)(param_1 + 0x10));
        _DAT_01c00c70 = engine_3d_c_FUN_00404680(DAT_006b0260,_DAT_01c00c74);
      }
    }
    else {
      if (_DAT_01c03948 == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
        }
      }
      else if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
      }
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
    }
    piVar3 = &DAT_006b029c;
    piVar2 = (int *)(param_1 + 0x18);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *piVar3 = *piVar2 + DAT_006b0264;
      (&DAT_005c502c)[(*piVar2 + DAT_006b0264) * 0xc] = piVar2[1];
      piVar3 = piVar3 + 1;
      *(int *)(&DAT_005c5030 + (*piVar2 + DAT_006b0264) * 0x30) = piVar2[2];
      piVar2 = piVar2 + 3;
    }
    engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),&DAT_006b029c);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
