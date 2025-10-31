// Name: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
// Address: 00473270
// Address Range: [[00473270, 00473358]]
// Convention: __cdecl
// Signature: ushort * core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270(CDemonLight * this_ptr, CVector3i * projected_coord, uchar x_round_flag, uchar y_round_flag)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 (0044de10) at 0044e29e [UNCONDITIONAL_CALL]
// Globals:
//   uchar[8] g_LightBitMaskLookup

#include "nocturne.h"

ushort * __cdecl
core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
          (CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  uVar1 = 0;
  if ((x_round_flag & 1) != 0) {
    uVar1 = 0x4000;
    uVar3 = 0x4000;
  }
  if ((y_round_flag & 1) != 0) {
    uVar3 = uVar3 | 0x8000;
    uVar1 = uVar1 | 0x8000;
  }
  if (0 < projected_coord->z) {
    iVar5 = uVar1 + projected_coord->x;
    uVar1 = iVar5 >> 0x10;
    iVar6 = (int)(uVar3 + projected_coord->y) >> 0x10;
    if (this_ptr->shadow_bounds_mode == 0) {
      if ((((-1 < (int)uVar1) && ((int)uVar1 < this_ptr->shadow_map_width)) && (-1 < iVar6)) &&
         (iVar6 < this_ptr->shadow_map_height)) goto LAB_00473303;
    }
    else {
      iVar2 = this_ptr->shadow_map_width / 2;
      if ((int)((iVar6 - iVar2) * (iVar6 - iVar2) + (uVar1 - iVar2) * (uVar1 - iVar2)) <=
          iVar2 * iVar2) {
LAB_00473303:
        iVar2 = this_ptr->shadow_map_width * iVar6;
        iVar4 = iVar2 >> 0x1f;
        iVar5 = iVar5 >> 0x1f;
        this_ptr->lightmap_visibility_bits
        [((int)((iVar2 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3) +
         ((int)((uVar1 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3)] =
             this_ptr->lightmap_visibility_bits
             [((int)((iVar2 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3) +
              ((int)((uVar1 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3)] |
             g_LightBitMaskLookup[uVar1 & 7];
        return this_ptr->shadow_depth_buffer + uVar1 + iVar6 * this_ptr->shadow_map_width;
      }
    }
  }
  return (ushort *)0x0;
}


// Assembly code:
// 00473270: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
// 00473271: PUSH ESI
// 00473272: PUSH EDI
// 00473273: PUSH EBP
// 00473274: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00473278: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047327c: MOV CL,byte ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00473280: XOR EDX,EDX
// 00473282: XOR EAX,EAX
// 00473284: TEST CL,0x1
// 00473287: JZ 0x00473290
//   XREF to: 00473290 (CONDITIONAL_JUMP)
// 00473289: MOV EAX,0x4000
// 0047328e: MOV EDX,EAX
// 00473290: TEST byte ptr [ESP + 0x20],0x1
//   Label: LAB_00473290
//   XREF to: Stack[0x10] (READ)
// 00473295: JZ 0x0047329d
//   XREF to: 0047329d (CONDITIONAL_JUMP)
// 00473297: OR DH,0x80
// 0047329a: OR AH,0x80
// 0047329d: CMP dword ptr [ESI + 0x8],0x0
//   Label: LAB_0047329d
// 004732a1: JLE 0x004732e4
//   XREF to: 004732e4 (CONDITIONAL_JUMP)
// 004732a3: MOV EDI,dword ptr [ESI]
// 004732a5: MOV EBP,dword ptr [ESI + 0x4]
// 004732a8: LEA ECX,[EAX + EDI*0x1]
// 004732ab: LEA ESI,[EDX + EBP*0x1]
// 004732ae: SAR ECX,0x10
// 004732b1: MOV EAX,dword ptr [EBX + 0x1cb8]
// 004732b7: SAR ESI,0x10
// 004732ba: TEST EAX,EAX
// 004732bc: JZ 0x004732eb
//   XREF to: 004732eb (CONDITIONAL_JUMP)
// 004732be: MOV EAX,dword ptr [EBX + 0x1cc0]
// 004732c4: MOV EDX,EAX
// 004732c6: SAR EDX,0x1f
// 004732c9: SUB EAX,EDX
// 004732cb: SAR EAX,0x1
// 004732cd: MOV EDI,ECX
// 004732cf: SUB EDI,EAX
// 004732d1: IMUL EDI,EDI
// 004732d4: MOV EDX,ESI
// 004732d6: SUB EDX,EAX
// 004732d8: IMUL EDX,EDX
// 004732db: IMUL EAX,EAX
// 004732de: ADD EDX,EDI
// 004732e0: CMP EDX,EAX
// 004732e2: JLE 0x00473303
//   XREF to: 00473303 (CONDITIONAL_JUMP)
// 004732e4: XOR EAX,EAX
//   Label: LAB_004732e4
// 004732e6: POP EBP
//   Label: LAB_004732e6
// 004732e7: POP EDI
// 004732e8: POP ESI
// 004732e9: POP EBX
// 004732ea: RET
// 004732eb: TEST ECX,ECX
//   Label: LAB_004732eb
// 004732ed: JL 0x004732e6
//   XREF to: 004732e6 (CONDITIONAL_JUMP)
// 004732ef: CMP ECX,dword ptr [EBX + 0x1cc0]
// 004732f5: JGE 0x004732e6
//   XREF to: 004732e6 (CONDITIONAL_JUMP)
// 004732f7: TEST ESI,ESI
// 004732f9: JL 0x004732e6
//   XREF to: 004732e6 (CONDITIONAL_JUMP)
// 004732fb: CMP ESI,dword ptr [EBX + 0x1cc4]
// 00473301: JGE 0x004732e6
//   XREF to: 004732e6 (CONDITIONAL_JUMP)
// 00473303: MOV EDX,dword ptr [EBX + 0x1cc0]
//   Label: LAB_00473303
// 00473309: IMUL EDX,ESI
// 0047330c: MOV EAX,EDX
// 0047330e: SAR EDX,0x1f
// 00473311: SHL EDX,0x3
// 00473314: SBB EAX,EDX
// 00473316: SAR EAX,0x3
// 00473319: MOV EDI,EAX
// 0047331b: MOV EDX,ECX
// 0047331d: MOV EAX,ECX
// 0047331f: SAR EDX,0x1f
// 00473322: SHL EDX,0x3
// 00473325: SBB EAX,EDX
// 00473327: SAR EAX,0x3
// 0047332a: ADD EDI,EAX
// 0047332c: MOV EAX,dword ptr [EBX + 0x2fa0]
// 00473332: ADD EAX,EDI
// 00473334: MOV EDI,ECX
// 00473336: AND EDI,0x7
// 00473339: MOV DL,byte ptr [EDI + 0x66fed0]
//   XREF to: 0066fed0 (DATA)
// 0047333f: OR byte ptr [EAX],DL
// 00473341: IMUL ESI,dword ptr [EBX + 0x1cc0]
// 00473348: ADD ECX,ESI
// 0047334a: MOV EAX,dword ptr [EBX + 0x2f94]
// 00473350: ADD ECX,ECX
// 00473352: ADD EAX,ECX
// 00473354: POP EBP
// 00473355: POP EDI
// 00473356: POP ESI
// 00473357: POP EBX
// 00473358: RET
