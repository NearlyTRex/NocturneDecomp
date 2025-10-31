// Name: engine_alphabit.cpp_copyBytes_FUN_00410d20
// Address: 00410d20
// Address Range: [[00410d20, 00410d44]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_copyBytes_FUN_00410d20(void * src, void * dest, int width, int height)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_copyBytes_FUN_00410d20(void *src,void *dest,int width,int height)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(int *)((int)src + 0xc) * *(int *)((int)src + 0x10);
                    /* WARNING: Load size is inaccurate */
  puVar3 = *src;
  puVar4 = *(undefined4 **)((int)src + 4);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}


// Assembly code:
// 00410d20: PUSH ESI
//   Label: engine_alphabit.cpp_copyBytes_FUN_00410d20
// 00410d21: PUSH EDI
// 00410d22: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00410d26: MOV ECX,dword ptr [EDI + 0xc]
// 00410d29: IMUL ECX,dword ptr [EDI + 0x10]
// 00410d2d: MOV ESI,dword ptr [EDI]
// 00410d2f: MOV EDI,dword ptr [EDI + 0x4]
// 00410d32: PUSH EDI
// 00410d33: MOV EAX,ECX
// 00410d35: SHR ECX,0x2
// 00410d38: MOVSD.REP ES:EDI,ESI
// 00410d3a: MOV CL,AL
// 00410d3c: AND CL,0x3
// 00410d3f: MOVSB.REP ES:EDI,ESI
// 00410d41: POP EDI
// 00410d42: POP EDI
// 00410d43: POP ESI
// 00410d44: RET
