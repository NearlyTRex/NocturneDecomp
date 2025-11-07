// Name: core_skeledit.cpp_FUN_0058d790
// Address: 0058d790
// Address Range: [[0058d790, 0058ddd5]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058d790()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d419 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064ae12
//   TerminatedCString s_Can_t_find_any_bones_inf_0064ae27
//   TerminatedCString s_core_skeledit_cpp_0064ae50
//   TerminatedCString s_BUG_Count_mismatch_0064ae65
//   TerminatedCString s_core_skeledit_cpp_0064ae7b
//   TerminatedCString s_core_skeledit_cpp_0064ae90
//   TerminatedCString s_Out_of_memory_0064aea5
//   double DOUBLE_0064aeba = 256
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_meshlod.cpp_FUN_0051bd30

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058d790(void)

{
  CSkeleton *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 *puVar7;
  float *pfVar8;
  CVector3f *pCVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  int iStack00000008;
  CDeformableModel *in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  int in_stack_00000018;
  float fVar18;
  float fVar19;
  float afStack_518 [250];
  float fStack_130;
  float fStack_12c;
  float afStack_128 [50];
  CVector3f aCStack_60 [2];
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  CDeformableModel *local_20;
  float *local_14;
  int iStack_10;
  int iStack_c;
  
  bVar14 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x558);
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  iStack_c = pCVar1->bone_count;
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (in_stack_0000000c,in_stack_00000010,*in_stack_00000014,in_stack_00000014[2],0);
  local_28 = 0;
  local_3c = 0;
  local_2c = 0;
  local_48 = in_stack_00000010 * 4;
  do {
    iVar10 = local_48;
    if (*(int *)((int)in_stack_0000000c->vertex_count + local_48) <= local_28) {
      shape_meshlod_cpp_FUN_0051bd30();
      shape_meshlod_cpp_FUN_0051bd30();
      shape_meshlod_cpp_FUN_0051bd30();
      iVar5 = 0;
      iVar10 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          *(undefined4 *)(iVar10 + 0x7178) = 0;
          *(undefined4 *)(iVar10 + 0x7164) = 0;
          iVar5 = iVar5 + 1;
          iVar10 = iVar10 + 0x60;
        } while (iVar5 < in_stack_0000000c->num_parts);
      }
      in_stack_0000000c->tri_count[in_stack_00000010] = 0;
      in_stack_0000000c->cap_tri_count[in_stack_00000010] = 0;
      local_14 = (float *)0x0;
      if (0 < in_stack_00000014[2]) {
        iStack_10 = in_stack_00000010 * 4;
        local_2c = 0;
        local_24 = 0;
        local_38 = (int)in_stack_0000000c->lod_info + iStack_10 + -4;
        local_34 = 0;
        do {
          puVar13 = (undefined4 *)(in_stack_00000014[3] + local_34);
          iVar10 = *(int *)(local_38 + 0x7c) + local_24;
          dVar17 = (double)CONCAT44(puVar13,iVar10);
          *(undefined4 *)(local_2c + *(int *)(local_38 + 0x90)) = *puVar13;
          fVar15 = (float10)DOUBLE_0064aeba;
          puVar7 = puVar13;
          do {
            *SUB84(dVar17,0) = *(undefined2 *)(puVar7 + 4);
            fVar16 = (float10)*(float *)((int)((ulonglong)dVar17 >> 0x20) + 0x1c) * fVar15;
            dVar17 = crt_math_c_round_FUN_005fe6b0(dVar17);
            iVar5 = (int)((ulonglong)dVar17 >> 0x20);
            in_stack_0000000c = (CDeformableModel *)(int)ROUND(fVar16);
            *(short *)(SUB84(dVar17,0) + 6) = (short)in_stack_0000000c;
            fVar16 = (float10)*(float *)(iVar5 + 0x20) * fVar15;
            dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar5 + 8,SUB84(dVar17,0) + 2));
            puVar7 = (undefined4 *)(extraout_ECX + 4);
            *(short *)(SUB84(dVar17,0) + 10) = (short)(int)ROUND(fVar16);
          } while (SUB84(dVar17,0) != iVar10 + 6);
          if (puVar13[2] == 0) {
            piVar4 = (int *)((int)in_stack_0000000c->parts[puVar13[1]].tri_counts + iStack_10);
            *piVar4 = *piVar4 + 1;
            piVar4 = (int *)((int)in_stack_0000000c->tri_count + iStack_10);
            *piVar4 = *piVar4 + 1;
          }
          else {
            piVar4 = (int *)((int)in_stack_0000000c->parts[puVar13[1]].cap_tri_counts + iStack_10);
            *piVar4 = *piVar4 + 1;
            piVar4 = (int *)((int)in_stack_0000000c->cap_tri_count + iStack_10);
            *piVar4 = *piVar4 + 1;
          }
          local_2c = local_2c + 4;
          local_24 = local_24 + 0x12;
          local_34 = local_34 + 0x8c;
          local_14 = (float *)((int)local_14 + 1);
        } while ((int)local_14 < in_stack_00000014[2]);
      }
      iVar12 = 0;
      iVar6 = 0;
      iVar5 = 0;
      iVar10 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          iVar5 = iVar5 + *(int *)(iVar10 + 0x7164);
          iVar12 = iVar12 + *(int *)(iVar10 + 0x7178);
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 0x60;
        } while (iVar6 < in_stack_0000000c->num_parts);
      }
      if ((iVar5 != in_stack_0000000c->tri_count[in_stack_00000010]) ||
         (iVar12 != in_stack_0000000c->cap_tri_count[in_stack_00000010])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x89c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < in_stack_0000000c->cap_tri_count[in_stack_00000010]) {
        piVar4 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                  (in_stack_0000000c->cap_tri_count[in_stack_00000010] * 4,
                                   "..\\core\\skeledit.cpp",0x8a1);
        in_stack_0000000c->cap_index_ptr[in_stack_00000010] = piVar4;
        if (piVar4 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x8a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iStack00000008 = 0;
        iStack_10 = 0;
        iVar10 = in_stack_0000000c->tri_count[in_stack_00000010];
        if (0 < in_stack_0000000c->num_parts) {
          local_20 = in_stack_0000000c;
          do {
            iVar12 = iStack00000008 << 2;
            iVar5 = iVar10 * 0x8c;
            for (iVar6 = 0; iVar6 < local_20->parts[0].cap_tri_counts[in_stack_00000010];
                iVar6 = iVar6 + 1) {
              iVar10 = iVar10 + 1;
              *(undefined4 *)((int)in_stack_0000000c->cap_index_ptr[in_stack_00000010] + iVar12) =
                   *(undefined4 *)(in_stack_00000014[3] + iVar5 + 0xc);
              iVar5 = iVar5 + 0x8c;
              iStack00000008 = iStack00000008 + 1;
              iVar12 = iVar12 + 4;
            }
            local_20 = (CDeformableModel *)(local_20->tri_count + 3);
            iStack_10 = iStack_10 + 1;
          } while (iStack_10 < in_stack_0000000c->num_parts);
        }
      }
      return;
    }
    pfVar8 = (float *)(in_stack_00000014[1] + local_2c);
    fVar19 = *pfVar8;
    pfVar11 = pfVar8 + 3;
    pfVar2 = afStack_518;
    for (iVar5 = 0xfa; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar2 = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pfVar2 = pfVar2 + (uint)bVar14 * -2 + 1;
    }
    fStack_130 = pfVar8[0xfd];
    fStack_12c = pfVar8[0xfe];
    pfVar11 = pfVar8 + 0xff;
    pfVar2 = afStack_128;
    for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar2 = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pfVar2 = pfVar2 + (uint)bVar14 * -2 + 1;
    }
    pfVar11 = (float *)(*(int *)((int)in_stack_0000000c->vertex_data_ptr + iVar10) + local_3c);
    dVar17 = 0.0;
    *(byte *)pfVar11 = 0;
    local_14 = pfVar11 + 4;
    while (*(byte *)pfVar11 < 3) {
      iVar10 = -1;
      iVar5 = 0;
      fVar18 = 0.0;
      if (0 < unaff_EBP) {
        iVar6 = 0;
        do {
          if (fVar18 < *(float *)((int)afStack_518 + iVar6)) {
            fVar18 = *(float *)((int)afStack_518 + iVar6);
            iVar10 = iVar5;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar5 < unaff_EBP);
      }
      if (fVar18 <= 0.0) break;
      *(byte *)((int)pfVar11 + *(byte *)pfVar11 + 1) = (byte)iVar10;
      pfVar11[*(byte *)pfVar11 + 1] = fVar18;
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (aCStack_60,(CVector3f *)&stack0xfffffadc,
                          (CMatrix3x4f *)(iVar10 * 0x30 + in_stack_00000018));
      pCVar9 = (CVector3f *)((uint)*(byte *)pfVar11 * 0xc + iStack_10);
      if (pCVar9 != pCVar3) {
        pCVar9->x = pCVar3->x;
        pCVar9->y = pCVar3->y;
        pCVar9->z = pCVar3->z;
      }
      afStack_518[iVar10 + 1] = 0.0;
      dVar17 = (double)(fVar19 + (float)dVar17);
      *(byte *)pfVar11 = *(byte *)pfVar11 + 1;
    }
    if (*(byte *)pfVar11 == 0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x856;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find any bones influencing vertex!");
    }
    pfVar2 = pfVar11;
    for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)pfVar11; iVar10 = iVar10 + 1) {
      pfVar8 = pfVar2 + 1;
      pfVar2 = pfVar2 + 1;
      *pfVar2 = *pfVar8 / (float)dVar17;
    }
    local_2c = local_2c + 0x4c4;
    local_28 = local_28 + 1;
    local_3c = local_3c + 0x34;
  } while( true );
}


// Assembly code:
// 0058d790: PUSH 0x558
//   Label: core_skeledit.cpp_FUN_0058d790
// 0058d795: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058d79a: PUSH EBX
// 0058d79b: PUSH ESI
// 0058d79c: PUSH EDI
// 0058d79d: PUSH EBP
// 0058d79e: MOV EBP,ESP
// 0058d7a0: SUB ESP,0x530
// 0058d7a6: AND ESP,0xfffffff8
// 0058d7a9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058d7ac: PUSH EDX
// 0058d7ad: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0058d7b2: ADD ESP,0x4
// 0058d7b5: MOV EAX,dword ptr [EAX + 0x28558]
// 0058d7bb: MOV dword ptr [ESP + 0x528],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058d7c2: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058d7c5: PUSH 0x0
// 0058d7c7: MOV ECX,dword ptr [EAX + 0x8]
// 0058d7ca: PUSH ECX
// 0058d7cb: MOV EBX,dword ptr [EAX]
// 0058d7cd: PUSH EBX
// 0058d7ce: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058d7d1: PUSH ESI
// 0058d7d2: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058d7d5: PUSH EDI
// 0058d7d6: CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   XREF to: 0059a510 (UNCONDITIONAL_CALL)
// 0058d7db: ADD ESP,0x14
// 0058d7de: XOR EAX,EAX
// 0058d7e0: XOR EDX,EDX
// 0058d7e2: MOV dword ptr [ESP + 0x508],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0058d7e9: MOV dword ptr [ESP + 0x4f4],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058d7f0: LEA EAX,[ESI*0x4 + 0x0]
// 0058d7f7: MOV dword ptr [ESP + 0x504],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058d7fe: MOV dword ptr [ESP + 0x4e8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0058d805: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_0058d805
//   XREF to: Stack[0x4] (READ)
// 0058d808: ADD EBX,dword ptr [ESP + 0x4e8]
//   XREF to: Stack[-0x58] (READ)
// 0058d80f: MOV EAX,dword ptr [ESP + 0x508]
//   XREF to: Stack[-0x38] (READ)
// 0058d816: CMP EAX,dword ptr [EBX + 0x2c]
// 0058d819: JGE 0x0058d9f4
//   XREF to: 0058d9f4 (CONDITIONAL_JUMP)
// 0058d81f: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058d822: MOV ESI,dword ptr [ESP + 0x504]
//   XREF to: Stack[-0x3c] (READ)
// 0058d829: MOV EDX,dword ptr [EDX + 0x4]
// 0058d82c: ADD EDX,ESI
// 0058d82e: MOV EAX,dword ptr [EDX]
// 0058d830: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x534] (WRITE)
// 0058d834: LEA EAX,[EDX + 0x4]
// 0058d837: MOV EAX,dword ptr [EAX]
// 0058d839: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x530] (WRITE)
// 0058d83d: LEA EAX,[EDX + 0x8]
// 0058d840: MOV EAX,dword ptr [EAX]
// 0058d842: MOV ECX,0xfa
// 0058d847: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x52c] (WRITE)
// 0058d84b: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0x528] (DATA)
// 0058d84f: LEA ESI,[EDX + 0xc]
// 0058d852: MOVSD.REP ES:EDI,ESI
// 0058d854: MOV EAX,dword ptr [EDX + 0x3f4]
// 0058d85a: MOV dword ptr [ESP + 0x400],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 0058d861: MOV EAX,dword ptr [EDX + 0x3f8]
// 0058d867: MOV ECX,0x32
// 0058d86c: MOV dword ptr [ESP + 0x404],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 0058d873: LEA EDI,[ESP + 0x408]
//   XREF to: Stack[-0x138] (DATA)
// 0058d87a: LEA ESI,[EDX + 0x3fc]
// 0058d880: MOVSD.REP ES:EDI,ESI
// 0058d882: XOR EAX,EAX
// 0058d884: MOV EDI,dword ptr [ESP + 0x4f4]
//   XREF to: Stack[-0x4c] (READ)
// 0058d88b: MOV ESI,dword ptr [EBX + 0x40]
// 0058d88e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x540] (DATA)
// 0058d891: ADD ESI,EDI
// 0058d893: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x53c] (WRITE)
// 0058d897: LEA EAX,[ESI + 0x10]
// 0058d89a: MOV byte ptr [ESI],0x0
// 0058d89d: MOV dword ptr [ESP + 0x51c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058d8a4: XOR EAX,EAX
//   Label: LAB_0058d8a4
// 0058d8a6: MOV AL,byte ptr [ESI]
// 0058d8a8: CMP EAX,0x3
// 0058d8ab: JGE 0x0058d8fa
//   XREF to: 0058d8fa (CONDITIONAL_JUMP)
// 0058d8ad: MOV EBX,0xffffffff
// 0058d8b2: MOV EAX,dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x18] (READ)
// 0058d8b9: XOR EDI,EDI
// 0058d8bb: XOR EDX,EDX
// 0058d8bd: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x538] (WRITE)
// 0058d8c1: TEST EAX,EAX
// 0058d8c3: JLE 0x0058d8ed
//   XREF to: 0058d8ed (CONDITIONAL_JUMP)
// 0058d8c5: MOV EDI,dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x18] (READ)
// 0058d8cc: XOR ECX,ECX
// 0058d8ce: FLD float ptr [ESP + ECX*0x1 + 0x18]
//   Label: LAB_0058d8ce
// 0058d8d2: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x538] (READ)
// 0058d8d6: FNSTSW AX
// 0058d8d8: SAHF
// 0058d8d9: JBE 0x0058d8e5
//   XREF to: 0058d8e5 (CONDITIONAL_JUMP)
// 0058d8db: MOV EAX,dword ptr [ESP + ECX*0x1 + 0x18]
// 0058d8df: MOV EBX,EDX
// 0058d8e1: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x538] (WRITE)
// 0058d8e5: INC EDX
//   Label: LAB_0058d8e5
// 0058d8e6: ADD ECX,0x4
// 0058d8e9: CMP EDX,EDI
// 0058d8eb: JL 0x0058d8ce
//   XREF to: 0058d8ce (CONDITIONAL_JUMP)
// 0058d8ed: FLD float ptr [ESP + 0x8]
//   Label: LAB_0058d8ed
//   XREF to: Stack[-0x538] (READ)
// 0058d8f1: FLDZ
// 0058d8f3: FCOMPP
// 0058d8f5: FNSTSW AX
// 0058d8f7: SAHF
// 0058d8f8: JC 0x0058d95e
//   XREF to: 0058d95e (CONDITIONAL_JUMP)
// 0058d8fa: XOR EAX,EAX
//   Label: LAB_0058d8fa
// 0058d8fc: MOV AL,byte ptr [ESI]
// 0058d8fe: CMP EAX,0x1
// 0058d901: JL 0x0058d9cd
//   XREF to: 0058d9cd (CONDITIONAL_JUMP)
// 0058d907: MOV EAX,ESI
//   Label: LAB_0058d907
// 0058d909: XOR EDX,EDX
// 0058d90b: XOR ECX,ECX
//   Label: LAB_0058d90b
// 0058d90d: MOV CL,byte ptr [ESI]
// 0058d90f: CMP EDX,ECX
// 0058d911: JGE 0x0058d925
//   XREF to: 0058d925 (CONDITIONAL_JUMP)
// 0058d913: FLD float ptr [EAX + 0x4]
// 0058d916: FLD ST0
// 0058d918: FDIV double ptr [ESP]
//   XREF to: Stack[-0x540] (DATA)
// 0058d91b: ADD EAX,0x4
// 0058d91e: INC EDX
// 0058d91f: FSTP ST1
// 0058d921: FSTP float ptr [EAX]
// 0058d923: JMP 0x0058d90b
//   XREF to: 0058d90b (UNCONDITIONAL_JUMP)
// 0058d925: MOV EBX,dword ptr [ESP + 0x504]
//   Label: LAB_0058d925
//   XREF to: Stack[-0x3c] (READ)
// 0058d92c: MOV ESI,dword ptr [ESP + 0x508]
//   XREF to: Stack[-0x38] (READ)
// 0058d933: MOV ECX,dword ptr [ESP + 0x4f4]
//   XREF to: Stack[-0x4c] (READ)
// 0058d93a: ADD EBX,0x4c4
// 0058d940: INC ESI
// 0058d941: ADD ECX,0x34
// 0058d944: MOV dword ptr [ESP + 0x504],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058d94b: MOV dword ptr [ESP + 0x508],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0058d952: MOV dword ptr [ESP + 0x4f4],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058d959: JMP 0x0058d805
//   XREF to: 0058d805 (UNCONDITIONAL_JUMP)
// 0058d95e: XOR EAX,EAX
//   Label: LAB_0058d95e
// 0058d960: MOV AL,byte ptr [ESI]
// 0058d962: MOV byte ptr [ESI + EAX*0x1 + 0x1],BL
// 0058d966: XOR EAX,EAX
// 0058d968: MOV AL,byte ptr [ESI]
// 0058d96a: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x538] (READ)
// 0058d96e: MOV dword ptr [ESI + EAX*0x4 + 0x4],EDX
// 0058d972: IMUL EAX,EBX,0x30
// 0058d975: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0058d978: PUSH EAX
// 0058d979: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x534] (DATA)
// 0058d97d: PUSH EAX
// 0058d97e: LEA EAX,[ESP + 0x4d8]
//   XREF to: Stack[-0x70] (DATA)
// 0058d985: PUSH EAX
// 0058d986: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0058d98b: XOR EDX,EDX
// 0058d98d: MOV DL,byte ptr [ESI]
// 0058d98f: IMUL EDX,EDX,0xc
// 0058d992: ADD ESP,0xc
// 0058d995: ADD EDX,dword ptr [ESP + 0x51c]
//   XREF to: Stack[-0x24] (READ)
// 0058d99c: CMP EDX,EAX
// 0058d99e: JNZ 0x0058d9bb
//   XREF to: 0058d9bb (CONDITIONAL_JUMP)
// 0058d9a0: XOR EDI,EDI
//   Label: LAB_0058d9a0
// 0058d9a2: MOV dword ptr [ESP + EBX*0x4 + 0x18],EDI
// 0058d9a6: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x538] (READ)
// 0058d9aa: MOV AH,byte ptr [ESI]
// 0058d9ac: FADD double ptr [ESP]
//   XREF to: Stack[-0x540] (DATA)
// 0058d9af: INC AH
// 0058d9b1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x540] (DATA)
// 0058d9b4: MOV byte ptr [ESI],AH
// 0058d9b6: JMP 0x0058d8a4
//   XREF to: 0058d8a4 (UNCONDITIONAL_JUMP)
// 0058d9bb: MOV ECX,dword ptr [EAX]
//   Label: LAB_0058d9bb
// 0058d9bd: MOV dword ptr [EDX],ECX
// 0058d9bf: MOV ECX,dword ptr [EAX + 0x4]
// 0058d9c2: MOV dword ptr [EDX + 0x4],ECX
// 0058d9c5: MOV ECX,dword ptr [EAX + 0x8]
// 0058d9c8: MOV dword ptr [EDX + 0x8],ECX
// 0058d9cb: JMP 0x0058d9a0
//   XREF to: 0058d9a0 (UNCONDITIONAL_JUMP)
// 0058d9cd: MOV EAX,0x64ae12
//   Label: LAB_0058d9cd
//   XREF to: 0064ae12 (DATA)
// 0058d9d2: MOV EDX,0x856
// 0058d9d7: PUSH 0x64ae27
//   XREF to: 0064ae27 (DATA)
// 0058d9dc: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0058d9e1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0058d9e7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058d9ec: ADD ESP,0x4
// 0058d9ef: JMP 0x0058d907
//   XREF to: 0058d907 (UNCONDITIONAL_JUMP)
// 0058d9f4: PUSH 0x0
//   Label: LAB_0058d9f4
// 0058d9f6: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058d9f9: PUSH EAX
// 0058d9fa: CALL shape_meshlod.cpp_FUN_0051bd30
//   XREF to: 0051bd30 (UNCONDITIONAL_CALL)
// 0058d9ff: ADD ESP,0x8
// 0058da02: PUSH 0x1
// 0058da04: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058da07: PUSH EDX
// 0058da08: CALL shape_meshlod.cpp_FUN_0051bd30
//   XREF to: 0051bd30 (UNCONDITIONAL_CALL)
// 0058da0d: ADD ESP,0x8
// 0058da10: PUSH 0x2
// 0058da12: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058da15: PUSH ECX
// 0058da16: CALL shape_meshlod.cpp_FUN_0051bd30
//   XREF to: 0051bd30 (UNCONDITIONAL_CALL)
// 0058da1b: ADD ESP,0x8
// 0058da1e: XOR ECX,ECX
// 0058da20: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058da23: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058da26: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058da29: SHL ESI,0x2
// 0058da2c: MOV EBX,dword ptr [EDX + 0x7140]
// 0058da32: ADD EAX,ESI
// 0058da34: TEST EBX,EBX
// 0058da36: JLE 0x0058da60
//   XREF to: 0058da60 (CONDITIONAL_JUMP)
// 0058da38: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058da3b: XOR EBX,EBX
// 0058da3d: MOV dword ptr [EAX + 0x7178],EBX
//   Label: LAB_0058da3d
// 0058da43: MOV dword ptr [EAX + 0x7164],EBX
// 0058da49: INC ECX
// 0058da4a: MOV EDI,dword ptr [EDX + 0x7140]
// 0058da50: ADD EAX,0x60
// 0058da53: CMP ECX,EDI
// 0058da55: JL 0x0058da3d
//   XREF to: 0058da3d (CONDITIONAL_JUMP)
// 0058da57: LEA EAX,[EAX]
// 0058da5d: LEA EDX,[EDX]
// 0058da60: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0058da60
//   XREF to: Stack[0x4] (READ)
// 0058da63: MOV dword ptr [ESI + EAX*0x1 + 0x54],0x0
// 0058da6b: MOV dword ptr [ESI + EAX*0x1 + 0x68],0x0
// 0058da73: XOR EAX,EAX
// 0058da75: MOV dword ptr [ESP + 0x510],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058da7c: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058da7f: CMP dword ptr [EAX + 0x8],0x0
// 0058da83: JLE 0x0058dbde
//   XREF to: 0058dbde (CONDITIONAL_JUMP)
// 0058da89: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058da8c: XOR ESI,ESI
// 0058da8e: SHL EAX,0x2
// 0058da91: MOV dword ptr [ESP + 0x4f8],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0058da98: MOV dword ptr [ESP + 0x514],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058da9f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058daa2: MOV EBX,dword ptr [ESP + 0x514]
//   XREF to: Stack[-0x2c] (READ)
// 0058daa9: MOV dword ptr [ESP + 0x500],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 0058dab0: ADD EAX,EBX
// 0058dab2: MOV dword ptr [ESP + 0x4f0],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 0058dab9: MOV dword ptr [ESP + 0x4ec],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0058dac0: MOV EDI,dword ptr [EBP + 0x1c]
//   Label: LAB_0058dac0
//   XREF to: Stack[0xc] (READ)
// 0058dac3: MOV EDX,dword ptr [ESP + 0x4f0]
//   XREF to: Stack[-0x50] (READ)
// 0058daca: MOV ESI,dword ptr [ESP + 0x4ec]
//   XREF to: Stack[-0x54] (READ)
// 0058dad1: MOV ECX,dword ptr [ESP + 0x500]
//   XREF to: Stack[-0x40] (READ)
// 0058dad8: MOV EAX,dword ptr [ESP + 0x4ec]
//   XREF to: Stack[-0x54] (READ)
// 0058dadf: MOV EDI,dword ptr [EDI + 0xc]
// 0058dae2: MOV ESI,dword ptr [ESI + 0x7c]
// 0058dae5: MOV EAX,dword ptr [EAX + 0x90]
// 0058daeb: ADD EDI,EDX
// 0058daed: MOV EDX,dword ptr [ESP + 0x4f8]
//   XREF to: Stack[-0x48] (READ)
// 0058daf4: ADD ESI,ECX
// 0058daf6: ADD EDX,EAX
// 0058daf8: MOV EAX,dword ptr [EDI]
// 0058dafa: MOV ECX,EDI
// 0058dafc: MOV dword ptr [EDX],EAX
// 0058dafe: MOV EDX,EDI
// 0058db00: MOV EAX,ESI
// 0058db02: ADD ESI,0x6
// 0058db05: FLD double ptr [0x0064aeba]
//   XREF to: 0064aeba (READ)
// 0058db0b: MOV BX,word ptr [ECX + 0x10]
//   Label: LAB_0058db0b
// 0058db0f: MOV word ptr [EAX],BX
// 0058db12: FLD float ptr [EDX + 0x1c]
// 0058db15: FMUL ST1
// 0058db17: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0058db1c: FISTP dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x14] (WRITE)
// 0058db23: MOV EBX,dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x14] (READ)
// 0058db2a: MOV word ptr [EAX + 0x6],BX
// 0058db2e: FLD float ptr [EDX + 0x20]
// 0058db31: FMUL ST1
// 0058db33: ADD EDX,0x8
// 0058db36: ADD EAX,0x2
// 0058db39: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0058db3e: FISTP dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x14] (WRITE)
// 0058db45: MOV EBX,dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x14] (READ)
// 0058db4c: ADD ECX,0x4
// 0058db4f: MOV word ptr [EAX + 0xa],BX
// 0058db53: CMP EAX,ESI
// 0058db55: JNZ 0x0058db0b
//   XREF to: 0058db0b (CONDITIONAL_JUMP)
// 0058db57: FSTP ST0
// 0058db59: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058db5c: MOV EDX,dword ptr [ESP + 0x514]
//   XREF to: Stack[-0x2c] (READ)
// 0058db63: MOV ECX,dword ptr [EDI + 0x8]
// 0058db66: ADD EAX,EDX
// 0058db68: TEST ECX,ECX
// 0058db6a: JZ 0x0058dc66
//   XREF to: 0058dc66 (CONDITIONAL_JUMP)
// 0058db70: IMUL EDX,dword ptr [EDI + 0x4],0x60
// 0058db74: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058db77: MOV ECX,dword ptr [ESP + 0x514]
//   XREF to: Stack[-0x2c] (READ)
// 0058db7e: ADD EDX,EDI
// 0058db80: ADD EDX,ECX
// 0058db82: INC dword ptr [EDX + 0x7178]
// 0058db88: INC dword ptr [EAX + 0x68]
// 0058db8b: MOV ECX,dword ptr [ESP + 0x4f8]
//   Label: LAB_0058db8b
//   XREF to: Stack[-0x48] (READ)
// 0058db92: MOV EBX,dword ptr [ESP + 0x500]
//   XREF to: Stack[-0x40] (READ)
// 0058db99: MOV ESI,dword ptr [ESP + 0x4f0]
//   XREF to: Stack[-0x50] (READ)
// 0058dba0: MOV EDI,dword ptr [ESP + 0x510]
//   XREF to: Stack[-0x30] (READ)
// 0058dba7: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058dbaa: ADD ECX,0x4
// 0058dbad: ADD EBX,0x12
// 0058dbb0: ADD ESI,0x8c
// 0058dbb6: INC EDI
// 0058dbb7: MOV dword ptr [ESP + 0x4f8],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 0058dbbe: MOV dword ptr [ESP + 0x500],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 0058dbc5: MOV dword ptr [ESP + 0x4f0],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 0058dbcc: MOV ECX,dword ptr [EDX + 0x8]
// 0058dbcf: MOV dword ptr [ESP + 0x510],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0058dbd6: CMP EDI,ECX
// 0058dbd8: JL 0x0058dac0
//   XREF to: 0058dac0 (CONDITIONAL_JUMP)
// 0058dbde: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_0058dbde
//   XREF to: Stack[0x8] (READ)
// 0058dbe1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dbe4: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dbe7: XOR ESI,ESI
// 0058dbe9: XOR EDX,EDX
// 0058dbeb: SHL EDI,0x2
// 0058dbee: XOR ECX,ECX
// 0058dbf0: ADD EAX,EDI
// 0058dbf2: CMP dword ptr [EBX + 0x7140],0x0
// 0058dbf9: JLE 0x0058dc20
//   XREF to: 0058dc20 (CONDITIONAL_JUMP)
// 0058dbfb: ADD ECX,dword ptr [EAX + 0x7164]
//   Label: LAB_0058dbfb
// 0058dc01: ADD ESI,dword ptr [EAX + 0x7178]
// 0058dc07: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dc0a: INC EDX
// 0058dc0b: ADD EAX,0x60
// 0058dc0e: CMP EDX,dword ptr [EBX + 0x7140]
// 0058dc14: JL 0x0058dbfb
//   XREF to: 0058dbfb (CONDITIONAL_JUMP)
// 0058dc16: LEA EAX,[EAX]
// 0058dc1c: LEA EDX,[EDX]
// 0058dc20: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0058dc20
//   XREF to: Stack[0x4] (READ)
// 0058dc23: ADD EAX,EDI
// 0058dc25: CMP ECX,dword ptr [EAX + 0x54]
// 0058dc28: JZ 0x0058dc86
//   XREF to: 0058dc86 (CONDITIONAL_JUMP)
// 0058dc2a: MOV ECX,0x64ae50
//   Label: LAB_0058dc2a
//   XREF to: 0064ae50 (DATA)
// 0058dc2f: MOV EBX,0x89c
// 0058dc34: PUSH 0x64ae65
//   XREF to: 0064ae65 (DATA)
// 0058dc39: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058dc3f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0058dc45: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058dc4a: ADD ESP,0x4
// 0058dc4d: MOV EBX,dword ptr [EBP + 0x18]
//   Label: LAB_0058dc4d
//   XREF to: Stack[0x8] (READ)
// 0058dc50: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dc53: SHL EBX,0x2
// 0058dc56: ADD EBX,ESI
// 0058dc58: MOV EDI,dword ptr [EBX + 0x68]
// 0058dc5b: TEST EDI,EDI
// 0058dc5d: JG 0x0058dc8d
//   XREF to: 0058dc8d (CONDITIONAL_JUMP)
// 0058dc5f: MOV ESP,EBP
//   Label: LAB_0058dc5f
// 0058dc61: POP EBP
// 0058dc62: POP EDI
// 0058dc63: POP ESI
// 0058dc64: POP EBX
// 0058dc65: RET
// 0058dc66: IMUL EDX,dword ptr [EDI + 0x4],0x60
//   Label: LAB_0058dc66
// 0058dc6a: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dc6d: MOV EDI,dword ptr [ESP + 0x514]
//   XREF to: Stack[-0x2c] (READ)
// 0058dc74: ADD EDX,ESI
// 0058dc76: ADD EDX,EDI
// 0058dc78: INC dword ptr [EDX + 0x7164]
// 0058dc7e: INC dword ptr [EAX + 0x54]
// 0058dc81: JMP 0x0058db8b
//   XREF to: 0058db8b (UNCONDITIONAL_JUMP)
// 0058dc86: CMP ESI,dword ptr [EAX + 0x68]
//   Label: LAB_0058dc86
// 0058dc89: JNZ 0x0058dc2a
//   XREF to: 0058dc2a (CONDITIONAL_JUMP)
// 0058dc8b: JMP 0x0058dc4d
//   XREF to: 0058dc4d (UNCONDITIONAL_JUMP)
// 0058dc8d: PUSH 0x8a1
//   Label: LAB_0058dc8d
// 0058dc92: PUSH 0x64ae7b
//   XREF to: 0064ae7b (DATA)
// 0058dc97: LEA EAX,[EDI*0x4 + 0x0]
// 0058dc9e: PUSH EAX
// 0058dc9f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0058dca4: ADD ESP,0xc
// 0058dca7: MOV dword ptr [EBX + 0xa4],EAX
// 0058dcad: TEST EAX,EAX
// 0058dcaf: JNZ 0x0058dcd4
//   XREF to: 0058dcd4 (CONDITIONAL_JUMP)
// 0058dcb1: MOV EDX,0x64ae90
//   XREF to: 0064ae90 (DATA)
// 0058dcb6: MOV ECX,0x8a2
// 0058dcbb: PUSH 0x64aea5
//   XREF to: 0064aea5 (DATA)
// 0058dcc0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058dcc6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058dccc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058dcd1: ADD ESP,0x4
// 0058dcd4: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0058dcd4
//   XREF to: Stack[0x8] (READ)
// 0058dcd7: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dcda: XOR EBX,EBX
// 0058dcdc: XOR ESI,ESI
// 0058dcde: MOV dword ptr [ESP + 0x524],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058dce5: SHL EAX,0x2
// 0058dce8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dceb: MOV dword ptr [ESP + 0x50c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0058dcf2: MOV EDI,dword ptr [EDX + 0x7140]
// 0058dcf8: MOV EBX,dword ptr [EBX + EAX*0x1 + 0x54]
// 0058dcfc: TEST EDI,EDI
// 0058dcfe: JLE 0x0058dc5f
//   XREF to: 0058dc5f (CONDITIONAL_JUMP)
// 0058dd04: MOV dword ptr [ESP + 0x4fc],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0058dd0b: MOV dword ptr [ESP + 0x520],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058dd12: MOV EAX,dword ptr [ESP + 0x4fc]
//   Label: LAB_0058dd12
//   XREF to: Stack[-0x44] (READ)
// 0058dd19: MOV EDX,dword ptr [ESP + 0x524]
//   XREF to: Stack[-0x1c] (READ)
// 0058dd20: XOR ECX,ECX
// 0058dd22: MOV dword ptr [ESP + 0x518],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058dd29: SHL EDX,0x2
// 0058dd2c: IMUL EAX,EBX,0x8c
// 0058dd32: MOV ESI,dword ptr [ESP + 0x518]
//   Label: LAB_0058dd32
//   XREF to: Stack[-0x28] (READ)
// 0058dd39: ADD ESI,dword ptr [ESP + 0x520]
//   XREF to: Stack[-0x20] (READ)
// 0058dd40: CMP ECX,dword ptr [ESI + 0x7178]
// 0058dd46: JL 0x0058dd7b
//   XREF to: 0058dd7b (CONDITIONAL_JUMP)
// 0058dd48: MOV EDI,dword ptr [ESP + 0x4fc]
//   XREF to: Stack[-0x44] (READ)
// 0058dd4f: MOV EAX,dword ptr [ESP + 0x50c]
//   XREF to: Stack[-0x34] (READ)
// 0058dd56: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dd59: ADD EDI,0x60
// 0058dd5c: INC EAX
// 0058dd5d: MOV ECX,dword ptr [EDX + 0x7140]
// 0058dd63: MOV dword ptr [ESP + 0x4fc],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 0058dd6a: MOV dword ptr [ESP + 0x50c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0058dd71: CMP EAX,ECX
// 0058dd73: JGE 0x0058dc5f
//   XREF to: 0058dc5f (CONDITIONAL_JUMP)
// 0058dd79: JMP 0x0058dd12
//   XREF to: 0058dd12 (UNCONDITIONAL_JUMP)
// 0058dd7b: MOV ESI,dword ptr [EBP + 0x1c]
//   Label: LAB_0058dd7b
//   XREF to: Stack[0xc] (READ)
// 0058dd7e: MOV ESI,dword ptr [ESI + 0xc]
// 0058dd81: ADD ESI,EAX
// 0058dd83: MOV EDI,dword ptr [ESP + 0x520]
//   XREF to: Stack[-0x20] (READ)
// 0058dd8a: MOV dword ptr [ESP + 0x4e4],ESI
//   XREF to: Stack[-0x5c] (WRITE)
// 0058dd91: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058dd94: ADD ESI,EDI
// 0058dd96: MOV ESI,dword ptr [ESI + 0xa4]
// 0058dd9c: ADD ESI,EDX
// 0058dd9e: MOV dword ptr [ESP + 0x52c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0058dda5: MOV ESI,dword ptr [ESP + 0x4e4]
//   XREF to: Stack[-0x5c] (READ)
// 0058ddac: INC EBX
// 0058ddad: MOV EDI,dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x14] (READ)
// 0058ddb4: MOV ESI,dword ptr [ESI + 0xc]
// 0058ddb7: INC ECX
// 0058ddb8: MOV dword ptr [EDI],ESI
// 0058ddba: MOV ESI,dword ptr [ESP + 0x524]
//   XREF to: Stack[-0x1c] (READ)
// 0058ddc1: ADD EAX,0x8c
// 0058ddc6: INC ESI
// 0058ddc7: ADD EDX,0x4
// 0058ddca: MOV dword ptr [ESP + 0x524],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0058ddd1: JMP 0x0058dd32
//   XREF to: 0058dd32 (UNCONDITIONAL_JUMP)
