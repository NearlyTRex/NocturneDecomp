// Name: core_weapon.cpp_CWeapon_FUN_005ee030
// Address: 005ee030
// Address Range: [[005ee030, 005ee0b7]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee030(CWeapon * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_CBaronWeapon_00413de0 (00413de0) at 00413de5 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee030(CWeapon *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_01 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iVar1 != 0) {
    fStack_14 = 8.713051e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&this_ptr->model_instance,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  this_ptr_00 = g_CDemonRendererPtr;
  this_ptr->field12_0x574 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    this_ptr->field12_0x574 = 1;
    return iVar1;
  }
  return iVar1;
}


// Assembly code:
// 005ee030: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee030
// 005ee031: PUSH ESI
// 005ee032: SUB ESP,0x18
// 005ee035: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005ee039: PUSH EBX
// 005ee03a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005ee03f: ADD ESP,0x4
// 005ee042: MOV EAX,ESP
// 005ee044: PUSH EAX
// 005ee045: MOV ESI,dword ptr [EBX + 0x154]
// 005ee04b: PUSH EBX
// 005ee04c: CALL dword ptr [ESI + 0x14]
// 005ee04f: ADD ESP,0x8
// 005ee052: PUSH EAX
// 005ee053: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005ee058: ADD ESP,0x4
// 005ee05b: MOV ESI,EAX
// 005ee05d: TEST EAX,EAX
// 005ee05f: JZ 0x005ee074
//   XREF to: 005ee074 (CONDITIONAL_JUMP)
// 005ee061: PUSH -0x1
// 005ee063: LEA EAX,[EBX + 0x158]
// 005ee069: PUSH 0x0
// 005ee06b: PUSH EAX
// 005ee06c: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005ee071: ADD ESP,0xc
// 005ee074: PUSH EBX
//   Label: LAB_005ee074
// 005ee075: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005ee07a: ADD ESP,0x4
// 005ee07d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ee083: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ee084: MOV dword ptr [EBX + 0x574],0x0
// 005ee08e: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005ee093: ADD ESP,0x4
// 005ee096: TEST EAX,EAX
// 005ee098: JNZ 0x005ee09e
//   XREF to: 005ee09e (CONDITIONAL_JUMP)
// 005ee09a: TEST ESI,ESI
// 005ee09c: JNZ 0x005ee0a6
//   XREF to: 005ee0a6 (CONDITIONAL_JUMP)
// 005ee09e: MOV EAX,ESI
//   Label: LAB_005ee09e
// 005ee0a0: ADD ESP,0x18
// 005ee0a3: POP ESI
// 005ee0a4: POP EBX
// 005ee0a5: RET
// 005ee0a6: MOV dword ptr [EBX + 0x574],0x1
//   Label: LAB_005ee0a6
// 005ee0b0: MOV EAX,ESI
// 005ee0b2: ADD ESP,0x18
// 005ee0b5: POP ESI
// 005ee0b6: POP EBX
// 005ee0b7: RET
