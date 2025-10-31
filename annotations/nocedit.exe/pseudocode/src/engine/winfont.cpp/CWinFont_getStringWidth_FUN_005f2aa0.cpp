// Name: engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0
// Address: 005f2aa0
// Address Range: [[005f2aa0, 005f2af6]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont * this_ptr, char * text_string)
// Globals:
//   GetTextExtentPoint32A* GetTextExtentPoint32A = 002117b2
// Function calls:
//   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
//   GetTextExtentPoint32A

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont *this_ptr,char *text_string)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  byte bVar6;
  int in_stack_0000000c;
  
  bVar6 = 0;
  iVar2 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(this_ptr,-1,-1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = text_string;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  BVar3 = (*GetTextExtentPoint32A)
                    (*(HDC *)(text_string + 4),text_string,~uVar4 - 1,(LPSIZE)&stack0xfffffff8);
  if (BVar3 == 0) {
    in_stack_0000000c = 0;
  }
  return in_stack_0000000c;
}


// Assembly code:
// 005f2aa0: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0
// 005f2aa1: SUB ESP,0x8
// 005f2aa4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f2aa8: PUSH -0x1
// 005f2aaa: PUSH -0x1
// 005f2aac: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005f2ab0: PUSH EDX
// 005f2ab1: CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
//   XREF to: 005f2860 (UNCONDITIONAL_CALL)
// 005f2ab6: ADD ESP,0xc
// 005f2ab9: TEST EAX,EAX
// 005f2abb: JNZ 0x005f2ac2
//   XREF to: 005f2ac2 (CONDITIONAL_JUMP)
// 005f2abd: ADD ESP,0x8
// 005f2ac0: POP EBX
// 005f2ac1: RET
// 005f2ac2: PUSH EDI
//   Label: LAB_005f2ac2
// 005f2ac3: MOV EDI,EBX
// 005f2ac5: SUB ECX,ECX
// 005f2ac7: DEC ECX
// 005f2ac8: XOR EAX,EAX
// 005f2aca: SCASB.REPNE ES:EDI
// 005f2acc: NOT ECX
// 005f2ace: DEC ECX
// 005f2acf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 005f2ad3: PUSH EAX
// 005f2ad4: PUSH ECX
// 005f2ad5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005f2ad9: PUSH EBX
// 005f2ada: MOV ECX,dword ptr [EAX + 0x4]
// 005f2add: PUSH ECX
// 005f2ade: CALL dword ptr CS:[0x6113e4]
//   XREF to: EXTERNAL:00000008 (COMPUTED_CALL)
//   XREF to: 006113e4 (READ)
// 005f2ae5: TEST EAX,EAX
// 005f2ae7: JNZ 0x005f2aed
//   XREF to: 005f2aed (CONDITIONAL_JUMP)
// 005f2ae9: MOV dword ptr [ESP + 0x4],EAX
// 005f2aed: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005f2aed
// 005f2af1: POP EDI
// 005f2af2: ADD ESP,0x8
// 005f2af5: POP EBX
// 005f2af6: RET
