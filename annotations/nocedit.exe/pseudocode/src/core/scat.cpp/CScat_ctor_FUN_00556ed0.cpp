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
  this_ptr_00->unk[0] = '\0';
  this_ptr_00->unk[1] = '\0';
  this_ptr_00->unk[2] = '\0';
  this_ptr_00->unk[3] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr_00->base).base.model,"scat.dfm");
  this_ptr_00->unk[0x10] = '\0';
  this_ptr_00->unk[0x11] = '\0';
  this_ptr_00->unk[0x12] = -0x80;
  this_ptr_00->unk[0x13] = '?';
  this_ptr_00->unk[0xc] = '\0';
  this_ptr_00->unk[0xd] = '\0';
  this_ptr_00->unk[0xe] = '\0';
  this_ptr_00->unk[0xf] = '\0';
  *(uint *)(this_ptr_00->unk + 8) = *(uint *)(this_ptr_00->unk + 0xc);
  *(uint *)(this_ptr_00->unk + 4) = *(uint *)(this_ptr_00->unk + 8);
  core_scat_cpp_CScat_FUN_00557150(this_ptr_00);
  this_ptr_00->unk[0x14] = '\0';
  this_ptr_00->unk[0x15] = '\0';
  this_ptr_00->unk[0x16] = '\0';
  this_ptr_00->unk[0x17] = '\0';
  this_ptr_00->unk[0x1c] = '\0';
  this_ptr_00->unk[0x1d] = '\0';
  this_ptr_00->unk[0x1e] = '\0';
  this_ptr_00->unk[0x1f] = '\0';
  this_ptr_00->unk[0x24] = '\0';
  this_ptr_00->unk[0x25] = '\0';
  this_ptr_00->unk[0x26] = '\0';
  this_ptr_00->unk[0x27] = '\0';
  this_ptr_00->unk[0x28] = '\0';
  this_ptr_00->unk[0x29] = '\0';
  this_ptr_00->unk[0x2a] = '\0';
  this_ptr_00->unk[0x2b] = '\0';
  *(uint *)(this_ptr_00->unk + 0x18) = *(uint *)(this_ptr_00->unk + 0x1c);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  return this_ptr_00;
}
