// Name: unkafter_winrun.cpp_FUN_00590680
// Address: 00590680
// Address Range: [[00590680, 00590788]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_00590680(int param_1,int param_2,UINT_PTR param_3)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_00590680(int param_1,int param_2,UINT_PTR param_3)

{
  MMRESULT MVar1;
  int iVar2;
  tagJOYCAPSA tStack_1a0;
  
  iVar2 = param_1 * 0xac;
  unkafter_winrun_cpp_FUN_00590790(param_1);
  *(int *)(iVar2 + 0x26656c4) = param_2;
  *(UINT_PTR *)(param_1 * 4 + 0x2665974) = param_3;
  *(uint *)(iVar2 + 0x26656c8) = 1;
  *(uint *)(iVar2 + 0x26656cc) = 0;
  memset((void *)(iVar2 + 0x26656d0),0,0x10);
  *(uint *)(iVar2 + 0x26656e0) = 0;
  if ((param_2 != 0) && (param_2 != 4)) {
    memset(&tStack_1a0,0,4);
    MVar1 = joyGetDevCapsA(param_3,&tStack_1a0,0x194);
    if (MVar1 == 0) {
      *(uint *)(iVar2 + 0x26656d0) = 1;
      *(uint *)(iVar2 + 0x26656d4) = 1;
      *(UINT *)(iVar2 + 0x26656cc) = tStack_1a0.wNumButtons;
      *(uint *)(iVar2 + 0x26656d8) = (uint)(((byte)tStack_1a0.wCaps & 1) != 0);
      *(uint *)(iVar2 + 0x26656dc) = (uint)(((byte)tStack_1a0.wCaps & 2) != 0);
      *(uint *)(iVar2 + 0x26656e0) = (uint)(((byte)tStack_1a0.wCaps & 0x10) != 0);
      return;
    }
    *(uint *)(param_1 * 0xac + 0x26656c8) = 0;
    return;
  }
  return;
}
