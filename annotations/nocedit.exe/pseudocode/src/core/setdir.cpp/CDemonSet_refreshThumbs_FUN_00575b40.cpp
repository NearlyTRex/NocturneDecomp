// Name: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
// Address: 00575b40
// Address Range: [[00575b40, 00575b9c]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet * this_ptr, char * filename)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569dfd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_006464de
//   TerminatedCString s_data_006464e1
//   TerminatedCString s_core_setdir_cpp_006464e6
// Function calls:
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet *this_ptr,char *filename)

{
  FILE *file_handle;
  char *in_stack_00000010;
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rb");
  if (file_handle == (FILE *)0x0) {
    core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
    core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,in_stack_00000010);
    return;
  }
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\setdir.cpp",0x363);
  return;
}


// Assembly code:
// 00575b40: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
// 00575b41: PUSH ESI
// 00575b42: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00575b46: PUSH 0x6464de
//   XREF to: 006464de (DATA)
// 00575b4b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00575b4f: PUSH EDX
// 00575b50: PUSH 0x6464e1
//   XREF to: 006464e1 (DATA)
// 00575b55: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00575b5a: MOV EBX,EAX
// 00575b5c: ADD ESP,0xc
// 00575b5f: TEST EAX,EAX
// 00575b61: JNZ 0x00575b7d
//   XREF to: 00575b7d (CONDITIONAL_JUMP)
// 00575b63: PUSH ESI
// 00575b64: CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   XREF to: 00575f60 (UNCONDITIONAL_CALL)
// 00575b69: ADD ESP,0x4
// 00575b6c: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00575b70: PUSH ECX
// 00575b71: PUSH ESI
// 00575b72: CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
//   XREF to: 00575e40 (UNCONDITIONAL_CALL)
// 00575b77: ADD ESP,0x8
// 00575b7a: POP ESI
// 00575b7b: POP EBX
// 00575b7c: RET
// 00575b7d: PUSH EAX
//   Label: LAB_00575b7d
// 00575b7e: PUSH ESI
// 00575b7f: CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
//   XREF to: 00575bc0 (UNCONDITIONAL_CALL)
// 00575b84: ADD ESP,0x8
// 00575b87: PUSH 0x363
// 00575b8c: PUSH 0x6464e6
//   XREF to: 006464e6 (DATA)
// 00575b91: PUSH EBX
// 00575b92: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00575b97: ADD ESP,0xc
// 00575b9a: POP ESI
// 00575b9b: POP EBX
// 00575b9c: RET
