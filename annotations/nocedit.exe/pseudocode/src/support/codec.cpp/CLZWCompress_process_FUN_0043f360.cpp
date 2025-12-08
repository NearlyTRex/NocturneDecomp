// Name: support_codec.cpp_CLZWCompress_process_FUN_0043f360
// Address: 0043f360
// Address Range: [[0043f360, 0043f43d]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWCompress_process_FUN_0043f360(CLZWCompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file)

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
      crt_stdio_c_fgetc_outptr_FUN_005ff245(input_file,&stack0xffffffec);
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
