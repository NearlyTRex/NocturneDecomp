// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
// Address: 0054c3d0
// Address Range: [[0054c3d0, 0054c470]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0(CPackedBitmapSet * this_ptr, char * filename_format, int start_index, int end_index, char * base_path)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
          (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,
          char *base_path)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int in_stack_0000001c;
  char acStack_68 [88];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(this_ptr,(end_index - start_index) + 1);
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_68,base_path);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),&stack0xffffff94,
                 in_stack_0000001c);
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(this_ptr);
  return;
}


// Assembly code:
// 0054c3d0: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
// 0054c3d1: PUSH ESI
// 0054c3d2: PUSH EDI
// 0054c3d3: PUSH EBP
// 0054c3d4: SUB ESP,0x64
// 0054c3d7: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 0054c3db: MOV ESI,dword ptr [ESP + 0x80]
//   XREF to: Stack[0xc] (READ)
// 0054c3e2: MOV EBP,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x10] (READ)
// 0054c3e9: PUSH EDI
// 0054c3ea: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
// 0054c3ef: ADD ESP,0x4
// 0054c3f2: PUSH EDI
// 0054c3f3: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
//   XREF to: 0054bcd0 (UNCONDITIONAL_CALL)
// 0054c3f8: MOV EAX,EBP
// 0054c3fa: SUB EAX,ESI
// 0054c3fc: ADD ESP,0x4
// 0054c3ff: INC EAX
// 0054c400: PUSH EAX
// 0054c401: PUSH EDI
// 0054c402: MOV EBX,ESI
// 0054c404: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
//   XREF to: 0054bdb0 (UNCONDITIONAL_CALL)
// 0054c409: ADD ESP,0x8
// 0054c40c: CMP ESI,EBP
// 0054c40e: JG 0x0054c460
//   XREF to: 0054c460 (CONDITIONAL_JUMP)
// 0054c410: LEA EAX,[ESI*0x8 + 0x0]
// 0054c417: ADD EAX,ESI
// 0054c419: SHL EAX,0x2
// 0054c41c: MOV ESI,EAX
// 0054c41e: NEG ESI
// 0054c420: ADD ESI,EAX
// 0054c422: PUSH EBX
//   Label: LAB_0054c422
// 0054c423: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 0054c42a: PUSH EDX
// 0054c42b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 0054c42f: PUSH EAX
// 0054c430: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c435: ADD ESP,0xc
// 0054c438: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x14] (READ)
// 0054c43f: PUSH ECX
// 0054c440: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x74] (DATA)
// 0054c444: PUSH EAX
// 0054c445: MOV EAX,dword ptr [EDI + 0x4]
// 0054c448: ADD EAX,ESI
// 0054c44a: PUSH EAX
// 0054c44b: INC EBX
// 0054c44c: CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
//   XREF to: 0054b860 (UNCONDITIONAL_CALL)
// 0054c451: ADD ESI,0x24
// 0054c454: ADD ESP,0xc
// 0054c457: CMP EBX,EBP
// 0054c459: JLE 0x0054c422
//   XREF to: 0054c422 (CONDITIONAL_JUMP)
// 0054c45b: LEA EAX,[EAX]
// 0054c45e: MOV ECX,ECX
// 0054c460: PUSH EDI
//   Label: LAB_0054c460
// 0054c461: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
//   XREF to: 0054bd00 (UNCONDITIONAL_CALL)
// 0054c466: ADD ESP,0x4
// 0054c469: ADD ESP,0x64
// 0054c46c: POP EBP
// 0054c46d: POP EDI
// 0054c46e: POP ESI
// 0054c46f: POP EBX
// 0054c470: RET
