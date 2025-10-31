// Name: cockpit_ckptutil.c_FUN_004338f0
// Address: 004338f0
// Address Range: [[004338f0, 004339b6]]
// Convention: unknown
// Signature: undefined cockpit_ckptutil.c_FUN_004338f0()
// Function calls:
//   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
//   cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_004338f0(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  CPackedBitmap *pCVar6;
  int unaff_ESI;
  int iVar7;
  CPackedBitmap *in_stack_00000004;
  CPackedBitmap *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000018;
  int in_stack_0000001c;
  int local_c;
  
  if ((in_stack_00000004->width != 0) &&
     (iVar7 = 0, pCVar6 = in_stack_00000008, 0 < in_stack_0000000c)) {
    do {
      sVar1 = *(short *)pCVar6->filename;
      sVar2 = *(short *)(pCVar6->filename + 2);
      sVar3 = *(short *)(pCVar6->filename + 6);
      iVar4 = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                        (in_stack_00000004,(int)sVar1,(int)sVar2);
      iVar5 = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                        (in_stack_00000008,(int)((short)(sVar3 * 2) >> 1),local_c);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
                (sVar1 + in_stack_00000018,sVar2 + in_stack_0000001c,local_c + in_stack_00000018,
                 iVar4 + in_stack_0000001c,unaff_ESI,(uchar)iVar5,
                 (uint)(*(ushort *)(pCVar6->filename + 6) >> 0xf));
      iVar7 = iVar7 + 1;
      pCVar6 = (CPackedBitmap *)(pCVar6->filename + 8);
    } while (iVar7 < in_stack_00000018);
  }
  return;
}


// Assembly code:
// 004338f0: PUSH ESI
//   Label: cockpit_ckptutil.c_FUN_004338f0
// 004338f1: PUSH EBP
// 004338f2: SUB ESP,0xc
// 004338f5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004338f9: MOV EAX,dword ptr [EAX + 0x18]
// 004338fc: TEST EAX,EAX
// 004338fe: JZ 0x004339b1
//   XREF to: 004339b1 (CONDITIONAL_JUMP)
// 00433904: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00433908: XOR ESI,ESI
// 0043390a: TEST EDX,EDX
// 0043390c: JLE 0x004339b1
//   XREF to: 004339b1 (CONDITIONAL_JUMP)
// 00433912: PUSH EDI
// 00433913: PUSH EBX
// 00433914: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00433918: MOV AX,word ptr [EBX]
//   Label: LAB_00433918
// 0043391b: MOVSX EBP,AX
// 0043391e: MOV AX,word ptr [EBX + 0x2]
// 00433922: MOVSX EDI,AX
// 00433925: MOV AX,word ptr [EBX + 0x4]
// 00433929: CWDE
// 0043392a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043392e: MOV AX,word ptr [EBX + 0x6]
// 00433932: PUSH EDI
// 00433933: ADD EAX,EAX
// 00433935: PUSH EBP
// 00433936: SAR AX,0x1
// 00433939: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0043393d: CWDE
// 0043393e: PUSH ECX
// 0043393f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00433943: CALL cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
//   XREF to: 0054a9b0 (UNCONDITIONAL_CALL)
// 00433948: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0043394c: ADD ESP,0xc
// 0043394f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00433953: PUSH EAX
// 00433954: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00433958: PUSH EDX
// 00433959: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0043395d: PUSH ECX
// 0043395e: CALL cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
//   XREF to: 0054a9b0 (UNCONDITIONAL_CALL)
// 00433963: MOV DX,word ptr [EBX + 0x6]
// 00433967: ADD ESP,0xc
// 0043396a: SHR DX,0xf
// 0043396e: AND EDX,0xffff
// 00433974: PUSH EDX
// 00433975: PUSH EAX
// 00433976: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 0043397a: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x14] (READ)
// 0043397e: PUSH EAX
// 0043397f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 00433983: ADD EAX,EDX
// 00433985: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 00433989: PUSH EAX
// 0043398a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0043398e: ADD EAX,ECX
// 00433990: PUSH EAX
// 00433991: ADD EDI,EDX
// 00433993: PUSH EDI
// 00433994: ADD EBP,ECX
// 00433996: PUSH EBP
// 00433997: CALL cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
//   XREF to: 004339c0 (UNCONDITIONAL_CALL)
// 0043399c: ADD ESP,0x1c
// 0043399f: INC ESI
// 004339a0: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004339a4: ADD EBX,0x8
// 004339a7: CMP ESI,ECX
// 004339a9: JL 0x00433918
//   XREF to: 00433918 (CONDITIONAL_JUMP)
// 004339af: POP EBX
// 004339b0: POP EDI
// 004339b1: ADD ESP,0xc
//   Label: LAB_004339b1
// 004339b4: POP EBP
// 004339b5: POP ESI
// 004339b6: RET
