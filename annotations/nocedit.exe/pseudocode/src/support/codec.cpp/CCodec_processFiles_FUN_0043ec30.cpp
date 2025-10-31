// Name: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// Address: 0043ec30
// Address Range: [[0043ec30, 0043ed41]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processFiles_FUN_0043ec30(CCodec * this_ptr, char * input_file_path, char * output_file_path)
// Globals:
//   int g_DefaultStreamBufferSize = 0x1a4
// Function calls:
//   crt_fstream.cpp_ifstream_constructor_FUN_005ff664
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   crt_fstream.cpp_ofstream_constructor_FUN_005ff710
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processFiles_FUN_0043ec30
          (CCodec *this_ptr,char *input_file_path,char *output_file_path)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  void *d2;
  CCodec *in_stack_fffffef4;
  char *in_stack_fffffef8;
  char *in_stack_fffffefc;
  char *in_stack_ffffff00;
  CCodec *pCStack_a8;
  undefined1 local_90 [12];
  FILE FStack_84;
  FILE aFStack_60 [2];
  int iStack_28;
  
  crt_fstream_cpp_ifstream_constructor_FUN_005ff664
            ((ifstream *)&stack0xfffffef0,0,(int)input_file_path,(char *)0x101,
             g_DefaultStreamBufferSize);
  if (pCStack_a8 == (CCodec *)0x0) {
    d2 = (void *)g_DefaultStreamBufferSize;
    crt_fstream_cpp_ofstream_constructor_FUN_005ff710
              ((ofstream *)(local_90 + 4),0,in_stack_00000010,0x112,
               (char *)g_DefaultStreamBufferSize,(SIZE_T)in_stack_fffffef4);
    if (iStack_28 == 0) {
      pCStack_a8 = this_ptr;
      (*this_ptr->vtable->init)(this_ptr);
      aFStack_60[0]._bufsize = 0x7fffffff;
      iVar1 = (*this_ptr->vtable->process)
                        (this_ptr,(FILE *)&stack0xfffffefc,(int)&aFStack_60[0]._bufsize,&FStack_84);
      if (iVar1 != 0) {
        (*this_ptr->vtable->finalize)(this_ptr,aFStack_60);
      }
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)local_90,0,(uint)d2,(uint)pCStack_a8,(uint)in_stack_fffffef8);
    }
    else {
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                ((ofstream *)(local_90 + 8),0,(uint)in_stack_fffffef8,(uint)in_stack_fffffefc,
                 (uint)in_stack_ffffff00);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
    pCStack_a8 = in_stack_fffffef4;
  }
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856
            ((ifstream *)&stack0xfffffef4,0,(uint)pCStack_a8,(uint)in_stack_fffffef8,
             (uint)in_stack_fffffefc);
  return iVar1;
}


// Assembly code:
// 0043ec30: PUSH EBX
//   Label: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
// 0043ec31: PUSH ESI
// 0043ec32: PUSH EDI
// 0043ec33: PUSH EBP
// 0043ec34: SUB ESP,0x100
// 0043ec3a: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 0043ec41: MOV EDX,dword ptr [0x00665c50]
//   XREF to: 00665c50 (READ)
// 0043ec47: PUSH EDX
// 0043ec48: PUSH 0x101
// 0043ec4d: MOV ECX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 0043ec54: PUSH ECX
// 0043ec55: PUSH 0x0
// 0043ec57: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x110] (DATA)
// 0043ec5b: PUSH EAX
// 0043ec5c: CALL crt_fstream.cpp_ifstream_constructor_FUN_005ff664
//   XREF to: 005ff664 (UNCONDITIONAL_CALL)
// 0043ec61: ADD ESP,0x14
// 0043ec64: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0xac] (READ)
// 0043ec68: TEST ESI,ESI
// 0043ec6a: JNZ 0x0043ed1d
//   XREF to: 0043ed1d (CONDITIONAL_JUMP)
// 0043ec70: MOV EDI,dword ptr [0x00665c50]
//   XREF to: 00665c50 (READ)
// 0043ec76: PUSH EDI
// 0043ec77: PUSH 0x112
// 0043ec7c: MOV EBP,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 0043ec83: PUSH EBP
// 0043ec84: PUSH ESI
// 0043ec85: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x90] (DATA)
// 0043ec8c: PUSH EAX
// 0043ec8d: CALL crt_fstream.cpp_ofstream_constructor_FUN_005ff710
//   XREF to: 005ff710 (UNCONDITIONAL_CALL)
// 0043ec92: ADD ESP,0x14
// 0043ec95: CMP dword ptr [ESP + 0xe0],0x0
//   XREF to: Stack[-0x30] (READ)
// 0043ec9d: JNZ 0x0043ed27
//   XREF to: 0043ed27 (CONDITIONAL_JUMP)
// 0043eca3: PUSH EBX
// 0043eca4: MOV EAX,dword ptr [EBX]
// 0043eca6: CALL dword ptr [EAX + 0x4]
// 0043eca9: ADD ESP,0x4
// 0043ecac: LEA EAX,[ESP + 0xc4]
// 0043ecb3: PUSH EAX
// 0043ecb4: LEA EAX,[ESP + 0x100]
// 0043ecbb: MOV EDX,0x7fffffff
// 0043ecc0: PUSH EAX
// 0043ecc1: LEA EAX,[ESP + 0x4c]
// 0043ecc5: MOV dword ptr [ESP + 0x104],EDX
// 0043eccc: PUSH EAX
// 0043eccd: MOV EDX,dword ptr [EBX]
// 0043eccf: PUSH EBX
// 0043ecd0: CALL dword ptr [EDX + 0x8]
// 0043ecd3: ADD ESP,0x10
// 0043ecd6: MOV ESI,EAX
// 0043ecd8: TEST EAX,EAX
// 0043ecda: JZ 0x0043eced
//   XREF to: 0043eced (CONDITIONAL_JUMP)
// 0043ecdc: LEA EAX,[ESP + 0xc4]
// 0043ece3: PUSH EAX
// 0043ece4: MOV EDX,dword ptr [EBX]
// 0043ece6: PUSH EBX
// 0043ece7: CALL dword ptr [EDX + 0xc]
// 0043ecea: ADD ESP,0x8
// 0043eced: PUSH 0x0
//   Label: LAB_0043eced
// 0043ecef: LEA EAX,[ESP + 0x84]
// 0043ecf6: PUSH EAX
// 0043ecf7: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 0043ecfc: ADD ESP,0x8
// 0043ecff: PUSH 0x0
// 0043ed01: LEA EAX,[ESP + 0x4]
// 0043ed05: PUSH EAX
// 0043ed06: MOV EBX,ESI
// 0043ed08: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   Label: LAB_0043ed08
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 0043ed0d: ADD ESP,0x8
// 0043ed10: MOV EAX,EBX
// 0043ed12: ADD ESP,0x100
// 0043ed18: POP EBP
// 0043ed19: POP EDI
// 0043ed1a: POP ESI
// 0043ed1b: POP EBX
// 0043ed1c: RET
// 0043ed1d: XOR EBX,EBX
//   Label: LAB_0043ed1d
// 0043ed1f: PUSH EBX
// 0043ed20: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x110] (DATA)
// 0043ed24: PUSH EAX
// 0043ed25: JMP 0x0043ed08
//   XREF to: 0043ed08 (UNCONDITIONAL_JUMP)
// 0043ed27: PUSH ESI
//   Label: LAB_0043ed27
// 0043ed28: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x90] (DATA)
// 0043ed2f: PUSH EAX
// 0043ed30: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 0043ed35: ADD ESP,0x8
// 0043ed38: PUSH ESI
// 0043ed39: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x110] (DATA)
// 0043ed3d: PUSH EAX
// 0043ed3e: XOR EBX,EBX
// 0043ed40: JMP 0x0043ed08
//   XREF to: 0043ed08 (UNCONDITIONAL_JUMP)
