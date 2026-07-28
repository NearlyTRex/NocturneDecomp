// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_00498db0
// Address: 00498db0
// Address Range: [[00498db0, 00498dd9]]
// Convention: unknown
// Signature: undefined4 core_gabriela_cpp_CGabriella_renderTransparent_FUN_00498db0(CCharacter *param_1)

#include "nocturne.h"

uint core_gabriela_cpp_CGabriella_renderTransparent_FUN_00498db0(CCharacter *param_1)

{
  float fVar1;
  
  fVar1 = param_1[2].flames[0x1d].base.orient_matrix.m[1].x;
  (**(code **)(*(int *)((int)fVar1 + 0x14c) + 0xc))(fVar1);
  core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(param_1);
  return 1;
}
