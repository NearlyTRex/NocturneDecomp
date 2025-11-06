// Name: core_bodypart.cpp_FUN_0041a050
// Address: 0041a050
// Address Range: [[0041a050, 0041a5aa] [0041a615, 0041a628]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041a050()
// Cross-references:
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415ff7 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417804 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b4b6 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_serialize_FUN_00419880 (00419880) at 00419bb1 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424600 (00424600) at 00424732 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bcc0 (0042bcc0) at 0042bd1d [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 00444a4c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485b20 (00485b20) at 00485b7c [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 (004e5530) at 004e56b6 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e86bf [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004fad04 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 00527593 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c93e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0 (005a0fe0) at 005a1029 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a345e [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc3bf [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00615e34 = 0.00390625
//   double DOUBLE_00615e3c = 65535
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_bodypart.cpp_CBodyPart_FUN_0041b070
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   core_bodypart.cpp_FUN_0041aa40
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041a050(void)

{
  CLocation *pCVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  int *extraout_EAX;
  int *piVar7;
  float fVar8;
  int iVar9;
  SSurfaceNormal *pSVar10;
  int extraout_ECX;
  int iVar11;
  int *piVar12;
  int iVar13;
  SSurfaceNormal *output;
  BADSPACEBASE *in_ESP;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  CBodyPart *in_stack_00000004;
  CVector3f local_68;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CVector3f CStack_44;
  CVector3f CStack_34;
  char *local_20;
  float local_18;
  int iStack_14;
  
  if ((2 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) &&
     (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x28))) {
    core_bodypart_cpp_FUN_0041aa40();
    iStack_14 = -((local_50 + (int)local_5c) / 2);
    iVar13 = -((local_4c + local_58) / 2);
    iVar9 = 0;
    iVar14 = -((local_48 + local_54) / 2);
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) {
      iVar11 = 0;
      do {
        iVar2 = *(int *)(in_stack_00000004->field1_0x158 + 0x20);
        *(int *)(iVar11 + iVar2) = *(int *)(iVar11 + iVar2) + iStack_14;
        piVar7 = (int *)(iVar11 + 4 + iVar2);
        *piVar7 = *piVar7 + iVar13;
        piVar7 = (int *)(iVar11 + 8 + iVar2);
        *piVar7 = *piVar7 + iVar14;
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c));
    }
    local_50 = local_50 + iStack_14;
    local_4c = local_4c + iVar13;
    local_48 = local_48 + iVar14;
    local_5c = (float)((int)local_5c + iStack_14);
    local_54 = local_54 + iVar14;
    local_58 = local_58 + iVar13;
    local_68.x = (float)DOUBLE_00615e34;
    *(float *)(in_stack_00000004->field1_0x158 + 4) = (float)local_50 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 8) = (float)local_4c * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0xc) = (float)local_48 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x10) = (float)(int)local_5c * local_68.x;
    local_68.y = (float)iVar13 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x14) = (float)local_58 * local_68.x;
    local_68.z = (float)iVar14 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x18) = (float)local_54 * local_68.x;
    local_68.x = (float)iStack_14 * local_68.x;
    local_18 = local_68.z;
    pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&in_stack_00000004->base_actor,&CStack_44,&local_68);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = (pCVar1->position).x - pCVar5->x;
    (in_stack_00000004->base_actor).location.position.y =
         (in_stack_00000004->base_actor).location.position.y - pCVar5->y;
    (in_stack_00000004->base_actor).location.position.z =
         (in_stack_00000004->base_actor).location.position.z - pCVar5->z;
    iVar9 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x134)) {
      pcVar6 = in_stack_00000004->field1_0x158 + 0x138;
      do {
        *(float *)pcVar6 = *(float *)pcVar6 + local_68.y;
        *(float *)(pcVar6 + 4) = *(float *)(pcVar6 + 4) + local_68.z;
        iVar9 = iVar9 + 1;
        *(float *)(pcVar6 + 8) = *(float *)(pcVar6 + 8) + local_5c;
        pcVar6 = pcVar6 + 0x194;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x134));
    }
    iVar9 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x5f4)) {
      local_20 = in_stack_00000004->field1_0x158 + 0x5f8;
      pcVar6 = in_stack_00000004->field1_0x158 + 0x624;
      do {
        pCVar5 = (CVector3f *)(local_20 + iVar9 * 0x2b0);
        pCVar5->x = pCVar5->x + local_68.y;
        pCVar5->y = pCVar5->y + local_68.z;
        pCVar5->z = pCVar5->z + local_5c;
        iVar9 = iVar9 + 1;
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&in_stack_00000004->base_actor,&CStack_34,pCVar5);
        *(float *)pcVar6 = pCVar5->x;
        *(float *)(pcVar6 + 4) = pCVar5->y;
        *(float *)(pcVar6 + 8) = pCVar5->z;
        pcVar6 = pcVar6 + 0x2b0;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x5f4));
    }
    crt_memory_c_memset_FUN_005fde40
              (*(void **)(in_stack_00000004->field1_0x158 + 0x24),0,
               *(int *)(in_stack_00000004->field1_0x158 + 0x1c) * 0xc);
    piVar7 = *(int **)(in_stack_00000004->field1_0x158 + 0x28);
    iStack_14 = 0;
    if (0 < (int)piVar7) {
      local_18 = 0.0;
      do {
        output = (SSurfaceNormal *)
                 (*(int *)(in_stack_00000004->field1_0x158 + 0x2c) + (int)local_18);
        output->vertex_count = 3;
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  (*(CVector3i **)(in_stack_00000004->field1_0x158 + 0x20),output);
        iVar9 = 0;
        piVar7 = extraout_EAX;
        pSVar10 = output;
        if (0 < output->vertex_count) {
          do {
            piVar7 = (int *)(*(int *)(in_stack_00000004->field1_0x158 + 0x24) +
                            pSVar10->vertex_index_1 * 0xc);
            *piVar7 = *piVar7 + output->normal_x;
            piVar7[1] = piVar7[1] + output->normal_y;
            piVar7[2] = piVar7[2] + output->normal_z;
            iVar9 = iVar9 + 1;
            pSVar10 = (SSurfaceNormal *)&pSVar10->normal_y;
          } while (iVar9 < output->vertex_count);
        }
        local_18 = (float)((int)local_18 + 0x3c);
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)(in_stack_00000004->field1_0x158 + 0x28));
    }
    iVar9 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) {
      iVar13 = 0;
      do {
        piVar12 = (int *)(*(int *)(in_stack_00000004->field1_0x158 + 0x24) + iVar13);
        dVar18 = (double)*piVar12;
        dVar4 = (double)piVar12[1];
        dVar3 = (double)piVar12[2];
        dVar18 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar18 * dVar18);
        if (0.0 < dVar18) {
          fVar15 = (float10)DOUBLE_00615e3c / (float10)dVar18;
          fVar16 = (float10)*piVar12 * fVar15;
          fVar17 = (float10)piVar12[1] * fVar15;
          fVar15 = (float10)piVar12[2] * fVar15;
          dVar18 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(piVar12,CONCAT22((short)((uint)piVar7 >> 0x10),
                                                                (ushort)(0.0 < dVar18) << 8 |
                                                                (ushort)NAN(dVar18) << 10 |
                                                                (ushort)(dVar18 == 0.0) << 0xe)));
          dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
          dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
          piVar7 = (int *)((ulonglong)dVar18 >> 0x20);
          *piVar7 = (int)ROUND(fVar16);
          piVar7[1] = (int)ROUND(fVar17);
          piVar7[2] = (int)ROUND(fVar15);
          iVar13 = extraout_ECX;
        }
        else {
          piVar12[2] = 0;
          piVar12[1] = piVar12[2];
          *piVar12 = piVar12[2];
        }
        iVar9 = iVar9 + 1;
        piVar7 = *(int **)(in_stack_00000004->field1_0x158 + 0x1c);
        iVar13 = iVar13 + 0xc;
      } while (iVar9 < (int)piVar7);
    }
    core_bodypart_cpp_CBodyPart_FUN_0041b070(in_stack_00000004);
    if (in_stack_00000004->field1_0x158 + 0xbb4 != in_stack_00000004->field1_0x158 + 0x128) {
      *(undefined4 *)(in_stack_00000004->field1_0x158 + 0xbb4) =
           *(undefined4 *)(in_stack_00000004->field1_0x158 + 0x128);
      *(undefined4 *)(in_stack_00000004->field1_0x158 + 3000) =
           *(undefined4 *)(in_stack_00000004->field1_0x158 + 300);
      *(undefined4 *)(in_stack_00000004->field1_0x158 + 0xbbc) =
           *(undefined4 *)(in_stack_00000004->field1_0x158 + 0x130);
    }
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(in_stack_00000004->field1_0x158 + 0xb8c),&local_68,
                        (CVector3f *)(in_stack_00000004->field1_0x158 + 0x128));
    if ((CVector3f *)(in_stack_00000004->field1_0x158 + 0xbc0) != pCVar5) {
      ((CVector3f *)(in_stack_00000004->field1_0x158 + 0xbc0))->x = pCVar5->x;
      *(float *)(in_stack_00000004->field1_0x158 + 0xbc4) = pCVar5->y;
      *(float *)(in_stack_00000004->field1_0x158 + 0xbc8) = pCVar5->z;
    }
    fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    *(float *)(in_stack_00000004->field1_0x158 + 0xbe4) = fVar8;
    fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    *(float *)(in_stack_00000004->field1_0x158 + 0xbec) = fVar8;
    fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
    *(float *)(in_stack_00000004->field1_0x158 + 0xbe8) = fVar8;
    return;
  }
  (in_stack_00000004->base_actor).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(in_stack_00000004);
  pCVar5 = (CVector3f *)(in_stack_00000004->field1_0x158 + 0x10);
  if (pCVar5 != &g_ZeroVector) {
    pCVar5->x = g_ZeroVector.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x14) = g_ZeroVector.y;
    *(float *)(in_stack_00000004->field1_0x158 + 0x18) = g_ZeroVector.z;
  }
  if ((CVector3f *)(in_stack_00000004->field1_0x158 + 4) != pCVar5) {
    ((CVector3f *)(in_stack_00000004->field1_0x158 + 4))->x = pCVar5->x;
    *(undefined4 *)(in_stack_00000004->field1_0x158 + 8) =
         *(undefined4 *)(in_stack_00000004->field1_0x158 + 0x14);
    *(undefined4 *)(in_stack_00000004->field1_0x158 + 0xc) =
         *(undefined4 *)(in_stack_00000004->field1_0x158 + 0x18);
  }
  return;
}


// Assembly code:
// 0041a050: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041a050
// 0041a051: PUSH ESI
// 0041a052: PUSH EDI
// 0041a053: PUSH EBP
// 0041a054: MOV EBP,ESP
// 0041a056: SUB ESP,0x8c
// 0041a05c: AND ESP,0xfffffff8
// 0041a05f: MOV EDI,dword ptr [EBP + 0x14]
// 0041a062: CMP dword ptr [EDI + 0x174],0x3
// 0041a069: JL 0x0041a074
//   XREF to: 0041a074 (CONDITIONAL_JUMP)
// 0041a06b: CMP dword ptr [EDI + 0x180],0x1
// 0041a072: JGE 0x0041a0d4
//   XREF to: 0041a0d4 (CONDITIONAL_JUMP)
// 0041a074: PUSH 0x0
//   Label: LAB_0041a074
// 0041a076: PUSH 0x0
// 0041a078: PUSH EDI
// 0041a079: MOV dword ptr [EDI + 0x70],0x2
// 0041a080: CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   XREF to: 004191d0 (UNCONDITIONAL_CALL)
// 0041a085: LEA EAX,[EDI + 0x168]
// 0041a08b: ADD ESP,0xc
// 0041a08e: MOV EDX,EAX
// 0041a090: CMP EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041a095: JZ 0x0041a0b1
//   XREF to: 0041a0b1 (CONDITIONAL_JUMP)
// 0041a097: MOV ECX,dword ptr [0x03f87558]
//   XREF to: 03f87558 (READ)
// 0041a09d: MOV dword ptr [EAX],ECX
// 0041a09f: MOV ECX,dword ptr [0x03f8755c]
//   XREF to: 03f8755c (READ)
// 0041a0a5: MOV dword ptr [EAX + 0x4],ECX
// 0041a0a8: MOV ECX,dword ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 0041a0ae: MOV dword ptr [EAX + 0x8],ECX
// 0041a0b1: ADD EDI,0x15c
//   Label: LAB_0041a0b1
// 0041a0b7: CMP EDI,EDX
// 0041a0b9: JNZ 0x0041a0c2
//   XREF to: 0041a0c2 (CONDITIONAL_JUMP)
// 0041a0bb: MOV ESP,EBP
//   Label: LAB_0041a0bb
// 0041a0bd: POP EBP
// 0041a0be: POP EDI
// 0041a0bf: POP ESI
// 0041a0c0: POP EBX
// 0041a0c1: RET
// 0041a0c2: MOV EAX,dword ptr [EDX]
//   Label: LAB_0041a0c2
// 0041a0c4: MOV dword ptr [EDI],EAX
// 0041a0c6: MOV EAX,dword ptr [EDX + 0x4]
// 0041a0c9: MOV dword ptr [EDI + 0x4],EAX
// 0041a0cc: MOV EAX,dword ptr [EDX + 0x8]
// 0041a0cf: MOV dword ptr [EDI + 0x8],EAX
// 0041a0d2: JMP 0x0041a0bb
//   XREF to: 0041a0bb (UNCONDITIONAL_JUMP)
// 0041a0d4: LEA EAX,[ESP + 0x40]
//   Label: LAB_0041a0d4
// 0041a0d8: PUSH EAX
// 0041a0d9: LEA EAX,[ESP + 0x50]
// 0041a0dd: PUSH EAX
// 0041a0de: PUSH EDI
// 0041a0df: CALL core_bodypart.cpp_FUN_0041aa40
//   XREF to: 0041aa40 (UNCONDITIONAL_CALL)
// 0041a0e4: ADD ESP,0xc
// 0041a0e7: MOV EDX,dword ptr [ESP + 0x4c]
// 0041a0eb: MOV EBX,dword ptr [ESP + 0x40]
// 0041a0ef: ADD EDX,EBX
// 0041a0f1: MOV EAX,EDX
// 0041a0f3: SAR EDX,0x1f
// 0041a0f6: SUB EAX,EDX
// 0041a0f8: SAR EAX,0x1
// 0041a0fa: MOV EDX,dword ptr [ESP + 0x50]
// 0041a0fe: MOV dword ptr [ESP + 0x24],EAX
// 0041a102: MOV ESI,EAX
// 0041a104: MOV EAX,dword ptr [ESP + 0x44]
// 0041a108: ADD EDX,EAX
// 0041a10a: MOV EAX,EDX
// 0041a10c: SAR EDX,0x1f
// 0041a10f: SUB EAX,EDX
// 0041a111: SAR EAX,0x1
// 0041a113: MOV ECX,dword ptr [ESP + 0x48]
// 0041a117: MOV EDX,dword ptr [ESP + 0x54]
// 0041a11b: ADD EDX,ECX
// 0041a11d: MOV EBX,EAX
// 0041a11f: MOV EAX,EDX
// 0041a121: SAR EDX,0x1f
// 0041a124: SUB EAX,EDX
// 0041a126: SAR EAX,0x1
// 0041a128: NEG ESI
// 0041a12a: MOV dword ptr [ESP + 0x24],ESI
// 0041a12e: NEG EBX
// 0041a130: XOR ECX,ECX
// 0041a132: MOV ESI,EAX
// 0041a134: MOV dword ptr [ESP + 0x20],EAX
// 0041a138: NEG ESI
// 0041a13a: MOV EAX,dword ptr [EDI + 0x174]
// 0041a140: MOV dword ptr [ESP + 0x20],ESI
// 0041a144: TEST EAX,EAX
// 0041a146: JLE 0x0041a180
//   XREF to: 0041a180 (CONDITIONAL_JUMP)
// 0041a148: XOR EDX,EDX
// 0041a14a: MOV EAX,dword ptr [EDI + 0x178]
//   Label: LAB_0041a14a
// 0041a150: MOV ESI,dword ptr [ESP + 0x24]
// 0041a154: ADD dword ptr [EDX + EAX*0x1],ESI
// 0041a157: ADD dword ptr [EDX + EAX*0x1 + 0x4],EBX
// 0041a15b: MOV ESI,dword ptr [ESP + 0x20]
// 0041a15f: ADD dword ptr [EDX + EAX*0x1 + 0x8],ESI
// 0041a163: INC ECX
// 0041a164: MOV EAX,dword ptr [EDI + 0x174]
// 0041a16a: ADD EDX,0xc
// 0041a16d: CMP ECX,EAX
// 0041a16f: JL 0x0041a14a
//   XREF to: 0041a14a (CONDITIONAL_JUMP)
// 0041a171: LEA EAX,[EAX]
// 0041a177: LEA EDX,[EDX]
// 0041a17d: LEA EAX,[EAX]
// 0041a180: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0041a180
// 0041a184: MOV EDX,dword ptr [ESP + 0x4c]
// 0041a188: MOV ECX,dword ptr [ESP + 0x50]
// 0041a18c: MOV ESI,dword ptr [ESP + 0x54]
// 0041a190: ADD EDX,EAX
// 0041a192: ADD ECX,EBX
// 0041a194: MOV EAX,dword ptr [ESP + 0x20]
// 0041a198: MOV dword ptr [ESP + 0x4c],EDX
// 0041a19c: MOV EDX,dword ptr [ESP + 0x40]
// 0041a1a0: ADD ESI,EAX
// 0041a1a2: MOV EAX,dword ptr [ESP + 0x24]
// 0041a1a6: MOV dword ptr [ESP + 0x54],ESI
// 0041a1aa: MOV ESI,dword ptr [ESP + 0x48]
// 0041a1ae: ADD EDX,EAX
// 0041a1b0: MOV EAX,dword ptr [ESP + 0x20]
// 0041a1b4: MOV dword ptr [ESP + 0x50],ECX
// 0041a1b8: ADD ESI,EAX
// 0041a1ba: MOV EAX,dword ptr [ESP + 0x4c]
// 0041a1be: MOV ECX,dword ptr [ESP + 0x44]
// 0041a1c2: MOV dword ptr [ESP + 0x84],EAX
// 0041a1c9: ADD ECX,EBX
// 0041a1cb: FLD double ptr [0x00615e34]
//   XREF to: 00615e34 (READ)
// 0041a1d1: FILD dword ptr [ESP + 0x84]
// 0041a1d8: FMUL ST1
// 0041a1da: MOV dword ptr [ESP + 0x44],ECX
// 0041a1de: MOV dword ptr [ESP + 0x40],EDX
// 0041a1e2: MOV dword ptr [ESP + 0x48],ESI
// 0041a1e6: FSTP float ptr [EDI + 0x15c]
// 0041a1ec: MOV EAX,dword ptr [ESP + 0x50]
// 0041a1f0: MOV dword ptr [ESP + 0x84],EAX
// 0041a1f7: FILD dword ptr [ESP + 0x84]
// 0041a1fe: FMUL ST1
// 0041a200: FSTP float ptr [EDI + 0x160]
// 0041a206: MOV EAX,dword ptr [ESP + 0x54]
// 0041a20a: MOV dword ptr [ESP + 0x84],EAX
// 0041a211: FILD dword ptr [ESP + 0x84]
// 0041a218: FMUL ST1
// 0041a21a: FSTP float ptr [EDI + 0x164]
// 0041a220: MOV EAX,dword ptr [ESP + 0x40]
// 0041a224: MOV dword ptr [ESP + 0x84],EAX
// 0041a22b: FILD dword ptr [ESP + 0x84]
// 0041a232: FMUL ST1
// 0041a234: FSTP float ptr [EDI + 0x168]
// 0041a23a: MOV EAX,dword ptr [ESP + 0x44]
// 0041a23e: MOV dword ptr [ESP + 0x84],EAX
// 0041a245: MOV dword ptr [ESP + 0x88],EBX
// 0041a24c: FILD dword ptr [ESP + 0x84]
// 0041a253: FMUL ST1
// 0041a255: FILD dword ptr [ESP + 0x88]
// 0041a25c: FMUL ST2
// 0041a25e: FXCH
// 0041a260: FSTP float ptr [EDI + 0x16c]
// 0041a266: MOV EAX,dword ptr [ESP + 0x48]
// 0041a26a: MOV dword ptr [ESP + 0x88],EAX
// 0041a271: MOV EAX,dword ptr [ESP + 0x20]
// 0041a275: FILD dword ptr [ESP + 0x88]
// 0041a27c: MOV dword ptr [ESP + 0x88],EAX
// 0041a283: FMUL ST2
// 0041a285: FILD dword ptr [ESP + 0x88]
// 0041a28c: FMUL ST3
// 0041a28e: FXCH ST2
// 0041a290: FSTP float ptr [ESP + 0x84]
// 0041a297: MOV EAX,dword ptr [ESP + 0x24]
// 0041a29b: FSTP float ptr [EDI + 0x170]
// 0041a2a1: MOV dword ptr [ESP + 0x88],EAX
// 0041a2a8: MOV EAX,dword ptr [ESP + 0x84]
// 0041a2af: FSTP float ptr [ESP + 0x84]
// 0041a2b6: MOV dword ptr [ESP + 0x38],EAX
// 0041a2ba: MOV EAX,dword ptr [ESP + 0x84]
// 0041a2c1: MOV dword ptr [ESP + 0x3c],EAX
// 0041a2c5: LEA EAX,[ESP + 0x34]
// 0041a2c9: PUSH EAX
// 0041a2ca: LEA EAX,[ESP + 0x5c]
// 0041a2ce: FILD dword ptr [ESP + 0x8c]
// 0041a2d5: PUSH EAX
// 0041a2d6: FMULP
// 0041a2d8: PUSH EDI
// 0041a2d9: FSTP float ptr [ESP + 0x40]
// 0041a2dd: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0041a2e2: MOV EDX,EAX
// 0041a2e4: LEA EAX,[EDI + 0x20]
// 0041a2e7: FLD float ptr [EDX]
// 0041a2e9: FSUBR float ptr [EAX]
// 0041a2eb: FSTP float ptr [EAX]
// 0041a2ed: FLD float ptr [EDX + 0x4]
// 0041a2f0: FSUBR float ptr [EAX + 0x4]
// 0041a2f3: FSTP float ptr [EAX + 0x4]
// 0041a2f6: FLD float ptr [EDX + 0x8]
// 0041a2f9: FSUBR float ptr [EAX + 0x8]
// 0041a2fc: ADD ESP,0xc
// 0041a2ff: FSTP float ptr [EAX + 0x8]
// 0041a302: MOV EAX,dword ptr [EDI + 0x28c]
// 0041a308: XOR EDX,EDX
// 0041a30a: TEST EAX,EAX
// 0041a30c: JLE 0x0041a350
//   XREF to: 0041a350 (CONDITIONAL_JUMP)
// 0041a30e: LEA EAX,[EDI + 0x290]
// 0041a314: FLD float ptr [EAX]
//   Label: LAB_0041a314
// 0041a316: FADD float ptr [ESP + 0x34]
// 0041a31a: FLD float ptr [EAX + 0x4]
// 0041a31d: FXCH
// 0041a31f: FSTP float ptr [EAX]
// 0041a321: FADD float ptr [ESP + 0x38]
// 0041a325: FLD float ptr [EAX + 0x8]
// 0041a328: FXCH
// 0041a32a: FSTP float ptr [EAX + 0x4]
// 0041a32d: FADD float ptr [ESP + 0x3c]
// 0041a331: INC EDX
// 0041a332: FSTP float ptr [EAX + 0x8]
// 0041a335: MOV ECX,dword ptr [EDI + 0x28c]
// 0041a33b: ADD EAX,0x194
// 0041a340: CMP EDX,ECX
// 0041a342: JL 0x0041a314
//   XREF to: 0041a314 (CONDITIONAL_JUMP)
// 0041a344: LEA EAX,[EAX]
// 0041a34a: LEA EDX,[EDX]
// 0041a350: MOV EBX,dword ptr [EDI + 0x74c]
//   Label: LAB_0041a350
// 0041a356: XOR ESI,ESI
// 0041a358: TEST EBX,EBX
// 0041a35a: JLE 0x0041a3e0
//   XREF to: 0041a3e0 (CONDITIONAL_JUMP)
// 0041a360: LEA EAX,[EDI + 0x750]
// 0041a366: LEA EBX,[EDI + 0x77c]
// 0041a36c: MOV dword ptr [ESP + 0x78],EAX
// 0041a370: IMUL EAX,ESI,0x2b0
//   Label: LAB_0041a370
// 0041a376: ADD EAX,dword ptr [ESP + 0x78]
// 0041a37a: FLD float ptr [EAX]
// 0041a37c: FADD float ptr [ESP + 0x34]
// 0041a380: FLD float ptr [EAX + 0x4]
// 0041a383: FXCH
// 0041a385: FSTP float ptr [EAX]
// 0041a387: FADD float ptr [ESP + 0x38]
// 0041a38b: FLD float ptr [EAX + 0x8]
// 0041a38e: FXCH
// 0041a390: FSTP float ptr [EAX + 0x4]
// 0041a393: FADD float ptr [ESP + 0x3c]
// 0041a397: PUSH EAX
// 0041a398: FSTP float ptr [EAX + 0x8]
// 0041a39b: LEA EAX,[ESP + 0x68]
// 0041a39f: PUSH EAX
// 0041a3a0: PUSH EDI
// 0041a3a1: ADD EBX,0x2b0
// 0041a3a7: INC ESI
// 0041a3a8: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041a3ad: MOV EDX,dword ptr [EAX]
// 0041a3af: MOV dword ptr [EBX + 0xfffffd50],EDX
// 0041a3b5: MOV EDX,dword ptr [EAX + 0x4]
// 0041a3b8: MOV dword ptr [EBX + 0xfffffd54],EDX
// 0041a3be: MOV EDX,dword ptr [EAX + 0x8]
// 0041a3c1: MOV dword ptr [EBX + 0xfffffd58],EDX
// 0041a3c7: MOV ECX,dword ptr [EDI + 0x74c]
// 0041a3cd: ADD ESP,0xc
// 0041a3d0: CMP ESI,ECX
// 0041a3d2: JL 0x0041a370
//   XREF to: 0041a370 (CONDITIONAL_JUMP)
// 0041a3d4: LEA EAX,[EAX]
// 0041a3da: LEA EDX,[EDX]
// 0041a3e0: MOV EDX,dword ptr [EDI + 0x174]
//   Label: LAB_0041a3e0
// 0041a3e6: LEA EAX,[EDX*0x4 + 0x0]
// 0041a3ed: SUB EAX,EDX
// 0041a3ef: SHL EAX,0x2
// 0041a3f2: PUSH EAX
// 0041a3f3: PUSH 0x0
// 0041a3f5: MOV EBX,dword ptr [EDI + 0x17c]
// 0041a3fb: PUSH EBX
// 0041a3fc: XOR ESI,ESI
// 0041a3fe: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0041a403: ADD ESP,0xc
// 0041a406: MOV EAX,dword ptr [EDI + 0x180]
// 0041a40c: MOV dword ptr [ESP + 0x80],ESI
// 0041a413: TEST EAX,EAX
// 0041a415: JLE 0x0041a499
//   XREF to: 0041a499 (CONDITIONAL_JUMP)
// 0041a41b: MOV dword ptr [ESP + 0x7c],ESI
// 0041a41f: MOV EDX,dword ptr [ESP + 0x7c]
//   Label: LAB_0041a41f
// 0041a423: MOV EBX,dword ptr [EDI + 0x184]
// 0041a429: ADD EBX,EDX
// 0041a42b: MOV dword ptr [EBX + 0x4],0x3
// 0041a432: PUSH EBX
// 0041a433: MOV ECX,dword ptr [EDI + 0x178]
// 0041a439: PUSH ECX
// 0041a43a: CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
// 0041a43f: ADD ESP,0x8
// 0041a442: MOV ESI,dword ptr [EBX + 0x4]
// 0041a445: XOR EDX,EDX
// 0041a447: TEST ESI,ESI
// 0041a449: JLE 0x0041a475
//   XREF to: 0041a475 (CONDITIONAL_JUMP)
// 0041a44b: MOV ECX,EBX
// 0041a44d: IMUL ESI,dword ptr [ECX + 0x18],0xc
//   Label: LAB_0041a44d
// 0041a451: MOV EAX,dword ptr [EDI + 0x17c]
// 0041a457: ADD EAX,ESI
// 0041a459: MOV ESI,dword ptr [EBX + 0x8]
// 0041a45c: ADD dword ptr [EAX],ESI
// 0041a45e: MOV ESI,dword ptr [EBX + 0xc]
// 0041a461: ADD dword ptr [EAX + 0x4],ESI
// 0041a464: MOV ESI,dword ptr [EBX + 0x10]
// 0041a467: ADD dword ptr [EAX + 0x8],ESI
// 0041a46a: INC EDX
// 0041a46b: MOV ESI,dword ptr [EBX + 0x4]
// 0041a46e: ADD ECX,0xc
// 0041a471: CMP EDX,ESI
// 0041a473: JL 0x0041a44d
//   XREF to: 0041a44d (CONDITIONAL_JUMP)
// 0041a475: MOV EDX,dword ptr [ESP + 0x7c]
//   Label: LAB_0041a475
// 0041a479: MOV ECX,dword ptr [ESP + 0x80]
// 0041a480: MOV EBX,dword ptr [EDI + 0x180]
// 0041a486: ADD EDX,0x3c
// 0041a489: INC ECX
// 0041a48a: MOV dword ptr [ESP + 0x7c],EDX
// 0041a48e: MOV dword ptr [ESP + 0x80],ECX
// 0041a495: CMP ECX,EBX
// 0041a497: JL 0x0041a41f
//   XREF to: 0041a41f (CONDITIONAL_JUMP)
// 0041a499: MOV ESI,dword ptr [EDI + 0x174]
//   Label: LAB_0041a499
// 0041a49f: XOR EBX,EBX
// 0041a4a1: TEST ESI,ESI
// 0041a4a3: JLE 0x0041a53e
//   XREF to: 0041a53e (CONDITIONAL_JUMP)
// 0041a4a9: XOR ECX,ECX
// 0041a4ab: MOV EDX,dword ptr [EDI + 0x17c]
//   Label: LAB_0041a4ab
// 0041a4b1: ADD EDX,ECX
// 0041a4b3: FILD dword ptr [EDX]
// 0041a4b5: FST double ptr [ESP + 0x18]
// 0041a4b9: FMUL double ptr [ESP + 0x18]
// 0041a4bd: FILD dword ptr [EDX + 0x4]
// 0041a4c0: FST double ptr [ESP + 0x10]
// 0041a4c4: FMUL double ptr [ESP + 0x10]
// 0041a4c8: FILD dword ptr [EDX + 0x8]
// 0041a4cb: FXCH
// 0041a4cd: FADDP ST2,ST0
// 0041a4cf: FST double ptr [ESP + 0x8]
// 0041a4d3: FMUL double ptr [ESP + 0x8]
// 0041a4d7: FADDP
// 0041a4d9: FSQRT
// 0041a4db: FLDZ
// 0041a4dd: FXCH
// 0041a4df: FSTP double ptr [ESP]
// 0041a4e2: FCOMP double ptr [ESP]
// 0041a4e5: FNSTSW AX
// 0041a4e7: SAHF
// 0041a4e8: JNC 0x0041a615
//   XREF to: 0041a615 (CONDITIONAL_JUMP)
// 0041a4ee: FLD double ptr [ESP + 0x18]
// 0041a4f2: FLD double ptr [0x00615e3c]
//   XREF to: 00615e3c (READ)
// 0041a4f8: FDIV double ptr [ESP]
// 0041a4fb: FXCH
// 0041a4fd: FMUL ST1
// 0041a4ff: FLD double ptr [ESP + 0x10]
// 0041a503: FMUL ST2
// 0041a505: FLD double ptr [ESP + 0x8]
// 0041a509: FMULP ST3
// 0041a50b: FXCH
// 0041a50d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a512: FXCH
// 0041a514: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a519: FXCH ST2
// 0041a51b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a520: FXCH
// 0041a522: FISTP dword ptr [EDX]
// 0041a524: FXCH
// 0041a526: FISTP dword ptr [EDX + 0x4]
// 0041a529: FISTP dword ptr [EDX + 0x8]
// 0041a52c: INC EBX
//   Label: LAB_0041a52c
// 0041a52d: MOV EAX,dword ptr [EDI + 0x174]
// 0041a533: ADD ECX,0xc
// 0041a536: CMP EBX,EAX
// 0041a538: JL 0x0041a4ab
//   XREF to: 0041a4ab (CONDITIONAL_JUMP)
// 0041a53e: PUSH EDI
//   Label: LAB_0041a53e
// 0041a53f: CALL core_bodypart.cpp_CBodyPart_FUN_0041b070
//   XREF to: 0041b070 (UNCONDITIONAL_CALL)
// 0041a544: LEA EAX,[EDI + 0xd0c]
// 0041a54a: LEA EDX,[EDI + 0x280]
// 0041a550: ADD ESP,0x4
// 0041a553: CMP EAX,EDX
// 0041a555: JZ 0x0041a567
//   XREF to: 0041a567 (CONDITIONAL_JUMP)
// 0041a557: MOV ECX,dword ptr [EDX]
// 0041a559: MOV dword ptr [EAX],ECX
// 0041a55b: MOV ECX,dword ptr [EDX + 0x4]
// 0041a55e: MOV dword ptr [EAX + 0x4],ECX
// 0041a561: MOV ECX,dword ptr [EDX + 0x8]
// 0041a564: MOV dword ptr [EAX + 0x8],ECX
// 0041a567: LEA EAX,[EDI + 0x280]
//   Label: LAB_0041a567
// 0041a56d: PUSH EAX
// 0041a56e: LEA EAX,[ESP + 0x2c]
// 0041a572: PUSH EAX
// 0041a573: LEA EAX,[EDI + 0xce4]
// 0041a579: PUSH EAX
// 0041a57a: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041a57f: LEA EDX,[EDI + 0xd18]
// 0041a585: ADD ESP,0xc
// 0041a588: CMP EDX,EAX
// 0041a58a: JZ 0x0041a59c
//   XREF to: 0041a59c (CONDITIONAL_JUMP)
// 0041a58c: MOV ECX,dword ptr [EAX]
// 0041a58e: MOV dword ptr [EDX],ECX
// 0041a590: MOV ECX,dword ptr [EAX + 0x4]
// 0041a593: MOV dword ptr [EDX + 0x4],ECX
// 0041a596: MOV ECX,dword ptr [EAX + 0x8]
// 0041a599: MOV dword ptr [EDX + 0x8],ECX
// 0041a59c: PUSH 0x40490fdb
//   Label: LAB_0041a59c
// 0041a5a1: PUSH 0xc0490fdb
// 0041a5a6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041a615: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_0041a615
// 0041a61c: MOV EAX,dword ptr [EDX + 0x8]
// 0041a61f: MOV dword ptr [EDX + 0x4],EAX
// 0041a622: MOV dword ptr [EDX],EAX
// 0041a624: JMP 0x0041a52c
//   XREF to: 0041a52c (UNCONDITIONAL_JUMP)
