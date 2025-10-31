// Name: core_skeledit.cpp_LodVert_copy_FUN_00599550
// Address: 00599550
// Address Range: [[00599550, 005995ba]]
// Convention: __cdecl
// Signature: SLodVert * core_skeledit.cpp_LodVert_copy_FUN_00599550(void * n1, void * n2, SLodVert * other2, SLodVert * other3)
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: n1 */

SLodVert * __cdecl
core_skeledit_cpp_LodVert_copy_FUN_00599550(void *n1,void *n2,SLodVert *other2,SLodVert *other3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xc);
  *(undefined4 *)other2->field0_0x0 = *(undefined4 *)other3->field0_0x0;
  *(undefined4 *)(other2->field0_0x0 + 4) = *(undefined4 *)(other3->field0_0x0 + 4);
  *(undefined4 *)(other2->field0_0x0 + 8) = *(undefined4 *)(other3->field0_0x0 + 8);
  pcVar2 = other3->field0_0x0 + 0xc;
  pcVar3 = other2->field0_0x0 + 0xc;
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + (uint)bVar4 * -8 + 4;
    pcVar3 = pcVar3 + (uint)bVar4 * -8 + 4;
  }
  *(undefined4 *)(other2->field0_0x0 + 0x3f4) = *(undefined4 *)(other3->field0_0x0 + 0x3f4);
  *(undefined4 *)(other2->field0_0x0 + 0x3f8) = *(undefined4 *)(other3->field0_0x0 + 0x3f8);
  pcVar2 = other3->field0_0x0 + 0x3fc;
  pcVar3 = other2->field0_0x0 + 0x3fc;
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + (uint)bVar4 * -8 + 4;
    pcVar3 = pcVar3 + (uint)bVar4 * -8 + 4;
  }
  return other2;
}


// Assembly code:
// 00599550: PUSH 0xc
//   Label: core_skeledit.cpp_LodVert_copy_FUN_00599550
// 00599555: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059955a: PUSH ESI
// 0059955b: PUSH EDI
// 0059955c: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00599560: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00599564: MOV EAX,dword ptr [EDX]
// 00599566: MOV dword ptr [ECX],EAX
// 00599568: LEA EAX,[ECX + 0x4]
// 0059956b: LEA ECX,[EDX + 0x4]
// 0059956e: MOV ECX,dword ptr [ECX]
// 00599570: MOV dword ptr [EAX],ECX
// 00599572: LEA ECX,[EDX + 0x8]
// 00599575: MOV ECX,dword ptr [ECX]
// 00599577: MOV dword ptr [EAX + 0x4],ECX
// 0059957a: MOV ECX,0xfa
// 0059957f: LEA EDI,[EAX + 0x8]
// 00599582: LEA ESI,[EDX + 0xc]
// 00599585: MOVSD.REP ES:EDI,ESI
// 00599587: MOV ECX,dword ptr [EDX + 0x3f4]
// 0059958d: MOV dword ptr [EAX + 0x3f0],ECX
// 00599593: ADD EAX,0x4
// 00599596: MOV ECX,dword ptr [EDX + 0x3f8]
// 0059959c: LEA EDI,[EAX + 0x3f4]
// 005995a2: MOV dword ptr [EAX + 0x3f0],ECX
// 005995a8: MOV ECX,0x32
// 005995ad: LEA ESI,[EDX + 0x3fc]
// 005995b3: SUB EAX,0x8
// 005995b6: MOVSD.REP ES:EDI,ESI
// 005995b8: POP EDI
// 005995b9: POP ESI
// 005995ba: RET
