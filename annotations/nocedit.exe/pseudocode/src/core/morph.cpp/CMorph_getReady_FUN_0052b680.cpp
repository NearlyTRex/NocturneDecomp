// Name: core_morph.cpp_CMorph_getReady_FUN_0052b680
// Address: 0052b680
// Address Range: [[0052b680, 0052bad7]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorph_getReady_FUN_0052b680()
// Cross-references:
//   core_biggs.cpp_FUN_00418680 (00418680) at 004186d8 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f73a [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528c70 (00528c70) at 00528cf0 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00529345 [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c4ab [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545dc1 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6e24 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e5865 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\morph.cpp_0063a443
//   TerminatedCString s_CMorph_getReady_can_t_do_0063a455
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_FUN_0052b280
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CMorph_getReady(CMorph* param_1) */

void core_morph_cpp_CMorph_getReady_FUN_0052b680(void)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar9;
  int in_stack_00000004;
  int in_stack_0000000c;
  CBoundingBox3D local_c0;
  float local_9c [3];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CBoundingBox3D *local_1c;
  CVector3f *local_18;
  float *local_14;
  
  if ((*(int *)(in_stack_00000004 + 0x54) < 3) || (*(int *)(in_stack_00000004 + 0x65c) < 3)) {
    g_CurrentFilename = "@..\\core\\morph.cpp" + 1;
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorph::getReady - can't do this unless we have setup both models!");
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (&stack0xffffff3c,2,&g_CBoundingBox3DTypeInfo);
  local_1c = &local_c0;
  local_30 = in_stack_0000000c;
  local_24 = 0;
  do {
    pCVar4 = local_1c;
    iVar1 = *(int *)(local_30 + 0x58);
    pCVar2 = (CBoundingBox3D *)(iVar1 + 4);
    if (pCVar2 != local_1c) {
      (local_1c->min).x = (pCVar2->min).x;
      (pCVar4->min).y = *(float *)(iVar1 + 8);
      (pCVar4->min).z = *(float *)(iVar1 + 0xc);
    }
    if ((CBoundingBox3D *)&pCVar4->max != pCVar2) {
      (pCVar4->max).x = (pCVar2->min).x;
      (pCVar4->max).y = *(float *)(iVar1 + 8);
      (pCVar4->max).z = *(float *)(iVar1 + 0xc);
    }
    pCVar4 = local_1c;
    iVar1 = local_24;
    iVar7 = 0x10;
    for (iVar9 = 1; iVar9 < *(int *)(in_stack_0000000c + iVar1 + 0x54); iVar9 = iVar9 + 1) {
      iVar3 = *(int *)(in_stack_0000000c + iVar1 + 0x58) + iVar7;
      iVar7 = iVar7 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar4,(CVector3f *)(iVar3 + 4));
    }
    local_24 = local_24 + 0x608;
    local_1c = local_1c + 1;
    local_30 = local_30 + 0x608;
  } while (local_24 != 0xc10);
  local_18 = &local_c0.max;
  local_14 = local_9c;
  local_2c = in_stack_0000000c + 0x608;
  local_20 = 0;
  local_28 = in_stack_0000000c;
  do {
    iVar7 = local_20;
    iVar1 = local_28;
    iVar9 = 1 - local_20;
    pCVar2 = &local_c0 + iVar9;
    local_84 = *local_14 - (pCVar2->min).x;
    local_80 = local_14[1] - (&local_c0)[iVar9].min.y;
    pCVar4 = &local_c0 + local_20;
    local_7c = local_14[2] - (&local_c0)[iVar9].min.z;
    local_54 = local_18->x - (pCVar4->min).x;
    local_50 = local_18->y - (&local_c0)[local_20].min.y;
    local_4c = local_18->z - (&local_c0)[local_20].min.z;
    local_60 = local_84 / local_54;
    local_3c = *local_14 - (pCVar2->min).x;
    local_38 = local_14[1] - (&local_c0)[iVar9].min.y;
    local_34 = local_14[2] - (&local_c0)[iVar9].min.z;
    local_6c = local_18->x - (pCVar4->min).x;
    local_68 = local_18->y - (&local_c0)[local_20].min.y;
    local_64 = local_18->z - (&local_c0)[local_20].min.z;
    local_5c = local_38 / local_68;
    local_90 = *local_14 - (pCVar2->min).x;
    local_8c = local_14[1] - (&local_c0)[iVar9].min.y;
    local_88 = local_14[2] - (&local_c0)[iVar9].min.z;
    local_78 = local_18->x - (pCVar4->min).x;
    local_74 = local_18->y - (&local_c0)[local_20].min.y;
    local_70 = local_18->z - (&local_c0)[local_20].min.z;
    local_58 = local_88 / local_70;
    iVar3 = 0;
    if (0 < *(int *)(local_28 + 0x54)) {
      iVar8 = 0;
      do {
        iVar6 = *(int *)(iVar1 + 0x58) + iVar8;
        local_48 = *(float *)(iVar6 + 4);
        local_44 = *(float *)(iVar6 + 8);
        local_40 = *(float *)(iVar6 + 0xc);
        if (*(int *)(in_stack_0000000c + 0xc28) != 0) {
          local_48 = *(float *)(iVar6 + 4) - (pCVar4->min).x;
          local_48 = local_48 * local_60;
          local_44 = *(float *)(iVar6 + 8) - (&local_c0)[iVar7].min.y;
          local_44 = local_44 * local_5c;
          local_40 = (*(float *)(iVar6 + 0xc) - (&local_c0)[iVar7].min.z) * local_58;
          local_48 = local_48 + (pCVar2->min).x;
          local_44 = local_44 + (&local_c0)[iVar9].min.y;
          local_40 = local_40 + (&local_c0)[iVar9].min.z;
        }
        uVar5 = core_morph_cpp_FUN_0052b280();
        *(undefined4 *)(*(int *)(unaff_ESI + 0x58) + iVar8) = uVar5;
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar3 < *(int *)(unaff_ESI + 0x54));
    }
    local_20 = local_20 + 1;
    local_14 = local_14 + -6;
    local_2c = local_2c + -0x608;
    local_28 = local_28 + 0x608;
    local_18 = local_18 + 2;
  } while (local_20 < 2);
  return;
}


// Assembly code:
// 0052b680: PUSH EBX
//   Label: core_morph.cpp_CMorph_getReady_FUN_0052b680
// 0052b681: PUSH ESI
// 0052b682: PUSH EDI
// 0052b683: PUSH EBP
// 0052b684: SUB ESP,0xb8
// 0052b68a: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052b691: CMP dword ptr [EAX + 0x54],0x3
// 0052b695: JL 0x0052b74f
//   XREF to: 0052b74f (CONDITIONAL_JUMP)
// 0052b69b: CMP dword ptr [EAX + 0x65c],0x3
// 0052b6a2: JL 0x0052b74f
//   XREF to: 0052b74f (CONDITIONAL_JUMP)
// 0052b6a8: PUSH 0x659900
//   Label: LAB_0052b6a8
//   XREF to: 00659900 (DATA)
// 0052b6ad: PUSH 0x2
// 0052b6af: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc8] (DATA)
// 0052b6b3: PUSH EAX
// 0052b6b4: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0052b6b9: ADD ESP,0xc
// 0052b6bc: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052b6c3: XOR EDI,EDI
// 0052b6c5: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0052b6cc: MOV EAX,ESP
// 0052b6ce: MOV dword ptr [ESP + 0x9c],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0052b6d5: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0052b6dc: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_0052b6dc
//   XREF to: Stack[-0x38] (READ)
// 0052b6e3: MOV EAX,dword ptr [EAX + 0x58]
// 0052b6e6: ADD EAX,0x4
// 0052b6e9: MOV EBX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x24] (READ)
// 0052b6f0: MOV EDX,EAX
// 0052b6f2: CMP EAX,EBX
// 0052b6f4: JZ 0x0052b706
//   XREF to: 0052b706 (CONDITIONAL_JUMP)
// 0052b6f6: MOV ECX,dword ptr [EAX]
// 0052b6f8: MOV dword ptr [EBX],ECX
//   XREF to: Stack[-0xc8] (DATA)
// 0052b6fa: MOV ECX,dword ptr [EAX + 0x4]
// 0052b6fd: MOV dword ptr [EBX + 0x4],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 0052b700: MOV ECX,dword ptr [EAX + 0x8]
// 0052b703: MOV dword ptr [EBX + 0x8],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 0052b706: LEA EAX,[EBX + 0xc]
//   Label: LAB_0052b706
//   XREF to: Stack[-0xbc] (DATA)
// 0052b709: CMP EAX,EDX
// 0052b70b: JNZ 0x0052bac3
//   XREF to: 0052bac3 (CONDITIONAL_JUMP)
// 0052b711: MOV EDI,dword ptr [ESP + 0xa4]
//   Label: LAB_0052b711
//   XREF to: Stack[-0x24] (READ)
// 0052b718: MOV EBP,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x2c] (READ)
// 0052b71f: MOV EBX,0x10
// 0052b724: MOV ESI,0x1
// 0052b729: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_0052b729
//   XREF to: Stack[0x4] (READ)
// 0052b730: ADD EAX,EBP
// 0052b732: CMP ESI,dword ptr [EAX + 0x54]
// 0052b735: JGE 0x0052b777
//   XREF to: 0052b777 (CONDITIONAL_JUMP)
// 0052b737: MOV EAX,dword ptr [EAX + 0x58]
// 0052b73a: ADD EAX,EBX
// 0052b73c: ADD EAX,0x4
// 0052b73f: PUSH EAX
// 0052b740: PUSH EDI
// 0052b741: INC ESI
// 0052b742: ADD EBX,0x10
// 0052b745: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 0052b74a: ADD ESP,0x8
// 0052b74d: JMP 0x0052b729
//   XREF to: 0052b729 (UNCONDITIONAL_JUMP)
// 0052b74f: MOV EBX,0x63a443
//   Label: LAB_0052b74f
//   XREF to: 0063a443 (PARAM)
// 0052b754: MOV ESI,0x31f
// 0052b759: PUSH 0x63a455
//   XREF to: 0063a455 (DATA)
// 0052b75e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0052b764: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052b76a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052b76f: ADD ESP,0x4
// 0052b772: JMP 0x0052b6a8
//   XREF to: 0052b6a8 (UNCONDITIONAL_JUMP)
// 0052b777: MOV EBX,dword ptr [ESP + 0x9c]
//   Label: LAB_0052b777
//   XREF to: Stack[-0x2c] (READ)
// 0052b77e: MOV ESI,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x24] (READ)
// 0052b785: MOV ECX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (READ)
// 0052b78c: ADD EBX,0x608
// 0052b792: ADD ESI,0x18
// 0052b795: ADD ECX,0x608
// 0052b79b: MOV dword ptr [ESP + 0x9c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052b7a2: MOV dword ptr [ESP + 0xa4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0052b7a9: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0052b7b0: CMP EBX,0xc10
// 0052b7b6: JNZ 0x0052b6dc
//   XREF to: 0052b6dc (CONDITIONAL_JUMP)
// 0052b7bc: MOV EAX,ESP
// 0052b7be: ADD EAX,0xc
// 0052b7c1: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052b7c8: MOV EAX,ESP
// 0052b7ca: ADD EAX,0x24
// 0052b7cd: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052b7d4: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052b7db: ADD EAX,0x608
// 0052b7e0: XOR EBP,EBP
// 0052b7e2: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0052b7e9: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052b7f0: MOV dword ptr [ESP + 0xa0],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0052b7f7: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0052b7fe: IMUL EDX,dword ptr [ESP + 0xa0],0x18
//   Label: LAB_0052b7fe
//   XREF to: Stack[-0x28] (READ)
// 0052b806: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x30] (READ)
// 0052b80d: MOV ESI,0x1
// 0052b812: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052b819: SUB ESI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 0052b820: IMUL ESI,ESI,0x18
// 0052b823: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x34] (READ)
// 0052b82a: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052b831: MOV EAX,ESP
// 0052b833: ADD ESI,EAX
// 0052b835: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x1c] (READ)
// 0052b83c: FLD float ptr [EAX]
//   XREF to: Stack[-0xa4] (DATA)
// 0052b83e: FSUB float ptr [ESI]
// 0052b840: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8c] (WRITE)
// 0052b844: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa0] (READ)
// 0052b847: FSUB float ptr [ESI + 0x4]
// 0052b84a: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x88] (WRITE)
// 0052b84e: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x9c] (READ)
// 0052b851: MOV EAX,ESP
// 0052b853: FSUB float ptr [ESI + 0x8]
// 0052b856: ADD EAX,EDX
// 0052b858: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 0052b85f: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x84] (WRITE)
// 0052b863: FLD float ptr [EDX]
//   XREF to: Stack[-0xbc] (DATA)
// 0052b865: FSUB float ptr [EAX]
// 0052b867: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8c] (READ)
// 0052b86b: FXCH
// 0052b86d: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0052b871: FDIV float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x5c] (READ)
// 0052b875: FLD float ptr [EDX + 0x4]
//   XREF to: Stack[-0xb8] (READ)
// 0052b878: FSUB float ptr [EAX + 0x4]
// 0052b87b: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x58] (WRITE)
// 0052b87f: FLD float ptr [EDX + 0x8]
//   XREF to: Stack[-0xb4] (READ)
// 0052b882: FSUB float ptr [EAX + 0x8]
// 0052b885: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x1c] (READ)
// 0052b88c: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x54] (WRITE)
// 0052b890: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x68] (WRITE)
// 0052b894: FLD float ptr [EDX]
//   XREF to: Stack[-0xa4] (DATA)
// 0052b896: FSUB float ptr [ESI]
// 0052b898: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x44] (WRITE)
// 0052b89f: FLD float ptr [EDX + 0x4]
//   XREF to: Stack[-0xa0] (READ)
// 0052b8a2: FSUB float ptr [ESI + 0x4]
// 0052b8a5: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (WRITE)
// 0052b8ac: FLD float ptr [EDX + 0x8]
//   XREF to: Stack[-0x9c] (READ)
// 0052b8af: FSUB float ptr [ESI + 0x8]
// 0052b8b2: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 0052b8b9: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0052b8c0: FLD float ptr [EDX]
//   XREF to: Stack[-0xbc] (DATA)
// 0052b8c2: FSUB float ptr [EAX]
// 0052b8c4: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x74] (WRITE)
// 0052b8c8: FLD float ptr [EDX + 0x4]
//   XREF to: Stack[-0xb8] (READ)
// 0052b8cb: FSUB float ptr [EAX + 0x4]
// 0052b8ce: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 0052b8d5: FXCH
// 0052b8d7: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (WRITE)
// 0052b8db: FDIV float ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (READ)
// 0052b8df: FLD float ptr [EDX + 0x8]
//   XREF to: Stack[-0xb4] (READ)
// 0052b8e2: FSUB float ptr [EAX + 0x8]
// 0052b8e5: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x1c] (READ)
// 0052b8ec: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0052b8f0: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x64] (WRITE)
// 0052b8f4: FLD float ptr [EDX]
//   XREF to: Stack[-0xa4] (DATA)
// 0052b8f6: FSUB float ptr [ESI]
// 0052b8f8: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (WRITE)
// 0052b8fc: FLD float ptr [EDX + 0x4]
//   XREF to: Stack[-0xa0] (READ)
// 0052b8ff: FSUB float ptr [ESI + 0x4]
// 0052b902: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x94] (WRITE)
// 0052b906: FLD float ptr [EDX + 0x8]
//   XREF to: Stack[-0x9c] (READ)
// 0052b909: FSUB float ptr [ESI + 0x8]
// 0052b90c: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 0052b913: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (WRITE)
// 0052b917: FLD float ptr [EDX]
//   XREF to: Stack[-0xbc] (DATA)
// 0052b919: FSUB float ptr [EAX]
// 0052b91b: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x80] (WRITE)
// 0052b91f: FLD float ptr [EDX + 0x4]
//   XREF to: Stack[-0xb8] (READ)
// 0052b922: FSUB float ptr [EAX + 0x4]
// 0052b925: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x7c] (WRITE)
// 0052b929: FLD float ptr [EDX + 0x8]
//   XREF to: Stack[-0xb4] (READ)
// 0052b92c: FSUB float ptr [EAX + 0x8]
// 0052b92f: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (READ)
// 0052b933: FXCH
// 0052b935: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x78] (WRITE)
// 0052b939: FDIV float ptr [ESP + 0x50]
//   XREF to: Stack[-0x78] (READ)
// 0052b93d: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x30] (READ)
// 0052b944: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x60] (WRITE)
// 0052b948: MOV EBX,dword ptr [EDX + 0x54]
// 0052b94b: XOR EDI,EDI
// 0052b94d: TEST EBX,EBX
// 0052b94f: JLE 0x0052ba3b
//   XREF to: 0052ba3b (CONDITIONAL_JUMP)
// 0052b955: MOV EBP,EAX
// 0052b957: XOR EBX,EBX
// 0052b959: MOV EDX,dword ptr [ESP + 0xb4]
//   Label: LAB_0052b959
//   XREF to: Stack[-0x14] (READ)
// 0052b960: MOV EDX,dword ptr [EDX + 0x58]
// 0052b963: ADD EDX,EBX
// 0052b965: MOV EAX,dword ptr [EDX + 0x4]
// 0052b968: ADD EDX,0x4
// 0052b96b: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0052b96f: LEA EAX,[EDX + 0x4]
// 0052b972: MOV EAX,dword ptr [EAX]
// 0052b974: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0052b978: LEA EAX,[EDX + 0x8]
// 0052b97b: MOV EAX,dword ptr [EAX]
// 0052b97d: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0052b984: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052b98b: CMP dword ptr [EAX + 0xc28],0x0
// 0052b992: JZ 0x0052ba03
//   XREF to: 0052ba03 (CONDITIONAL_JUMP)
// 0052b994: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (READ)
// 0052b998: FSUB float ptr [EBP]
// 0052b99b: FST float ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (WRITE)
// 0052b99f: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0x68] (READ)
// 0052b9a3: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (READ)
// 0052b9a7: FSUB float ptr [EBP + 0x4]
// 0052b9aa: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (READ)
// 0052b9b1: FXCH
// 0052b9b3: FST float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0052b9b7: FXCH
// 0052b9b9: FSUB float ptr [EBP + 0x8]
// 0052b9bc: FXCH
// 0052b9be: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0x64] (READ)
// 0052b9c2: FXCH
// 0052b9c4: FMUL float ptr [ESP + 0x68]
//   XREF to: Stack[-0x60] (READ)
// 0052b9c8: FXCH ST2
// 0052b9ca: FST float ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (WRITE)
// 0052b9ce: FXCH
// 0052b9d0: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0052b9d4: FXCH
// 0052b9d6: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (WRITE)
// 0052b9dd: FADD float ptr [ESI]
// 0052b9df: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (READ)
// 0052b9e3: FXCH
// 0052b9e5: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (WRITE)
// 0052b9e9: FADD float ptr [ESI + 0x4]
// 0052b9ec: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (READ)
// 0052b9f3: FXCH
// 0052b9f5: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0052b9f9: FADD float ptr [ESI + 0x8]
// 0052b9fc: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (WRITE)
// 0052ba03: LEA EAX,[ESP + 0x78]
//   Label: LAB_0052ba03
//   XREF to: Stack[-0x50] (DATA)
// 0052ba07: PUSH EAX
// 0052ba08: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x18] (READ)
// 0052ba0f: PUSH EAX
// 0052ba10: CALL core_morph.cpp_FUN_0052b280
//   XREF to: 0052b280 (UNCONDITIONAL_CALL)
// 0052ba15: ADD ESP,0x8
// 0052ba18: MOV EDX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x14] (READ)
// 0052ba1f: MOV EDX,dword ptr [EDX + 0x58]
// 0052ba22: MOV dword ptr [EDX + EBX*0x1],EAX
// 0052ba25: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x14] (READ)
// 0052ba2c: INC EDI
// 0052ba2d: MOV EDX,dword ptr [EAX + 0x54]
// 0052ba30: ADD EBX,0x10
// 0052ba33: CMP EDI,EDX
// 0052ba35: JL 0x0052b959
//   XREF to: 0052b959 (CONDITIONAL_JUMP)
// 0052ba3b: MOV EBX,dword ptr [ESP + 0xac]
//   Label: LAB_0052ba3b
//   XREF to: Stack[-0x1c] (READ)
// 0052ba42: MOV ESI,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x34] (READ)
// 0052ba49: MOV EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x30] (READ)
// 0052ba50: MOV EBP,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 0052ba57: MOV ECX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 0052ba5e: SUB EBX,0x18
// 0052ba61: SUB ESI,0x608
// 0052ba67: ADD EDI,0x608
// 0052ba6d: INC EBP
// 0052ba6e: ADD ECX,0x18
// 0052ba71: MOV dword ptr [ESP + 0xac],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052ba78: MOV dword ptr [ESP + 0x94],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0052ba7f: MOV dword ptr [ESP + 0x98],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0052ba86: MOV dword ptr [ESP + 0xa0],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0052ba8d: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0052ba94: CMP EBP,0x2
// 0052ba97: JL 0x0052b7fe
//   XREF to: 0052b7fe (CONDITIONAL_JUMP)
// 0052ba9d: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052baa4: PUSH ECX
// 0052baa5: ADD ESP,0x4
// 0052baa8: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 0052baaf: ADD EAX,0x608
// 0052bab4: PUSH EAX
// 0052bab5: ADD ESP,0x4
// 0052bab8: ADD ESP,0xb8
// 0052babe: POP EBP
// 0052babf: POP EDI
// 0052bac0: POP ESI
// 0052bac1: POP EBX
// 0052bac2: RET
// 0052bac3: MOV ECX,dword ptr [EDX]
//   Label: LAB_0052bac3
// 0052bac5: MOV dword ptr [EAX],ECX
//   XREF to: Stack[-0xbc] (DATA)
// 0052bac7: MOV ECX,dword ptr [EDX + 0x4]
// 0052baca: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 0052bacd: MOV ECX,dword ptr [EDX + 0x8]
// 0052bad0: MOV dword ptr [EAX + 0x8],ECX
//   XREF to: Stack[-0xb4] (WRITE)
// 0052bad3: JMP 0x0052b711
//   XREF to: 0052b711 (UNCONDITIONAL_JUMP)
