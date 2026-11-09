// Name: unkafter_winrun.cpp_FUN_005b41c0
// Address: 005b41c0
// Address Range: [[005b41c0, 005b42c8]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005b41c0(int param_1,int param_2,UINT_PTR param_3)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_005b41c0(int param_1,int param_2,UINT_PTR param_3)

{
  MMRESULT MVar1;
  int iVar2;
  tagJOYCAPSA tStack_1a0;
  
  iVar2 = param_1 * 0xac;
  unkafter_winrun_cpp_FUN_005b42d0(param_1);
  *(int *)(iVar2 + 0x2c9cf14) = param_2;
  *(UINT_PTR *)(param_1 * 4 + 0x2c9d1c4) = param_3;
  *(uint *)(iVar2 + 0x2c9cf18) = 1;
  *(uint *)(iVar2 + 0x2c9cf1c) = 0;
  memset((void *)(iVar2 + 0x2c9cf20),0,0x10);
  *(uint *)(iVar2 + 0x2c9cf30) = 0;
  if ((param_2 != 0) && (param_2 != 4)) {
    memset(&tStack_1a0,0,4);
    MVar1 = joyGetDevCapsA(param_3,&tStack_1a0,0x194);
    if (MVar1 == 0) {
      *(uint *)(iVar2 + 0x2c9cf20) = 1;
      *(uint *)(iVar2 + 0x2c9cf24) = 1;
      *(UINT *)(iVar2 + 0x2c9cf1c) = tStack_1a0.wNumButtons;
      *(uint *)(iVar2 + 0x2c9cf28) = (uint)(((byte)tStack_1a0.wCaps & 1) != 0);
      *(uint *)(iVar2 + 0x2c9cf2c) = (uint)(((byte)tStack_1a0.wCaps & 2) != 0);
      *(uint *)(iVar2 + 0x2c9cf30) = (uint)(((byte)tStack_1a0.wCaps & 0x10) != 0);
      return;
    }
    *(uint *)(param_1 * 0xac + 0x2c9cf18) = 0;
    return;
  }
  return;
}
