// Name: core_mimic.cpp_FUN_005205f0
// Address: 005205f0
// Address Range: [[005205f0, 005207fe] [00520802, 0052084b]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_005205f0()
// Cross-references:
//   core_mimic.cpp_FUN_00520870 (00520870) at 00520881 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02c6d590
//   int g_RelativeX
//   int g_LightDirectionX
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02f33378
//   undefined4 DAT_02f43978
//   undefined4 g_CStrangerClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_0042a420
//   core_cloth.cpp_FUN_0043bae0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_morph.cpp_CMorphModel_FUN_0052bae0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052e700
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_matrix.c_matrixPush_FUN_0050d620

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_005205f0(undefined4 param_1) */

int core_mimic_cpp_FUN_005205f0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  CCharacter *in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff40;
  CBoundingBox3D local_64;
  undefined1 local_4c [16];
  float local_3c;
  float local_38;
  CMatrix3x3f local_34;
  
  bVar4 = 0;
  if (*(int *)in_stack_00000004->field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
    this_ptr = (*((in_stack_00000004->base_actor).vtable)->getBoundingBox)
                         (&in_stack_00000004->base_actor,&local_64);
    local_34.m[2].x = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (local_34.m[2].x != 0.0) {
      if (*(float *)(in_stack_00000004[6].cloth_data + 0x2ae0) < 0.0) {
        local_34.m[2].y = (float)g_CDemonRendererPtr->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
                  (g_CDemonRendererPtr,(uint)(local_34.m[2].y == 0.0));
        engine_matrix_c_matrixPush_FUN_0050d620();
        g_RelativeX = -g_RelativeX;
        g_LightDirectionX = -g_LightDirectionX;
        g_TransformMatrix.m[0][0] = -g_TransformMatrix.m[0][0];
        g_TransformMatrix.m[0][1] = -g_TransformMatrix.m[0][1];
        g_TransformMatrix.m[0][2] = -g_TransformMatrix.m[0][2];
        core_skeleton_cpp_CDeformableModelInstance_FUN_005a0150(&in_stack_00000004->model);
        core_cloth_cpp_FUN_0043bae0();
        local_34.m[2].z =
             (float)core_actor_cpp_castToClassHash_FUN_0040c790
                              ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                               g_CStrangerClassInfo.name_hash);
        if ((CDemonActor *)local_34.m[2].z != (CDemonActor *)0x0) {
          local_34.m[1].x = 0.0;
          local_34.m[1].z = 0.0;
          local_3c = 0.71933335;
          local_4c._12_4_ = 0.0;
          local_34.m[1].y = 3.1415927;
          local_38 = 0.185;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                    ((CMatrix3x4f *)&stack0xffffff3c,(CVector3f *)(local_4c + 0xc),local_34.m + 1);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)&stack0xffffff3c,
                     (CMatrix3x4f *)
                     ((in_stack_00000004->model).field3_0x508 + DAT_02f33378 * 0x30 + 0x978),
                     in_stack_ffffff40);
          puVar2 = (undefined4 *)&stack0xffffff0c;
          puVar3 = (undefined4 *)&stack0xffffff6c;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          core_xform_cpp_getTranslation_FUN_005f6110
                    ((CVector3f *)&stack0xffffff6c,(CMatrix3x4f *)local_4c);
          core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)&stack0xffffff6c,&local_34);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,(CVector3i *)&local_34,(CVector3i *)local_4c);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    ((CKeyFramedModelInstance *)
                     &(((CDemonActor *)((int)local_34.m[2].z + 0x1fbf0))->field12_0xe0).z,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        }
        core_charactr_cpp_CCharacter_FUN_0042a420(in_stack_00000004);
        if ((DAT_02f43978 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr)
           , iVar1 == 0)) {
          core_motion_cpp_CMotionController_FUN_0052e700
                    (&(in_stack_00000004->model).motion_controller);
          core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(in_stack_00000004->model).motion_controller);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
                  (g_CDemonRendererPtr,(int)local_34.m[2].y);
      }
      else {
        core_morph_cpp_CMorphModel_FUN_0052bae0
                  ((CMorphModel *)(in_stack_00000004[6].cloth_data + 0x1eb4));
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
    return (int)local_34.m[2].x;
  }
  return 0;
}


// Assembly code:
// 005205f0: PUSH EBX
//   Label: core_mimic.cpp_FUN_005205f0
// 005205f1: PUSH ESI
// 005205f2: PUSH EDI
// 005205f3: PUSH EBP
// 005205f4: MOV EBP,ESP
// 005205f6: SUB ESP,0xe4
// 005205fc: SUB EBP,0x7e
// 005205ff: MOV EBX,dword ptr [EBP + 0x92]
// 00520605: CMP dword ptr [EBX + 0x240c],0x0
// 0052060c: JZ 0x00520618
//   XREF to: 00520618 (CONDITIONAL_JUMP)
// 0052060e: XOR EAX,EAX
// 00520610: LEA ESP,[EBP + 0x7e]
// 00520613: POP EBP
// 00520614: POP EDI
// 00520615: POP ESI
// 00520616: POP EBX
// 00520617: RET
// 00520618: PUSH EBX
//   Label: LAB_00520618
// 00520619: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0052061e: ADD ESP,0x4
// 00520621: LEA EAX,[EBP + 0x2a]
// 00520624: PUSH EAX
// 00520625: MOV ESI,dword ptr [EBX + 0x154]
// 0052062b: PUSH EBX
// 0052062c: CALL dword ptr [ESI + 0x14]
// 0052062f: ADD ESP,0x8
// 00520632: PUSH EAX
// 00520633: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00520638: ADD ESP,0x4
// 0052063b: MOV dword ptr [EBP + 0x72],EAX
// 0052063e: TEST EAX,EAX
// 00520640: JZ 0x00520666
//   XREF to: 00520666 (CONDITIONAL_JUMP)
// 00520642: FLD float ptr [EBX + 0x4ca50]
// 00520648: FLDZ
// 0052064a: FCOMPP
// 0052064c: FNSTSW AX
// 0052064e: SAHF
// 0052064f: JA 0x0052067a
//   XREF to: 0052067a (CONDITIONAL_JUMP)
// 00520651: LEA EAX,[EBX + 0x4be24]
// 00520657: PUSH dword ptr [EBX + 0x4ca50]
// 0052065d: PUSH EAX
// 0052065e: CALL core_morph.cpp_CMorphModel_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 00520663: ADD ESP,0x8
//   Label: LAB_00520663
// 00520666: PUSH EBX
//   Label: LAB_00520666
// 00520667: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0052066c: MOV EAX,dword ptr [EBP + 0x72]
// 0052066f: ADD ESP,0x4
// 00520672: LEA ESP,[EBP + 0x7e]
// 00520675: POP EBP
// 00520676: POP EDI
// 00520677: POP ESI
// 00520678: POP EBX
// 00520679: RET
// 0052067a: MOV EAX,[0x006703ec]
//   Label: LAB_0052067a
//   XREF to: 006703ec (READ)
// 0052067f: MOV EAX,dword ptr [EAX + 0x18]
//   XREF to: 02c6d590 (READ)
// 00520682: MOV dword ptr [EBP + 0x76],EAX
// 00520685: TEST EAX,EAX
// 00520687: SETZ AL
// 0052068a: AND EAX,0xff
// 0052068f: PUSH EAX
// 00520690: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00520696: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00520697: CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   XREF to: 0048ce10 (UNCONDITIONAL_CALL)
// 0052069c: ADD ESP,0x8
// 0052069f: CALL engine_matrix.c_matrixPush_FUN_0050d620
//   XREF to: 0050d620 (UNCONDITIONAL_CALL)
// 005206a4: PUSH 0x0
// 005206a6: MOV ESI,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 005206ac: MOV EDI,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 005206b2: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 005206b7: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 005206bd: MOV ECX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 005206c3: PUSH 0x1
// 005206c5: NEG ESI
// 005206c7: NEG EDI
// 005206c9: NEG EAX
// 005206cb: NEG EDX
// 005206cd: NEG ECX
// 005206cf: PUSH -0x1
// 005206d1: MOV dword ptr [0x02d052b8],ESI
//   XREF to: 02d052b8 (WRITE)
// 005206d7: MOV [0x02d052e8],EAX
//   XREF to: 02d052e8 (WRITE)
// 005206dc: PUSH -0x1
// 005206de: LEA EAX,[EBX + 0x158]
// 005206e4: MOV dword ptr [0x02d052dc],EDI
//   XREF to: 02d052dc (WRITE)
// 005206ea: PUSH EAX
// 005206eb: MOV dword ptr [0x02d052ec],EDX
//   XREF to: 02d052ec (WRITE)
// 005206f1: MOV dword ptr [0x02d052f0],ECX
//   XREF to: 02d052f0 (WRITE)
// 005206f7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 005206fc: ADD ESP,0x14
// 005206ff: PUSH 0x0
// 00520701: LEA EAX,[EBX + 0xbf84]
// 00520707: PUSH EAX
// 00520708: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 0052070d: ADD ESP,0x8
// 00520710: MOV ESI,dword ptr [0x03f6bb60]
//   XREF to: 03f6bb60 (READ)
// 00520716: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0052071b: PUSH ESI
// 0052071c: MOV EDI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00520723: PUSH EDI
// 00520724: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00520729: MOV dword ptr [EBP + 0x7a],EAX
// 0052072c: ADD ESP,0x8
// 0052072f: TEST EAX,EAX
// 00520731: JZ 0x00520802
//   XREF to: 00520802 (CONDITIONAL_JUMP)
// 00520737: MOV ESI,0x40490fdb
// 0052073c: XOR EDX,EDX
// 0052073e: LEA EAX,[EBP + 0x66]
// 00520741: MOV dword ptr [EBP + 0x66],EDX
// 00520744: PUSH EAX
// 00520745: MOV EAX,0x3f38263b
// 0052074a: MOV dword ptr [EBP + 0x6e],EDX
// 0052074d: MOV dword ptr [EBP + 0x52],EAX
// 00520750: LEA EAX,[EBP + 0x4e]
// 00520753: MOV dword ptr [EBP + 0x4e],EDX
// 00520756: PUSH EAX
// 00520757: LEA EAX,[EBP + -0x36]
// 0052075a: MOV EDX,0x3e3d70a4
// 0052075f: PUSH EAX
// 00520760: MOV dword ptr [EBP + 0x6a],ESI
// 00520763: MOV dword ptr [EBP + 0x56],EDX
// 00520766: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0052076b: MOV ESI,dword ptr [0x02f33378]
//   XREF to: 02f33378 (READ)
// 00520771: LEA EAX,[ESI*0x4 + 0x0]
// 00520778: SUB EAX,ESI
// 0052077a: MOV ESI,EAX
// 0052077c: SHL ESI,0x4
// 0052077f: LEA EAX,[EBX + 0xfd8]
// 00520785: ADD ESP,0xc
// 00520788: ADD EAX,ESI
// 0052078a: PUSH EAX
// 0052078b: LEA EAX,[EBP + -0x36]
// 0052078e: PUSH EAX
// 0052078f: LEA ESI,[EBP + -0x66]
// 00520792: LEA EDI,[EBP + -0x6]
// 00520795: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0052079a: ADD ESP,0x8
// 0052079d: LEA EAX,[EBP + 0x42]
// 005207a0: MOV ECX,0xc
// 005207a5: PUSH EAX
// 005207a6: LEA EAX,[EBP + -0x6]
// 005207a9: LEA ESI,[EBP + -0x66]
// 005207ac: PUSH EAX
// 005207ad: MOVSD.REP ES:EDI,ESI
// 005207af: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005207b4: ADD ESP,0x8
// 005207b7: LEA EAX,[EBP + 0x5a]
// 005207ba: PUSH EAX
// 005207bb: LEA EAX,[EBP + -0x6]
// 005207be: PUSH EAX
// 005207bf: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005207c4: ADD ESP,0x8
// 005207c7: LEA EAX,[EBP + 0x42]
// 005207ca: PUSH EAX
// 005207cb: LEA EAX,[EBP + 0x5a]
// 005207ce: PUSH EAX
// 005207cf: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005207d5: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005207d6: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005207db: ADD ESP,0xc
// 005207de: MOV EAX,dword ptr [EBP + 0x7a]
// 005207e1: PUSH -0x1
// 005207e3: ADD EAX,0x1fcd8
// 005207e8: PUSH 0x0
// 005207ea: PUSH EAX
// 005207eb: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005207f0: ADD ESP,0xc
// 005207f3: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005207f9: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005207fa: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00520802: PUSH EBX
//   Label: LAB_00520802
// 00520803: CALL core_charactr.cpp_CCharacter_FUN_0042a420
//   XREF to: 0042a420 (UNCONDITIONAL_CALL)
// 00520808: MOV EDI,dword ptr [0x02f43978]
//   XREF to: 02f43978 (READ)
// 0052080e: ADD ESP,0x4
// 00520811: TEST EDI,EDI
// 00520813: JZ 0x00520840
//   XREF to: 00520840 (CONDITIONAL_JUMP)
// 00520815: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052081a: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0052081b: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00520820: ADD ESP,0x4
// 00520823: TEST EAX,EAX
// 00520825: JNZ 0x00520840
//   XREF to: 00520840 (CONDITIONAL_JUMP)
// 00520827: PUSH EBX
// 00520828: LEA ESI,[EBX + 0x158]
// 0052082e: PUSH ESI
// 0052082f: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 00520834: ADD ESP,0x8
// 00520837: PUSH ESI
// 00520838: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052083d: ADD ESP,0x4
// 00520840: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_00520840
//   XREF to: 006703ec (READ)
// 00520846: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00520847: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
