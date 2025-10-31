// Name: crt_unknown.c_FUN_0060d230
// Address: 0060d230
// Address Range: [[0060d230, 0060d397]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d230()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060aef4 (0060aef4) at 0060aef6 [UNCONDITIONAL_CALL]
// Globals:
//   GetACP* PTR_GetACP_00611560 = 00211de2
//   GetCPInfo* PTR_GetCPInfo_00611564 = 00211dec
//   GetOEMCP* PTR_GetOEMCP_006115b8 = 00211f82
//   uint g_CodePage = 0x1
//   int g_MultibyteLocaleActive
//   undefined4 DAT_03f9c030
//   char[256] g_LeadByteTable
//   undefined4 CHAR_ARRAY_03f9c0b2
//   undefined4 CHAR_ARRAY_03f9c0b3
//   undefined4 CHAR_ARRAY_03f9c111
//   undefined4 CHAR_ARRAY_03f9c112
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_0060d230(void)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  UINT in_stack_00000004;
  _cpinfo _Stack_20;
  
  if (in_stack_00000004 == 0xffffffff) {
    in_stack_00000004 = (*PTR_GetACP_00611560)();
  }
  else if (in_stack_00000004 == 0xfffffffe) {
    in_stack_00000004 = (*PTR_GetOEMCP_006115b8)();
  }
  else {
    if (in_stack_00000004 == 0xfffffffd) {
      crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
      g_CodePage = 0;
      g_MultibyteLocaleActive = 0;
      return 0;
    }
    if (in_stack_00000004 == 0xfffffffc) {
      crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
      iVar4 = 0x81;
      do {
        iVar1 = iVar4 + 1;
        g_LeadByteTable[iVar4] = '\x01';
        iVar4 = iVar1;
      } while (iVar1 < 0xa0);
      iVar4 = 0xe0;
      do {
        iVar1 = iVar4 + 1;
        g_LeadByteTable[iVar4] = '\x01';
        iVar4 = iVar1;
      } while (iVar1 < 0xfd);
      g_CodePage = 0x3a4;
      g_MultibyteLocaleActive = 1;
      return 0;
    }
  }
  if (in_stack_00000004 == 0) {
    in_stack_00000004 = 1;
  }
  BVar2 = (*PTR_GetCPInfo_00611564)(in_stack_00000004,&_Stack_20);
  if (BVar2 == 0) {
    return 1;
  }
  crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
  g_MultibyteLocaleActive = (int)(_Stack_20.LeadByte[0] != '\0');
  for (iVar4 = 0; (_Stack_20.LeadByte[iVar4] != '\0' || (_Stack_20.LeadByte[iVar4 + 1] != '\0'));
      iVar4 = iVar4 + 2) {
    for (uVar3 = (uint)_Stack_20.LeadByte[iVar4];
        (int)uVar3 <= (int)(uint)_Stack_20.LeadByte[iVar4 + 1]; uVar3 = uVar3 + 1) {
      g_LeadByteTable[uVar3] = '\x01';
    }
  }
  if (in_stack_00000004 != 1) {
    g_CodePage = in_stack_00000004;
    return 0;
  }
  g_CodePage = (*PTR_GetOEMCP_006115b8)();
  return 0;
}


// Assembly code:
// 0060d230: PUSH EBX
//   Label: crt_unknown.c_FUN_0060d230
// 0060d231: PUSH ESI
// 0060d232: PUSH EBP
// 0060d233: SUB ESP,0x14
// 0060d236: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0060d23a: CMP ESI,-0x1
// 0060d23d: JNZ 0x0060d24d
//   XREF to: 0060d24d (CONDITIONAL_JUMP)
// 0060d23f: CALL dword ptr CS:[0x611560]
//   XREF to: 00611560 (READ)
// 0060d246: MOV ESI,EAX
// 0060d248: JMP 0x0060d2eb
//   XREF to: 0060d2eb (UNCONDITIONAL_JUMP)
// 0060d24d: CMP ESI,-0x2
//   Label: LAB_0060d24d
// 0060d250: JNZ 0x0060d260
//   XREF to: 0060d260 (CONDITIONAL_JUMP)
// 0060d252: CALL dword ptr CS:[0x6115b8]
//   XREF to: 006115b8 (READ)
// 0060d259: MOV ESI,EAX
// 0060d25b: JMP 0x0060d2eb
//   XREF to: 0060d2eb (UNCONDITIONAL_JUMP)
// 0060d260: CMP ESI,-0x3
//   Label: LAB_0060d260
// 0060d263: JNZ 0x0060d28e
//   XREF to: 0060d28e (CONDITIONAL_JUMP)
// 0060d265: PUSH 0x101
// 0060d26a: PUSH 0x0
// 0060d26c: PUSH 0x3f9c030
//   XREF to: 03f9c030 (DATA)
// 0060d271: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060d276: ADD ESP,0xc
// 0060d279: XOR EDX,EDX
// 0060d27b: XOR EAX,EAX
// 0060d27d: MOV dword ptr [0x03f9c020],EDX
//   XREF to: 03f9c020 (WRITE)
// 0060d283: MOV dword ptr [0x00685570],EDX
//   XREF to: 00685570 (WRITE)
// 0060d289: JMP 0x0060d391
//   XREF to: 0060d391 (UNCONDITIONAL_JUMP)
// 0060d28e: CMP ESI,-0x4
//   Label: LAB_0060d28e
// 0060d291: JNZ 0x0060d2eb
//   XREF to: 0060d2eb (CONDITIONAL_JUMP)
// 0060d293: PUSH 0x101
// 0060d298: PUSH 0x0
// 0060d29a: PUSH 0x3f9c030
//   XREF to: 03f9c030 (DATA)
// 0060d29f: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060d2a4: MOV EAX,0x81
// 0060d2a9: MOV DL,0x1
// 0060d2ab: ADD ESP,0xc
// 0060d2ae: INC EAX
//   Label: LAB_0060d2ae
// 0060d2af: MOV byte ptr [EAX + 0x3f9c030],DL
//   XREF to: 03f9c0b2 (WRITE)
//   XREF to: 03f9c0b3 (WRITE)
// 0060d2b5: CMP EAX,0x9f
// 0060d2ba: JLE 0x0060d2ae
//   XREF to: 0060d2ae (CONDITIONAL_JUMP)
// 0060d2bc: MOV EAX,0xe0
// 0060d2c1: MOV DH,0x1
// 0060d2c3: INC EAX
//   Label: LAB_0060d2c3
// 0060d2c4: MOV byte ptr [EAX + 0x3f9c030],DH
//   XREF to: 03f9c111 (WRITE)
//   XREF to: 03f9c112 (WRITE)
// 0060d2ca: CMP EAX,0xfc
// 0060d2cf: JLE 0x0060d2c3
//   XREF to: 0060d2c3 (CONDITIONAL_JUMP)
// 0060d2d1: MOV EBP,0x1
// 0060d2d6: MOV EAX,0x3a4
// 0060d2db: MOV dword ptr [0x03f9c020],EBP
//   XREF to: 03f9c020 (WRITE)
// 0060d2e1: MOV [0x00685570],EAX
//   XREF to: 00685570 (WRITE)
// 0060d2e6: JMP 0x0060d38f
//   XREF to: 0060d38f (UNCONDITIONAL_JUMP)
// 0060d2eb: TEST ESI,ESI
//   Label: LAB_0060d2eb
// 0060d2ed: JNZ 0x0060d2f4
//   XREF to: 0060d2f4 (CONDITIONAL_JUMP)
// 0060d2ef: MOV ESI,0x1
// 0060d2f4: MOV EAX,ESP
//   Label: LAB_0060d2f4
// 0060d2f6: PUSH EAX
// 0060d2f7: PUSH ESI
// 0060d2f8: CALL dword ptr CS:[0x611564]
//   XREF to: 00611564 (READ)
// 0060d2ff: TEST EAX,EAX
// 0060d301: JNZ 0x0060d30f
//   XREF to: 0060d30f (CONDITIONAL_JUMP)
// 0060d303: MOV EAX,0x1
// 0060d308: ADD ESP,0x14
// 0060d30b: POP EBP
// 0060d30c: POP ESI
// 0060d30d: POP EBX
// 0060d30e: RET
// 0060d30f: PUSH 0x101
//   Label: LAB_0060d30f
// 0060d314: PUSH 0x0
// 0060d316: PUSH 0x3f9c030
//   XREF to: 03f9c030 (DATA)
// 0060d31b: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060d320: ADD ESP,0xc
// 0060d323: XOR ECX,ECX
// 0060d325: MOV AH,byte ptr [ESP + 0x6]
// 0060d329: MOV dword ptr [0x03f9c020],ECX
//   XREF to: 03f9c020 (WRITE)
// 0060d32f: TEST AH,AH
// 0060d331: JZ 0x0060d33d
//   XREF to: 0060d33d (CONDITIONAL_JUMP)
// 0060d333: MOV dword ptr [0x03f9c020],0x1
//   XREF to: 03f9c020 (WRITE)
// 0060d33d: XOR EBX,EBX
//   Label: LAB_0060d33d
// 0060d33f: MOV CL,0x1
// 0060d341: XOR CH,CH
// 0060d343: JMP 0x0060d361
//   XREF to: 0060d361 (UNCONDITIONAL_JUMP)
// 0060d345: XOR EAX,EAX
//   Label: LAB_0060d345
// 0060d347: MOV AL,byte ptr [ESP + EBX*0x1 + 0x6]
// 0060d34b: JMP 0x0060d354
//   XREF to: 0060d354 (UNCONDITIONAL_JUMP)
// 0060d34d: INC EAX
//   Label: LAB_0060d34d
// 0060d34e: MOV byte ptr [EAX + 0x3f9c030],CL
//   XREF to: 03f9c030 (DATA)
//   XREF to: 03f9c031 (DATA)
// 0060d354: XOR EDX,EDX
//   Label: LAB_0060d354
// 0060d356: MOV DL,byte ptr [ESP + EBX*0x1 + 0x7]
// 0060d35a: CMP EAX,EDX
// 0060d35c: JLE 0x0060d34d
//   XREF to: 0060d34d (CONDITIONAL_JUMP)
// 0060d35e: ADD EBX,0x2
// 0060d361: MOV AL,byte ptr [ESP + EBX*0x1 + 0x6]
//   Label: LAB_0060d361
// 0060d365: CMP CH,AL
// 0060d367: JNZ 0x0060d345
//   XREF to: 0060d345 (CONDITIONAL_JUMP)
// 0060d369: CMP AL,byte ptr [ESP + EBX*0x1 + 0x7]
// 0060d36d: JNZ 0x0060d345
//   XREF to: 0060d345 (CONDITIONAL_JUMP)
// 0060d36f: CMP ESI,0x1
// 0060d372: JNZ 0x0060d389
//   XREF to: 0060d389 (CONDITIONAL_JUMP)
// 0060d374: CALL dword ptr CS:[0x6115b8]
//   XREF to: 006115b8 (READ)
// 0060d37b: MOV [0x00685570],EAX
//   XREF to: 00685570 (WRITE)
// 0060d380: XOR EAX,EAX
// 0060d382: ADD ESP,0x14
// 0060d385: POP EBP
// 0060d386: POP ESI
// 0060d387: POP EBX
// 0060d388: RET
// 0060d389: MOV dword ptr [0x00685570],ESI
//   Label: LAB_0060d389
//   XREF to: 00685570 (WRITE)
// 0060d38f: XOR EAX,EAX
//   Label: LAB_0060d38f
// 0060d391: ADD ESP,0x14
//   Label: LAB_0060d391
// 0060d394: POP EBP
// 0060d395: POP ESI
// 0060d396: POP EBX
// 0060d397: RET
