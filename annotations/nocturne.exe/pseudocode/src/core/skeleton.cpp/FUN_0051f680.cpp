// Name: core_skeleton.cpp_FUN_0051f680
// Address: 0051f680
// Address Range: [[0051f680, 0051f72b]]
// Convention: unknown
// Signature: int core_skeleton_cpp_FUN_0051f680(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_skeleton_cpp_FUN_0051f680(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_02737ef4) {
    iVar3 = 0x2760400;
    do {
      iVar1 = _stricmp(iVar3,param_1);
      if (iVar1 == 0) {
        return iVar2 * 0x2937c + 0x2737ef8;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2937c;
    } while (iVar2 < _DAT_02737ef4);
  }
  if (0x27 < _DAT_02737ef4) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x1093;
    core_main_c_FUN_004c8440("Can't load %s because skeleton manager is full.  (Size is %d)",param_1,0x28);
  }
  iVar2 = _DAT_02737ef4 * 0x2937c + 0x2737ef8;
  _DAT_02737ef4 = _DAT_02737ef4 + 1;
  core_skeleton_cpp_CSkeleton_load_FUN_00517560(iVar2,param_1);
  return iVar2;
}
