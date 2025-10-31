// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
// Address: 005709e0
// Address Range: [[005709e0, 00570aea]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c007 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c365 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cd60 (0056cd60) at 0056ce92 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cf00 (0056cf00) at 0056d01e [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a42d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_SavedCameraOrigin
//   undefined4 g_SavedCameraOrigin.y
//   undefined4 g_SavedCameraOrigin.z
//   CVector3f g_SavedCameraRotation
//   undefined4 g_SavedCameraRotation.y
//   undefined4 g_SavedCameraRotation.z
//   float g_SavedProjectionFactor
// Function calls:
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0
//   engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
//   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
          (CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  float afStack_2c [3];
  float local_20 [3];
  float local_14;
  
  pCVar1 = (CVector3f *)
           engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,local_20);
  if (pCVar1 != &g_SavedCameraOrigin) {
    g_SavedCameraOrigin.x = pCVar1->x;
    g_SavedCameraOrigin.z = pCVar1->z;
    g_SavedCameraOrigin.y = pCVar1->y;
  }
  pCVar1 = (CVector3f *)
           engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                     (g_CDemonRendererPtr,afStack_2c);
  if (pCVar1 != &g_SavedCameraRotation) {
    g_SavedCameraRotation.x = pCVar1->x;
    g_SavedCameraRotation.z = pCVar1->z;
    g_SavedCameraRotation.y = pCVar1->y;
  }
  g_SavedProjectionFactor =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870(g_CDemonRendererPtr)
  ;
  local_14 = g_SavedProjectionFactor;
  core_mirror_cpp_setupMirrorReflection_FUN_005214c0
            ((SMirrorReflection *)(this_ptr->actor_list_maybe[mirror_index][1].create_event + 0x1c))
  ;
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(g_CDemonRendererPtr,1);
  (*(code *)((g_CurrentSceneCamera->base).vtable)->saveAlphaTransform)();
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(g_CDemonRendererPtr,mirror_index + 1);
  this_ptr->active_mirror =
       (SMirror *)(this_ptr->actor_list_maybe[mirror_index][1].create_event + 0x1c);
  return;
}


// Assembly code:
// 005709e0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
// 005709e1: PUSH ESI
// 005709e2: PUSH EDI
// 005709e3: PUSH EBP
// 005709e4: SUB ESP,0x1c
// 005709e7: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 005709eb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x20] (DATA)
// 005709ef: PUSH EAX
// 005709f0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005709f6: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005709f7: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 005709fc: ADD ESP,0x8
// 005709ff: CMP EAX,0x33469d0
//   XREF to: 033469d0 (DATA)
// 00570a04: JZ 0x00570a20
//   XREF to: 00570a20 (CONDITIONAL_JUMP)
// 00570a06: FLD float ptr [EAX]
// 00570a08: FLD float ptr [EAX + 0x8]
// 00570a0b: MOV EDX,dword ptr [EAX + 0x4]
// 00570a0e: MOV dword ptr [0x033469d4],EDX
//   XREF to: 033469d4 (WRITE)
// 00570a14: FSTP float ptr [0x033469d8]
//   XREF to: 033469d8 (WRITE)
// 00570a1a: FSTP float ptr [0x033469d0]
//   XREF to: 033469d0 (WRITE)
// 00570a20: MOV EAX,ESP
//   Label: LAB_00570a20
// 00570a22: PUSH EAX
// 00570a23: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570a29: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00570a2a: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 00570a2f: ADD ESP,0x8
// 00570a32: CMP EAX,0x33469dc
//   XREF to: 033469dc (DATA)
// 00570a37: JZ 0x00570a53
//   XREF to: 00570a53 (CONDITIONAL_JUMP)
// 00570a39: FLD float ptr [EAX]
// 00570a3b: FLD float ptr [EAX + 0x8]
// 00570a3e: MOV EDX,dword ptr [EAX + 0x4]
// 00570a41: MOV dword ptr [0x033469e0],EDX
//   XREF to: 033469e0 (WRITE)
// 00570a47: FSTP float ptr [0x033469e4]
//   XREF to: 033469e4 (WRITE)
// 00570a4d: FSTP float ptr [0x033469dc]
//   XREF to: 033469dc (WRITE)
// 00570a53: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_00570a53
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570a59: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00570a5a: CALL engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
//   XREF to: 0048c870 (UNCONDITIONAL_CALL)
// 00570a5f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00570a63: LEA EBX,[ESI*0x4 + 0x0]
// 00570a6a: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00570a6e: ADD ESP,0x4
// 00570a71: FSTP float ptr [0x033469e8]
//   XREF to: 033469e8 (WRITE)
// 00570a77: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00570a7b: PUSH dword ptr [0x033469e8]
//   XREF to: 033469e8 (READ)
// 00570a81: ADD EBX,EDI
// 00570a83: PUSH 0x33469dc
//   XREF to: 033469dc (DATA)
// 00570a88: MOV EAX,dword ptr [EBX + 0x15acb8]
// 00570a8e: PUSH 0x33469d0
//   XREF to: 033469d0 (DATA)
// 00570a93: ADD EAX,0x1ec
// 00570a98: PUSH EAX
// 00570a99: CALL core_mirror.cpp_setupMirrorReflection_FUN_005214c0
//   XREF to: 005214c0 (UNCONDITIONAL_CALL)
// 00570a9e: ADD ESP,0x10
// 00570aa1: PUSH 0x1
// 00570aa3: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00570aa9: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00570aaa: CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   XREF to: 0048ce10 (UNCONDITIONAL_CALL)
// 00570aaf: ADD ESP,0x8
// 00570ab2: INC ESI
// 00570ab3: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 00570ab8: PUSH ESI
// 00570ab9: MOV EDX,dword ptr [EAX + 0x3c]
// 00570abc: PUSH EAX
// 00570abd: CALL dword ptr [EDX + 0x10]
// 00570ac0: ADD ESP,0x8
// 00570ac3: PUSH ESI
// 00570ac4: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570ac9: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00570aca: CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
//   XREF to: 0048cdf0 (UNCONDITIONAL_CALL)
// 00570acf: MOV EAX,dword ptr [EBX + 0x15acb8]
// 00570ad5: ADD EAX,0x1ec
// 00570ada: ADD ESP,0x8
// 00570add: MOV dword ptr [EDI + 0x161650],EAX
// 00570ae3: ADD ESP,0x1c
// 00570ae6: POP EBP
// 00570ae7: POP EDI
// 00570ae8: POP ESI
// 00570ae9: POP EBX
// 00570aea: RET
