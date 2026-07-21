// Name: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
// Address: 00444e20
// Address Range: [[00444e20, 00444eeb]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar4 = 0;
  iStack_1c = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iStack_18 = *(int *)(param_2 + 0x1c4c);
    iStack_14 = *(int *)(param_2 + 0x1c48);
    do {
      iVar3 = *(int *)(param_2 + 0x14c8) * 4;
      puVar1 = (uint *)(iStack_14 + iVar3);
      puVar2 = (uint *)(iVar3 + iStack_18);
      for (iVar3 = (*(int *)(param_2 + 0x1888) - *(int *)(param_2 + 0x14c8)) + 1; 0 < iVar3;
          iVar3 = iVar3 + -1) {
        if ((*puVar1 != 0) && (*puVar1 < (uint)*(ushort *)*puVar2)) {
          iVar4 = iVar4 + 1;
        }
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      if (0x300 < iVar4) {
        return 1;
      }
      param_2 = param_2 + 4;
      iStack_18 = iStack_18 + 0x500;
      iStack_14 = iStack_14 + 0x500;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < *(int *)(param_1 + 0x154));
  }
  return 0;
}
