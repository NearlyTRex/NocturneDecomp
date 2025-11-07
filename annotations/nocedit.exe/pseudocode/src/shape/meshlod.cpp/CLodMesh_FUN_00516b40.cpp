// Name: shape_meshlod.cpp_CLodMesh_FUN_00516b40
// Address: 00516b40
// Address Range: [[00516b40, 00516b90]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_00516b40(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_0051b330 (0051b330) at 0051b38f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b9e3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_00516b40(CLodMesh *this_ptr)

{
  char *pcVar1;
  SLodTriangle *pSVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < this_ptr->tri_count) {
    iVar4 = 0;
    do {
      pSVar2 = this_ptr->triangle_data;
      if (*(int *)(pSVar2->field9_0x44 + iVar4 + -4) == 0) {
        if (((*(int *)(pSVar2->field4_0x1c + iVar4 + -0xc) ==
              *(int *)(pSVar2->field4_0x1c + iVar4 + -8)) ||
            (*(int *)(pSVar2->field4_0x1c + iVar4 + -0xc) ==
             *(int *)(pSVar2->field4_0x1c + iVar4 + -4))) ||
           (*(int *)(pSVar2->field4_0x1c + iVar4 + -8) == *(int *)(pSVar2->field4_0x1c + iVar4 + -4)
           )) {
          pcVar1 = pSVar2->field9_0x44 + iVar4 + -4;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x8c;
    } while (iVar3 < this_ptr->tri_count);
  }
  return;
}


// Assembly code:
// 00516b40: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00516b40
// 00516b41: PUSH ESI
// 00516b42: PUSH EDI
// 00516b43: PUSH EBP
// 00516b44: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00516b48: MOV EDX,dword ptr [ESI + 0x8]
// 00516b4b: XOR ECX,ECX
// 00516b4d: TEST EDX,EDX
// 00516b4f: JLE 0x00516b6c
//   XREF to: 00516b6c (CONDITIONAL_JUMP)
// 00516b51: XOR EDX,EDX
// 00516b53: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_00516b53
// 00516b56: ADD EAX,EDX
// 00516b58: CMP dword ptr [EAX + 0x40],0x0
// 00516b5c: JZ 0x00516b71
//   XREF to: 00516b71 (CONDITIONAL_JUMP)
// 00516b5e: INC ECX
//   Label: LAB_00516b5e
// 00516b5f: MOV EBX,dword ptr [ESI + 0x8]
// 00516b62: ADD EDX,0x8c
// 00516b68: CMP ECX,EBX
// 00516b6a: JL 0x00516b53
//   XREF to: 00516b53 (CONDITIONAL_JUMP)
// 00516b6c: POP EBP
//   Label: LAB_00516b6c
// 00516b6d: POP EDI
// 00516b6e: POP ESI
// 00516b6f: POP EBX
// 00516b70: RET
// 00516b71: MOV EBP,dword ptr [EAX + 0x14]
//   Label: LAB_00516b71
// 00516b74: MOV EBX,dword ptr [EAX + 0x10]
// 00516b77: CMP EBX,EBP
// 00516b79: JNZ 0x00516b84
//   XREF to: 00516b84 (CONDITIONAL_JUMP)
// 00516b7b: MOV dword ptr [EAX + 0x40],0x1
//   Label: LAB_00516b7b
// 00516b82: JMP 0x00516b5e
//   XREF to: 00516b5e (UNCONDITIONAL_JUMP)
// 00516b84: MOV EDI,dword ptr [EAX + 0x18]
//   Label: LAB_00516b84
// 00516b87: CMP EBX,EDI
// 00516b89: JZ 0x00516b7b
//   XREF to: 00516b7b (CONDITIONAL_JUMP)
// 00516b8b: CMP EBP,EDI
// 00516b8d: JZ 0x00516b7b
//   XREF to: 00516b7b (CONDITIONAL_JUMP)
// 00516b8f: JMP 0x00516b5e
//   XREF to: 00516b5e (UNCONDITIONAL_JUMP)
