// Name: core_door.cpp_CDoor_writeDependencies_FUN_00481630
// Address: 00481630
// Address Range: [[00481630, 00481647]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_writeDependencies_FUN_00481630(CDoor * this_ptr, FILE * file_handle)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_writeDependencies_FUN_00481630(CDoor *this_ptr,FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}


// Assembly code:
// 00481630: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_door.cpp_CDoor_writeDependencies_FUN_00481630
//   XREF to: Stack[0x8] (READ)
// 00481634: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00481638: PUSH EDX
// 00481639: ADD EAX,0x158
// 0048163e: PUSH EAX
// 0048163f: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 00481644: ADD ESP,0x8
// 00481647: RET
