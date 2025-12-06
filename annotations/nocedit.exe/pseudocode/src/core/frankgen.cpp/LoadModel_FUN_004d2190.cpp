// Name: core_frankgen.cpp_LoadModel_FUN_004d2190
// Address: 004d2190
// Address Range: [[004d2190, 004d232c]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_LoadModel_FUN_004d2190()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_frankgen.cpp_LoadModel(uint param_1) */

void core_frankgen_cpp_LoadModel_FUN_004d2190(void)

{
  int iVar1;
  uint extraout_EAX;
  CKeyFramedModel *this_ptr;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  uint auStackY_1004 [1010];
  int in_stack_ffffffd4;
  CVector3f local_24;
  uint local_18 [2];
  
  bVar5 = 0;
  switch(*(uint *)in_stack_00000004[1].actor_name) {
  case 0:
    goto LAB_004d21b9;
  case 1:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 2:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 3:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 4:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 5:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 6:
  case 7:
    goto LAB_004d21b9;
  case 8:
LAB_004d21b9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430();
    break;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  iVar1 = *(int *)(in_stack_00000004[3].create_event + 8);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,in_stack_ffffffd4)
  ;
  puVar4 = (uint *)((int)(pCVar2 + iVar1) + (uint)bVar5 * -8 + 4);
  local_24.z = (float)pCVar2[iVar1].x;
  local_18[(uint)bVar5 * -2] = *puVar4;
  local_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_24,(CVector3f *)&stack0xfffffff4);
  if ((CVector3f *)(in_stack_00000004[3].create_event + 0x10) != pCVar3) {
    ((CVector3f *)(in_stack_00000004[3].create_event + 0x10))->x = pCVar3->x;
    *(float *)(in_stack_00000004[3].create_event + 0x14) = pCVar3->y;
    *(float *)(in_stack_00000004[3].create_event + 0x18) = pCVar3->z;
    return;
  }
  return;
}
