// Name: engine_3d.c_processTextureCoordinates_FUN_00403a80
// Address: 00403a80
// Address Range: [[00403a80, 00403acb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &(polygon_info->surface_normal).B;
  iVar1 = 0;
  if (0 < (polygon_info->surface_normal).A) {
    do {
      g_RenderVertexBuffer[(polygon_info->base).count + iVar1].u = (float)*piVar2;
      g_RenderVertexBuffer[(polygon_info->base).count + iVar1].v = (float)piVar2[1];
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < (polygon_info->surface_normal).A);
  }
  return (SMRGLHeaderExtended *)
         (&(polygon_info->surface_normal).B + (polygon_info->surface_normal).A * 2);
}


// Assembly code:
// 00403a80: PUSH EBX
//   Label: engine_3d.c_processTextureCoordinates_FUN_00403a80
// 00403a81: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00403a85: LEA EDX,[ECX + 0xc]
// 00403a88: MOV EBX,dword ptr [ECX + 0x8]
// 00403a8b: XOR EAX,EAX
// 00403a8d: TEST EBX,EBX
// 00403a8f: JLE 0x00403abf
//   XREF to: 00403abf (CONDITIONAL_JUMP)
// 00403a91: PUSH ESI
// 00403a92: MOV ESI,dword ptr [ECX + 0x4]
//   Label: LAB_00403a92
// 00403a95: ADD ESI,EAX
// 00403a97: IMUL ESI,ESI,0x30
// 00403a9a: MOV EBX,dword ptr [EDX]
// 00403a9c: MOV dword ptr [ESI + 0x68802c],EBX
//   XREF to: 0068802c (DATA)
// 00403aa2: MOV EBX,dword ptr [ECX + 0x4]
// 00403aa5: ADD EBX,EAX
// 00403aa7: IMUL ESI,EBX,0x30
// 00403aaa: MOV EBX,dword ptr [EDX + 0x4]
// 00403aad: MOV dword ptr [ESI + 0x688030],EBX
//   XREF to: 00688030 (DATA)
// 00403ab3: INC EAX
// 00403ab4: MOV ESI,dword ptr [ECX + 0x8]
// 00403ab7: ADD EDX,0x8
// 00403aba: CMP EAX,ESI
// 00403abc: JL 0x00403a92
//   XREF to: 00403a92 (CONDITIONAL_JUMP)
// 00403abe: POP ESI
// 00403abf: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_00403abf
// 00403ac2: ADD ECX,0xc
// 00403ac5: SHL EAX,0x3
// 00403ac8: ADD EAX,ECX
// 00403aca: POP EBX
// 00403acb: RET
