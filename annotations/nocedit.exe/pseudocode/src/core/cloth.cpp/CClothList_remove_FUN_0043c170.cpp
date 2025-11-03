// Name: core_cloth.cpp_CClothList_remove_FUN_0043c170
// Address: 0043c170
// Address Range: [[0043c170, 0043c284]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040fcab [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_0061860f
//   TerminatedCString s_CClothList_remove_invali_00618621
//   TerminatedCString s_core_cloth_cpp_00618644
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList *this_ptr)

{
  char cVar1;
  int iVar2;
  void *ptr;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *in_stack_00000008;
  
  if (((int)in_stack_00000008 < 0) || (*(int *)this_ptr <= (int)in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5e4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::remove - invalid index");
  }
  g_CurrentDebugLine = 0x5e8;
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  if (*(int *)((int)in_stack_00000008 * 5 + 0x194) != 0) {
    ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  iVar6 = (int)in_stack_00000008 + 1;
  if (iVar6 < *in_stack_00000008) {
    piVar5 = in_stack_00000008 + iVar6 * 10 + -9;
    piVar4 = in_stack_00000008 + iVar6 * 10 + 1;
    piVar3 = in_stack_00000008 + iVar6;
    do {
      piVar7 = piVar4;
      piVar8 = piVar5;
      do {
        iVar2 = *piVar7;
        *(char *)piVar8 = (char)iVar2;
        if ((char)iVar2 == '\0') break;
        cVar1 = *(char *)((int)piVar7 + 1);
        piVar7 = (int *)((int)piVar7 + 2);
        *(char *)((int)piVar8 + 1) = cVar1;
        piVar8 = (int *)((int)piVar8 + 2);
      } while (cVar1 != '\0');
      piVar3[100] = piVar3[0x65];
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 10;
      piVar4 = piVar4 + 10;
      piVar3 = piVar3 + 1;
    } while (iVar6 < *in_stack_00000008);
  }
  iVar6 = *in_stack_00000008;
  *in_stack_00000008 = iVar6 + -1;
  *(undefined1 *)(in_stack_00000008 + (iVar6 + -1) * 10 + 1) = 0;
  in_stack_00000008[*in_stack_00000008 + 0x65] = 0;
  return;
}


// Assembly code:
// 0043c170: PUSH EBX
//   Label: core_cloth.cpp_CClothList_remove_FUN_0043c170
// 0043c171: PUSH ESI
// 0043c172: PUSH EDI
// 0043c173: PUSH EBP
// 0043c174: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043c178: TEST EBP,EBP
// 0043c17a: JL 0x0043c184
//   XREF to: 0043c184 (CONDITIONAL_JUMP)
// 0043c17c: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043c180: CMP EBP,dword ptr [EAX]
// 0043c182: JL 0x0043c1a7
//   XREF to: 0043c1a7 (CONDITIONAL_JUMP)
// 0043c184: MOV ECX,0x61860f
//   Label: LAB_0043c184
//   XREF to: 0061860f (PARAM)
// 0043c189: MOV EBX,0x5e4
// 0043c18e: PUSH 0x618621
//   XREF to: 00618621 (DATA)
// 0043c193: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0043c199: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0043c19f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043c1a4: ADD ESP,0x4
// 0043c1a7: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0043c1a7
//   XREF to: Stack[0x4] (READ)
// 0043c1ab: LEA EAX,[EBP*0x4 + 0x0]
// 0043c1b2: MOV EDI,0x5e8
// 0043c1b7: ADD EAX,EDX
// 0043c1b9: MOV ESI,0x618644
//   XREF to: 00618644 (DATA)
// 0043c1be: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 0043c1c4: MOV EAX,dword ptr [EAX + 0x194]
// 0043c1ca: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 0043c1d0: TEST EAX,EAX
// 0043c1d2: JZ 0x0043c1e8
//   XREF to: 0043c1e8 (CONDITIONAL_JUMP)
// 0043c1d4: PUSH 0x0
// 0043c1d6: PUSH EAX
// 0043c1d7: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 0043c1dc: ADD ESP,0x8
// 0043c1df: PUSH EAX
// 0043c1e0: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0043c1e5: ADD ESP,0x4
// 0043c1e8: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0043c1e8
//   XREF to: Stack[0x4] (READ)
// 0043c1ec: INC EBP
// 0043c1ed: CMP EBP,dword ptr [EAX]
// 0043c1ef: JGE 0x0043c250
//   XREF to: 0043c250 (CONDITIONAL_JUMP)
// 0043c1f1: LEA ECX,[EBP*0x4 + 0x0]
// 0043c1f8: LEA ESI,[EAX + 0x4]
// 0043c1fb: ADD ECX,EAX
// 0043c1fd: LEA EAX,[EBP*0x4 + 0x0]
// 0043c204: ADD EAX,EBP
// 0043c206: SHL EAX,0x3
// 0043c209: LEA EBX,[EAX + -0x28]
// 0043c20c: ADD EBX,ESI
// 0043c20e: LEA EDX,[EAX + ESI*0x1]
// 0043c211: MOV ESI,EDX
//   Label: LAB_0043c211
// 0043c213: MOV EDI,EBX
// 0043c215: ADD ECX,0x4
// 0043c218: PUSH EDI
// 0043c219: MOV AL,byte ptr [ESI]
//   Label: LAB_0043c219
// 0043c21b: MOV byte ptr [EDI],AL
// 0043c21d: CMP AL,0x0
// 0043c21f: JZ 0x0043c231
//   XREF to: 0043c231 (CONDITIONAL_JUMP)
// 0043c221: MOV AL,byte ptr [ESI + 0x1]
// 0043c224: ADD ESI,0x2
// 0043c227: MOV byte ptr [EDI + 0x1],AL
// 0043c22a: ADD EDI,0x2
// 0043c22d: CMP AL,0x0
// 0043c22f: JNZ 0x0043c219
//   XREF to: 0043c219 (CONDITIONAL_JUMP)
// 0043c231: POP EDI
//   Label: LAB_0043c231
// 0043c232: MOV EAX,dword ptr [ECX + 0x190]
// 0043c238: MOV dword ptr [ECX + 0x18c],EAX
// 0043c23e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043c242: INC EBP
// 0043c243: ADD EBX,0x28
// 0043c246: MOV ESI,dword ptr [EAX]
// 0043c248: ADD EDX,0x28
// 0043c24b: CMP EBP,ESI
// 0043c24d: JL 0x0043c211
//   XREF to: 0043c211 (CONDITIONAL_JUMP)
// 0043c24f: NOP
// 0043c250: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0043c250
//   XREF to: Stack[0x4] (READ)
// 0043c254: MOV EBP,dword ptr [EAX]
// 0043c256: DEC EBP
// 0043c257: MOV dword ptr [EAX],EBP
// 0043c259: LEA EAX,[EBP*0x4 + 0x0]
// 0043c260: ADD EAX,EBP
// 0043c262: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043c266: SHL EAX,0x3
// 0043c269: ADD EAX,EDX
// 0043c26b: MOV byte ptr [EAX + 0x4],0x0
// 0043c26f: MOV EAX,dword ptr [EDX]
// 0043c271: SHL EAX,0x2
// 0043c274: ADD EAX,EDX
// 0043c276: MOV dword ptr [EAX + 0x194],0x0
// 0043c280: POP EBP
// 0043c281: POP EDI
// 0043c282: POP ESI
// 0043c283: POP EBX
// 0043c284: RET
