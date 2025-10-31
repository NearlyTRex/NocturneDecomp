// Name: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0
// Address: 004538c0
// Address Range: [[004538c0, 00453944]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0(CDemonCamera * this_ptr, SRenderVertex * vertex)
// Globals:
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0
          (CDemonCamera *this_ptr,SRenderVertex *vertex)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = (byte)g_BlueBitPosition;
  if ((int)((vertex->projected_vertex).screen_x & -0x80000000) != 0) {
    vertex->fog = 0.0;
    vertex->color = (int)vertex->fog;
    vertex->light = vertex->fog;
    return;
  }
  uVar1 = *(uint *)((int)this_ptr->framebuffer_aligned +
                   (((vertex->projected_vertex).screen_x >> 0x10) +
                   ((vertex->projected_vertex).screen_y >> 0x10) * this_ptr->framebuffer_width) * 4)
  ;
  bVar2 = (byte)g_GreenBitPosition & 0x1f;
  vertex->light = (float)((uVar1 >> ((byte)g_RedBitPosition & 0x1f) & 0xff) << 8);
  vertex->color = (uVar1 >> bVar2 & 0xff) << 8;
  vertex->fog = (float)((uVar1 >> (bVar3 & 0x1f) & 0xff) << 8);
  return;
}


// Assembly code:
// 004538c0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0
// 004538c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004538c5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004538c9: TEST byte ptr [EAX + 0x13],0x80
// 004538cd: JZ 0x004538e1
//   XREF to: 004538e1 (CONDITIONAL_JUMP)
// 004538cf: MOV dword ptr [EAX + 0x28],0x0
// 004538d6: MOV EDX,dword ptr [EAX + 0x28]
// 004538d9: MOV dword ptr [EAX + 0x24],EDX
// 004538dc: MOV dword ptr [EAX + 0x20],EDX
// 004538df: POP EBX
// 004538e0: RET
// 004538e1: PUSH ESI
//   Label: LAB_004538e1
// 004538e2: MOV ECX,dword ptr [EAX + 0x14]
// 004538e5: MOV ESI,dword ptr [EBX + 0x144]
// 004538eb: SAR ECX,0x10
// 004538ee: IMUL ECX,ESI
// 004538f1: MOV EDX,dword ptr [EAX + 0x10]
// 004538f4: SAR EDX,0x10
// 004538f7: ADD EDX,ECX
// 004538f9: MOV ECX,dword ptr [EBX + 0x158]
// 004538ff: MOV EDX,dword ptr [ECX + EDX*0x4]
// 00453902: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00453908: MOV EBX,EDX
// 0045390a: SHR EBX,CL
// 0045390c: MOV ESI,EDX
// 0045390e: AND EBX,0xff
// 00453914: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0045391a: SHL EBX,0x8
// 0045391d: SHR ESI,CL
// 0045391f: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00453925: AND ESI,0xff
// 0045392b: MOV dword ptr [EAX + 0x20],EBX
// 0045392e: SHR EDX,CL
// 00453930: SHL ESI,0x8
// 00453933: AND EDX,0xff
// 00453939: MOV dword ptr [EAX + 0x24],ESI
// 0045393c: SHL EDX,0x8
// 0045393f: MOV dword ptr [EAX + 0x28],EDX
// 00453942: POP ESI
// 00453943: POP EBX
// 00453944: RET
