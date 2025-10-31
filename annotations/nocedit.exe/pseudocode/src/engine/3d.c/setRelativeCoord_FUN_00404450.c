// Name: engine_3d.c_setRelativeCoord_FUN_00404450
// Address: 00404450
// Address Range: [[00404450, 00404493]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_setRelativeCoord_FUN_00404450(SMRGLHeaderPrimitive * primitive)
// Globals:
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_setRelativeCoord_FUN_00404450(SMRGLHeaderPrimitive *primitive)

{
  longlong lVar1;
  
  lVar1 = (longlong)(primitive->base).count * (longlong)g_RelativeX;
  g_RelativeX = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_RelativeY;
  g_RelativeY = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(primitive->base).count * (longlong)g_RelativeZ;
  g_RelativeZ = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return (SMRGLHeaderExtended *)&primitive->surface_normal;
}


// Assembly code:
// 00404450: MOV ECX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_setRelativeCoord_FUN_00404450
//   XREF to: Stack[0x4] (READ)
// 00404454: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0040445a: MOV EAX,dword ptr [ECX + 0x4]
// 0040445d: IMUL EDX
// 0040445f: SHRD EAX,EDX,0x10
// 00404463: MOV EDX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 00404469: MOV [0x02d052b8],EAX
//   XREF to: 02d052b8 (WRITE)
// 0040446e: MOV EAX,dword ptr [ECX + 0x4]
// 00404471: IMUL EDX
// 00404473: SHRD EAX,EDX,0x10
// 00404477: MOV EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0040447d: MOV [0x02d052bc],EAX
//   XREF to: 02d052bc (WRITE)
// 00404482: MOV EAX,dword ptr [ECX + 0x4]
// 00404485: IMUL EDX
// 00404487: SHRD EAX,EDX,0x10
// 0040448b: MOV [0x02d052c0],EAX
//   XREF to: 02d052c0 (WRITE)
// 00404490: LEA EAX,[ECX + 0x8]
// 00404493: RET
