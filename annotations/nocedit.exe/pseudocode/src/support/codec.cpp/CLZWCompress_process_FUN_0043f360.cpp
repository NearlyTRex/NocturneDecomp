// Name: support_codec.cpp_CLZWCompress_process_FUN_0043f360
// Address: 0043f360
// Address Range: [[0043f360, 0043f43d]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWCompress_process_FUN_0043f360(CLZWCompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file)
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e108c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fgetc_FUN_005ff245
//   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
//   support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
//   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWCompress_process_FUN_0043f360
          (CLZWCompress *this_ptr,FILE *input_file,int byte_count,FILE *output_file)

{
  CLZWDictionary *this_ptr_00;
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  FILE *in_stack_00000018;
  SBitBuffer *bit_buffer;
  uint uVar3;
  
  this_ptr_00 = &this_ptr->dictionary;
LAB_0043f378:
  do {
    if (*(int *)byte_count < 1) {
LAB_0043f37e:
      uVar1 = 0xffffffff;
      uVar3 = unaff_EBP;
    }
    else {
      crt_stdio_c_fgetc_FUN_005ff245(input_file,&stack0xffffffec);
      if (*(int *)(byte_count + *(int *)(*(int *)byte_count + 4) + 0x10) != 0) goto LAB_0043f37e;
      *(int *)byte_count = *(int *)byte_count + -1;
      uVar1 = unaff_EBP & 0xff;
      uVar3 = unaff_EBP;
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    uVar1 = this_ptr->char_mask & uVar1;
    bit_buffer = (SBitBuffer *)this_ptr->current_code;
    iVar2 = support_codec_cpp_CLZWDictionary_findCode_FUN_0043ef50
                      (this_ptr_00,uVar1,(int)bit_buffer);
    if (-1 < iVar2) {
      this_ptr->current_code = iVar2;
      unaff_EBP = uVar3;
      goto LAB_0043f378;
    }
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
              (this_ptr_00,this_ptr->current_code,bit_buffer,in_stack_00000018);
    unaff_EBP = this_ptr->prev_code;
    if (-1 < (int)unaff_EBP) {
      iVar2 = support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
                        (this_ptr_00,this_ptr->prev_char_code,unaff_EBP);
      uVar3 = unaff_EBP;
      if (iVar2 != 0) {
        this_ptr->prev_code = -1;
        this_ptr->current_code = uVar1;
        this_ptr->prev_char_code = uVar1;
        goto LAB_0043f378;
      }
    }
    unaff_EBP = uVar3;
    this_ptr->prev_code = this_ptr->current_code;
    this_ptr->current_code = uVar1;
    this_ptr->prev_char_code = uVar1;
  } while( true );
}


// Assembly code:
// 0043f360: PUSH EBX
//   Label: support_codec.cpp_CLZWCompress_process_FUN_0043f360
// 0043f361: PUSH ESI
// 0043f362: PUSH EDI
// 0043f363: PUSH EBP
// 0043f364: SUB ESP,0x8
// 0043f367: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043f36b: LEA EAX,[EBX + 0x18]
// 0043f36e: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043f372: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0043f375: LEA EDI,[EBX + 0x4]
// 0043f378: CMP dword ptr [EBP],0x1
//   Label: LAB_0043f378
// 0043f37c: JGE 0x0043f3a7
//   XREF to: 0043f3a7 (CONDITIONAL_JUMP)
// 0043f37e: MOV EAX,0xffffffff
//   Label: LAB_0043f37e
// 0043f383: TEST EAX,EAX
//   Label: LAB_0043f383
// 0043f385: JL 0x0043f431
//   XREF to: 0043f431 (CONDITIONAL_JUMP)
// 0043f38b: MOV ESI,dword ptr [EBX + 0x28]
// 0043f38e: AND ESI,EAX
// 0043f390: MOV EAX,dword ptr [EBX + 0x30]
// 0043f393: PUSH EAX
// 0043f394: PUSH ESI
// 0043f395: PUSH EDI
// 0043f396: CALL support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
//   XREF to: 0043ef50 (UNCONDITIONAL_CALL)
// 0043f39b: ADD ESP,0xc
// 0043f39e: TEST EAX,EAX
// 0043f3a0: JL 0x0043f3de
//   XREF to: 0043f3de (CONDITIONAL_JUMP)
// 0043f3a2: MOV dword ptr [EBX + 0x30],EAX
// 0043f3a5: JMP 0x0043f378
//   XREF to: 0043f378 (UNCONDITIONAL_JUMP)
// 0043f3a7: LEA EAX,[ESP + 0x4]
//   Label: LAB_0043f3a7
//   XREF to: Stack[-0x14] (DATA)
// 0043f3ab: PUSH EAX
// 0043f3ac: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0043f3b0: PUSH ECX
// 0043f3b1: CALL crt_stdio.c_fgetc_FUN_005ff245
//   XREF to: 005ff245 (UNCONDITIONAL_CALL)
// 0043f3b6: ADD ESP,0x8
// 0043f3b9: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043f3bd: MOV EAX,dword ptr [EAX]
// 0043f3bf: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043f3c3: MOV EDX,dword ptr [EAX + 0x4]
// 0043f3c6: LEA EAX,[ESI + EDX*0x1]
// 0043f3c9: CMP dword ptr [EAX + 0x10],0x0
// 0043f3cd: JNZ 0x0043f37e
//   XREF to: 0043f37e (CONDITIONAL_JUMP)
// 0043f3cf: MOV ESI,dword ptr [EBP]
// 0043f3d2: DEC ESI
// 0043f3d3: XOR EAX,EAX
// 0043f3d5: MOV dword ptr [EBP],ESI
// 0043f3d8: MOV AL,byte ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0043f3dc: JMP 0x0043f383
//   XREF to: 0043f383 (UNCONDITIONAL_JUMP)
// 0043f3de: MOV EDX,dword ptr [ESP + 0x28]
//   Label: LAB_0043f3de
//   XREF to: Stack[0x10] (READ)
// 0043f3e2: PUSH EDX
// 0043f3e3: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0043f3e7: PUSH ECX
// 0043f3e8: MOV EAX,dword ptr [EBX + 0x30]
// 0043f3eb: PUSH EAX
// 0043f3ec: PUSH EDI
// 0043f3ed: CALL support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
//   XREF to: 0043f170 (UNCONDITIONAL_CALL)
// 0043f3f2: MOV EDX,dword ptr [EBX + 0x34]
// 0043f3f5: ADD ESP,0x10
// 0043f3f8: TEST EDX,EDX
// 0043f3fa: JL 0x0043f420
//   XREF to: 0043f420 (CONDITIONAL_JUMP)
// 0043f3fc: PUSH EDX
// 0043f3fd: MOV EAX,dword ptr [EBX + 0x2c]
// 0043f400: PUSH EAX
// 0043f401: PUSH EDI
// 0043f402: CALL support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
//   XREF to: 0043ef90 (UNCONDITIONAL_CALL)
// 0043f407: ADD ESP,0xc
// 0043f40a: TEST EAX,EAX
// 0043f40c: JZ 0x0043f420
//   XREF to: 0043f420 (CONDITIONAL_JUMP)
// 0043f40e: MOV dword ptr [EBX + 0x34],0xffffffff
// 0043f415: MOV dword ptr [EBX + 0x30],ESI
// 0043f418: MOV dword ptr [EBX + 0x2c],ESI
// 0043f41b: JMP 0x0043f378
//   XREF to: 0043f378 (UNCONDITIONAL_JUMP)
// 0043f420: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_0043f420
// 0043f423: MOV dword ptr [EBX + 0x34],EAX
// 0043f426: MOV dword ptr [EBX + 0x30],ESI
// 0043f429: MOV dword ptr [EBX + 0x2c],ESI
// 0043f42c: JMP 0x0043f378
//   XREF to: 0043f378 (UNCONDITIONAL_JUMP)
// 0043f431: MOV EAX,0x1
//   Label: LAB_0043f431
// 0043f436: ADD ESP,0x8
// 0043f439: POP EBP
// 0043f43a: POP EDI
// 0043f43b: POP ESI
// 0043f43c: POP EBX
// 0043f43d: RET
