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
    *(undefined1 *)&(pCVar2->position).x = *(undefined1 *)&(source->position).x;
    source = (CLodVert *)((int)&(source->position).x + 1);
    pCVar2 = (CLodVert *)((int)&(pCVar2->position).x + 1);
  }
  return destination;
}


// Assembly code:
// 0051ee70: PUSH ESI
//   Label: shape_meshlod.cpp_CLodVert_copy_FUN_0051ee70
// 0051ee71: PUSH EDI
// 0051ee72: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051ee76: MOV ECX,0x4c4
// 0051ee7b: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0051ee7f: MOV EDI,EDX
// 0051ee81: PUSH EDI
// 0051ee82: MOV EAX,ECX
// 0051ee84: SHR ECX,0x2
// 0051ee87: MOVSD.REP ES:EDI,ESI
// 0051ee89: MOV CL,AL
// 0051ee8b: AND CL,0x3
// 0051ee8e: MOVSB.REP ES:EDI,ESI
// 0051ee90: POP EDI
// 0051ee91: MOV EAX,EDX
// 0051ee93: POP EDI
// 0051ee94: POP ESI
// 0051ee95: RET
