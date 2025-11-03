// Name: core_turret.cpp_CTurret_FUN_005e2320
// Address: 005e2320
// Address Range: [[005e2320, 005e240d]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e2320(CTurret * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e2320(CTurret *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float animation_frame;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int in_stack_00000008;
  CDemonRenderer *pCStack0000000c;
  float fStack00000028;
  float fStack_1c;
  CTurret *pCStack_18;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base_weapon).base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffdc);
  pCStack_18 = (CTurret *)0x5e2349;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    pCStack_18 = this_ptr;
    fStack_1c = 8.645221e-39;
    animation_frame = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
    pCStack_18 = (CTurret *)0x5e2379;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&(this_ptr->base_weapon).model,animation_frame,unaff_EBP);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (iVar1 != 0) {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc));
    if (0 < pCVar2->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&(this_ptr->base_weapon).base_actor.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)this_ptr->field1_0x578,(CVector3i *)0x0);
      fStack00000028 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc),fStack00000028,
                 in_stack_00000008);
      pCStack0000000c = g_CDemonRendererPtr;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      return iVar1;
    }
  }
  return iVar1;
}


// Assembly code:
// 005e2320: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e2320
// 005e2321: PUSH ESI
// 005e2322: PUSH EBP
// 005e2323: SUB ESP,0x1c
// 005e2326: MOV EBX,dword ptr [ESP + 0x2c]
// 005e232a: PUSH EBX
// 005e232b: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005e2330: ADD ESP,0x4
// 005e2333: MOV ESI,ESP
// 005e2335: PUSH ESI
// 005e2336: MOV EAX,dword ptr [EBX + 0x154]
// 005e233c: PUSH EBX
// 005e233d: CALL dword ptr [EAX + 0x14]
// 005e2340: ADD ESP,0x8
// 005e2343: PUSH EAX
// 005e2344: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005e2349: ADD ESP,0x4
// 005e234c: MOV ESI,EAX
// 005e234e: TEST EAX,EAX
// 005e2350: JZ 0x005e237c
//   XREF to: 005e237c (CONDITIONAL_JUMP)
// 005e2352: PUSH -0x1
// 005e2354: PUSH 0x0
// 005e2356: PUSH EBX
// 005e2357: CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
//   XREF to: 005e2b30 (UNCONDITIONAL_CALL)
// 005e235c: MOV dword ptr [ESP + 0x24],EAX
// 005e2360: FLD float ptr [ESP + 0x24]
// 005e2364: ADD ESP,0x8
// 005e2367: SUB ESP,0x4
// 005e236a: LEA EAX,[EBX + 0x158]
// 005e2370: FSTP float ptr [ESP]
// 005e2373: PUSH EAX
// 005e2374: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005e2379: ADD ESP,0xc
// 005e237c: PUSH EBX
//   Label: LAB_005e237c
// 005e237d: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005e2382: ADD ESP,0x4
// 005e2385: TEST ESI,ESI
// 005e2387: JNZ 0x005e2392
//   XREF to: 005e2392 (CONDITIONAL_JUMP)
// 005e2389: MOV EAX,ESI
//   Label: LAB_005e2389
// 005e238b: ADD ESP,0x1c
// 005e238e: POP EBP
// 005e238f: POP ESI
// 005e2390: POP EBX
// 005e2391: RET
// 005e2392: LEA EAX,[EBX + 0x584]
//   Label: LAB_005e2392
// 005e2398: PUSH EAX
// 005e2399: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e239e: MOV EDX,dword ptr [EAX + 0x110]
// 005e23a4: ADD ESP,0x4
// 005e23a7: CMP EDX,0x1
// 005e23aa: JL 0x005e2389
//   XREF to: 005e2389 (CONDITIONAL_JUMP)
// 005e23ac: PUSH EDI
// 005e23ad: LEA EAX,[EBX + 0x20]
// 005e23b0: PUSH EAX
// 005e23b1: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e23b7: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e23b8: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005e23bd: ADD ESP,0x8
// 005e23c0: PUSH 0x0
// 005e23c2: LEA EAX,[EBX + 0x578]
// 005e23c8: PUSH EAX
// 005e23c9: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e23cf: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005e23d0: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005e23d5: ADD ESP,0xc
// 005e23d8: PUSH -0x1
// 005e23da: PUSH 0x1
// 005e23dc: PUSH EBX
// 005e23dd: CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
//   XREF to: 005e2b30 (UNCONDITIONAL_CALL)
// 005e23e2: MOV dword ptr [ESP + 0x28],EAX
// 005e23e6: FLD float ptr [ESP + 0x28]
// 005e23ea: ADD ESP,0x8
// 005e23ed: SUB ESP,0x4
// 005e23f0: ADD EBX,0x584
// 005e23f6: FSTP float ptr [ESP]
// 005e23f9: PUSH EBX
// 005e23fa: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005e23ff: ADD ESP,0xc
// 005e2402: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e2408: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005e2409: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
