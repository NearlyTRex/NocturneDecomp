// Name: core_batman.cpp_CBatman_renderOpaque_FUN_004173b0
// Address: 004173b0
// Address Range: [[004173b0, 0041757e]]
// Convention: __cdecl
// Signature: int core_batman.cpp_CBatman_renderOpaque_FUN_004173b0(CBatman * this_ptr)
// Globals:
//   double DOUBLE_006158ed = 0.5
//   undefined4 DAT_0065a778
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_motion.cpp_CMotionController_render_FUN_0052e700
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_004173b0(CBatman *this_ptr)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  undefined4 unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float fStack_20;
  undefined8 uVar3;
  float fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
  }
  if (((this_ptr->mist_state != 2) &&
      (((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
        iVar2 == 0 || (this_ptr->mist_state == 0)) && (iVar1 == 0)))) &&
     (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)&fStack_20);
    fStack_20 = 6.010999e-39;
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      iVar2 = this_ptr->mist_state;
      (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\x01';
      (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
      (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
      (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
      }
      else {
        if (iVar2 == 1) {
          fVar4 = (1.0 - this_ptr->vanish_timer) / DAT_0065a778;
        }
        else {
          fVar4 = ((float)DOUBLE_006158ed - this_ptr->vanish_timer) / DAT_0065a778;
          if (fVar4 < 0.0) {
            fVar4 = 0.0;
          }
        }
        if (0.0 < fVar4) {
          fStack_20 = 6.011244e-39;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
                    (g_CDemonRendererPtr,unaff_ESI);
          engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
                    (g_CDemonRendererPtr,1);
          if ((double)CONCAT44(unaff_EBX,unaff_ESI) <= DOUBLE_006158ed) {
            uVar3._0_4_ = 8.61799e-43;
            uVar3._4_4_ = 1.4013e-45;
          }
          else {
            uVar3._0_4_ = 1.04116e-42;
            uVar3._4_4_ = 1.4013e-45;
          }
          fStack_20 = 6.01135e-39;
          core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                    (&(this_ptr->base_enemy).base_character.model,-1,(uint)(float)uVar3,
                     (int)SUB84(uVar3,4),0);
          engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
        }
      }
      if ((DAT_02f43978 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
         iVar2 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,
                   (CDemonActor *)this_ptr);
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 004173b0: PUSH EBX
//   Label: core_batman.cpp_CBatman_renderOpaque_FUN_004173b0
// 004173b1: PUSH ESI
// 004173b2: PUSH EDI
// 004173b3: PUSH EBP
// 004173b4: MOV EBP,ESP
// 004173b6: SUB ESP,0x24
// 004173b9: AND ESP,0xfffffff8
// 004173bc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004173bf: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004173c5: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004173c6: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 004173cb: ADD ESP,0x4
// 004173ce: MOV ESI,EAX
// 004173d0: TEST EAX,EAX
// 004173d2: JZ 0x004173e6
//   XREF to: 004173e6 (CONDITIONAL_JUMP)
// 004173d4: CMP dword ptr [EBX + 0xbf58],0x2
//   Label: LAB_004173d4
// 004173db: JNZ 0x004173ee
//   XREF to: 004173ee (CONDITIONAL_JUMP)
// 004173dd: XOR EAX,EAX
//   Label: LAB_004173dd
// 004173df: MOV ESP,EBP
// 004173e1: POP EBP
// 004173e2: POP EDI
// 004173e3: POP ESI
// 004173e4: POP EBX
// 004173e5: RET
// 004173e6: MOV dword ptr [EBX + 0x2620],EAX
//   Label: LAB_004173e6
// 004173ec: JMP 0x004173d4
//   XREF to: 004173d4 (UNCONDITIONAL_JUMP)
// 004173ee: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_004173ee
//   XREF to: 006703ec (READ)
// 004173f4: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004173f5: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004173fa: ADD ESP,0x4
// 004173fd: TEST EAX,EAX
// 004173ff: JZ 0x0041740a
//   XREF to: 0041740a (CONDITIONAL_JUMP)
// 00417401: CMP dword ptr [EBX + 0xbf58],0x0
// 00417408: JNZ 0x004173dd
//   XREF to: 004173dd (CONDITIONAL_JUMP)
// 0041740a: TEST ESI,ESI
//   Label: LAB_0041740a
// 0041740c: JNZ 0x004173dd
//   XREF to: 004173dd (CONDITIONAL_JUMP)
// 0041740e: CMP dword ptr [EBX + 0x240c],0x0
// 00417415: JNZ 0x004173dd
//   XREF to: 004173dd (CONDITIONAL_JUMP)
// 00417417: PUSH EBX
// 00417418: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0041741d: ADD ESP,0x4
// 00417420: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 00417424: PUSH EDX
// 00417425: MOV EAX,dword ptr [EBX + 0x154]
// 0041742b: PUSH EBX
// 0041742c: CALL dword ptr [EAX + 0x14]
// 0041742f: ADD ESP,0x8
// 00417432: PUSH EAX
// 00417433: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00417438: ADD ESP,0x4
// 0041743b: MOV ESI,EAX
// 0041743d: TEST EAX,EAX
// 0041743f: JZ 0x00417497
//   XREF to: 00417497 (CONDITIONAL_JUMP)
// 00417441: MOV ECX,dword ptr [EBX + 0xbf58]
// 00417447: MOV dword ptr [EBX + 0x2620],0x1
// 00417451: TEST ECX,ECX
// 00417453: JNZ 0x004174a9
//   XREF to: 004174a9 (CONDITIONAL_JUMP)
// 00417455: PUSH EBX
// 00417456: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 0041745b: ADD ESP,0x4
//   Label: LAB_0041745b
// 0041745e: CMP dword ptr [0x02f43978],0x0
//   Label: LAB_0041745e
//   XREF to: 02f43978 (READ)
// 00417465: JZ 0x00417497
//   XREF to: 00417497 (CONDITIONAL_JUMP)
// 00417467: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0041746d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0041746e: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00417473: ADD ESP,0x4
// 00417476: TEST EAX,EAX
// 00417478: JNZ 0x00417497
//   XREF to: 00417497 (CONDITIONAL_JUMP)
// 0041747a: PUSH EBX
// 0041747b: LEA EAX,[EBX + 0x158]
// 00417481: PUSH EAX
// 00417482: CALL core_motion.cpp_CMotionController_render_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 00417487: ADD ESP,0x8
// 0041748a: MOV EAX,dword ptr [EBX + 0x154]
// 00417490: PUSH EBX
// 00417491: CALL dword ptr [EAX + 0x50]
// 00417494: ADD ESP,0x4
// 00417497: PUSH EBX
//   Label: LAB_00417497
// 00417498: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0041749d: ADD ESP,0x4
// 004174a0: MOV EAX,ESI
// 004174a2: MOV ESP,EBP
// 004174a4: POP EBP
// 004174a5: POP EDI
// 004174a6: POP ESI
// 004174a7: POP EBX
// 004174a8: RET
// 004174a9: CMP ECX,0x1
//   Label: LAB_004174a9
// 004174ac: JNZ 0x00417546
//   XREF to: 00417546 (CONDITIONAL_JUMP)
// 004174b2: FLD float ptr [EBX + 0xbf5c]
// 004174b8: FLD1
// 004174ba: FSUBRP
// 004174bc: FDIV float ptr [0x0065a778]
//   XREF to: 0065a778 (READ)
// 004174c2: FSTP float ptr [ESP + 0x8]
// 004174c6: FLD float ptr [ESP + 0x8]
//   Label: LAB_004174c6
// 004174ca: FLDZ
// 004174cc: FXCH
// 004174ce: FSTP double ptr [ESP]
// 004174d1: FCOMP double ptr [ESP]
// 004174d4: FNSTSW AX
// 004174d6: SAHF
// 004174d7: JNC 0x0041745e
//   XREF to: 0041745e (CONDITIONAL_JUMP)
// 004174d9: PUSH 0x0
// 004174db: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004174e1: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004174e2: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004174e7: ADD ESP,0x8
// 004174ea: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004174f0: PUSH dword ptr [ESP + 0x8]
// 004174f4: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004174f5: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
//   XREF to: 0048ca70 (UNCONDITIONAL_CALL)
// 004174fa: ADD ESP,0x8
// 004174fd: PUSH 0x1
// 004174ff: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00417505: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00417506: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 0041750b: ADD ESP,0x8
// 0041750e: LEA EDX,[EBX + 0x158]
// 00417514: FLD double ptr [ESP]
// 00417517: FCOMP double ptr [0x006158ed]
//   XREF to: 006158ed (READ)
// 0041751d: FNSTSW AX
// 0041751f: SAHF
// 00417520: JBE 0x00417574
//   XREF to: 00417574 (CONDITIONAL_JUMP)
// 00417522: PUSH 0x0
// 00417524: PUSH 0x1
// 00417526: PUSH 0x2e7
// 0041752b: PUSH -0x1
//   Label: LAB_0041752b
// 0041752d: PUSH EDX
// 0041752e: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 00417533: ADD ESP,0x14
// 00417536: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0041753b: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0041753c: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 00417541: JMP 0x0041745b
//   XREF to: 0041745b (UNCONDITIONAL_JUMP)
// 00417546: FLD float ptr [EBX + 0xbf5c]
//   Label: LAB_00417546
// 0041754c: FSUBR double ptr [0x006158ed]
//   XREF to: 006158ed (READ)
// 00417552: FDIV float ptr [0x0065a778]
//   XREF to: 0065a778 (READ)
// 00417558: FST float ptr [ESP + 0x8]
// 0041755c: FLDZ
// 0041755e: FCOMPP
// 00417560: FNSTSW AX
// 00417562: SAHF
// 00417563: JBE 0x004174c6
//   XREF to: 004174c6 (CONDITIONAL_JUMP)
// 00417569: XOR EAX,EAX
// 0041756b: MOV dword ptr [ESP + 0x8],EAX
// 0041756f: JMP 0x004174c6
//   XREF to: 004174c6 (UNCONDITIONAL_JUMP)
// 00417574: PUSH 0x0
//   Label: LAB_00417574
// 00417576: PUSH 0x1
// 00417578: PUSH 0x267
// 0041757d: JMP 0x0041752b
//   XREF to: 0041752b (UNCONDITIONAL_JUMP)
