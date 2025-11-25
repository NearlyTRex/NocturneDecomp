// Name: shape_superopt.cpp_FUN_005c9500
// Address: 005c9500
// Address Range: [[005c9500, 005c9a9e]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9500()
// Globals:
//   double DOUBLE_0065423a = 0.5
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   shape_superopt.cpp_FUN_005c79a0
//   shape_superopt.cpp_FUN_005c79f0
//   shape_superopt.cpp_FUN_005c9aa0

#include "nocturne.h"

void * shape_superopt_cpp_FUN_005c9500(void)

{
  bool bVar1;
  bool bVar2;
  SIZE_T size;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  int in_stack_00000004;
  double *in_stack_00000008;
  undefined4 in_stack_fffffe78;
  undefined4 in_stack_fffffe7c;
  undefined4 in_stack_fffffe80;
  undefined4 in_stack_fffffe84;
  undefined4 in_stack_fffffe88;
  undefined4 in_stack_fffffe8c;
  undefined4 local_158 [6];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b8;
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
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [6];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  bVar11 = 0;
  if ((*(int *)(in_stack_00000004 + 0x2c) == 0) ||
     (iVar7 = *(int *)(in_stack_00000004 + 0x30), iVar7 == 0)) {
    local_1c = (void *)0x0;
  }
  else {
    puVar9 = (undefined4 *)(iVar7 + 0x10);
    puVar10 = local_e0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = local_e0;
    puVar10 = (undefined4 *)&stack0xfffffe78;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar8 = 0;
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      pdVar6 = (double *)(iVar7 + 0x10);
      do {
        if (*pdVar6 < (double)CONCAT44(local_e0[1],local_e0[0])) {
          local_e0[0] = *(undefined4 *)pdVar6;
          local_e0[1] = *(undefined4 *)((int)pdVar6 + 4);
        }
        if (pdVar6[1] < (double)CONCAT44(local_e0[3],local_e0[2])) {
          local_e0[2] = *(undefined4 *)(pdVar6 + 1);
          local_e0[3] = *(undefined4 *)((int)pdVar6 + 0xc);
        }
        if (pdVar6[2] < (double)CONCAT44(uStack_cc,local_d0)) {
          local_d0 = *(undefined4 *)(pdVar6 + 2);
          uStack_cc = *(undefined4 *)((int)pdVar6 + 0x14);
        }
        if ((double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78) < *pdVar6) {
          in_stack_fffffe78 = *(undefined4 *)pdVar6;
          in_stack_fffffe7c = *(undefined4 *)((int)pdVar6 + 4);
        }
        if ((double)CONCAT44(in_stack_fffffe84,in_stack_fffffe80) < pdVar6[1]) {
          in_stack_fffffe80 = *(undefined4 *)(pdVar6 + 1);
          in_stack_fffffe84 = *(undefined4 *)((int)pdVar6 + 0xc);
        }
        if ((double)CONCAT44(in_stack_fffffe8c,in_stack_fffffe88) < pdVar6[2]) {
          in_stack_fffffe88 = *(undefined4 *)(pdVar6 + 2);
          in_stack_fffffe8c = *(undefined4 *)((int)pdVar6 + 0x14);
        }
        uVar8 = uVar8 + 1;
        pdVar6 = pdVar6 + 0xc;
      } while (uVar8 < *(uint *)(in_stack_00000004 + 0x2c));
    }
    local_1c = crt_memory_c_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
    local_28 = 0;
    if (local_1c != (void *)0x0) {
      size = *(int *)(in_stack_00000004 + 0x2c) * 0xc0;
      local_18 = local_1c;
      local_20 = crt_memory_c_malloc_FUN_006021da(size);
      local_14 = local_20;
      local_24 = 0;
      if (local_20 == (void *)0x0) {
        crt_memory_c_free_FUN_005fe659(local_18);
        return (void *)0x0;
      }
      if (*in_stack_00000008 + DOUBLE_0065423a <
          (double)CONCAT44(in_stack_fffffe7c,size) - (double)CONCAT44(local_e0[1],local_e0[0])) {
        local_80 = 0;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_7c = 0x3ff00000;
        local_f0 = local_e0[2];
        local_ec = local_e0[3];
        local_28 = 0;
        local_e8 = local_d0;
        local_24 = 0;
        local_e4 = uStack_cc;
        local_f8 = *in_stack_00000008 + (double)CONCAT44(local_e0[1],local_e0[0]);
        pdVar6 = &local_f8;
        puVar9 = local_158;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *(undefined4 *)pdVar6;
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar11 * -8 + 4);
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        local_140 = 0;
        local_13c = 0x3ff00000;
        local_138 = 0;
        local_134 = 0;
        local_130 = 0;
        local_12c = 0;
      }
      else if (in_stack_00000008[1] + DOUBLE_0065423a <
               (double)CONCAT44(in_stack_fffffe84,in_stack_fffffe80) -
               (double)CONCAT44(local_e0[3],local_e0[2])) {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 0;
        local_44 = 0x3ff00000;
        local_38 = *(undefined4 *)(in_stack_00000008 + 1);
        uStack_34 = *(undefined4 *)((int)in_stack_00000008 + 0xc);
        local_c8 = local_e0[0];
        local_c4 = local_e0[1];
        local_b8 = local_d0;
        local_b4 = uStack_cc;
        local_28 = 0;
        local_c0 = (double)CONCAT44(local_e0[3],local_e0[2]) + in_stack_00000008[1];
        puVar9 = &local_c8;
        puVar10 = (undefined4 *)&stack0xfffffe90;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_128 = 0;
        local_124 = 0;
        local_120 = 0;
        local_118 = 0;
        local_114 = 0;
        local_11c = 0x3ff00000;
      }
      else {
        if ((double)CONCAT44(in_stack_fffffe8c,in_stack_fffffe88) -
            (double)CONCAT44(uStack_cc,local_d0) <= in_stack_00000008[2] + DOUBLE_0065423a) {
          crt_memory_c_free_FUN_005fe659(local_18);
          crt_memory_c_free_FUN_005fe659(local_20);
          return (void *)0x0;
        }
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0x3ff00000;
        local_30 = *(undefined4 *)(in_stack_00000008 + 2);
        uStack_2c = *(undefined4 *)((int)in_stack_00000008 + 0x14);
        local_110 = local_e0[0];
        local_10c = local_e0[1];
        local_108 = local_e0[2];
        local_104 = local_e0[3];
        local_100 = (double)CONCAT44(uStack_cc,local_d0) + in_stack_00000008[2];
        puVar9 = &local_110;
        puVar10 = local_68;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_28 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0x3ff00000;
      }
      shape_superopt_cpp_FUN_005c9aa0();
      pvVar4 = local_1c;
      bVar1 = false;
      if (local_28 != 0) {
        pvVar3 = local_1c;
        do {
          if ((*(int *)((int)pvVar3 + 8) == 0) || (*(int *)((int)pvVar3 + 0xc) == 0)) {
            bVar1 = true;
            break;
          }
          pvVar3 = (void *)((int)pvVar3 + 0x60);
        } while (pvVar3 < (void *)(local_28 * 0x60 + (int)local_1c));
      }
      bVar2 = false;
      if (local_24 != 0) {
        pvVar3 = local_14;
        do {
          if ((*(int *)((int)pvVar3 + 8) == 0) || (*(int *)((int)pvVar3 + 0xc) == 0)) {
            bVar2 = true;
            break;
          }
          pvVar3 = (void *)((int)pvVar3 + 0x60);
        } while (pvVar3 < (void *)(local_24 * 0x60 + (int)local_14));
      }
      if ((bVar1) || (bVar2)) {
        iVar7 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if (iVar7 == 0) {
          crt_memory_c_free_FUN_005fe659(pvVar4);
          crt_memory_c_free_FUN_005fe659(local_14);
          return (void *)0x0;
        }
        iVar7 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if (iVar7 == 0) {
          crt_memory_c_free_FUN_005fe659(pvVar4);
          crt_memory_c_free_FUN_005fe659(local_14);
          return (void *)0x0;
        }
      }
      pvVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      if (pvVar4 != (void *)0x0) {
        pvVar4 = (void *)shape_superopt_cpp_FUN_005c79a0();
      }
      if (pvVar4 != (void *)0x0) {
        *(undefined4 *)((int)pvVar4 + 0x10) = *(undefined4 *)(in_stack_00000004 + 0x10);
        *(undefined4 *)((int)pvVar4 + 0x14) = *(undefined4 *)(in_stack_00000004 + 0x14);
        *(undefined4 *)((int)pvVar4 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x18);
        *(undefined4 *)((int)pvVar4 + 0x1c) = *(undefined4 *)(in_stack_00000004 + 0x1c);
        *(undefined4 *)((int)pvVar4 + 0x20) = *(undefined4 *)(in_stack_00000004 + 0x20);
        *(undefined4 *)((int)pvVar4 + 0x24) = *(undefined4 *)(in_stack_00000004 + 0x24);
        *(undefined4 *)((int)pvVar4 + 0x28) = *(undefined4 *)(in_stack_00000004 + 0x28);
        *(int *)((int)pvVar4 + 0x2c) = local_28;
        *(void **)((int)pvVar4 + 0x30) = local_1c;
        shape_superopt_cpp_FUN_005c79f0();
        *(int *)(in_stack_00000004 + 0x2c) = local_24;
        *(void **)(in_stack_00000004 + 0x30) = local_14;
        return pvVar4;
      }
      crt_memory_c_free_FUN_005fe659(local_1c);
      crt_memory_c_free_FUN_005fe659(local_14);
      return (void *)0x0;
    }
  }
  return local_1c;
}


// Assembly code:
// 005c9500: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c9500
// 005c9501: PUSH ESI
// 005c9502: PUSH EDI
// 005c9503: PUSH EBP
// 005c9504: MOV EBP,ESP
// 005c9506: SUB ESP,0x178
// 005c950c: SUB EBP,0x7a
// 005c950f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 005c9515: CMP dword ptr [EBX + 0x2c],0x0
// 005c9519: JZ 0x005c963a
//   XREF to: 005c963a (CONDITIONAL_JUMP)
// 005c951f: MOV ECX,dword ptr [EBX + 0x30]
// 005c9522: TEST ECX,ECX
// 005c9524: JZ 0x005c963a
//   XREF to: 005c963a (CONDITIONAL_JUMP)
// 005c952a: MOV EAX,ECX
// 005c952c: LEA EDI,[EBP + -0x56]
//   XREF to: Stack[-0xe0] (DATA)
// 005c952f: MOV ECX,0x6
// 005c9534: LEA ESI,[EAX + 0x10]
// 005c9537: MOVSD.REP ES:EDI,ESI
// 005c9539: MOV ECX,0x6
// 005c953e: LEA EDI,[EBP + 0xffffff02]
//   XREF to: Stack[-0x188] (DATA)
// 005c9544: LEA ESI,[EBP + -0x56]
//   XREF to: Stack[-0xe0] (DATA)
// 005c9547: MOVSD.REP ES:EDI,ESI
// 005c9549: MOV EDI,dword ptr [EBX + 0x2c]
// 005c954c: XOR ESI,ESI
// 005c954e: TEST EDI,EDI
// 005c9550: JBE 0x005c960b
//   XREF to: 005c960b (CONDITIONAL_JUMP)
// 005c9556: LEA ECX,[EAX + 0x10]
// 005c9559: FLD double ptr [ECX]
//   Label: LAB_005c9559
// 005c955b: MOV EDX,ECX
// 005c955d: FCOMP double ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 005c9560: FNSTSW AX
// 005c9562: SAHF
// 005c9563: JNC 0x005c9570
//   XREF to: 005c9570 (CONDITIONAL_JUMP)
// 005c9565: MOV EAX,dword ptr [ECX]
// 005c9567: MOV dword ptr [EBP + -0x56],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005c956a: MOV EAX,dword ptr [ECX + 0x4]
// 005c956d: MOV dword ptr [EBP + -0x52],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005c9570: FLD double ptr [EDX + 0x8]
//   Label: LAB_005c9570
// 005c9573: FCOMP double ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 005c9576: FNSTSW AX
// 005c9578: SAHF
// 005c9579: JNC 0x005c9587
//   XREF to: 005c9587 (CONDITIONAL_JUMP)
// 005c957b: MOV EAX,dword ptr [EDX + 0x8]
// 005c957e: MOV dword ptr [EBP + -0x4e],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005c9581: MOV EAX,dword ptr [EDX + 0xc]
// 005c9584: MOV dword ptr [EBP + -0x4a],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005c9587: FLD double ptr [EDX + 0x10]
//   Label: LAB_005c9587
// 005c958a: FCOMP double ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 005c958d: FNSTSW AX
// 005c958f: SAHF
// 005c9590: JNC 0x005c959e
//   XREF to: 005c959e (CONDITIONAL_JUMP)
// 005c9592: MOV EAX,dword ptr [EDX + 0x10]
// 005c9595: MOV dword ptr [EBP + -0x46],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005c9598: MOV EAX,dword ptr [EDX + 0x14]
// 005c959b: MOV dword ptr [EBP + -0x42],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005c959e: FLD double ptr [EDX]
//   Label: LAB_005c959e
// 005c95a0: FCOMP double ptr [EBP + 0xffffff02]
//   XREF to: Stack[-0x188] (READ)
// 005c95a6: FNSTSW AX
// 005c95a8: SAHF
// 005c95a9: JBE 0x005c95bc
//   XREF to: 005c95bc (CONDITIONAL_JUMP)
// 005c95ab: MOV EAX,dword ptr [EDX]
// 005c95ad: MOV dword ptr [EBP + 0xffffff02],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005c95b3: MOV EAX,dword ptr [EDX + 0x4]
// 005c95b6: MOV dword ptr [EBP + 0xffffff06],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005c95bc: FLD double ptr [EDX + 0x8]
//   Label: LAB_005c95bc
// 005c95bf: FCOMP double ptr [EBP + 0xffffff0a]
//   XREF to: Stack[-0x180] (READ)
// 005c95c5: FNSTSW AX
// 005c95c7: SAHF
// 005c95c8: JBE 0x005c95dc
//   XREF to: 005c95dc (CONDITIONAL_JUMP)
// 005c95ca: MOV EAX,dword ptr [EDX + 0x8]
// 005c95cd: MOV dword ptr [EBP + 0xffffff0a],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005c95d3: MOV EAX,dword ptr [EDX + 0xc]
// 005c95d6: MOV dword ptr [EBP + 0xffffff0e],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005c95dc: FLD double ptr [EDX + 0x10]
//   Label: LAB_005c95dc
// 005c95df: FCOMP double ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (READ)
// 005c95e5: FNSTSW AX
// 005c95e7: SAHF
// 005c95e8: JBE 0x005c95fc
//   XREF to: 005c95fc (CONDITIONAL_JUMP)
// 005c95ea: MOV EAX,dword ptr [EDX + 0x10]
// 005c95ed: MOV dword ptr [EBP + 0xffffff12],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005c95f3: MOV EAX,dword ptr [EDX + 0x14]
// 005c95f6: MOV dword ptr [EBP + 0xffffff16],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005c95fc: INC ESI
//   Label: LAB_005c95fc
// 005c95fd: MOV EAX,dword ptr [EBX + 0x2c]
// 005c9600: ADD ECX,0x60
// 005c9603: CMP ESI,EAX
// 005c9605: JC 0x005c9559
//   XREF to: 005c9559 (CONDITIONAL_JUMP)
// 005c960b: MOV EDX,dword ptr [EBX + 0x2c]
//   Label: LAB_005c960b
// 005c960e: LEA EAX,[EDX*0x4 + 0x0]
// 005c9615: SUB EAX,EDX
// 005c9617: SHL EAX,0x6
// 005c961a: PUSH EAX
// 005c961b: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005c9620: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c9623: ADD ESP,0x4
// 005c9626: XOR EDX,EDX
// 005c9628: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c962b: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c962e: TEST EAX,EAX
// 005c9630: JNZ 0x005c963e
//   XREF to: 005c963e (CONDITIONAL_JUMP)
// 005c9632: LEA ESP,[EBP + 0x7a]
//   Label: LAB_005c9632
//   XREF to: Stack[-0x10] (DATA)
// 005c9635: POP EBP
// 005c9636: POP EDI
// 005c9637: POP ESI
// 005c9638: POP EBX
// 005c9639: RET
// 005c963a: XOR EAX,EAX
//   Label: LAB_005c963a
// 005c963c: JMP 0x005c9632
//   XREF to: 005c9632 (UNCONDITIONAL_JUMP)
// 005c963e: MOV EDX,dword ptr [EBX + 0x2c]
//   Label: LAB_005c963e
// 005c9641: LEA EAX,[EDX*0x4 + 0x0]
// 005c9648: SUB EAX,EDX
// 005c964a: SHL EAX,0x6
// 005c964d: PUSH EAX
// 005c964e: XOR ESI,ESI
// 005c9650: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005c9655: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c9658: ADD ESP,0x4
// 005c965b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c965e: MOV dword ptr [EBP + 0x66],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005c9661: TEST EAX,EAX
// 005c9663: JZ 0x005c9869
//   XREF to: 005c9869 (CONDITIONAL_JUMP)
// 005c9669: FLD double ptr [EBP + 0xffffff02]
//   XREF to: Stack[-0x188] (READ)
// 005c966f: FSUB double ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 005c9672: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c9678: FLD double ptr [EAX]
// 005c967a: FADD double ptr [0x0065423a]
//   XREF to: 0065423a (READ)
// 005c9680: FCOMPP
// 005c9682: FNSTSW AX
// 005c9684: SAHF
// 005c9685: JC 0x005c987f
//   XREF to: 005c987f (CONDITIONAL_JUMP)
// 005c968b: FLD double ptr [EBP + 0xffffff0a]
//   XREF to: Stack[-0x180] (READ)
// 005c9691: FSUB double ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 005c9694: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c969a: FLD double ptr [EAX + 0x8]
// 005c969d: FADD double ptr [0x0065423a]
//   XREF to: 0065423a (READ)
// 005c96a3: FCOMPP
// 005c96a5: FNSTSW AX
// 005c96a7: SAHF
// 005c96a8: JC 0x005c9923
//   XREF to: 005c9923 (CONDITIONAL_JUMP)
// 005c96ae: FLD double ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (READ)
// 005c96b4: FSUB double ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 005c96b7: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c96bd: FLD double ptr [EAX + 0x10]
// 005c96c0: FADD double ptr [0x0065423a]
//   XREF to: 0065423a (READ)
// 005c96c6: FCOMPP
// 005c96c8: FNSTSW AX
// 005c96ca: SAHF
// 005c96cb: JNC 0x005c99d7
//   XREF to: 005c99d7 (CONDITIONAL_JUMP)
// 005c96d1: MOV dword ptr [EBP + -0xe],ESI
//   XREF to: Stack[-0x98] (WRITE)
// 005c96d4: MOV dword ptr [EBP + -0xa],ESI
//   XREF to: Stack[-0x94] (WRITE)
// 005c96d7: MOV dword ptr [EBP + -0x6],ESI
//   XREF to: Stack[-0x90] (WRITE)
// 005c96da: MOV dword ptr [EBP + -0x2],ESI
//   XREF to: Stack[-0x8c] (WRITE)
// 005c96dd: MOV dword ptr [EBP + 0x2],ESI
//   XREF to: Stack[-0x88] (WRITE)
// 005c96e0: MOV ESI,0x3ff00000
// 005c96e5: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c96eb: MOV dword ptr [EBP + 0x6],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 005c96ee: MOV EAX,dword ptr [EAX + 0x10]
// 005c96f1: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c96f4: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c96fa: FLD double ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 005c96fd: MOV EAX,dword ptr [EAX + 0x14]
// 005c9700: MOV ECX,0x6
// 005c9705: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c9708: MOV EAX,dword ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 005c970b: LEA EDI,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 005c970e: MOV dword ptr [EBP + 0xffffff7a],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005c9714: MOV EAX,dword ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (READ)
// 005c9717: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 005c971a: MOV dword ptr [EBP + 0xffffff7e],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 005c9720: MOV EAX,dword ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 005c9723: LEA ESI,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x110] (DATA)
// 005c9729: MOV dword ptr [EBP + -0x7e],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005c972c: MOV EAX,dword ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (READ)
// 005c972f: FADD double ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 005c9732: MOV dword ptr [EBP + -0x7a],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005c9735: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x24] (DATA)
// 005c9738: FSTP double ptr [EBP + -0x76]
//   XREF to: Stack[-0x100] (WRITE)
// 005c973b: PUSH EAX
// 005c973c: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x28] (DATA)
// 005c973f: MOVSD.REP ES:EDI,ESI
// 005c9741: PUSH EAX
// 005c9742: MOV ECX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005c9745: XOR EDI,EDI
// 005c9747: PUSH EDX
// 005c9748: MOV ESI,0x3ff00000
// 005c974d: MOV dword ptr [EBP + 0x62],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005c9750: PUSH ECX
// 005c9751: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 005c9754: MOV dword ptr [EBP + -0x26],EDI
//   XREF to: Stack[-0xb0] (WRITE)
// 005c9757: PUSH EAX
// 005c9758: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 005c975b: MOV dword ptr [EBP + -0x22],EDI
//   XREF to: Stack[-0xac] (WRITE)
// 005c975e: PUSH EAX
// 005c975f: MOV dword ptr [EBP + -0x1e],EDI
//   XREF to: Stack[-0xa8] (WRITE)
// 005c9762: MOV dword ptr [EBP + -0x1a],EDI
//   XREF to: Stack[-0xa4] (WRITE)
// 005c9765: PUSH EBX
// 005c9766: MOV dword ptr [EBP + -0x16],EDI
//   XREF to: Stack[-0xa0] (WRITE)
// 005c9769: MOV dword ptr [EBP + -0x12],ESI
//   XREF to: Stack[-0x9c] (WRITE)
// 005c976c: CALL shape_superopt.cpp_FUN_005c9aa0
//   Label: LAB_005c976c
//   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)
// 005c9771: ADD ESP,0x1c
// 005c9774: MOV EDX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 005c9777: XOR ESI,ESI
// 005c9779: TEST EDX,EDX
// 005c977b: JBE 0x005c97a7
//   XREF to: 005c97a7 (CONDITIONAL_JUMP)
// 005c977d: MOV ECX,EDX
// 005c977f: SHL EDX,0x2
// 005c9782: SUB EDX,ECX
// 005c9784: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 005c9787: SHL EDX,0x5
// 005c978a: ADD EDX,EAX
// 005c978c: CMP dword ptr [EAX + 0x8],0x0
//   Label: LAB_005c978c
// 005c9790: JZ 0x005c99f9
//   XREF to: 005c99f9 (CONDITIONAL_JUMP)
// 005c9796: CMP dword ptr [EAX + 0xc],0x0
// 005c979a: JZ 0x005c99f9
//   XREF to: 005c99f9 (CONDITIONAL_JUMP)
// 005c97a0: ADD EAX,0x60
// 005c97a3: CMP EAX,EDX
// 005c97a5: JC 0x005c978c
//   XREF to: 005c978c (CONDITIONAL_JUMP)
// 005c97a7: MOV EAX,dword ptr [EBP + 0x66]
//   Label: LAB_005c97a7
//   XREF to: Stack[-0x24] (READ)
// 005c97aa: XOR EDI,EDI
// 005c97ac: TEST EAX,EAX
// 005c97ae: JBE 0x005c97df
//   XREF to: 005c97df (CONDITIONAL_JUMP)
// 005c97b0: MOV ECX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 005c97b3: LEA EDX,[ECX*0x4 + 0x0]
// 005c97ba: SUB EDX,ECX
// 005c97bc: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005c97bf: SHL EDX,0x5
// 005c97c2: ADD EDX,EAX
// 005c97c4: CMP dword ptr [EAX + 0x8],0x0
//   Label: LAB_005c97c4
// 005c97c8: JZ 0x005c9a03
//   XREF to: 005c9a03 (CONDITIONAL_JUMP)
// 005c97ce: CMP dword ptr [EAX + 0xc],0x0
// 005c97d2: JZ 0x005c9a03
//   XREF to: 005c9a03 (CONDITIONAL_JUMP)
// 005c97d8: ADD EAX,0x60
// 005c97db: CMP EAX,EDX
// 005c97dd: JC 0x005c97c4
//   XREF to: 005c97c4 (CONDITIONAL_JUMP)
// 005c97df: TEST ESI,ESI
//   Label: LAB_005c97df
// 005c97e1: JNZ 0x005c9a0d
//   XREF to: 005c9a0d (CONDITIONAL_JUMP)
// 005c97e7: TEST EDI,EDI
// 005c97e9: JNZ 0x005c9a0d
//   XREF to: 005c9a0d (CONDITIONAL_JUMP)
// 005c97ef: PUSH 0x34
//   Label: LAB_005c97ef
// 005c97f1: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005c97f6: ADD ESP,0x4
// 005c97f9: TEST EAX,EAX
// 005c97fb: JZ 0x005c9806
//   XREF to: 005c9806 (CONDITIONAL_JUMP)
// 005c97fd: PUSH EAX
// 005c97fe: CALL shape_superopt.cpp_FUN_005c79a0
//   XREF to: 005c79a0 (UNCONDITIONAL_CALL)
// 005c9803: ADD ESP,0x4
// 005c9806: MOV ESI,EAX
//   Label: LAB_005c9806
// 005c9808: TEST ESI,ESI
// 005c980a: JZ 0x005c9a7d
//   XREF to: 005c9a7d (CONDITIONAL_JUMP)
// 005c9810: MOV EAX,dword ptr [EBX + 0x10]
// 005c9813: LEA EDX,[EBX + 0x14]
// 005c9816: MOV dword ptr [ESI + 0x10],EAX
// 005c9819: LEA EAX,[ESI + 0x14]
// 005c981c: MOV ECX,dword ptr [EDX]
// 005c981e: MOV dword ptr [EAX],ECX
// 005c9820: MOV ECX,dword ptr [EDX + 0x4]
// 005c9823: MOV dword ptr [EAX + 0x4],ECX
// 005c9826: MOV ECX,dword ptr [EDX + 0x8]
// 005c9829: MOV dword ptr [EAX + 0x8],ECX
// 005c982c: MOV ECX,dword ptr [EDX + 0xc]
// 005c982f: MOV dword ptr [EAX + 0xc],ECX
// 005c9832: MOV ECX,dword ptr [EDX + 0x10]
// 005c9835: MOV dword ptr [EAX + 0x10],ECX
// 005c9838: MOV ECX,dword ptr [EDX + 0x14]
// 005c983b: MOV dword ptr [EAX + 0x14],ECX
// 005c983e: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 005c9841: MOV dword ptr [ESI + 0x2c],EAX
// 005c9844: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 005c9847: PUSH EBX
// 005c9848: MOV dword ptr [ESI + 0x30],EAX
// 005c984b: CALL shape_superopt.cpp_FUN_005c79f0
//   XREF to: 005c79f0 (UNCONDITIONAL_CALL)
// 005c9850: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 005c9853: MOV dword ptr [EBX + 0x2c],EAX
// 005c9856: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005c9859: ADD ESP,0x4
// 005c985c: MOV dword ptr [EBX + 0x30],EAX
// 005c985f: MOV EAX,ESI
// 005c9861: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005c9864: POP EBP
// 005c9865: POP EDI
// 005c9866: POP ESI
// 005c9867: POP EBX
// 005c9868: RET
// 005c9869: MOV EAX,dword ptr [EBP + 0x72]
//   Label: LAB_005c9869
//   XREF to: Stack[-0x18] (READ)
// 005c986c: PUSH EAX
// 005c986d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9872: ADD ESP,0x4
// 005c9875: XOR EAX,EAX
// 005c9877: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005c987a: POP EBP
// 005c987b: POP EDI
// 005c987c: POP ESI
// 005c987d: POP EBX
// 005c987e: RET
// 005c987f: MOV EDX,0x3ff00000
//   Label: LAB_005c987f
// 005c9884: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c988a: MOV ECX,0x6
// 005c988f: LEA EDI,[EBP + 0xffffff32]
//   XREF to: Stack[-0x158] (DATA)
// 005c9895: MOV dword ptr [EBP + 0xa],ESI
//   XREF to: Stack[-0x80] (WRITE)
// 005c9898: MOV dword ptr [EBP + 0x12],ESI
//   XREF to: Stack[-0x78] (WRITE)
// 005c989b: MOV dword ptr [EBP + 0x16],ESI
//   XREF to: Stack[-0x74] (WRITE)
// 005c989e: MOV dword ptr [EBP + 0x1a],ESI
//   XREF to: Stack[-0x70] (WRITE)
// 005c98a1: MOV dword ptr [EBP + 0x1e],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 005c98a4: MOV dword ptr [EBP + 0xe],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 005c98a7: LEA ESI,[EBP + -0x6e]
//   XREF to: Stack[-0xf8] (DATA)
// 005c98aa: FLD double ptr [EAX]
// 005c98ac: MOV EAX,dword ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 005c98af: XOR EDX,EDX
// 005c98b1: MOV dword ptr [EBP + -0x66],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005c98b4: MOV EAX,dword ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (READ)
// 005c98b7: FADD double ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 005c98ba: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005c98bd: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 005c98c0: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c98c3: MOV dword ptr [EBP + -0x5e],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005c98c6: MOV EAX,dword ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (READ)
// 005c98c9: MOV dword ptr [EBP + 0x66],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c98cc: MOV dword ptr [EBP + -0x5a],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005c98cf: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x24] (DATA)
// 005c98d2: FSTP double ptr [EBP + -0x6e]
//   XREF to: Stack[-0xf8] (WRITE)
// 005c98d5: PUSH EAX
// 005c98d6: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x28] (DATA)
// 005c98d9: MOVSD.REP ES:EDI,ESI
// 005c98db: PUSH EAX
// 005c98dc: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 005c98df: MOV dword ptr [EBP + 0xffffff4a],EDX
//   XREF to: Stack[-0x140] (WRITE)
// 005c98e5: PUSH ESI
// 005c98e6: MOV EDI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005c98e9: MOV EDX,0x3ff00000
// 005c98ee: PUSH EDI
// 005c98ef: LEA EAX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x140] (DATA)
// 005c98f5: MOV dword ptr [EBP + 0xffffff4e],EDX
//   XREF to: Stack[-0x13c] (WRITE)
// 005c98fb: PUSH EAX
// 005c98fc: LEA EAX,[EBP + 0xffffff32]
//   XREF to: Stack[-0x158] (DATA)
// 005c9902: XOR ECX,ECX
// 005c9904: PUSH EAX
// 005c9905: MOV dword ptr [EBP + 0xffffff52],ECX
//   XREF to: Stack[-0x138] (WRITE)
// 005c990b: MOV dword ptr [EBP + 0xffffff56],ECX
//   XREF to: Stack[-0x134] (WRITE)
// 005c9911: PUSH EBX
// 005c9912: MOV dword ptr [EBP + 0xffffff5a],ECX
//   XREF to: Stack[-0x130] (WRITE)
// 005c9918: MOV dword ptr [EBP + 0xffffff5e],ECX
//   XREF to: Stack[-0x12c] (WRITE)
// 005c991e: JMP 0x005c976c
//   XREF to: 005c976c (UNCONDITIONAL_JUMP)
// 005c9923: MOV ECX,0x3ff00000
//   Label: LAB_005c9923
// 005c9928: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c992e: MOV dword ptr [EBP + 0x3a],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 005c9931: MOV dword ptr [EBP + 0x3e],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 005c9934: MOV dword ptr [EBP + 0x42],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 005c9937: MOV dword ptr [EBP + 0x4a],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 005c993a: MOV dword ptr [EBP + 0x4e],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 005c993d: MOV dword ptr [EBP + 0x46],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 005c9940: MOV EAX,dword ptr [EAX + 0x8]
// 005c9943: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005c9946: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005c994c: MOV EAX,dword ptr [EAX + 0xc]
// 005c994f: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005c9952: MOV EAX,dword ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 005c9955: FLD double ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 005c9958: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005c995b: MOV EAX,dword ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (READ)
// 005c995e: LEA EDI,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x170] (DATA)
// 005c9964: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005c9967: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 005c996a: LEA ESI,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 005c996d: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005c9970: MOV EAX,dword ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (READ)
// 005c9973: MOV ECX,0x6
// 005c9978: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005c997b: XOR EAX,EAX
// 005c997d: FADD double ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 005c9980: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c9983: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x24] (DATA)
// 005c9986: FSTP double ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (WRITE)
// 005c9989: PUSH EAX
// 005c998a: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x28] (DATA)
// 005c998d: MOVSD.REP ES:EDI,ESI
// 005c998f: PUSH EAX
// 005c9990: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 005c9993: XOR EDI,EDI
// 005c9995: PUSH ECX
// 005c9996: MOV ESI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005c9999: MOV dword ptr [EBP + 0xffffff62],EDI
//   XREF to: Stack[-0x128] (WRITE)
// 005c999f: PUSH ESI
// 005c99a0: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 005c99a6: MOV dword ptr [EBP + 0xffffff66],EDI
//   XREF to: Stack[-0x124] (WRITE)
// 005c99ac: PUSH EAX
// 005c99ad: LEA EAX,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x170] (DATA)
// 005c99b3: MOV dword ptr [EBP + 0xffffff6a],EDI
//   XREF to: Stack[-0x120] (WRITE)
// 005c99b9: PUSH EAX
// 005c99ba: MOV dword ptr [EBP + 0xffffff72],EDI
//   XREF to: Stack[-0x118] (WRITE)
// 005c99c0: MOV ECX,0x3ff00000
// 005c99c5: PUSH EBX
// 005c99c6: MOV dword ptr [EBP + 0xffffff76],EDI
//   XREF to: Stack[-0x114] (WRITE)
// 005c99cc: MOV dword ptr [EBP + 0xffffff6e],ECX
//   XREF to: Stack[-0x11c] (WRITE)
// 005c99d2: JMP 0x005c976c
//   XREF to: 005c976c (UNCONDITIONAL_JUMP)
// 005c99d7: MOV EDX,dword ptr [EBP + 0x72]
//   Label: LAB_005c99d7
//   XREF to: Stack[-0x18] (READ)
// 005c99da: PUSH EDX
// 005c99db: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c99e0: ADD ESP,0x4
// 005c99e3: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 005c99e6: PUSH ECX
// 005c99e7: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c99ec: ADD ESP,0x4
// 005c99ef: XOR EAX,EAX
// 005c99f1: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005c99f4: POP EBP
// 005c99f5: POP EDI
// 005c99f6: POP ESI
// 005c99f7: POP EBX
// 005c99f8: RET
// 005c99f9: MOV ESI,0x1
//   Label: LAB_005c99f9
// 005c99fe: JMP 0x005c97a7
//   XREF to: 005c97a7 (UNCONDITIONAL_JUMP)
// 005c9a03: MOV EDI,0x1
//   Label: LAB_005c9a03
// 005c9a08: JMP 0x005c97df
//   XREF to: 005c97df (UNCONDITIONAL_JUMP)
// 005c9a0d: PUSH 0x0
//   Label: LAB_005c9a0d
// 005c9a0f: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x28] (DATA)
// 005c9a12: PUSH EAX
// 005c9a13: MOV ESI,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 005c9a16: PUSH ESI
// 005c9a17: PUSH EBX
// 005c9a18: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c9a1d: ADD ESP,0x10
// 005c9a20: TEST EAX,EAX
// 005c9a22: JZ 0x005c9a5e
//   XREF to: 005c9a5e (CONDITIONAL_JUMP)
// 005c9a24: PUSH 0x0
// 005c9a26: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x24] (DATA)
// 005c9a29: PUSH EAX
// 005c9a2a: MOV EDX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005c9a2d: PUSH EDX
// 005c9a2e: PUSH EBX
// 005c9a2f: CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
//   XREF to: 005ca590 (UNCONDITIONAL_CALL)
// 005c9a34: ADD ESP,0x10
// 005c9a37: TEST EAX,EAX
// 005c9a39: JNZ 0x005c97ef
//   XREF to: 005c97ef (CONDITIONAL_JUMP)
// 005c9a3f: PUSH ESI
// 005c9a40: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9a45: ADD ESP,0x4
// 005c9a48: MOV EBX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005c9a4b: PUSH EBX
// 005c9a4c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9a51: ADD ESP,0x4
// 005c9a54: XOR EAX,EAX
// 005c9a56: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005c9a59: POP EBP
// 005c9a5a: POP EDI
// 005c9a5b: POP ESI
// 005c9a5c: POP EBX
// 005c9a5d: RET
// 005c9a5e: PUSH ESI
//   Label: LAB_005c9a5e
// 005c9a5f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9a64: ADD ESP,0x4
// 005c9a67: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005c9a6a: PUSH EAX
// 005c9a6b: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9a70: ADD ESP,0x4
// 005c9a73: XOR EAX,EAX
// 005c9a75: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005c9a78: POP EBP
// 005c9a79: POP EDI
// 005c9a7a: POP ESI
// 005c9a7b: POP EBX
// 005c9a7c: RET
// 005c9a7d: MOV ESI,dword ptr [EBP + 0x6e]
//   Label: LAB_005c9a7d
//   XREF to: Stack[-0x1c] (READ)
// 005c9a80: PUSH ESI
// 005c9a81: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9a86: ADD ESP,0x4
// 005c9a89: MOV EDI,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005c9a8c: PUSH EDI
// 005c9a8d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c9a92: ADD ESP,0x4
// 005c9a95: XOR EAX,EAX
// 005c9a97: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005c9a9a: POP EBP
// 005c9a9b: POP EDI
// 005c9a9c: POP ESI
// 005c9a9d: POP EBX
// 005c9a9e: RET
