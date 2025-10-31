// Name: core_fire.cpp_CToss_process_FUN_004c4000
// Address: 004c4000
// Address Range: [[004c4000, 004c415b]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_process_FUN_004c4000(CToss * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c7067 [UNCONDITIONAL_CALL]
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_box.cpp_CBox_process_FUN_0041e2f0
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_fire.cpp_CFireEffect_FUN_004c8c10
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_process_FUN_004c4000(CToss *this_ptr)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  
  if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x3dc)) {
    local_c = g_CGamePtr->delta_time_float;
    fVar1 = *(float *)(this_ptr->field0_0x0 + 0x3dc) - local_c;
    *(float *)(this_ptr->field0_0x0 + 0x3dc) = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)(this_ptr->field0_0x0 + 0x180),local_c);
      if (*(int *)this_ptr->field0_0x0 != 0) {
        return;
      }
      local_28.x = g_ZeroVector.y;
      local_28.y = g_ZeroVector.z;
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 4));
      local_28.z = local_28.z + (pCVar2->bounds_max).z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)(this_ptr->field0_0x0 + 0x198),(CVector3f *)&fStack_10,
                          &local_28);
      local_18 = (((CBox *)(this_ptr->field0_0x0 + 0x180))->position).x + pCVar3->x;
      fStack_14 = *(float *)(this_ptr->field0_0x0 + 0x184) + pCVar3->y;
      fStack_10 = *(float *)(this_ptr->field0_0x0 + 0x188) + pCVar3->z;
      if (&local_28.y != &local_18) {
        local_28.y = local_18;
        local_28.z = fStack_14;
        local_1c = fStack_10;
      }
      local_28.x = 9.18341e-41;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      return;
    }
    if (*(int *)this_ptr->field0_0x0 == 0) {
      core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      return;
    }
  }
  return;
}


// Assembly code:
// 004c4000: PUSH EBX
//   Label: core_fire.cpp_CToss_process_FUN_004c4000
// 004c4001: PUSH ESI
// 004c4002: SUB ESP,0x28
// 004c4005: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 004c4009: FLD float ptr [EBX + 0x3dc]
// 004c400f: FLDZ
// 004c4011: FCOMPP
// 004c4013: FNSTSW AX
// 004c4015: SAHF
// 004c4016: JNC 0x004c4050
//   XREF to: 004c4050 (CONDITIONAL_JUMP)
// 004c4018: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c401d: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c4023: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004c4027: FLD float ptr [EBX + 0x3dc]
// 004c402d: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 004c4031: LEA ESI,[EBX + 0x180]
// 004c4037: FST float ptr [EBX + 0x3dc]
// 004c403d: FLDZ
// 004c403f: FCOMPP
// 004c4041: FNSTSW AX
// 004c4043: SAHF
// 004c4044: JC 0x004c413f
//   XREF to: 004c413f (CONDITIONAL_JUMP)
// 004c404a: MOV EAX,dword ptr [EBX]
// 004c404c: TEST EAX,EAX
// 004c404e: JZ 0x004c4056
//   XREF to: 004c4056 (CONDITIONAL_JUMP)
// 004c4050: ADD ESP,0x28
//   Label: LAB_004c4050
// 004c4053: POP ESI
// 004c4054: POP EBX
// 004c4055: RET
// 004c4056: PUSH 0x40800000
//   Label: LAB_004c4056
// 004c405b: PUSH 0x42c80000
// 004c4060: PUSH 0x41800000
// 004c4065: PUSH ESI
// 004c4066: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c406c: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004c406d: CALL core_fire.cpp_CFireEffect_FUN_004c8c10
//   XREF to: 004c8c10 (UNCONDITIONAL_CALL)
// 004c4072: ADD ESP,0x14
// 004c4075: MOV ESI,dword ptr [EBX + 0x3e0]
// 004c407b: PUSH ESI
// 004c407c: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004c4081: ADD ESP,0x4
// 004c4084: ADD ESP,0x28
// 004c4087: POP ESI
// 004c4088: POP EBX
// 004c4089: RET
// 004c408a: MOV EAX,[0x03f87558]
//   Label: LAB_004c408a
//   XREF to: 03f87558 (READ)
// 004c408f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 004c4092: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 004c4097: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004c409b: MOV EAX,[0x03f87560]
//   XREF to: 03f87560 (READ)
// 004c40a0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004c40a4: LEA EAX,[EBX + 0x4]
// 004c40a7: PUSH EAX
// 004c40a8: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004c40ad: ADD ESP,0x4
// 004c40b0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 004c40b4: FADD float ptr [EAX + 0x568c]
// 004c40ba: MOV EAX,ESP
// 004c40bc: PUSH EAX
// 004c40bd: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x18] (DATA)
// 004c40c1: PUSH EAX
// 004c40c2: ADD EBX,0x198
// 004c40c8: PUSH EBX
// 004c40c9: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 004c40cd: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004c40d2: FLD float ptr [ESI]
// 004c40d4: FADD float ptr [EAX]
// 004c40d6: ADD ESP,0xc
// 004c40d9: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 004c40dd: FLD float ptr [ESI + 0x4]
// 004c40e0: FADD float ptr [EAX + 0x4]
// 004c40e3: MOV EBX,ESP
// 004c40e5: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 004c40e9: FLD float ptr [ESI + 0x8]
// 004c40ec: FADD float ptr [EAX + 0x8]
// 004c40ef: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 004c40f3: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 004c40f7: CMP EBX,EAX
// 004c40f9: JZ 0x004c4112
//   XREF to: 004c4112 (CONDITIONAL_JUMP)
// 004c40fb: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 004c40ff: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 004c4102: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 004c4106: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004c410a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 004c410e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004c4112: PUSH 0xffff
//   Label: LAB_004c4112
// 004c4117: PUSH 0x0
// 004c4119: PUSH 0x10000
// 004c411e: PUSH 0x20000
// 004c4123: PUSH 0x0
// 004c4125: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x30] (DATA)
// 004c4129: PUSH EAX
// 004c412a: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c4130: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004c4131: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c4136: ADD ESP,0x1c
// 004c4139: ADD ESP,0x28
// 004c413c: POP ESI
// 004c413d: POP EBX
// 004c413e: RET
// 004c413f: PUSH dword ptr [ESP + 0x24]
//   Label: LAB_004c413f
//   XREF to: Stack[-0xc] (READ)
// 004c4143: PUSH ESI
// 004c4144: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 004c4149: MOV EAX,dword ptr [EBX]
// 004c414b: ADD ESP,0x8
// 004c414e: TEST EAX,EAX
// 004c4150: JZ 0x004c408a
//   XREF to: 004c408a (CONDITIONAL_JUMP)
// 004c4156: ADD ESP,0x28
// 004c4159: POP ESI
// 004c415a: POP EBX
// 004c415b: RET
