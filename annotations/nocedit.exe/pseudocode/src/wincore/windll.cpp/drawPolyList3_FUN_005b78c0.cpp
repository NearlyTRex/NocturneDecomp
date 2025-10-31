// Name: wincore_windll.cpp_drawPolyList3_FUN_005b78c0
// Address: 005b78c0
// Address Range: [[005b78c0, 005b7984]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolyList3_FUN_005b78c0(void * vertex_buffer, void * polygons, int polygon_count, int render_flags)
// Globals:
//   int g_UseExternalRenderer
//   int g_RenderedTriangleCount
//   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
//   APIDLL_drawPolyList3* g_APIDLL_drawPolyList3

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolyList3_FUN_005b78c0
          (void *vertex_buffer,void *polygons,int polygon_count,int render_flags)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList3 != (APIDLL_drawPolyList3 *)0x0) {
    iVar1 = (*g_APIDLL_drawPolyList3)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar1;
  }
  iVar1 = 0;
  if (0 < polygon_count) {
    do {
                    /* WARNING: Load size is inaccurate */
      local_1c = (void *)((int)vertex_buffer + (uint)*polygons * 0x30);
      local_18 = (void *)((int)vertex_buffer + (uint)*(ushort *)((int)polygons + 2) * 0x30);
      local_14 = (void *)((int)vertex_buffer + (uint)*(ushort *)((int)polygons + 4) * 0x30);
      polygons = (void *)((int)polygons + 6);
      iVar1 = iVar1 + 1;
      (*g_APIDLL_drawPolygon2)(&local_1c,3,render_flags);
    } while (iVar1 < polygon_count);
  }
  return 1;
}


// Assembly code:
// 005b78c0: PUSH EBX
//   Label: wincore_windll.cpp_drawPolyList3_FUN_005b78c0
// 005b78c1: PUSH ESI
// 005b78c2: PUSH EDI
// 005b78c3: PUSH EBP
// 005b78c4: SUB ESP,0xc
// 005b78c7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005b78cb: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b78cf: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005b78d3: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b78da: JZ 0x005b795d
//   XREF to: 005b795d (CONDITIONAL_JUMP)
// 005b78e0: MOV EAX,[0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 005b78e5: MOV ECX,dword ptr [0x03f6b8d8]
//   XREF to: 03f6b8d8 (READ)
// 005b78eb: ADD EAX,EBP
// 005b78ed: TEST ECX,ECX
// 005b78ef: JNZ 0x005b7967
//   XREF to: 005b7967 (CONDITIONAL_JUMP)
// 005b78f5: MOV [0x030e56b8],EAX
//   XREF to: 030e56b8 (WRITE)
// 005b78fa: XOR ESI,ESI
// 005b78fc: TEST EBP,EBP
// 005b78fe: JLE 0x005b7950
//   XREF to: 005b7950 (CONDITIONAL_JUMP)
// 005b7900: XOR EAX,EAX
//   Label: LAB_005b7900
// 005b7902: MOV AX,word ptr [EBX]
// 005b7905: IMUL EAX,EAX,0x30
// 005b7908: LEA EDX,[EDI + EAX*0x1]
// 005b790b: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 005b790e: XOR EAX,EAX
// 005b7910: MOV AX,word ptr [EBX + 0x2]
// 005b7914: IMUL EAX,EAX,0x30
// 005b7917: LEA EDX,[EDI + EAX*0x1]
// 005b791a: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005b791e: XOR EAX,EAX
// 005b7920: MOV AX,word ptr [EBX + 0x4]
// 005b7924: IMUL EAX,EAX,0x30
// 005b7927: LEA EDX,[EDI + EAX*0x1]
// 005b792a: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 005b792e: PUSH EAX
// 005b792f: PUSH 0x3
// 005b7931: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 005b7935: ADD EBX,0x6
// 005b7938: PUSH EAX
// 005b7939: INC ESI
// 005b793a: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b793e: CALL dword ptr [g_APIDLL_drawPolygon2]
//   XREF to: 03f6b8cc (READ)
// 005b7944: ADD ESP,0xc
// 005b7947: CMP ESI,EBP
// 005b7949: JL 0x005b7900
//   XREF to: 005b7900 (CONDITIONAL_JUMP)
// 005b794b: LEA EAX,[EAX]
// 005b794e: MOV ECX,ECX
// 005b7950: MOV EAX,0x1
//   Label: LAB_005b7950
// 005b7955: ADD ESP,0xc
// 005b7958: POP EBP
// 005b7959: POP EDI
// 005b795a: POP ESI
// 005b795b: POP EBX
// 005b795c: RET
// 005b795d: XOR EAX,EAX
//   Label: LAB_005b795d
// 005b795f: ADD ESP,0xc
// 005b7962: POP EBP
// 005b7963: POP EDI
// 005b7964: POP ESI
// 005b7965: POP EBX
// 005b7966: RET
// 005b7967: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: LAB_005b7967
//   XREF to: Stack[0x10] (READ)
// 005b796b: PUSH ESI
// 005b796c: PUSH EBP
// 005b796d: PUSH EBX
// 005b796e: PUSH EDI
// 005b796f: MOV [0x030e56b8],EAX
//   XREF to: 030e56b8 (WRITE)
// 005b7974: CALL dword ptr [g_APIDLL_drawPolyList3]
//   XREF to: 03f6b8d8 (READ)
// 005b797a: ADD ESP,0x10
// 005b797d: ADD ESP,0xc
// 005b7980: POP EBP
// 005b7981: POP EDI
// 005b7982: POP ESI
// 005b7983: POP EBX
// 005b7984: RET
