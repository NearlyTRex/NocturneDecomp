// Name: core_weapon.cpp_CWeapon_FUN_005ee4a0
// Address: 005ee4a0
// Address Range: [[005ee4a0, 005ee630]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee4a0(CWeapon * this_ptr)
// Globals:
//   float FLOAT_00657b21 = 0.3490658
//   float FLOAT_00657b25 = 15
//   float FLOAT_00657b29 = 0.06666667
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.base.position.x
//   undefined4 g_CDemonLightInstance.base.base.position.y
//   undefined4 g_CDemonLightInstance.base.base.position.z
//   undefined4 DAT_02d7eb00
//   undefined4 g_CDemonLightInstance.base.base.projection_scale
//   undefined4 g_CDemonLightInstance.base.max_distance
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   undefined4 g_CDemonLightInstance.field17_0x1cbc
//   undefined4 g_CDemonLightInstance.antialiasing_enabled
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.auto_save_blocked
//   undefined4 g_CHeroClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03f95d7c
//   undefined4 DAT_03f95d98
//   undefined4 DAT_03f95d9c
//   undefined4 DAT_03f95db8
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   core_set.cpp_CDemonSet_FUN_0056d110

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee4a0(CWeapon *this_ptr)

{
  CVector3f *input_local_point;
  CDemonActor *pCVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  float in_stack_00000010;
  float in_stack_00000014;
  float class_name_hash;
  float fStack_10;
  
  input_local_point =
       (CVector3f *)(*(this_ptr->base_actor).vtable[1].renderOpaque)(&this_ptr->base_actor);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,(CVector3f *)&stack0xffffffec,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.field17_0x1cbc = 1;
  if ((int *)&stack0x00000000 != g_CDemonLightInstance.base.base.rotation_matrix.m[0] + 1) {
    g_CDemonLightInstance.base.base.position.x = (int)fStack_10;
    g_CDemonLightInstance.base.base.position.y = unaff_EBP;
    g_CDemonLightInstance.base.base.position.z = unaff_ESI;
  }
  class_name_hash = (this_ptr->base_actor).orient.pitch + FLOAT_00657b21;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
             (CVector3f *)&stack0xffffffe4);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.projection_scale = 32.0;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  pCVar1 = (*((this_ptr->base_actor).vtable)->getCarrier)(&this_ptr->base_actor);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,(uint)class_name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) &&
     (in_stack_00000010 = *(float *)(pCVar1[0x176].create_event + 0x30),
     in_stack_00000010 < FLOAT_00657b25)) {
    in_stack_00000014 = in_stack_00000010 * FLOAT_00657b29;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
            (&g_CDemonLightInstance,in_stack_00000014);
  if (g_CGamePtr->auto_save_blocked == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)&DAT_03f95d7c,(CColor3f *)&stack0x00000008);
  _DAT_03f95db8 = 0x8000;
  DAT_03f95d98 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360((CDemonGlobe *)&DAT_03f95d7c,3.0);
  _DAT_03f95d9c = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 005ee4a0: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee4a0
// 005ee4a1: PUSH ESI
// 005ee4a2: PUSH EBP
// 005ee4a3: SUB ESP,0x2c
// 005ee4a6: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005ee4aa: MOV EDX,ESP
// 005ee4ac: PUSH EDX
// 005ee4ad: MOV EAX,dword ptr [EBX + 0x154]
// 005ee4b3: PUSH EBX
// 005ee4b4: CALL dword ptr [EAX + 0xf4]
// 005ee4ba: ADD ESP,0x8
// 005ee4bd: PUSH EAX
// 005ee4be: LEA EAX,[ESP + 0x1c]
// 005ee4c2: PUSH EAX
// 005ee4c3: PUSH EBX
// 005ee4c4: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005ee4c9: MOV EDX,0x1
// 005ee4ce: LEA EAX,[ESP + 0x24]
// 005ee4d2: ADD ESP,0xc
// 005ee4d5: MOV dword ptr [0x02d807a4],EDX
//   XREF to: 02d807a4 (WRITE)
// 005ee4db: MOV dword ptr [0x02d807ac],EDX
//   XREF to: 02d807ac (WRITE)
// 005ee4e1: CMP EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 005ee4e6: JZ 0x005ee503
//   XREF to: 005ee503 (CONDITIONAL_JUMP)
// 005ee4e8: MOV EAX,dword ptr [ESP + 0x18]
// 005ee4ec: MOV [0x02d7eaf4],EAX
//   XREF to: 02d7eaf4 (WRITE)
// 005ee4f1: MOV EAX,dword ptr [ESP + 0x1c]
// 005ee4f5: MOV [0x02d7eaf8],EAX
//   XREF to: 02d7eaf8 (WRITE)
// 005ee4fa: MOV EAX,dword ptr [ESP + 0x20]
// 005ee4fe: MOV [0x02d7eafc],EAX
//   XREF to: 02d7eafc (WRITE)
// 005ee503: LEA EDX,[EBX + 0x30]
//   Label: LAB_005ee503
// 005ee506: MOV EAX,dword ptr [EDX]
// 005ee508: MOV dword ptr [ESP + 0xc],EAX
// 005ee50c: LEA EAX,[EDX + 0x4]
// 005ee50f: MOV EAX,dword ptr [EAX]
// 005ee511: MOV dword ptr [ESP + 0x10],EAX
// 005ee515: LEA EAX,[EDX + 0x8]
// 005ee518: MOV ESI,0x42000000
// 005ee51d: MOV EAX,dword ptr [EAX]
// 005ee51f: MOV EBP,0x1
// 005ee524: MOV dword ptr [ESP + 0x14],EAX
// 005ee528: LEA EAX,[ESP + 0xc]
// 005ee52c: FLD float ptr [ESP + 0xc]
// 005ee530: PUSH EAX
// 005ee531: FADD float ptr [0x00657b21]
//   XREF to: 00657b21 (READ)
// 005ee537: PUSH 0x2d7eb00
//   XREF to: 02d7eb00 (DATA)
// 005ee53c: FSTP float ptr [ESP + 0x14]
// 005ee540: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005ee545: ADD ESP,0x8
// 005ee548: MOV EDX,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 005ee54e: MOV EAX,0x3f800000
// 005ee553: PUSH EDX
// 005ee554: MOV dword ptr [0x02d7ec30],ESI
//   XREF to: 02d7ec30 (WRITE)
// 005ee55a: MOV dword ptr [ESP + 0x2c],EAX
// 005ee55e: PUSH EBX
// 005ee55f: MOV EAX,dword ptr [EBX + 0x154]
// 005ee565: MOV dword ptr [0x02d7eb28],ESI
//   XREF to: 02d7eb28 (WRITE)
// 005ee56b: MOV dword ptr [0x02d807c0],EBP
//   XREF to: 02d807c0 (WRITE)
// 005ee571: CALL dword ptr [EAX + 0x8c]
// 005ee577: ADD ESP,0x4
// 005ee57a: PUSH EAX
// 005ee57b: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ee580: ADD ESP,0x8
// 005ee583: TEST EAX,EAX
// 005ee585: JZ 0x005ee5ae
//   XREF to: 005ee5ae (CONDITIONAL_JUMP)
// 005ee587: MOV EAX,dword ptr [EAX + 0x1f738]
// 005ee58d: MOV dword ptr [ESP + 0x24],EAX
// 005ee591: FLD float ptr [ESP + 0x24]
// 005ee595: FCOMP float ptr [0x00657b25]
//   XREF to: 00657b25 (READ)
// 005ee59b: FNSTSW AX
// 005ee59d: SAHF
// 005ee59e: JNC 0x005ee5ae
//   XREF to: 005ee5ae (CONDITIONAL_JUMP)
// 005ee5a0: FLD float ptr [ESP + 0x24]
// 005ee5a4: FMUL float ptr [0x00657b29]
//   XREF to: 00657b29 (READ)
// 005ee5aa: FSTP float ptr [ESP + 0x28]
// 005ee5ae: PUSH dword ptr [ESP + 0x28]
//   Label: LAB_005ee5ae
// 005ee5b2: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 005ee5b7: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 005ee5bc: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005ee5c1: MOV ECX,dword ptr [EAX + 0x244]
//   XREF to: 02d81ce0 (READ)
// 005ee5c7: ADD ESP,0x8
// 005ee5ca: TEST ECX,ECX
// 005ee5cc: JNZ 0x005ee5d5
//   XREF to: 005ee5d5 (CONDITIONAL_JUMP)
// 005ee5ce: ADD ESP,0x2c
// 005ee5d1: POP EBP
// 005ee5d2: POP ESI
// 005ee5d3: POP EBX
// 005ee5d4: RET
// 005ee5d5: PUSH EDI
//   Label: LAB_005ee5d5
// 005ee5d6: LEA EAX,[ESP + 0x1c]
// 005ee5da: PUSH EAX
// 005ee5db: PUSH 0x3f95d7c
//   XREF to: 03f95d7c (DATA)
// 005ee5e0: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 005ee5e5: ADD ESP,0x8
// 005ee5e8: MOV EBX,0x8000
// 005ee5ed: PUSH 0x40400000
// 005ee5f2: MOV AH,0x20
// 005ee5f4: PUSH 0x3f95d7c
//   XREF to: 03f95d7c (DATA)
// 005ee5f9: MOV dword ptr [0x03f95db8],EBX
//   XREF to: 03f95db8 (WRITE)
// 005ee5ff: MOV byte ptr [0x03f95d98],AH
//   XREF to: 03f95d98 (WRITE)
// 005ee605: CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   XREF to: 00471360 (UNCONDITIONAL_CALL)
// 005ee60a: ADD ESP,0x8
// 005ee60d: PUSH 0x3f95d7c
//   XREF to: 03f95d7c (DATA)
// 005ee612: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005ee618: XOR ESI,ESI
// 005ee61a: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005ee61b: MOV dword ptr [0x03f95d9c],ESI
//   XREF to: 03f95d9c (WRITE)
// 005ee621: CALL core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 0056d110 (UNCONDITIONAL_CALL)
// 005ee626: ADD ESP,0x8
// 005ee629: POP EDI
// 005ee62a: ADD ESP,0x2c
// 005ee62d: POP EBP
// 005ee62e: POP ESI
// 005ee62f: POP EBX
// 005ee630: RET
