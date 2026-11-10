// Name: core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440
// Address: 0042b440
// Address Range: [[0042b440, 0042b543]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setCharacterModel_FUN_0042b440(CCharacter *this_ptr,char *model_name,char *cloth_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setCharacterModel_FUN_0042b440(CCharacter *this_ptr,char *model_name,char *cloth_name)

{
  CDeformableModelInstance *this_ptr_00;
  CClothList *this_ptr_01;
  uint uVar1;
  int iVar2;
  
  this_ptr_00 = &this_ptr->model;
  iVar2 = _strcmp(&(this_ptr->model).field_0x2260,model_name);
  if (iVar2 == 0) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(this_ptr_00,model_name);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(this_ptr_00);
  *(uint *)&this_ptr->field_0x109c0 = 0;
  *(uint *)&this_ptr->field_0x109c4 = 0;
  *(uint *)&this_ptr->field_0x109c8 = 0;
  *(uint *)&this_ptr->field_0x109d4 = 0;
  *(uint *)&this_ptr->field_0x109cc = 0;
  uVar1 = _DAT_005f4088;
  *(uint *)&this_ptr->field_0x109d8 = 0xfffffffe;
  *(uint *)&(this_ptr->model).field_0x54 = *(uint *)&this_ptr->field_0x2824;
  *(uint *)&this_ptr->field_0x109d0 = uVar1;
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390(this_ptr);
  core_charactr_cpp_FUN_004247f0(this_ptr);
  if (0 < (this_ptr->cloth_list).count) {
    core_cloth_cpp_CClothList_remove_FUN_005b1640(&this_ptr->cloth_list,0);
  }
  this_ptr_01 = &this_ptr->cloth_list;
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_01,cloth_name);
  core_cloth_cpp_CClothList_load_FUN_005b14a0(this_ptr_01);
  core_cloth_cpp_CClothList_setup_FUN_005b1740
            (this_ptr_01,(CVector3f *)&(this_ptr->base).field_0x20,&(this_ptr->base).orient.vec,
             &this_ptr->model);
  return;
}
