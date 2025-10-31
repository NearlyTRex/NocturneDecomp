// Name: engine_3d.c_processPolygonColor_FUN_00403e30
// Address: 00403e30
// Address Range: [[00403e30, 00403eb9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_course.cpp_FUN_00443760 (00443760) at 00443aba [UNCONDITIONAL_CALL]
//   shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920 (0045d920) at 0045d96a [UNCONDITIONAL_CALL]
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d163 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentPolygonColor
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  g_CurrentPolygonColor = (polygon_info->base).count;
  iVar1 = (polygon_info->base).count;
  if (((int)(iVar1 & -0x80000000) != 0) && ((iVar1 & 0x40000000) == 0)) {
    uVar4 = (polygon_info->base).count & 0xff;
    uVar2 = (polygon_info->base).count >> 8 & 0xff;
    uVar3 = (polygon_info->base).count >> 0x10 & 0xff;
    if (g_BitsPerPixel != 0x20) {
      g_CurrentPolygonColor = uVar4 << 0x10 | uVar2 << 8 | uVar3;
      return (SMRGLHeaderExtended *)&polygon_info->surface_normal;
    }
    g_CurrentPolygonColor =
         uVar3 << ((byte)g_BlueBitPosition & 0x1f) |
         uVar2 << ((byte)g_GreenBitPosition & 0x1f) | uVar4 << ((byte)g_RedBitPosition & 0x1f);
  }
  return (SMRGLHeaderExtended *)&polygon_info->surface_normal;
}


// Assembly code:
// 00403e30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_processPolygonColor_FUN_00403e30
//   XREF to: Stack[0x4] (READ)
// 00403e34: MOV EDX,dword ptr [EAX + 0x4]
// 00403e37: MOV dword ptr [0x00772a5c],EDX
//   XREF to: 00772a5c (WRITE)
// 00403e3d: MOV DL,byte ptr [EAX + 0x7]
// 00403e40: TEST DL,0x80
// 00403e43: JZ 0x00403e9e
//   XREF to: 00403e9e (CONDITIONAL_JUMP)
// 00403e45: TEST DL,0x40
// 00403e48: JNZ 0x00403e9e
//   XREF to: 00403e9e (CONDITIONAL_JUMP)
// 00403e4a: PUSH ESI
// 00403e4b: PUSH EBX
// 00403e4c: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00403e52: MOV EDX,dword ptr [EAX + 0x4]
// 00403e55: MOV EBX,dword ptr [EAX + 0x4]
// 00403e58: MOV ESI,dword ptr [EAX + 0x4]
// 00403e5b: SAR EDX,0x8
// 00403e5e: SAR EBX,0x10
// 00403e61: AND ESI,0xff
// 00403e67: AND EDX,0xff
// 00403e6d: AND EBX,0xff
// 00403e73: CMP ECX,0x20
// 00403e76: JNZ 0x00403ea2
//   XREF to: 00403ea2 (CONDITIONAL_JUMP)
// 00403e78: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00403e7e: SHL ESI,CL
// 00403e80: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00403e86: SHL EDX,CL
// 00403e88: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00403e8e: SHL EBX,CL
// 00403e90: OR EDX,ESI
// 00403e92: MOV ECX,EBX
// 00403e94: OR ECX,EDX
// 00403e96: MOV dword ptr [0x00772a5c],ECX
//   XREF to: 00772a5c (WRITE)
// 00403e9c: POP EBX
// 00403e9d: POP ESI
// 00403e9e: ADD EAX,0x8
//   Label: LAB_00403e9e
// 00403ea1: RET
// 00403ea2: MOV ECX,ESI
//   Label: LAB_00403ea2
// 00403ea4: SHL EDX,0x8
// 00403ea7: SHL ECX,0x10
// 00403eaa: OR ECX,EDX
// 00403eac: OR ECX,EBX
// 00403eae: MOV dword ptr [0x00772a5c],ECX
//   XREF to: 00772a5c (WRITE)
// 00403eb4: POP EBX
// 00403eb5: POP ESI
// 00403eb6: ADD EAX,0x8
// 00403eb9: RET
