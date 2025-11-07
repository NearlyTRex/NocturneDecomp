// Name: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
// Address: 0059ddc0
// Address Range: [[0059ddc0, 0059de38]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b2c8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 (00427e20) at 00427e36 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_staticInit_FUN_00438b80 (00438b80) at 00438b85 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 (00528b30) at 00528b46 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e6e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0 (0058e4e0) at 0058e5ed [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00598f10 (00598f10) at 00598fa2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 005991dd [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 (0059c2f0) at 0059c345 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d4e6 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 (005c6a80) at 005c6a96 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 (005e5590) at 005e55a4 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CMotionController_vtable g_CDeformableModelInstanceVTable
// Function calls:
//   core_motion.cpp_CMotionController_ctor_FUN_0052d570
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CDeformableModelInstance * __cdecl
core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance *this_ptr)

{
  CMotionController *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_motion_cpp_CMotionController_ctor_FUN_0052d570(&this_ptr->motion_controller);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (&pCVar1[1].current_motion_index,100,&g_CVectorTypeInfo);
  *(CMotionController_vtable **)((int)pvVar2 + -8) = &g_CDeformableModelInstanceVTable;
  *(undefined1 *)((int)pvVar2 + 0x2208) = 0;
  *(undefined4 *)((int)pvVar2 + 0x2258) = 0;
  *(undefined4 *)((int)pvVar2 + 0x21dc) = 0;
  *(undefined4 *)((int)pvVar2 + 0x21d8) = 0xffffffff;
  *(undefined4 *)((int)pvVar2 + 0x21f8) = 0;
  *(undefined4 *)((int)pvVar2 + 0x2204) = 0;
  *(undefined4 *)((int)pvVar2 + 0x2200) = *(undefined4 *)((int)pvVar2 + 0x2204);
  *(undefined4 *)((int)pvVar2 + 0x21fc) = *(undefined4 *)((int)pvVar2 + 0x2200);
  *(undefined4 *)((int)pvVar2 + -4) = 0x3f800000;
  return (CDeformableModelInstance *)((int)pvVar2 + -0x58);
}


// Assembly code:
// 0059ddc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: Stack[0x4] (READ)
// 0059ddc4: PUSH EAX
// 0059ddc5: CALL core_motion.cpp_CMotionController_ctor_FUN_0052d570
//   XREF to: 0052d570 (UNCONDITIONAL_CALL)
// 0059ddca: ADD ESP,0x4
// 0059ddcd: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0059ddd2: PUSH 0x64
// 0059ddd4: ADD EAX,0x58
// 0059ddd7: PUSH EAX
// 0059ddd8: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0059dddd: SUB EAX,0x58
// 0059dde0: MOV dword ptr [EAX + 0x50],0x662ec4
//   XREF to: 00662ec4 (DATA)
// 0059dde7: MOV byte ptr [EAX + 0x2260],0x0
// 0059ddee: MOV dword ptr [EAX + 0x22b0],0x0
// 0059ddf8: MOV dword ptr [EAX + 0x2234],0x0
// 0059de02: MOV dword ptr [EAX + 0x2230],0xffffffff
// 0059de0c: LEA EDX,[EAX + 0x2254]
// 0059de12: MOV dword ptr [EAX + 0x2250],0x0
// 0059de1c: MOV dword ptr [EDX + 0x8],0x0
// 0059de23: ADD ESP,0xc
// 0059de26: MOV ECX,dword ptr [EDX + 0x8]
// 0059de29: MOV dword ptr [EDX + 0x4],ECX
// 0059de2c: MOV ECX,dword ptr [EDX + 0x4]
// 0059de2f: MOV dword ptr [EDX],ECX
// 0059de31: MOV dword ptr [EAX + 0x54],0x3f800000
// 0059de38: RET
