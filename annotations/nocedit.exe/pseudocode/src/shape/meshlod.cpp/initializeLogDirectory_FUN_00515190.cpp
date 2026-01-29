// Name: shape_meshlod.cpp_initializeLogDirectory_FUN_00515190
// Address: 00515190
// Address Range: [[00515190, 005151b0]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_initializeLogDirectory_FUN_00515190(void)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_initializeLogDirectory_FUN_00515190(void)

{
  int iVar1;
  
  _mkdir("meshlod");
  iVar1 = remove("meshlod\\simplify.log");
  return iVar1;
}
