// Name: core_skeleton.cpp_CDeformableModelInstance_SomethingUnkWriteMe_FUN_0059f260
// Address: 0059f260
// Address Range: [[0059f260, 0059f6dc]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_SomethingUnkWriteMe_FUN_0059f260()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_CallToSomethingUnkWriteMe_FUN_0059f230 (0059f230) at 0059f24d [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\skeleton.cpp_0064edf8
//   TerminatedCString s_Write_me_0064ee0d
//   undefined4 DAT_0064ee18
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_FUN_0059a100
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_SomethingUnkWriteMe(undefined4
   param_1, undefined4 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5,
   undefined4 param_6) */

void core_skeleton_cpp_CDeformableModelInstance_SomethingUnkWriteMe_FUN_0059f260(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CQuaternion4f *result_out;
  BADSPACEBASE *in_ESP;
  CQuaternion4f *pCVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  byte bVar13;
  int in_stack_00000004;
  CQuaternion4f *in_stack_00000008;
  float *in_stack_0000000c;
  CQuaternion4f *in_stack_00000010;
  int in_stack_00000014;
  code *in_stack_00000018;
  float afStackY_18c4 [1524];
  CQuaternion4f *in_stack_ffffff18;
  CQuaternion4f local_d8;
  float local_c8;
  float afStack_c4 [3];
  CQuaternion4f local_b8;
  CQuaternion4f local_a8;
  CQuaternion4f local_98;
  undefined4 local_88;
  float afStack_84 [16];
  float afStack_44 [4];
  CQuaternion4f *local_34;
  CQuaternion4f *local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CQuaternion4f *local_1c;
  int local_18;
  CQuaternion4f *local_14;
  
  bVar13 = 0;
  if ((float)_DAT_0064ee18 < (float)in_stack_00000010) {
    iVar4 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
    local_34 = (CQuaternion4f *)(in_stack_00000004 + 0x6b0);
    if (*(int *)(in_stack_00000004 + 0x2250) == 0) {
      iVar6 = 0;
      if (0 < *(int *)(iVar4 + 0x28558)) {
        local_24 = in_stack_00000004;
        local_1c = in_stack_00000008;
        local_2c = local_34;
        do {
          iVar5 = core_skeleton_cpp_CDeformableModel_FUN_0059a100();
          if (-1 < iVar5) {
            local_14 = (CQuaternion4f *)(*in_stack_00000018)();
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_2c,local_1c,local_14,(float)in_stack_ffffff18);
            puVar8 = (undefined4 *)(local_24 + 0x6b4 + (uint)bVar13 * -8);
            *(CQuaternion4f **)(local_24 + 0x6b0) = in_stack_ffffff18;
            puVar9 = puVar8 + (uint)bVar13 * -2 + 1;
            *puVar8 = *(undefined4 *)(&stack0xffffff1c + (uint)bVar13 * -8);
            *puVar9 = *(undefined4 *)(&stack0xffffff20 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            puVar9[(uint)bVar13 * -2 + 1] =
                 *(undefined4 *)
                  ((int)(&stack0xffffff20 + (uint)bVar13 * -8 + (uint)bVar13 * -8) +
                  ((uint)bVar13 * -2 + 1) * 4);
          }
          iVar6 = iVar6 + 1;
          local_24 = local_24 + 0x10;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (iVar6 < *(int *)(iVar4 + 0x28558));
      }
    }
    else if (*(int *)(in_stack_00000004 + 0x2250) == 1) {
      local_18 = 0;
      if (0 < *(int *)(iVar4 + 0x28558)) {
        local_28 = in_stack_00000004;
        result_out = in_stack_00000008;
        local_30 = local_34;
        local_20 = iVar4;
        do {
          iVar6 = core_skeleton_cpp_CDeformableModel_FUN_0059a100();
          if (-1 < iVar6) {
            iVar6 = *(int *)(local_20 + 0x2857c);
            pCVar7 = result_out;
            if (-1 < iVar6) {
              local_14 = (CQuaternion4f *)(iVar6 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        (in_stack_00000008 + iVar6,in_stack_ffffff18);
              pCVar7 = &local_a8;
              local_a8.w = local_c8;
              pfVar11 = (float *)((int)&local_a8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              *(float *)((int)&local_a8 + (uint)bVar13 * -8 + 4) = afStack_c4[(uint)bVar13 * -2];
              *pfVar11 = afStack_c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
              pfVar11[(uint)bVar13 * -2 + 1] =
                   (afStack_c4 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(result_out,pCVar7,in_stack_ffffff18);
              local_b8.w = afStack_84[3];
              pfVar11 = (float *)((int)&local_b8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              *(float *)((int)&local_b8 + (uint)bVar13 * -8 + 4) = afStack_84[(uint)bVar13 * -2 + 4]
              ;
              *pfVar11 = afStack_84[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 5];
              pfVar11[(uint)bVar13 * -2 + 1] =
                   (afStack_84 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 5)[(uint)bVar13 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (&local_b8,(CQuaternion4f *)((int)&local_14->w + (int)&local_34->w),
                         in_stack_ffffff18);
              pCVar7 = &local_98;
            }
            puVar8 = (undefined4 *)((int)pCVar7 + (uint)bVar13 * -8 + 4);
            local_d8.w = pCVar7->w;
            puVar10 = (undefined4 *)((int)&local_d8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            puVar9 = puVar8 + (uint)bVar13 * -2 + 1;
            *(undefined4 *)((int)&local_d8 + (uint)bVar13 * -8 + 4) = *puVar8;
            *puVar10 = *puVar9;
            puVar10[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_30,&local_d8,in_stack_00000010,(float)in_stack_ffffff18);
            pfVar11 = (float *)(local_28 + 0x6b4 + (uint)bVar13 * -8);
            *(undefined4 *)(local_28 + 0x6b0) = local_88;
            pfVar12 = pfVar11 + (uint)bVar13 * -2 + 1;
            *pfVar11 = afStack_84[(uint)bVar13 * -2];
            *pfVar12 = afStack_84[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            pfVar12[(uint)bVar13 * -2 + 1] =
                 (afStack_84 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
          }
          result_out = result_out + 1;
          local_20 = local_20 + 0x24;
          local_28 = local_28 + 0x10;
          local_30 = local_30 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < *(int *)(iVar4 + 0x28558));
      }
    }
    else {
      g_CurrentFilename = "MbP?..\\core\\skeleton.cpp" + 4;
      g_CurrentLineNumber = 0xad5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (in_stack_00000014 < 0) {
      fVar1 = in_stack_0000000c[1];
      fVar2 = in_stack_0000000c[2];
      fVar3 = 1.0 - (float)in_stack_00000010;
      if ((float *)(in_stack_00000004 + 0x6a4) != afStack_44) {
        *(float *)(in_stack_00000004 + 0x6a4) =
             *(float *)(in_stack_00000004 + 0x6a4) * fVar3 +
             *(float *)(in_stack_00000004 + 0x508) * *in_stack_0000000c * (float)in_stack_00000010;
        *(float *)(in_stack_00000004 + 0x6a8) =
             *(float *)(in_stack_00000004 + 0x6a8) * fVar3 +
             *(float *)(in_stack_00000004 + 0x50c) * fVar1 * (float)in_stack_00000010;
        *(float *)(in_stack_00000004 + 0x6ac) =
             *(float *)(in_stack_00000004 + 0x6ac) * fVar3 +
             *(float *)(in_stack_00000004 + 0x510) * fVar2 * (float)in_stack_00000010;
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 0059f260: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_SomethingUnkWriteMe_FUN_0059f260
// 0059f261: PUSH ESI
// 0059f262: PUSH EDI
// 0059f263: PUSH EBP
// 0059f264: SUB ESP,0xd8
// 0059f26a: FLD float ptr [ESP + 0xf8]
//   XREF to: Stack[0x10] (READ)
// 0059f271: FCOMP double ptr [0x0064ee18]
//   XREF to: 0064ee18 (READ)
// 0059f277: FNSTSW AX
// 0059f279: SAHF
// 0059f27a: JA 0x0059f287
//   XREF to: 0059f287 (CONDITIONAL_JUMP)
// 0059f27c: ADD ESP,0xd8
//   Label: LAB_0059f27c
// 0059f282: POP EBP
// 0059f283: POP EDI
// 0059f284: POP ESI
// 0059f285: POP EBX
// 0059f286: RET
// 0059f287: MOV EDX,dword ptr [ESP + 0xec]
//   Label: LAB_0059f287
//   XREF to: Stack[0x4] (READ)
// 0059f28e: PUSH EDX
// 0059f28f: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059f294: ADD ESP,0x4
// 0059f297: MOV EBX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0059f29e: MOV EBP,EAX
// 0059f2a0: MOV ESI,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0059f2a7: MOV ECX,dword ptr [EBX + 0x2250]
// 0059f2ad: ADD ESI,0x6b0
// 0059f2b3: TEST ECX,ECX
// 0059f2b5: JNZ 0x0059f527
//   XREF to: 0059f527 (CONDITIONAL_JUMP)
// 0059f2bb: MOV EDI,dword ptr [EAX + 0x28558]
// 0059f2c1: XOR EBX,EBX
// 0059f2c3: TEST EDI,EDI
// 0059f2c5: JLE 0x0059f3a5
//   XREF to: 0059f3a5 (CONDITIONAL_JUMP)
// 0059f2cb: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0059f2d2: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059f2d9: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x8] (READ)
// 0059f2e0: MOV dword ptr [ESP + 0xbc],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0059f2e7: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059f2ee: MOV EDI,dword ptr [ESP + 0xfc]
//   Label: LAB_0059f2ee
//   XREF to: Stack[0x14] (READ)
// 0059f2f5: PUSH EDI
// 0059f2f6: PUSH EBX
// 0059f2f7: PUSH EBP
// 0059f2f8: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059f2fd: ADD ESP,0xc
// 0059f300: TEST EAX,EAX
// 0059f302: JL 0x0059f363
//   XREF to: 0059f363 (CONDITIONAL_JUMP)
// 0059f304: MOV EDX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0059f30b: PUSH EDX
// 0059f30c: PUSH EAX
// 0059f30d: PUSH dword ptr [ESP + 0x100]
//   XREF to: Stack[0x10] (READ)
// 0059f314: PUSH EDI
// 0059f315: PUSH EBX
// 0059f316: CALL dword ptr [ESP + 0x114]
//   XREF to: Stack[0x18] (READ)
// 0059f31d: MOV dword ptr [ESP + 0xe8],EAX
// 0059f324: FLD float ptr [ESP + 0xe8]
// 0059f32b: ADD ESP,0x14
// 0059f32e: SUB ESP,0x4
// 0059f331: MOV ESI,dword ptr [ESP + 0xd0]
// 0059f338: FSTP float ptr [ESP]
// 0059f33b: PUSH ESI
// 0059f33c: MOV EDI,dword ptr [ESP + 0xc4]
// 0059f343: PUSH EDI
// 0059f344: LEA ESI,[ESP + 0xc]
// 0059f348: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0059f34d: ADD ESP,0xc
// 0059f350: MOV EDI,dword ptr [ESP + 0xc4]
// 0059f357: MOV ESI,ESP
// 0059f359: LEA EDI,[EDI + 0x6b0]
// 0059f35f: MOVSD ES:EDI,ESI
// 0059f360: MOVSD ES:EDI,ESI
// 0059f361: MOVSD ES:EDI,ESI
// 0059f362: MOVSD ES:EDI,ESI
// 0059f363: MOV EAX,dword ptr [ESP + 0xc4]
//   Label: LAB_0059f363
//   XREF to: Stack[-0x24] (READ)
// 0059f36a: MOV EDX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x2c] (READ)
// 0059f371: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x1c] (READ)
// 0059f378: INC EBX
// 0059f379: MOV ESI,dword ptr [EBP + 0x28558]
// 0059f37f: ADD EAX,0x10
// 0059f382: ADD EDX,0x10
// 0059f385: ADD ECX,0x10
// 0059f388: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059f38f: MOV dword ptr [ESP + 0xbc],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059f396: MOV dword ptr [ESP + 0xcc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059f39d: CMP EBX,ESI
// 0059f39f: JL 0x0059f2ee
//   XREF to: 0059f2ee (CONDITIONAL_JUMP)
// 0059f3a5: CMP dword ptr [ESP + 0xfc],0x0
//   Label: LAB_0059f3a5
//   XREF to: Stack[0x14] (READ)
// 0059f3ad: JGE 0x0059f27c
//   XREF to: 0059f27c (CONDITIONAL_JUMP)
// 0059f3b3: MOV EBX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0059f3ba: MOV EAX,dword ptr [EBX + 0x508]
// 0059f3c0: ADD EBX,0x508
// 0059f3c6: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0059f3cd: LEA EAX,[EBX + 0x4]
// 0059f3d0: MOV EAX,dword ptr [EAX]
// 0059f3d2: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0059f3d9: LEA EAX,[EBX + 0x8]
// 0059f3dc: MOV EAX,dword ptr [EAX]
// 0059f3de: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0059f3e5: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0xc] (READ)
// 0059f3ec: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x5c] (READ)
// 0059f3f3: FMUL float ptr [EAX]
// 0059f3f5: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x58] (READ)
// 0059f3fc: FXCH
// 0059f3fe: FSTP float ptr [ESP + 0x8c]
// 0059f405: FMUL float ptr [EAX + 0x4]
// 0059f408: FLD float ptr [ESP + 0xf8]
// 0059f40f: FLD float ptr [ESP + 0x8c]
// 0059f416: FMUL ST1
// 0059f418: FLD float ptr [ESP + 0x94]
// 0059f41f: FXCH ST3
// 0059f421: FSTP float ptr [ESP + 0x90]
// 0059f428: FXCH ST2
// 0059f42a: FMUL float ptr [EAX + 0x8]
// 0059f42d: FLD float ptr [ESP + 0x90]
// 0059f434: FMUL ST2
// 0059f436: FLD ST2
// 0059f438: FLD1
// 0059f43a: FSUBRP
// 0059f43c: FXCH ST2
// 0059f43e: FST float ptr [ESP + 0x94]
// 0059f445: FMULP ST3
// 0059f447: FXCH
// 0059f449: FSTP float ptr [ESP + 0xb0]
// 0059f450: MOV EBX,dword ptr [ESP + 0xec]
// 0059f457: FXCH ST2
// 0059f459: FSTP float ptr [ESP + 0x80]
// 0059f460: FXCH
// 0059f462: FSTP float ptr [ESP + 0x84]
// 0059f469: FSTP float ptr [ESP + 0x88]
// 0059f470: FLD float ptr [EBX + 0x6a4]
// 0059f476: FMUL float ptr [ESP + 0xb0]
// 0059f47d: FSTP float ptr [ESP + 0x98]
// 0059f484: FLD float ptr [EBX + 0x6a8]
// 0059f48a: FMUL float ptr [ESP + 0xb0]
// 0059f491: FSTP float ptr [ESP + 0x9c]
// 0059f498: FLD float ptr [EBX + 0x6ac]
// 0059f49e: FMUL float ptr [ESP + 0xb0]
// 0059f4a5: ADD EBX,0x6a4
// 0059f4ab: LEA EAX,[ESP + 0xa4]
// 0059f4b2: FLD float ptr [ESP + 0x98]
// 0059f4b9: FADD float ptr [ESP + 0x80]
// 0059f4c0: FLD float ptr [ESP + 0x9c]
// 0059f4c7: FXCH
// 0059f4c9: FSTP float ptr [ESP + 0xa4]
// 0059f4d0: FADD float ptr [ESP + 0x84]
// 0059f4d7: FXCH
// 0059f4d9: FST float ptr [ESP + 0xa0]
// 0059f4e0: FADD float ptr [ESP + 0x88]
// 0059f4e7: FXCH
// 0059f4e9: FSTP float ptr [ESP + 0xa8]
// 0059f4f0: FSTP float ptr [ESP + 0xac]
// 0059f4f7: CMP EBX,EAX
// 0059f4f9: JZ 0x0059f27c
//   XREF to: 0059f27c (CONDITIONAL_JUMP)
// 0059f4ff: MOV EAX,dword ptr [ESP + 0xa4]
// 0059f506: MOV dword ptr [EBX],EAX
// 0059f508: MOV EAX,dword ptr [ESP + 0xa8]
// 0059f50f: MOV dword ptr [EBX + 0x4],EAX
// 0059f512: MOV EAX,dword ptr [ESP + 0xac]
// 0059f519: MOV dword ptr [EBX + 0x8],EAX
// 0059f51c: ADD ESP,0xd8
// 0059f522: POP EBP
// 0059f523: POP EDI
// 0059f524: POP ESI
// 0059f525: POP EBX
// 0059f526: RET
// 0059f527: CMP ECX,0x1
//   Label: LAB_0059f527
// 0059f52a: JNZ 0x0059f6b6
//   XREF to: 0059f6b6 (CONDITIONAL_JUMP)
// 0059f530: XOR EDX,EDX
// 0059f532: MOV ECX,dword ptr [EAX + 0x28558]
// 0059f538: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0059f53f: TEST ECX,ECX
// 0059f541: JLE 0x0059f3a5
//   XREF to: 0059f3a5 (CONDITIONAL_JUMP)
// 0059f547: MOV EBX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x8] (READ)
// 0059f54e: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059f555: MOV dword ptr [ESP + 0xb8],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0059f55c: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0059f563: MOV dword ptr [ESP + 0xb4],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0059f56a: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059f571: MOV EAX,dword ptr [ESP + 0xfc]
//   Label: LAB_0059f571
//   XREF to: Stack[0x14] (READ)
// 0059f578: PUSH EAX
// 0059f579: MOV EDX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x18] (READ)
// 0059f580: PUSH EDX
// 0059f581: PUSH EBP
// 0059f582: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059f587: ADD ESP,0xc
// 0059f58a: TEST EAX,EAX
// 0059f58c: JL 0x0059f5e2
//   XREF to: 0059f5e2 (CONDITIONAL_JUMP)
// 0059f58e: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x20] (READ)
// 0059f595: MOV EAX,dword ptr [EAX + 0x2857c]
// 0059f59b: TEST EAX,EAX
// 0059f59d: JGE 0x0059f63a
//   XREF to: 0059f63a (CONDITIONAL_JUMP)
// 0059f5a3: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0xd8] (DATA)
// 0059f5a7: MOV ESI,EBX
// 0059f5a9: MOVSD ES:EDI,ESI
//   Label: LAB_0059f5a9
// 0059f5aa: MOVSD ES:EDI,ESI
// 0059f5ab: MOVSD ES:EDI,ESI
// 0059f5ac: MOVSD ES:EDI,ESI
// 0059f5ad: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xd8] (DATA)
// 0059f5b1: PUSH dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x10] (READ)
// 0059f5b8: PUSH EAX
// 0059f5b9: MOV EDI,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (READ)
// 0059f5c0: PUSH EDI
// 0059f5c1: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x88] (DATA)
// 0059f5c5: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0059f5ca: ADD ESP,0xc
// 0059f5cd: MOV EDI,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 0059f5d4: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x88] (DATA)
// 0059f5d8: LEA EDI,[EDI + 0x6b0]
// 0059f5de: MOVSD ES:EDI,ESI
// 0059f5df: MOVSD ES:EDI,ESI
// 0059f5e0: MOVSD ES:EDI,ESI
// 0059f5e1: MOVSD ES:EDI,ESI
// 0059f5e2: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0059f5e2
//   XREF to: Stack[-0x20] (READ)
// 0059f5e9: MOV EDX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 0059f5f0: MOV ECX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 0059f5f7: MOV ESI,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x18] (READ)
// 0059f5fe: ADD EBX,0x10
// 0059f601: MOV EDI,dword ptr [EBP + 0x28558]
// 0059f607: ADD EAX,0x24
// 0059f60a: ADD EDX,0x10
// 0059f60d: ADD ECX,0x10
// 0059f610: INC ESI
// 0059f611: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059f618: MOV dword ptr [ESP + 0xc0],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0059f61f: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0059f626: MOV dword ptr [ESP + 0xd0],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0059f62d: CMP ESI,EDI
// 0059f62f: JGE 0x0059f3a5
//   XREF to: 0059f3a5 (CONDITIONAL_JUMP)
// 0059f635: JMP 0x0059f571
//   XREF to: 0059f571 (UNCONDITIONAL_JUMP)
// 0059f63a: SHL EAX,0x4
//   Label: LAB_0059f63a
// 0059f63d: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059f644: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x8] (READ)
// 0059f64b: ADD EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x14] (READ)
// 0059f652: PUSH EAX
// 0059f653: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0xc8] (DATA)
// 0059f657: LEA EDI,[ESP + 0x44]
//   XREF to: Stack[-0xa8] (DATA)
// 0059f65b: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059f660: ADD ESP,0x4
// 0059f663: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0xa8] (DATA)
// 0059f667: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0xc8] (DATA)
// 0059f66b: PUSH EAX
// 0059f66c: MOVSD ES:EDI,ESI
// 0059f66d: MOVSD ES:EDI,ESI
// 0059f66e: MOVSD ES:EDI,ESI
// 0059f66f: MOVSD ES:EDI,ESI
// 0059f670: PUSH EBX
// 0059f671: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x78] (DATA)
// 0059f675: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0xb8] (DATA)
// 0059f679: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059f67e: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x78] (DATA)
// 0059f682: ADD ESP,0x8
// 0059f685: MOVSD ES:EDI,ESI
// 0059f686: MOVSD ES:EDI,ESI
// 0059f687: MOVSD ES:EDI,ESI
// 0059f688: MOVSD ES:EDI,ESI
// 0059f689: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x34] (READ)
// 0059f690: ADD EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x14] (READ)
// 0059f697: PUSH EAX
// 0059f698: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0xb8] (DATA)
// 0059f69c: PUSH EAX
// 0059f69d: LEA ESI,[ESP + 0x58]
//   XREF to: Stack[-0x98] (DATA)
// 0059f6a1: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0xd8] (DATA)
// 0059f6a5: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059f6aa: LEA ESI,[ESP + 0x58]
//   XREF to: Stack[-0x98] (DATA)
// 0059f6ae: ADD ESP,0x8
// 0059f6b1: JMP 0x0059f5a9
//   XREF to: 0059f5a9 (UNCONDITIONAL_JUMP)
// 0059f6b6: MOV EBP,0x64edf8
//   Label: LAB_0059f6b6
//   XREF to: 0064edf8 (DATA)
// 0059f6bb: MOV EAX,0xad5
// 0059f6c0: PUSH 0x64ee0d
//   XREF to: 0064ee0d (DATA)
// 0059f6c5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0059f6cb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0059f6d0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059f6d5: ADD ESP,0x4
// 0059f6d8: JMP 0x0059f3a5
//   XREF to: 0059f3a5 (UNCONDITIONAL_JUMP)
