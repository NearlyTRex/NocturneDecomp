// Name: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
// Address: 00476000
// Address Range: [[00476000, 004760c4]]
// Convention: __cdecl
// Signature: int core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight * this_ptr, CRect * rect)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320 (00420320) at 0042049d [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight *this_ptr,CRect *rect)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  
  iVar4 = rect->left >> 0x1f;
  iVar1 = (int)((rect->left + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar4 = rect->top >> 0x1f;
  iVar2 = (int)((rect->top + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar4 = rect->right * this_ptr->shadow_map_width;
  iVar5 = iVar4 >> 0x1f;
  puVar6 = this_ptr->lightmap_visibility_bits +
           ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
  iVar4 = rect->right;
  if (iVar4 <= rect->bottom) {
    do {
      if (iVar1 <= iVar2) {
        puVar3 = puVar6 + iVar1;
        iVar5 = iVar1;
        do {
          if (*puVar3 != '\0') {
            return 1;
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar5 <= iVar2);
      }
      iVar5 = this_ptr->shadow_map_width >> 0x1f;
      puVar6 = puVar6 + ((int)((this_ptr->shadow_map_width + iVar5 * -8) - (uint)(iVar5 << 2 < 0))
                        >> 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= rect->bottom);
  }
  return 0;
}


// Assembly code:
// 00476000: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
// 00476001: PUSH ESI
// 00476002: PUSH EDI
// 00476003: PUSH EBP
// 00476004: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00476008: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047600c: MOV EDX,dword ptr [EDX]
// 0047600e: MOV EAX,dword ptr [EAX]
// 00476010: SAR EDX,0x1f
// 00476013: SHL EDX,0x3
// 00476016: SBB EAX,EDX
// 00476018: SAR EAX,0x3
// 0047601b: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047601f: MOV ESI,EAX
// 00476021: MOV EDX,dword ptr [EDX + 0x4]
// 00476024: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00476028: SAR EDX,0x1f
// 0047602b: MOV EAX,dword ptr [EAX + 0x4]
// 0047602e: SHL EDX,0x3
// 00476031: SBB EAX,EDX
// 00476033: SAR EAX,0x3
// 00476036: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047603a: MOV ECX,EAX
// 0047603c: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00476040: MOV EDX,dword ptr [EDX + 0x8]
// 00476043: MOV EBX,dword ptr [EAX + 0x1cc0]
// 00476049: IMUL EDX,EBX
// 0047604c: MOV EAX,EDX
// 0047604e: SAR EDX,0x1f
// 00476051: SHL EDX,0x3
// 00476054: SBB EAX,EDX
// 00476056: SAR EAX,0x3
// 00476059: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047605d: MOV EBP,dword ptr [EBP + 0x2fa0]
// 00476063: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00476067: ADD EBP,EAX
// 00476069: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047606d: MOV EDI,dword ptr [EDI + 0x8]
// 00476070: CMP EDI,dword ptr [EAX + 0xc]
// 00476073: JG 0x004760b4
//   XREF to: 004760b4 (CONDITIONAL_JUMP)
// 00476075: MOV EDX,ESI
//   Label: LAB_00476075
// 00476077: CMP ESI,ECX
// 00476079: JG 0x00476089
//   XREF to: 00476089 (CONDITIONAL_JUMP)
// 0047607b: LEA EAX,[ESI + EBP*0x1]
// 0047607e: CMP byte ptr [EAX],0x0
//   Label: LAB_0047607e
// 00476081: JNZ 0x004760bb
//   XREF to: 004760bb (CONDITIONAL_JUMP)
// 00476083: INC EDX
// 00476084: INC EAX
// 00476085: CMP EDX,ECX
// 00476087: JLE 0x0047607e
//   XREF to: 0047607e (CONDITIONAL_JUMP)
// 00476089: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00476089
//   XREF to: Stack[0x4] (READ)
// 0047608d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00476091: MOV EDX,dword ptr [EDX + 0x1cc0]
// 00476097: MOV EAX,dword ptr [EAX + 0x1cc0]
// 0047609d: SAR EDX,0x1f
// 004760a0: SHL EDX,0x3
// 004760a3: SBB EAX,EDX
// 004760a5: SAR EAX,0x3
// 004760a8: ADD EBP,EAX
// 004760aa: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004760ae: INC EDI
// 004760af: CMP EDI,dword ptr [EAX + 0xc]
// 004760b2: JLE 0x00476075
//   XREF to: 00476075 (CONDITIONAL_JUMP)
// 004760b4: XOR EAX,EAX
//   Label: LAB_004760b4
// 004760b6: POP EBP
// 004760b7: POP EDI
// 004760b8: POP ESI
// 004760b9: POP EBX
// 004760ba: RET
// 004760bb: MOV EAX,0x1
//   Label: LAB_004760bb
// 004760c0: POP EBP
// 004760c1: POP EDI
// 004760c2: POP ESI
// 004760c3: POP EBX
// 004760c4: RET
