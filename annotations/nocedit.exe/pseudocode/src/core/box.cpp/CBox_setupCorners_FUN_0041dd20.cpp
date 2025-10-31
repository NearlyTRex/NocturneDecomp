// Name: core_box.cpp_CBox_setupCorners_FUN_0041dd20
// Address: 0041dd20
// Address Range: [[0041dd20, 0041df4d]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, float volume)
// Cross-references:
//   core_bodypart.cpp_FUN_0041b070 (0041b070) at 0041b19d [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 (0041fe90) at 0041ff8b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004218d0 (004218d0) at 004219ca [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_FUN_004bfe90 (004bfe90) at 004c009e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_create_FUN_004c3ee0 (004c3ee0) at 004c3fab [UNCONDITIONAL_CALL]
//   core_weapon.cpp_FUN_005ee740 (005ee740) at 005ee817 [UNCONDITIONAL_CALL]
// Globals:
//   double g_BoxHalfExtentMultiplier = 0.5
// Function calls:
//   core_box.cpp_CBox_updateTransform_FUN_0041e0e0

#include "nocturne.h"

void __cdecl
core_box_cpp_CBox_setupCorners_FUN_0041dd20
          (CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (&this_ptr->extents != extents) {
    (this_ptr->extents).x = extents->x;
    (this_ptr->extents).y = extents->y;
    (this_ptr->extents).z = extents->z;
  }
  fVar1 = (this_ptr->extents).x;
  fVar8 = (float)g_BoxHalfExtentMultiplier;
  fVar2 = (this_ptr->extents).z;
  fVar9 = (float)g_BoxHalfExtentMultiplier;
  fVar3 = (this_ptr->extents).z;
  fVar10 = (float)g_BoxHalfExtentMultiplier;
  fVar4 = (this_ptr->extents).x;
  fVar11 = (float)g_BoxHalfExtentMultiplier;
  fVar5 = (this_ptr->extents).x;
  fVar12 = (float)g_BoxHalfExtentMultiplier;
  fVar6 = (this_ptr->extents).y;
  fVar13 = (float)g_BoxHalfExtentMultiplier;
  fVar7 = (this_ptr->extents).y;
  this_ptr->scrape_point_count = 8;
  fVar14 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[0].local_position.x = fVar1 * fVar8;
  fVar1 = (this_ptr->extents).z;
  fVar8 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[0].local_position.y = -fVar7 * fVar14;
  fVar7 = (this_ptr->extents).x;
  fVar14 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[0].local_position.z = fVar2 * fVar9;
  fVar2 = (this_ptr->extents).y;
  fVar9 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[1].local_position.x = -fVar7 * fVar14;
  fVar7 = (this_ptr->extents).y;
  fVar14 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[1].local_position.y = -fVar2 * fVar9;
  fVar2 = (this_ptr->extents).x;
  fVar9 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[1].local_position.z = fVar3 * fVar10;
  fVar3 = (this_ptr->extents).y;
  fVar10 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[2].local_position.x = -fVar2 * fVar9;
  fVar2 = (this_ptr->extents).z;
  fVar9 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[2].local_position.y = -fVar3 * fVar10;
  fVar3 = (this_ptr->extents).y;
  fVar10 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[3].local_position.x = fVar4 * fVar11;
  fVar4 = (this_ptr->extents).z;
  fVar11 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[4].local_position.x = fVar5 * fVar12;
  fVar5 = (this_ptr->extents).z;
  fVar12 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[4].local_position.y = fVar6 * fVar13;
  fVar6 = (this_ptr->extents).y;
  fVar13 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[4].local_position.z = fVar1 * fVar8;
  fVar1 = (this_ptr->extents).x;
  fVar8 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[5].local_position.y = fVar7 * fVar14;
  fVar7 = (this_ptr->extents).x;
  fVar14 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[5].local_position.z = fVar5 * fVar12;
  fVar5 = (this_ptr->extents).z;
  fVar12 = (float)g_BoxHalfExtentMultiplier;
  this_ptr->scrape_points[6].local_position.y = fVar6 * fVar13;
  this_ptr->scrape_points[2].local_position.z = -fVar2 * fVar9;
  this_ptr->scrape_points[3].local_position.y = -fVar3 * fVar10;
  this_ptr->scrape_points[3].local_position.z = -fVar4 * fVar11;
  this_ptr->scrape_points[5].local_position.x = -fVar1 * fVar8;
  this_ptr->scrape_points[6].local_position.x = -fVar7 * fVar14;
  this_ptr->scrape_points[6].local_position.z = -fVar5 * fVar12;
  fVar3 = (float)g_BoxHalfExtentMultiplier;
  fVar1 = (this_ptr->extents).y;
  fVar2 = (this_ptr->extents).z;
  this_ptr->scrape_points[7].local_position.x = (this_ptr->extents).x * fVar3;
  this_ptr->scrape_points[7].local_position.y = fVar1 * fVar3;
  this_ptr->scrape_points[7].local_position.z = -fVar2 * fVar3;
  core_box_cpp_CBox_updateTransform_FUN_0041e0e0(this_ptr,position,orientation,volume);
  return;
}


// Assembly code:
// 0041dd20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: Stack[0x4] (READ)
// 0041dd24: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 0041dd28: LEA EDX,[EAX + 0xa4]
// 0041dd2e: CMP EDX,ECX
// 0041dd30: JZ 0x0041dd44
//   XREF to: 0041dd44 (CONDITIONAL_JUMP)
// 0041dd32: PUSH EBX
// 0041dd33: MOV EBX,dword ptr [ECX]
// 0041dd35: MOV dword ptr [EDX],EBX
// 0041dd37: MOV EBX,dword ptr [ECX + 0x4]
// 0041dd3a: MOV dword ptr [EDX + 0x4],EBX
// 0041dd3d: MOV EBX,dword ptr [ECX + 0x8]
// 0041dd40: MOV dword ptr [EDX + 0x8],EBX
// 0041dd43: POP EBX
// 0041dd44: FLD float ptr [EAX + 0xa4]
//   Label: LAB_0041dd44
// 0041dd4a: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dd50: FLD float ptr [EAX + 0xac]
// 0041dd56: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dd5c: FLD float ptr [EAX + 0xac]
// 0041dd62: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dd68: FLD float ptr [EAX + 0xa4]
// 0041dd6e: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dd74: FLD float ptr [EAX + 0xa4]
// 0041dd7a: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dd80: FLD float ptr [EAX + 0xa8]
// 0041dd86: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dd8c: FLD float ptr [EAX + 0xa8]
// 0041dd92: FCHS
// 0041dd94: MOV dword ptr [EAX + 0xb0],0x8
// 0041dd9e: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dda4: FXCH ST6
// 0041dda6: FSTP float ptr [EAX + 0xb4]
// 0041ddac: FLD float ptr [EAX + 0xac]
// 0041ddb2: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041ddb8: FXCH ST6
// 0041ddba: FSTP float ptr [EAX + 0xb8]
// 0041ddc0: FLD float ptr [EAX + 0xa4]
// 0041ddc6: FCHS
// 0041ddc8: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041ddce: FXCH ST5
// 0041ddd0: FSTP float ptr [EAX + 0xbc]
// 0041ddd6: FLD float ptr [EAX + 0xa8]
// 0041dddc: FCHS
// 0041ddde: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dde4: FXCH ST5
// 0041dde6: FSTP float ptr [EAX + 0xe8]
// 0041ddec: FLD float ptr [EAX + 0xa8]
// 0041ddf2: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041ddf8: FXCH ST5
// 0041ddfa: FSTP float ptr [EAX + 0xec]
// 0041de00: FLD float ptr [EAX + 0xa4]
// 0041de06: FCHS
// 0041de08: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de0e: FXCH ST4
// 0041de10: FSTP float ptr [EAX + 0xf0]
// 0041de16: FLD float ptr [EAX + 0xa8]
// 0041de1c: FCHS
// 0041de1e: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de24: FXCH ST4
// 0041de26: FSTP float ptr [EAX + 0x11c]
// 0041de2c: FLD float ptr [EAX + 0xac]
// 0041de32: FCHS
// 0041de34: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de3a: FXCH ST4
// 0041de3c: FSTP float ptr [EAX + 0x120]
// 0041de42: FLD float ptr [EAX + 0xa8]
// 0041de48: FCHS
// 0041de4a: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de50: FXCH ST3
// 0041de52: FSTP float ptr [EAX + 0x150]
// 0041de58: FLD float ptr [EAX + 0xac]
// 0041de5e: FCHS
// 0041de60: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de66: FXCH ST2
// 0041de68: FSTP float ptr [EAX + 0x184]
// 0041de6e: FLD float ptr [EAX + 0xac]
// 0041de74: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de7a: FXCH
// 0041de7c: FSTP float ptr [EAX + 0x188]
// 0041de82: FLD float ptr [EAX + 0xa8]
// 0041de88: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041de8e: FXCH ST6
// 0041de90: FSTP float ptr [EAX + 0x18c]
// 0041de96: FLD float ptr [EAX + 0xa4]
// 0041de9c: FCHS
// 0041de9e: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041dea4: FXCH ST5
// 0041dea6: FSTP float ptr [EAX + 0x1bc]
// 0041deac: FLD float ptr [EAX + 0xa4]
// 0041deb2: FCHS
// 0041deb4: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041deba: FXCH
// 0041debc: FSTP float ptr [EAX + 0x1c0]
// 0041dec2: FLD float ptr [EAX + 0xac]
// 0041dec8: FCHS
// 0041deca: FMUL double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041ded0: FXCH ST6
// 0041ded2: FSTP float ptr [EAX + 0x1f0]
// 0041ded8: FXCH ST3
// 0041deda: FSTP float ptr [EAX + 0x124]
// 0041dee0: FXCH
// 0041dee2: FSTP float ptr [EAX + 0x154]
// 0041dee8: FSTP float ptr [EAX + 0x158]
// 0041deee: FXCH
// 0041def0: FSTP float ptr [EAX + 0x1b8]
// 0041def6: FSTP float ptr [EAX + 0x1ec]
// 0041defc: FSTP float ptr [EAX + 0x1f4]
// 0041df02: FLD double ptr [0x0061646f]
//   XREF to: 0061646f (READ)
// 0041df08: FLD float ptr [EAX + 0xa4]
// 0041df0e: FMUL ST1
// 0041df10: FLD float ptr [EAX + 0xa8]
// 0041df16: FMUL ST2
// 0041df18: FLD float ptr [EAX + 0xac]
// 0041df1e: FCHS
// 0041df20: FMULP ST3
// 0041df22: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 0041df26: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0041df2a: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041df2e: PUSH EDX
// 0041df2f: FXCH
// 0041df31: FSTP float ptr [EAX + 0x220]
// 0041df37: PUSH ECX
// 0041df38: FSTP float ptr [EAX + 0x224]
// 0041df3e: PUSH EAX
// 0041df3f: FSTP float ptr [EAX + 0x228]
// 0041df45: CALL core_box.cpp_CBox_updateTransform_FUN_0041e0e0
//   XREF to: 0041e0e0 (UNCONDITIONAL_CALL)
// 0041df4a: ADD ESP,0x10
// 0041df4d: RET
