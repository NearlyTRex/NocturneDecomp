// Name: shape_superopt.cpp_FUN_005d44d0
// Address: 005d44d0
// Address Range: [[005d44d0, 005d46eb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d44d0()
// Globals:
//   TerminatedCString s_Deleting_d_disjoing_vert_006544b0
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da
//   crt_memory.c_memset_FUN_005fde40
//   crt_memory.c_realloc_FUN_00601df0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d44d0(undefined4 param_1) */

int * shape_superopt_cpp_FUN_005d44d0(void)

{
  uint uVar1;
  int *dest;
  int *piVar2;
  void *ptr;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  int iVar8;
  uint *in_stack_00000004;
  void *pvVar9;
  
  dest = (int *)crt_memory_c_malloc_FUN_006021da(*in_stack_00000004 << 2);
  if (dest != (int *)0x0) {
    if (1000 < *in_stack_00000004) {
      shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
    }
    crt_memory_c_memset_FUN_005fde40(dest,0xff,*in_stack_00000004 << 2);
    uVar5 = 0;
    if (in_stack_00000004[2] != 0) {
      iVar8 = 0;
      do {
        uVar1 = in_stack_00000004[3];
        dest[*(int *)(iVar8 + 4 + uVar1)] = *(int *)(iVar8 + 4 + uVar1);
        dest[*(int *)(iVar8 + 8 + uVar1)] = *(int *)(iVar8 + 8 + uVar1);
        iVar6 = *(int *)(iVar8 + 0xc + uVar1);
        uVar5 = uVar5 + 1;
        dest[iVar6] = iVar6;
        iVar8 = iVar8 + 0x68;
      } while (uVar5 < in_stack_00000004[2]);
    }
    iVar8 = 0;
    uVar5 = 0;
    piVar2 = dest;
    if (*in_stack_00000004 != 0) {
      do {
        if (*piVar2 == -1) {
          iVar8 = iVar8 + 1;
        }
        else {
          *piVar2 = iVar8;
        }
        uVar5 = uVar5 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar5 < *in_stack_00000004);
    }
    uVar5 = 0;
    if (in_stack_00000004[2] != 0) {
      iVar6 = 0;
      do {
        uVar1 = in_stack_00000004[3];
        *(int *)(iVar6 + 4 + uVar1) =
             *(int *)(iVar6 + 4 + uVar1) - dest[*(int *)(iVar6 + 4 + uVar1)];
        *(int *)(iVar6 + 8 + uVar1) =
             *(int *)(iVar6 + 8 + uVar1) - dest[*(int *)(iVar6 + 8 + uVar1)];
        piVar2 = (int *)(iVar6 + 0xc + uVar1);
        *piVar2 = *piVar2 - dest[*(int *)(iVar6 + 0xc + uVar1)];
        iVar6 = iVar6 + 0x68;
        uVar5 = uVar5 + 1;
      } while (uVar5 < in_stack_00000004[2]);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff90,"Deleting %d disjoing vertices",iVar8);
    ptr = (void *)(*in_stack_00000004 - iVar8);
    pvVar9 = (void *)0x0;
    if (ptr != (void *)0x0) {
      unaff_ESI = 0;
      piVar2 = dest;
      do {
        do {
          piVar3 = piVar2;
          piVar2 = piVar3 + 1;
        } while (*piVar3 == -1);
        iVar8 = (int)piVar3 - (int)dest >> 0x1f;
        puVar4 = (undefined8 *)
                 (((int)((((int)piVar3 - (int)dest) + iVar8 * -4) - (uint)(iVar8 << 1 < 0)) >> 2) *
                  0x38 + in_stack_00000004[1]);
        puVar7 = (undefined8 *)(in_stack_00000004[1] + unaff_ESI);
        *puVar7 = *puVar4;
        puVar7[1] = puVar4[1];
        puVar7[2] = puVar4[2];
        puVar7[3] = puVar4[3];
        puVar7[4] = puVar4[4];
        puVar7[5] = puVar4[5];
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar4 + 6);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar4 + 0x34);
        pvVar9 = (void *)((int)pvVar9 + 1);
        unaff_ESI = unaff_ESI + 0x38;
      } while (pvVar9 < ptr);
    }
    pvVar9 = crt_memory_c_realloc_FUN_00601df0((void *)in_stack_00000004[1],(int)ptr * 0x38);
    if (pvVar9 != (void *)0x0) {
      in_stack_00000004[1] = (uint)pvVar9;
    }
    *in_stack_00000004 = unaff_ESI;
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    crt_memory_c_free_FUN_005fe659(dest);
    dest = (int *)&DAT_00000001;
  }
  return dest;
}


// Assembly code:
// 005d44d0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d44d0
// 005d44d1: PUSH ESI
// 005d44d2: PUSH EBP
// 005d44d3: SUB ESP,0x70
// 005d44d6: MOV ESI,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 005d44dd: MOV EAX,dword ptr [ESI]
// 005d44df: SHL EAX,0x2
// 005d44e2: PUSH EAX
// 005d44e3: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005d44e8: ADD ESP,0x4
// 005d44eb: MOV EBX,EAX
// 005d44ed: TEST EAX,EAX
// 005d44ef: JZ 0x005d46e5
//   XREF to: 005d46e5 (CONDITIONAL_JUMP)
// 005d44f5: XOR EDX,EDX
// 005d44f7: MOV ECX,dword ptr [ESI]
// 005d44f9: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005d44fd: CMP ECX,0x3e8
// 005d4503: JA 0x005d4611
//   XREF to: 005d4611 (CONDITIONAL_JUMP)
// 005d4509: PUSH EDI
//   Label: LAB_005d4509
// 005d450a: MOV EAX,dword ptr [ESI]
// 005d450c: SHL EAX,0x2
// 005d450f: PUSH EAX
// 005d4510: PUSH 0xff
// 005d4515: PUSH EBX
// 005d4516: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005d451b: ADD ESP,0xc
// 005d451e: MOV EDI,dword ptr [ESI + 0x8]
// 005d4521: XOR EDX,EDX
// 005d4523: TEST EDI,EDI
// 005d4525: JBE 0x005d4560
//   XREF to: 005d4560 (CONDITIONAL_JUMP)
// 005d4527: XOR EDI,EDI
// 005d4529: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005d4529
// 005d452c: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x4]
// 005d4530: SHL ECX,0x2
// 005d4533: LEA EBP,[EBX + ECX*0x1]
// 005d4536: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x4]
// 005d453a: MOV dword ptr [EBP],ECX
// 005d453d: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x8]
// 005d4541: SHL ECX,0x2
// 005d4544: LEA EBP,[EBX + ECX*0x1]
// 005d4547: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x8]
// 005d454b: MOV dword ptr [EBP],ECX
// 005d454e: MOV ECX,dword ptr [EDI + EAX*0x1 + 0xc]
// 005d4552: INC EDX
// 005d4553: MOV dword ptr [EBX + ECX*0x4],ECX
// 005d4556: MOV EBP,dword ptr [ESI + 0x8]
// 005d4559: ADD EDI,0x68
// 005d455c: CMP EDX,EBP
// 005d455e: JC 0x005d4529
//   XREF to: 005d4529 (CONDITIONAL_JUMP)
// 005d4560: MOV EAX,EBX
//   Label: LAB_005d4560
// 005d4562: MOV ECX,dword ptr [ESI]
// 005d4564: XOR EDI,EDI
// 005d4566: XOR EDX,EDX
// 005d4568: TEST ECX,ECX
// 005d456a: JBE 0x005d4580
//   XREF to: 005d4580 (CONDITIONAL_JUMP)
// 005d456c: CMP dword ptr [EAX],-0x1
//   Label: LAB_005d456c
// 005d456f: JNZ 0x005d4624
//   XREF to: 005d4624 (CONDITIONAL_JUMP)
// 005d4575: INC EDI
// 005d4576: INC EDX
//   Label: LAB_005d4576
// 005d4577: MOV EBP,dword ptr [ESI]
// 005d4579: ADD EAX,0x4
// 005d457c: CMP EDX,EBP
// 005d457e: JC 0x005d456c
//   XREF to: 005d456c (CONDITIONAL_JUMP)
// 005d4580: XOR EAX,EAX
//   Label: LAB_005d4580
// 005d4582: MOV EDX,dword ptr [ESI + 0x8]
// 005d4585: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005d4589: TEST EDX,EDX
// 005d458b: JBE 0x005d45d0
//   XREF to: 005d45d0 (CONDITIONAL_JUMP)
// 005d458d: XOR EDX,EDX
// 005d458f: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005d458f
// 005d4592: MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4]
// 005d4596: MOV EBP,dword ptr [EDX + EAX*0x1 + 0x4]
// 005d459a: SUB EBP,dword ptr [EBX + ECX*0x4]
// 005d459d: MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8]
// 005d45a1: MOV dword ptr [EDX + EAX*0x1 + 0x4],EBP
// 005d45a5: MOV ECX,dword ptr [EBX + ECX*0x4]
// 005d45a8: MOV EBP,dword ptr [EDX + EAX*0x1 + 0x8]
// 005d45ac: SUB EBP,ECX
// 005d45ae: MOV ECX,dword ptr [EDX + EAX*0x1 + 0xc]
// 005d45b2: MOV dword ptr [EDX + EAX*0x1 + 0x8],EBP
// 005d45b6: MOV ECX,dword ptr [EBX + ECX*0x4]
// 005d45b9: SUB dword ptr [EDX + EAX*0x1 + 0xc],ECX
// 005d45bd: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x10] (READ)
// 005d45c1: ADD EDX,0x68
// 005d45c4: INC EAX
// 005d45c5: MOV ECX,dword ptr [ESI + 0x8]
// 005d45c8: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005d45cc: CMP EAX,ECX
// 005d45ce: JC 0x005d458f
//   XREF to: 005d458f (CONDITIONAL_JUMP)
// 005d45d0: PUSH EDI
//   Label: LAB_005d45d0
// 005d45d1: PUSH 0x6544b0
//   XREF to: 006544b0 (DATA)
// 005d45d6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x7c] (DATA)
// 005d45da: PUSH EAX
// 005d45db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005d45e0: MOV EAX,dword ptr [ESI]
// 005d45e2: ADD ESP,0xc
// 005d45e5: SUB EAX,EDI
// 005d45e7: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d45eb: XOR EDI,EDI
// 005d45ed: MOV EBP,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 005d45f1: MOV EAX,EBX
// 005d45f3: MOV dword ptr [ESP + 0x6c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005d45f7: TEST EBP,EBP
// 005d45f9: JBE 0x005d46a1
//   XREF to: 005d46a1 (CONDITIONAL_JUMP)
// 005d45ff: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005d4603: MOV EDI,dword ptr [EAX]
//   Label: LAB_005d4603
// 005d4605: LEA ECX,[EAX + 0x4]
// 005d4608: CMP EDI,-0x1
// 005d460b: JNZ 0x005d462b
//   XREF to: 005d462b (CONDITIONAL_JUMP)
// 005d460d: MOV EAX,ECX
// 005d460f: JMP 0x005d4603
//   XREF to: 005d4603 (UNCONDITIONAL_JUMP)
// 005d4611: PUSH 0x4
//   Label: LAB_005d4611
// 005d4613: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005d4618: ADD ESP,0x4
// 005d461b: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d461f: JMP 0x005d4509
//   XREF to: 005d4509 (UNCONDITIONAL_JUMP)
// 005d4624: MOV dword ptr [EAX],EDI
//   Label: LAB_005d4624
// 005d4626: JMP 0x005d4576
//   XREF to: 005d4576 (UNCONDITIONAL_JUMP)
// 005d462b: SUB EAX,EBX
//   Label: LAB_005d462b
// 005d462d: MOV EDX,EAX
// 005d462f: SAR EDX,0x1f
// 005d4632: SHL EDX,0x2
// 005d4635: SBB EAX,EDX
// 005d4637: SAR EAX,0x2
// 005d463a: IMUL EAX,EAX,0x38
// 005d463d: MOV EDX,dword ptr [ESI + 0x4]
// 005d4640: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 005d4644: ADD EAX,EDX
// 005d4646: ADD EDX,EDI
// 005d4648: FLD double ptr [EAX]
// 005d464a: LEA EBP,[EAX + 0x18]
// 005d464d: FSTP double ptr [EDX]
// 005d464f: LEA EDI,[EDX + 0x18]
// 005d4652: FLD double ptr [EAX + 0x8]
// 005d4655: FSTP double ptr [EDX + 0x8]
// 005d4658: FLD double ptr [EAX + 0x10]
// 005d465b: FSTP double ptr [EDX + 0x10]
// 005d465e: FLD double ptr [EBP]
// 005d4661: FSTP double ptr [EDI]
// 005d4663: FLD double ptr [EBP + 0x8]
// 005d4666: FSTP double ptr [EDI + 0x8]
// 005d4669: FLD double ptr [EBP + 0x10]
// 005d466c: FSTP double ptr [EDI + 0x10]
// 005d466f: MOV EDI,dword ptr [EAX + 0x30]
// 005d4672: MOV dword ptr [EDX + 0x30],EDI
// 005d4675: MOV EAX,dword ptr [EAX + 0x34]
// 005d4678: MOV dword ptr [EDX + 0x34],EAX
// 005d467b: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (READ)
// 005d467f: INC EAX
// 005d4680: MOV EBP,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 005d4684: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d4688: ADD EBP,0x38
// 005d468b: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (READ)
// 005d468f: MOV EAX,ECX
// 005d4691: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 005d4695: MOV dword ptr [ESP + 0x68],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 005d4699: CMP EDX,ECX
// 005d469b: JC 0x005d4603
//   XREF to: 005d4603 (CONDITIONAL_JUMP)
// 005d46a1: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_005d46a1
//   XREF to: Stack[-0x1c] (READ)
// 005d46a5: SHL EAX,0x3
// 005d46a8: MOV EDX,EAX
// 005d46aa: SHL EAX,0x3
// 005d46ad: SUB EAX,EDX
// 005d46af: PUSH EAX
// 005d46b0: MOV EDI,dword ptr [ESI + 0x4]
// 005d46b3: PUSH EDI
// 005d46b4: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005d46b9: ADD ESP,0x8
// 005d46bc: TEST EAX,EAX
// 005d46be: JZ 0x005d46c3
//   XREF to: 005d46c3 (CONDITIONAL_JUMP)
// 005d46c0: MOV dword ptr [ESI + 0x4],EAX
// 005d46c3: MOV EBP,dword ptr [ESP + 0x60]
//   Label: LAB_005d46c3
//   XREF to: Stack[-0x20] (READ)
// 005d46c7: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 005d46cb: PUSH EBP
// 005d46cc: MOV dword ptr [ESI],EAX
// 005d46ce: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d46d3: ADD ESP,0x4
// 005d46d6: PUSH EBX
// 005d46d7: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005d46dc: MOV EAX,0x1
// 005d46e1: ADD ESP,0x4
// 005d46e4: POP EDI
// 005d46e5: ADD ESP,0x70
//   Label: LAB_005d46e5
// 005d46e8: POP EBP
// 005d46e9: POP ESI
// 005d46ea: POP EBX
// 005d46eb: RET
