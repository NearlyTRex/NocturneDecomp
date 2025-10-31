// Name: core_boxactor.cpp_CLightActor_ctor_FUN_00422990
// Address: 00422990
// Address Range: [[00422990, 00422a12]]
// Convention: __cdecl
// Signature: CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_00422990(CLightActor * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_00422950 (00422950) at 0042296d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable PTR_core_box.cpp_FUN_0065b2a4
// Function calls:
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr)

{
  CBoxActor *pCVar1;
  CDemonLight *pCVar2;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(&this_ptr->base_boxactor);
  pCVar2 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0
                     ((CDemonLight *)(pCVar1[1].base_actor.actor_name + 4));
  pCVar2[-1].saved_screen_buffer_rows[0x36f] = &PTR_core_box_cpp_FUN_0065b2a4;
  pCVar2->light_enabled_flag = 1;
  pCVar2[1].base.base.position.y = 0;
  pCVar2[1].base.base.position.x = pCVar2[1].base.base.position.y;
  pCVar2[1].base.base.field0_0x0 = (void *)pCVar2[1].base.base.position.x;
  pCVar2[1].base.base.rotation_matrix.m[0][1] = 0;
  pCVar2[1].base.base.rotation_matrix.m[0][0] = pCVar2[1].base.base.rotation_matrix.m[0][1];
  pCVar2[1].base.base.position.z = pCVar2[1].base.base.rotation_matrix.m[0][0];
  pCVar2[1].base.base.rotation_matrix.m[0][2] = 0;
  pCVar2[-1].volumetric_intensity = 1.4013e-45;
  return (CLightActor *)(pCVar2[-1].saved_screen_buffer_rows + 0x31a);
}


// Assembly code:
// 00422990: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_boxactor.cpp_CLightActor_ctor_FUN_00422990
//   XREF to: Stack[0x4] (READ)
// 00422994: PUSH EAX
// 00422995: CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   XREF to: 00421700 (UNCONDITIONAL_CALL)
// 0042299a: ADD ESP,0x4
// 0042299d: PUSH 0x100
// 004229a2: PUSH 0x100
// 004229a7: ADD EAX,0x670
// 004229ac: PUSH EAX
// 004229ad: CALL core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
//   XREF to: 004726a0 (UNCONDITIONAL_CALL)
// 004229b2: SUB EAX,0x670
// 004229b7: MOV dword ptr [EAX + 0x154],0x65b2a4
//   XREF to: 0065b2a4 (DATA)
// 004229c1: LEA EDX,[EAX + 0x361c]
// 004229c7: MOV dword ptr [EAX + 0x2324],0x1
// 004229d1: MOV dword ptr [EDX + 0x8],0x0
// 004229d8: MOV ECX,dword ptr [EDX + 0x8]
// 004229db: MOV dword ptr [EDX + 0x4],ECX
// 004229de: MOV ECX,dword ptr [EDX + 0x4]
// 004229e1: MOV dword ptr [EDX],ECX
// 004229e3: LEA EDX,[EAX + 0x3628]
// 004229e9: MOV dword ptr [EDX + 0x8],0x0
// 004229f0: MOV ECX,dword ptr [EDX + 0x8]
// 004229f3: MOV dword ptr [EDX + 0x4],ECX
// 004229f6: MOV ECX,dword ptr [EDX + 0x4]
// 004229f9: MOV dword ptr [EDX],ECX
// 004229fb: MOV dword ptr [EAX + 0x3634],0x0
// 00422a05: ADD ESP,0xc
// 00422a08: MOV dword ptr [EAX + 0x66c],0x1
// 00422a12: RET
