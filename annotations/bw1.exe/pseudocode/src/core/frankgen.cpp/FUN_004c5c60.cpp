// Name: core_frankgen.cpp_FUN_004c5c60
// Address: 004c5c60
// Address Range: [[004c5c60, 004c5e0e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_FUN_004c5c60(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_frankgen_cpp_FUN_004c5c60(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  byte bVar3;
  float10 fVar4;
  int aiStackY_102c [9];
  CVector3f *apCStackY_1008 [1006];
  float start_frame;
  float end_frame;
  int frame_index;
  CVector3f local_44;
  int local_38;
  int local_34 [2];
  float local_2c;
  float local_28;
  float local_24;
  byte local_20 [8];
  CVector3f *local_18;
  int local_14;
  
  bVar3 = 0;
  switch(*(uint *)&this_ptr->field_0x158) {
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
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  fVar4 = (float10)*(float *)&this_ptr->field_0x180;
  round();
  frame_index = (int)ROUND(fVar4);
  iVar1 = *(int *)&this_ptr->field_0x488;
  local_14 = frame_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          ((CKeyFramedModelInstance *)&this_ptr->field_0x184);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(this_ptr_00,frame_index);
  pCVar2 = pCVar2 + iVar1 * 0xc;
  local_38 = *(int *)pCVar2;
  local_34[(uint)bVar3 * -2] = *(int *)(pCVar2 + (uint)bVar3 * -8 + 4);
  local_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(int *)(pCVar2 + (uint)bVar3 * -8 + 4 + (uint)bVar3 * -8 + 4);
  local_2c = (float)local_38 * _DAT_00600c08;
  local_28 = (float)local_34[0] * _DAT_00600c08;
  local_24 = (float)local_34[1] * _DAT_00600c08;
  core_actor_cpp_FUN_00408b40(this_ptr,&local_2c);
  local_20._0_4_ = local_44._0_4_;
  *(uint *)(local_20 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_44 + (uint)bVar3 * -8 + 4);
  (&local_18)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       *(CVector3f **)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if ((CVector3f *)&this_ptr->field_0x490 != (CVector3f *)local_20) {
    *(uint *)&this_ptr->field_0x490 = local_20._0_4_;
    *(uint *)&this_ptr->field_0x494 = local_20._4_4_;
    *(CVector3f **)&this_ptr->field_0x498 = local_18;
    return local_18;
  }
  return (CVector3f *)local_20;
}
