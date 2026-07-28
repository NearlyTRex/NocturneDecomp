// Name: support_codec.cpp_CLZWCompress_process_FUN_004398c0
// Address: 004398c0
// Address Range: [[004398c0, 0043999d]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_process_FUN_004398c0(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWCompress_process_FUN_004398c0(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

{
  CLZWDictionary *this_ptr_00;
  uint uVar1;
  int iVar2;
  byte local_14 [4];
  
  this_ptr_00 = &this_ptr->dictionary;
LAB_004398d8:
  do {
    if (*byte_count < 1) {
LAB_004398de:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_00564c53(istream,(char *)local_14);
      if (*(int *)((istream->_ios).padding +
                  ((istream->_istream_core).layout_info)->offset_to_base + -0x21) != 0)
      goto LAB_004398de;
      *byte_count = *byte_count + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    uVar1 = (this_ptr->char_mask).dword & uVar1;
    iVar2 = support_codec_cpp_CLZWDictionary_findCode_FUN_004394b0
                      (this_ptr_00,uVar1,this_ptr->current_code);
    if (-1 < iVar2) {
      this_ptr->current_code = iVar2;
      goto LAB_004398d8;
    }
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
              (this_ptr_00,this_ptr->current_code,&(this_ptr->dictionary).bit_state,ostream);
    if (-1 < this_ptr->prev_code) {
      iVar2 = support_codec_cpp_CLZWDictionary_addNode_FUN_004394f0
                        (this_ptr_00,this_ptr->prev_char_code,this_ptr->prev_code);
      if (iVar2 != 0) {
        this_ptr->prev_code = -1;
        this_ptr->current_code = uVar1;
        this_ptr->prev_char_code = uVar1;
        goto LAB_004398d8;
      }
    }
    this_ptr->prev_code = this_ptr->current_code;
    this_ptr->current_code = uVar1;
    this_ptr->prev_char_code = uVar1;
  } while( true );
}
