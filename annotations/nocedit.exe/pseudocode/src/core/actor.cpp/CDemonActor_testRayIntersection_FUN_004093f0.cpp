// Name: core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0
// Address: 004093f0
// Address Range: [[004093f0, 0040946a]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_hit_normal, void * unused)
// Function calls:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testRayIntersection_FUN_004093f0
          (CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_hit_normal,void *unused)

{
  int bbox_type;
  float fVar1;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000020;
  CVector3f *in_stack_00000024;
  CVector3f *in_stack_00000028;
  CBoundingBox3D *in_stack_00000030;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffffcc);
  bbox_type = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)&stack0xffffffd0);
  if (bbox_type == 0) {
    return 0x40000000;
  }
  fVar1 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                    (this_ptr,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                     (SCollisionInfo *)&stack0xffffffe4,bbox_type,in_stack_00000030);
  return (int)fVar1;
}


// Assembly code:
// 004093f0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0
// 004093f1: SUB ESP,0x30
// 004093f4: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004093f8: MOV EAX,ESP
// 004093fa: PUSH EAX
// 004093fb: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 00409400: ADD ESP,0x4
// 00409403: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 00409407: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 0040940a: MOV EAX,ESP
// 0040940c: PUSH EAX
// 0040940d: MOV EDX,dword ptr [EBX + 0x154]
// 00409413: PUSH EBX
// 00409414: CALL dword ptr [EDX + 0x34]
// 00409417: ADD ESP,0x8
// 0040941a: TEST EAX,EAX
// 0040941c: JNZ 0x0040942f
//   XREF to: 0040942f (CONDITIONAL_JUMP)
// 0040941e: MOV dword ptr [ESP + 0x28],0x40000000
// 00409426: MOV EAX,dword ptr [ESP + 0x28]
// 0040942a: ADD ESP,0x30
// 0040942d: POP EBX
// 0040942e: RET
// 0040942f: PUSH EDI
//   Label: LAB_0040942f
// 00409430: PUSH ESI
// 00409431: MOV EDX,dword ptr [ESP + 0x54]
// 00409435: PUSH EDX
// 00409436: PUSH EAX
// 00409437: LEA EAX,[ESP + 0x10]
// 0040943b: PUSH EAX
// 0040943c: MOV ECX,dword ptr [ESP + 0x58]
// 00409440: PUSH ECX
// 00409441: MOV ESI,dword ptr [ESP + 0x58]
// 00409445: PUSH ESI
// 00409446: MOV EDI,dword ptr [ESP + 0x58]
// 0040944a: PUSH EDI
// 0040944b: PUSH EBX
// 0040944c: CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
//   XREF to: 00409470 (UNCONDITIONAL_CALL)
// 00409451: MOV dword ptr [ESP + 0x50],EAX
// 00409455: FLD float ptr [ESP + 0x50]
// 00409459: ADD ESP,0x1c
// 0040945c: FSTP float ptr [ESP + 0x30]
// 00409460: POP ESI
// 00409461: POP EDI
// 00409462: MOV EAX,dword ptr [ESP + 0x28]
// 00409466: ADD ESP,0x30
// 00409469: POP EBX
// 0040946a: RET
