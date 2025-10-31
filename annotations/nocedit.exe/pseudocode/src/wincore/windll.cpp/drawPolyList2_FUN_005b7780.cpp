// Name: wincore_windll.cpp_drawPolyList2_FUN_005b7780
// Address: 005b7780
// Address Range: [[005b7780, 005b78bc]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolyList2_FUN_005b7780(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d3f5 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   int g_RenderedTriangleCount
//   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
//   APIDLL_drawPolyList2* g_APIDLL_drawPolyList2

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolyList2_FUN_005b7780
          (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)

{
  ushort *puVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_00000028;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList2 != (APIDLL_drawPolyList2 *)0x0) {
    iVar2 = (*g_APIDLL_drawPolyList2)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  if (0 < polygon_count) {
    iVar2 = 0;
    do {
      puVar1 = (ushort *)*polygons;
      local_1c = (void *)((int)vertex_buffer + (uint)*puVar1 * 0x30);
      local_18 = (void *)((int)vertex_buffer + (uint)puVar1[1] * 0x30);
      local_14 = (void *)((int)vertex_buffer + (uint)puVar1[2] * 0x30);
      *(uint *)((int)local_1c + 0x18) = (uint)puVar1[3] << 8;
      *(uint *)((int)local_1c + 0x1c) = (uint)puVar1[6] << 8;
      *(uint *)((int)local_18 + 0x18) = (uint)puVar1[4] << 8;
      *(uint *)((int)local_18 + 0x1c) = (uint)puVar1[7] << 8;
      *(uint *)((int)local_14 + 0x18) = (uint)puVar1[5] << 8;
      *(uint *)((int)local_14 + 0x1c) = (uint)puVar1[8] << 8;
      (*g_APIDLL_drawPolygon2)(&local_1c,3,render_flags);
      iVar2 = iVar2 + 1;
      polygons = polygons + 1;
    } while (iVar2 < in_stack_00000028);
  }
  return 1;
}


// Assembly code:
// 005b7780: PUSH EBX
//   Label: wincore_windll.cpp_drawPolyList2_FUN_005b7780
// 005b7781: PUSH ESI
// 005b7782: PUSH EDI
// 005b7783: PUSH EBP
// 005b7784: SUB ESP,0xc
// 005b7787: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005b778b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b778f: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7796: JZ 0x005b788f
//   XREF to: 005b788f (CONDITIONAL_JUMP)
// 005b779c: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005b77a0: MOV EAX,[0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 005b77a5: MOV ESI,dword ptr [0x03f6b8d4]
//   XREF to: 03f6b8d4 (READ)
// 005b77ab: ADD EAX,EBX
// 005b77ad: TEST ESI,ESI
// 005b77af: JNZ 0x005b789b
//   XREF to: 005b789b (CONDITIONAL_JUMP)
// 005b77b5: MOV [0x030e56b8],EAX
//   XREF to: 030e56b8 (WRITE)
// 005b77ba: TEST EBX,EBX
// 005b77bc: JLE 0x005b7880
//   XREF to: 005b7880 (CONDITIONAL_JUMP)
// 005b77c2: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 005b77c6: MOV EBX,EDX
// 005b77c8: MOV EAX,dword ptr [EBX]
//   Label: LAB_005b77c8
// 005b77ca: XOR EDX,EDX
// 005b77cc: MOV DX,word ptr [EAX]
// 005b77cf: IMUL EDX,EDX,0x30
// 005b77d2: LEA ECX,[EDI + EDX*0x1]
// 005b77d5: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x1c] (DATA)
// 005b77d8: XOR EDX,EDX
// 005b77da: MOV DX,word ptr [EAX + 0x2]
// 005b77de: IMUL EDX,EDX,0x30
// 005b77e1: LEA ECX,[EDI + EDX*0x1]
// 005b77e4: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005b77e8: XOR EDX,EDX
// 005b77ea: MOV DX,word ptr [EAX + 0x4]
// 005b77ee: IMUL EDX,EDX,0x30
// 005b77f1: LEA ECX,[EDI + EDX*0x1]
// 005b77f4: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005b77f8: XOR ECX,ECX
// 005b77fa: MOV CX,word ptr [EAX + 0x6]
// 005b77fe: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005b7801: SHL ECX,0x8
// 005b7804: MOV dword ptr [EDX + 0x18],ECX
// 005b7807: XOR ECX,ECX
// 005b7809: MOV CX,word ptr [EAX + 0xc]
// 005b780d: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005b7810: SHL ECX,0x8
// 005b7813: MOV dword ptr [EDX + 0x1c],ECX
// 005b7816: XOR ECX,ECX
// 005b7818: MOV CX,word ptr [EAX + 0x8]
// 005b781c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 005b7820: SHL ECX,0x8
// 005b7823: MOV dword ptr [EDX + 0x18],ECX
// 005b7826: XOR ECX,ECX
// 005b7828: MOV CX,word ptr [EAX + 0xe]
// 005b782c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 005b7830: SHL ECX,0x8
// 005b7833: MOV dword ptr [EDX + 0x1c],ECX
// 005b7836: XOR ECX,ECX
// 005b7838: MOV CX,word ptr [EAX + 0xa]
// 005b783c: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005b7840: SHL ECX,0x8
// 005b7843: MOV dword ptr [EDX + 0x18],ECX
// 005b7846: MOV AX,word ptr [EAX + 0x10]
// 005b784a: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005b784e: AND EAX,0xffff
// 005b7853: PUSH EBP
// 005b7854: SHL EAX,0x8
// 005b7857: PUSH 0x3
// 005b7859: MOV dword ptr [EDX + 0x1c],EAX
// 005b785c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 005b7860: PUSH EAX
// 005b7861: CALL dword ptr [g_APIDLL_drawPolygon2]
//   XREF to: 03f6b8cc (READ)
// 005b7867: ADD ESP,0xc
// 005b786a: INC ESI
// 005b786b: MOV EAX,dword ptr [ESP + 0x28]
// 005b786f: ADD EBX,0x4
// 005b7872: CMP ESI,EAX
// 005b7874: JL 0x005b77c8
//   XREF to: 005b77c8 (CONDITIONAL_JUMP)
// 005b787a: LEA EAX,[EAX]
// 005b7880: MOV EDX,0x1
//   Label: LAB_005b7880
// 005b7885: MOV EAX,EDX
// 005b7887: ADD ESP,0xc
// 005b788a: POP EBP
// 005b788b: POP EDI
// 005b788c: POP ESI
// 005b788d: POP EBX
// 005b788e: RET
// 005b788f: XOR EDX,EDX
//   Label: LAB_005b788f
// 005b7891: MOV EAX,EDX
// 005b7893: ADD ESP,0xc
// 005b7896: POP EBP
// 005b7897: POP EDI
// 005b7898: POP ESI
// 005b7899: POP EBX
// 005b789a: RET
// 005b789b: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: LAB_005b789b
//   XREF to: Stack[0x10] (READ)
// 005b789f: PUSH EBP
// 005b78a0: PUSH EBX
// 005b78a1: PUSH EDX
// 005b78a2: PUSH EDI
// 005b78a3: MOV [0x030e56b8],EAX
//   XREF to: 030e56b8 (WRITE)
// 005b78a8: CALL dword ptr [g_APIDLL_drawPolyList2]
//   XREF to: 03f6b8d4 (READ)
// 005b78ae: ADD ESP,0x10
// 005b78b1: MOV EDX,EAX
// 005b78b3: MOV EAX,EDX
// 005b78b5: ADD ESP,0xc
// 005b78b8: POP EBP
// 005b78b9: POP EDI
// 005b78ba: POP ESI
// 005b78bb: POP EBX
// 005b78bc: RET
