// Name: shape_superopt.cpp_CPoly_FUN_005ce3e0
// Address: 005ce3e0
// Address Range: [[005ce3e0, 005ce57d]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005ce3e0(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005ce3e0(CPoly *this_ptr)

{
  double *pdVar1;
  void *pvVar2;
  int iVar3;
  double *pdVar4;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  
  pvVar2 = this_ptr->parent_obj->vertex_data;
  pdVar4 = (double *)((int)pvVar2 + this_ptr->vertex_idx_0 * 0x38);
  pdVar1 = (double *)((int)pvVar2 + this_ptr->vertex_idx_1 * 0x38);
  iVar3 = this_ptr->vertex_idx_2;
  *in_stack_00000008 = *pdVar4;
  *(undefined4 *)(in_stack_00000008 + 1) = *(undefined4 *)(pdVar4 + 1);
  *(undefined4 *)((int)in_stack_00000008 + 0xc) = *(undefined4 *)((int)pdVar4 + 0xc);
  *(undefined4 *)(in_stack_00000008 + 2) = *(undefined4 *)(pdVar4 + 2);
  *(undefined4 *)((int)in_stack_00000008 + 0x14) = *(undefined4 *)((int)pdVar4 + 0x14);
  *(undefined4 *)in_stack_0000000c = *(undefined4 *)pdVar4;
  *(undefined4 *)((int)in_stack_0000000c + 4) = *(undefined4 *)((int)pdVar4 + 4);
  in_stack_0000000c[1] = pdVar4[1];
  in_stack_0000000c[2] = pdVar4[2];
  pdVar4 = (double *)(iVar3 * 0x38 + (int)pvVar2);
  if (*pdVar1 < *in_stack_00000008) {
    *(undefined4 *)in_stack_00000008 = *(undefined4 *)pdVar1;
    *(undefined4 *)((int)in_stack_00000008 + 4) = *(undefined4 *)((int)pdVar1 + 4);
  }
  if (pdVar1[1] < in_stack_00000008[1]) {
    *(undefined4 *)(in_stack_00000008 + 1) = *(undefined4 *)(pdVar1 + 1);
    *(undefined4 *)((int)in_stack_00000008 + 0xc) = *(undefined4 *)((int)pdVar1 + 0xc);
  }
  if (pdVar1[2] < in_stack_00000008[2]) {
    *(undefined4 *)(in_stack_00000008 + 2) = *(undefined4 *)(pdVar1 + 2);
    *(undefined4 *)((int)in_stack_00000008 + 0x14) = *(undefined4 *)((int)pdVar1 + 0x14);
  }
  if (*in_stack_0000000c < *pdVar1) {
    *(undefined4 *)in_stack_0000000c = *(undefined4 *)pdVar1;
    *(undefined4 *)((int)in_stack_0000000c + 4) = *(undefined4 *)((int)pdVar1 + 4);
  }
  if (in_stack_0000000c[1] < pdVar1[1]) {
    *(undefined4 *)(in_stack_0000000c + 1) = *(undefined4 *)(pdVar1 + 1);
    *(undefined4 *)((int)in_stack_0000000c + 0xc) = *(undefined4 *)((int)pdVar1 + 0xc);
  }
  if (in_stack_0000000c[2] < pdVar1[2]) {
    *(undefined4 *)(in_stack_0000000c + 2) = *(undefined4 *)(pdVar1 + 2);
    *(undefined4 *)((int)in_stack_0000000c + 0x14) = *(undefined4 *)((int)pdVar1 + 0x14);
  }
  if (*pdVar4 < *in_stack_00000008) {
    *(undefined4 *)in_stack_00000008 = *(undefined4 *)pdVar4;
    *(undefined4 *)((int)in_stack_00000008 + 4) = *(undefined4 *)((int)pdVar4 + 4);
  }
  if (pdVar4[1] < in_stack_00000008[1]) {
    *(undefined4 *)(in_stack_00000008 + 1) = *(undefined4 *)(pdVar4 + 1);
    *(undefined4 *)((int)in_stack_00000008 + 0xc) = *(undefined4 *)((int)pdVar4 + 0xc);
  }
  if (pdVar4[2] < in_stack_00000008[2]) {
    *(undefined4 *)(in_stack_00000008 + 2) = *(undefined4 *)(pdVar4 + 2);
    *(undefined4 *)((int)in_stack_00000008 + 0x14) = *(undefined4 *)((int)pdVar4 + 0x14);
  }
  if (*in_stack_0000000c < *pdVar4) {
    *(undefined4 *)in_stack_0000000c = *(undefined4 *)pdVar4;
    *(undefined4 *)((int)in_stack_0000000c + 4) = *(undefined4 *)((int)pdVar4 + 4);
  }
  if (in_stack_0000000c[1] < pdVar4[1]) {
    *(undefined4 *)(in_stack_0000000c + 1) = *(undefined4 *)(pdVar4 + 1);
    *(undefined4 *)((int)in_stack_0000000c + 0xc) = *(undefined4 *)((int)pdVar4 + 0xc);
  }
  if (pdVar4[2] <= in_stack_0000000c[2]) {
    return;
  }
  *(undefined4 *)(in_stack_0000000c + 2) = *(undefined4 *)(pdVar4 + 2);
  *(undefined4 *)((int)in_stack_0000000c + 0x14) = *(undefined4 *)((int)pdVar4 + 0x14);
  return;
}


// Assembly code:
// 005ce3e0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005ce3e0
// 005ce3e1: PUSH ESI
// 005ce3e2: PUSH EDI
// 005ce3e3: PUSH EBP
// 005ce3e4: SUB ESP,0x4
// 005ce3e7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005ce3eb: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005ce3ef: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005ce3f3: MOV EBX,dword ptr [EBP + 0x4]
// 005ce3f6: SHL EBX,0x3
// 005ce3f9: MOV EDI,dword ptr [EBP]
// 005ce3fc: MOV EAX,EBX
// 005ce3fe: SHL EBX,0x3
// 005ce401: MOV EDI,dword ptr [EDI + 0x4]
// 005ce404: SUB EBX,EAX
// 005ce406: LEA EAX,[EDI + EBX*0x1]
// 005ce409: MOV EBX,dword ptr [EBP + 0x8]
// 005ce40c: SHL EBX,0x3
// 005ce40f: MOV ESI,EBX
// 005ce411: SHL EBX,0x3
// 005ce414: SUB EBX,ESI
// 005ce416: FLD double ptr [EAX]
// 005ce418: LEA ESI,[EDI + EBX*0x1]
// 005ce41b: MOV EBX,dword ptr [EBP + 0xc]
// 005ce41e: FSTP double ptr [ECX]
// 005ce420: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 005ce423: MOV EBP,dword ptr [EAX + 0x8]
// 005ce426: MOV dword ptr [ECX + 0x8],EBP
// 005ce429: MOV EBP,dword ptr [EAX + 0xc]
// 005ce42c: MOV dword ptr [ECX + 0xc],EBP
// 005ce42f: SHL EBX,0x3
// 005ce432: MOV EBP,dword ptr [EAX + 0x10]
// 005ce435: MOV dword ptr [ECX + 0x10],EBP
// 005ce438: MOV EBP,dword ptr [EAX + 0x14]
// 005ce43b: MOV dword ptr [ECX + 0x14],EBP
// 005ce43e: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 005ce441: MOV EBP,dword ptr [EAX]
// 005ce443: MOV dword ptr [EDX],EBP
// 005ce445: MOV EBP,dword ptr [EAX + 0x4]
// 005ce448: MOV dword ptr [EDX + 0x4],EBP
// 005ce44b: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005ce44e: SHL EBX,0x3
// 005ce451: FLD double ptr [EAX + 0x8]
// 005ce454: FSTP double ptr [EDX + 0x8]
// 005ce457: FLD double ptr [EAX + 0x10]
// 005ce45a: SUB EBX,EBP
// 005ce45c: FSTP double ptr [EDX + 0x10]
// 005ce45f: FLD double ptr [ESI]
// 005ce461: ADD EBX,EDI
// 005ce463: FCOMP double ptr [ECX]
// 005ce465: FNSTSW AX
// 005ce467: SAHF
// 005ce468: JC 0x005ce55b
//   XREF to: 005ce55b (CONDITIONAL_JUMP)
// 005ce46e: FLD double ptr [ESI + 0x8]
//   Label: LAB_005ce46e
// 005ce471: FCOMP double ptr [ECX + 0x8]
// 005ce474: FNSTSW AX
// 005ce476: SAHF
// 005ce477: JNC 0x005ce485
//   XREF to: 005ce485 (CONDITIONAL_JUMP)
// 005ce479: MOV EAX,dword ptr [ESI + 0x8]
// 005ce47c: MOV dword ptr [ECX + 0x8],EAX
// 005ce47f: MOV EAX,dword ptr [ESI + 0xc]
// 005ce482: MOV dword ptr [ECX + 0xc],EAX
// 005ce485: FLD double ptr [ESI + 0x10]
//   Label: LAB_005ce485
// 005ce488: FCOMP double ptr [ECX + 0x10]
// 005ce48b: FNSTSW AX
// 005ce48d: SAHF
// 005ce48e: JNC 0x005ce49c
//   XREF to: 005ce49c (CONDITIONAL_JUMP)
// 005ce490: MOV EAX,dword ptr [ESI + 0x10]
// 005ce493: MOV dword ptr [ECX + 0x10],EAX
// 005ce496: MOV EAX,dword ptr [ESI + 0x14]
// 005ce499: MOV dword ptr [ECX + 0x14],EAX
// 005ce49c: FLD double ptr [ESI]
//   Label: LAB_005ce49c
// 005ce49e: FCOMP double ptr [EDX]
// 005ce4a0: FNSTSW AX
// 005ce4a2: SAHF
// 005ce4a3: JBE 0x005ce4af
//   XREF to: 005ce4af (CONDITIONAL_JUMP)
// 005ce4a5: MOV EAX,dword ptr [ESI]
// 005ce4a7: MOV dword ptr [EDX],EAX
// 005ce4a9: MOV EAX,dword ptr [ESI + 0x4]
// 005ce4ac: MOV dword ptr [EDX + 0x4],EAX
// 005ce4af: FLD double ptr [ESI + 0x8]
//   Label: LAB_005ce4af
// 005ce4b2: FCOMP double ptr [EDX + 0x8]
// 005ce4b5: FNSTSW AX
// 005ce4b7: SAHF
// 005ce4b8: JBE 0x005ce4c6
//   XREF to: 005ce4c6 (CONDITIONAL_JUMP)
// 005ce4ba: MOV EAX,dword ptr [ESI + 0x8]
// 005ce4bd: MOV dword ptr [EDX + 0x8],EAX
// 005ce4c0: MOV EAX,dword ptr [ESI + 0xc]
// 005ce4c3: MOV dword ptr [EDX + 0xc],EAX
// 005ce4c6: FLD double ptr [ESI + 0x10]
//   Label: LAB_005ce4c6
// 005ce4c9: FCOMP double ptr [EDX + 0x10]
// 005ce4cc: FNSTSW AX
// 005ce4ce: SAHF
// 005ce4cf: JBE 0x005ce4dd
//   XREF to: 005ce4dd (CONDITIONAL_JUMP)
// 005ce4d1: MOV EAX,dword ptr [ESI + 0x10]
// 005ce4d4: MOV dword ptr [EDX + 0x10],EAX
// 005ce4d7: MOV EAX,dword ptr [ESI + 0x14]
// 005ce4da: MOV dword ptr [EDX + 0x14],EAX
// 005ce4dd: FLD double ptr [EBX]
//   Label: LAB_005ce4dd
// 005ce4df: FCOMP double ptr [ECX]
// 005ce4e1: FNSTSW AX
// 005ce4e3: SAHF
// 005ce4e4: JNC 0x005ce4f0
//   XREF to: 005ce4f0 (CONDITIONAL_JUMP)
// 005ce4e6: MOV EAX,dword ptr [EBX]
// 005ce4e8: MOV dword ptr [ECX],EAX
// 005ce4ea: MOV EAX,dword ptr [EBX + 0x4]
// 005ce4ed: MOV dword ptr [ECX + 0x4],EAX
// 005ce4f0: FLD double ptr [EBX + 0x8]
//   Label: LAB_005ce4f0
// 005ce4f3: FCOMP double ptr [ECX + 0x8]
// 005ce4f6: FNSTSW AX
// 005ce4f8: SAHF
// 005ce4f9: JNC 0x005ce507
//   XREF to: 005ce507 (CONDITIONAL_JUMP)
// 005ce4fb: MOV EAX,dword ptr [EBX + 0x8]
// 005ce4fe: MOV dword ptr [ECX + 0x8],EAX
// 005ce501: MOV EAX,dword ptr [EBX + 0xc]
// 005ce504: MOV dword ptr [ECX + 0xc],EAX
// 005ce507: FLD double ptr [EBX + 0x10]
//   Label: LAB_005ce507
// 005ce50a: FCOMP double ptr [ECX + 0x10]
// 005ce50d: FNSTSW AX
// 005ce50f: SAHF
// 005ce510: JNC 0x005ce51e
//   XREF to: 005ce51e (CONDITIONAL_JUMP)
// 005ce512: MOV EAX,dword ptr [EBX + 0x10]
// 005ce515: MOV dword ptr [ECX + 0x10],EAX
// 005ce518: MOV EAX,dword ptr [EBX + 0x14]
// 005ce51b: MOV dword ptr [ECX + 0x14],EAX
// 005ce51e: FLD double ptr [EBX]
//   Label: LAB_005ce51e
// 005ce520: FCOMP double ptr [EDX]
// 005ce522: FNSTSW AX
// 005ce524: SAHF
// 005ce525: JBE 0x005ce531
//   XREF to: 005ce531 (CONDITIONAL_JUMP)
// 005ce527: MOV EAX,dword ptr [EBX]
// 005ce529: MOV dword ptr [EDX],EAX
// 005ce52b: MOV EAX,dword ptr [EBX + 0x4]
// 005ce52e: MOV dword ptr [EDX + 0x4],EAX
// 005ce531: FLD double ptr [EBX + 0x8]
//   Label: LAB_005ce531
// 005ce534: FCOMP double ptr [EDX + 0x8]
// 005ce537: FNSTSW AX
// 005ce539: SAHF
// 005ce53a: JBE 0x005ce548
//   XREF to: 005ce548 (CONDITIONAL_JUMP)
// 005ce53c: MOV EAX,dword ptr [EBX + 0x8]
// 005ce53f: MOV dword ptr [EDX + 0x8],EAX
// 005ce542: MOV EAX,dword ptr [EBX + 0xc]
// 005ce545: MOV dword ptr [EDX + 0xc],EAX
// 005ce548: FLD double ptr [EBX + 0x10]
//   Label: LAB_005ce548
// 005ce54b: FCOMP double ptr [EDX + 0x10]
// 005ce54e: FNSTSW AX
// 005ce550: SAHF
// 005ce551: JA 0x005ce56a
//   XREF to: 005ce56a (CONDITIONAL_JUMP)
// 005ce553: ADD ESP,0x4
// 005ce556: POP EBP
// 005ce557: POP EDI
// 005ce558: POP ESI
// 005ce559: POP EBX
// 005ce55a: RET
// 005ce55b: MOV EAX,dword ptr [ESI]
//   Label: LAB_005ce55b
// 005ce55d: MOV dword ptr [ECX],EAX
// 005ce55f: MOV EAX,dword ptr [ESI + 0x4]
// 005ce562: MOV dword ptr [ECX + 0x4],EAX
// 005ce565: JMP 0x005ce46e
//   XREF to: 005ce46e (UNCONDITIONAL_JUMP)
// 005ce56a: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_005ce56a
// 005ce56d: MOV dword ptr [EDX + 0x10],EAX
// 005ce570: MOV EAX,dword ptr [EBX + 0x14]
// 005ce573: MOV dword ptr [EDX + 0x14],EAX
// 005ce576: ADD ESP,0x4
// 005ce579: POP EBP
// 005ce57a: POP EDI
// 005ce57b: POP ESI
// 005ce57c: POP EBX
// 005ce57d: RET
