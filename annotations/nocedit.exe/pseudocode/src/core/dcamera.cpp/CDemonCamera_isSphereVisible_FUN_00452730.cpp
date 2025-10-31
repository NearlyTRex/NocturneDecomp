// Name: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
// Address: 00452730
// Address Range: [[00452730, 004528da]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730(CDemonCamera * this_ptr, CVector3f * position, float radius)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c7790 [UNCONDITIONAL_CALL]
// Globals:
//   float g_CameraFixedPointScale = 256

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730
          (CDemonCamera *this_ptr,CVector3f *position,float radius)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = (int)ROUND(g_CameraFixedPointScale * radius);
  iVar2 = (int)ROUND(g_CameraFixedPointScale * radius);
  uVar10 = (int)ROUND(position->x * g_CameraFixedPointScale) - (this_ptr->camera_origin).x;
  uVar6 = (int)ROUND(position->y * g_CameraFixedPointScale) - (this_ptr->camera_origin).y;
  uVar11 = (int)ROUND(position->z * g_CameraFixedPointScale) - (this_ptr->camera_origin).z;
  if (((iVar1 <= (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) ||
      (iVar1 <= (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)))) ||
     (iVar1 <= (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)))) {
    lVar3 = (longlong)(int)uVar10 * (longlong)(this_ptr->source_matrix).m[0][0];
    lVar4 = (longlong)(int)uVar6 * (longlong)(this_ptr->source_matrix).m[1][0];
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->source_matrix).m[2][0];
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)(this_ptr->source_matrix).m[0][1];
    lVar4 = (longlong)(int)uVar6 * (longlong)(this_ptr->source_matrix).m[1][1];
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->source_matrix).m[2][1];
    iVar8 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)(this_ptr->source_matrix).m[0][2];
    lVar4 = (longlong)(int)uVar6 * (longlong)(this_ptr->source_matrix).m[1][2];
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->source_matrix).m[2][2];
    iVar9 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    if (((iVar9 < iVar7 - iVar1) ||
        (iVar7 = iVar7 + iVar1, SBORROW4(iVar7,-iVar9) != iVar7 + iVar9 < 0)) ||
       ((iVar9 < iVar8 - iVar2 ||
        (iVar8 = iVar8 + iVar2, SBORROW4(iVar8,-iVar9) != iVar8 + iVar9 < 0)))) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 00452730: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
// 00452731: PUSH ESI
// 00452732: PUSH EDI
// 00452733: PUSH EBP
// 00452734: MOV EBP,ESP
// 00452736: SUB ESP,0x20
// 00452739: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045273c: LEA EBX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045273f: FLD float ptr [EAX]
// 00452741: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452747: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 00452749: FLD float ptr [EAX + 0x4]
// 0045274c: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452752: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 00452755: FLD float ptr [EAX + 0x8]
// 00452758: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045275e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00452761: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00452767: FLD float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045276d: FMULP
// 0045276f: FIST dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (WRITE)
// 00452775: FISTP dword ptr [EBP + 0xfffffffc]
//   XREF to: Stack[-0x14] (WRITE)
// 0045277b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045277e: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00452781: SUB EDX,dword ptr [EAX + 0x16c]
// 00452787: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045278a: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0045278d: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00452790: SUB ECX,dword ptr [EAX + 0x170]
// 00452796: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00452799: MOV dword ptr [EBP + -0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0045279c: MOV EBX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045279f: SUB EBX,dword ptr [EAX + 0x174]
// 004527a5: MOV EAX,EDX
// 004527a7: MOV dword ptr [EBP + -0x18],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004527aa: CDQ
// 004527ab: XOR EAX,EDX
// 004527ad: SUB EAX,EDX
// 004527af: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004527b2: JGE 0x004527c5
//   XREF to: 004527c5 (CONDITIONAL_JUMP)
// 004527b4: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004527b7: CDQ
// 004527b8: XOR EAX,EDX
// 004527ba: SUB EAX,EDX
// 004527bc: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004527bf: JL 0x004528be
//   XREF to: 004528be (CONDITIONAL_JUMP)
// 004527c5: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_004527c5
//   XREF to: Stack[0x4] (READ)
// 004527c8: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004527cb: MOV EDX,dword ptr [EDX + 0x178]
// 004527d1: IMUL EDX
// 004527d3: SHRD EAX,EDX,0x10
// 004527d7: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004527da: MOV ECX,EAX
// 004527dc: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004527df: MOV EDX,dword ptr [EDX + 0x184]
// 004527e5: IMUL EDX
// 004527e7: SHRD EAX,EDX,0x10
// 004527eb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004527ee: ADD ECX,EAX
// 004527f0: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004527f3: MOV EDX,dword ptr [EDX + 0x190]
// 004527f9: IMUL EDX
// 004527fb: SHRD EAX,EDX,0x10
// 004527ff: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00452802: ADD ECX,EAX
// 00452804: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00452807: MOV EDX,dword ptr [EDX + 0x17c]
// 0045280d: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00452810: IMUL EDX
// 00452812: SHRD EAX,EDX,0x10
// 00452816: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00452819: MOV ECX,EAX
// 0045281b: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045281e: MOV EDX,dword ptr [EDX + 0x188]
// 00452824: IMUL EDX
// 00452826: SHRD EAX,EDX,0x10
// 0045282a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045282d: ADD ECX,EAX
// 0045282f: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00452832: MOV EDX,dword ptr [EDX + 0x194]
// 00452838: IMUL EDX
// 0045283a: SHRD EAX,EDX,0x10
// 0045283e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00452841: ADD ECX,EAX
// 00452843: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00452846: MOV EDX,dword ptr [EDX + 0x180]
// 0045284c: MOV dword ptr [EBP + -0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0045284f: IMUL EDX
// 00452851: SHRD EAX,EDX,0x10
// 00452855: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00452858: MOV ECX,EAX
// 0045285a: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045285d: MOV EDX,dword ptr [EDX + 0x18c]
// 00452863: IMUL EDX
// 00452865: SHRD EAX,EDX,0x10
// 00452869: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045286c: ADD ECX,EAX
// 0045286e: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00452871: MOV EDX,dword ptr [EDX + 0x198]
// 00452877: IMUL EDX
// 00452879: SHRD EAX,EDX,0x10
// 0045287d: ADD ECX,EAX
// 0045287f: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00452882: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00452885: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00452888: MOV EBX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045288b: SUB EAX,ECX
// 0045288d: CMP EAX,EBX
// 0045288f: JG 0x004528b5
//   XREF to: 004528b5 (CONDITIONAL_JUMP)
// 00452891: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00452894: MOV ESI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00452897: MOV EAX,EBX
// 00452899: ADD EDX,ESI
// 0045289b: NEG EAX
// 0045289d: CMP EDX,EAX
// 0045289f: JL 0x004528b5
//   XREF to: 004528b5 (CONDITIONAL_JUMP)
// 004528a1: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004528a4: SUB EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004528a7: CMP EDX,EBX
// 004528a9: JG 0x004528b5
//   XREF to: 004528b5 (CONDITIONAL_JUMP)
// 004528ab: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004528ae: ADD EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004528b1: CMP EDX,EAX
// 004528b3: JGE 0x004528cf
//   XREF to: 004528cf (CONDITIONAL_JUMP)
// 004528b5: XOR EAX,EAX
//   Label: LAB_004528b5
// 004528b7: MOV ESP,EBP
// 004528b9: POP EBP
// 004528ba: POP EDI
// 004528bb: POP ESI
// 004528bc: POP EBX
// 004528bd: RET
// 004528be: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_004528be
//   XREF to: Stack[-0x28] (READ)
// 004528c1: CDQ
// 004528c2: XOR EAX,EDX
// 004528c4: SUB EAX,EDX
// 004528c6: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004528c9: JGE 0x004527c5
//   XREF to: 004527c5 (CONDITIONAL_JUMP)
// 004528cf: MOV EAX,0x1
//   Label: LAB_004528cf
// 004528d4: MOV ESP,EBP
// 004528d6: POP EBP
// 004528d7: POP EDI
// 004528d8: POP ESI
// 004528d9: POP EBX
// 004528da: RET
