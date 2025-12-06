// Name: shape_meshlod.cpp_CLodVert_copy_FUN_0051ee70
// Address: 0051ee70
// Address Range: [[0051ee70, 0051ee95]]
// Convention: __cdecl
// Signature: CLodVert * shape_meshlod.cpp_CLodVert_copy_FUN_0051ee70(CLodVert * destination, CLodVert * source)

#include "nocturne.h"

CLodVert * __cdecl
shape_meshlod_cpp_CLodVert_copy_FUN_0051ee70(CLodVert *destination,CLodVert *source)

{
  int iVar1;
  CLodVert *pCVar2;
  
  pCVar2 = destination;
  for (iVar1 = 0x131; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar2->position).x = (source->position).x;
    source = (CLodVert *)&(source->position).y;
    pCVar2 = (CLodVert *)&(pCVar2->position).y;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)&(pCVar2->position).x = *(byte *)&(source->position).x;
    source = (CLodVert *)((int)&(source->position).x + 1);
    pCVar2 = (CLodVert *)((int)&(pCVar2->position).x + 1);
  }
  return destination;
}
