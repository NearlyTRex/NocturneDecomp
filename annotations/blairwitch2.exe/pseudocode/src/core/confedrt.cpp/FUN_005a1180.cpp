// Name: core_confedrt.cpp_FUN_005a1180
// Address: 005a1180
// Address Range: [[005a1180, 005a12c3]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a1180(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a1180(CCharacter *param_1)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  float fVar3;
  int unaff_EDI;
  
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1[1].field_0x18;
    fVar3 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
    fVar1 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
    if (_DAT_005fedb4 < SQRT(fVar1 * fVar1 + fVar3 * fVar3)) {
      unkaddr_0059d350_cpp_FUN_0059dcb0(&param_1[1].field_0x98,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"BChasing" + 1);
    }
    else {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(param_1,(CVector3f *)(iVar2 + 0x20))
      ;
      if (*(int *)&param_1[1].field_0xe04 == 0) {
        unaff_EDI = 5;
      }
      else if (*(int *)&param_1[1].field_0xe04 == 1) {
        unaff_EDI = 9;
      }
      this_ptr = &param_1->field_0x2b4;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,unaff_EDI,1);
      iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar2 + 0x24) == 5) {
        fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr);
        if ((float)_DAT_005efccf < fVar3) {
          iVar2 = core_actor_cpp_FUN_0040cfc0(0,1);
          *(int *)&param_1[1].field_0xe04 = iVar2;
        }
      }
      iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
      if (*(int *)(iVar2 + 0x24) == 9) {
        fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
        if ((float)_DAT_005efccf < fVar3) {
          iVar2 = core_actor_cpp_FUN_0040cfc0(0,1);
          *(int *)&param_1[1].field_0xe04 = iVar2;
          return;
        }
      }
    }
  }
  return;
}
