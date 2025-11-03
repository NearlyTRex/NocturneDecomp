// Name: core_actor.cpp_initTransformCache_FUN_00408870
// Address: 00408870
// Address Range: [[00408870, 004088a2]]
// Convention: __cdecl
// Signature: CDemonActorTransformState * core_actor.cpp_initTransformCache_FUN_00408870(CDemonActorTransformState * transform_cache)
// Cross-references:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0 (004088b0) at 004088be [UNCONDITIONAL_CALL]

#include "nocturne.h"

CDemonActorTransformState * __cdecl
core_actor_cpp_initTransformCache_FUN_00408870(CDemonActorTransformState *transform_cache)

{
  (transform_cache->position).z = 0.0;
  (transform_cache->position).y = (transform_cache->position).z;
  (transform_cache->position).x = (transform_cache->position).y;
  (transform_cache->orientation).z = 0.0;
  (transform_cache->orientation).y = (transform_cache->orientation).z;
  (transform_cache->orientation).x = (transform_cache->orientation).y;
  transform_cache->dirty_flags = 0x1f;
  return transform_cache;
}


// Assembly code:
// 00408870: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_initTransformCache_FUN_00408870
//   XREF to: Stack[0x4] (READ)
// 00408874: MOV dword ptr [EAX + 0x8],0x0
// 0040887b: LEA EDX,[EAX + 0xc]
// 0040887e: MOV ECX,dword ptr [EAX + 0x8]
// 00408881: MOV dword ptr [EAX + 0x4],ECX
// 00408884: MOV ECX,dword ptr [EAX + 0x4]
// 00408887: MOV dword ptr [EAX],ECX
// 00408889: MOV dword ptr [EDX + 0x8],0x0
// 00408890: MOV ECX,dword ptr [EDX + 0x8]
// 00408893: MOV dword ptr [EDX + 0x4],ECX
// 00408896: MOV ECX,dword ptr [EDX + 0x4]
// 00408899: MOV dword ptr [EDX],ECX
// 0040889b: MOV dword ptr [EAX + 0x18],0x1f
// 004088a2: RET
