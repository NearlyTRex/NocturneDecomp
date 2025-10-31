// Name: core_setedit.cpp_FUN_00577200
// Address: 00577200
// Address Range: [[00577200, 00577326]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577200()
// Globals:
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   undefined4 DAT_03365cc0
//   undefined4 DAT_03365cc4

#include "nocturne.h"

void core_setedit_cpp_FUN_00577200(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  ushort *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = in_stack_0000000c << 2;
  local_14 = 0;
  local_18 = in_stack_00000004 * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    local_24 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_1c) + in_stack_00000008 * 2);
    iVar2 = in_stack_00000004 * 0x3000 + local_14 * 0x100;
    do {
      local_24 = local_24 + 1;
      uVar1 = *(uint *)(&DAT_03365cc0 + iVar2);
      iVar2 = iVar2 + 4;
      *local_24 = (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                          ((byte)g_GreenBitPosition & 0x1f)) |
                  (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                          ((byte)g_RedBitPosition & 0x1f)) |
                  (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                          ((byte)g_BlueBitPosition & 0x1f));
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}


// Assembly code:
// 00577200: PUSH EBX
//   Label: core_setedit.cpp_FUN_00577200
// 00577201: PUSH ESI
// 00577202: PUSH EDI
// 00577203: PUSH EBP
// 00577204: SUB ESP,0x20
// 00577207: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0057720b: ADD EAX,EAX
// 0057720d: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00577211: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00577215: LEA EAX,[ECX*0x4 + 0x0]
// 0057721c: SUB EAX,ECX
// 0057721e: SHL EAX,0xc
// 00577221: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00577225: ADD EAX,0x100
// 0057722a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0057722e: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 00577232: XOR EDX,EDX
// 00577234: SHL EAX,0x2
// 00577237: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0057723b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057723f: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0057723f
//   XREF to: Stack[-0x1c] (READ)
// 00577243: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00577247: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057724d: ADD EAX,ECX
// 0057724f: ADD EAX,0x2
// 00577252: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00577256: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0057725a: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0057725e: SHL EAX,0x8
// 00577261: ADD EBX,EAX
// 00577263: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00577267: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057726b: MOV ESI,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_0057726b
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
// 00577271: XOR EDX,EDX
// 00577273: MOV EAX,ESI
// 00577275: MOV ECX,ESI
// 00577277: MOV EBP,ESI
// 00577279: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 0057727f: AND EAX,0xff
// 00577284: DIV ESI
// 00577286: SHR ECX,0x8
// 00577289: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 0057728f: AND ECX,0xff
// 00577295: MOV ESI,EAX
// 00577297: XOR EDX,EDX
// 00577299: MOV EAX,ECX
// 0057729b: DIV EDI
// 0057729d: SHR EBP,0x10
// 005772a0: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x30] (DATA)
// 005772a3: AND EBP,0xff
// 005772a9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 005772ac: XOR EDX,EDX
// 005772ae: MOV EAX,EBP
// 005772b0: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 005772b6: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005772bc: SHL ESI,CL
// 005772be: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005772c4: MOV EDI,EAX
// 005772c6: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005772c9: SHL EAX,CL
// 005772cb: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005772d1: OR EAX,ESI
// 005772d3: SHL EDI,CL
// 005772d5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005772d9: OR EAX,EDI
// 005772db: ADD EBX,0x4
// 005772de: MOV word ptr [ECX],AX
// 005772e1: LEA EAX,[ECX + 0x2]
// 005772e4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005772e8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005772ec: CMP EBX,EDX
// 005772ee: JNZ 0x0057726b
//   XREF to: 0057726b (CONDITIONAL_JUMP)
// 005772f4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005772f8: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005772fc: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00577300: ADD EBX,0x4
// 00577303: INC ESI
// 00577304: ADD ECX,0x100
// 0057730a: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057730e: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00577312: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00577316: CMP ESI,0x30
// 00577319: JL 0x0057723f
//   XREF to: 0057723f (CONDITIONAL_JUMP)
// 0057731f: ADD ESP,0x20
// 00577322: POP EBP
// 00577323: POP EDI
// 00577324: POP ESI
// 00577325: POP EBX
// 00577326: RET
