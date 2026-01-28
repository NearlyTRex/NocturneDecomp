// Name: shape_meshlod.cpp_initializeLogDirectory_FUN_00515190
// Address: 00515190
// Address Range: [[00515190, 005151b0]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_initializeLogDirectory_FUN_00515190(void)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_initializeLogDirectory_FUN_00515190(void)

{
  int iVar1;
  
  crt_file_c_create_directory_FUN_00600e10("meshlod");
  iVar1 = crt_io_c_deleteFile_FUN_005ff9d0("meshlod\\simplify.log");
  return iVar1;
}
