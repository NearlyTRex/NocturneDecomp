// Name: core_charactr.cpp_CCharacter_FUN_0042a520
// Address: 0042a520
// Address Range: [[0042a520, 0042a827]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a520(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042acb3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b5b0 (0042b5b0) at 0042b64c [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006170c2 = 0.5
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_skeleton.cpp_CDeformableModel_FUN_0059c2d0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a520(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  int iVar9;
  float10 fVar10;
  int in_stack_00000008;
  int in_stack_0000000c;
  float local_68;
  float fStack_64;
  float fStack_60;
  CVector3f local_5c [2];
  char *local_44;
  float local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  if (-1 < in_stack_0000000c) {
    iVar5 = -1;
    local_44 = (this_ptr->model).padding_0x0 + 0x58;
    iVar9 = 0;
    local_24 = 0.0;
    iVar6 = in_stack_00000008;
    pcVar8 = local_44;
    if (0 < *(int *)(in_stack_00000008 + 0x28558)) {
      do {
        if ((in_stack_0000000c == *(int *)(iVar6 + 0x2857c)) &&
           (local_20 = SQRT(*(float *)(pcVar8 + 8) * *(float *)(pcVar8 + 8) +
                            *(float *)pcVar8 * *(float *)pcVar8 +
                            *(float *)(pcVar8 + 4) * *(float *)(pcVar8 + 4)), local_24 < local_20))
        {
          iVar5 = iVar9;
          local_24 = local_20;
        }
        iVar6 = iVar6 + 0x24;
        iVar9 = iVar9 + 1;
        pcVar8 = pcVar8 + 0xc;
      } while (iVar9 < *(int *)(in_stack_00000008 + 0x28558));
    }
    if (iVar5 != -1) {
      pcVar7 = local_44 + in_stack_0000000c * 0xc;
      pcVar8 = local_44 + iVar5 * 0xc;
      fVar10 = SQRT(((float10)*(float *)(pcVar8 + 8) - (float10)*(float *)(pcVar7 + 8)) *
                    (float10)(float)((float10)*(float *)(pcVar8 + 8) -
                                    (float10)*(float *)(pcVar7 + 8)) +
                    (float10)(*(float *)pcVar8 - *(float *)pcVar7) *
                    (float10)(*(float *)pcVar8 - *(float *)pcVar7) +
                    ((float10)*(float *)(pcVar8 + 4) - (float10)*(float *)(pcVar7 + 4)) *
                    (float10)(float)((float10)*(float *)(pcVar8 + 4) -
                                    (float10)*(float *)(pcVar7 + 4))) * (float10)DOUBLE_006170c2;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pcVar7,pcVar8));
      local_14 = (int)ROUND(fVar10);
      local_28 = local_14 + 1;
      iVar5 = 0;
      if (0 < local_28) {
        local_3c = (this_ptr->model).padding_0x0 + 0xe80;
        local_38 = this_ptr->cloth_data + 0x934;
        local_34 = this_ptr->cloth_data + 0x484;
        local_2c = &this_ptr->model;
        local_30 = local_14 + 2;
        while (*(int *)(this_ptr->cloth_data + 0x478) < 0x32) {
          iVar6 = *(int *)(this_ptr->cloth_data + 0x478);
          (this_ptr->base_actor).is_transparent = 1;
          pcVar8 = local_34 + iVar6 * 0x18;
          *(int *)(this_ptr->cloth_data + 0x478) = iVar6 + 1;
          core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
          uVar3 = core_skeleton_cpp_CDeformableModel_FUN_0059c2d0();
          *(undefined4 *)pcVar8 = uVar3;
          *(int *)(pcVar8 + 4) = in_stack_0000000c;
          fVar2 = (float)(iVar5 + 1);
          local_1c = (float)local_28;
          fVar1 = 1.0 / local_1c;
          local_44 = (char *)(local_68 * fVar2 * fVar1);
          local_40 = fStack_64 * fVar2 * fVar1;
          local_3c = (char *)(fStack_60 * fVar2 * fVar1);
          if ((char **)(pcVar8 + 8) != &local_44) {
            *(char **)(pcVar8 + 8) = local_44;
            *(float *)(pcVar8 + 0xc) = local_40;
            *(char **)(pcVar8 + 0x10) = local_3c;
          }
          core_xform_cpp_transformVector3x4_FUN_005f4dc0
                    (local_5c,(CVector3f *)(pcVar8 + 8),
                     (CMatrix3x4f *)(local_34 + *(int *)(pcVar8 + 4) * 0x30));
          pfVar4 = core_actor_cpp_CDemonActor_FUN_00408ec0(&this_ptr->base_actor);
          iVar6 = (*(int *)(this_ptr->cloth_data + 0x478) + -1) * 0x2a4 + local_28;
          *(float *)(iVar6 + 0x20) = *pfVar4;
          *(float *)(iVar6 + 0x24) = pfVar4[1];
          *(float *)(iVar6 + 0x28) = pfVar4[2];
          pcVar7 = this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x83c;
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '?';
          fVar1 = (float)DOUBLE_006170c2;
          *(float *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7e8)
               = *(float *)(pcVar8 + 0x14) * fVar1;
          *(undefined4 *)
           (this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7ec) =
               *(undefined4 *)(pcVar8 + 0x14);
          *(float *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7f0)
               = fVar1 * *(float *)(pcVar8 + 0x14);
          iVar5 = iVar5 + 1;
          *(undefined4 *)
           (this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x838) =
               *(undefined4 *)(this_ptr->cloth_data + 0x47c);
          if (local_18 <= iVar5) {
            return;
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0042a520: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042a520
// 0042a521: PUSH ESI
// 0042a522: PUSH EDI
// 0042a523: PUSH EBP
// 0042a524: SUB ESP,0x70
// 0042a527: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x4] (READ)
// 0042a52e: MOV EBP,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0xc] (READ)
// 0042a535: TEST EBP,EBP
// 0042a537: JL 0x0042a643
//   XREF to: 0042a643 (CONDITIONAL_JUMP)
// 0042a53d: MOV ECX,0xffffffff
// 0042a542: LEA EAX,[EBX + 0x1b0]
// 0042a548: XOR EDX,EDX
// 0042a54a: XOR EDI,EDI
// 0042a54c: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0042a550: MOV EDX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x8] (READ)
// 0042a557: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0042a55b: MOV ESI,EAX
// 0042a55d: CMP dword ptr [EDX + 0x28558],0x0
// 0042a564: JLE 0x0042a588
//   XREF to: 0042a588 (CONDITIONAL_JUMP)
// 0042a566: CMP EBP,dword ptr [EDX + 0x2857c]
//   Label: LAB_0042a566
// 0042a56c: JZ 0x0042a64b
//   XREF to: 0042a64b (CONDITIONAL_JUMP)
// 0042a572: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_0042a572
//   XREF to: Stack[0x8] (READ)
// 0042a579: ADD EDX,0x24
// 0042a57c: INC EDI
// 0042a57d: ADD ESI,0xc
// 0042a580: CMP EDI,dword ptr [EAX + 0x28558]
// 0042a586: JL 0x0042a566
//   XREF to: 0042a566 (CONDITIONAL_JUMP)
// 0042a588: CMP ECX,-0x1
//   Label: LAB_0042a588
// 0042a58b: JZ 0x0042a643
//   XREF to: 0042a643 (CONDITIONAL_JUMP)
// 0042a591: LEA EAX,[EBP*0x4 + 0x0]
// 0042a598: SUB EAX,EBP
// 0042a59a: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x44] (READ)
// 0042a59e: SHL EAX,0x2
// 0042a5a1: ADD EDX,EAX
// 0042a5a3: LEA EAX,[ECX*0x4 + 0x0]
// 0042a5aa: SUB EAX,ECX
// 0042a5ac: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x44] (READ)
// 0042a5b0: SHL EAX,0x2
// 0042a5b3: ADD EAX,ECX
// 0042a5b5: FLD float ptr [EAX]
// 0042a5b7: FSUB float ptr [EDX]
// 0042a5b9: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x74] (WRITE)
// 0042a5bd: FLD float ptr [EAX + 0x4]
// 0042a5c0: FSUB float ptr [EDX + 0x4]
// 0042a5c3: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (WRITE)
// 0042a5c7: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (READ)
// 0042a5cb: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x74] (READ)
// 0042a5cf: FMUL ST0
// 0042a5d1: FLD float ptr [EAX + 0x8]
// 0042a5d4: FSUB float ptr [EDX + 0x8]
// 0042a5d7: FXCH
// 0042a5d9: FADDP ST2,ST0
// 0042a5db: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (WRITE)
// 0042a5df: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 0042a5e3: FADDP
// 0042a5e5: FSQRT
// 0042a5e7: FMUL double ptr [0x006170c2]
//   XREF to: 006170c2 (READ)
// 0042a5ed: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0042a5f2: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (WRITE)
// 0042a5f6: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 0042a5fa: INC EAX
// 0042a5fb: XOR EDI,EDI
// 0042a5fd: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042a601: TEST EAX,EAX
// 0042a603: JLE 0x0042a643
//   XREF to: 0042a643 (CONDITIONAL_JUMP)
// 0042a605: LEA EAX,[EBX + 0xfd8]
// 0042a60b: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0042a60f: LEA EAX,[EBX + 0x33cc]
// 0042a615: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0042a619: LEA EAX,[EBX + 0x2f1c]
// 0042a61f: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0042a623: LEA EAX,[EBX + 0x158]
// 0042a629: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042a62d: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 0042a631: INC EAX
// 0042a632: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0042a636: CMP dword ptr [EBX + 0x2f10],0x32
//   Label: LAB_0042a636
// 0042a63d: JL 0x0042a67f
//   XREF to: 0042a67f (CONDITIONAL_JUMP)
// 0042a643: ADD ESP,0x70
//   Label: LAB_0042a643
// 0042a646: POP EBP
// 0042a647: POP EDI
// 0042a648: POP ESI
// 0042a649: POP EBX
// 0042a64a: RET
// 0042a64b: FLD float ptr [ESI + 0x4]
//   Label: LAB_0042a64b
// 0042a64e: FMUL ST0
// 0042a650: FLD float ptr [ESI]
// 0042a652: FMUL ST0
// 0042a654: FADDP
// 0042a656: FLD float ptr [ESI + 0x8]
// 0042a659: FMUL ST0
// 0042a65b: FADDP
// 0042a65d: FSQRT
// 0042a65f: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0x20] (WRITE)
// 0042a663: FCOMP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0042a667: FNSTSW AX
// 0042a669: SAHF
// 0042a66a: JBE 0x0042a572
//   XREF to: 0042a572 (CONDITIONAL_JUMP)
// 0042a670: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x20] (READ)
// 0042a674: MOV ECX,EDI
// 0042a676: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042a67a: JMP 0x0042a572
//   XREF to: 0042a572 (UNCONDITIONAL_JUMP)
// 0042a67f: MOV EDX,dword ptr [EBX + 0x2f10]
//   Label: LAB_0042a67f
// 0042a685: IMUL ESI,EDX,0x18
// 0042a688: LEA EAX,[EDX + 0x1]
// 0042a68b: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x38] (READ)
// 0042a68f: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x30] (READ)
// 0042a693: MOV dword ptr [EBX + 0xfc],0x1
// 0042a69d: PUSH EDX
// 0042a69e: ADD ESI,ECX
// 0042a6a0: MOV dword ptr [EBX + 0x2f10],EAX
// 0042a6a6: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042a6ab: ADD ESP,0x4
// 0042a6ae: PUSH EBP
// 0042a6af: PUSH EAX
// 0042a6b0: CALL core_skeleton.cpp_CDeformableModel_FUN_0059c2d0
//   XREF to: 0059c2d0 (UNCONDITIONAL_CALL)
// 0042a6b5: ADD ESP,0x8
// 0042a6b8: MOV dword ptr [ESI],EAX
// 0042a6ba: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x34] (READ)
// 0042a6be: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042a6c2: LEA EAX,[EDI + 0x1]
// 0042a6c5: MOV dword ptr [ESI + 0x4],EBP
// 0042a6c8: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042a6cc: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x74] (READ)
// 0042a6d0: FILD dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (READ)
// 0042a6d4: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (WRITE)
// 0042a6d8: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 0042a6dc: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (READ)
// 0042a6e0: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 0042a6e4: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x6c] (READ)
// 0042a6e8: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 0042a6ec: FLD1
// 0042a6ee: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 0042a6f2: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x28] (WRITE)
// 0042a6f6: FXCH ST3
// 0042a6f8: FST float ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0042a6fb: FXCH ST3
// 0042a6fd: FDIV float ptr [ESP + 0x58]
//   XREF to: Stack[-0x28] (READ)
// 0042a701: FXCH ST3
// 0042a703: FMUL ST3
// 0042a705: FXCH ST2
// 0042a707: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x7c] (WRITE)
// 0042a70b: FMUL ST3
// 0042a70d: FXCH
// 0042a70f: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (WRITE)
// 0042a713: FMULP ST3
// 0042a715: LEA EDX,[ESI + 0x8]
// 0042a718: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x50] (DATA)
// 0042a71c: FXCH
// 0042a71e: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x50] (WRITE)
// 0042a722: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x4c] (WRITE)
// 0042a726: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0042a72a: CMP EDX,EAX
// 0042a72c: JZ 0x0042a742
//   XREF to: 0042a742 (CONDITIONAL_JUMP)
// 0042a72e: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x50] (DATA)
// 0042a732: MOV dword ptr [EDX],EAX
// 0042a734: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x4c] (READ)
// 0042a738: MOV dword ptr [EDX + 0x4],EAX
// 0042a73b: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x48] (READ)
// 0042a73f: MOV dword ptr [EDX + 0x8],EAX
// 0042a742: IMUL EAX,dword ptr [ESI + 0x4],0x30
//   Label: LAB_0042a742
// 0042a746: ADD EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x40] (READ)
// 0042a74a: PUSH EAX
// 0042a74b: LEA EAX,[ESI + 0x8]
// 0042a74e: PUSH EAX
// 0042a74f: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x68] (DATA)
// 0042a753: PUSH EAX
// 0042a754: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042a759: ADD ESP,0xc
// 0042a75c: PUSH EAX
// 0042a75d: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x5c] (DATA)
// 0042a761: PUSH EAX
// 0042a762: PUSH EBX
// 0042a763: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042a768: MOV EDX,dword ptr [EBX + 0x2f10]
// 0042a76e: DEC EDX
// 0042a76f: IMUL EDX,EDX,0x2a4
// 0042a775: ADD ESP,0xc
// 0042a778: ADD EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x3c] (READ)
// 0042a77c: MOV ECX,dword ptr [EAX]
// 0042a77e: MOV dword ptr [EDX + 0x20],ECX
// 0042a781: MOV ECX,dword ptr [EAX + 0x4]
// 0042a784: MOV dword ptr [EDX + 0x24],ECX
// 0042a787: MOV ECX,dword ptr [EAX + 0x8]
// 0042a78a: MOV dword ptr [EDX + 0x28],ECX
// 0042a78d: MOV EAX,dword ptr [EBX + 0x2f10]
// 0042a793: DEC EAX
// 0042a794: IMUL EAX,EAX,0x2a4
// 0042a79a: MOV dword ptr [EBX + EAX*0x1 + 0x3578],0x0
// 0042a7a5: MOV dword ptr [ESI + 0x14],0x3f000000
// 0042a7ac: MOV EAX,dword ptr [EBX + 0x2f10]
// 0042a7b2: DEC EAX
// 0042a7b3: IMUL EAX,EAX,0x2a4
// 0042a7b9: FLD double ptr [0x006170c2]
//   XREF to: 006170c2 (READ)
// 0042a7bf: FLD float ptr [ESI + 0x14]
// 0042a7c2: FMUL ST1
// 0042a7c4: FSTP float ptr [EBX + EAX*0x1 + 0x3524]
// 0042a7cb: MOV EAX,dword ptr [EBX + 0x2f10]
// 0042a7d1: DEC EAX
// 0042a7d2: IMUL EAX,EAX,0x2a4
// 0042a7d8: MOV EDX,dword ptr [ESI + 0x14]
// 0042a7db: MOV dword ptr [EBX + EAX*0x1 + 0x3528],EDX
// 0042a7e2: MOV EAX,dword ptr [EBX + 0x2f10]
// 0042a7e8: DEC EAX
// 0042a7e9: IMUL EAX,EAX,0x2a4
// 0042a7ef: FMUL float ptr [ESI + 0x14]
// 0042a7f2: FSTP float ptr [EBX + EAX*0x1 + 0x352c]
// 0042a7f9: MOV EAX,dword ptr [EBX + 0x2f10]
// 0042a7ff: DEC EAX
// 0042a800: IMUL EAX,EAX,0x2a4
// 0042a806: INC EDI
// 0042a807: MOV EDX,dword ptr [EBX + 0x2f14]
// 0042a80d: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 0042a811: MOV dword ptr [EBX + EAX*0x1 + 0x3574],EDX
// 0042a818: CMP EDI,ESI
// 0042a81a: JL 0x0042a636
//   XREF to: 0042a636 (CONDITIONAL_JUMP)
// 0042a820: ADD ESP,0x70
// 0042a823: POP EBP
// 0042a824: POP EDI
// 0042a825: POP ESI
// 0042a826: POP EBX
// 0042a827: RET
