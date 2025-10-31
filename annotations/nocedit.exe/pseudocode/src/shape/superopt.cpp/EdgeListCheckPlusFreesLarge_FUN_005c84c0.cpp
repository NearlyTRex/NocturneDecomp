// Name: shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
// Address: 005c84c0
// Address Range: [[005c84c0, 005c8b45]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0()
// Cross-references:
//   shape_superopt.cpp_SplitPolygonToConvexButContinuing_FUN_005d7690 (005d7690) at 005d76aa [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   shape_superopt.cpp_FUN_005c8b50
//   shape_superopt.cpp_FUN_005c8e70
//   shape_superopt.cpp_FUN_005c91e0
//   shape_superopt.cpp_FUN_005c9aa0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_EdgeListCheckPlusFreesLarge(undefined4 param_1) */

undefined1 * shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0(void)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  double *pdVar7;
  undefined4 *puVar8;
  byte bVar9;
  int in_stack_00000004;
  undefined4 uStack_150;
  undefined4 local_114 [6];
  double local_fc;
  double local_f4;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c [6];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  double *local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    iVar3 = shape_superopt_cpp_FUN_005c91e0();
    if (iVar3 == 0) {
      return (undefined1 *)0x0;
    }
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      puVar4 = (undefined4 *)
               crt_memory_c_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined1 *)0x0;
      }
      local_20 = puVar4;
      local_24 = (undefined4 *)
                 crt_memory_c_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
      if (local_24 == (undefined4 *)0x0) {
        crt_memory_c_free_FUN_005fe659(puVar4);
        return (undefined1 *)0x0;
      }
      local_1c = (double *)(in_stack_00000004 + 0x14);
      while( true ) {
        puVar4 = local_24;
        iVar3 = shape_superopt_cpp_FUN_005c8b50();
        if (iVar3 == 0) break;
        puVar4 = (undefined4 *)(iVar3 + 0x10);
        puVar8 = local_114;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        local_fc = *(double *)(iVar3 + 0x28) - *(double *)(iVar3 + 0x10);
        local_f4 = *(double *)(iVar3 + 0x30) - *(double *)(iVar3 + 0x18);
        local_ec = *(double *)(iVar3 + 0x38) - *(double *)(iVar3 + 0x20);
        pdVar7 = &local_fc;
        puVar4 = &local_84;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *(undefined4 *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
        }
        local_b4 = local_84;
        local_b0 = uStack_80;
        local_ac = local_7c;
        local_a8 = uStack_78;
        local_a4 = local_74;
        local_a0 = uStack_70;
        local_cc = (double)CONCAT44(uStack_78,local_7c) * local_1c[2] -
                   (double)CONCAT44(uStack_70,local_74) * local_1c[1];
        dVar1 = (double)CONCAT44(uStack_70,local_74) * *local_1c -
                (double)CONCAT44(uStack_80,local_84) * local_1c[2];
        local_bc = (double)CONCAT44(uStack_80,local_84) * local_1c[1] -
                   (double)CONCAT44(uStack_78,local_7c) * *local_1c;
        dVar2 = 1.0 / SQRT(local_bc * local_bc + local_cc * local_cc + dVar1 * dVar1);
        local_cc = local_cc * dVar2;
        local_bc = local_bc * dVar2;
        local_c4 = SUB84(dVar1 * dVar2,0);
        uStack_150 = (undefined4)((ulonglong)(dVar1 * dVar2) >> 0x20);
        local_c0 = uStack_150;
        local_18 = 0;
        local_14 = 0;
        shape_superopt_cpp_FUN_005c9aa0();
        if ((local_18 == 0) || (local_14 == 0)) {
          crt_memory_c_free_FUN_005fe659(local_20);
          crt_memory_c_free_FUN_005fe659(local_24);
          return (undefined1 *)0x0;
        }
        iVar3 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        puVar4 = local_24;
        if (iVar3 == 0) goto LAB_005c8a4c;
        iVar3 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if (iVar3 == 0) goto LAB_005c8a6e;
        iVar3 = shape_superopt_cpp_FUN_005c91e0();
        if (iVar3 == 0) {
          crt_memory_c_free_FUN_005fe659(local_20);
          crt_memory_c_free_FUN_005fe659(puVar4);
          return (undefined1 *)0x0;
        }
        iVar3 = shape_superopt_cpp_FUN_005c91e0();
        if (iVar3 == 0) goto LAB_005c8a6e;
        if ((local_18 == 0) && (local_14 == 0)) goto LAB_005c89e6;
        if ((local_18 != 0) && (local_14 != 0)) {
          crt_memory_c_free_FUN_005fe659(local_20);
          crt_memory_c_free_FUN_005fe659(local_24);
          return (undefined1 *)0x0;
        }
        if (local_18 == 0) {
          puVar4 = local_24;
          puVar8 = *(undefined4 **)(in_stack_00000004 + 0x30);
          for (uVar6 = (uint)(local_14 * 0x60) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar9 * -2 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_14;
        }
        else {
          puVar4 = local_20;
          puVar8 = *(undefined4 **)(in_stack_00000004 + 0x30);
          for (uVar6 = (uint)(local_18 * 0x60) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar9 * -2 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_18;
        }
      }
      iVar3 = shape_superopt_cpp_FUN_005c8e70();
      if (iVar3 == 0) {
        crt_memory_c_free_FUN_005fe659(local_20);
        crt_memory_c_free_FUN_005fe659(puVar4);
        return (undefined1 *)0x0;
      }
      puVar4 = (undefined4 *)(iVar3 + 0x10);
      puVar8 = local_6c;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      local_e4 = *(double *)(iVar3 + 0x28) - *(double *)(iVar3 + 0x10);
      local_dc = *(double *)(iVar3 + 0x30) - *(double *)(iVar3 + 0x18);
      local_d4 = *(double *)(iVar3 + 0x38) - *(double *)(iVar3 + 0x20);
      pdVar7 = &local_e4;
      puVar4 = &local_54;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *(undefined4 *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
        puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
      }
      local_9c = local_54;
      local_98 = uStack_50;
      local_94 = local_4c;
      local_90 = uStack_48;
      local_8c = local_44;
      local_88 = uStack_40;
      local_28 = 0;
      local_2c = 0;
      shape_superopt_cpp_FUN_005c9aa0();
      if ((local_28 != 0) && (local_2c != 0)) {
        iVar3 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        puVar4 = local_24;
        if (iVar3 != 0) {
          iVar3 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
          if (iVar3 == 0) {
LAB_005c8a6e:
            crt_memory_c_free_FUN_005fe659(local_20);
            crt_memory_c_free_FUN_005fe659(puVar4);
            return (undefined1 *)0x0;
          }
          if ((local_28 == 0) || (local_2c == 0)) goto LAB_005c8a2a;
          puVar4 = local_20;
          puVar8 = *(undefined4 **)(in_stack_00000004 + 0x30);
          for (uVar6 = (uint)(local_28 * 0x60) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar9 * -2 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_28;
          iVar3 = shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0();
          if (iVar3 == 0) {
            crt_memory_c_free_FUN_005fe659(local_20);
            crt_memory_c_free_FUN_005fe659(local_24);
            return (undefined1 *)0x0;
          }
          puVar4 = local_24;
          puVar8 = *(undefined4 **)(in_stack_00000004 + 0x30);
          for (uVar6 = (uint)(local_2c * 0x60) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar9 * -2 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_2c;
          iVar3 = shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0();
          if (iVar3 != 0) {
LAB_005c89e6:
            crt_memory_c_free_FUN_005fe659(local_20);
            crt_memory_c_free_FUN_005fe659(local_24);
            return &DAT_00000001;
          }
        }
LAB_005c8a4c:
        crt_memory_c_free_FUN_005fe659(local_20);
        crt_memory_c_free_FUN_005fe659(local_24);
        return (undefined1 *)0x0;
      }
LAB_005c8a2a:
      crt_memory_c_free_FUN_005fe659(local_20);
      crt_memory_c_free_FUN_005fe659(local_24);
      return (undefined1 *)0x0;
    }
  }
  return &DAT_00000001;
}


// Assembly code:
// 005c84c0: PUSH EBX
//   Label: shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
// 005c84c1: PUSH ESI
// 005c84c2: PUSH EDI
// 005c84c3: PUSH EBP
// 005c84c4: MOV EBP,ESP
// 005c84c6: SUB ESP,0x14c
// 005c84cc: SUB EBP,0x7e
// 005c84cf: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005c84d5: CMP dword ptr [EBX + 0x2c],0x0
// 005c84d9: JNZ 0x005c84e8
//   XREF to: 005c84e8 (CONDITIONAL_JUMP)
// 005c84db: MOV EAX,0x1
//   Label: LAB_005c84db
// 005c84e0: LEA ESP,[EBP + 0x7e]
//   Label: LAB_005c84e0
//   XREF to: Stack[-0x10] (DATA)
// 005c84e3: POP EBP
// 005c84e4: POP EDI
// 005c84e5: POP ESI
// 005c84e6: POP EBX
// 005c84e7: RET
// 005c84e8: LEA EAX,[EBX + 0x2c]
//   Label: LAB_005c84e8
// 005c84eb: PUSH EAX
// 005c84ec: MOV ECX,dword ptr [EBX + 0x30]
// 005c84ef: PUSH ECX
// 005c84f0: PUSH EBX
// 005c84f1: CALL shape_superopt.cpp_FUN_005c91e0
//   XREF to: 005c91e0 (UNCONDITIONAL_CALL)
// 005c84f6: ADD ESP,0xc
// 005c84f9: TEST EAX,EAX
// 005c84fb: JZ 0x005c84e0
//   XREF to: 005c84e0 (CONDITIONAL_JUMP)
// 005c84fd: MOV ESI,dword ptr [EBX + 0x2c]
// 005c8500: TEST ESI,ESI
// 005c8502: JZ 0x005c84db
//   XREF to: 005c84db (CONDITIONAL_JUMP)
// 005c8504: LEA EAX,[ESI*0x4 + 0x0]
// 005c850b: SUB EAX,ESI
// 005c850d: SHL EAX,0x6
// 005c8510: PUSH EAX
// 005c8511: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005c8516: MOV EDI,EAX
// 005c8518: ADD ESP,0x4
// 005c851b: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c851e: TEST EAX,EAX
// 005c8520: JZ 0x005c84e0
//   XREF to: 005c84e0 (CONDITIONAL_JUMP)
// 005c8522: MOV EDX,dword ptr [EBX + 0x2c]
// 005c8525: LEA EAX,[EDX*0x4 + 0x0]
// 005c852c: SUB EAX,EDX
// 005c852e: SHL EAX,0x6
// 005c8531: PUSH EAX
// 005c8532: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005c8537: ADD ESP,0x4
// 005c853a: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c853d: TEST EAX,EAX
// 005c853f: JZ 0x005c8782
//   XREF to: 005c8782 (CONDITIONAL_JUMP)
// 005c8545: LEA EAX,[EBX + 0x14]
// 005c8548: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c854b: MOV EDI,dword ptr [EBP + 0x6a]
//   Label: LAB_005c854b
//   XREF to: Stack[-0x24] (READ)
// 005c854e: PUSH EDI
// 005c854f: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c8552: PUSH EAX
// 005c8553: PUSH EBX
// 005c8554: CALL shape_superopt.cpp_FUN_005c8b50
//   XREF to: 005c8b50 (UNCONDITIONAL_CALL)
// 005c8559: ADD ESP,0xc
// 005c855c: TEST EAX,EAX
// 005c855e: JZ 0x005c8795
//   XREF to: 005c8795 (CONDITIONAL_JUMP)
// 005c8564: MOV ECX,0x6
// 005c8569: LEA EDI,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 005c856f: LEA ESI,[EAX + 0x10]
// 005c8572: LEA EDX,[EAX + 0x28]
// 005c8575: MOVSD.REP ES:EDI,ESI
// 005c8577: FLD double ptr [EDX]
// 005c8579: FLD double ptr [EDX + 0x8]
// 005c857c: FLD double ptr [EDX + 0x10]
// 005c857f: MOV ECX,0x6
// 005c8584: LEA EDI,[EBP + 0xa]
//   XREF to: Stack[-0x84] (DATA)
// 005c8587: LEA ESI,[EBP + -0x6e]
//   XREF to: Stack[-0xfc] (DATA)
// 005c858a: FXCH ST2
// 005c858c: FSUB double ptr [EAX + 0x10]
// 005c858f: FXCH
// 005c8591: FSUB double ptr [EAX + 0x18]
// 005c8594: FXCH ST2
// 005c8596: FSUB double ptr [EAX + 0x20]
// 005c8599: FXCH
// 005c859b: FSTP double ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (WRITE)
// 005c859e: FXCH
// 005c85a0: FSTP double ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (WRITE)
// 005c85a3: FSTP double ptr [EBP + -0x5e]
//   XREF to: Stack[-0xec] (WRITE)
// 005c85a6: MOVSD.REP ES:EDI,ESI
// 005c85a8: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x84] (READ)
// 005c85ab: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005c85ae: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x80] (READ)
// 005c85b1: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005c85b4: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (READ)
// 005c85b7: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005c85ba: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 005c85bd: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005c85c0: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x74] (READ)
// 005c85c3: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005c85c6: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x70] (READ)
// 005c85c9: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005c85cc: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 005c85cf: FLD double ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (READ)
// 005c85d2: FMUL double ptr [EAX + 0x10]
// 005c85d5: FLD double ptr [EBP + 0x1a]
//   XREF to: Stack[-0x74] (READ)
// 005c85d8: FMUL double ptr [EAX + 0x8]
// 005c85db: FSUBP
// 005c85dd: FLD double ptr [EBP + 0x1a]
//   XREF to: Stack[-0x74] (READ)
// 005c85e0: FXCH
// 005c85e2: FSTP double ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x15c] (WRITE)
// 005c85e8: FMUL double ptr [EAX]
// 005c85ea: FLD double ptr [EBP + 0xa]
//   XREF to: Stack[-0x84] (READ)
// 005c85ed: FMUL double ptr [EAX + 0x10]
// 005c85f0: FSUBP
// 005c85f2: FLD double ptr [EBP + 0xa]
//   XREF to: Stack[-0x84] (READ)
// 005c85f5: FXCH
// 005c85f7: FSTP double ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (WRITE)
// 005c85fd: FMUL double ptr [EAX + 0x8]
// 005c8600: FLD double ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (READ)
// 005c8606: FMUL ST0
// 005c8608: FLD double ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (READ)
// 005c860b: FMUL double ptr [EAX]
// 005c860d: FLD double ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x15c] (READ)
// 005c8613: FMUL ST0
// 005c8615: FXCH
// 005c8617: FSUBP ST3,ST0
// 005c8619: FADDP
// 005c861b: FXCH
// 005c861d: FST double ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x14c] (WRITE)
// 005c8623: FMUL double ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x14c] (READ)
// 005c8629: FADDP
// 005c862b: FSQRT
// 005c862d: FLD double ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x15c] (READ)
// 005c8633: FLD1
// 005c8635: FDIVRP ST2,ST0
// 005c8637: FMUL ST1
// 005c8639: FLD double ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (READ)
// 005c863f: FMUL ST2
// 005c8641: LEA EAX,[EBP + 0x7a]
//   XREF to: Stack[-0x14] (DATA)
// 005c8644: FLD double ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x14c] (READ)
// 005c864a: PUSH EAX
// 005c864b: LEA EAX,[EBP + 0x76]
//   XREF to: Stack[-0x18] (DATA)
// 005c864e: FMULP ST3
// 005c8650: PUSH EAX
// 005c8651: FXCH
// 005c8653: FSTP double ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x15c] (WRITE)
// 005c8659: MOV EAX,dword ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x15c] (READ)
// 005c865f: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8662: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005c8665: MOV EAX,dword ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x158] (READ)
// 005c866b: FSTP double ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (WRITE)
// 005c8671: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005c8674: MOV EAX,dword ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (READ)
// 005c867a: MOV ECX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c867d: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005c8680: MOV EAX,dword ptr [EBP + 0xffffff3e]
//   XREF to: Stack[-0x150] (READ)
// 005c8686: FSTP double ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x14c] (WRITE)
// 005c868c: MOV dword ptr [EBP + -0x32],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005c868f: MOV EAX,dword ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x14c] (READ)
// 005c8695: PUSH EDX
// 005c8696: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005c8699: MOV EAX,dword ptr [EBP + 0xffffff46]
//   XREF to: Stack[-0x148] (READ)
// 005c869f: PUSH ECX
// 005c86a0: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005c86a3: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xcc] (DATA)
// 005c86a6: PUSH EAX
// 005c86a7: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 005c86ad: PUSH EAX
// 005c86ae: XOR EDI,EDI
// 005c86b0: PUSH EBX
// 005c86b1: MOV dword ptr [EBP + 0x76],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005c86b4: MOV dword ptr [EBP + 0x7a],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005c86b7: CALL shape_superopt.cpp_FUN_005c9aa0
//   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)
// 005c86bc: MOV ESI,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 005c86bf: ADD ESP,0x1c
// 005c86c2: TEST ESI,ESI
// 005c86c4: JZ 0x005c8aaf
//   XREF to: 005c8aaf (CONDITIONAL_JUMP)
// 005c86ca: CMP dword ptr [EBP + 0x7a],0x0
//   XREF to: Stack[-0x14] (READ)
// 005c86ce: JZ 0x005c8aaf
//   XREF to: 005c8aaf (CONDITIONAL_JUMP)
// 005c86d4: PUSH 0x0
// 005c86d6: LEA EAX,[EBP + 0x76]
//   XREF to: Stack[-0x18] (DATA)
// 005c86d9: PUSH EAX
// 005c86da: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c86dd: PUSH EAX
// 005c86de: PUSH EBX
// 005c86df: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c86e4: ADD ESP,0x10
// 005c86e7: TEST EAX,EAX
// 005c86e9: JZ 0x005c8a4c
//   XREF to: 005c8a4c (CONDITIONAL_JUMP)
// 005c86ef: PUSH 0x0
// 005c86f1: LEA EAX,[EBP + 0x7a]
//   XREF to: Stack[-0x14] (DATA)
// 005c86f4: PUSH EAX
// 005c86f5: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c86f8: PUSH ESI
// 005c86f9: PUSH EBX
// 005c86fa: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c86ff: ADD ESP,0x10
// 005c8702: TEST EAX,EAX
// 005c8704: JZ 0x005c8a6e
//   XREF to: 005c8a6e (CONDITIONAL_JUMP)
// 005c870a: LEA EAX,[EBP + 0x76]
//   XREF to: Stack[-0x18] (DATA)
// 005c870d: PUSH EAX
// 005c870e: MOV EDX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c8711: PUSH EDX
// 005c8712: PUSH EBX
// 005c8713: CALL shape_superopt.cpp_FUN_005c91e0
//   XREF to: 005c91e0 (UNCONDITIONAL_CALL)
// 005c8718: ADD ESP,0xc
// 005c871b: TEST EAX,EAX
// 005c871d: JZ 0x005c8ad1
//   XREF to: 005c8ad1 (CONDITIONAL_JUMP)
// 005c8723: LEA EAX,[EBP + 0x7a]
//   XREF to: Stack[-0x14] (DATA)
// 005c8726: PUSH EAX
// 005c8727: PUSH ESI
// 005c8728: PUSH EBX
// 005c8729: CALL shape_superopt.cpp_FUN_005c91e0
//   XREF to: 005c91e0 (UNCONDITIONAL_CALL)
// 005c872e: ADD ESP,0xc
// 005c8731: TEST EAX,EAX
// 005c8733: JZ 0x005c8a6e
//   XREF to: 005c8a6e (CONDITIONAL_JUMP)
// 005c8739: CMP dword ptr [EBP + 0x76],0x0
//   XREF to: Stack[-0x18] (READ)
// 005c873d: JZ 0x005c8af0
//   XREF to: 005c8af0 (CONDITIONAL_JUMP)
// 005c8743: CMP dword ptr [EBP + 0x76],0x0
//   Label: LAB_005c8743
//   XREF to: Stack[-0x18] (READ)
// 005c8747: JZ 0x005c8753
//   XREF to: 005c8753 (CONDITIONAL_JUMP)
// 005c8749: CMP dword ptr [EBP + 0x7a],0x0
//   XREF to: Stack[-0x14] (READ)
// 005c874d: JNZ 0x005c8aff
//   XREF to: 005c8aff (CONDITIONAL_JUMP)
// 005c8753: MOV EDX,dword ptr [EBP + 0x76]
//   Label: LAB_005c8753
//   XREF to: Stack[-0x18] (READ)
// 005c8756: TEST EDX,EDX
// 005c8758: JZ 0x005c8b21
//   XREF to: 005c8b21 (CONDITIONAL_JUMP)
// 005c875e: IMUL ECX,EDX,0x60
// 005c8761: MOV ESI,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c8764: MOV EDI,dword ptr [EBX + 0x30]
// 005c8767: PUSH EDI
// 005c8768: MOV EAX,ECX
// 005c876a: SHR ECX,0x2
// 005c876d: MOVSD.REP ES:EDI,ESI
// 005c876f: MOV CL,AL
// 005c8771: AND CL,0x3
// 005c8774: MOVSB.REP ES:EDI,ESI
// 005c8776: POP EDI
// 005c8777: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 005c877a: MOV dword ptr [EBX + 0x2c],EAX
// 005c877d: JMP 0x005c854b
//   XREF to: 005c854b (UNCONDITIONAL_JUMP)
// 005c8782: PUSH EDI
//   Label: LAB_005c8782
// 005c8783: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8788: ADD ESP,0x4
// 005c878b: XOR EAX,EAX
// 005c878d: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8790: POP EBP
// 005c8791: POP EDI
// 005c8792: POP ESI
// 005c8793: POP EBX
// 005c8794: RET
// 005c8795: PUSH EDI
//   Label: LAB_005c8795
// 005c8796: MOV ECX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c8799: PUSH ECX
// 005c879a: PUSH EBX
// 005c879b: CALL shape_superopt.cpp_FUN_005c8e70
//   XREF to: 005c8e70 (UNCONDITIONAL_CALL)
// 005c87a0: ADD ESP,0xc
// 005c87a3: TEST EAX,EAX
// 005c87a5: JZ 0x005c8a0b
//   XREF to: 005c8a0b (CONDITIONAL_JUMP)
// 005c87ab: MOV ECX,0x6
// 005c87b0: LEA EDI,[EBP + 0x22]
//   XREF to: Stack[-0x6c] (DATA)
// 005c87b3: LEA ESI,[EAX + 0x10]
// 005c87b6: LEA EDX,[EAX + 0x28]
// 005c87b9: MOVSD.REP ES:EDI,ESI
// 005c87bb: FLD double ptr [EDX]
// 005c87bd: FLD double ptr [EDX + 0x8]
// 005c87c0: FLD double ptr [EDX + 0x10]
// 005c87c3: MOV ECX,0x6
// 005c87c8: LEA EDI,[EBP + 0x3a]
//   XREF to: Stack[-0x54] (DATA)
// 005c87cb: LEA ESI,[EBP + -0x56]
//   XREF to: Stack[-0xe4] (DATA)
// 005c87ce: FXCH ST2
// 005c87d0: FSUB double ptr [EAX + 0x10]
// 005c87d3: FXCH
// 005c87d5: FSUB double ptr [EAX + 0x18]
// 005c87d8: FXCH ST2
// 005c87da: FSUB double ptr [EAX + 0x20]
// 005c87dd: FXCH
// 005c87df: FSTP double ptr [EBP + -0x56]
//   XREF to: Stack[-0xe4] (WRITE)
// 005c87e2: FXCH
// 005c87e4: FSTP double ptr [EBP + -0x4e]
//   XREF to: Stack[-0xdc] (WRITE)
// 005c87e7: FSTP double ptr [EBP + -0x46]
//   XREF to: Stack[-0xd4] (WRITE)
// 005c87ea: MOVSD.REP ES:EDI,ESI
// 005c87ec: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 005c87ef: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005c87f2: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 005c87f5: MOV dword ptr [EBP + -0xa],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005c87f8: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 005c87fb: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005c87fe: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x48] (READ)
// 005c8801: MOV dword ptr [EBP + -0x2],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005c8804: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 005c8807: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005c880a: MOV EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (READ)
// 005c880d: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005c8810: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 005c8813: FLD double ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 005c8816: FMUL double ptr [EAX + 0x10]
// 005c8819: FLD double ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 005c881c: FMUL double ptr [EAX + 0x8]
// 005c881f: FSUBP
// 005c8821: FLD double ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 005c8824: FXCH
// 005c8826: FSTP double ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (WRITE)
// 005c882c: FMUL double ptr [EAX]
// 005c882e: FLD double ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 005c8831: FMUL double ptr [EAX + 0x10]
// 005c8834: FSUBP
// 005c8836: FLD double ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 005c8839: FXCH
// 005c883b: FSTP double ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (WRITE)
// 005c8841: FMUL double ptr [EAX + 0x8]
// 005c8844: FLD double ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (READ)
// 005c884a: FMUL ST0
// 005c884c: FLD double ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 005c884f: FMUL double ptr [EAX]
// 005c8851: FLD double ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (READ)
// 005c8857: FMUL ST0
// 005c8859: FXCH
// 005c885b: FSUBP ST3,ST0
// 005c885d: FADDP
// 005c885f: FXCH
// 005c8861: FST double ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (WRITE)
// 005c8867: FMUL double ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (READ)
// 005c886d: FADDP
// 005c886f: FSQRT
// 005c8871: FLD double ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (READ)
// 005c8877: FLD1
// 005c8879: FDIVRP ST2,ST0
// 005c887b: FMUL ST1
// 005c887d: FLD double ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (READ)
// 005c8883: FMUL ST2
// 005c8885: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x2c] (DATA)
// 005c8888: FLD double ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (READ)
// 005c888e: PUSH EAX
// 005c888f: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 005c8892: FMULP ST3
// 005c8894: PUSH EAX
// 005c8895: FXCH
// 005c8897: FSTP double ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (WRITE)
// 005c889d: MOV EAX,dword ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (READ)
// 005c88a3: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c88a6: MOV dword ptr [EBP + 0xffffff62],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 005c88ac: MOV EAX,dword ptr [EBP + 0xffffff4e]
//   XREF to: Stack[-0x140] (READ)
// 005c88b2: FSTP double ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (WRITE)
// 005c88b8: MOV dword ptr [EBP + 0xffffff66],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005c88be: MOV EAX,dword ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (READ)
// 005c88c4: MOV ECX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c88c7: MOV dword ptr [EBP + 0xffffff6a],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005c88cd: MOV EAX,dword ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x138] (READ)
// 005c88d3: FSTP double ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (WRITE)
// 005c88d9: MOV dword ptr [EBP + 0xffffff6e],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005c88df: MOV EAX,dword ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (READ)
// 005c88e5: PUSH EDX
// 005c88e6: MOV dword ptr [EBP + 0xffffff72],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005c88ec: MOV EAX,dword ptr [EBP + 0xffffff5e]
//   XREF to: Stack[-0x130] (READ)
// 005c88f2: PUSH ECX
// 005c88f3: MOV dword ptr [EBP + 0xffffff76],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005c88f9: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x12c] (DATA)
// 005c88ff: PUSH EAX
// 005c8900: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x6c] (DATA)
// 005c8903: PUSH EAX
// 005c8904: XOR EDI,EDI
// 005c8906: PUSH EBX
// 005c8907: MOV dword ptr [EBP + 0x66],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005c890a: MOV dword ptr [EBP + 0x62],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 005c890d: CALL shape_superopt.cpp_FUN_005c9aa0
//   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)
// 005c8912: MOV ESI,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 005c8915: ADD ESP,0x1c
// 005c8918: TEST ESI,ESI
// 005c891a: JZ 0x005c8a2a
//   XREF to: 005c8a2a (CONDITIONAL_JUMP)
// 005c8920: CMP dword ptr [EBP + 0x62],0x0
//   XREF to: Stack[-0x2c] (READ)
// 005c8924: JZ 0x005c8a2a
//   XREF to: 005c8a2a (CONDITIONAL_JUMP)
// 005c892a: PUSH 0x0
// 005c892c: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 005c892f: PUSH EAX
// 005c8930: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c8933: PUSH EAX
// 005c8934: PUSH EBX
// 005c8935: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c893a: ADD ESP,0x10
// 005c893d: TEST EAX,EAX
// 005c893f: JZ 0x005c8a4c
//   XREF to: 005c8a4c (CONDITIONAL_JUMP)
// 005c8945: PUSH 0x0
// 005c8947: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x2c] (DATA)
// 005c894a: PUSH EAX
// 005c894b: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c894e: PUSH ESI
// 005c894f: PUSH EBX
// 005c8950: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c8955: ADD ESP,0x10
// 005c8958: TEST EAX,EAX
// 005c895a: JZ 0x005c8a6e
//   XREF to: 005c8a6e (CONDITIONAL_JUMP)
// 005c8960: MOV EDX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 005c8963: TEST EDX,EDX
// 005c8965: JZ 0x005c8a2a
//   XREF to: 005c8a2a (CONDITIONAL_JUMP)
// 005c896b: CMP dword ptr [EBP + 0x62],0x0
//   XREF to: Stack[-0x2c] (READ)
// 005c896f: JZ 0x005c8a2a
//   XREF to: 005c8a2a (CONDITIONAL_JUMP)
// 005c8975: LEA ECX,[EDX*0x4 + 0x0]
// 005c897c: MOV ESI,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 005c897f: SUB ECX,EDX
// 005c8981: MOV EDI,dword ptr [EBX + 0x30]
// 005c8984: SHL ECX,0x5
// 005c8987: PUSH EDI
// 005c8988: MOV EAX,ECX
// 005c898a: SHR ECX,0x2
// 005c898d: MOVSD.REP ES:EDI,ESI
// 005c898f: MOV CL,AL
// 005c8991: AND CL,0x3
// 005c8994: MOVSB.REP ES:EDI,ESI
// 005c8996: POP EDI
// 005c8997: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 005c899a: PUSH EBX
// 005c899b: MOV dword ptr [EBX + 0x2c],EAX
// 005c899e: CALL shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
//   XREF to: 005c84c0 (UNCONDITIONAL_CALL)
// 005c89a3: ADD ESP,0x4
// 005c89a6: TEST EAX,EAX
// 005c89a8: JZ 0x005c8a8d
//   XREF to: 005c8a8d (CONDITIONAL_JUMP)
// 005c89ae: MOV EDX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 005c89b1: LEA ECX,[EDX*0x4 + 0x0]
// 005c89b8: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c89bb: SUB ECX,EDX
// 005c89bd: MOV EDI,dword ptr [EBX + 0x30]
// 005c89c0: SHL ECX,0x5
// 005c89c3: PUSH EDI
// 005c89c4: MOV EAX,ECX
// 005c89c6: SHR ECX,0x2
// 005c89c9: MOVSD.REP ES:EDI,ESI
// 005c89cb: MOV CL,AL
// 005c89cd: AND CL,0x3
// 005c89d0: MOVSB.REP ES:EDI,ESI
// 005c89d2: POP EDI
// 005c89d3: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 005c89d6: PUSH EBX
// 005c89d7: MOV dword ptr [EBX + 0x2c],EAX
// 005c89da: CALL shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
//   XREF to: 005c84c0 (UNCONDITIONAL_CALL)
// 005c89df: ADD ESP,0x4
// 005c89e2: TEST EAX,EAX
// 005c89e4: JZ 0x005c8a4c
//   XREF to: 005c8a4c (CONDITIONAL_JUMP)
// 005c89e6: MOV EBX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c89e6
//   XREF to: Stack[-0x20] (READ)
// 005c89e9: PUSH EBX
// 005c89ea: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c89ef: ADD ESP,0x4
// 005c89f2: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c89f5: PUSH ESI
// 005c89f6: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c89fb: MOV EAX,0x1
// 005c8a00: ADD ESP,0x4
// 005c8a03: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8a06: POP EBP
// 005c8a07: POP EDI
// 005c8a08: POP ESI
// 005c8a09: POP EBX
// 005c8a0a: RET
// 005c8a0b: MOV EBX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8a0b
//   XREF to: Stack[-0x20] (READ)
// 005c8a0e: PUSH EBX
// 005c8a0f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a14: ADD ESP,0x4
// 005c8a17: PUSH EDI
// 005c8a18: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a1d: ADD ESP,0x4
// 005c8a20: XOR EAX,EAX
// 005c8a22: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8a25: POP EBP
// 005c8a26: POP EDI
// 005c8a27: POP ESI
// 005c8a28: POP EBX
// 005c8a29: RET
// 005c8a2a: MOV EBX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8a2a
//   XREF to: Stack[-0x20] (READ)
// 005c8a2d: PUSH EBX
// 005c8a2e: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a33: ADD ESP,0x4
// 005c8a36: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8a39: PUSH ESI
// 005c8a3a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a3f: ADD ESP,0x4
// 005c8a42: XOR EAX,EAX
// 005c8a44: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8a47: POP EBP
// 005c8a48: POP EDI
// 005c8a49: POP ESI
// 005c8a4a: POP EBX
// 005c8a4b: RET
// 005c8a4c: MOV EDX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8a4c
//   XREF to: Stack[-0x20] (READ)
// 005c8a4f: PUSH EDX
// 005c8a50: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a55: ADD ESP,0x4
// 005c8a58: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8a5b: PUSH ECX
// 005c8a5c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a61: ADD ESP,0x4
// 005c8a64: XOR EAX,EAX
// 005c8a66: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8a69: POP EBP
// 005c8a6a: POP EDI
// 005c8a6b: POP ESI
// 005c8a6c: POP EBX
// 005c8a6d: RET
// 005c8a6e: MOV EDI,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8a6e
//   XREF to: Stack[-0x20] (READ)
// 005c8a71: PUSH EDI
// 005c8a72: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a77: ADD ESP,0x4
// 005c8a7a: PUSH ESI
// 005c8a7b: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a80: ADD ESP,0x4
// 005c8a83: XOR EAX,EAX
// 005c8a85: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8a88: POP EBP
// 005c8a89: POP EDI
// 005c8a8a: POP ESI
// 005c8a8b: POP EBX
// 005c8a8c: RET
// 005c8a8d: MOV EDI,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8a8d
//   XREF to: Stack[-0x20] (READ)
// 005c8a90: PUSH EDI
// 005c8a91: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8a96: ADD ESP,0x4
// 005c8a99: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8a9c: PUSH EAX
// 005c8a9d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8aa2: ADD ESP,0x4
// 005c8aa5: XOR EAX,EAX
// 005c8aa7: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8aaa: POP EBP
// 005c8aab: POP EDI
// 005c8aac: POP ESI
// 005c8aad: POP EBX
// 005c8aae: RET
// 005c8aaf: MOV ECX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8aaf
//   XREF to: Stack[-0x20] (READ)
// 005c8ab2: PUSH ECX
// 005c8ab3: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8ab8: ADD ESP,0x4
// 005c8abb: MOV EBX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8abe: PUSH EBX
// 005c8abf: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8ac4: ADD ESP,0x4
// 005c8ac7: XOR EAX,EAX
// 005c8ac9: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8acc: POP EBP
// 005c8acd: POP EDI
// 005c8ace: POP ESI
// 005c8acf: POP EBX
// 005c8ad0: RET
// 005c8ad1: MOV ECX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8ad1
//   XREF to: Stack[-0x20] (READ)
// 005c8ad4: PUSH ECX
// 005c8ad5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8ada: ADD ESP,0x4
// 005c8add: PUSH ESI
// 005c8ade: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8ae3: ADD ESP,0x4
// 005c8ae6: XOR EAX,EAX
// 005c8ae8: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8aeb: POP EBP
// 005c8aec: POP EDI
// 005c8aed: POP ESI
// 005c8aee: POP EBX
// 005c8aef: RET
// 005c8af0: CMP dword ptr [EBP + 0x7a],0x0
//   Label: LAB_005c8af0
//   XREF to: Stack[-0x14] (READ)
// 005c8af4: JNZ 0x005c8743
//   XREF to: 005c8743 (CONDITIONAL_JUMP)
// 005c8afa: JMP 0x005c89e6
//   XREF to: 005c89e6 (UNCONDITIONAL_JUMP)
// 005c8aff: MOV EAX,dword ptr [EBP + 0x6e]
//   Label: LAB_005c8aff
//   XREF to: Stack[-0x20] (READ)
// 005c8b02: PUSH EAX
// 005c8b03: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8b08: ADD ESP,0x4
// 005c8b0b: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8b0e: PUSH EDX
// 005c8b0f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c8b14: ADD ESP,0x4
// 005c8b17: XOR EAX,EAX
// 005c8b19: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005c8b1c: POP EBP
// 005c8b1d: POP EDI
// 005c8b1e: POP ESI
// 005c8b1f: POP EBX
// 005c8b20: RET
// 005c8b21: IMUL ECX,dword ptr [EBP + 0x7a],0x60
//   Label: LAB_005c8b21
//   XREF to: Stack[-0x14] (READ)
// 005c8b25: MOV EDI,dword ptr [EBX + 0x30]
// 005c8b28: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 005c8b2b: PUSH EDI
// 005c8b2c: MOV EAX,ECX
// 005c8b2e: SHR ECX,0x2
// 005c8b31: MOVSD.REP ES:EDI,ESI
// 005c8b33: MOV CL,AL
// 005c8b35: AND CL,0x3
// 005c8b38: MOVSB.REP ES:EDI,ESI
// 005c8b3a: POP EDI
// 005c8b3b: MOV EAX,dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 005c8b3e: MOV dword ptr [EBX + 0x2c],EAX
// 005c8b41: JMP 0x005c854b
//   XREF to: 005c854b (UNCONDITIONAL_JUMP)
