// Name: core_script.cpp_FUN_00566080
// Address: 00566080
// Address Range: [[00566080, 0056617a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566080()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053aa39 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_sound_files_missing_00643f0e
//   TerminatedCString s_The_following_sound_file_00643f26
//   TerminatedCString s_Syntax_check_OK_00643f4d
//   undefined4 s_yntax_check_OK._00643f4e
//   undefined4 s_tax_check_OK._00643f50
//   undefined4 DAT_0310f4b0
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined1 DAT_0310fdc0
//   undefined1 DAT_0310fdc1
//   undefined1 DAT_0310fdc2
//   undefined1 DAT_0310fdc3
// Function calls:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_005644e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566080(undefined4 param_1) */

void core_script_cpp_FUN_00566080(undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  pcVar3 = (char *)core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0();
  if (pcVar3 != (char *)0x0) {
    uVar2 = unaff_EBX;
    core_script_cpp_FUN_005644e0();
    DAT_0310fd48 = uVar2;
    DAT_0310fd44 = 0;
    core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
    core_script_cpp_CScript_Unk18_FUN_005669a0();
    pcVar5 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    return;
  }
  iVar4 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  if (iVar4 < 1) {
    pcVar3 = "Syntax check OK.";
    pcVar5 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    return;
  }
  shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"%d sound files missing.");
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)&DAT_0310f4b0,"The following sound files are missing.",-1,0);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
  return;
}


// Assembly code:
// 00566080: PUSH EBX
//   Label: core_script.cpp_FUN_00566080
// 00566081: PUSH ESI
// 00566082: PUSH EDI
// 00566083: SUB ESP,0x4
// 00566086: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056608a: PUSH EBX
// 0056608b: CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   XREF to: 0055a370 (UNCONDITIONAL_CALL)
// 00566090: ADD ESP,0x4
// 00566093: MOV EAX,ESP
// 00566095: PUSH EAX
// 00566096: PUSH EBX
// 00566097: CALL core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
//   XREF to: 0055a4b0 (UNCONDITIONAL_CALL)
// 0056609c: MOV ESI,EAX
// 0056609e: ADD ESP,0x8
// 005660a1: TEST EAX,EAX
// 005660a3: JNZ 0x0056612e
//   XREF to: 0056612e (CONDITIONAL_JUMP)
// 005660a9: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 005660ae: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005660b3: ADD ESP,0x4
// 005660b6: TEST EAX,EAX
// 005660b8: JLE 0x00566103
//   XREF to: 00566103 (CONDITIONAL_JUMP)
// 005660ba: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 005660bf: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005660c4: ADD ESP,0x4
// 005660c7: PUSH EAX
// 005660c8: PUSH 0x643f0e
//   XREF to: 00643f0e (DATA)
// 005660cd: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 005660d2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005660d7: ADD ESP,0xc
// 005660da: PUSH ESI
// 005660db: PUSH -0x1
// 005660dd: PUSH 0x643f26
//   XREF to: 00643f26 (DATA)
// 005660e2: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 005660e7: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005660ec: ADD ESP,0x10
// 005660ef: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 005660f4: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 005660f9: ADD ESP,0x4
// 005660fc: ADD ESP,0x4
// 005660ff: POP EDI
// 00566100: POP ESI
// 00566101: POP EBX
// 00566102: RET
// 00566103: MOV ESI,0x643f4d
//   Label: LAB_00566103
//   XREF to: 00643f4d (DATA)
// 00566108: MOV EDI,0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 0056610d: PUSH EDI
//   XREF to: 0310fdc0 (DATA)
// 0056610e: MOV AL,byte ptr [ESI]
//   Label: LAB_0056610e
//   XREF to: 00643f4d (READ)
//   XREF to: 00643f4f (READ)
// 00566110: MOV byte ptr [EDI],AL
//   XREF to: 0310fdc0 (WRITE)
//   XREF to: 0310fdc2 (WRITE)
// 00566112: CMP AL,0x0
// 00566114: JZ 0x00566126
//   XREF to: 00566126 (CONDITIONAL_JUMP)
// 00566116: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00643f4e (READ)
//   XREF to: 00643f50 (READ)
// 00566119: ADD ESI,0x2
// 0056611c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0310fdc1 (WRITE)
//   XREF to: 0310fdc3 (WRITE)
// 0056611f: ADD EDI,0x2
// 00566122: CMP AL,0x0
// 00566124: JNZ 0x0056610e
//   XREF to: 0056610e (CONDITIONAL_JUMP)
// 00566126: POP EDI
//   Label: LAB_00566126
// 00566127: ADD ESP,0x4
// 0056612a: POP EDI
// 0056612b: POP ESI
// 0056612c: POP EBX
// 0056612d: RET
// 0056612e: CALL core_script.cpp_FUN_005644e0
//   Label: LAB_0056612e
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00566133: MOV EAX,dword ptr [ESP]
// 00566136: PUSH EBX
// 00566137: XOR EDX,EDX
// 00566139: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 0056613e: MOV dword ptr [0x0310fd44],EDX
//   XREF to: 0310fd44 (WRITE)
// 00566144: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 00566149: ADD ESP,0x4
// 0056614c: PUSH EBX
// 0056614d: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 00566152: ADD ESP,0x4
// 00566155: MOV EDI,0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 0056615a: PUSH EDI
//   XREF to: 0310fdc0 (DATA)
// 0056615b: MOV AL,byte ptr [ESI]
//   Label: LAB_0056615b
// 0056615d: MOV byte ptr [EDI],AL
//   XREF to: 0310fdc0 (WRITE)
//   XREF to: 0310fdc2 (WRITE)
// 0056615f: CMP AL,0x0
// 00566161: JZ 0x00566173
//   XREF to: 00566173 (CONDITIONAL_JUMP)
// 00566163: MOV AL,byte ptr [ESI + 0x1]
// 00566166: ADD ESI,0x2
// 00566169: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0310fdc1 (WRITE)
//   XREF to: 0310fdc3 (WRITE)
// 0056616c: ADD EDI,0x2
// 0056616f: CMP AL,0x0
// 00566171: JNZ 0x0056615b
//   XREF to: 0056615b (CONDITIONAL_JUMP)
// 00566173: POP EDI
//   Label: LAB_00566173
// 00566174: ADD ESP,0x4
// 00566177: POP EDI
// 00566178: POP ESI
// 00566179: POP EBX
// 0056617a: RET
