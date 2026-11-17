// Name: wincore_winrun.cpp_initController_FUN_005b41c0
// Address: 005b41c0
// Address Range: [[005b41c0, 005b42c8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initController_FUN_005b41c0(int controller_index,int controller_type,uint pc_port)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_initController_FUN_005b41c0(int controller_index,int controller_type,uint pc_port)

{
  MMRESULT MVar1;
  int iVar2;
  UINT_PTR in_stack_00000010;
  byte auStack_19c [60];
  UINT UStack_160;
  byte bStack_13c;
  
  iVar2 = controller_index * 0xac;
  wincore_winrun_cpp_clearController_FUN_005b42d0(controller_index);
  *(int *)(iVar2 + 0x2c9cf14) = controller_type;
  g_INT_ARRAY_02c9d1c4[controller_index] = in_stack_00000010;
  *(uint *)(iVar2 + 0x2c9cf18) = 1;
  *(uint *)(iVar2 + 0x2c9cf1c) = 0;
  memset((void *)(iVar2 + 0x2c9cf20),0,0x10);
  *(uint *)(iVar2 + 0x2c9cf30) = 0;
  if ((controller_type != 0) && (controller_type != 4)) {
    memset(auStack_19c,0,4);
    MVar1 = joyGetDevCapsA(in_stack_00000010,(LPJOYCAPSA)auStack_19c,0x194);
    if (MVar1 == 0) {
      *(uint *)(iVar2 + 0x2c9cf20) = 1;
      *(uint *)(iVar2 + 0x2c9cf24) = 1;
      *(UINT *)(iVar2 + 0x2c9cf1c) = UStack_160;
      *(uint *)(iVar2 + 0x2c9cf28) = (uint)((bStack_13c & 1) != 0);
      *(uint *)(iVar2 + 0x2c9cf2c) = (uint)((bStack_13c & 2) != 0);
      *(uint *)(iVar2 + 0x2c9cf30) = (uint)((bStack_13c & 0x10) != 0);
      return;
    }
    *(uint *)(controller_index * 0xac + 0x2c9cf18) = 0;
    return;
  }
  return;
}
