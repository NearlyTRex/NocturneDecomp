// Name: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00
// Address: 005f2b00
// Address Range: [[005f2b00, 005f2b65]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont * this_ptr, char * text_string)
// Globals:
//   GetTextExtentPoint32A* GetTextExtentPoint32A = 002117b2
// Function calls:
//   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
//   GetTextExtentPoint32A

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont *this_ptr,char *text_string)

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
                    (this_ptr->deviceContextHandle,text_string,~uVar4 - 1,(LPSIZE)&stack0xfffffff4);
  if (BVar3 == 0) {
    in_stack_0000000c = 0;
  }
  return in_stack_0000000c + this_ptr->yOffset1 + this_ptr->yOffset2;
}


// Assembly code:
// 005f2b00: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00
// 005f2b01: PUSH ESI
// 005f2b02: SUB ESP,0x8
// 005f2b05: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f2b09: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f2b0d: PUSH -0x1
// 005f2b0f: PUSH -0x1
// 005f2b11: PUSH EBX
// 005f2b12: CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
//   XREF to: 005f2860 (UNCONDITIONAL_CALL)
// 005f2b17: ADD ESP,0xc
// 005f2b1a: TEST EAX,EAX
// 005f2b1c: JNZ 0x005f2b24
//   XREF to: 005f2b24 (CONDITIONAL_JUMP)
// 005f2b1e: ADD ESP,0x8
// 005f2b21: POP ESI
// 005f2b22: POP EBX
// 005f2b23: RET
// 005f2b24: PUSH EDI
//   Label: LAB_005f2b24
// 005f2b25: MOV EDI,ESI
// 005f2b27: SUB ECX,ECX
// 005f2b29: DEC ECX
// 005f2b2a: XOR EAX,EAX
// 005f2b2c: SCASB.REPNE ES:EDI
// 005f2b2e: NOT ECX
// 005f2b30: DEC ECX
// 005f2b31: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 005f2b35: PUSH EAX
// 005f2b36: PUSH ECX
// 005f2b37: PUSH ESI
// 005f2b38: MOV EDX,dword ptr [EBX + 0x4]
// 005f2b3b: PUSH EDX
// 005f2b3c: CALL dword ptr CS:[0x6113e4]
//   XREF to: EXTERNAL:00000008 (COMPUTED_CALL)
//   XREF to: 006113e4 (READ)
// 005f2b43: TEST EAX,EAX
// 005f2b45: JNZ 0x005f2b4b
//   XREF to: 005f2b4b (CONDITIONAL_JUMP)
// 005f2b47: MOV dword ptr [ESP + 0x8],EAX
// 005f2b4b: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005f2b4b
// 005f2b4f: MOV ESI,dword ptr [EBX + 0x134]
// 005f2b55: MOV EDI,dword ptr [EBX + 0x138]
// 005f2b5b: ADD EAX,ESI
// 005f2b5d: ADD EAX,EDI
// 005f2b5f: POP EDI
// 005f2b60: ADD ESP,0x8
// 005f2b63: POP ESI
// 005f2b64: POP EBX
// 005f2b65: RET
