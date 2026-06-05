// Name: core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190
// Address: 004d2190
// MANUAL RECONSTRUCTION
// Address Range: [[004d2190, 004d232c] [006108c5, 006108e1]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine *this_ptr)

{
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  CVector3i *pCVar1;
  CVector3f local_38;
  CVector3f local_20;
  int frame_index;
  int iVar1;
  float end_frame;
  float start_frame;
  
  switch(this_ptr->which_part) {
  case 0:
    start_frame = 0.0;
    end_frame = 2300.0f;
    goto LAB_004d21b9;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(this_ptr,131.0,671.0);
    break;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(this_ptr,527.0,887.0);
    break;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(this_ptr,1089.0,1741.0);
    break;
  case 4:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(this_ptr,350.0,400.0);
    break;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(this_ptr,864.0,1044.0);
    break;
  case 6:
  case 7:
    end_frame = 1930.0;
    start_frame = 1701.0;
    goto LAB_004d21b9;
  case 8:
    end_frame = 2300.0;
    start_frame = 1949.0;
LAB_004d21b9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
              (this_ptr,start_frame,end_frame);
    break;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  frame_index = (int)ROUND(ROUND(this_ptr->part_frame));
  iVar1 = this_ptr->anchor_vertex_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          (&this_ptr->bed_model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr_00,frame_index);
  pCVar1 = pCVar2 + iVar1;
  local_20.x = (float)pCVar1->x * 0.00390625f;
  local_20.y = (float)pCVar1->y * 0.00390625f;
  local_20.z = (float)pCVar1->z * 0.00390625f;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,&local_38,&local_20);
  if (&this_ptr->anchor_world_position != pCVar3) {
    this_ptr->anchor_world_position = *pCVar3;
  }
  return pCVar3;
}
