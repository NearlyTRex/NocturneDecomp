// Name: crt_string.c_wcstombs_FUN_0060c0c0
// Address: 0060c0c0
// Address Range: [[0060c0c0, 0060c180]]
// Convention: __cdecl
// Signature: int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)
// Cross-references:
//   crt_time.c_tzset_FUN_006072f8 (006072f8) at 006072a0 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fcbd [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_006107f0 (006107f0) at 00610878 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0

#include "nocturne.h"

int __cdecl crt_string_c_wcstombs_FUN_0060c0c0(char *dest,wchar_t *src,SIZE_T dest_size)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  byte bVar8;
  uint in_stack_00000010;
  undefined1 local_14 [4];
  
  bVar8 = 0;
  iVar5 = 0;
  pwVar4 = src;
  if (dest == (char *)0x0) {
    while( true ) {
      iVar2 = iVar5;
      if ((*src == L'\0') ||
         (iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                            ((wchar_t)local_14,(char *)(uint)(ushort)*src), iVar2 == -1)) break;
      src = src + 1;
      iVar5 = iVar5 + iVar2;
    }
  }
  else {
    while (iVar2 = iVar5, dest_size != 0) {
      if (*pwVar4 == L'\0') {
        *dest = '\0';
        return iVar5;
      }
      uVar1 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                        ((wchar_t)local_14,(char *)(uint)(ushort)*pwVar4);
      if (uVar1 == 0xffffffff) {
        return -1;
      }
      if (in_stack_00000010 < uVar1) {
        return iVar5;
      }
      puVar6 = (undefined4 *)&stack0xfffffff0;
      pwVar7 = src;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pwVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        pwVar7 = pwVar7 + (uint)bVar8 * -4 + 2;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)pwVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
        pwVar7 = (wchar_t *)((int)pwVar7 + (uint)bVar8 * -2 + 1);
      }
      pwVar4 = pwVar4 + 1;
      iVar5 = iVar5 + uVar1;
      src = (wchar_t *)((int)src + uVar1);
      in_stack_00000010 = in_stack_00000010 - uVar1;
    }
  }
  return iVar2;
}


// Assembly code:
// 0060c0c0: PUSH EBX
//   Label: crt_string.c_wcstombs_FUN_0060c0c0
// 0060c0c1: PUSH ESI
// 0060c0c2: PUSH EDI
// 0060c0c3: PUSH EBP
// 0060c0c4: SUB ESP,0x4
// 0060c0c7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0060c0cb: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060c0cf: XOR EBP,EBP
// 0060c0d1: TEST EDX,EDX
// 0060c0d3: JZ 0x0060c150
//   XREF to: 0060c150 (CONDITIONAL_JUMP)
// 0060c0d9: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_0060c0d9
//   XREF to: Stack[0xc] (READ)
// 0060c0de: JBE 0x0060c177
//   XREF to: 0060c177 (CONDITIONAL_JUMP)
// 0060c0e4: MOV CX,word ptr [EBX]
// 0060c0e7: TEST CX,CX
// 0060c0ea: JZ 0x0060c112
//   XREF to: 0060c112 (CONDITIONAL_JUMP)
// 0060c0ec: XOR EAX,EAX
// 0060c0ee: MOV AX,CX
// 0060c0f1: PUSH EAX
// 0060c0f2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 0060c0f6: PUSH EAX
// 0060c0f7: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 0060c0fc: MOV EDX,EAX
// 0060c0fe: ADD ESP,0x8
// 0060c101: CMP EAX,-0x1
// 0060c104: JZ 0x0060c179
//   XREF to: 0060c179 (CONDITIONAL_JUMP)
// 0060c10a: CMP EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0060c10e: JA 0x0060c177
//   XREF to: 0060c177 (CONDITIONAL_JUMP)
// 0060c110: JMP 0x0060c11b
//   XREF to: 0060c11b (UNCONDITIONAL_JUMP)
// 0060c112: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0060c112
//   XREF to: Stack[0x4] (READ)
// 0060c116: MOV byte ptr [EAX],0x0
// 0060c119: JMP 0x0060c177
//   XREF to: 0060c177 (UNCONDITIONAL_JUMP)
// 0060c11b: MOV ESI,ESP
//   Label: LAB_0060c11b
// 0060c11d: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060c121: MOV ECX,EAX
// 0060c123: PUSH ES
// 0060c124: MOV AX,DS
// 0060c126: MOV ES,AX
// 0060c128: PUSH EDI
// 0060c129: MOV EAX,ECX
// 0060c12b: SHR ECX,0x2
// 0060c12e: MOVSD.REP ES:EDI,ESI
// 0060c130: MOV CL,AL
// 0060c132: AND CL,0x3
// 0060c135: MOVSB.REP ES:EDI,ESI
// 0060c137: POP EDI
// 0060c138: POP ES
// 0060c139: ADD EBX,0x2
// 0060c13c: ADD EBP,EDX
// 0060c13e: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0060c142: ADD EDI,EDX
// 0060c144: SUB EAX,EDX
// 0060c146: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[0x4] (WRITE)
// 0060c14a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[0xc] (WRITE)
// 0060c14e: JMP 0x0060c0d9
//   XREF to: 0060c0d9 (UNCONDITIONAL_JUMP)
// 0060c150: MOV DX,word ptr [EBX]
//   Label: LAB_0060c150
// 0060c153: TEST DX,DX
// 0060c156: JZ 0x0060c177
//   XREF to: 0060c177 (CONDITIONAL_JUMP)
// 0060c158: XOR EAX,EAX
// 0060c15a: MOV AX,DX
// 0060c15d: PUSH EAX
// 0060c15e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 0060c162: PUSH EAX
// 0060c163: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 0060c168: ADD ESP,0x8
// 0060c16b: CMP EAX,-0x1
// 0060c16e: JZ 0x0060c179
//   XREF to: 0060c179 (CONDITIONAL_JUMP)
// 0060c170: ADD EBX,0x2
// 0060c173: ADD EBP,EAX
// 0060c175: JMP 0x0060c150
//   XREF to: 0060c150 (UNCONDITIONAL_JUMP)
// 0060c177: MOV EAX,EBP
//   Label: LAB_0060c177
// 0060c179: ADD ESP,0x4
//   Label: LAB_0060c179
// 0060c17c: POP EBP
// 0060c17d: POP EDI
// 0060c17e: POP ESI
// 0060c17f: POP EBX
// 0060c180: RET
