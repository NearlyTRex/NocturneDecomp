// Name: core_frankgen.cpp_FUN_004accb0
// Address: 004accb0
// Address Range: [[004accb0, 004ace5e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_FUN_004accb0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_frankgen_cpp_FUN_004accb0(CFrankenstienMachine *this_ptr)

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
  switch(*(uint *)&this_ptr->field_0x2b4) {
  case 0:
    start_frame = 0.0;
    end_frame = 0x450FC000;
    goto LAB_004accd9;
  case 1:
    core_frankgen_cpp_FUN_004aced0(this_ptr,131.0,671.0);
    break;
  case 2:
    core_frankgen_cpp_FUN_004aced0(this_ptr,527.0,887.0);
    break;
  case 3:
    core_frankgen_cpp_FUN_004aced0(this_ptr,1089.0,1741.0);
    break;
  case 4:
    core_frankgen_cpp_FUN_004aced0(this_ptr,350.0,400.0);
    break;
  case 5:
    core_frankgen_cpp_FUN_004aced0(this_ptr,864.0,1044.0);
    break;
  case 6:
  case 7:
    start_frame = 1701.0;
    end_frame = 1930.0;
    goto LAB_004accd9;
  case 8:
    start_frame = 1949.0;
    end_frame = 2300.0;
LAB_004accd9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60
              (this_ptr,start_frame,end_frame);
    break;
  default:
    _DAT_01d046a0 = "..\\core\\frankgen.cpp";
    _DAT_01d046a4 = 0x1bb;
    core_main_c_FUN_004e4500(&DAT_005d6ce6);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  fVar4 = (float10)*(float *)&this_ptr->field_0x2dc;
  round();
  frame_index = (int)ROUND(fVar4);
  iVar1 = *(int *)&this_ptr->field_0x5e4;
  local_14 = frame_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                          ((CKeyFramedModelInstance *)&this_ptr->field_0x2e0);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(this_ptr_00,frame_index);
  pCVar2 = pCVar2 + iVar1 * 0xc;
  local_38 = *(int *)pCVar2;
  local_34[(uint)bVar3 * -2] = *(int *)(pCVar2 + (uint)bVar3 * -8 + 4);
  local_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(int *)(pCVar2 + (uint)bVar3 * -8 + 4 + (uint)bVar3 * -8 + 4);
  local_2c = (float)local_38 * _DAT_005f71d8;
  local_28 = (float)local_34[0] * _DAT_005f71d8;
  local_24 = (float)local_34[1] * _DAT_005f71d8;
  core_actor_cpp_FUN_00408d70(this_ptr,&local_2c);
  local_20._0_4_ = local_44._0_4_;
  *(uint *)(local_20 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_44 + (uint)bVar3 * -8 + 4);
  (&local_18)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       *(CVector3f **)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if ((CVector3f *)&this_ptr->field_0x5ec != (CVector3f *)local_20) {
    *(uint *)&this_ptr->field_0x5ec = local_20._0_4_;
    *(uint *)&this_ptr->field_0x5f0 = local_20._4_4_;
    *(CVector3f **)&this_ptr->field_0x5f4 = local_18;
    return local_18;
  }
  return (CVector3f *)local_20;
}
