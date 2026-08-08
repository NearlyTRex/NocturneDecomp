// Name: engine_special.cpp_switchRenderer_FUN_00532f30
// Address: 00532f30
// Address Range: [[00532f30, 00532f47]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_00532f30(CExternalRenderer *renderer,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_00532f30(CExternalRenderer *renderer,int card_index)

{
  int iVar1;
  
  iVar1 = engine_special_cpp_switchRenderer_FUN_00532f50(renderer[1].description,card_index);
  return iVar1;
}
