// Name: core_charactr.cpp_CCharacter_FUN_0042b930
// Address: 0042b930
// Address Range: [[0042b930, 0042b9d7]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b930(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c421 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00617156 = 0.5
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_fire.cpp_CFireEffect_FUN_004c8c10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b930(CCharacter *this_ptr)

{
  CBoundingBox3D *pCVar1;
  BADSPACEBASE *in_ESP;
  float fStack00000008;
  float fStack0000000c;
  float fStack_40;
  
  pCVar1 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)&fStack_40);
  fStack00000008 = (pCVar1->min).y + (pCVar1->max).y;
  fStack0000000c = (pCVar1->min).z + (pCVar1->max).z;
  core_actor_cpp_CDemonActor_FUN_00408ec0(&this_ptr->base_actor);
  fStack_40 = 6.127772e-39;
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
  return;
}


// Assembly code:
// 0042b930: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b930
// 0042b931: SUB ESP,0x3c
// 0042b934: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0042b938: MOV EDX,ESP
// 0042b93a: PUSH EDX
// 0042b93b: MOV EAX,dword ptr [EBX + 0x154]
// 0042b941: PUSH EBX
// 0042b942: CALL dword ptr [EAX + 0x14]
// 0042b945: LEA EDX,[EAX + 0xc]
// 0042b948: FLD float ptr [EAX]
// 0042b94a: FADD float ptr [EDX]
// 0042b94c: ADD ESP,0x8
// 0042b94f: FST float ptr [ESP + 0x30]
// 0042b953: FLD float ptr [EAX + 0x4]
// 0042b956: FADD float ptr [EDX + 0x4]
// 0042b959: FXCH
// 0042b95b: FLD float ptr [0x00617156]
//   XREF to: 00617156 (READ)
// 0042b961: FXCH
// 0042b963: FMUL ST1
// 0042b965: FXCH ST2
// 0042b967: FST float ptr [ESP + 0x34]
// 0042b96b: FMUL ST1
// 0042b96d: FLD float ptr [EAX + 0x8]
// 0042b970: FADD float ptr [EDX + 0x8]
// 0042b973: LEA EAX,[ESP + 0x18]
// 0042b977: FST float ptr [ESP + 0x38]
// 0042b97b: FMULP ST2
// 0042b97d: PUSH EAX
// 0042b97e: LEA EAX,[ESP + 0x28]
// 0042b982: FXCH ST2
// 0042b984: FSTP float ptr [ESP + 0x1c]
// 0042b988: PUSH EAX
// 0042b989: FXCH
// 0042b98b: FSTP float ptr [ESP + 0x24]
// 0042b98f: PUSH EBX
// 0042b990: FSTP float ptr [ESP + 0x2c]
// 0042b994: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042b999: ADD ESP,0xc
// 0042b99c: PUSH 0x40800000
// 0042b9a1: PUSH 0x44bb8000
// 0042b9a6: LEA EAX,[ESP + 0x2c]
// 0042b9aa: PUSH 0x40000000
// 0042b9af: PUSH EAX
// 0042b9b0: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0042b9b6: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 0042b9b7: CALL core_fire.cpp_CFireEffect_FUN_004c8c10
//   XREF to: 004c8c10 (UNCONDITIONAL_CALL)
// 0042b9bc: ADD ESP,0x14
// 0042b9bf: PUSH 0x0
// 0042b9c1: MOV ECX,dword ptr [ESP + 0x4c]
// 0042b9c5: PUSH dword ptr [ESP + 0x50]
// 0042b9c9: PUSH ECX
// 0042b9ca: PUSH EBX
// 0042b9cb: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 0042b9d0: ADD ESP,0x10
// 0042b9d3: ADD ESP,0x3c
// 0042b9d6: POP EBX
// 0042b9d7: RET
