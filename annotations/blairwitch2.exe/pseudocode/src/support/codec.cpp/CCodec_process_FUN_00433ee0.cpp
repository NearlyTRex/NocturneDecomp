// Name: support_codec.cpp_CCodec_process_FUN_00433ee0
// Address: 00433ee0
// Address Range: [[00433ee0, 00433f43]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_process_FUN_00433ee0(CCodec *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_process_FUN_00433ee0(CCodec *this_ptr,void *istream,void *ostream)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = (**(code **)(*(int *)istream + 4))(istream);
    if (uVar1 == 0xffffffff) {
      return 1;
    }
    if ((int)uVar1 < 0) break;
    iVar2 = (**(code **)(*(int *)ostream + 4))(ostream,uVar1 & 0xff);
    if (iVar2 < 0) {
      iVar3 = (**(code **)(*(int *)istream + 8))(istream,uVar1);
      if ((iVar3 != 0) && (iVar2 == -1)) {
        return 2;
      }
      return 0;
    }
  }
  return 0;
}
