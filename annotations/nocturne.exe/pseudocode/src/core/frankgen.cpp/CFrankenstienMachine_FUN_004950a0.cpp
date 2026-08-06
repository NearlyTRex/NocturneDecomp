// Name: core_frankgen.cpp_CFrankenstienMachine_FUN_004950a0
// Address: 004950a0
// Address Range: [[004950a0, 0049523c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004950a0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004950a0(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  int aiStackY_1018 [1012];
  int frame_index;
  float start_frame;
  float end_frame;
  int iStack_30;
  int local_2c;
  int local_28;
  CVector3f local_24;
  int local_18;
  
  bVar5 = 0;
  switch(this_ptr->which_part) {
  case 0:
    start_frame = 0.0;
    end_frame = 2300.0f;
    goto LAB_004950c9;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(this_ptr,131.0,671.0);
    break;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(this_ptr,527.0,887.0);
    break;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(this_ptr,1089.0,1741.0);
    break;
  case 4:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(this_ptr,350.0,400.0);
    break;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(this_ptr,864.0,1044.0);
    break;
  case 6:
  case 7:
    start_frame = 1701.0;
    end_frame = 1930.0;
    goto LAB_004950c9;
  case 8:
    start_frame = 1949.0;
    end_frame = 2300.0;
LAB_004950c9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340
              (this_ptr,start_frame,end_frame);
    break;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 443;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WTF!");
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  dVar6 = round((double)this_ptr->part_frame);
  frame_index = (int)ROUND(dVar6);
  iVar1 = this_ptr->anchor_vertex_index;
  local_18 = frame_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                          (&this_ptr->bed_model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(this_ptr_00,frame_index);
  puVar4 = (uint *)((int)(pCVar2 + iVar1) + (uint)bVar5 * -8 + 4);
  iStack_30 = pCVar2[iVar1].x;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8) = *puVar4;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar4[(uint)bVar5 * -2 + 1];
  local_24.x = (float)iStack_30 * _DAT_0059db58;
  local_24.y = (float)local_2c * _DAT_0059db58;
  local_24.z = (float)local_28 * _DAT_0059db58;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (&this_ptr->base,(CVector3f *)&stack0xffffffc4,&local_24);
  if (&this_ptr->anchor_world_position != pCVar3) {
    (this_ptr->anchor_world_position).x = pCVar3->x;
    (this_ptr->anchor_world_position).y = pCVar3->y;
    (this_ptr->anchor_world_position).z = pCVar3->z;
    return pCVar3;
  }
  return pCVar3;
}
