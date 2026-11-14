// Name: core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60
// Address: 004c5c60
// Address Range: [[004c5c60, 004c5e0e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_102c [1015];
  float start_frame;
  float end_frame;
  int frame_index;
  float local_44;
  int local_38;
  int local_34 [2];
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  int local_14;
  
  bVar4 = 0;
  switch(this_ptr->which_part) {
  case 0:
    start_frame = 0.0;
    end_frame = 0x450FC000;
    goto LAB_004c5c89;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(this_ptr,131.0,671.0);
    break;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(this_ptr,527.0,887.0);
    break;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(this_ptr,1089.0,1741.0);
    break;
  case 4:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(this_ptr,350.0,400.0);
    break;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(this_ptr,864.0,1044.0);
    break;
  case 6:
  case 7:
    start_frame = 1701.0;
    end_frame = 1930.0;
    goto LAB_004c5c89;
  case 8:
    start_frame = 1949.0;
    end_frame = 2300.0;
LAB_004c5c89:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10
              (this_ptr,start_frame,end_frame);
    break;
  default:
    _DAT_01d1d400 = "..\\core\\frankgen.cpp";
    _DAT_01d1d404 = 0x1bb;
    core_main_c_FUN_005030e0(&DAT_005e0d5f);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
  fVar5 = (float10)this_ptr->part_frame;
  round();
  frame_index = (int)ROUND(fVar5);
  iVar1 = this_ptr->anchor_vertex_index;
  local_14 = frame_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          (&this_ptr->bed_model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(this_ptr_00,frame_index);
  puVar3 = (uint *)((int)(pCVar2 + iVar1) + (uint)bVar4 * -8 + 4);
  local_38 = pCVar2[iVar1].x;
  *(uint *)((int)local_34 + (uint)bVar4 * -8) = *puVar3;
  *(uint *)((int)local_34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       puVar3[(uint)bVar4 * -2 + 1];
  local_2c = (float)local_38 * _DAT_00600c08;
  local_28 = (float)local_34[0] * _DAT_00600c08;
  local_24 = (float)local_34[1] * _DAT_00600c08;
  core_actor_cpp_FUN_00408b40(this_ptr,&local_2c);
  local_20.x = local_44;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&this_ptr->anchor_world_position != &local_20) {
    (this_ptr->anchor_world_position).x = local_20.x;
    (this_ptr->anchor_world_position).y = local_20.y;
    (this_ptr->anchor_world_position).z = local_20.z;
    return (CVector3f *)local_20.z;
  }
  return &local_20;
}
