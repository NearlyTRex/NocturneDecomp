// Name: core_simbox.cpp_FUN_005473c0
// Address: 005473c0
// Address Range: [[005473c0, 00547598]]
// Convention: unknown
// Signature: void core_simbox_cpp_FUN_005473c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_simbox_cpp_FUN_005473c0(int param_1,float param_2)

{
  int iVar1;
  byte bVar2;
  int aiStackY_1010 [1016];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_10;
  
  bVar2 = 0;
  if ((*(int *)(param_1 + 0x2d4) == 1) && (*(int *)(param_1 + 0x5ac) == 0)) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,(char *)(param_1 + 0x2dc));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x5ac) = 1;
      if ((uint *)(param_1 + 0x3a4) != (uint *)(param_1 + 0x340)) {
        *(uint *)(param_1 + 0x3a4) = *(uint *)(param_1 + 0x340);
        *(uint *)(param_1 + 0x3a8) = *(uint *)(param_1 + 0x344);
        *(uint *)(param_1 + 0x3ac) = *(uint *)(param_1 + 0x348);
      }
      if ((uint *)(param_1 + 0x3c8) != (uint *)(param_1 + 0x34c)) {
        *(uint *)(param_1 + 0x3c8) = *(uint *)(param_1 + 0x34c);
        *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x350);
        *(uint *)(param_1 + 0x3d0) = *(uint *)(param_1 + 0x354);
      }
      core_dirmat_cpp_FUN_0045b800(param_1 + 0x370,param_1 + 0x3a4);
      uStack_28 = uStack_1c;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if ((uint *)(param_1 + 0x398) != &stack0xffffffd8) {
        *(uint *)(param_1 + 0x398) = uStack_28;
        *(uint *)(param_1 + 0x39c) = uStack_24;
        *(uint *)(param_1 + 0x3a0) = uStack_20;
      }
    }
  }
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar1 = (**(code **)*0x01D70A78)(0x01D70A78,0x13);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x5b4);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x5b8);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x5bc);
      iStack_10 = rand();
      *(float *)(param_1 + 0x30) =
           ((float)iStack_10 * _DAT_005d1592 + (float)_DAT_005d1596) * (float)_DAT_005d159e;
      iStack_10 = rand();
      *(float *)(param_1 + 0x38) =
           (float)iStack_10 * _DAT_005d1592 * _DAT_005d15a6 * (float)_DAT_005d15ae;
      iStack_10 = rand();
      *(float *)(param_1 + 0x34) =
           (float)iStack_10 * _DAT_005d1592 * _DAT_005d15a6 * (float)_DAT_005d15ae;
      (*(code *)**(uint **)(param_1 + 0x154))(param_1);
    }
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    core_box_cpp_CBox_process_FUN_0041b410((CBox *)(param_1 + 0x358),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x358);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x35c);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x360);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x364)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x364);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x368);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x36c);
      return;
    }
  }
  return;
}
