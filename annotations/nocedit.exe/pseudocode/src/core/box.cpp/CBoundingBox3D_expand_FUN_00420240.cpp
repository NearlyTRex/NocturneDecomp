// Name: core_box.cpp_CBoundingBox3D_expand_FUN_00420240
// Address: 00420240
// Address Range: [[00420240, 004202ab]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
// Cross-references:
//   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 (00409270) at 00409314 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 0040952c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004272f0 (004272f0) at 00427344 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d63c [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 004434bc [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 (00454060) at 004542c9 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 (00478010) at 004780e1 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorph_getReady_FUN_0052b680 (0052b680) at 0052b745 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 (00572a10) at 00572b48 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e83a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0059038e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 (005a16c0) at 005a1758 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0 (0059d9e0) at 0059dafe [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8a62 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e2afb [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2dd3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6222 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516500 (00516500) at 00516548 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50 (00519b50) at 00519be8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_box_cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D *this_ptr,CVector3f *point)

{
  if (point->x < (this_ptr->min).x) {
    (this_ptr->min).x = point->x;
  }
  if ((this_ptr->max).x < point->x) {
    (this_ptr->max).x = point->x;
  }
  if (point->y < (this_ptr->min).y) {
    (this_ptr->min).y = point->y;
  }
  if ((this_ptr->max).y < point->y) {
    (this_ptr->max).y = point->y;
  }
  if (point->z < (this_ptr->min).z) {
    (this_ptr->min).z = point->z;
  }
  if (point->z <= (this_ptr->max).z) {
    return;
  }
  (this_ptr->max).z = point->z;
  return;
}


// Assembly code:
// 00420240: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: Stack[0x4] (READ)
// 00420244: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00420248: FLD float ptr [ECX]
// 0042024a: FCOMP float ptr [EDX]
// 0042024c: FNSTSW AX
// 0042024e: SAHF
// 0042024f: JC 0x0042029f
//   XREF to: 0042029f (CONDITIONAL_JUMP)
// 00420251: FLD float ptr [ECX]
//   Label: LAB_00420251
// 00420253: FCOMP float ptr [EDX + 0xc]
// 00420256: FNSTSW AX
// 00420258: SAHF
// 00420259: JBE 0x00420260
//   XREF to: 00420260 (CONDITIONAL_JUMP)
// 0042025b: MOV EAX,dword ptr [ECX]
// 0042025d: MOV dword ptr [EDX + 0xc],EAX
// 00420260: FLD float ptr [ECX + 0x4]
//   Label: LAB_00420260
// 00420263: FCOMP float ptr [EDX + 0x4]
// 00420266: FNSTSW AX
// 00420268: SAHF
// 00420269: JNC 0x00420271
//   XREF to: 00420271 (CONDITIONAL_JUMP)
// 0042026b: MOV EAX,dword ptr [ECX + 0x4]
// 0042026e: MOV dword ptr [EDX + 0x4],EAX
// 00420271: FLD float ptr [ECX + 0x4]
//   Label: LAB_00420271
// 00420274: FCOMP float ptr [EDX + 0x10]
// 00420277: FNSTSW AX
// 00420279: SAHF
// 0042027a: JBE 0x00420282
//   XREF to: 00420282 (CONDITIONAL_JUMP)
// 0042027c: MOV EAX,dword ptr [ECX + 0x4]
// 0042027f: MOV dword ptr [EDX + 0x10],EAX
// 00420282: FLD float ptr [ECX + 0x8]
//   Label: LAB_00420282
// 00420285: FCOMP float ptr [EDX + 0x8]
// 00420288: FNSTSW AX
// 0042028a: SAHF
// 0042028b: JNC 0x00420293
//   XREF to: 00420293 (CONDITIONAL_JUMP)
// 0042028d: MOV EAX,dword ptr [ECX + 0x8]
// 00420290: MOV dword ptr [EDX + 0x8],EAX
// 00420293: FLD float ptr [ECX + 0x8]
//   Label: LAB_00420293
// 00420296: FCOMP float ptr [EDX + 0x14]
// 00420299: FNSTSW AX
// 0042029b: SAHF
// 0042029c: JA 0x004202a5
//   XREF to: 004202a5 (CONDITIONAL_JUMP)
// 0042029e: RET
// 0042029f: MOV EAX,dword ptr [ECX]
//   Label: LAB_0042029f
// 004202a1: MOV dword ptr [EDX],EAX
// 004202a3: JMP 0x00420251
//   XREF to: 00420251 (UNCONDITIONAL_JUMP)
// 004202a5: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_004202a5
// 004202a8: MOV dword ptr [EDX + 0x14],EAX
// 004202ab: RET
