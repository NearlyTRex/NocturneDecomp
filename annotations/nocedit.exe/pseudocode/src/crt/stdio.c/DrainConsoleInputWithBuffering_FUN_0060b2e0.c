// Name: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
// Address: 0060b2e0
// Address Range: [[0060b2e0, 0060b3f7]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)
// Cross-references:
//   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8 (0060b3f8) at 0060b458 [UNCONDITIONAL_CALL]
// Globals:
//   ReadConsoleInputA* PTR_ReadConsoleInputA_00611600 = 002120de
//   int g_ConsoleInputState = 0x0
//   int g_BufferedCharacter
//   int g_BufferedVirtualKey
//   int g_BufferedRepeatCount
// Function calls:
//   crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
//   ReadConsoleInputA

#include "nocturne.h"

int __watcallStack crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)

{
  BOOL BVar1;
  int iVar2;
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  ushort unaff_SI;
  byte unaff_retaddr;
  undefined4 uStack_1c;
  DWORD local_14;
  
  if (g_ConsoleInputState != 0) {
    if ((uint)g_ConsoleInputState < 2) {
      g_BufferedRepeatCount = g_BufferedRepeatCount + -1;
      if (g_BufferedVirtualKey == 0) {
        g_ConsoleInputState = 2;
        return 0;
      }
      if (g_BufferedRepeatCount != 0) {
        return g_BufferedVirtualKey;
      }
      g_ConsoleInputState = 0;
      return g_BufferedVirtualKey;
    }
    if (g_ConsoleInputState == 2) {
      g_ConsoleInputState = (uint)(g_BufferedRepeatCount != 0);
      return g_BufferedCharacter;
    }
  }
  do {
    BVar1 = (*PTR_ReadConsoleInputA_00611600)
                      (hConsoleInput,(PINPUT_RECORD)&stack0xffffffd8,1,&local_14);
    if (BVar1 == 0) {
      return -1;
    }
    uStack_1c = 0x60b371;
    iVar2 = crt_stdio_c_IsRelevantKeyEvent_FUN_0060cd90((_INPUT_RECORD *)&local_14);
  } while (iVar2 == 0);
  g_BufferedVirtualKey = unaff_EBX >> 0x10 & 0xff;
  if (((unaff_retaddr & 1) == 0) && (g_BufferedVirtualKey != 0)) {
    if (unaff_SI - 1 != 0) {
      g_ConsoleInputState = 1;
    }
  }
  else {
    g_BufferedVirtualKey = 0;
    g_BufferedCharacter = unaff_EBX & 0xffff;
    g_ConsoleInputState = 2;
  }
  g_BufferedRepeatCount = unaff_SI - 1;
  return g_BufferedVirtualKey;
}


// Assembly code:
// 0060b2e0: PUSH EBX
//   Label: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
// 0060b2e1: PUSH ESI
// 0060b2e2: PUSH EDI
// 0060b2e3: PUSH EBP
// 0060b2e4: SUB ESP,0x18
// 0060b2e7: MOV ESI,dword ptr [0x03f9c148]
//   XREF to: 03f9c148 (READ)
// 0060b2ed: MOV EDI,dword ptr [0x03f9c144]
//   XREF to: 03f9c144 (READ)
// 0060b2f3: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0060b2f7: MOV EAX,[0x00685470]
//   XREF to: 00685470 (READ)
// 0060b2fc: CMP EAX,0x1
// 0060b2ff: JC 0x0060b345
//   XREF to: 0060b345 (CONDITIONAL_JUMP)
// 0060b301: JBE 0x0060b30a
//   XREF to: 0060b30a (CONDITIONAL_JUMP)
// 0060b303: CMP EAX,0x2
// 0060b306: JZ 0x0060b32c
//   XREF to: 0060b32c (CONDITIONAL_JUMP)
// 0060b308: JMP 0x0060b345
//   XREF to: 0060b345 (UNCONDITIONAL_JUMP)
// 0060b30a: DEC ESI
//   Label: LAB_0060b30a
// 0060b30b: TEST EDI,EDI
// 0060b30d: JZ 0x0060b31b
//   XREF to: 0060b31b (CONDITIONAL_JUMP)
// 0060b30f: TEST ESI,ESI
// 0060b311: JNZ 0x0060b325
//   XREF to: 0060b325 (CONDITIONAL_JUMP)
// 0060b313: MOV dword ptr [0x00685470],ESI
//   XREF to: 00685470 (WRITE)
// 0060b319: JMP 0x0060b325
//   XREF to: 0060b325 (UNCONDITIONAL_JUMP)
// 0060b31b: MOV dword ptr [0x00685470],0x2
//   Label: LAB_0060b31b
//   XREF to: 00685470 (WRITE)
// 0060b325: MOV EAX,EDI
//   Label: LAB_0060b325
// 0060b327: JMP 0x0060b3e4
//   XREF to: 0060b3e4 (UNCONDITIONAL_JUMP)
// 0060b32c: TEST ESI,ESI
//   Label: LAB_0060b32c
// 0060b32e: SETNZ AL
// 0060b331: AND EAX,0xff
// 0060b336: MOV [0x00685470],EAX
//   XREF to: 00685470 (WRITE)
// 0060b33b: MOV EAX,[0x03f9c140]
//   XREF to: 03f9c140 (READ)
// 0060b340: JMP 0x0060b3e4
//   XREF to: 0060b3e4 (UNCONDITIONAL_JUMP)
// 0060b345: MOV dword ptr [0x03f9c148],ESI
//   Label: LAB_0060b345
//   XREF to: 03f9c148 (WRITE)
// 0060b34b: MOV dword ptr [0x03f9c144],EDI
//   XREF to: 03f9c144 (WRITE)
// 0060b351: LEA EAX,[ESP + 0x14]
//   Label: LAB_0060b351
//   XREF to: Stack[-0x14] (DATA)
// 0060b355: PUSH EAX
// 0060b356: PUSH 0x1
// 0060b358: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x28] (DATA)
// 0060b35c: PUSH EAX
// 0060b35d: PUSH EBX
// 0060b35e: CALL dword ptr CS:[0x611600]
//   XREF to: EXTERNAL:0000008b (COMPUTED_CALL)
//   XREF to: 00611600 (READ)
// 0060b365: TEST EAX,EAX
// 0060b367: JZ 0x0060b3d3
//   XREF to: 0060b3d3 (CONDITIONAL_JUMP)
// 0060b369: MOV EAX,ESP
// 0060b36b: PUSH EAX
// 0060b36c: CALL crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
//   XREF to: 0060cd90 (UNCONDITIONAL_CALL)
// 0060b371: ADD ESP,0x4
// 0060b374: TEST EAX,EAX
// 0060b376: JZ 0x0060b351
//   XREF to: 0060b351 (CONDITIONAL_JUMP)
// 0060b378: XOR EAX,EAX
// 0060b37a: MOV AX,word ptr [ESP + 0x8]
// 0060b37f: LEA ESI,[EAX + -0x1]
// 0060b382: MOV AH,byte ptr [ESP + 0x11]
// 0060b386: MOVZX EDI,byte ptr [ESP + 0xe]
// 0060b38b: TEST AH,0x1
// 0060b38e: JNZ 0x0060b394
//   XREF to: 0060b394 (CONDITIONAL_JUMP)
// 0060b390: TEST EDI,EDI
// 0060b392: JNZ 0x0060b3af
//   XREF to: 0060b3af (CONDITIONAL_JUMP)
// 0060b394: MOV EBP,0x2
//   Label: LAB_0060b394
// 0060b399: XOR EAX,EAX
// 0060b39b: XOR EDI,EDI
// 0060b39d: MOV AX,word ptr [ESP + 0xc]
// 0060b3a2: MOV dword ptr [0x00685470],EBP
//   XREF to: 00685470 (WRITE)
// 0060b3a8: MOV [0x03f9c140],EAX
//   XREF to: 03f9c140 (WRITE)
// 0060b3ad: JMP 0x0060b3bd
//   XREF to: 0060b3bd (UNCONDITIONAL_JUMP)
// 0060b3af: TEST ESI,ESI
//   Label: LAB_0060b3af
// 0060b3b1: JZ 0x0060b3bd
//   XREF to: 0060b3bd (CONDITIONAL_JUMP)
// 0060b3b3: MOV dword ptr [0x00685470],0x1
//   XREF to: 00685470 (WRITE)
// 0060b3bd: MOV EAX,EDI
//   Label: LAB_0060b3bd
// 0060b3bf: MOV dword ptr [0x03f9c144],EDI
//   XREF to: 03f9c144 (WRITE)
// 0060b3c5: MOV dword ptr [0x03f9c148],ESI
//   XREF to: 03f9c148 (WRITE)
// 0060b3cb: ADD ESP,0x18
// 0060b3ce: POP EBP
// 0060b3cf: POP EDI
// 0060b3d0: POP ESI
// 0060b3d1: POP EBX
// 0060b3d2: RET
// 0060b3d3: MOV EAX,0xffffffff
//   Label: LAB_0060b3d3
// 0060b3d8: MOV EDI,dword ptr [0x03f9c144]
//   XREF to: 03f9c144 (READ)
// 0060b3de: MOV ESI,dword ptr [0x03f9c148]
//   XREF to: 03f9c148 (READ)
// 0060b3e4: MOV dword ptr [0x03f9c144],EDI
//   Label: LAB_0060b3e4
//   XREF to: 03f9c144 (WRITE)
// 0060b3ea: MOV dword ptr [0x03f9c148],ESI
//   XREF to: 03f9c148 (WRITE)
// 0060b3f0: ADD ESP,0x18
// 0060b3f3: POP EBP
// 0060b3f4: POP EDI
// 0060b3f5: POP ESI
// 0060b3f6: POP EBX
// 0060b3f7: RET
