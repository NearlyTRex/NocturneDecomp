// Name: crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b
// Address: 00564e6b
// Address Range: [[00564e6b, 00564e97]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_00564e6b(int *param_1)

#include "nocturne.h"

uint __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_00564e6b(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) & 3) != 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,0,1,2);
  return uVar2;
}
