// Name: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_00506620
// Address: 00506620
// Address Range: [[00506620, 00506663]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_00506620(CMirrorHack *this_ptr,SInteractionInfo *out_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_00506620(CMirrorHack *this_ptr,SInteractionInfo *out_info)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00409d20(this_ptr,out_info);
  *(uint *)out_info = 1;
  uVar1 = *(uint *)&this_ptr->field_0x2d4;
  *(uint *)(out_info + 0x10) = 0x40c90fdb;
  *(uint *)(out_info + 0x14) = 0xc0c90fdb;
  *(uint *)(out_info + 8) = 0xbf800000;
  *(uint *)(out_info + 0xc) = 0;
  *(uint *)(out_info + 4) = uVar1;
  return;
}
