// Name: core_frankgen.cpp_CFrankenstienMachine_FUN_004d2190
// Address: 004d2190
// Address Range: [[004d2190, 004d232c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  int *piVar4;
  byte bVar5;
  int aiStackY_1014 [1012];
  int frame_index;
  CVector3f local_38;
  int local_2c;
  int local_28 [2];
  CVector3f local_20;
  int local_14;
  
  bVar5 = 0;
  switch(this_ptr->which_part) {
  case 0:
    goto LAB_004d21b9;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 4:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 6:
  case 7:
    goto LAB_004d21b9;
  case 8:
LAB_004d21b9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(this_ptr);
    break;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  frame_index = (int)ROUND(ROUND(this_ptr->part_frame));
  iVar1 = this_ptr->anchor_vertex_index;
  local_14 = frame_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          (&this_ptr->bed_model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr_00,frame_index);
  piVar4 = (int *)((int)(pCVar2 + iVar1) + (uint)bVar5 * -8 + 4);
  local_2c = pCVar2[iVar1].x;
  local_28[(uint)bVar5 * -2] = *piVar4;
  local_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = piVar4[(uint)bVar5 * -2 + 1];
  local_20.x = (float)local_2c * 0.00390625f;
  local_20.y = (float)local_28[0] * 0.00390625f;
  local_20.z = (float)local_28[1] * 0.00390625f;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,&local_38,&local_20);
  if (&this_ptr->anchor_world_position != pCVar3) {
    (this_ptr->anchor_world_position).x = pCVar3->x;
    (this_ptr->anchor_world_position).y = pCVar3->y;
    (this_ptr->anchor_world_position).z = pCVar3->z;
    return pCVar3;
  }
  return pCVar3;
}
