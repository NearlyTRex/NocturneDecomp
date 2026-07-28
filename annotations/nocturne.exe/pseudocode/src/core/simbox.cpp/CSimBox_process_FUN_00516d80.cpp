// Name: core_simbox.cpp_CSimBox_process_FUN_00516d80
// Address: 00516d80
// Address Range: [[00516d80, 00516f46]]
// Convention: unknown
// Signature: void core_simbox_cpp_CSimBox_process_FUN_00516d80(int param_1,float param_2)

#include "nocturne.h"

void core_simbox_cpp_CSimBox_process_FUN_00516d80(int param_1,float param_2)

{
  int iVar1;
  uint *puVar2;
  byte local_18 [12];
  int iStack_c;
  
  if ((*(int *)(param_1 + 0x2cc) == 1) && (*(int *)(param_1 + 0x5a4) == 0)) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1 + 0x2d4));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x5a4) = 1;
      if ((uint *)(param_1 + 0x39c) != (uint *)(param_1 + 0x338)) {
        *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x338);
        *(uint *)(param_1 + 0x3a0) = *(uint *)(param_1 + 0x33c);
        *(uint *)(param_1 + 0x3a4) = *(uint *)(param_1 + 0x340);
      }
      if ((uint *)(param_1 + 0x3c0) != (uint *)(param_1 + 0x344)) {
        *(uint *)(param_1 + 0x3c0) = *(uint *)(param_1 + 0x344);
        *(uint *)(param_1 + 0x3c4) = *(uint *)(param_1 + 0x348);
        *(uint *)(param_1 + 0x3c8) = *(uint *)(param_1 + 0x34c);
      }
      puVar2 = (uint *)
               core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                         (param_1 + 0x368,local_18,param_1 + 0x39c);
      if ((uint *)(param_1 + 0x390) != puVar2) {
        *(uint *)(param_1 + 0x390) = *puVar2;
        *(uint *)(param_1 + 0x394) = puVar2[1];
        *(uint *)(param_1 + 0x398) = puVar2[2];
      }
    }
  }
  if (*(int *)(param_1 + 0x2cc) == 0) {
    iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x13);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x5ac);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x5b0);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x5b4);
      iStack_c = rand();
      *(float *)(param_1 + 0x30) =
           ((float)iStack_c * 3.051851e-05f + (float)-0.5) * (float)3.1415926535000001;
      iStack_c = rand();
      *(float *)(param_1 + 0x38) =
           (float)iStack_c * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      iStack_c = rand();
      *(float *)(param_1 + 0x34) =
           (float)iStack_c * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      (*(code *)**(uint **)(param_1 + 0x14c))(param_1);
    }
  }
  if (*(int *)(param_1 + 0x5a4) != 0) {
    core_box_cpp_CBox_process_FUN_0041acb0((CBox *)(param_1 + 0x350),param_2);
    *(float *)(param_1 + 0x20) = (((CBox *)(param_1 + 0x350))->position).x;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x354);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x358);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x35c)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x35c);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x360);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x364);
      return;
    }
  }
  return;
}
