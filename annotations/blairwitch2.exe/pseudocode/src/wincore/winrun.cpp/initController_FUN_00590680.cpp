// Name: wincore_winrun.cpp_initController_FUN_00590680
// Address: 00590680
// Address Range: [[00590680, 00590788]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initController_FUN_00590680(int controller_index,int controller_type,uint pc_port)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_initController_FUN_00590680(int controller_index,int controller_type,uint pc_port)

{
  MMRESULT MVar1;
  int iVar2;
  UINT_PTR in_stack_00000010;
  byte auStack_19c [60];
  UINT UStack_160;
  byte bStack_13c;
  
  iVar2 = controller_index * 0xac;
  wincore_winrun_cpp_clearController_FUN_00590790(controller_index);
  *(int *)(iVar2 + 0x26656c4) = controller_type;
  g_INT_ARRAY_02665974[controller_index] = in_stack_00000010;
  *(uint *)(iVar2 + 0x26656c8) = 1;
  *(uint *)(iVar2 + 0x26656cc) = 0;
  memset((void *)(iVar2 + 0x26656d0),0,0x10);
  *(uint *)(iVar2 + 0x26656e0) = 0;
  if ((controller_type != 0) && (controller_type != 4)) {
    memset(auStack_19c,0,4);
    MVar1 = joyGetDevCapsA(in_stack_00000010,(LPJOYCAPSA)auStack_19c,0x194);
    if (MVar1 == 0) {
      *(uint *)(iVar2 + 0x26656d0) = 1;
      *(uint *)(iVar2 + 0x26656d4) = 1;
      *(UINT *)(iVar2 + 0x26656cc) = UStack_160;
      *(uint *)(iVar2 + 0x26656d8) = (uint)((bStack_13c & 1) != 0);
      *(uint *)(iVar2 + 0x26656dc) = (uint)((bStack_13c & 2) != 0);
      *(uint *)(iVar2 + 0x26656e0) = (uint)((bStack_13c & 0x10) != 0);
      return;
    }
    *(uint *)(controller_index * 0xac + 0x26656c8) = 0;
    return;
  }
  return;
}
