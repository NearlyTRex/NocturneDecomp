// Name: engine_dosio.c_reopenFileStream_FUN_00481b50
// Address: 00481b50
// Address Range: [[00481b50, 00481c24]]
// Convention: __cdecl
// Signature: void engine_dosio.c_reopenFileStream_FUN_00481b50(char * directory_path, char * filename, byte file_mode_flags, ifstream * file_stream)
// Globals:
//   int g_DefaultStreamBufferSize = 0x1a4
// Function calls:
//   crt_file.c_create_directory_FUN_00600e10
//   crt_fstream.cpp_openFile_FUN_00600e85
//   crt_stdio.c_clear_and_preserve_state_FUN_00600e64
//   crt_stdio.c_fflush_FUN_00600e29
//   crt_unknown.c_FUN_00600ee4
//   engine_dosio.c_findFile_FUN_00481760
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0

#include "nocturne.h"

void __cdecl
engine_dosio_c_reopenFileStream_FUN_00481b50
          (char *directory_path,char *filename,byte file_mode_flags,ifstream *file_stream)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  byte in_stack_00000018;
  int in_stack_0000001c;
  char acStack_210 [256];
  char acStack_110 [260];
  
  crt_stdio_c_fflush_FUN_00600e29((FILE *)file_stream);
  crt_stdio_c_clear_and_preserve_state_FUN_00600e64
            ((FileEmbeddedData *)
             ((file_stream->fstreambase_core).filebuf.__unbuffered_get_area +
             *(int *)((int)(file_stream->fstreambase_core).layout_info + 4) + -0x38),0);
  engine_dosio_c_getRelativeFilePath_FUN_004816c0
            (&stack0xfffffde8,directory_path,(char *)file_stream);
  if ((in_stack_00000018 & 0x52) == 0) {
    iVar1 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdec);
    if (iVar1 != 0) {
      crt_fstream_cpp_openFile_FUN_00600e85
                (file_stream,acStack_110,in_stack_0000001c,g_DefaultStreamBufferSize);
      if (unaff_EBP != 0) {
        crt_unknown_c_FUN_00600ee4();
        return;
      }
    }
  }
  else {
    if (directory_path != (char *)0x0) {
      crt_file_c_create_directory_FUN_00600e10(directory_path);
    }
    crt_fstream_cpp_openFile_FUN_00600e85
              (file_stream,acStack_210,in_stack_0000001c,g_DefaultStreamBufferSize);
  }
  return;
}


// Assembly code:
// 00481b50: PUSH EBX
//   Label: engine_dosio.c_reopenFileStream_FUN_00481b50
// 00481b51: PUSH ESI
// 00481b52: PUSH EBP
// 00481b53: SUB ESP,0x214
// 00481b59: MOV ESI,dword ptr [ESP + 0x224]
//   XREF to: Stack[0x4] (READ)
// 00481b60: MOV EBX,dword ptr [ESP + 0x230]
//   XREF to: Stack[0x10] (READ)
// 00481b67: PUSH EBX
// 00481b68: CALL crt_stdio.c_fflush_FUN_00600e29
//   XREF to: 00600e29 (UNCONDITIONAL_CALL)
// 00481b6d: MOV EAX,dword ptr [EBX]
// 00481b6f: ADD ESP,0x4
// 00481b72: MOV EAX,dword ptr [EAX + 0x4]
// 00481b75: PUSH 0x0
// 00481b77: ADD EAX,EBX
// 00481b79: PUSH EAX
// 00481b7a: CALL crt_stdio.c_clear_and_preserve_state_FUN_00600e64
//   XREF to: 00600e64 (UNCONDITIONAL_CALL)
// 00481b7f: ADD ESP,0x8
// 00481b82: MOV EDX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x8] (READ)
// 00481b89: PUSH EDX
// 00481b8a: PUSH ESI
// 00481b8b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x220] (DATA)
// 00481b8f: PUSH EAX
// 00481b90: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 00481b95: ADD ESP,0xc
// 00481b98: TEST byte ptr [ESP + 0x22c],0x52
//   XREF to: Stack[0xc] (READ)
// 00481ba0: JZ 0x00481bd5
//   XREF to: 00481bd5 (CONDITIONAL_JUMP)
// 00481ba2: TEST ESI,ESI
// 00481ba4: JZ 0x00481baf
//   XREF to: 00481baf (CONDITIONAL_JUMP)
// 00481ba6: PUSH ESI
// 00481ba7: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 00481bac: ADD ESP,0x4
// 00481baf: MOV EAX,[0x00665c50]
//   Label: LAB_00481baf
//   XREF to: 00665c50 (READ)
// 00481bb4: PUSH EAX
// 00481bb5: MOV EBP,dword ptr [ESP + 0x230]
//   XREF to: Stack[0xc] (READ)
// 00481bbc: PUSH EBP
// 00481bbd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x220] (DATA)
// 00481bc1: PUSH EAX
// 00481bc2: PUSH EBX
// 00481bc3: CALL crt_fstream.cpp_openFile_FUN_00600e85
//   XREF to: 00600e85 (UNCONDITIONAL_CALL)
// 00481bc8: ADD ESP,0x10
// 00481bcb: ADD ESP,0x214
//   Label: LAB_00481bcb
// 00481bd1: POP EBP
// 00481bd2: POP ESI
// 00481bd3: POP EBX
// 00481bd4: RET
// 00481bd5: MOV EAX,ESP
//   Label: LAB_00481bd5
// 00481bd7: PUSH EAX
// 00481bd8: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 00481bdd: ADD ESP,0x4
// 00481be0: TEST EAX,EAX
// 00481be2: JZ 0x00481bcb
//   XREF to: 00481bcb (CONDITIONAL_JUMP)
// 00481be4: MOV EAX,[0x00665c50]
//   XREF to: 00665c50 (READ)
// 00481be9: PUSH EAX
// 00481bea: MOV ECX,dword ptr [ESP + 0x230]
//   XREF to: Stack[0xc] (READ)
// 00481bf1: PUSH ECX
// 00481bf2: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x120] (DATA)
// 00481bf9: PUSH EAX
// 00481bfa: PUSH EBX
// 00481bfb: CALL crt_fstream.cpp_openFile_FUN_00600e85
//   XREF to: 00600e85 (UNCONDITIONAL_CALL)
// 00481c00: ADD ESP,0x10
// 00481c03: MOV ESI,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x20] (READ)
// 00481c0a: TEST ESI,ESI
// 00481c0c: JZ 0x00481bcb
//   XREF to: 00481bcb (CONDITIONAL_JUMP)
// 00481c0e: PUSH ESI
// 00481c0f: ADD EBX,0x44
// 00481c12: PUSH EBX
// 00481c13: CALL crt_unknown.c_FUN_00600ee4
//   XREF to: 00600ee4 (UNCONDITIONAL_CALL)
// 00481c18: ADD ESP,0x8
// 00481c1b: ADD ESP,0x214
// 00481c21: POP EBP
// 00481c22: POP ESI
// 00481c23: POP EBX
// 00481c24: RET
