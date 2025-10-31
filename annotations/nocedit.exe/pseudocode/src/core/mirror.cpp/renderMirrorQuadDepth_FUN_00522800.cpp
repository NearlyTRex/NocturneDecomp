// Name: core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800
// Address: 00522800
// Address Range: [[00522800, 005229a3]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800(CVector3f * vertices)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a408 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MirrorProjectionScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl core_mirror_cpp_renderMirrorQuadDepth_FUN_00522800(CVector3f *vertices)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive local_78;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined1 local_3c [12];
  int local_30;
  int local_2c;
  CVector3i local_1c;
  
  local_3c._8_4_ = (undefined4)ROUND(vertices->x * g_MirrorProjectionScale);
  local_30 = (int)ROUND(vertices->y * g_MirrorProjectionScale);
  local_2c = (int)ROUND(vertices->z * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_3c + 8));
  local_3c._0_4_ = (undefined4)ROUND(vertices[1].x * g_MirrorProjectionScale);
  local_3c._4_4_ = (undefined4)ROUND(vertices[1].y * g_MirrorProjectionScale);
  local_3c._8_4_ = (undefined4)ROUND(vertices[1].z * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_3c);
  local_1c.z = (int)ROUND(vertices[2].x * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_1c.z);
  local_1c.x = (int)ROUND(vertices[3].x * g_MirrorProjectionScale);
  local_1c.y = (int)ROUND(vertices[3].y * g_MirrorProjectionScale);
  local_1c.z = (int)ROUND(vertices[3].z * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c);
  iVar2 = 0;
  do {
    piVar1 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_y
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_z
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).inv_z + iVar2) =
         *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).inv_z + iVar2)
         >> 4;
    iVar2 = iVar3;
  } while (iVar3 != 0xc0);
  local_78.base.count = 4;
  local_78.surface_normal.D = 0;
  local_78.surface_normal.C = 0;
  local_78.surface_normal.B = 0;
  uStack_48 = 2;
  local_78.surface_normal.A = 0;
  uStack_60 = 0;
  local_3c._0_4_ = 3;
  uStack_54 = 1;
  engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
            (g_CDemonRendererPtr,&local_78);
  return;
}


// Assembly code:
// 00522800: PUSH EBX
//   Label: core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800
// 00522801: PUSH ESI
// 00522802: PUSH EDI
// 00522803: PUSH EBP
// 00522804: SUB ESP,0x78
// 00522807: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052280d: MOV EDI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 00522814: LEA EBX,[ESP + 0x54]
//   XREF to: Stack[-0x34] (DATA)
// 00522818: MOV EAX,EDI
// 0052281a: MOV EDX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0052281c: FLD float ptr [EAX]
// 0052281e: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522824: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 00522826: FLD float ptr [EAX + 0x4]
// 00522829: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052282f: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 00522832: FLD float ptr [EAX + 0x8]
// 00522835: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052283b: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 0052283e: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x34] (DATA)
// 00522842: PUSH EAX
// 00522843: PUSH EDX
// 00522844: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00522849: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052284f: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 00522851: ADD ESP,0x8
// 00522854: LEA EDX,[EAX + 0x30]
// 00522857: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 0052285b: LEA EAX,[EDI + 0xc]
// 0052285e: FLD float ptr [EAX]
// 00522860: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522866: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x40] (DATA)
// 00522868: FLD float ptr [EAX + 0x4]
// 0052286b: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522871: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 00522874: FLD float ptr [EAX + 0x8]
// 00522877: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052287d: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00522880: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 00522884: PUSH EAX
// 00522885: PUSH EDX
// 00522886: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 0052288b: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00522891: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 00522893: ADD ESP,0x8
// 00522896: LEA EDX,[EAX + 0x60]
// 00522899: LEA EBX,[ESP + 0x6c]
//   XREF to: Stack[-0x1c] (DATA)
// 0052289d: LEA EAX,[EDI + 0x18]
// 005228a0: FLD float ptr [EAX]
// 005228a2: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005228a8: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 005228aa: FLD float ptr [EAX + 0x4]
// 005228ad: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005228b3: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 005228b6: FLD float ptr [EAX + 0x8]
// 005228b9: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005228bf: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 005228c2: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x1c] (DATA)
// 005228c6: PUSH EAX
// 005228c7: PUSH EDX
// 005228c8: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 005228cd: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005228d3: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 005228d5: ADD ESP,0x8
// 005228d8: LEA EDX,[EAX + 0x90]
// 005228de: LEA EBX,[ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 005228e2: LEA EAX,[EDI + 0x24]
// 005228e5: FLD float ptr [EAX]
// 005228e7: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005228ed: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 005228ef: FLD float ptr [EAX + 0x4]
// 005228f2: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005228f8: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 005228fb: FLD float ptr [EAX + 0x8]
// 005228fe: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522904: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00522907: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 0052290b: PUSH EAX
// 0052290c: PUSH EDX
// 0052290d: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00522912: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00522918: ADD ESP,0x8
// 0052291b: XOR EAX,EAX
// 0052291d: MOV EDX,ESI
//   XREF to: 02c6d578 (PARAM)
// 0052291f: MOV ECX,dword ptr [ESI]
//   Label: LAB_0052291f
//   XREF to: 02c6d578 (READ)
// 00522921: SHL dword ptr [ECX + EAX*0x1],0x4
// 00522925: MOV ECX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 00522927: SHL dword ptr [ECX + EAX*0x1 + 0x4],0x4
// 0052292c: MOV ECX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0052292e: SHL dword ptr [ECX + EAX*0x1 + 0x8],0x4
// 00522933: MOV ECX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 00522935: MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc]
// 00522939: ADD EAX,0x30
// 0052293c: SHR EBX,0x4
// 0052293f: MOV dword ptr [ECX + EAX*0x1 + -0x24],EBX
// 00522943: CMP EAX,0xc0
// 00522948: JNZ 0x0052291f
//   XREF to: 0052291f (CONDITIONAL_JUMP)
// 0052294a: MOV EDI,0x4
// 0052294f: MOV EAX,0x2
// 00522954: MOV ECX,0x3
// 00522959: MOV dword ptr [0x006703ec],ESI
//   XREF to: 006703ec (WRITE)
// 0052295f: XOR EBP,EBP
// 00522961: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x84] (WRITE)
// 00522965: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x74] (WRITE)
// 00522969: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x78] (WRITE)
// 0052296d: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x7c] (WRITE)
// 00522971: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00522975: MOV EAX,ESP
// 00522977: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x80] (WRITE)
// 0052297b: PUSH EAX
// 0052297c: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x70] (WRITE)
// 00522980: MOV EBP,0x1
// 00522985: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00522986: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 0052298a: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x64] (WRITE)
// 0052298e: CALL engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
//   XREF to: 0048a950 (UNCONDITIONAL_CALL)
// 00522993: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00522999: ADD ESP,0x8
// 0052299c: ADD ESP,0x78
// 0052299f: POP EBP
// 005229a0: POP EDI
// 005229a1: POP ESI
// 005229a2: POP EBX
// 005229a3: RET
