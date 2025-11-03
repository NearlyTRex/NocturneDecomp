// Name: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670
// Address: 00522670
// Address Range: [[00522670, 005227f9]]
// Convention: __cdecl
// Signature: int core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror * this_ptr)
// Globals:
//   float g_MirrorProjectionScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined1 local_34 [12];
  int local_28;
  CVector3i local_24 [2];
  
  local_24[0].x = (int)ROUND((this_ptr->reflection).corner1.x * g_MirrorProjectionScale);
  local_24[0].y = (int)ROUND((this_ptr->reflection).corner1.y * g_MirrorProjectionScale);
  local_24[0].z = (int)ROUND((this_ptr->reflection).corner1.z * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,local_24);
  local_34._8_4_ = (undefined4)ROUND((this_ptr->reflection).corner2.x * g_MirrorProjectionScale);
  local_28 = (int)ROUND((this_ptr->reflection).corner2.y * g_MirrorProjectionScale);
  local_24[0].x = (int)ROUND((this_ptr->reflection).corner2.z * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_34 + 8)
            );
  local_34._0_4_ = (undefined4)ROUND((this_ptr->reflection).corner3.x * g_MirrorProjectionScale);
  local_34._4_4_ = (undefined4)ROUND((this_ptr->reflection).corner3.y * g_MirrorProjectionScale);
  local_34._8_4_ = (undefined4)ROUND((this_ptr->reflection).corner3.z * g_MirrorProjectionScale);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_34);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)&stack0xfffffff4);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_34._0_4_ = 1;
  local_34._4_4_ = 2;
  local_34._8_4_ = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  return iVar1;
}


// Assembly code:
// 00522670: PUSH EBX
//   Label: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670
// 00522671: PUSH ESI
// 00522672: PUSH EDI
// 00522673: SUB ESP,0x58
// 00522676: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 0052267a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00522680: LEA EBX,[ESP + 0x40]
//   XREF to: Stack[-0x24] (DATA)
// 00522684: MOV EAX,ESI
// 00522686: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00522688: FLD float ptr [EAX]
// 0052268a: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522690: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 00522692: FLD float ptr [EAX + 0x4]
// 00522695: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052269b: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 0052269e: FLD float ptr [EAX + 0x8]
// 005226a1: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005226a7: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 005226aa: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x24] (DATA)
// 005226ae: PUSH EAX
// 005226af: PUSH EDX
// 005226b0: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 005226b5: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005226ba: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x30] (DATA)
// 005226be: ADD ESP,0x8
// 005226c1: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005226c3: LEA EAX,[ESI + 0xc]
// 005226c6: FLD float ptr [EAX]
// 005226c8: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005226ce: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 005226d0: FLD float ptr [EAX + 0x4]
// 005226d3: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005226d9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 005226dc: FLD float ptr [EAX + 0x8]
// 005226df: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005226e5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 005226e8: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 005226ec: PUSH EAX
// 005226ed: ADD EDX,0x30
// 005226f0: PUSH EDX
// 005226f1: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 005226f6: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x3c] (DATA)
// 005226fa: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00522700: ADD ESP,0x8
// 00522703: LEA EAX,[ESI + 0x18]
// 00522706: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00522708: FLD float ptr [EAX]
// 0052270a: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522710: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 00522712: FLD float ptr [EAX + 0x4]
// 00522715: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052271b: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 0052271e: FLD float ptr [EAX + 0x8]
// 00522721: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522727: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 0052272a: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x3c] (DATA)
// 0052272e: PUSH EAX
// 0052272f: ADD EDX,0x60
// 00522732: PUSH EDX
// 00522733: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00522738: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052273d: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052273f: ADD ESP,0x8
// 00522742: LEA EDX,[EAX + 0x90]
// 00522748: LEA EBX,[ESP + 0x4c]
//   XREF to: Stack[-0x18] (DATA)
// 0052274c: LEA EAX,[ESI + 0x24]
// 0052274f: FLD float ptr [EAX]
// 00522751: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522757: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x18] (DATA)
// 00522759: FLD float ptr [EAX + 0x4]
// 0052275c: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522762: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00522765: FLD float ptr [EAX + 0x8]
// 00522768: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052276e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 00522771: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x18] (DATA)
// 00522775: PUSH EAX
// 00522776: PUSH EDX
// 00522777: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 0052277c: ADD ESP,0x8
// 0052277f: PUSH 0x1
// 00522781: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00522787: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00522788: XOR EBX,EBX
// 0052278a: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0052278f: MOV ECX,0x4
// 00522794: MOV EDX,0x1
// 00522799: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x64] (DATA)
// 0052279d: ADD ESP,0x8
// 005227a0: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005227a6: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 005227aa: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 005227ae: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 005227b2: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 005227b6: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x5c] (WRITE)
// 005227ba: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 005227be: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005227c2: PUSH EAX
// 005227c3: MOV ECX,0x2
// 005227c8: MOV EBX,0x3
// 005227cd: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005227ce: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 005227d2: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 005227d6: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 005227db: ADD ESP,0x8
// 005227de: PUSH 0x1
// 005227e0: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005227e6: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005227e7: MOV EBX,EAX
// 005227e9: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 005227ee: ADD ESP,0x8
// 005227f1: MOV EAX,EBX
// 005227f3: ADD ESP,0x58
// 005227f6: POP EDI
// 005227f7: POP ESI
// 005227f8: POP EBX
// 005227f9: RET
