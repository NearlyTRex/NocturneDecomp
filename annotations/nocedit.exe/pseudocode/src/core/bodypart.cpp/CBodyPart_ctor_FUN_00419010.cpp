// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
// Address: 00419010
// Address Range: [[00419010, 00419126]]
// Convention: __cdecl
// Signature: CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00419010(CBodyPart * this_ptr)
// Cross-references:
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 (00418e10) at 00418f19 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00418fd0 (00418fd0) at 00418fea [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CBodyPartVTable
//   WatcomTypeInfo g_SBodyPartModelTypeInfo
//   WatcomTypeInfo g_SBodyPartFireTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_box.cpp_CBox_ctor_FUN_0041dc50
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart *this_ptr)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (&pCVar1[1].metadata.runtime_vector2.y,3,&g_SBodyPartModelTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x4c0),2,&g_SBodyPartFireTypeInfo);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)((int)pvVar2 + 0x57c));
  pCVar3[-5].linear_velocity.x = (float)&g_CBodyPartVTable;
  pCVar3[1].position.y = 0.0;
  pCVar3[-5].linear_velocity_temp.z = 0.0;
  pCVar3[-5].linear_momentum.x = 0.0;
  pCVar3[-5].linear_momentum.y = 0.0;
  pCVar3[-5].linear_momentum.z = 0.0;
  pCVar3[-5].angular_velocity.x = 0.0;
  pCVar3[-5].angular_velocity.y = 0.0;
  pCVar3[-5].angular_velocity.z = 0.0;
  pCVar3[-5].linear_velocity.y = 0.0;
  pCVar3[-5].scrape_points[3].raytrace_intersection = 0.0;
  pCVar3[-5].scrape_points[3].previous_position.z =
       pCVar3[-5].scrape_points[3].raytrace_intersection;
  pCVar3[-5].scrape_points[3].previous_position.y = pCVar3[-5].scrape_points[3].previous_position.z;
  pCVar3[-3].scrape_points[4].local_position.y = 0.0;
  pCVar3[-5].scrape_points[3].raytrace_normal.x = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.x = 5.0;
  pCVar3[-1].scrape_points[7].raytrace_intersection = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.y = 9.18341e-41;
  pCVar3[1].position.z = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar3[-1].is_valid = 0;
  return (CBodyPart *)&pCVar3[-6].scrape_points[2].raytrace_normal;
}


// Assembly code:
// 00419010: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
//   XREF to: Stack[0x4] (READ)
// 00419014: PUSH EAX
// 00419015: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0041901a: ADD ESP,0x4
// 0041901d: PUSH 0x65aec0
//   XREF to: 0065aec0 (DATA)
// 00419022: PUSH 0x3
// 00419024: ADD EAX,0x290
// 00419029: PUSH EAX
// 0041902a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0041902f: ADD ESP,0xc
// 00419032: PUSH 0x65aee0
//   XREF to: 0065aee0 (DATA)
// 00419037: PUSH 0x2
// 00419039: ADD EAX,0x4c0
// 0041903e: PUSH EAX
// 0041903f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00419044: ADD ESP,0xc
// 00419047: ADD EAX,0x57c
// 0041904c: PUSH EAX
// 0041904d: CALL core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
// 00419052: SUB EAX,0xccc
// 00419057: MOV dword ptr [EAX + 0x154],0x65add4
//   XREF to: 0065add4 (DATA)
// 00419061: MOV dword ptr [EAX + 0xf28],0x0
// 0041906b: MOV dword ptr [EAX + 0x174],0x0
// 00419075: MOV dword ptr [EAX + 0x178],0x0
// 0041907f: MOV dword ptr [EAX + 0x17c],0x0
// 00419089: MOV dword ptr [EAX + 0x180],0x0
// 00419093: MOV dword ptr [EAX + 0x184],0x0
// 0041909d: MOV dword ptr [EAX + 0x188],0x0
// 004190a7: MOV dword ptr [EAX + 0x18c],0x0
// 004190b1: LEA EDX,[EAX + 0x280]
// 004190b7: MOV dword ptr [EAX + 0x158],0x0
// 004190c1: MOV dword ptr [EDX + 0x8],0x0
// 004190c8: MOV ECX,dword ptr [EDX + 0x8]
// 004190cb: MOV dword ptr [EDX + 0x4],ECX
// 004190ce: MOV ECX,dword ptr [EDX + 0x4]
// 004190d1: MOV dword ptr [EDX],ECX
// 004190d3: MOV dword ptr [EAX + 0x74c],0x0
// 004190dd: MOV dword ptr [EAX + 0x28c],0x0
// 004190e7: MOV dword ptr [EAX + 0xcbc],0x40a00000
// 004190f1: MOV dword ptr [EAX + 0xcb8],0x0
// 004190fb: MOV dword ptr [EAX + 0xcc0],0xffff
// 00419105: MOV dword ptr [EAX + 0xf2c],0x0
// 0041910f: MOV dword ptr [EAX + 0xcc4],0x0
// 00419119: ADD ESP,0x4
// 0041911c: MOV dword ptr [EAX + 0xcc8],0x0
// 00419126: RET
