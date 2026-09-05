// Name: support_codec.cpp_CLZWCompress_process_FUN_0043f360
// Address: 0043f360
// MANUAL RECONSTRUCTION
// Address Range: [[0043f360, 0043f43d]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_process_FUN_0043f360(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

#include "nocturne.h"
#include "core/stream_compat.h"

int __cdecl support_codec_cpp_CLZWCompress_process_FUN_0043f360(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

{
  uint uVar1;
  int iVar2;
  int iVar1;
  uint search_code;
  byte local_14 [4];
  CLZWDictionary *this_ptr_00;
  
  this_ptr_00 = &this_ptr->dictionary;
LAB_0043f378:
  do {
    if (*byte_count < 1) {
LAB_0043f37e:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_005ff245(istream,(char *)local_14);
      if (std_istream_from(istream).fail())
      goto LAB_0043f37e;
      *byte_count = *byte_count + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    search_code = (this_ptr->char_mask).dword & uVar1;
    iVar2 = support_codec_cpp_CLZWDictionary_findCode_FUN_0043ef50
                      (this_ptr_00,search_code,this_ptr->current_code);
    if (-1 < iVar2) {
      this_ptr->current_code = iVar2;
      goto LAB_0043f378;
    }
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
              (this_ptr_00,this_ptr->current_code,&(this_ptr->dictionary).bit_state,ostream);
    if (-1 < this_ptr->prev_code) {
      iVar1 = support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
                        (this_ptr_00,this_ptr->prev_char_code,this_ptr->prev_code);
      if (iVar1 != 0) {
        this_ptr->prev_code = -1;
        this_ptr->current_code = search_code;
        this_ptr->prev_char_code = search_code;
        goto LAB_0043f378;
      }
    }
    this_ptr->prev_code = this_ptr->current_code;
    this_ptr->current_code = search_code;
    this_ptr->prev_char_code = search_code;
  } while( true );
}
