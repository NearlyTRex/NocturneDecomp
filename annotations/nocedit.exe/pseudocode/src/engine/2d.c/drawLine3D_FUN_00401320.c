// Name: engine_2d.c_drawLine3D_FUN_00401320
// Address: 00401320
// Address Range: [[00401320, 00401456]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawLine3D_FUN_00401320(int x1, int y1, uint z1, int x2, int y2, uint z2)
// Cross-references:
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 0040830b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cddd [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_plotPixelWithDepth_FUN_00401290

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine3D_FUN_00401320(int x1,int y1,uint z1,int x2,int y2,uint z2)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = 1;
  uVar1 = z2;
  local_14 = x2;
  local_18 = y2;
  if (y2 < y1) {
    uVar1 = z1;
    local_14 = x1;
    local_18 = y1;
    z1 = z2;
    y1 = y2;
    x1 = x2;
  }
  local_14 = local_14 - x1;
  local_18 = local_18 - y1;
  if (local_14 < 0) {
    local_14 = -local_14;
    local_24 = -1;
  }
  iVar2 = uVar1 - z1;
  if (local_18 < local_14) {
    iVar3 = local_18 * 2 - local_14;
    if (-1 < local_14) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401290(x1,y1,z1);
        if (0 < iVar3) {
          y1 = y1 + 1;
          iVar3 = iVar3 - unaff_EBP;
        }
        x1 = x1 + local_20;
        iVar3 = iVar3 + local_14;
        z1 = z1 + iVar2 / (local_14 + 1);
        local_18 = local_18 + 1;
      } while (local_18 <= unaff_EBP);
    }
  }
  else {
    iVar2 = local_14 * 2 - local_18;
    if (-1 < local_18) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401290(x1,y1,z1);
        if (0 < iVar2) {
          iVar2 = iVar2 - local_14;
        }
        y1 = y1 + 1;
        local_1c = local_1c + 1;
        iVar2 = iVar2 + unaff_EBP;
        z1 = z1 + local_24;
      } while (local_1c <= local_14);
    }
  }
  return;
}


// Assembly code:
// 00401320: PUSH EBX
//   Label: engine_2d.c_drawLine3D_FUN_00401320
// 00401321: PUSH ESI
// 00401322: PUSH EDI
// 00401323: PUSH EBP
// 00401324: SUB ESP,0x1c
// 00401327: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0040132b: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0040132f: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00401333: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00401337: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 0040133b: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x18] (READ)
// 0040133f: MOV dword ptr [ESP + 0x8],0x1
//   XREF to: Stack[-0x24] (WRITE)
// 00401347: CMP ESI,EBX
// 00401349: JLE 0x0040135d
//   XREF to: 0040135d (CONDITIONAL_JUMP)
// 0040134b: MOV EDX,EDI
// 0040134d: MOV EDI,ECX
// 0040134f: MOV ECX,EDX
// 00401351: MOV EDX,ESI
// 00401353: MOV ESI,EBX
// 00401355: MOV EBX,EDX
// 00401357: MOV EDX,EBP
// 00401359: MOV EBP,EAX
// 0040135b: MOV EAX,EDX
// 0040135d: SUB ECX,EDI
//   Label: LAB_0040135d
// 0040135f: SUB EBX,ESI
// 00401361: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00401365: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00401369: TEST ECX,ECX
// 0040136b: JL 0x004013e7
//   XREF to: 004013e7 (CONDITIONAL_JUMP)
// 00401371: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_00401371
//   XREF to: Stack[-0x18] (READ)
// 00401375: MOV EBX,EBP
// 00401377: MOV EDX,EAX
// 00401379: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0040137d: SUB EDX,EBP
// 0040137f: CMP EAX,ECX
// 00401381: JLE 0x004013fd
//   XREF to: 004013fd (CONDITIONAL_JUMP)
// 00401387: LEA EBP,[ECX + ECX*0x1]
// 0040138a: SUB EBP,EAX
// 0040138c: LEA ECX,[EAX + 0x1]
// 0040138f: MOV EAX,EDX
// 00401391: SAR EDX,0x1f
// 00401394: IDIV ECX
// 00401396: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0040139a: XOR EDX,EDX
// 0040139c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 0040139f: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004013a3: TEST ECX,ECX
// 004013a5: JL 0x004013df
//   XREF to: 004013df (CONDITIONAL_JUMP)
// 004013a7: PUSH EBX
//   Label: LAB_004013a7
// 004013a8: PUSH ESI
// 004013a9: PUSH EDI
// 004013aa: CALL engine_2d.c_plotPixelWithDepth_FUN_00401290
//   XREF to: 00401290 (UNCONDITIONAL_CALL)
// 004013af: ADD ESP,0xc
// 004013b2: TEST EBP,EBP
// 004013b4: JLE 0x004013bd
//   XREF to: 004013bd (CONDITIONAL_JUMP)
// 004013b6: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004013ba: INC ESI
// 004013bb: SUB EBP,EAX
// 004013bd: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_004013bd
//   XREF to: Stack[-0x24] (READ)
// 004013c1: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 004013c5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 004013c8: ADD EDI,EDX
// 004013ca: ADD EBP,ECX
// 004013cc: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 004013d0: ADD EBX,EAX
// 004013d2: INC EDX
// 004013d3: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004013d7: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004013db: CMP EDX,ECX
// 004013dd: JLE 0x004013a7
//   XREF to: 004013a7 (CONDITIONAL_JUMP)
// 004013df: ADD ESP,0x1c
//   Label: LAB_004013df
// 004013e2: POP EBP
// 004013e3: POP EDI
// 004013e4: POP ESI
// 004013e5: POP EBX
// 004013e6: RET
// 004013e7: MOV EBX,ECX
//   Label: LAB_004013e7
// 004013e9: MOV EDX,0xffffffff
// 004013ee: NEG EBX
// 004013f0: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004013f4: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004013f8: JMP 0x00401371
//   XREF to: 00401371 (UNCONDITIONAL_JUMP)
// 004013fd: LEA EBP,[EAX + EAX*0x1]
//   Label: LAB_004013fd
// 00401400: MOV EAX,EDX
// 00401402: SUB EBP,ECX
// 00401404: INC ECX
// 00401405: SAR EDX,0x1f
// 00401408: IDIV ECX
// 0040140a: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0040140e: XOR EDX,EDX
// 00401410: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00401414: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00401418: TEST ECX,ECX
// 0040141a: JL 0x004013df
//   XREF to: 004013df (CONDITIONAL_JUMP)
// 0040141c: PUSH EBX
//   Label: LAB_0040141c
// 0040141d: PUSH ESI
// 0040141e: PUSH EDI
// 0040141f: CALL engine_2d.c_plotPixelWithDepth_FUN_00401290
//   XREF to: 00401290 (UNCONDITIONAL_CALL)
// 00401424: ADD ESP,0xc
// 00401427: TEST EBP,EBP
// 00401429: JLE 0x00401437
//   XREF to: 00401437 (CONDITIONAL_JUMP)
// 0040142b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0040142f: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00401433: SUB EBP,EAX
// 00401435: ADD EDI,ECX
// 00401437: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00401437
//   XREF to: Stack[-0x14] (READ)
// 0040143b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0040143f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00401443: INC ESI
// 00401444: INC ECX
// 00401445: ADD EBP,EAX
// 00401447: ADD EBX,EDX
// 00401449: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0040144d: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00401451: CMP ECX,EDX
// 00401453: JG 0x004013df
//   XREF to: 004013df (CONDITIONAL_JUMP)
// 00401455: JMP 0x0040141c
//   XREF to: 0040141c (UNCONDITIONAL_JUMP)
