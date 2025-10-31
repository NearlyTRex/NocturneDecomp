// Name: core_setedit.cpp_FUN_00577120
// Address: 00577120
// Address Range: [[00577120, 005771f0]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577120()
// Globals:
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uchar[32768] g_ColorCubeLookup
//   undefined4 DAT_03365cc0
//   undefined4 DAT_03365cc4

#include "nocturne.h"

void core_setedit_cpp_FUN_00577120(void)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = in_stack_0000000c << 2;
  local_18 = in_stack_00000004 * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    puVar3 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_1c) + in_stack_00000008);
    iVar2 = local_14 * 0x100 + in_stack_00000004 * 0x3000;
    do {
      puVar3 = puVar3 + 1;
      uVar1 = *(uint *)(&DAT_03365cc0 + iVar2);
      iVar2 = iVar2 + 4;
      *puVar3 = g_ColorCubeLookup
                [((uVar1 >> 0x10 & 0xff) >> 3) +
                 ((uVar1 & 0xff) >> 3) * 0x400 + ((uVar1 >> 8 & 0xff) >> 3) * 0x20];
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}


// Assembly code:
// 00577120: PUSH EBX
//   Label: core_setedit.cpp_FUN_00577120
// 00577121: PUSH ESI
// 00577122: PUSH EDI
// 00577123: PUSH EBP
// 00577124: SUB ESP,0x10
// 00577127: XOR EDX,EDX
// 00577129: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0057712d: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00577131: LEA EAX,[EDX*0x4 + 0x0]
// 00577138: SUB EAX,EDX
// 0057713a: SHL EAX,0xc
// 0057713d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 00577140: ADD EAX,0x100
// 00577145: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00577149: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0057714d: SHL EAX,0x2
// 00577150: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00577154: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00577154
//   XREF to: Stack[-0x1c] (READ)
// 00577158: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0057715c: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00577160: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00577163: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00577167: MOV ECX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057716d: SHL EAX,0x8
// 00577170: ADD ECX,EBX
// 00577172: ADD EAX,ESI
// 00577174: INC ECX
// 00577175: MOV EDX,dword ptr [EAX + 0x3365cc0]
//   Label: LAB_00577175
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
// 0057717b: MOV ESI,EDX
// 0057717d: MOV EBX,EDX
// 0057717f: MOV EDI,EDX
// 00577181: AND ESI,0xff
// 00577187: SHR EBX,0x8
// 0057718a: SHR EDI,0x10
// 0057718d: MOV EDX,ESI
// 0057718f: AND EBX,0xff
// 00577195: SHR EDX,0x3
// 00577198: SHR EBX,0x3
// 0057719b: SHL EDX,0xa
// 0057719e: SHL EBX,0x5
// 005771a1: AND EDI,0xff
// 005771a7: ADD EDX,EBX
// 005771a9: SHR EDI,0x3
// 005771ac: INC ECX
// 005771ad: MOV DL,byte ptr [EDX + EDI*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 005771b4: ADD EAX,0x4
// 005771b7: MOV byte ptr [ECX + -0x1],DL
// 005771ba: CMP EAX,EBP
// 005771bc: JNZ 0x00577175
//   XREF to: 00577175 (CONDITIONAL_JUMP)
// 005771be: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005771c2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005771c6: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005771ca: ADD EBP,0x4
// 005771cd: INC EAX
// 005771ce: ADD EDI,0x100
// 005771d4: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 005771d8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005771dc: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005771e0: CMP EAX,0x30
// 005771e3: JL 0x00577154
//   XREF to: 00577154 (CONDITIONAL_JUMP)
// 005771e9: ADD ESP,0x10
// 005771ec: POP EBP
// 005771ed: POP EDI
// 005771ee: POP ESI
// 005771ef: POP EBX
// 005771f0: RET
