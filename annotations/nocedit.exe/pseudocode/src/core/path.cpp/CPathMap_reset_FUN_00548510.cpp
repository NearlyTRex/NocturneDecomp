// Name: core_path.cpp_CPathMap_reset_FUN_00548510
// Address: 00548510
// Address Range: [[00548510, 00548580]]
// Convention: __cdecl
// Signature: void core_path.cpp_CPathMap_reset_FUN_00548510(CPathMap * this_ptr)
// Cross-references:
//   core_path.cpp_CPathMap_ctor_FUN_00546450 (00546450) at 00546473 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 (00546a60) at 00546b8d [UNCONDITIONAL_CALL]
//   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590 (00548590) at 005485d7 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr)

{
  uint uVar1;
  
  crt_memory_c_memset_FUN_005fde40(this_ptr->height_cache_tags,0x7f,40000);
  this_ptr->last_pathfinding_result = 0;
  (this_ptr->cached_world_position).z = 0.0;
  (this_ptr->cached_world_position).y = (this_ptr->cached_world_position).z;
  (this_ptr->cached_world_position).x = (this_ptr->cached_world_position).y;
  (this_ptr->cached_world_position).x = 1e+30;
  (this_ptr->path_heading).z = 0.0;
  (this_ptr->path_heading).y = (this_ptr->path_heading).z;
  (this_ptr->path_heading).x = (this_ptr->path_heading).y;
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  this_ptr->update_timer = uVar1 & 0x3fff;
  return;
}


// Assembly code:
// 00548510: PUSH EBX
//   Label: core_path.cpp_CPathMap_reset_FUN_00548510
// 00548511: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00548515: PUSH 0x9c40
// 0054851a: PUSH 0x7f
// 0054851c: LEA EAX,[EBX + 0x9c70]
// 00548522: PUSH EAX
// 00548523: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00548528: LEA EAX,[EBX + 0x138c0]
// 0054852e: MOV dword ptr [EBX + 0x138bc],0x0
// 00548538: MOV dword ptr [EAX + 0x8],0x0
// 0054853f: MOV EDX,dword ptr [EAX + 0x8]
// 00548542: MOV dword ptr [EAX + 0x4],EDX
// 00548545: MOV EDX,dword ptr [EAX + 0x4]
// 00548548: MOV dword ptr [EAX],EDX
// 0054854a: LEA EAX,[EBX + 0x138cc]
// 00548550: MOV dword ptr [EBX + 0x138c0],0x7149f2ca
// 0054855a: MOV dword ptr [EAX + 0x8],0x0
// 00548561: ADD ESP,0xc
// 00548564: MOV EDX,dword ptr [EAX + 0x8]
// 00548567: MOV dword ptr [EAX + 0x4],EDX
// 0054856a: MOV EDX,dword ptr [EAX + 0x4]
// 0054856d: MOV dword ptr [EAX],EDX
// 0054856f: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00548574: AND EAX,0x3fff
// 00548579: MOV dword ptr [EBX + 0x138d8],EAX
// 0054857f: POP EBX
// 00548580: RET
