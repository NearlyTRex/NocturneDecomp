// Name: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
// Address: 004a39e0
// Address Range: [[004a39e0, 004a3b81]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)
// Cross-references:
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd77f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba00d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b87b2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc682 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_dosio.c_getFullPath_FUN_004820c0
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
          (CStrList *this_ptr,char *base_path,char *search_path)

{
  CStrList *this_ptr_00;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000014;
  char cVar1;
  undefined4 in_stack_fffff7f0;
  CFileFinder CStack_80c;
  char acStack_608 [4];
  char acStack_604 [260];
  char acStack_500 [8];
  char acStack_4f8 [240];
  char local_408 [4];
  char acStack_404 [4];
  char acStack_400 [4];
  char acStack_3fc [12];
  char acStack_3f0 [236];
  char acStack_304 [4];
  char acStack_300 [4];
  char acStack_2fc [244];
  char local_208 [4];
  char acStack_204 [4];
  char acStack_200 [4];
  char acStack_1fc [12];
  char acStack_1f0 [232];
  char local_108 [4];
  char acStack_104 [252];
  char local_8 [4];
  
  this_ptr_00 = this_ptr;
  engine_dosio_c_splitPath_FUN_00481f20(base_path,local_8,local_108,local_208,local_408);
  engine_dosio_c_makePath_FUN_00481f50(acStack_304,(char *)0x0,acStack_104,acStack_204,acStack_404);
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000014,(char *)0x0,(char *)0x0,acStack_200,acStack_400);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_500,(char *)&this_ptr,acStack_2fc,acStack_1fc,acStack_3fc);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffff7e8);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)&stack0xfffff7ec,acStack_4f8);
  cVar1 = (char)in_stack_fffff7f0;
  while (cVar1 != '\0') {
    engine_dosio_c_splitPath_FUN_00481f20
              (&stack0xfffff7f0,(char *)0x0,(char *)0x0,acStack_1f0,acStack_3f0);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_608,&stack0x00000000,acStack_300,acStack_200,acStack_400);
    engine_dosio_c_getFullPath_FUN_004820c0((char *)&CStack_80c.timestamp,acStack_604);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr_00,(char *)&CStack_80c.attributes);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffff7ec);
    cVar1 = (char)in_stack_fffff7f0;
  }
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)&stack0xfffff7f0);
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_80c,0);
  return;
}


// Assembly code:
// 004a39e0: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
// 004a39e1: SUB ESP,0x824
// 004a39e7: MOV EBX,dword ptr [ESP + 0x82c]
//   XREF to: Stack[0x4] (READ)
// 004a39ee: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0x408] (DATA)
// 004a39f5: PUSH EAX
// 004a39f6: LEA EAX,[ESP + 0x624]
//   XREF to: Stack[-0x208] (DATA)
// 004a39fd: PUSH EAX
// 004a39fe: LEA EAX,[ESP + 0x728]
//   XREF to: Stack[-0x108] (DATA)
// 004a3a05: PUSH EAX
// 004a3a06: LEA EAX,[ESP + 0x82c]
//   XREF to: Stack[-0x8] (DATA)
// 004a3a0d: PUSH EAX
// 004a3a0e: MOV EDX,dword ptr [ESP + 0x840]
//   XREF to: Stack[0x8] (READ)
// 004a3a15: PUSH EDX
// 004a3a16: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a3a1b: ADD ESP,0x14
// 004a3a1e: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0x408] (DATA)
// 004a3a25: PUSH EAX
// 004a3a26: LEA EAX,[ESP + 0x624]
//   XREF to: Stack[-0x208] (DATA)
// 004a3a2d: PUSH EAX
// 004a3a2e: LEA EAX,[ESP + 0x728]
//   XREF to: Stack[-0x108] (DATA)
// 004a3a35: PUSH EAX
// 004a3a36: PUSH 0x0
// 004a3a38: LEA EAX,[ESP + 0x530]
//   XREF to: Stack[-0x308] (DATA)
// 004a3a3f: PUSH EAX
// 004a3a40: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a3a45: ADD ESP,0x14
// 004a3a48: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0x408] (DATA)
// 004a3a4f: PUSH EAX
// 004a3a50: LEA EAX,[ESP + 0x624]
//   XREF to: Stack[-0x208] (DATA)
// 004a3a57: PUSH EAX
// 004a3a58: PUSH 0x0
// 004a3a5a: PUSH 0x0
// 004a3a5c: MOV ECX,dword ptr [ESP + 0x844]
//   XREF to: Stack[0xc] (READ)
// 004a3a63: PUSH ECX
// 004a3a64: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a3a69: ADD ESP,0x14
// 004a3a6c: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0x408] (DATA)
// 004a3a73: PUSH EAX
// 004a3a74: LEA EAX,[ESP + 0x624]
//   XREF to: Stack[-0x208] (DATA)
// 004a3a7b: PUSH EAX
// 004a3a7c: LEA EAX,[ESP + 0x528]
//   XREF to: Stack[-0x308] (DATA)
// 004a3a83: PUSH EAX
// 004a3a84: LEA EAX,[ESP + 0x82c]
//   XREF to: Stack[-0x8] (DATA)
// 004a3a8b: PUSH EAX
// 004a3a8c: LEA EAX,[ESP + 0x32c]
//   XREF to: Stack[-0x50c] (DATA)
// 004a3a93: PUSH EAX
// 004a3a94: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a3a99: ADD ESP,0x14
// 004a3a9c: MOV EAX,ESP
// 004a3a9e: PUSH EAX
// 004a3a9f: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 004a3aa4: ADD ESP,0x4
// 004a3aa7: LEA EAX,[ESP + 0x31c]
//   XREF to: Stack[-0x50c] (DATA)
// 004a3aae: PUSH EAX
// 004a3aaf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x828] (DATA)
// 004a3ab3: PUSH EAX
// 004a3ab4: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 004a3ab9: ADD ESP,0x8
// 004a3abc: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x828] (DATA)
// 004a3ac0: JZ 0x004a3b60
//   XREF to: 004a3b60 (CONDITIONAL_JUMP)
// 004a3ac6: LEA EAX,[ESP + 0x420]
//   Label: LAB_004a3ac6
//   XREF to: Stack[-0x408] (DATA)
// 004a3acd: PUSH EAX
// 004a3ace: LEA EAX,[ESP + 0x624]
//   XREF to: Stack[-0x208] (DATA)
// 004a3ad5: PUSH EAX
// 004a3ad6: PUSH 0x0
// 004a3ad8: PUSH 0x0
// 004a3ada: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x828] (DATA)
// 004a3ade: PUSH EAX
// 004a3adf: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a3ae4: ADD ESP,0x14
// 004a3ae7: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0x408] (DATA)
// 004a3aee: PUSH EAX
// 004a3aef: LEA EAX,[ESP + 0x624]
//   XREF to: Stack[-0x208] (DATA)
// 004a3af6: PUSH EAX
// 004a3af7: LEA EAX,[ESP + 0x528]
//   XREF to: Stack[-0x308] (DATA)
// 004a3afe: PUSH EAX
// 004a3aff: LEA EAX,[ESP + 0x82c]
//   XREF to: Stack[-0x8] (DATA)
// 004a3b06: PUSH EAX
// 004a3b07: LEA EAX,[ESP + 0x228]
//   XREF to: Stack[-0x610] (DATA)
// 004a3b0e: PUSH EAX
// 004a3b0f: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a3b14: ADD ESP,0x14
// 004a3b17: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x610] (DATA)
// 004a3b1e: PUSH EAX
// 004a3b1f: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x714] (DATA)
// 004a3b26: PUSH EAX
// 004a3b27: CALL engine_dosio.c_getFullPath_FUN_004820c0
//   XREF to: 004820c0 (UNCONDITIONAL_CALL)
// 004a3b2c: ADD ESP,0x8
// 004a3b2f: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x714] (DATA)
// 004a3b36: PUSH EAX
// 004a3b37: PUSH EBX
// 004a3b38: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004a3b3d: ADD ESP,0x8
// 004a3b40: MOV EAX,ESP
// 004a3b42: PUSH EAX
// 004a3b43: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 004a3b48: ADD ESP,0x4
// 004a3b4b: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x828] (DATA)
// 004a3b4f: JNZ 0x004a3ac6
//   XREF to: 004a3ac6 (CONDITIONAL_JUMP)
// 004a3b55: LEA EAX,[EAX]
// 004a3b5b: LEA EDX,[EDX]
// 004a3b5e: MOV EBX,EBX
// 004a3b60: MOV EAX,ESP
//   Label: LAB_004a3b60
// 004a3b62: PUSH EAX
// 004a3b63: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 004a3b68: ADD ESP,0x4
// 004a3b6b: PUSH 0x0
// 004a3b6d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x828] (DATA)
// 004a3b71: PUSH EAX
// 004a3b72: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004a3b77: ADD ESP,0x8
// 004a3b7a: ADD ESP,0x824
// 004a3b80: POP EBX
// 004a3b81: RET
