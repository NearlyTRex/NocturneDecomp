// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_004b1160
// Address: 004b1160
// Address Range: [[004b1160, 004b1190]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004b1160(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004b1160(CGabriella *this_ptr)

{
  (**(code **)(*(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) +
                       0x2b0) + 0x1c))
            (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4));
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
  return 1;
}
