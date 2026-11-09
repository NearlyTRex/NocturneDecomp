// Name: core_charactr.cpp_FUN_0042fbd0
// Address: 0042fbd0
// Address Range: [[0042fbd0, 0042fc8c]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042fbd0(CCharacter *param_1,CVector3f *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042fbd0(CCharacter *param_1,CVector3f *param_2,uint param_3,uint param_4,uint param_5,int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((*(int *)&param_1->field_0x33a0 < 0x32) &&
     (((param_6 != 0 ||
       (iVar1 = core_actor_cpp_FUN_0040c790((CDemonActor *)param_1,"CHero"), iVar1 == 0))
      && (param_1->field_0x24a8 != '\0')))) {
    iVar1 = core_skeleton_cpp_FUN_0054f480
                      ((CDeformableModelInstance *)&param_1->field_0x158,param_2);
    iVar2 = 0;
    pCVar3 = param_1;
    if (0 < *(int *)&param_1->field_0x33a0) {
      do {
        if (iVar1 == *(int *)&pCVar3->field_0x33b0) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)&pCVar3->field_0x18;
      } while (iVar2 < *(int *)&param_1->field_0x33a0);
    }
    *(uint *)&param_1->field_0x33a4 = param_4;
    *(uint *)&param_1->field_0x33a8 = param_5;
    *(uint *)&param_1->field_0x3260 = param_7;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(param_1,skeleton,iVar1);
    *(uint *)&param_1->field_0xfc = 1;
    return;
  }
  return;
}
