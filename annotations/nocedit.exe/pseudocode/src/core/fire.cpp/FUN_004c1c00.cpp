// Name: core_fire.cpp_FUN_004c1c00
// Address: 004c1c00
// Address Range: [[004c1c00, 004c1ce2]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c1c00()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7d00 (004c7d00) at 004c7d52 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629ce3 = 3
//   float FLOAT_00629ce7 = 0.3333333
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void core_fire_cpp_FUN_004c1c00(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  CParticle *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  float *in_stack_0000001c;
  float in_stack_00000020;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40 [2];
  float fStack_20;
  float fStack_18;
  float local_10;
  
  bVar6 = 0;
  local_74 = *in_stack_00000008 + in_stack_00000008[3];
  local_70 = in_stack_00000008[1] + in_stack_00000008[4];
  local_6c = in_stack_00000008[2] + in_stack_00000008[5];
  local_44 = local_74 + in_stack_00000008[6];
  local_80 = local_44 / FLOAT_00629ce3;
  local_40[0].x = local_70 + in_stack_00000008[7];
  local_40[0].y = local_6c + in_stack_00000008[8];
  local_7c = local_40[0].x * FLOAT_00629ce7;
  local_78 = local_40[0].y * FLOAT_00629ce7;
  if (&local_58.z != &local_80) {
    local_58.z = local_80;
    local_4c = local_7c;
    local_48 = local_78;
  }
  in_stack_00000004[1].previous_position.y = *in_stack_0000000c;
  in_stack_00000004[1].previous_position.z = in_stack_0000000c[1];
  in_stack_00000004[1].collision_result = (int)in_stack_0000000c[2];
  in_stack_00000004[1].vtable = (CParticle_vtable *)*in_stack_00000010;
  in_stack_00000004[2].position.x = (float)in_stack_00000010[1];
  in_stack_00000004[2].position.y = (float)in_stack_00000010[2];
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,3.1415927);
  in_stack_00000004[1].previous_position.x = 0.0;
  in_stack_00000004[1].gravity_acceleration = fVar2;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  in_stack_00000004[1].collision_flag = (int)fVar3;
  local_58.y = *in_stack_00000008 - local_48;
  local_58.z = in_stack_00000008[1] - local_44;
  pfVar5 = &in_stack_00000004[2].position.z;
  local_4c = in_stack_00000008[2] - local_40[0].x;
  if (pfVar5 != &local_58.y) {
    *pfVar5 = local_58.y;
    in_stack_00000004[2].velocity.x = local_58.z;
    in_stack_00000004[2].velocity.y = local_4c;
  }
  fVar3 = in_stack_00000008[4];
  pfVar5 = &in_stack_00000004[2].velocity.z;
  fVar1 = in_stack_00000008[5];
  if (pfVar5 != (float *)&stack0xffffff64) {
    *pfVar5 = in_stack_00000008[3] - local_48;
    in_stack_00000004[2].lifetime_remaining = fVar3 - local_44;
    in_stack_00000004[2].gravity_acceleration = fVar1 - local_40[0].x;
  }
  local_90 = in_stack_00000008[6] - local_48;
  local_8c = in_stack_00000008[7] - local_44;
  local_88 = in_stack_00000008[8] - local_40[0].x;
  if ((float *)&in_stack_00000004[2].collision_flag != &local_90) {
    in_stack_00000004[2].collision_flag = (int)local_90;
    in_stack_00000004[2].previous_position.x = local_8c;
    in_stack_00000004[2].previous_position.y = local_88;
  }
  pfVar5 = &in_stack_00000004[1].position.y;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *in_stack_0000001c;
    in_stack_0000001c = in_stack_0000001c + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  in_stack_00000004[1].position.x = in_stack_00000020;
  local_84 = (float)in_stack_00000004[2].collision_flag - in_stack_00000004[2].position.z;
  local_80 = in_stack_00000004[2].previous_position.x - in_stack_00000004[2].velocity.x;
  local_7c = in_stack_00000004[2].previous_position.y - in_stack_00000004[2].velocity.y;
  fStack_20 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80) *
              (float)DOUBLE_00629ceb;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  fVar7 = (float10)fcos((float10)fVar3);
  fVar8 = (float10)fcos((float10)fVar2);
  fVar9 = (float10)fsin((float10)fVar3);
  fVar10 = (float10)fsin((float10)fVar2);
  local_58.y = (float)(fVar10 * (float10)fStack_18);
  local_58.x = (float)((float10)fStack_18 * fVar7 * fVar8);
  local_58.z = (float)((float10)fStack_18 * fVar9 * fVar8);
  core_particle_cpp_CParticle_setup_FUN_00545680(in_stack_00000004,local_40,&local_58);
  return;
}


// Assembly code:
// 004c1c00: PUSH EBX
//   Label: core_fire.cpp_FUN_004c1c00
// 004c1c01: PUSH ESI
// 004c1c02: PUSH EDI
// 004c1c03: SUB ESP,0x98
// 004c1c09: MOV EBX,dword ptr [ESP + 0xa8]
// 004c1c10: MOV ESI,dword ptr [ESP + 0xac]
// 004c1c17: MOV ECX,dword ptr [ESP + 0xb0]
// 004c1c1e: MOV EDI,dword ptr [ESP + 0xb4]
// 004c1c25: LEA EDX,[ESI + 0xc]
// 004c1c28: FLD float ptr [ESI]
// 004c1c2a: FADD float ptr [EDX]
// 004c1c2c: FSTP float ptr [ESP + 0x30]
// 004c1c30: FLD float ptr [ESI + 0x4]
// 004c1c33: FADD float ptr [EDX + 0x4]
// 004c1c36: LEA EAX,[ESI + 0x18]
// 004c1c39: FSTP float ptr [ESP + 0x34]
// 004c1c3d: FLD float ptr [ESI + 0x8]
// 004c1c40: FADD float ptr [EDX + 0x8]
// 004c1c43: FLD float ptr [ESP + 0x30]
// 004c1c47: FXCH
// 004c1c49: FSTP float ptr [ESP + 0x38]
// 004c1c4d: FADD float ptr [EAX]
// 004c1c4f: FST float ptr [ESP + 0x60]
// 004c1c53: FDIV float ptr [0x00629ce3]
//   XREF to: 00629ce3 (READ)
// 004c1c59: FLD float ptr [ESP + 0x34]
// 004c1c5d: FADD float ptr [EAX + 0x4]
// 004c1c60: FLD float ptr [ESP + 0x38]
// 004c1c64: FXCH
// 004c1c66: FST float ptr [ESP + 0x64]
// 004c1c6a: FXCH
// 004c1c6c: FADD float ptr [EAX + 0x8]
// 004c1c6f: FXCH
// 004c1c71: FLD float ptr [0x00629ce7]
//   XREF to: 00629ce7 (READ)
// 004c1c77: FXCH
// 004c1c79: FMUL ST1
// 004c1c7b: FXCH ST2
// 004c1c7d: FST float ptr [ESP + 0x68]
// 004c1c81: FMULP
// 004c1c83: LEA EDX,[ESP + 0x54]
// 004c1c87: LEA EAX,[ESP + 0x24]
// 004c1c8b: FXCH
// 004c1c8d: FSTP float ptr [ESP + 0x28]
// 004c1c91: FSTP float ptr [ESP + 0x2c]
// 004c1c95: FSTP float ptr [ESP + 0x24]
// 004c1c99: CMP EDX,EAX
// 004c1c9b: JZ 0x004c1cb5
//   XREF to: 004c1cb5 (CONDITIONAL_JUMP)
// 004c1c9d: MOV EAX,dword ptr [ESP + 0x24]
// 004c1ca1: MOV dword ptr [ESP + 0x54],EAX
// 004c1ca5: MOV EAX,dword ptr [ESP + 0x28]
// 004c1ca9: MOV dword ptr [ESP + 0x58],EAX
// 004c1cad: MOV EAX,dword ptr [ESP + 0x2c]
// 004c1cb1: MOV dword ptr [ESP + 0x5c],EAX
// 004c1cb5: MOV EAX,dword ptr [ECX]
//   Label: LAB_004c1cb5
// 004c1cb7: MOV dword ptr [EBX + 0x60],EAX
// 004c1cba: MOV EAX,dword ptr [ECX + 0x4]
// 004c1cbd: MOV dword ptr [EBX + 0x64],EAX
// 004c1cc0: MOV EAX,dword ptr [ECX + 0x8]
// 004c1cc3: MOV dword ptr [EBX + 0x68],EAX
// 004c1cc6: MOV EAX,dword ptr [EDI]
// 004c1cc8: MOV dword ptr [EBX + 0x6c],EAX
// 004c1ccb: MOV EAX,dword ptr [EDI + 0x4]
// 004c1cce: MOV dword ptr [EBX + 0x70],EAX
// 004c1cd1: PUSH 0x40490fdb
// 004c1cd6: MOV EAX,dword ptr [EDI + 0x8]
// 004c1cd9: PUSH 0x0
// 004c1cdb: MOV dword ptr [EBX + 0x74],EAX
// 004c1cde: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
