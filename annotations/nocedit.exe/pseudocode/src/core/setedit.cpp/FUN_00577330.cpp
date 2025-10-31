// Name: core_setedit.cpp_FUN_00577330
// Address: 00577330
// Address Range: [[00577330, 00577428]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577330()
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   undefined4 DAT_03365cc0
//   undefined4 DAT_03365cc4

#include "nocturne.h"

void core_setedit_cpp_FUN_00577330(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
    puVar1 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_1c) + in_stack_00000008 * 4);
    iVar2 = local_14 * 0x100 + in_stack_00000004 * 0x3000;
    do {
      puVar1 = puVar1 + 1;
      uVar5 = *(uint *)(&DAT_03365cc0 + iVar2);
      uVar4 = uVar5 >> 8 & 0xff;
      uVar3 = uVar5 >> 0x10 & 0xff;
      if (g_BitsPerPixel == 0x20) {
        uVar5 = (uVar5 & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
                uVar4 << ((byte)g_GreenBitPosition & 0x1f);
        uVar3 = uVar3 << ((byte)g_BlueBitPosition & 0x1f);
      }
      else {
        uVar5 = (uVar5 & 0xff) << 0x10 | uVar4 << 8;
      }
      iVar2 = iVar2 + 4;
      *puVar1 = uVar5 | uVar3;
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}


// Assembly code:
// 00577330: PUSH EBX
//   Label: core_setedit.cpp_FUN_00577330
// 00577331: PUSH ESI
// 00577332: PUSH EDI
// 00577333: PUSH EBP
// 00577334: SUB ESP,0x14
// 00577337: XOR EDX,EDX
// 00577339: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0057733d: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00577341: SHL EAX,0x2
// 00577344: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00577348: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0057734b: LEA EAX,[EDX*0x4 + 0x0]
// 00577352: SUB EAX,EDX
// 00577354: SHL EAX,0xc
// 00577357: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057735b: ADD EAX,0x100
// 00577360: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00577364: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00577368: SHL EAX,0x2
// 0057736b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057736f: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0057736f
//   XREF to: Stack[-0x1c] (READ)
// 00577373: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00577376: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057737c: ADD EAX,ECX
// 0057737e: LEA EBX,[EAX + 0x4]
// 00577381: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00577385: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 00577389: SHL EAX,0x8
// 0057738c: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00577390: ADD EAX,ESI
// 00577392: MOV EDX,dword ptr [EAX + 0x3365cc0]
//   Label: LAB_00577392
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
// 00577398: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0057739e: MOV EDI,EDX
// 005773a0: MOV ESI,EDX
// 005773a2: AND EDI,0xff
// 005773a8: SHR ESI,0x8
// 005773ab: SHR EDX,0x10
// 005773ae: AND ESI,0xff
// 005773b4: AND EDX,0xff
// 005773ba: CMP ECX,0x20
// 005773bd: JNZ 0x0057741d
//   XREF to: 0057741d (CONDITIONAL_JUMP)
// 005773bf: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005773c5: SHL EDI,CL
// 005773c7: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005773cd: SHL ESI,CL
// 005773cf: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005773d5: OR EDI,ESI
// 005773d7: SHL EDX,CL
// 005773d9: MOV ECX,EDI
// 005773db: OR ECX,EDX
//   Label: LAB_005773db
// 005773dd: ADD EBX,0x4
// 005773e0: ADD EAX,0x4
// 005773e3: MOV dword ptr [EBX + -0x4],ECX
// 005773e6: CMP EAX,EBP
// 005773e8: JNZ 0x00577392
//   XREF to: 00577392 (CONDITIONAL_JUMP)
// 005773ea: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005773ee: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005773f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005773f6: ADD ESI,0x4
// 005773f9: INC EDI
// 005773fa: ADD EBX,0x100
// 00577400: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00577404: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00577408: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0057740c: CMP EDI,0x30
// 0057740f: JL 0x0057736f
//   XREF to: 0057736f (CONDITIONAL_JUMP)
// 00577415: ADD ESP,0x14
// 00577418: POP EBP
// 00577419: POP EDI
// 0057741a: POP ESI
// 0057741b: POP EBX
// 0057741c: RET
// 0057741d: MOV ECX,EDI
//   Label: LAB_0057741d
// 0057741f: SHL ESI,0x8
// 00577422: SHL ECX,0x10
// 00577425: OR ECX,ESI
// 00577427: JMP 0x005773db
//   XREF to: 005773db (UNCONDITIONAL_JUMP)
