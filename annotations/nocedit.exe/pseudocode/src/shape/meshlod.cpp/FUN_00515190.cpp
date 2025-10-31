// Name: shape_meshlod.cpp_FUN_00515190
// Address: 00515190
// Address Range: [[00515190, 005151b0]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515190()
// Globals:
//   TerminatedCString s_meshlod_00637339
//   TerminatedCString s_meshlod_simplify_log_0067d4a0
// Function calls:
//   crt_file.c_create_directory_FUN_00600e10
//   crt_io.c_deleteFile_FUN_005ff9d0

#include "nocturne.h"

int shape_meshlod_cpp_FUN_00515190(void)

{
  int iVar1;
  
  crt_file_c_create_directory_FUN_00600e10("meshlod");
  iVar1 = crt_io_c_deleteFile_FUN_005ff9d0("meshlod\\simplify.log");
  return iVar1;
}


// Assembly code:
// 00515190: PUSH 0x637339
//   Label: shape_meshlod.cpp_FUN_00515190
//   XREF to: 00637339 (DATA)
// 00515195: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 0051519a: ADD ESP,0x4
// 0051519d: PUSH 0x67d4a0
//   XREF to: 0067d4a0 (DATA)
// 005151a2: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 005151a7: ADD ESP,0x4
// 005151aa: LEA EAX,[EAX]
// 005151b0: RET
