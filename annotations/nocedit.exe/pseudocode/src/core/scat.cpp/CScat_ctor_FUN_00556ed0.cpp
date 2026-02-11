// Name: core_scat.cpp_CScat_ctor_FUN_00556ed0
// Address: 00556ed0
// Address Range: [[00556ed0, 00556f8e]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00556ed0(CScat *this_ptr)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00556ed0(CScat *this_ptr)

{
  CScat *this_ptr_00;
  
  this_ptr_00 = (CScat *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (this_ptr_00->base).base.base.vtable._ub = &g_CScatVTable;
  this_ptr_00->guns_drawn = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr_00->base).base.model,"scat.dfm");
  this_ptr_00->unk3 = 1.0;
  this_ptr_00->unk2 = 0;
  *(int *)(this_ptr_00->unk1 + 4) = this_ptr_00->unk2;
  *(uint *)this_ptr_00->unk1 = *(uint *)(this_ptr_00->unk1 + 4);
  core_scat_cpp_CScat_createDefaultGun_FUN_00557150(this_ptr_00);
  this_ptr_00->unk4 = 0;
  this_ptr_00->unk6 = 0;
  this_ptr_00->unk8 = 0;
  this_ptr_00->unk9 = 0;
  this_ptr_00->unk5 = this_ptr_00->unk6;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,1,2,"draw_coatPocket2aimPistols",0);
  return this_ptr_00;
}
