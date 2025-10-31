// Name: engine_light.cpp_calculateLighting_FUN_00505780
// Address: 00505780
// Address Range: [[00505780, 00505823]]
// Convention: __cdecl
// Signature: int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
// Cross-references:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00 (00403a00) at 00403a11 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 00407678 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 0040777b [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404b49 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b2a [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 0040672a [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 00406640 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 004049bb [UNCONDITIONAL_CALL]
// Globals:
//   int g_AmbientLightLevel = 0x8000
//   int g_LightDirectionX
//   int g_LightDirectionY
//   int g_LightDirectionZ

#include "nocturne.h"

int __cdecl engine_light_cpp_calculateLighting_FUN_00505780(int normal_x,int normal_y,int normal_z)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((uint)((longlong)normal_x * (longlong)g_LightDirectionX) >> 0x10 |
          (int)((ulonglong)((longlong)normal_x * (longlong)g_LightDirectionX) >> 0x20) << 0x10) +
          ((uint)((longlong)normal_y * (longlong)g_LightDirectionY) >> 0x10 |
          (int)((ulonglong)((longlong)normal_y * (longlong)g_LightDirectionY) >> 0x20) << 0x10) +
          ((uint)((longlong)normal_z * (longlong)g_LightDirectionZ) >> 0x10 |
          (int)((ulonglong)((longlong)normal_z * (longlong)g_LightDirectionZ) >> 0x20) << 0x10);
  iVar2 = -iVar3;
  if (iVar3 < 1) {
    if (iVar3 != -0xffff && 0xfffe < iVar2) {
      iVar2 = 0xffff;
    }
  }
  else {
    iVar2 = 0;
  }
  lVar1 = (longlong)iVar2 * (longlong)(0xffff - g_AmbientLightLevel);
  iVar3 = g_AmbientLightLevel + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (-1 < iVar3) {
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    return ((int)((iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0)) >> 4) +
           0x100;
  }
  return 0x100;
}


// Assembly code:
// 00505780: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: Stack[0x4] (READ)
// 00505784: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 0050578a: IMUL EDX
// 0050578c: SHRD EAX,EDX,0x10
// 00505790: MOV EDX,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 00505796: MOV ECX,EAX
// 00505798: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050579c: IMUL EDX
// 0050579e: SHRD EAX,EDX,0x10
// 005057a2: MOV EDX,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 005057a8: ADD ECX,EAX
// 005057aa: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005057ae: IMUL EDX
// 005057b0: SHRD EAX,EDX,0x10
// 005057b4: LEA EDX,[ECX + EAX*0x1]
// 005057b7: NEG EDX
// 005057b9: TEST EDX,EDX
// 005057bb: JL 0x0050580b
//   XREF to: 0050580b (CONDITIONAL_JUMP)
// 005057bd: CMP EDX,0xffff
// 005057c3: JLE 0x005057ca
//   XREF to: 005057ca (CONDITIONAL_JUMP)
// 005057c5: MOV EDX,0xffff
// 005057ca: MOV ECX,0xffff
//   Label: LAB_005057ca
// 005057cf: SUB ECX,dword ptr [0x0067cfc8]
//   XREF to: 0067cfc8 (READ)
// 005057d5: MOV EAX,EDX
// 005057d7: MOV EDX,ECX
// 005057d9: IMUL EDX
// 005057db: SHRD EAX,EDX,0x10
// 005057df: MOV EDX,dword ptr [0x0067cfc8]
//   XREF to: 0067cfc8 (READ)
// 005057e5: ADD EDX,EAX
// 005057e7: TEST EDX,EDX
// 005057e9: JL 0x0050580f
//   XREF to: 0050580f (CONDITIONAL_JUMP)
// 005057eb: CMP EDX,0xffff
// 005057f1: JLE 0x005057f8
//   XREF to: 005057f8 (CONDITIONAL_JUMP)
// 005057f3: MOV EDX,0xffff
// 005057f8: MOV EAX,EDX
//   Label: LAB_005057f8
// 005057fa: SAR EDX,0x1f
// 005057fd: SHL EDX,0x4
// 00505800: SBB EAX,EDX
// 00505802: SAR EAX,0x4
// 00505805: ADD EAX,0x100
// 0050580a: RET
// 0050580b: XOR EDX,EDX
//   Label: LAB_0050580b
// 0050580d: JMP 0x005057ca
//   XREF to: 005057ca (UNCONDITIONAL_JUMP)
// 0050580f: XOR EDX,EDX
//   Label: LAB_0050580f
// 00505811: MOV EAX,EDX
// 00505813: SAR EDX,0x1f
// 00505816: SHL EDX,0x4
// 00505819: SBB EAX,EDX
// 0050581b: SAR EAX,0x4
// 0050581e: ADD EAX,0x100
// 00505823: RET
