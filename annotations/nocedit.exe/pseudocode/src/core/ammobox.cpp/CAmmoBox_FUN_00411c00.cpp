// Name: core_ammobox.cpp_CAmmoBox_FUN_00411c00
// Address: 00411c00
// Address Range: [[00411c00, 00411c17]]
// Convention: __cdecl
// Signature: void core_ammobox.cpp_CAmmoBox_FUN_00411c00(CAmmoBox * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411c00(CAmmoBox *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)this_ptr->model_name,in_stack_00000008);
  return;
}


// Assembly code:
// 00411c00: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_ammobox.cpp_CAmmoBox_FUN_00411c00
//   XREF to: Stack[0x8] (READ)
// 00411c04: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00411c08: PUSH EDX
// 00411c09: ADD EAX,0x158
// 00411c0e: PUSH EAX
// 00411c0f: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 00411c14: ADD ESP,0x8
// 00411c17: RET
