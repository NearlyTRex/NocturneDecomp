// Name: shape_meshlod.cpp_CLodMesh_FUN_0051b570
// Address: 0051b570
// Address Range: [[0051b570, 0051b6ee]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_0051b570(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_0051b330 (0051b330) at 0051b3be [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051ba4b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_copyArrayWithFunction_FUN_006020c2

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_0051b570(CLodMesh *this_ptr)

{
  SLodTriangle *pSVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  iVar3 = 0;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    iVar5 = 0;
    do {
      pSVar1 = this_ptr->triangle_data;
      if (*(int *)(pSVar1->field9_0x44 + iVar5 + -4) == 0) {
        *(int *)(pSVar1->field9_0x44 + iVar5 + -4) = local_1c;
        local_1c = local_1c + 1;
      }
      else {
        pcVar2 = pSVar1->field9_0x44 + iVar5 + -4;
        pcVar2[0] = -1;
        pcVar2[1] = -1;
        pcVar2[2] = -1;
        pcVar2[3] = -1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x8c;
    } while (iVar3 < this_ptr->tri_count);
  }
  local_14 = 0;
  local_20 = 0;
  if (0 < this_ptr->tri_count) {
    local_18 = 0;
    local_24 = 0;
    do {
      pcVar2 = this_ptr->triangle_data->field0_0x0 + local_24;
      if (-1 < *(int *)(pcVar2 + 0x40)) {
        if (local_20 < local_14) {
          pcVar4 = this_ptr->triangle_data->field0_0x0 + local_18;
          pcVar7 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
          pcVar6 = pcVar2 + ((uint)bVar8 * -2 + 1) * 4;
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          *(undefined4 *)(pcVar7 + ((uint)bVar8 * -2 + 1) * 4) =
               *(undefined4 *)(pcVar6 + ((uint)bVar8 * -2 + 1) * 4);
          *(undefined4 *)(pcVar7 + ((uint)bVar8 * -2 + 1) * 4 + ((uint)bVar8 * -2 + 1) * 4) =
               *(undefined4 *)(pcVar6 + ((uint)bVar8 * -2 + 1) * 4 + ((uint)bVar8 * -2 + 1) * 4);
          *(int *)(pcVar4 + 0x10) = *(int *)(pcVar2 + 0x10);
          *(undefined4 *)(pcVar4 + ((uint)bVar8 * -2 + 5) * 4) =
               *(undefined4 *)(pcVar2 + ((uint)bVar8 * -2 + 5) * 4);
          *(undefined4 *)(pcVar4 + ((uint)bVar8 * -2 + 5) * 4 + ((uint)bVar8 * -2 + 1) * 4) =
               *(undefined4 *)(pcVar2 + ((uint)bVar8 * -2 + 5) * 4 + ((uint)bVar8 * -2 + 1) * 4);
          pcVar6 = pcVar2 + 0x1c;
          pcVar7 = pcVar4 + 0x1c;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
            pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
          }
          *(int *)(pcVar4 + 0x34) = *(int *)(pcVar2 + 0x34);
          *(undefined4 *)(pcVar4 + ((uint)bVar8 * -2 + 0xe) * 4) =
               *(undefined4 *)(pcVar2 + ((uint)bVar8 * -2 + 0xe) * 4);
          *(undefined4 *)(pcVar4 + ((uint)bVar8 * -2 + 0xe) * 4 + ((uint)bVar8 * -2 + 1) * 4) =
               *(undefined4 *)(pcVar2 + ((uint)bVar8 * -2 + 0xe) * 4 + ((uint)bVar8 * -2 + 1) * 4);
          *(int *)(pcVar4 + 0x40) = *(int *)(pcVar2 + 0x40);
          if (pcVar4 + 0x44 != pcVar2 + 0x44) {
            *(undefined4 *)(pcVar4 + 0x44) = *(undefined4 *)(pcVar2 + 0x44);
            *(undefined4 *)(pcVar4 + 0x48) = *(undefined4 *)(pcVar2 + 0x48);
            *(undefined4 *)(pcVar4 + 0x4c) = *(undefined4 *)(pcVar2 + 0x4c);
          }
          *(undefined4 *)(pcVar4 + 0x50) = *(undefined4 *)(pcVar2 + 0x50);
          crt_memory_c_copyArrayWithFunction_FUN_006020c2
                    (pcVar4 + 0x54,pcVar2 + 0x54,3,0xc,core_actor_cpp_FUN_00410360);
          *(undefined4 *)(pcVar4 + 0x78) = *(undefined4 *)(pcVar2 + 0x78);
          *(undefined4 *)(pcVar4 + ((uint)bVar8 * -2 + 0x1f) * 4) =
               *(undefined4 *)(pcVar2 + ((uint)bVar8 * -2 + 0x1f) * 4);
          *(undefined4 *)(pcVar4 + ((uint)bVar8 * -2 + 0x1f) * 4 + ((uint)bVar8 * -2 + 1) * 4) =
               *(undefined4 *)(pcVar2 + ((uint)bVar8 * -2 + 0x1f) * 4 + ((uint)bVar8 * -2 + 1) * 4);
          *(undefined4 *)(pcVar4 + 0x84) = *(undefined4 *)(pcVar2 + 0x84);
          *(undefined4 *)(pcVar4 + 0x88) = *(undefined4 *)(pcVar2 + 0x88);
        }
        local_20 = local_20 + 1;
        pcVar2 = this_ptr->triangle_data->field9_0x44 + local_18 + -4;
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        local_18 = local_18 + 0x8c;
      }
      local_24 = local_24 + 0x8c;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->tri_count);
  }
  this_ptr->tri_count = local_1c;
  return;
}


// Assembly code:
// 0051b570: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_0051b570
// 0051b571: PUSH ESI
// 0051b572: PUSH EDI
// 0051b573: PUSH EBP
// 0051b574: SUB ESP,0x14
// 0051b577: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0051b57b: XOR EDX,EDX
// 0051b57d: MOV ECX,dword ptr [EAX + 0x8]
// 0051b580: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051b584: TEST ECX,ECX
// 0051b586: JLE 0x0051b5bd
//   XREF to: 0051b5bd (CONDITIONAL_JUMP)
// 0051b588: XOR EBX,EBX
// 0051b58a: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0051b58a
//   XREF to: Stack[0x4] (READ)
// 0051b58e: MOV EAX,dword ptr [EAX + 0xc]
// 0051b591: ADD EAX,EBX
// 0051b593: CMP dword ptr [EAX + 0x40],0x0
// 0051b597: JNZ 0x0051b64f
//   XREF to: 0051b64f (CONDITIONAL_JUMP)
// 0051b59d: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0051b5a1: MOV dword ptr [EAX + 0x40],ECX
// 0051b5a4: LEA ESI,[ECX + 0x1]
// 0051b5a7: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0051b5ab: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0051b5ab
//   XREF to: Stack[0x4] (READ)
// 0051b5af: INC EDX
// 0051b5b0: MOV ESI,dword ptr [EAX + 0x8]
// 0051b5b3: ADD EBX,0x8c
// 0051b5b9: CMP EDX,ESI
// 0051b5bb: JL 0x0051b58a
//   XREF to: 0051b58a (CONDITIONAL_JUMP)
// 0051b5bd: XOR EDI,EDI
//   Label: LAB_0051b5bd
// 0051b5bf: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0051b5c3: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0051b5c7: MOV EDX,dword ptr [EAX + 0x8]
// 0051b5ca: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0051b5ce: TEST EDX,EDX
// 0051b5d0: JLE 0x0051b63c
//   XREF to: 0051b63c (CONDITIONAL_JUMP)
// 0051b5d2: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0051b5d6: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x24] (DATA)
// 0051b5d9: MOV EDX,dword ptr [ESP + 0x28]
//   Label: LAB_0051b5d9
//   XREF to: Stack[0x4] (READ)
// 0051b5dd: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0051b5e0: MOV EDX,dword ptr [EDX + 0xc]
// 0051b5e3: ADD EAX,EDX
// 0051b5e5: CMP dword ptr [EAX + 0x40],0x0
// 0051b5e9: JL 0x0051b61c
//   XREF to: 0051b61c (CONDITIONAL_JUMP)
// 0051b5eb: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0051b5ef: CMP ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0051b5f3: JL 0x0051b65b
//   XREF to: 0051b65b (CONDITIONAL_JUMP)
// 0051b5f5: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0051b5f5
//   XREF to: Stack[0x4] (READ)
// 0051b5f9: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0051b5fd: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0051b601: MOV EAX,dword ptr [EAX + 0xc]
// 0051b604: INC EDI
// 0051b605: ADD EAX,EBX
// 0051b607: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0051b60b: LEA ESI,[EBX + 0x8c]
// 0051b611: MOV dword ptr [EAX + 0x40],0x0
// 0051b618: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0051b61c: MOV EDI,dword ptr [ESP]
//   Label: LAB_0051b61c
//   XREF to: Stack[-0x24] (DATA)
// 0051b61f: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0051b623: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0051b627: ADD EDI,0x8c
// 0051b62d: INC EBP
// 0051b62e: MOV ECX,dword ptr [EDX + 0x8]
// 0051b631: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x24] (DATA)
// 0051b634: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0051b638: CMP EBP,ECX
// 0051b63a: JL 0x0051b5d9
//   XREF to: 0051b5d9 (CONDITIONAL_JUMP)
// 0051b63c: MOV EDX,dword ptr [ESP + 0x28]
//   Label: LAB_0051b63c
//   XREF to: Stack[0x4] (READ)
// 0051b640: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0051b644: MOV dword ptr [EDX + 0x8],EAX
// 0051b647: ADD ESP,0x14
// 0051b64a: POP EBP
// 0051b64b: POP EDI
// 0051b64c: POP ESI
// 0051b64d: POP EBX
// 0051b64e: RET
// 0051b64f: MOV dword ptr [EAX + 0x40],0xffffffff
//   Label: LAB_0051b64f
// 0051b656: JMP 0x0051b5ab
//   XREF to: 0051b5ab (UNCONDITIONAL_JUMP)
// 0051b65b: ADD EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0051b65b
//   XREF to: Stack[-0x18] (READ)
// 0051b65f: MOV ESI,EAX
// 0051b661: MOV EDI,EDX
// 0051b663: MOVSD ES:EDI,ESI
// 0051b664: MOVSD ES:EDI,ESI
// 0051b665: MOVSD ES:EDI,ESI
// 0051b666: MOVSD ES:EDI,ESI
// 0051b667: LEA EDI,[EDX + 0x10]
// 0051b66a: LEA ESI,[EAX + 0x10]
// 0051b66d: MOVSD ES:EDI,ESI
// 0051b66e: MOVSD ES:EDI,ESI
// 0051b66f: MOVSD ES:EDI,ESI
// 0051b670: MOV ECX,0x6
// 0051b675: LEA EDI,[EDX + 0x1c]
// 0051b678: LEA ESI,[EAX + 0x1c]
// 0051b67b: MOVSD.REP ES:EDI,ESI
// 0051b67d: LEA EDI,[EDX + 0x34]
// 0051b680: LEA ESI,[EAX + 0x34]
// 0051b683: MOV EBX,EAX
// 0051b685: MOV EBP,EDX
// 0051b687: MOVSD ES:EDI,ESI
// 0051b688: MOVSD ES:EDI,ESI
// 0051b689: MOVSD ES:EDI,ESI
// 0051b68a: ADD EDX,0x44
// 0051b68d: MOV ECX,dword ptr [EAX + 0x40]
// 0051b690: ADD EAX,0x44
// 0051b693: MOV dword ptr [EDX + -0x4],ECX
// 0051b696: CMP EDX,EAX
// 0051b698: JZ 0x0051b6aa
//   XREF to: 0051b6aa (CONDITIONAL_JUMP)
// 0051b69a: MOV ECX,dword ptr [EAX]
// 0051b69c: MOV dword ptr [EDX],ECX
// 0051b69e: MOV ECX,dword ptr [EAX + 0x4]
// 0051b6a1: MOV dword ptr [EDX + 0x4],ECX
// 0051b6a4: MOV ECX,dword ptr [EAX + 0x8]
// 0051b6a7: MOV dword ptr [EDX + 0x8],ECX
// 0051b6aa: PUSH 0x410360
//   Label: LAB_0051b6aa
//   XREF to: 00410360 (DATA)
// 0051b6af: PUSH 0xc
// 0051b6b1: PUSH 0x3
// 0051b6b3: LEA EAX,[EBX + 0x54]
// 0051b6b6: PUSH EAX
// 0051b6b7: LEA EAX,[EBP + 0x54]
// 0051b6ba: FLD float ptr [EBX + 0x50]
// 0051b6bd: PUSH EAX
// 0051b6be: FSTP float ptr [EBP + 0x50]
// 0051b6c1: CALL crt_memory.c_copyArrayWithFunction_FUN_006020c2
//   XREF to: 006020c2 (UNCONDITIONAL_CALL)
// 0051b6c6: LEA EDI,[EBP + 0x78]
// 0051b6c9: LEA ESI,[EBX + 0x78]
// 0051b6cc: MOVSD ES:EDI,ESI
// 0051b6cd: MOVSD ES:EDI,ESI
// 0051b6ce: MOVSD ES:EDI,ESI
// 0051b6cf: MOV EAX,dword ptr [EBX + 0x84]
// 0051b6d5: MOV dword ptr [EBP + 0x84],EAX
// 0051b6db: MOV EAX,dword ptr [EBX + 0x88]
// 0051b6e1: ADD ESP,0x14
// 0051b6e4: MOV dword ptr [EBP + 0x88],EAX
// 0051b6ea: JMP 0x0051b5f5
//   XREF to: 0051b5f5 (UNCONDITIONAL_JUMP)
