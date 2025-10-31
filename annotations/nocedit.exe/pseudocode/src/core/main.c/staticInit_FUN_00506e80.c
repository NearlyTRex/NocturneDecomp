// Name: core_main.c_staticInit_FUN_00506e80
// Address: 00506e80
// Address Range: [[00506e80, 00506f0d]]
// Convention: __cdecl
// Signature: void core_main.c_staticInit_FUN_00506e80(void)
// Globals:
//   CFileManager_vtable g_CDemonFileManagerVTable
//   WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode
//   WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode
//   WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode
//   WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode
//   WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode
//   CDemonFileManager g_CDemonFileManagerInstance
//   undefined4 DAT_02f0c940
//   CAlphaBitmap g_LoadingScreenBitmap1
//   CAlphaBitmap g_LoadingScreenBitmap2
//   CAlphaBitmap g_LoadingScreenBitmap3
//   CAlphaBitmap g_LoadingScreenBitmap4
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0

#include "nocturne.h"

void __cdecl core_main_c_staticInit_FUN_00506e80(void)

{
  engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(&g_CDemonFileManagerInstance.base_filemanager);
  g_CDemonFileManagerInstance.base_filemanager.vtable = &g_CDemonFileManagerVTable;
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonFileManagerDestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap1);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap1DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap2);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap2DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap3);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap3DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap4);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap4DestructorNode);
  return;
}


// Assembly code:
// 00506e80: PUSH 0x2dd4130
//   Label: core_main.c_staticInit_FUN_00506e80
//   XREF to: 02dd4130 (DATA)
// 00506e85: CALL engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
//   XREF to: 004b53a0 (UNCONDITIONAL_CALL)
// 00506e8a: ADD ESP,0x4
// 00506e8d: MOV EDX,0x660d24
//   XREF to: 00660d24 (PARAM)
// 00506e92: PUSH 0x67d010
//   XREF to: 0067d010 (DATA)
// 00506e97: MOV dword ptr [0x02f0c940],EDX
//   XREF to: 02f0c940 (WRITE)
// 00506e9d: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00506ea2: ADD ESP,0x4
// 00506ea5: PUSH 0x2f0ca54
//   XREF to: 02f0ca54 (DATA)
// 00506eaa: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00506eaf: ADD ESP,0x4
// 00506eb2: PUSH 0x67d020
//   XREF to: 0067d020 (DATA)
// 00506eb7: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00506ebc: ADD ESP,0x4
// 00506ebf: PUSH 0x2f0ca68
//   XREF to: 02f0ca68 (DATA)
// 00506ec4: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00506ec9: ADD ESP,0x4
// 00506ecc: PUSH 0x67d030
//   XREF to: 0067d030 (DATA)
// 00506ed1: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00506ed6: ADD ESP,0x4
// 00506ed9: PUSH 0x2f0ca7c
//   XREF to: 02f0ca7c (DATA)
// 00506ede: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00506ee3: ADD ESP,0x4
// 00506ee6: PUSH 0x67d040
//   XREF to: 0067d040 (DATA)
// 00506eeb: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00506ef0: ADD ESP,0x4
// 00506ef3: PUSH 0x2f0ca90
//   XREF to: 02f0ca90 (DATA)
// 00506ef8: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00506efd: ADD ESP,0x4
// 00506f00: PUSH 0x67d050
//   XREF to: 0067d050 (DATA)
// 00506f05: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00506f0a: ADD ESP,0x4
// 00506f0d: RET
