// Name: core_fire.cpp_CCrater_dtor_FUN_004c95a0
// Address: 004c95a0
// Address Range: [[004c95a0, 004c95b5]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr,uint flags)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460((CVector3f *)(this_ptr->unk + 0x1c),0);
  return (CCrater *)&pCVar1[-3].z;
}
