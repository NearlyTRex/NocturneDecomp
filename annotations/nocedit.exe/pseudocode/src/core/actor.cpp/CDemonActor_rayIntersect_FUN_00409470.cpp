// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
// Address: 00409470
// Address Range: [[00409470, 0040983a]]
// Convention: __cdecl
// Signature: float core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_hit_normal, SCollisionInfo * collision_info, int bbox_type, CBoundingBox3D * ray_bbox)
// Cross-references:
//   core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0 (004093f0) at 0040944c [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 (00572a10) at 00572c8e [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8d29 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613840
//   TerminatedCString s_CDemonActor_rayIntersect_00613852
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03273954
//   int g_DeformableModelRayHitPartIndex
//   CVector3f g_DeformableModelRayHitNormal
//   undefined4 g_DeformableModelRayHitNormal.y
//   undefined4 g_DeformableModelRayHitNormal.z
//   int g_DeformableModelRayHitLodIndex
//   int g_DeformableModelRayHitTriangleIndex
// Function calls:
//   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_rayCylinderIntersect_FUN_00408340
//   core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a10e0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_FUN_0059dca0

#include "nocturne.h"

float __cdecl
core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
          (CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_hit_normal,SCollisionInfo *collision_info,int bbox_type,
          CBoundingBox3D *ray_bbox)

{
  CDemonSet *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  float fVar3;
  CVector3f *pCVar4;
  CKeyFramedModel *this_ptr_01;
  BADSPACEBASE *in_ESP;
  CVector3f *ray_origin_00;
  undefined1 *frame_index;
  CVector3f *pCVar5;
  CVector3f *in_stack_ffffff5c;
  undefined1 local_9c [12];
  undefined8 uStack_90;
  float fStack_88;
  float local_84;
  undefined1 auStack_74 [16];
  float local_64;
  float local_60;
  CVector3f local_5c;
  undefined1 local_48 [8];
  CVector3f local_40;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
            (this_ptr,(CBoundingBox3D *)local_9c,collision_info,bbox_type);
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if ((CVector3f *)(auStack_74 + 0xc) != ray_origin) {
      auStack_74._12_4_ = ray_origin->x;
      local_64 = ray_origin->y;
      local_60 = ray_origin->z;
    }
    if (&local_5c != ray_origin) {
      local_5c.x = ray_origin->x;
      local_5c.y = ray_origin->y;
      local_5c.z = ray_origin->z;
    }
    local_48._4_4_ = ray_origin->x + ray_direction->x;
    local_40.x = ray_origin->y + ray_direction->y;
    local_40.y = ray_origin->z + ray_direction->z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240
              ((CBoundingBox3D *)(auStack_74 + 0xc),(CVector3f *)(local_48 + 4));
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                      ((CBoundingBox3D *)(auStack_74 + 0xc),(CBoundingBox3D *)(local_9c + 4));
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                      (ray_bbox,(CBoundingBox3D *)(local_9c + 4));
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (this_ptr,(CVector3f *)auStack_34,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (this_ptr,(CVector3f *)local_48,ray_direction);
  if ((uint)bbox_type < 2) {
    if (bbox_type != 1) {
LAB_004096d2:
      g_CurrentFilename = "..\\core\\actor.cpp";
      g_CurrentLineNumber = 0x45b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::rayIntersect - Invalid collision type!");
      goto LAB_004095c9;
    }
    pCVar5 = (CVector3f *)auStack_20;
    pCVar4 = (CVector3f *)(local_48 + 4);
    ray_origin_00 = (CVector3f *)(auStack_34 + 8);
    this_ptr_00 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)auStack_74);
    fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                      (this_ptr_00,ray_origin_00,pCVar4,pCVar5);
  }
  else if ((uint)bbox_type < 3) {
    fVar3 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      (collision_info,(CVector3f *)(auStack_34 + 8),(CVector3f *)(local_48 + 4),
                       (CVector3f *)auStack_20);
  }
  else {
    if (bbox_type != 3) goto LAB_004096d2;
    fVar3 = (*this_ptr->vtable->customRayIntersect)
                      (this_ptr,(CVector3f *)(auStack_34 + 8),(CVector3f *)(local_48 + 4),
                       (CVector3f *)auStack_20);
  }
  uStack_90 = (double)CONCAT44(fVar3,(float)uStack_90);
LAB_004095c9:
  local_9c._0_8_ = (undefined8)uStack_90._4_4_;
  if (((double)local_9c._0_8_ < 0.0) || (1.0 < (double)local_9c._0_8_)) {
    return 2.0;
  }
  out_hit_normal[1].y = -NAN;
  out_hit_normal[1].z = -NAN;
  out_hit_normal[2].x = -NAN;
  pCVar1 = g_CDemonSetPtr;
  out_hit_normal[1].x = -NAN;
  if (pCVar1->field71_0x15f6dc == 0) {
    if (collision_info->result_ptr == (void *)0x0) {
      if (collision_info->field9_0x24 != (void *)0x0) {
        pCVar5 = (CVector3f *)(auStack_20 + 4);
        pCVar4 = &local_40;
        frame_index = auStack_28;
        this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                ((CKeyFramedModelInstance *)collision_info->field9_0x24);
        local_84 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                             (this_ptr_01,(int)frame_index,pCVar4,pCVar5,in_stack_ffffff5c);
        local_9c._0_8_ = (undefined8)local_84;
        if ((double)local_9c._0_8_ < 0.0) {
          return 2.0;
        }
        if (1.0 < (double)local_9c._0_8_) {
          return 2.0;
        }
      }
    }
    else {
      fStack_88 = (float)core_skeleton_cpp_CDeformableModelInstance_FUN_005a10e0
                                   ((CDeformableModelInstance *)collision_info->result_ptr);
      uStack_90 = (double)fStack_88;
      if (uStack_90 < 0.0) {
        return 2.0;
      }
      if (1.0 < uStack_90) {
        return 2.0;
      }
      out_hit_normal[1].x = (float)g_DeformableModelRayHitPartIndex;
      out_hit_normal[1].y = (float)g_DeformableModelRayHitLodIndex;
      out_hit_normal[1].z = (float)g_DeformableModelRayHitTriangleIndex;
      core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                ((CDeformableModelInstance *)collision_info->result_ptr);
      fVar3 = (float)core_skeleton_cpp_FUN_0059dca0();
      out_hit_normal[2].x = fVar3;
    }
  }
  pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (this_ptr,(CVector3f *)&stack0xfffffff0,(CVector3f *)(auStack_20 + 4));
  if (out_hit_normal != pCVar4) {
    out_hit_normal->x = pCVar4->x;
    out_hit_normal->y = pCVar4->y;
    out_hit_normal->z = pCVar4->z;
  }
  return fStack_88;
}


// Assembly code:
// 00409470: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
// 00409471: PUSH ESI
// 00409472: PUSH EDI
// 00409473: PUSH EBP
// 00409474: MOV EBP,ESP
// 00409476: SUB ESP,0xa8
// 0040947c: AND ESP,0xfffffff8
// 0040947f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00409482: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00409485: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00409488: MOV EDX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0040948b: TEST EDX,EDX
// 0040948d: JNZ 0x004094a8
//   XREF to: 004094a8 (CONDITIONAL_JUMP)
// 0040948f: MOV dword ptr [ESP + 0xa0],0x40000000
//   Label: LAB_0040948f
//   XREF to: Stack[-0x18] (WRITE)
// 0040949a: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x18] (READ)
// 004094a1: MOV ESP,EBP
// 004094a3: POP EBP
// 004094a4: POP EDI
// 004094a5: POP ESI
// 004094a6: POP EBX
// 004094a7: RET
// 004094a8: PUSH EDX
//   Label: LAB_004094a8
// 004094a9: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004094ac: PUSH EAX
// 004094ad: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x9c] (DATA)
// 004094b1: PUSH EAX
// 004094b2: PUSH EDI
// 004094b3: CALL core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
//   XREF to: 00409270 (UNCONDITIONAL_CALL)
// 004094b8: ADD ESP,0x10
// 004094bb: MOV EDX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 004094be: TEST EDX,EDX
// 004094c0: JNZ 0x00409666
//   XREF to: 00409666 (CONDITIONAL_JUMP)
// 004094c6: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x6c] (DATA)
// 004094ca: MOV EDX,ESI
// 004094cc: CMP EAX,ESI
// 004094ce: JZ 0x004094e4
//   XREF to: 004094e4 (CONDITIONAL_JUMP)
// 004094d0: MOV EAX,dword ptr [ESI]
// 004094d2: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004094d6: MOV EAX,dword ptr [ESI + 0x4]
// 004094d9: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004094dd: MOV EAX,dword ptr [ESI + 0x8]
// 004094e0: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004094e4: LEA EAX,[ESP + 0x58]
//   Label: LAB_004094e4
//   XREF to: Stack[-0x60] (DATA)
// 004094e8: CMP EAX,EDX
// 004094ea: JZ 0x00409500
//   XREF to: 00409500 (CONDITIONAL_JUMP)
// 004094ec: MOV EAX,dword ptr [EDX]
// 004094ee: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004094f2: MOV EAX,dword ptr [EDX + 0x4]
// 004094f5: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004094f9: MOV EAX,dword ptr [EDX + 0x8]
// 004094fc: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00409500: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_00409500
//   XREF to: Stack[0xc] (READ)
// 00409503: FLD float ptr [ESI]
// 00409505: FADD float ptr [EAX]
// 00409507: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x48] (WRITE)
// 0040950b: FLD float ptr [ESI + 0x4]
// 0040950e: FADD float ptr [EAX + 0x4]
// 00409511: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x44] (WRITE)
// 00409515: FLD float ptr [ESI + 0x8]
// 00409518: FADD float ptr [EAX + 0x8]
// 0040951b: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x48] (DATA)
// 0040951f: PUSH EAX
// 00409520: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x6c] (DATA)
// 00409524: PUSH EAX
// 00409525: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x40] (WRITE)
// 0040952c: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00409531: ADD ESP,0x8
// 00409534: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x9c] (DATA)
// 00409538: PUSH EAX
// 00409539: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x6c] (DATA)
// 0040953d: PUSH EAX
// 0040953e: CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   XREF to: 00421010 (UNCONDITIONAL_CALL)
// 00409543: ADD ESP,0x8
// 00409546: TEST EAX,EAX
// 00409548: JZ 0x0040948f
//   XREF to: 0040948f (CONDITIONAL_JUMP)
// 0040954e: PUSH ESI
//   Label: LAB_0040954e
// 0040954f: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x3c] (DATA)
// 00409556: PUSH EAX
// 00409557: PUSH EDI
// 00409558: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0040955d: ADD ESP,0xc
// 00409560: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00409563: PUSH ECX
// 00409564: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x54] (DATA)
// 00409568: PUSH EAX
// 00409569: PUSH EDI
// 0040956a: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0040956f: ADD ESP,0xc
// 00409572: MOV ESI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00409575: CMP ESI,0x2
// 00409578: JNC 0x004096cb
//   XREF to: 004096cb (CONDITIONAL_JUMP)
// 0040957e: CMP ESI,0x1
// 00409581: JNZ 0x004096d2
//   XREF to: 004096d2 (CONDITIONAL_JUMP)
// 00409587: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x30] (DATA)
// 0040958e: PUSH EAX
// 0040958f: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x54] (DATA)
// 00409593: PUSH EAX
// 00409594: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x3c] (DATA)
// 0040959b: PUSH EAX
// 0040959c: LEA EDX,[ESP + 0x40]
//   XREF to: Stack[-0x84] (DATA)
// 004095a0: PUSH EDX
// 004095a1: MOV EAX,dword ptr [EDI + 0x154]
// 004095a7: PUSH EDI
// 004095a8: CALL dword ptr [EAX + 0x14]
// 004095ab: ADD ESP,0x8
// 004095ae: PUSH EAX
// 004095af: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 004095b4: MOV dword ptr [ESP + 0xb4],EAX
//   Label: LAB_004095b4
//   XREF to: Stack[-0x14] (WRITE)
// 004095bb: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x14] (READ)
// 004095c2: ADD ESP,0x10
// 004095c5: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa0] (WRITE)
// 004095c9: FLD float ptr [ESP + 0x18]
//   Label: LAB_004095c9
//   XREF to: Stack[-0xa0] (READ)
// 004095cd: FLDZ
// 004095cf: FXCH
// 004095d1: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb0] (WRITE)
// 004095d5: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb0] (READ)
// 004095d9: FNSTSW AX
// 004095db: SAHF
// 004095dc: JA 0x0040948f
//   XREF to: 0040948f (CONDITIONAL_JUMP)
// 004095e2: FLD1
// 004095e4: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb0] (READ)
// 004095e8: FNSTSW AX
// 004095ea: SAHF
// 004095eb: JC 0x0040948f
//   XREF to: 0040948f (CONDITIONAL_JUMP)
// 004095f1: MOV dword ptr [EBX + 0x10],0xffffffff
// 004095f8: MOV dword ptr [EBX + 0x14],0xffffffff
// 004095ff: MOV dword ptr [EBX + 0x18],0xffffffff
// 00409606: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040960b: MOV dword ptr [EBX + 0xc],0xffffffff
// 00409612: MOV EAX,dword ptr [EAX + 0x15f6dc]
//   XREF to: 03273954 (READ)
// 00409618: TEST EAX,EAX
// 0040961a: JZ 0x004096f9
//   XREF to: 004096f9 (CONDITIONAL_JUMP)
// 00409620: LEA EAX,[ESP + 0x88]
//   Label: LAB_00409620
// 00409627: PUSH EAX
// 00409628: LEA EAX,[ESP + 0x98]
// 0040962f: PUSH EAX
// 00409630: PUSH EDI
// 00409631: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00409636: ADD ESP,0xc
// 00409639: CMP EBX,EAX
// 0040963b: JZ 0x0040964d
//   XREF to: 0040964d (CONDITIONAL_JUMP)
// 0040963d: MOV EDX,dword ptr [EAX]
// 0040963f: MOV dword ptr [EBX],EDX
// 00409641: MOV EDX,dword ptr [EAX + 0x4]
// 00409644: MOV dword ptr [EBX + 0x4],EDX
// 00409647: MOV EDX,dword ptr [EAX + 0x8]
// 0040964a: MOV dword ptr [EBX + 0x8],EDX
// 0040964d: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0040964d
// 00409651: MOV dword ptr [ESP + 0xa0],EAX
// 00409658: MOV EAX,dword ptr [ESP + 0xa0]
// 0040965f: MOV ESP,EBP
// 00409661: POP EBP
// 00409662: POP EDI
// 00409663: POP ESI
// 00409664: POP EBX
// 00409665: RET
// 00409666: LEA EAX,[ESP + 0x1c]
//   Label: LAB_00409666
//   XREF to: Stack[-0x9c] (DATA)
// 0040966a: PUSH EAX
// 0040966b: PUSH EDX
// 0040966c: CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   XREF to: 00421010 (UNCONDITIONAL_CALL)
// 00409671: ADD ESP,0x8
// 00409674: TEST EAX,EAX
// 00409676: JNZ 0x0040954e
//   XREF to: 0040954e (CONDITIONAL_JUMP)
// 0040967c: JMP 0x0040948f
//   XREF to: 0040948f (UNCONDITIONAL_JUMP)
// 00409681: LEA EAX,[ESP + 0x88]
//   Label: LAB_00409681
//   XREF to: Stack[-0x30] (DATA)
// 00409688: PUSH EAX
// 00409689: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x54] (DATA)
// 0040968d: PUSH EAX
// 0040968e: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x3c] (DATA)
// 00409695: PUSH EAX
// 00409696: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00409699: PUSH ECX
// 0040969a: CALL core_actor.cpp_rayCylinderIntersect_FUN_00408340
//   XREF to: 00408340 (UNCONDITIONAL_CALL)
// 0040969f: JMP 0x004095b4
//   XREF to: 004095b4 (UNCONDITIONAL_JUMP)
// 004096a4: LEA EAX,[ESP + 0x88]
//   Label: LAB_004096a4
//   XREF to: Stack[-0x30] (DATA)
// 004096ab: PUSH EAX
// 004096ac: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x54] (DATA)
// 004096b0: PUSH EAX
// 004096b1: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x3c] (DATA)
// 004096b8: PUSH EAX
// 004096b9: MOV EDX,dword ptr [EDI + 0x154]
// 004096bf: PUSH EDI
// 004096c0: CALL dword ptr [EDX + 0xb0]
// 004096c6: JMP 0x004095b4
//   XREF to: 004095b4 (UNCONDITIONAL_JUMP)
// 004096cb: JBE 0x00409681
//   Label: LAB_004096cb
//   XREF to: 00409681 (CONDITIONAL_JUMP)
// 004096cd: CMP ESI,0x3
// 004096d0: JZ 0x004096a4
//   XREF to: 004096a4 (CONDITIONAL_JUMP)
// 004096d2: MOV EAX,0x613840
//   Label: LAB_004096d2
//   XREF to: 00613840 (PARAM)
// 004096d7: MOV EDX,0x45b
// 004096dc: PUSH 0x613852
//   XREF to: 00613852 (DATA)
// 004096e1: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004096e6: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004096ec: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004096f1: ADD ESP,0x4
// 004096f4: JMP 0x004095c9
//   XREF to: 004095c9 (UNCONDITIONAL_JUMP)
// 004096f9: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_004096f9
//   XREF to: Stack[0x14] (READ)
// 004096fc: MOV ECX,dword ptr [EAX + 0x20]
// 004096ff: TEST ECX,ECX
// 00409701: JNZ 0x00409773
//   XREF to: 00409773 (CONDITIONAL_JUMP)
// 00409703: CMP dword ptr [EAX + 0x24],0x0
// 00409707: JZ 0x00409620
//   XREF to: 00409620 (CONDITIONAL_JUMP)
// 0040970d: LEA EAX,[ESP + 0x88]
// 00409714: PUSH EAX
// 00409715: LEA EAX,[ESP + 0x68]
// 00409719: PUSH EAX
// 0040971a: LEA EAX,[ESP + 0x84]
// 00409721: PUSH EAX
// 00409722: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00409725: PUSH ECX
// 00409726: MOV EDX,dword ptr [EAX + 0x24]
// 00409729: PUSH EDX
// 0040972a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0040972f: ADD ESP,0x4
// 00409732: PUSH EAX
// 00409733: CALL core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
//   XREF to: 004781d0 (UNCONDITIONAL_CALL)
// 00409738: MOV dword ptr [ESP + 0xb8],EAX
// 0040973f: FLD float ptr [ESP + 0xb8]
// 00409746: ADD ESP,0x14
// 00409749: FLDZ
// 0040974b: FXCH
// 0040974d: FST float ptr [ESP + 0x18]
// 00409751: FSTP double ptr [ESP]
// 00409754: FCOMP double ptr [ESP]
// 00409757: FNSTSW AX
// 00409759: SAHF
// 0040975a: JA 0x0040948f
//   XREF to: 0040948f (CONDITIONAL_JUMP)
// 00409760: FLD1
// 00409762: FCOMP double ptr [ESP]
// 00409765: FNSTSW AX
// 00409767: SAHF
// 00409768: JNC 0x00409620
//   XREF to: 00409620 (CONDITIONAL_JUMP)
// 0040976e: JMP 0x0040948f
//   XREF to: 0040948f (UNCONDITIONAL_JUMP)
// 00409773: LEA EAX,[ESP + 0x64]
//   Label: LAB_00409773
// 00409777: PUSH EAX
// 00409778: LEA EAX,[ESP + 0x80]
// 0040977f: PUSH EAX
// 00409780: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00409783: MOV ESI,dword ptr [EAX + 0x20]
// 00409786: PUSH ESI
// 00409787: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a10e0
//   XREF to: 005a10e0 (UNCONDITIONAL_CALL)
// 0040978c: MOV dword ptr [ESP + 0xb0],EAX
// 00409793: FLD float ptr [ESP + 0xb0]
// 0040979a: ADD ESP,0xc
// 0040979d: FLDZ
// 0040979f: FXCH
// 004097a1: FST float ptr [ESP + 0x18]
// 004097a5: FSTP double ptr [ESP + 0x10]
// 004097a9: FCOMP double ptr [ESP + 0x10]
// 004097ad: FNSTSW AX
// 004097af: SAHF
// 004097b0: JA 0x0040948f
//   XREF to: 0040948f (CONDITIONAL_JUMP)
// 004097b6: FLD1
// 004097b8: FCOMP double ptr [ESP + 0x10]
// 004097bc: FNSTSW AX
// 004097be: SAHF
// 004097bf: JC 0x0040948f
//   XREF to: 0040948f (CONDITIONAL_JUMP)
// 004097c5: MOV EAX,[0x0368c884]
//   XREF to: 0368c884 (READ)
// 004097ca: MOV dword ptr [EBX + 0xc],EAX
// 004097cd: MOV EAX,[0x0368c894]
//   XREF to: 0368c894 (READ)
// 004097d2: MOV dword ptr [EBX + 0x10],EAX
// 004097d5: MOV EAX,[0x0368c898]
//   XREF to: 0368c898 (READ)
// 004097da: MOV EDX,dword ptr [0x0368c894]
//   XREF to: 0368c894 (READ)
// 004097e0: PUSH EAX
// 004097e1: MOV dword ptr [EBX + 0x14],EAX
// 004097e4: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004097e7: PUSH EDX
// 004097e8: MOV ECX,dword ptr [EAX + 0x20]
// 004097eb: PUSH ECX
// 004097ec: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004097f1: ADD ESP,0x4
// 004097f4: PUSH EAX
// 004097f5: CALL core_skeleton.cpp_FUN_0059dca0
//   XREF to: 0059dca0 (UNCONDITIONAL_CALL)
// 004097fa: MOV dword ptr [EBX + 0x18],EAX
// 004097fd: LEA EAX,[ESP + 0x94]
// 00409804: ADD ESP,0xc
// 00409807: CMP EAX,0x368c888
//   XREF to: 0368c888 (DATA)
// 0040980c: JZ 0x00409620
//   XREF to: 00409620 (CONDITIONAL_JUMP)
// 00409812: MOV EAX,[0x0368c888]
//   XREF to: 0368c888 (READ)
// 00409817: MOV dword ptr [ESP + 0x88],EAX
// 0040981e: MOV EAX,[0x0368c88c]
//   XREF to: 0368c88c (READ)
// 00409823: MOV dword ptr [ESP + 0x8c],EAX
// 0040982a: MOV EAX,[0x0368c890]
//   XREF to: 0368c890 (READ)
// 0040982f: MOV dword ptr [ESP + 0x90],EAX
// 00409836: JMP 0x00409620
//   XREF to: 00409620 (UNCONDITIONAL_JUMP)
