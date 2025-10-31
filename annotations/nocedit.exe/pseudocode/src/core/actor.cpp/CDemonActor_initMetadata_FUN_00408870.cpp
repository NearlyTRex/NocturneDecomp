// Name: core_actor.cpp_CDemonActor_initMetadata_FUN_00408870
// Address: 00408870
// Address Range: [[00408870, 004088a2]]
// Convention: __cdecl
// Signature: CDemonActorClassMetadata * core_actor.cpp_CDemonActor_initMetadata_FUN_00408870(CDemonActorClassMetadata * metadata_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0 (004088b0) at 004088be [UNCONDITIONAL_CALL]

#include "nocturne.h"

CDemonActorClassMetadata * __cdecl
core_actor_cpp_CDemonActor_initMetadata_FUN_00408870(CDemonActorClassMetadata *metadata_ptr)

{
  (metadata_ptr->runtime_vector1).z = 0.0;
  (metadata_ptr->runtime_vector1).y = (metadata_ptr->runtime_vector1).z;
  (metadata_ptr->runtime_vector1).x = (metadata_ptr->runtime_vector1).y;
  (metadata_ptr->runtime_vector2).z = 0.0;
  (metadata_ptr->runtime_vector2).y = (metadata_ptr->runtime_vector2).z;
  (metadata_ptr->runtime_vector2).x = (metadata_ptr->runtime_vector2).y;
  metadata_ptr->runtime_flags = 0x1f;
  return metadata_ptr;
}


// Assembly code:
// 00408870: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_CDemonActor_initMetadata_FUN_00408870
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
