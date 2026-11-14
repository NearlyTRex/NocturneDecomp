// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060
// Address: 00555060
// Address Range: [[00555060, 00555120]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  int buffer_id;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  buffer_id = 0;
  do {
    iVar2 = buffer_id + 1;
    (*((this_ptr->base).vtable)->lockSample)(&this_ptr->base,buffer_id,unaff_EDI,unaff_ESI);
    buffer_id = iVar2;
  } while (iVar2 < 0x41);
  if (_DAT_0264a5d0 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5d0 + 8))();
    _DAT_0264a5d0 = (int *)0x0;
  }
  if (_DAT_0264a5cc != (int *)0x0) {
    (**(code **)(*_DAT_0264a5cc + 8))(_DAT_0264a5cc);
    _DAT_0264a5cc = (int *)0x0;
  }
  if (_DAT_0264a5d4 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5d4 + 8))(_DAT_0264a5d4);
    _DAT_0264a5d4 = (int *)0x0;
  }
  if (_DAT_0264a5c8 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5c8 + 8))(_DAT_0264a5c8);
    _DAT_0264a5c8 = (int *)0x0;
  }
  if (_DAT_0264a5c4 == (int *)0x0) {
    return (uint)(iVar1 != 0);
  }
  (**(code **)(*_DAT_0264a5c4 + 8))(_DAT_0264a5c4);
  _DAT_0264a5c4 = (int *)0x0;
  return (uint)(iVar1 != 0);
}
