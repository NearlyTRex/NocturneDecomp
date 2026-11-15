// Name: support_codec.cpp_CLZWCompress_process_FUN_00441190
// Address: 00441190
// Address Range: [[00441190, 00441288]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_process_FUN_00441190(CLZWCompress *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWCompress_process_FUN_00441190(CLZWCompress *this_ptr,void *istream,void *ostream)

{
  CLZWDictionary *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  this_ptr_00 = &this_ptr->dictionary;
  do {
    if (-1 < this_ptr->pending_code) {
      iVar2 = support_codec_cpp_FUN_00440ef0
                        (this_ptr_00,this_ptr->current_code,&(this_ptr->dictionary).bit_state,
                         ostream);
      if (iVar2 != 0) {
        if (iVar2 == -1) {
          return 2;
        }
        if (iVar2 != -2) {
          return 0;
        }
      }
      this_ptr->pending_code = -1;
      if ((this_ptr->prev_code < 0) ||
         (iVar3 = support_codec_cpp_CLZWDictionary_addNode_FUN_00440d70
                            (this_ptr_00,this_ptr->prev_char_code,this_ptr->prev_code), iVar3 == 0))
      {
        this_ptr->prev_code = this_ptr->current_code;
      }
      else {
        this_ptr->prev_code = -1;
      }
      iVar3 = this_ptr->pending_char_code;
      this_ptr->pending_char_code = -1;
      this_ptr->prev_char_code = iVar3;
      this_ptr->current_code = iVar3;
      if (iVar2 != 0) {
        return 2;
      }
    }
    uVar1 = (**(code **)(*(int *)istream + 4))(istream);
    if ((int)uVar1 < 0) {
      if (uVar1 != 0xffffffff) {
        return 0;
      }
      return 1;
    }
    uVar1 = (this_ptr->char_mask).dword & uVar1;
    iVar2 = support_codec_cpp_CLZWDictionary_findCode_FUN_00440d30
                      (this_ptr_00,uVar1,this_ptr->current_code);
    if (iVar2 < 0) {
      this_ptr->pending_char_code = uVar1;
      this_ptr->pending_code = this_ptr->current_code;
    }
    else {
      this_ptr->current_code = iVar2;
    }
  } while( true );
}
