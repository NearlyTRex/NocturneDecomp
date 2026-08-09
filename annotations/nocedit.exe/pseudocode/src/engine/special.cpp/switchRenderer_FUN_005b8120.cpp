// Name: engine_special.cpp_switchRenderer_FUN_005b8120
// Address: 005b8120
// Address Range: [[005b8120, 005b8137]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_005b8120(CExternalRenderer *renderer,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_005b8120(CExternalRenderer *renderer,int card_index)

{
  int iVar1;
  
  iVar1 = engine_special_cpp_switchRenderer_FUN_005b8140(renderer[1].description,card_index);
  return iVar1;
}
