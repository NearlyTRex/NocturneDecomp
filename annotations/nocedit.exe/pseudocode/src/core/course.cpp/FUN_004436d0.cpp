// Name: core_course.cpp_FUN_004436d0
// Address: 004436d0
// Address Range: [[004436d0, 00443759]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_004436d0()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   uchar[32768] g_ColorCubeLookup
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_plotPixelWithDepth_FUN_00401290
//   engine_prim.c_replaceWWithDepth_FUN_00552110

#include "nocturne.h"

void core_course_cpp_FUN_004436d0(void)

{
  SRenderVertex *vertices;
  int iVar1;
  int iVar2;
  
  vertices = g_CDemonRendererPtr->vertex_buffer_ptr;
  if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
    iVar2 = (vertices->projected_vertex).transformed_z;
    iVar1 = iVar2 >> 0x1f;
    iVar2 = 0xff - ((int)((iVar2 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    g_ActiveRenderColor =
         (int)g_ColorCubeLookup
              [((int)((iVar2 + (iVar2 >> 0x1f) * -8) - (uint)((iVar2 >> 0x1f) << 2 < 0)) >> 3) *
               0x421];
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
    engine_2d_c_plotPixelWithDepth_FUN_00401290
              ((vertices->projected_vertex).screen_x >> 0x10,
               (vertices->projected_vertex).screen_y >> 0x10,
               (vertices->projected_vertex).transformed_z);
  }
  return;
}


// Assembly code:
// 004436d0: PUSH EBX
//   Label: core_course.cpp_FUN_004436d0
// 004436d1: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 004436d7: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 004436d9: TEST byte ptr [EBX + 0x13],0x80
// 004436dd: JNZ 0x00443754
//   XREF to: 00443754 (CONDITIONAL_JUMP)
// 004436df: MOV EAX,dword ptr [EBX + 0x8]
// 004436e2: MOV EDX,EAX
// 004436e4: SAR EDX,0x1f
// 004436e7: SHL EDX,0x7
// 004436ea: SBB EAX,EDX
// 004436ec: SAR EAX,0x7
// 004436ef: MOV EDX,0xff
// 004436f4: SUB EDX,EAX
// 004436f6: TEST EDX,EDX
// 004436f8: JL 0x00443756
//   XREF to: 00443756 (CONDITIONAL_JUMP)
// 004436fa: CMP EDX,0xff
// 00443700: JLE 0x00443707
//   XREF to: 00443707 (CONDITIONAL_JUMP)
// 00443702: MOV EDX,0xff
// 00443707: MOV EAX,EDX
//   Label: LAB_00443707
// 00443709: SAR EDX,0x1f
// 0044370c: SHL EDX,0x3
// 0044370f: SBB EAX,EDX
// 00443711: SAR EAX,0x3
// 00443714: MOV EDX,EAX
// 00443716: MOV ECX,EDX
// 00443718: SHL EAX,0xa
// 0044371b: SHL ECX,0x5
// 0044371e: ADD EAX,ECX
// 00443720: ADD EDX,EAX
// 00443722: XOR EAX,EAX
// 00443724: PUSH 0x1
// 00443726: MOV AL,byte ptr [EDX + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 0044372c: PUSH EBX
// 0044372d: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00443732: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 00443737: ADD ESP,0x8
// 0044373a: MOV EDX,dword ptr [EBX + 0x8]
// 0044373d: MOV EAX,dword ptr [EBX + 0x14]
// 00443740: PUSH EDX
// 00443741: SAR EAX,0x10
// 00443744: PUSH EAX
// 00443745: MOV EAX,dword ptr [EBX + 0x10]
// 00443748: SAR EAX,0x10
// 0044374b: PUSH EAX
// 0044374c: CALL engine_2d.c_plotPixelWithDepth_FUN_00401290
//   XREF to: 00401290 (UNCONDITIONAL_CALL)
// 00443751: ADD ESP,0xc
// 00443754: POP EBX
//   Label: LAB_00443754
// 00443755: RET
// 00443756: XOR EDX,EDX
//   Label: LAB_00443756
// 00443758: JMP 0x00443707
//   XREF to: 00443707 (UNCONDITIONAL_JUMP)
