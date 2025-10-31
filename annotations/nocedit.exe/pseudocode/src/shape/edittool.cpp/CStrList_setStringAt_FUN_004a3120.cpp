// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
// Address: 004a3120
// Address Range: [[004a3120, 004a31ed]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120(CStrList * this_ptr, int index, char * new_string)
// Cross-references:
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0 (005662a0) at 005662d9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049eb23 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad127 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623871
//   TerminatedCString s_CStrList_set_invalid_ind_00623887
//   undefined1 s_EmpyStringLiteral_006238a5
//   TerminatedCString s_shape_edittool_cpp_006238a6
//   undefined4 s_.\shape\edittool.cpp_006238a7
//   undefined4 s_\shape\edittool.cpp_006238a8
//   TerminatedCString s_shape_edittool_cpp_006238bc
//   TerminatedCString s_CStrList_set_out_of_memo_006238d2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  int in_stack_00000014;
  
  bVar5 = 0;
  if ((index < 0) || (this_ptr->item_count <= index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc13;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - invalid index");
  }
  pcVar4 = new_string;
  if (new_string == (char *)0x0) {
    pcVar4 = &s_EmpyStringLiteral_006238a5;
  }
  uVar3 = 0xffffffff;
  pcVar2 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (this_ptr->data_array[(int)new_string],~uVar3,
                              "..\\shape\\edittool.cpp",0xc1b);
  this_ptr->data_array[(int)new_string] = pcVar2;
  if (this_ptr->data_array[(int)new_string] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc1c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - out of memory!");
  }
  pcVar2 = this_ptr->data_array[in_stack_00000014];
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004a3120: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
// 004a3121: PUSH ESI
// 004a3122: PUSH EDI
// 004a3123: PUSH EBP
// 004a3124: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a3128: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a312c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a3130: TEST EDX,EDX
// 004a3132: JL 0x004a3139
//   XREF to: 004a3139 (CONDITIONAL_JUMP)
// 004a3134: CMP EDX,dword ptr [EBP]
// 004a3137: JL 0x004a315c
//   XREF to: 004a315c (CONDITIONAL_JUMP)
// 004a3139: MOV EBX,0x623871
//   Label: LAB_004a3139
//   XREF to: 00623871 (PARAM)
// 004a313e: MOV EDI,0xc13
// 004a3143: PUSH 0x623887
//   XREF to: 00623887 (DATA)
// 004a3148: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004a314e: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a3154: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a3159: ADD ESP,0x4
// 004a315c: TEST ESI,ESI
//   Label: LAB_004a315c
// 004a315e: JNZ 0x004a3165
//   XREF to: 004a3165 (CONDITIONAL_JUMP)
// 004a3160: MOV ESI,0x6238a5
//   XREF to: 006238a5 (DATA)
// 004a3165: PUSH 0xc1b
//   Label: LAB_004a3165
// 004a316a: PUSH 0x6238a6
//   XREF to: 006238a6 (DATA)
// 004a316f: MOV EDI,ESI
// 004a3171: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004a3175: SUB ECX,ECX
// 004a3177: DEC ECX
// 004a3178: XOR EAX,EAX
// 004a317a: SCASB.REPNE ES:EDI
//   XREF to: 006238a5 (READ)
//   XREF to: 006238a6 (READ)
// 004a317c: NOT ECX
// 004a317e: DEC ECX
// 004a317f: INC ECX
// 004a3180: MOV EAX,dword ptr [EBP + 0x8]
// 004a3183: PUSH ECX
// 004a3184: MOV EDX,dword ptr [EAX + EBX*0x4]
// 004a3187: PUSH EDX
// 004a3188: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004a318d: MOV ECX,dword ptr [EBP + 0x8]
// 004a3190: MOV dword ptr [ECX + EBX*0x4],EAX
// 004a3193: MOV EAX,dword ptr [EBP + 0x8]
// 004a3196: MOV ECX,dword ptr [EAX + EBX*0x4]
// 004a3199: ADD ESP,0x10
// 004a319c: TEST ECX,ECX
// 004a319e: JZ 0x004a31c9
//   XREF to: 004a31c9 (CONDITIONAL_JUMP)
// 004a31a0: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_004a31a0
//   XREF to: Stack[0x8] (READ)
// 004a31a4: MOV EAX,dword ptr [EBP + 0x8]
// 004a31a7: MOV EDI,dword ptr [EAX + ECX*0x4]
// 004a31aa: PUSH EDI
// 004a31ab: MOV AL,byte ptr [ESI]
//   Label: LAB_004a31ab
//   XREF to: 006238a5 (READ)
//   XREF to: 006238a7 (READ)
// 004a31ad: MOV byte ptr [EDI],AL
// 004a31af: CMP AL,0x0
// 004a31b1: JZ 0x004a31c3
//   XREF to: 004a31c3 (CONDITIONAL_JUMP)
// 004a31b3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006238a6 (READ)
//   XREF to: 006238a8 (READ)
// 004a31b6: ADD ESI,0x2
// 004a31b9: MOV byte ptr [EDI + 0x1],AL
// 004a31bc: ADD EDI,0x2
// 004a31bf: CMP AL,0x0
// 004a31c1: JNZ 0x004a31ab
//   XREF to: 004a31ab (CONDITIONAL_JUMP)
// 004a31c3: POP EDI
//   Label: LAB_004a31c3
// 004a31c4: POP EBP
// 004a31c5: POP EDI
// 004a31c6: POP ESI
// 004a31c7: POP EBX
// 004a31c8: RET
// 004a31c9: MOV EBX,0x6238bc
//   Label: LAB_004a31c9
//   XREF to: 006238bc (PARAM)
// 004a31ce: MOV EDI,0xc1c
// 004a31d3: PUSH 0x6238d2
//   XREF to: 006238d2 (DATA)
// 004a31d8: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004a31de: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a31e4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a31e9: ADD ESP,0x4
// 004a31ec: JMP 0x004a31a0
//   XREF to: 004a31a0 (UNCONDITIONAL_JUMP)
