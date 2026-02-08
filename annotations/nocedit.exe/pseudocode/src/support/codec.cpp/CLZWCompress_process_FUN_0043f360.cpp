// Name: support_codec.cpp_CLZWCompress_process_FUN_0043f360
// Address: 0043f360
// Address Range: [[0043f360, 0043f43d]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_process_FUN_0043f360 (CLZWCompress *this_ptr,_FILE *input_file,int byte_count,_FILE *output_file)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWCompress_process_FUN_0043f360
          (CLZWCompress *this_ptr,_FILE *input_file,int byte_count,_FILE *output_file)

{
  CLZWDictionary *this_ptr_00;
  uint uVar1;
  int iVar2;
  byte local_14 [4];
  
  this_ptr_00 = &this_ptr->dictionary;
LAB_0043f378:
  do {
    if (*(int *)byte_count < 1) {
LAB_0043f37e:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_005ff245((istream *)input_file,(char *)local_14);
      if (*(int *)((int)&input_file->_handle + *(int *)(input_file->_ptr + 4)) != 0)
      goto LAB_0043f37e;
      *(int *)byte_count = *(int *)byte_count + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    uVar1 = this_ptr->char_mask & uVar1;
    iVar2 = support_codec_cpp_CLZWDictionary_findCode_FUN_0043ef50
                      (this_ptr_00,uVar1,this_ptr->current_code);
    if (-1 < iVar2) {
      this_ptr->current_code = iVar2;
      goto LAB_0043f378;
    }
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
              (this_ptr_00,this_ptr->current_code,&(this_ptr->dictionary).bit_state,output_file);
    if (-1 < this_ptr->prev_code) {
      iVar2 = support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
                        (this_ptr_00,this_ptr->prev_char_code,this_ptr->prev_code);
      if (iVar2 != 0) {
        this_ptr->prev_code = -1;
        this_ptr->current_code = uVar1;
        this_ptr->prev_char_code = uVar1;
        goto LAB_0043f378;
      }
    }
    this_ptr->prev_code = this_ptr->current_code;
    this_ptr->current_code = uVar1;
    this_ptr->prev_char_code = uVar1;
  } while( true );
}
