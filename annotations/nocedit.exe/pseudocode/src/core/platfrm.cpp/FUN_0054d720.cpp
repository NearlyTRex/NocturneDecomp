// Name: core_platfrm.cpp_FUN_0054d720
// Address: 0054d720
// Address Range: [[0054d720, 0054d9a1]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054d720()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054d720(undefined4 param_1) */

int core_platfrm_cpp_FUN_0054d720(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  float fStack_40;
  float in_stack_ffffffd0;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar3 != 0) && (in_stack_00000004[3].scale.z == 0)) {
    return 0;
  }
  if ((2 < *(int *)(in_stack_00000004[3].create_event + 0x40)) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    return 0;
  }
  if (((((*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) &&
        (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0)) &&
       (fVar1 = in_stack_00000004[2].location.position.y, fVar1 != 4.2039e-45)) &&
      ((fVar1 != 5.60519e-45 && (in_stack_00000004[5].was_created != 0)))) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  pCVar4 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffb8);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar4);
  if (iVar3 != 0) {
    if (in_stack_00000004[3].field17_0x104 != 0) {
      iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar5 != 0) {
        pCVar4 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffbc);
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar4,(int)in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8);
        goto LAB_0054d802;
      }
    }
    fStack_40 = 7.792242e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
LAB_0054d802:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  if (((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
      (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
      iVar5 == 0)) &&
     ((pCVar2 = *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c),
      in_stack_00000004 == pCVar2 && (*(char *)&pCVar2[2].orient_matrix.m[0].y == '\0')))) {
    in_stack_00000030 = (pCVar2->location).position.x;
    in_stack_00000034 = (pCVar2->location).position.y;
    in_stack_00000038 = (pCVar2->location).position.z;
    (pCVar2->location).position.x = (float)in_stack_00000004[2].field7_0x6c;
    (pCVar2->location).position.y = (float)in_stack_00000004[2].was_created;
    (pCVar2->location).position.z = in_stack_00000004[2].create_prob;
    pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CVector3f *)&stack0x00000018,
                        (CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
    if (&pCVar2->orient != (COrientation *)pCVar6) {
      (pCVar2->orient).pitch = pCVar6->x;
      (pCVar2->orient).bank = pCVar6->y;
      (pCVar2->orient).heading = pCVar6->z;
    }
    core_actor_cpp_renderActorBoundingBox_FUN_0040d940(in_stack_00000004,0xfa);
    (in_stack_00000004->location).position.x = *(float *)in_stack_00000004[2].create_event;
    (in_stack_00000004->location).position.y = *(float *)(in_stack_00000004[2].create_event + 4);
    (in_stack_00000004->location).position.z = *(float *)(in_stack_00000004[2].create_event + 8);
    pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CVector3f *)&stack0x0000002c,
                        (CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
    if (&in_stack_00000004->orient != (COrientation *)pCVar6) {
      (in_stack_00000004->orient).pitch = pCVar6->x;
      (in_stack_00000004->orient).bank = pCVar6->y;
      (in_stack_00000004->orient).heading = pCVar6->z;
    }
    core_actor_cpp_renderActorBoundingBox_FUN_0040d940(in_stack_00000004,0xf9);
    (in_stack_00000004->location).position.x = in_stack_00000040;
    (in_stack_00000004->location).position.y = in_stack_00000044;
    (in_stack_00000004->location).position.z = in_stack_00000048;
    if (&in_stack_00000004->orient != (COrientation *)&stack0x0000001c) {
      (in_stack_00000004->orient).pitch = in_stack_0000001c;
      (in_stack_00000004->orient).bank = in_stack_00000020;
      (in_stack_00000004->orient).heading = in_stack_00000024;
    }
  }
  return iVar3;
}


// Assembly code:
// 0054d720: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054d720
// 0054d721: PUSH ESI
// 0054d722: PUSH EDI
// 0054d723: SUB ESP,0x60
// 0054d726: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 0054d72a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0054d730: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0054d731: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054d736: ADD ESP,0x4
// 0054d739: TEST EAX,EAX
// 0054d73b: JZ 0x0054d74a
//   XREF to: 0054d74a (CONDITIONAL_JUMP)
// 0054d73d: CMP dword ptr [EBX + 0x518],0x0
// 0054d744: JZ 0x0054d963
//   XREF to: 0054d963 (CONDITIONAL_JUMP)
// 0054d74a: CMP dword ptr [EBX + 0x4c0],0x2
//   Label: LAB_0054d74a
// 0054d751: JG 0x0054d96c
//   XREF to: 0054d96c (CONDITIONAL_JUMP)
// 0054d757: CMP dword ptr [EBX + 0x4c8],0x0
//   Label: LAB_0054d757
// 0054d75e: JZ 0x0054d79c
//   XREF to: 0054d79c (CONDITIONAL_JUMP)
// 0054d760: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 0054d765: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 02f33744 (READ)
// 0054d768: TEST EAX,EAX
// 0054d76a: JNZ 0x0054d79c
//   XREF to: 0054d79c (CONDITIONAL_JUMP)
// 0054d76c: MOV EAX,dword ptr [EBX + 0x2d4]
// 0054d772: CMP EAX,0x3
// 0054d775: JZ 0x0054d79c
//   XREF to: 0054d79c (CONDITIONAL_JUMP)
// 0054d777: CMP EAX,0x4
// 0054d77a: JZ 0x0054d79c
//   XREF to: 0054d79c (CONDITIONAL_JUMP)
// 0054d77c: CMP dword ptr [EBX + 0x728],0x0
// 0054d783: JZ 0x0054d79c
//   XREF to: 0054d79c (CONDITIONAL_JUMP)
// 0054d785: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0054d78b: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0054d78c: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054d791: ADD ESP,0x4
// 0054d794: TEST EAX,EAX
// 0054d796: JZ 0x0054d95c
//   XREF to: 0054d95c (CONDITIONAL_JUMP)
// 0054d79c: PUSH EBX
//   Label: LAB_0054d79c
// 0054d79d: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0054d7a2: ADD ESP,0x4
// 0054d7a5: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x54] (DATA)
// 0054d7a9: PUSH EAX
// 0054d7aa: MOV EDX,dword ptr [EBX + 0x154]
// 0054d7b0: PUSH EBX
// 0054d7b1: CALL dword ptr [EDX + 0x14]
// 0054d7b4: ADD ESP,0x8
// 0054d7b7: PUSH EAX
// 0054d7b8: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0054d7bd: ADD ESP,0x4
// 0054d7c0: MOV EDI,EAX
// 0054d7c2: TEST EAX,EAX
// 0054d7c4: JZ 0x0054d802
//   XREF to: 0054d802 (CONDITIONAL_JUMP)
// 0054d7c6: CMP dword ptr [EBX + 0x50c],0x0
// 0054d7cd: JZ 0x0054d98a
//   XREF to: 0054d98a (CONDITIONAL_JUMP)
// 0054d7d3: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0054d7d8: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0054d7d9: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054d7de: ADD ESP,0x4
// 0054d7e1: TEST EAX,EAX
// 0054d7e3: JZ 0x0054d98a
//   XREF to: 0054d98a (CONDITIONAL_JUMP)
// 0054d7e9: MOV EAX,ESP
// 0054d7eb: PUSH EAX
// 0054d7ec: MOV EDX,dword ptr [EBX + 0x154]
// 0054d7f2: PUSH EBX
// 0054d7f3: CALL dword ptr [EDX + 0x14]
// 0054d7f6: ADD ESP,0x8
// 0054d7f9: PUSH EAX
// 0054d7fa: CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   XREF to: 004210b0 (UNCONDITIONAL_CALL)
// 0054d7ff: ADD ESP,0x4
// 0054d802: PUSH EBX
//   Label: LAB_0054d802
// 0054d803: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0054d808: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0054d80d: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 02f33744 (READ)
// 0054d810: ADD ESP,0x4
// 0054d813: TEST EDX,EDX
// 0054d815: JZ 0x0054d95a
//   XREF to: 0054d95a (CONDITIONAL_JUMP)
// 0054d81b: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0054d821: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0054d822: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054d827: ADD ESP,0x4
// 0054d82a: TEST EAX,EAX
// 0054d82c: JNZ 0x0054d95a
//   XREF to: 0054d95a (CONDITIONAL_JUMP)
// 0054d832: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 0054d837: MOV ESI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 0054d83a: CMP EBX,ESI
// 0054d83c: JNZ 0x0054d95a
//   XREF to: 0054d95a (CONDITIONAL_JUMP)
// 0054d842: CMP byte ptr [ESI + 0x2f0],0x0
// 0054d849: JNZ 0x0054d95a
//   XREF to: 0054d95a (CONDITIONAL_JUMP)
// 0054d84f: LEA EDX,[ESI + 0x20]
// 0054d852: MOV EAX,dword ptr [EDX]
// 0054d854: MOV dword ptr [ESP + 0x54],EAX
// 0054d858: LEA EAX,[EDX + 0x4]
// 0054d85b: MOV EAX,dword ptr [EAX]
// 0054d85d: MOV dword ptr [ESP + 0x58],EAX
// 0054d861: LEA EAX,[EDX + 0x8]
// 0054d864: MOV EAX,dword ptr [EAX]
// 0054d866: MOV dword ptr [ESP + 0x5c],EAX
// 0054d86a: MOV EAX,dword ptr [ESI + 0x30]
// 0054d86d: ADD ESI,0x30
// 0054d870: MOV dword ptr [ESP + 0x30],EAX
// 0054d874: LEA EAX,[ESI + 0x4]
// 0054d877: MOV EAX,dword ptr [EAX]
// 0054d879: MOV dword ptr [ESP + 0x34],EAX
// 0054d87d: LEA EAX,[ESI + 0x8]
// 0054d880: MOV EAX,dword ptr [EAX]
// 0054d882: MOV dword ptr [ESP + 0x38],EAX
// 0054d886: LEA EAX,[EBX + 0x31c]
// 0054d88c: MOV ECX,dword ptr [EAX]
// 0054d88e: MOV dword ptr [EDX],ECX
// 0054d890: MOV ECX,dword ptr [EAX + 0x4]
// 0054d893: MOV dword ptr [EDX + 0x4],ECX
// 0054d896: FLD float ptr [EAX + 0x8]
// 0054d899: LEA EAX,[EBX + 0x334]
// 0054d89f: PUSH EAX
// 0054d8a0: LEA EAX,[ESP + 0x40]
// 0054d8a4: PUSH EAX
// 0054d8a5: FSTP float ptr [EDX + 0x8]
// 0054d8a8: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054d8ad: ADD ESP,0x8
// 0054d8b0: CMP ESI,EAX
// 0054d8b2: JZ 0x0054d8c4
//   XREF to: 0054d8c4 (CONDITIONAL_JUMP)
// 0054d8b4: MOV EDX,dword ptr [EAX]
// 0054d8b6: MOV dword ptr [ESI],EDX
// 0054d8b8: MOV EDX,dword ptr [EAX + 0x4]
// 0054d8bb: MOV dword ptr [ESI + 0x4],EDX
// 0054d8be: MOV EDX,dword ptr [EAX + 0x8]
// 0054d8c1: MOV dword ptr [ESI + 0x8],EDX
// 0054d8c4: PUSH 0xfa
//   Label: LAB_0054d8c4
// 0054d8c9: PUSH EBX
// 0054d8ca: CALL core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 0054d8cf: LEA EDX,[EBX + 0x20]
// 0054d8d2: LEA EAX,[EBX + 0x328]
// 0054d8d8: ADD ESP,0x8
// 0054d8db: MOV ECX,dword ptr [EAX]
// 0054d8dd: MOV dword ptr [EDX],ECX
// 0054d8df: MOV ECX,dword ptr [EAX + 0x4]
// 0054d8e2: MOV dword ptr [EDX + 0x4],ECX
// 0054d8e5: FLD float ptr [EAX + 0x8]
// 0054d8e8: LEA EAX,[EBX + 0x344]
// 0054d8ee: PUSH EAX
// 0054d8ef: LEA EAX,[ESP + 0x4c]
// 0054d8f3: PUSH EAX
// 0054d8f4: FSTP float ptr [EDX + 0x8]
// 0054d8f7: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054d8fc: LEA EDX,[EBX + 0x30]
// 0054d8ff: ADD ESP,0x8
// 0054d902: CMP EDX,EAX
// 0054d904: JZ 0x0054d916
//   XREF to: 0054d916 (CONDITIONAL_JUMP)
// 0054d906: MOV ECX,dword ptr [EAX]
// 0054d908: MOV dword ptr [EDX],ECX
// 0054d90a: MOV ECX,dword ptr [EAX + 0x4]
// 0054d90d: MOV dword ptr [EDX + 0x4],ECX
// 0054d910: MOV ECX,dword ptr [EAX + 0x8]
// 0054d913: MOV dword ptr [EDX + 0x8],ECX
// 0054d916: PUSH 0xf9
//   Label: LAB_0054d916
// 0054d91b: PUSH EBX
// 0054d91c: CALL core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 0054d921: ADD ESP,0x8
// 0054d924: LEA EDX,[EBX + 0x20]
// 0054d927: MOV EAX,dword ptr [ESP + 0x54]
// 0054d92b: MOV dword ptr [EDX],EAX
// 0054d92d: MOV EAX,dword ptr [ESP + 0x58]
// 0054d931: MOV dword ptr [EDX + 0x4],EAX
// 0054d934: MOV EAX,dword ptr [ESP + 0x5c]
// 0054d938: ADD EBX,0x30
// 0054d93b: MOV dword ptr [EDX + 0x8],EAX
// 0054d93e: LEA EAX,[ESP + 0x30]
// 0054d942: CMP EBX,EAX
// 0054d944: JZ 0x0054d95a
//   XREF to: 0054d95a (CONDITIONAL_JUMP)
// 0054d946: MOV EAX,dword ptr [ESP + 0x30]
// 0054d94a: MOV dword ptr [EBX],EAX
// 0054d94c: MOV EAX,dword ptr [ESP + 0x34]
// 0054d950: MOV dword ptr [EBX + 0x4],EAX
// 0054d953: MOV EAX,dword ptr [ESP + 0x38]
// 0054d957: MOV dword ptr [EBX + 0x8],EAX
// 0054d95a: MOV EAX,EDI
//   Label: LAB_0054d95a
// 0054d95c: ADD ESP,0x60
//   Label: LAB_0054d95c
// 0054d95f: POP EDI
// 0054d960: POP ESI
// 0054d961: POP EBX
// 0054d962: RET
// 0054d963: XOR EAX,EAX
//   Label: LAB_0054d963
// 0054d965: ADD ESP,0x60
// 0054d968: POP EDI
// 0054d969: POP ESI
// 0054d96a: POP EBX
// 0054d96b: RET
// 0054d96c: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_0054d96c
//   XREF to: 006703ec (READ)
// 0054d972: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0054d973: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054d978: ADD ESP,0x4
// 0054d97b: TEST EAX,EAX
// 0054d97d: JNZ 0x0054d757
//   XREF to: 0054d757 (CONDITIONAL_JUMP)
// 0054d983: ADD ESP,0x60
// 0054d986: POP EDI
// 0054d987: POP ESI
// 0054d988: POP EBX
// 0054d989: RET
// 0054d98a: PUSH -0x1
//   Label: LAB_0054d98a
// 0054d98c: LEA EAX,[EBX + 0x158]
// 0054d992: PUSH 0x0
// 0054d994: PUSH EAX
// 0054d995: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0054d99a: ADD ESP,0xc
// 0054d99d: JMP 0x0054d802
//   XREF to: 0054d802 (UNCONDITIONAL_JUMP)
