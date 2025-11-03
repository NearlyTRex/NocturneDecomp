// Name: core_fire.cpp_CCrater_process_FUN_004c4550
// Address: 004c4550
// Address Range: [[004c4550, 004c461c]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_process_FUN_004c4550(CCrater * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c7085 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629e43 = 0.200000000000000
//   float FLOAT_00629e4b = -0.2000000
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_process_FUN_004c4550(CCrater *this_ptr)

{
  CVector3f *position;
  BADSPACEBASE *in_ESP;
  CVector3f local_18;
  
  if (*(int *)this_ptr->field0_0x0 != 0) {
    if ((0.0 < *(float *)(this_ptr->field0_0x0 + 8)) &&
       (*(float *)(this_ptr->field0_0x0 + 8) =
             *(float *)(this_ptr->field0_0x0 + 8) - g_CGamePtr->delta_time_float,
       *(float *)(this_ptr->field0_0x0 + 8) < 0.0)) {
      this_ptr->field0_0x0[4] = '\x01';
      this_ptr->field0_0x0[5] = '\0';
      this_ptr->field0_0x0[6] = '\0';
      this_ptr->field0_0x0[7] = '\0';
      this_ptr->field0_0x0[8] = '\0';
      this_ptr->field0_0x0[9] = '\0';
      this_ptr->field0_0x0[10] = '\0';
      this_ptr->field0_0x0[0xb] = '\0';
    }
    *(float *)(this_ptr->field0_0x0 + 0x18) =
         g_CGamePtr->delta_time_float + *(float *)(this_ptr->field0_0x0 + 0x18);
    if ((float)DOUBLE_00629e43 < *(float *)(this_ptr->field0_0x0 + 0x18)) {
      *(float *)(this_ptr->field0_0x0 + 0x18) =
           *(float *)(this_ptr->field0_0x0 + 0x18) + FLOAT_00629e4b;
      local_18.x = 0.0;
      local_18.y = 1.0;
      position = (CVector3f *)(this_ptr->field0_0x0 + 0x1c);
      local_18.z = 0.0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                  (g_CFireEffectPtr,position,1.0,&local_18,0xffff);
        position = position + 1;
      } while (position != (CVector3f *)(this_ptr->field0_0x0 + 0x40));
    }
  }
  return;
}


// Assembly code:
// 004c4550: PUSH EBX
//   Label: core_fire.cpp_CCrater_process_FUN_004c4550
// 004c4551: PUSH ESI
// 004c4552: PUSH EBP
// 004c4553: SUB ESP,0xc
// 004c4556: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c455a: CMP dword ptr [EBX],0x0
// 004c455d: JZ 0x004c45e0
//   XREF to: 004c45e0 (CONDITIONAL_JUMP)
// 004c4563: FLD float ptr [EBX + 0x8]
// 004c4566: FLDZ
// 004c4568: FCOMPP
// 004c456a: FNSTSW AX
// 004c456c: SAHF
// 004c456d: JC 0x004c45e7
//   XREF to: 004c45e7 (CONDITIONAL_JUMP)
// 004c4573: MOV ESI,dword ptr [0x0067b654]
//   Label: LAB_004c4573
//   XREF to: 0067b654 (READ)
// 004c4579: LEA EAX,[EBX + 0x18]
// 004c457c: FLD float ptr [ESI + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c4582: FADD float ptr [EAX]
// 004c4584: FSTP float ptr [EAX]
// 004c4586: FLD float ptr [EBX + 0x18]
// 004c4589: FCOMP double ptr [0x00629e43]
//   XREF to: 00629e43 (READ)
// 004c458f: FNSTSW AX
// 004c4591: SAHF
// 004c4592: JBE 0x004c45e0
//   XREF to: 004c45e0 (CONDITIONAL_JUMP)
// 004c4594: FLD float ptr [EBX + 0x18]
// 004c4597: MOV ESI,0x3f800000
// 004c459c: FADD float ptr [0x00629e4b]
//   XREF to: 00629e4b (READ)
// 004c45a2: XOR ECX,ECX
// 004c45a4: FSTP float ptr [EBX + 0x18]
// 004c45a7: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 004c45aa: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004c45ae: LEA ESI,[EBX + 0x1c]
// 004c45b1: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004c45b5: MOV EBX,ESI
// 004c45b7: ADD ESI,0x24
// 004c45ba: PUSH 0xffff
//   Label: LAB_004c45ba
// 004c45bf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 004c45c3: PUSH EAX
// 004c45c4: PUSH 0x3f800000
// 004c45c9: PUSH EBX
// 004c45ca: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004c45d0: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 004c45d1: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004c45d6: ADD EBX,0xc
// 004c45d9: ADD ESP,0x14
// 004c45dc: CMP EBX,ESI
// 004c45de: JNZ 0x004c45ba
//   XREF to: 004c45ba (CONDITIONAL_JUMP)
// 004c45e0: ADD ESP,0xc
//   Label: LAB_004c45e0
// 004c45e3: POP EBP
// 004c45e4: POP ESI
// 004c45e5: POP EBX
// 004c45e6: RET
// 004c45e7: MOV ESI,dword ptr [0x0067b654]
//   Label: LAB_004c45e7
//   XREF to: 0067b654 (READ)
// 004c45ed: LEA EAX,[EBX + 0x8]
// 004c45f0: FLD float ptr [ESI + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c45f6: FSUBR float ptr [EAX]
// 004c45f8: FSTP float ptr [EAX]
// 004c45fa: FLD float ptr [EBX + 0x8]
// 004c45fd: FLDZ
// 004c45ff: FCOMPP
// 004c4601: FNSTSW AX
// 004c4603: SAHF
// 004c4604: JBE 0x004c4573
//   XREF to: 004c4573 (CONDITIONAL_JUMP)
// 004c460a: MOV dword ptr [EBX + 0x4],0x1
// 004c4611: MOV dword ptr [EBX + 0x8],0x0
// 004c4618: JMP 0x004c4573
//   XREF to: 004c4573 (UNCONDITIONAL_JUMP)
