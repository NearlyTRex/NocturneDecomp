// Name: core_fire.cpp_CFireEffect_FUN_004c8230
// Address: 004c8230
// Address Range: [[004c8230, 004c8c09]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8230(CFireEffect * this_ptr)
// Cross-references:
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a89bb [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a8d0 (0050a8d0) at 0050ab13 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_FUN_005ee830 (005ee830) at 005ee9c5 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062a073 = 2
//   double DOUBLE_0062a07b = 0.25
//   double DOUBLE_0062a083 = -1
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613a0
//   undefined4 DAT_032613a4
//   undefined4 DAT_032613a8
//   undefined4 DAT_032613b0
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ea0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_fire.cpp_CFireEffect_FUN_004c7eb0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8230(CFireEffect *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  CVector3f *pCVar2;
  CDemonActor *this_ptr_01;
  int iVar3;
  BADSPACEBASE *in_ESP;
  double dVar4;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  SSurfaceInfo *in_stack_00000010;
  int in_stack_00000014;
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a4;
  float local_a0;
  float local_9c;
  double local_98;
  double local_90;
  float *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  float *local_70;
  char *local_6c;
  char *local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  int local_54;
  char *local_50;
  char *local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  char *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  char *local_14;
  
  if (in_stack_00000014 < 3) {
    local_20 = (CVector3f *)in_stack_00000010->field6_0x20;
    local_50 = in_stack_00000010->field6_0x20 + 4;
    local_4c = in_stack_00000010->field6_0x20 + 8;
    local_1c = &in_stack_00000010->hit_position;
    local_18 = (CVector3f *)in_stack_00000010->field8_0x38;
    local_54 = in_stack_00000014 + 1;
    local_60 = in_stack_0000000c + 1;
    local_5c = in_stack_0000000c + 2;
    local_80 = in_stack_00000008 + 1;
    local_58 = in_stack_00000008 + 2;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
                (g_CDemonSetPtr,(float)in_stack_00000010->field2_0x8,
                 (float)(in_stack_00000010->color).r,(float)(in_stack_00000010->color).g,
                 (float)(in_stack_00000010->color).b);
      local_e0.x = *in_stack_00000008;
      local_e0.y = *local_80;
      local_e0.z = *local_58;
      local_134.x = local_e0.x + *in_stack_0000000c;
      local_134.y = local_e0.y + in_stack_0000000c[1];
      local_134.z = local_e0.z + in_stack_0000000c[2];
      local_24 = (char *)core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                                   (g_CDemonSetPtr,&local_e0,&local_134);
      local_90 = (double)(float)local_24;
      if ((local_90 < 0.0) || (1.0 <= local_90)) {
        local_110 = -*in_stack_0000000c;
        local_10c = -in_stack_0000000c[1];
        local_108 = -in_stack_0000000c[2];
        if (&local_a4 != &local_110) {
          local_a4 = local_110;
          local_a0 = local_10c;
          local_9c = local_108;
        }
        local_40 = SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0);
        if (local_40 <= 0.0) {
          local_9c = 0.0;
          local_a0 = 0.0;
          local_a4 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_40;
          local_a4 = local_a4 * fVar1;
          local_a0 = local_a0 * fVar1;
          local_9c = local_9c * fVar1;
        }
      }
      else {
        local_128 = *in_stack_0000000c * (float)local_24;
        local_124 = in_stack_0000000c[1] * (float)local_24;
        local_120 = (float)local_24 * in_stack_0000000c[2];
        local_140.x = *in_stack_00000008 + local_128;
        local_140.y = in_stack_00000008[1] + local_124;
        local_140.z = in_stack_00000008[2] + local_120;
        if (&local_134 != &local_140) {
          local_134.x = local_140.x;
          local_134.y = local_140.y;
          local_134.z = local_140.z;
        }
        if ((CVector3f *)&local_a4 != &g_CDemonSetPtr->collision_normal) {
          local_a4 = (g_CDemonSetPtr->collision_normal).x;
          local_a0 = (g_CDemonSetPtr->collision_normal).y;
          local_9c = (g_CDemonSetPtr->collision_normal).z;
        }
      }
      this_ptr_00 = g_CDemonSetPtr->collision_actor;
      in_stack_00000010->reflectivity = 0.0;
      in_stack_00000010->angle_copy = 0.0;
      in_stack_00000010->alpha_or_wetness = 0.0;
      local_14 = local_24;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        pCVar2 = core_actor_cpp_CDemonActor_FUN_00408f10(this_ptr_00);
        if (pCVar2 != local_20) {
          local_20->x = pCVar2->x;
          local_20->y = pCVar2->y;
          local_20->z = pCVar2->z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_FUN_00408f10(this_ptr_00);
        if (pCVar2 != local_1c) {
          local_1c->x = pCVar2->x;
          local_1c->y = pCVar2->y;
          local_1c->z = pCVar2->z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_FUN_00408ea0(this_ptr_00);
        if (pCVar2 != local_18) {
          local_18->x = pCVar2->x;
          local_18->y = pCVar2->y;
          local_18->z = pCVar2->z;
        }
        if ((((in_stack_00000014 == 0) && (in_stack_00000010->field4_0x18 != 0)) &&
            (this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                                     (this_ptr_00,g_CCharacterClassInfo.name_hash),
            this_ptr_01 != (CDemonActor *)0x0)) &&
           (iVar3 = (*(this_ptr_01->metadata).vtable[1].renderOpaque)(this_ptr_01), iVar3 != 0)) {
          (in_stack_00000010->color).g = 0xff;
          (in_stack_00000010->color).b = 0;
          (in_stack_00000010->color).r = 0xff;
        }
        local_ec = *in_stack_0000000c;
        local_e8 = *local_60;
        local_e4 = *local_5c;
        local_48 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_48 <= 0.0) {
          local_e8 = 0.0;
          local_ec = 0.0;
          local_e4 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_48;
          local_ec = local_ec * fVar1;
          local_e8 = local_e8 * fVar1;
          local_e4 = local_e4 * fVar1;
        }
        fVar1 = local_e4 * in_stack_0000000c[2] +
                local_ec * *in_stack_0000000c + local_e8 * in_stack_0000000c[1];
        local_98 = (double)fVar1;
        if ((float)DOUBLE_0062a083 < fVar1) {
          if (local_98 < 1.0) {
            dVar4 = crt_math_c_acos_FUN_00600162(local_98);
            local_2c = (float)dVar4;
          }
          else {
            local_2c = 0.0;
          }
        }
        else {
          local_2c = 3.1415927;
        }
        in_stack_00000010->angle_or_rotation = local_2c;
        (*((this_ptr_00->metadata).vtable)->getSurfaceProperties)(this_ptr_00,in_stack_00000010);
      }
      local_28 = 0.0;
      if (in_stack_00000010->field5_0x1c != 0) {
        local_28 = in_stack_00000010->intensity;
      }
      if (0.0 < in_stack_00000010->alpha_or_wetness) {
        local_30 = (local_9c * in_stack_0000000c[2] +
                   local_a4 * *in_stack_0000000c + local_a0 * in_stack_0000000c[1]) * FLOAT_0062a073
        ;
        local_d4 = local_a4 * local_30;
        local_d0 = local_a0 * local_30;
        local_cc = local_9c * local_30;
        local_bc = local_d4 - *in_stack_0000000c;
        local_b8 = local_d0 - in_stack_0000000c[1];
        local_f8 = -local_bc;
        local_b4 = local_cc - in_stack_0000000c[2];
        local_f4 = -local_b8;
        local_f0 = -local_b4;
        if (&local_bc != &local_f8) {
          local_bc = local_f8;
          local_b8 = local_f4;
          local_b4 = local_f0;
        }
        local_34 = &local_1c->y;
        local_3c = &local_1c->z;
        local_38 = &local_18->y;
        local_44 = &local_18->z;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        core_fire_cpp_CFireEffect_FUN_004c8230(this_ptr);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        local_28 = (1.0 - in_stack_00000010->alpha_or_wetness) * (float)DOUBLE_0062a07b * local_28;
      }
      if (in_stack_00000010->reflectivity <= 0.0) goto LAB_004c8ae9;
      if ((in_stack_00000010->reflectivity != 1.0) ||
         (in_stack_00000010->angle_copy != in_stack_00000010->angle_or_rotation)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    }
    local_104 = *in_stack_0000000c;
    local_100 = in_stack_0000000c[1];
    local_fc = in_stack_0000000c[2];
    local_7c = in_stack_00000010->field6_0x20;
    local_78 = in_stack_00000010->field6_0x20 + 4;
    local_74 = in_stack_00000010->field6_0x20 + 8;
    local_64 = &(in_stack_00000010->hit_position).y;
    local_70 = &(in_stack_00000010->hit_position).z;
    local_6c = in_stack_00000010->field8_0x38;
    local_68 = in_stack_00000010->field8_0x38 + 4;
    local_14 = in_stack_00000010->field8_0x38 + 8;
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    core_fire_cpp_CFireEffect_FUN_004c8230(this_ptr);
    local_28 = (1.0 - in_stack_00000010->reflectivity) * (float)DOUBLE_0062a07b * local_28;
LAB_004c8ae9:
    core_fire_cpp_CFireEffect_FUN_004c7eb0(this_ptr);
  }
  return;
}


// Assembly code:
// 004c8230: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8230
// 004c8231: PUSH ESI
// 004c8232: PUSH EDI
// 004c8233: PUSH EBP
// 004c8234: MOV EBP,ESP
// 004c8236: SUB ESP,0x280
// 004c823c: SUB EBP,0x6e
// 004c823f: MOV ESI,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0xc] (READ)
// 004c8245: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x10] (READ)
// 004c824b: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x14] (READ)
// 004c8251: CMP EDX,0x2
// 004c8254: JG 0x004c8b1b
//   XREF to: 004c8b1b (CONDITIONAL_JUMP)
// 004c825a: LEA EAX,[EBX + 0x20]
// 004c825d: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004c8260: LEA EAX,[EBX + 0x24]
// 004c8263: MOV dword ptr [EBP + 0x2e],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004c8266: LEA EAX,[EBX + 0x28]
// 004c8269: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004c826c: LEA EAX,[EBX + 0x2c]
// 004c826f: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004c8272: LEA EAX,[EBX + 0x38]
// 004c8275: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004c8278: LEA EAX,[EDX + 0x1]
// 004c827b: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004c827e: LEA EAX,[ESI + 0x4]
// 004c8281: MOV dword ptr [EBP + 0x1e],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004c8284: LEA EAX,[ESI + 0x8]
// 004c8287: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004c828a: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x8] (READ)
// 004c8290: ADD EAX,0x4
// 004c8293: MOV dword ptr [EBP + -0x2],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 004c8296: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x8] (READ)
// 004c829c: ADD EAX,0x8
// 004c829f: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004c82a2: MOV ECX,dword ptr [EBX + 0x14]
//   Label: LAB_004c82a2
// 004c82a5: PUSH ECX
// 004c82a6: MOV EDI,dword ptr [EBX + 0x10]
// 004c82a9: PUSH EDI
// 004c82aa: MOV EAX,dword ptr [EBX + 0xc]
// 004c82ad: PUSH EAX
// 004c82ae: MOV EDX,dword ptr [EBX + 0x8]
// 004c82b1: PUSH EDX
// 004c82b2: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c82b8: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004c82b9: CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
//   XREF to: 00574270 (UNCONDITIONAL_CALL)
// 004c82be: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x8] (READ)
// 004c82c4: MOV EAX,dword ptr [EAX]
// 004c82c6: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 004c82c9: MOV EAX,dword ptr [EBP + -0x2]
//   XREF to: Stack[-0x80] (READ)
// 004c82cc: MOV EAX,dword ptr [EAX]
// 004c82ce: MOV dword ptr [EBP + -0x5e],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 004c82d1: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x58] (READ)
// 004c82d4: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004c82da: ADD ESP,0x14
// 004c82dd: MOV EAX,dword ptr [EAX]
// 004c82df: FLD float ptr [EBP + -0x62]
//   XREF to: Stack[-0xe0] (READ)
// 004c82e2: MOV dword ptr [EBP + -0x5a],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 004c82e5: FLD float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xdc] (READ)
// 004c82e8: FLD float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xd8] (READ)
// 004c82eb: FXCH ST2
// 004c82ed: FADD float ptr [ESI]
// 004c82ef: LEA EAX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x134] (DATA)
// 004c82f5: FSTP float ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x134] (WRITE)
// 004c82fb: PUSH EAX
// 004c82fc: FADD float ptr [ESI + 0x4]
// 004c82ff: LEA EAX,[EBP + -0x62]
//   XREF to: Stack[-0xe0] (DATA)
// 004c8302: FSTP float ptr [EBP + 0xffffff4e]
//   XREF to: Stack[-0x130] (WRITE)
// 004c8308: PUSH EAX
// 004c8309: FADD float ptr [ESI + 0x8]
// 004c830c: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004c830d: FSTP float ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x12c] (WRITE)
// 004c8313: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 004c8318: FLDZ
// 004c831a: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004c831d: ADD ESP,0xc
// 004c8320: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x14] (READ)
// 004c8323: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004c8326: FLD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x24] (READ)
// 004c8329: FSTP double ptr [EBP + -0x12]
//   XREF to: Stack[-0x90] (WRITE)
// 004c832c: FCOMP double ptr [EBP + -0x12]
//   XREF to: Stack[-0x90] (READ)
// 004c832f: FNSTSW AX
// 004c8331: SAHF
// 004c8332: JA 0x004c8b23
//   XREF to: 004c8b23 (CONDITIONAL_JUMP)
// 004c8338: FLD1
// 004c833a: FCOMP double ptr [EBP + -0x12]
//   XREF to: Stack[-0x90] (READ)
// 004c833d: FNSTSW AX
// 004c833f: SAHF
// 004c8340: JBE 0x004c8b23
//   XREF to: 004c8b23 (CONDITIONAL_JUMP)
// 004c8346: FLD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x24] (READ)
// 004c8349: FLD float ptr [ESI]
// 004c834b: FMUL ST1
// 004c834d: FSTP float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x128] (WRITE)
// 004c8353: FLD float ptr [ESI + 0x4]
// 004c8356: FMUL ST1
// 004c8358: FSTP float ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x124] (WRITE)
// 004c835e: FMUL float ptr [ESI + 0x8]
// 004c8361: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x8] (READ)
// 004c8367: FSTP float ptr [EBP + 0xffffff5e]
//   XREF to: Stack[-0x120] (WRITE)
// 004c836d: FLD float ptr [EAX]
// 004c836f: FADD float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x128] (READ)
// 004c8375: FSTP float ptr [EBP + 0xffffff3e]
//   XREF to: Stack[-0x140] (WRITE)
// 004c837b: FLD float ptr [EAX + 0x4]
// 004c837e: FADD float ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x124] (READ)
// 004c8384: LEA EDX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x134] (DATA)
// 004c838a: FSTP float ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x13c] (WRITE)
// 004c8390: FLD float ptr [EAX + 0x8]
// 004c8393: FADD float ptr [EBP + 0xffffff5e]
//   XREF to: Stack[-0x120] (READ)
// 004c8399: LEA EAX,[EBP + 0xffffff3e]
//   XREF to: Stack[-0x140] (DATA)
// 004c839f: FSTP float ptr [EBP + 0xffffff46]
//   XREF to: Stack[-0x138] (WRITE)
// 004c83a5: CMP EDX,EAX
// 004c83a7: JZ 0x004c83cd
//   XREF to: 004c83cd (CONDITIONAL_JUMP)
// 004c83a9: MOV EAX,dword ptr [EBP + 0xffffff3e]
//   XREF to: Stack[-0x140] (DATA)
// 004c83af: MOV dword ptr [EBP + 0xffffff4a],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 004c83b5: MOV EAX,dword ptr [EBP + 0xffffff42]
//   XREF to: Stack[-0x13c] (READ)
// 004c83bb: MOV dword ptr [EBP + 0xffffff4e],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 004c83c1: MOV EAX,dword ptr [EBP + 0xffffff46]
//   XREF to: Stack[-0x138] (READ)
// 004c83c7: MOV dword ptr [EBP + 0xffffff52],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 004c83cd: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_004c83cd
//   XREF to: 006810c8 (READ)
// 004c83d3: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xa4] (DATA)
// 004c83d6: ADD EDI,0x14d128
// 004c83dc: CMP EAX,EDI
// 004c83de: JZ 0x004c83f1
//   XREF to: 004c83f1 (CONDITIONAL_JUMP)
// 004c83e0: MOV EAX,dword ptr [EDI]
//   XREF to: 032613a0 (READ)
// 004c83e2: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004c83e5: MOV EAX,dword ptr [EDI + 0x4]
//   XREF to: 032613a4 (READ)
// 004c83e8: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004c83eb: MOV EAX,dword ptr [EDI + 0x8]
//   XREF to: 032613a8 (READ)
// 004c83ee: MOV dword ptr [EBP + -0x1e],EAX
//   Label: LAB_004c83ee
//   XREF to: Stack[-0x9c] (WRITE)
// 004c83f1: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_004c83f1
//   XREF to: 006810c8 (READ)
// 004c83f7: MOV EDI,dword ptr [EDI + 0x14d144]
//   XREF to: 032613bc (READ)
// 004c83fd: MOV dword ptr [EBX + 0x48],0x0
// 004c8404: MOV dword ptr [EBX + 0x4c],0x0
// 004c840b: MOV dword ptr [EBX + 0x50],0x0
// 004c8412: TEST EDI,EDI
// 004c8414: JZ 0x004c8594
//   XREF to: 004c8594 (CONDITIONAL_JUMP)
// 004c841a: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x8] (READ)
// 004c8420: PUSH EAX
// 004c8421: LEA EAX,[EBP + -0x4a]
//   XREF to: Stack[-0xc8] (DATA)
// 004c8424: PUSH EAX
// 004c8425: PUSH EDI
// 004c8426: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004c842b: MOV EDX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x20] (READ)
// 004c842e: ADD ESP,0xc
// 004c8431: CMP EAX,EDX
// 004c8433: JZ 0x004c8445
//   XREF to: 004c8445 (CONDITIONAL_JUMP)
// 004c8435: MOV ECX,dword ptr [EAX]
// 004c8437: MOV dword ptr [EDX],ECX
// 004c8439: MOV ECX,dword ptr [EAX + 0x4]
// 004c843c: MOV dword ptr [EDX + 0x4],ECX
// 004c843f: MOV ECX,dword ptr [EAX + 0x8]
// 004c8442: MOV dword ptr [EDX + 0x8],ECX
// 004c8445: MOV EAX,[0x006810c8]
//   Label: LAB_004c8445
//   XREF to: 006810c8 (READ)
// 004c844a: ADD EAX,0x14d138
// 004c844f: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 004c8450: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xb0] (DATA)
// 004c8453: PUSH EAX
// 004c8454: PUSH EDI
// 004c8455: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004c845a: MOV ECX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x1c] (READ)
// 004c845d: ADD ESP,0xc
// 004c8460: CMP EAX,ECX
// 004c8462: JZ 0x004c8474
//   XREF to: 004c8474 (CONDITIONAL_JUMP)
// 004c8464: MOV EDX,dword ptr [EAX]
// 004c8466: MOV dword ptr [ECX],EDX
// 004c8468: MOV EDX,dword ptr [EAX + 0x4]
// 004c846b: MOV dword ptr [ECX + 0x4],EDX
// 004c846e: MOV EDX,dword ptr [EAX + 0x8]
// 004c8471: MOV dword ptr [ECX + 0x8],EDX
// 004c8474: MOV EAX,[0x006810c8]
//   Label: LAB_004c8474
//   XREF to: 006810c8 (READ)
// 004c8479: ADD EAX,0x14d128
// 004c847e: PUSH EAX
//   XREF to: 032613a0 (DATA)
// 004c847f: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x11c] (DATA)
// 004c8485: PUSH EAX
// 004c8486: PUSH EDI
// 004c8487: CALL core_actor.cpp_CDemonActor_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 004c848c: MOV EDX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x18] (READ)
// 004c848f: ADD ESP,0xc
// 004c8492: CMP EAX,EDX
// 004c8494: JZ 0x004c84a6
//   XREF to: 004c84a6 (CONDITIONAL_JUMP)
// 004c8496: MOV ECX,dword ptr [EAX]
// 004c8498: MOV dword ptr [EDX],ECX
// 004c849a: MOV ECX,dword ptr [EAX + 0x4]
// 004c849d: MOV dword ptr [EDX + 0x4],ECX
// 004c84a0: MOV ECX,dword ptr [EAX + 0x8]
// 004c84a3: MOV dword ptr [EDX + 0x8],ECX
// 004c84a6: CMP dword ptr [EBP + 0x92],0x0
//   Label: LAB_004c84a6
//   XREF to: Stack[0x14] (READ)
// 004c84ad: JNZ 0x004c84f2
//   XREF to: 004c84f2 (CONDITIONAL_JUMP)
// 004c84af: CMP dword ptr [EBX + 0x18],0x0
// 004c84b3: JZ 0x004c84f2
//   XREF to: 004c84f2 (CONDITIONAL_JUMP)
// 004c84b5: MOV EDX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 004c84bb: PUSH EDX
// 004c84bc: PUSH EDI
// 004c84bd: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004c84c2: ADD ESP,0x8
// 004c84c5: TEST EAX,EAX
// 004c84c7: JZ 0x004c84f2
//   XREF to: 004c84f2 (CONDITIONAL_JUMP)
// 004c84c9: PUSH EAX
// 004c84ca: MOV EDX,dword ptr [EAX + 0x154]
// 004c84d0: CALL dword ptr [EDX + 0xf4]
// 004c84d6: ADD ESP,0x4
// 004c84d9: TEST EAX,EAX
// 004c84db: JZ 0x004c84f2
//   XREF to: 004c84f2 (CONDITIONAL_JUMP)
// 004c84dd: MOV dword ptr [EBX + 0x10],0xff
// 004c84e4: MOV dword ptr [EBX + 0x14],0x0
// 004c84eb: MOV dword ptr [EBX + 0xc],0xff
// 004c84f2: MOV EAX,dword ptr [ESI]
//   Label: LAB_004c84f2
// 004c84f4: MOV dword ptr [EBP + -0x6e],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 004c84f7: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x60] (READ)
// 004c84fa: MOV EAX,dword ptr [EAX]
// 004c84fc: MOV dword ptr [EBP + -0x6a],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 004c84ff: FLD float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xe8] (READ)
// 004c8502: FMUL ST0
// 004c8504: MOV EAX,dword ptr [EBP + 0x22]
//   XREF to: Stack[-0x5c] (READ)
// 004c8507: FLD float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xec] (READ)
// 004c850a: FMUL ST0
// 004c850c: MOV EAX,dword ptr [EAX]
// 004c850e: FADDP
// 004c8510: MOV dword ptr [EBP + -0x66],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 004c8513: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xe4] (READ)
// 004c8516: FMUL ST0
// 004c8518: FADDP
// 004c851a: FSQRT
// 004c851c: FST float ptr [EBP + 0x36]
//   XREF to: Stack[-0x48] (WRITE)
// 004c851f: FLDZ
// 004c8521: FCOMPP
// 004c8523: FNSTSW AX
// 004c8525: SAHF
// 004c8526: JNC 0x004c8bc1
//   XREF to: 004c8bc1 (CONDITIONAL_JUMP)
// 004c852c: FLD1
// 004c852e: FLD float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xec] (READ)
// 004c8531: FXCH
// 004c8533: FDIV float ptr [EBP + 0x36]
//   XREF to: Stack[-0x48] (READ)
// 004c8536: FXCH
// 004c8538: FMUL ST1
// 004c853a: FLD float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xe8] (READ)
// 004c853d: FMUL ST2
// 004c853f: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xe4] (READ)
// 004c8542: FMULP ST3
// 004c8544: FXCH
// 004c8546: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xec] (WRITE)
// 004c8549: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xe8] (WRITE)
// 004c854c: FSTP float ptr [EBP + -0x66]
//   XREF to: Stack[-0xe4] (WRITE)
// 004c854f: FLD float ptr [EBP + -0x6a]
//   Label: LAB_004c854f
//   XREF to: Stack[-0xe8] (READ)
// 004c8552: FMUL float ptr [ESI + 0x4]
// 004c8555: FLD float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xec] (READ)
// 004c8558: FMUL float ptr [ESI]
// 004c855a: FADDP
// 004c855c: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xe4] (READ)
// 004c855f: FMUL float ptr [ESI + 0x8]
// 004c8562: FADDP
// 004c8564: FST double ptr [EBP + -0x1a]
//   XREF to: Stack[-0x98] (WRITE)
// 004c8567: FCOMP double ptr [0x0062a083]
//   XREF to: 0062a083 (READ)
// 004c856d: FNSTSW AX
// 004c856f: SAHF
// 004c8570: JA 0x004c8bd1
//   XREF to: 004c8bd1 (CONDITIONAL_JUMP)
// 004c8576: MOV dword ptr [EBP + 0x52],0x40490fdb
//   XREF to: Stack[-0x2c] (WRITE)
// 004c857d: MOV EAX,dword ptr [EBP + 0x52]
//   Label: LAB_004c857d
//   XREF to: Stack[-0x2c] (READ)
// 004c8580: PUSH EBX
// 004c8581: MOV dword ptr [EBX + 0x44],EAX
// 004c8584: PUSH EDI
// 004c8585: MOV EAX,dword ptr [EDI + 0x154]
// 004c858b: CALL dword ptr [EAX + 0xac]
// 004c8591: ADD ESP,0x8
// 004c8594: XOR EDX,EDX
//   Label: LAB_004c8594
// 004c8596: MOV ECX,dword ptr [EBX + 0x1c]
// 004c8599: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004c859c: TEST ECX,ECX
// 004c859e: JZ 0x004c85a5
//   XREF to: 004c85a5 (CONDITIONAL_JUMP)
// 004c85a0: MOV EAX,dword ptr [EBX]
// 004c85a2: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004c85a5: FLD float ptr [EBX + 0x50]
//   Label: LAB_004c85a5
// 004c85a8: FLDZ
// 004c85aa: FCOMPP
// 004c85ac: FNSTSW AX
// 004c85ae: SAHF
// 004c85af: JNC 0x004c8877
//   XREF to: 004c8877 (CONDITIONAL_JUMP)
// 004c85b5: FLD float ptr [EBP + -0x22]
//   XREF to: Stack[-0xa0] (READ)
// 004c85b8: FMUL float ptr [ESI + 0x4]
// 004c85bb: FLD float ptr [EBP + -0x26]
//   XREF to: Stack[-0xa4] (READ)
// 004c85be: FMUL float ptr [ESI]
// 004c85c0: FADDP
// 004c85c2: FLD float ptr [EBP + -0x1e]
//   XREF to: Stack[-0x9c] (READ)
// 004c85c5: FMUL float ptr [ESI + 0x8]
// 004c85c8: FADDP
// 004c85ca: FMUL float ptr [0x0062a073]
//   XREF to: 0062a073 (READ)
// 004c85d0: FLD float ptr [EBP + -0x26]
//   XREF to: Stack[-0xa4] (READ)
// 004c85d3: FXCH
// 004c85d5: FSTP float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x30] (WRITE)
// 004c85d8: FMUL float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x30] (READ)
// 004c85db: FLD float ptr [EBP + -0x22]
//   XREF to: Stack[-0xa0] (READ)
// 004c85de: FMUL float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x30] (READ)
// 004c85e1: FLD float ptr [EBP + -0x1e]
//   XREF to: Stack[-0x9c] (READ)
// 004c85e4: FMUL float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x30] (READ)
// 004c85e7: LEA EDX,[EBP + -0x7a]
//   XREF to: Stack[-0xf8] (DATA)
// 004c85ea: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xbc] (DATA)
// 004c85ed: FXCH ST2
// 004c85ef: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xd4] (WRITE)
// 004c85f2: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xd0] (WRITE)
// 004c85f5: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xcc] (WRITE)
// 004c85f8: FLD float ptr [EBP + -0x52]
//   XREF to: Stack[-0xd0] (READ)
// 004c85fb: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xd4] (READ)
// 004c85fe: FSUB float ptr [ESI]
// 004c8600: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xcc] (READ)
// 004c8603: FXCH
// 004c8605: FST float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xbc] (WRITE)
// 004c8608: FXCH ST2
// 004c860a: FSUB float ptr [ESI + 0x4]
// 004c860d: FXCH ST2
// 004c860f: FCHS
// 004c8611: FXCH ST2
// 004c8613: FST float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xb8] (WRITE)
// 004c8616: FXCH
// 004c8618: FSUB float ptr [ESI + 0x8]
// 004c861b: FXCH
// 004c861d: FCHS
// 004c861f: FXCH
// 004c8621: FSTP float ptr [EBP + -0x36]
//   XREF to: Stack[-0xb4] (WRITE)
// 004c8624: FXCH
// 004c8626: FSTP float ptr [EBP + -0x7a]
//   XREF to: Stack[-0xf8] (WRITE)
// 004c8629: FSTP float ptr [EBP + -0x76]
//   XREF to: Stack[-0xf4] (WRITE)
// 004c862c: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xb4] (READ)
// 004c862f: FCHS
// 004c8631: FSTP float ptr [EBP + -0x72]
//   XREF to: Stack[-0xf0] (WRITE)
// 004c8634: CMP EAX,EDX
// 004c8636: JZ 0x004c864a
//   XREF to: 004c864a (CONDITIONAL_JUMP)
// 004c8638: MOV EAX,dword ptr [EBP + -0x7a]
//   XREF to: Stack[-0xf8] (READ)
// 004c863b: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004c863e: MOV EAX,dword ptr [EBP + -0x76]
//   XREF to: Stack[-0xf4] (READ)
// 004c8641: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 004c8644: MOV EAX,dword ptr [EBP + -0x72]
//   XREF to: Stack[-0xf0] (READ)
// 004c8647: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 004c864a: MOV EAX,dword ptr [EBX]
//   Label: LAB_004c864a
// 004c864c: MOV dword ptr [EBP + 0xfffffdee],EAX
//   XREF to: Stack[-0x290] (WRITE)
// 004c8652: MOV EAX,dword ptr [EBX + 0x4]
// 004c8655: MOV dword ptr [EBP + 0xfffffdf2],EAX
//   XREF to: Stack[-0x28c] (WRITE)
// 004c865b: MOV EAX,dword ptr [EBX + 0x8]
// 004c865e: MOV dword ptr [EBP + 0xfffffdf6],EAX
//   XREF to: Stack[-0x288] (WRITE)
// 004c8664: MOV EAX,dword ptr [EBX + 0xc]
// 004c8667: MOV dword ptr [EBP + 0xfffffdfa],EAX
//   XREF to: Stack[-0x284] (WRITE)
// 004c866d: MOV EAX,dword ptr [EBX + 0x10]
// 004c8670: MOV dword ptr [EBP + 0xfffffdfe],EAX
//   XREF to: Stack[-0x280] (WRITE)
// 004c8676: MOV EAX,dword ptr [EBX + 0x14]
// 004c8679: MOV dword ptr [EBP + 0xfffffe02],EAX
//   XREF to: Stack[-0x27c] (WRITE)
// 004c867f: MOV EAX,dword ptr [EBX + 0x18]
// 004c8682: MOV dword ptr [EBP + 0xfffffe06],EAX
//   XREF to: Stack[-0x278] (WRITE)
// 004c8688: MOV EAX,dword ptr [EBX + 0x1c]
// 004c868b: MOV dword ptr [EBP + 0xfffffe0a],EAX
//   XREF to: Stack[-0x274] (WRITE)
// 004c8691: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x20] (READ)
// 004c8694: MOV EAX,dword ptr [EAX]
// 004c8696: MOV dword ptr [EBP + 0xfffffe0e],EAX
//   XREF to: Stack[-0x270] (WRITE)
// 004c869c: MOV EAX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x50] (READ)
// 004c869f: MOV EAX,dword ptr [EAX]
// 004c86a1: MOV dword ptr [EBP + 0xfffffe12],EAX
//   XREF to: Stack[-0x26c] (WRITE)
// 004c86a7: MOV EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x4c] (READ)
// 004c86aa: MOV EAX,dword ptr [EAX]
// 004c86ac: MOV dword ptr [EBP + 0xfffffe16],EAX
//   XREF to: Stack[-0x268] (WRITE)
// 004c86b2: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x1c] (READ)
// 004c86b5: MOV EAX,dword ptr [EAX]
// 004c86b7: MOV dword ptr [EBP + 0xfffffe1a],EAX
//   XREF to: Stack[-0x264] (WRITE)
// 004c86bd: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x1c] (READ)
// 004c86c0: ADD EAX,0x4
// 004c86c3: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004c86c6: MOV EAX,dword ptr [EAX]
// 004c86c8: MOV dword ptr [EBP + 0xfffffe1e],EAX
//   XREF to: Stack[-0x260] (WRITE)
// 004c86ce: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x1c] (READ)
// 004c86d1: ADD EAX,0x8
// 004c86d4: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004c86d7: MOV EAX,dword ptr [EAX]
// 004c86d9: MOV dword ptr [EBP + 0xfffffe22],EAX
//   XREF to: Stack[-0x25c] (WRITE)
// 004c86df: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x18] (READ)
// 004c86e2: MOV EAX,dword ptr [EAX]
// 004c86e4: MOV dword ptr [EBP + 0xfffffe26],EAX
//   XREF to: Stack[-0x258] (WRITE)
// 004c86ea: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x18] (READ)
// 004c86ed: ADD EAX,0x4
// 004c86f0: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004c86f3: MOV EAX,dword ptr [EAX]
// 004c86f5: MOV dword ptr [EBP + 0xfffffe2a],EAX
//   XREF to: Stack[-0x254] (WRITE)
// 004c86fb: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x18] (READ)
// 004c86fe: ADD EAX,0x8
// 004c8701: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004c8704: MOV EAX,dword ptr [EAX]
// 004c8706: MOV dword ptr [EBP + 0xfffffe2e],EAX
//   XREF to: Stack[-0x250] (WRITE)
// 004c870c: MOV EAX,dword ptr [EBX + 0x44]
// 004c870f: MOV dword ptr [EBP + 0xfffffe32],EAX
//   XREF to: Stack[-0x24c] (WRITE)
// 004c8715: MOV EAX,dword ptr [EBX + 0x48]
// 004c8718: MOV dword ptr [EBP + 0xfffffe36],EAX
//   XREF to: Stack[-0x248] (WRITE)
// 004c871e: MOV EAX,dword ptr [EBX + 0x4c]
// 004c8721: MOV dword ptr [EBP + 0xfffffe3a],EAX
//   XREF to: Stack[-0x244] (WRITE)
// 004c8727: MOV EAX,dword ptr [EBX + 0x50]
// 004c872a: FLD float ptr [EBP + 0xfffffdee]
//   XREF to: Stack[-0x290] (READ)
// 004c8730: MOV dword ptr [EBP + 0xfffffe3e],EAX
//   XREF to: Stack[-0x240] (WRITE)
// 004c8736: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c873b: FMUL float ptr [EBX + 0x50]
// 004c873e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004c873f: FSTP float ptr [EBP + 0xfffffdee]
//   XREF to: Stack[-0x290] (WRITE)
// 004c8745: CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   XREF to: 00573e10 (UNCONDITIONAL_CALL)
// 004c874a: ADD ESP,0x4
// 004c874d: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c8753: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c8754: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004c8759: MOV EAX,dword ptr [EBX]
// 004c875b: MOV dword ptr [EBP + 0xfffffe42],EAX
//   XREF to: Stack[-0x23c] (WRITE)
// 004c8761: MOV EAX,dword ptr [EBX + 0x4]
// 004c8764: MOV dword ptr [EBP + 0xfffffe46],EAX
//   XREF to: Stack[-0x238] (WRITE)
// 004c876a: MOV EAX,dword ptr [EBX + 0x8]
// 004c876d: MOV dword ptr [EBP + 0xfffffe4a],EAX
//   XREF to: Stack[-0x234] (WRITE)
// 004c8773: MOV EAX,dword ptr [EBX + 0xc]
// 004c8776: MOV dword ptr [EBP + 0xfffffe4e],EAX
//   XREF to: Stack[-0x230] (WRITE)
// 004c877c: MOV EAX,dword ptr [EBX + 0x10]
// 004c877f: MOV dword ptr [EBP + 0xfffffe52],EAX
//   XREF to: Stack[-0x22c] (WRITE)
// 004c8785: MOV EAX,dword ptr [EBX + 0x14]
// 004c8788: MOV dword ptr [EBP + 0xfffffe56],EAX
//   XREF to: Stack[-0x228] (WRITE)
// 004c878e: MOV EAX,dword ptr [EBX + 0x18]
// 004c8791: MOV dword ptr [EBP + 0xfffffe5a],EAX
//   XREF to: Stack[-0x224] (WRITE)
// 004c8797: MOV EAX,dword ptr [EBX + 0x1c]
// 004c879a: MOV dword ptr [EBP + 0xfffffe5e],EAX
//   XREF to: Stack[-0x220] (WRITE)
// 004c87a0: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x20] (READ)
// 004c87a3: MOV EAX,dword ptr [EAX]
// 004c87a5: MOV dword ptr [EBP + 0xfffffe62],EAX
//   XREF to: Stack[-0x21c] (WRITE)
// 004c87ab: MOV EAX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x50] (READ)
// 004c87ae: MOV EAX,dword ptr [EAX]
// 004c87b0: MOV dword ptr [EBP + 0xfffffe66],EAX
//   XREF to: Stack[-0x218] (WRITE)
// 004c87b6: MOV EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x4c] (READ)
// 004c87b9: MOV EAX,dword ptr [EAX]
// 004c87bb: MOV dword ptr [EBP + 0xfffffe6a],EAX
//   XREF to: Stack[-0x214] (WRITE)
// 004c87c1: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x1c] (READ)
// 004c87c4: MOV EAX,dword ptr [EAX]
// 004c87c6: MOV dword ptr [EBP + 0xfffffe6e],EAX
//   XREF to: Stack[-0x210] (WRITE)
// 004c87cc: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x34] (READ)
// 004c87cf: MOV EAX,dword ptr [EAX]
// 004c87d1: MOV dword ptr [EBP + 0xfffffe72],EAX
//   XREF to: Stack[-0x20c] (WRITE)
// 004c87d7: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x3c] (READ)
// 004c87da: MOV EAX,dword ptr [EAX]
// 004c87dc: MOV dword ptr [EBP + 0xfffffe76],EAX
//   XREF to: Stack[-0x208] (WRITE)
// 004c87e2: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x18] (READ)
// 004c87e5: MOV EAX,dword ptr [EAX]
// 004c87e7: MOV dword ptr [EBP + 0xfffffe7a],EAX
//   XREF to: Stack[-0x204] (WRITE)
// 004c87ed: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x38] (READ)
// 004c87f0: MOV EAX,dword ptr [EAX]
// 004c87f2: MOV dword ptr [EBP + 0xfffffe7e],EAX
//   XREF to: Stack[-0x200] (WRITE)
// 004c87f8: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x44] (READ)
// 004c87fb: MOV EAX,dword ptr [EAX]
// 004c87fd: MOV dword ptr [EBP + 0xfffffe82],EAX
//   XREF to: Stack[-0x1fc] (WRITE)
// 004c8803: MOV EAX,dword ptr [EBX + 0x44]
// 004c8806: MOV dword ptr [EBP + 0xfffffe86],EAX
//   XREF to: Stack[-0x1f8] (WRITE)
// 004c880c: MOV EAX,dword ptr [EBX + 0x48]
// 004c880f: MOV dword ptr [EBP + 0xfffffe8a],EAX
//   XREF to: Stack[-0x1f4] (WRITE)
// 004c8815: MOV EAX,dword ptr [EBX + 0x4c]
// 004c8818: ADD ESP,0x4
// 004c881b: MOV dword ptr [EBP + 0xfffffe8e],EAX
//   XREF to: Stack[-0x1f0] (WRITE)
// 004c8821: MOV ECX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x54] (READ)
// 004c8824: MOV EAX,dword ptr [EBX + 0x50]
// 004c8827: PUSH ECX
// 004c8828: MOV dword ptr [EBP + 0xfffffe92],EAX
//   XREF to: Stack[-0x1ec] (WRITE)
// 004c882e: LEA EAX,[EBP + 0xfffffe42]
//   XREF to: Stack[-0x23c] (DATA)
// 004c8834: PUSH EAX
// 004c8835: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xbc] (DATA)
// 004c8838: PUSH EAX
// 004c8839: LEA EAX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x134] (DATA)
// 004c883f: PUSH EAX
// 004c8840: MOV EAX,dword ptr [EBP + 0x82]
//   XREF to: Stack[0x4] (READ)
// 004c8846: PUSH EAX
// 004c8847: CALL core_fire.cpp_CFireEffect_FUN_004c8230
//   XREF to: 004c8230 (UNCONDITIONAL_CALL)
// 004c884c: ADD ESP,0x14
// 004c884f: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c8855: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c8856: CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   XREF to: 00573fc0 (UNCONDITIONAL_CALL)
// 004c885b: FLD float ptr [EBX + 0x50]
// 004c885e: FLD1
// 004c8860: FSUBRP
// 004c8862: FMUL double ptr [0x0062a07b]
//   XREF to: 0062a07b (READ)
// 004c8868: FLD float ptr [EBP + 0x56]
//   XREF to: Stack[-0x28] (READ)
// 004c886b: FXCH
// 004c886d: FMUL ST1
// 004c886f: ADD ESP,0x4
// 004c8872: FSTP ST1
// 004c8874: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x28] (WRITE)
// 004c8877: FLD float ptr [EBX + 0x48]
//   Label: LAB_004c8877
// 004c887a: FLDZ
// 004c887c: FCOMPP
// 004c887e: FNSTSW AX
// 004c8880: SAHF
// 004c8881: JNC 0x004c8ae9
//   XREF to: 004c8ae9 (CONDITIONAL_JUMP)
// 004c8887: CMP dword ptr [EBX + 0x48],0x3f800000
// 004c888e: JNZ 0x004c889f
//   XREF to: 004c889f (CONDITIONAL_JUMP)
// 004c8890: FLD float ptr [EBX + 0x4c]
// 004c8893: FCOMP float ptr [EBX + 0x44]
// 004c8896: FNSTSW AX
// 004c8898: SAHF
// 004c8899: JZ 0x004c8bf5
//   XREF to: 004c8bf5 (CONDITIONAL_JUMP)
// 004c889f: MOV EAX,dword ptr [ESI]
//   Label: LAB_004c889f
// 004c88a1: MOV dword ptr [EBP + 0xffffff7a],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 004c88a7: LEA EAX,[ESI + 0x4]
// 004c88aa: MOV EAX,dword ptr [EAX]
// 004c88ac: MOV dword ptr [EBP + 0xffffff7e],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 004c88b2: LEA EAX,[ESI + 0x8]
// 004c88b5: MOV EAX,dword ptr [EAX]
// 004c88b7: MOV dword ptr [EBP + -0x7e],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 004c88ba: MOV EAX,dword ptr [EBX]
// 004c88bc: MOV dword ptr [EBP + 0xfffffeea],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 004c88c2: MOV EAX,dword ptr [EBX + 0x4]
// 004c88c5: MOV dword ptr [EBP + 0xfffffeee],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 004c88cb: MOV EAX,dword ptr [EBX + 0x8]
// 004c88ce: MOV dword ptr [EBP + 0xfffffef2],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 004c88d4: MOV EAX,dword ptr [EBX + 0xc]
// 004c88d7: MOV dword ptr [EBP + 0xfffffef6],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 004c88dd: MOV EAX,dword ptr [EBX + 0x10]
// 004c88e0: MOV dword ptr [EBP + 0xfffffefa],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 004c88e6: MOV EAX,dword ptr [EBX + 0x14]
// 004c88e9: MOV dword ptr [EBP + 0xfffffefe],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 004c88ef: MOV EAX,dword ptr [EBX + 0x18]
// 004c88f2: MOV dword ptr [EBP + 0xffffff02],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 004c88f8: MOV EAX,dword ptr [EBX + 0x1c]
// 004c88fb: MOV dword ptr [EBP + 0xffffff06],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 004c8901: LEA EAX,[EBX + 0x20]
// 004c8904: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004c8907: MOV EAX,dword ptr [EAX]
// 004c8909: MOV dword ptr [EBP + 0xffffff0a],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 004c890f: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x7c] (READ)
// 004c8912: ADD EAX,0x4
// 004c8915: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004c8918: MOV EAX,dword ptr [EAX]
// 004c891a: MOV dword ptr [EBP + 0xffffff0e],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 004c8920: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x7c] (READ)
// 004c8923: ADD EAX,0x8
// 004c8926: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004c8929: MOV EAX,dword ptr [EAX]
// 004c892b: LEA ESI,[EBX + 0x2c]
// 004c892e: MOV dword ptr [EBP + 0xffffff12],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 004c8934: MOV EAX,dword ptr [ESI]
// 004c8936: MOV dword ptr [EBP + 0xffffff16],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 004c893c: LEA EAX,[ESI + 0x4]
// 004c893f: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004c8942: MOV EAX,dword ptr [EAX]
// 004c8944: MOV dword ptr [EBP + 0xffffff1a],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 004c894a: LEA EAX,[ESI + 0x8]
// 004c894d: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004c8950: MOV EAX,dword ptr [EAX]
// 004c8952: MOV dword ptr [EBP + 0xffffff1e],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 004c8958: LEA EAX,[EBX + 0x38]
// 004c895b: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004c895e: MOV EAX,dword ptr [EAX]
// 004c8960: MOV dword ptr [EBP + 0xffffff22],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 004c8966: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x6c] (READ)
// 004c8969: ADD EAX,0x4
// 004c896c: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004c896f: MOV EAX,dword ptr [EAX]
// 004c8971: MOV dword ptr [EBP + 0xffffff26],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 004c8977: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x6c] (READ)
// 004c897a: ADD EAX,0x8
// 004c897d: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004c8980: MOV EAX,dword ptr [EAX]
// 004c8982: MOV dword ptr [EBP + 0xffffff2a],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 004c8988: MOV EAX,dword ptr [EBX + 0x44]
// 004c898b: MOV dword ptr [EBP + 0xffffff2e],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 004c8991: MOV EAX,dword ptr [EBX + 0x48]
// 004c8994: MOV dword ptr [EBP + 0xffffff32],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 004c899a: MOV EAX,dword ptr [EBX + 0x4c]
// 004c899d: MOV dword ptr [EBP + 0xffffff36],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 004c89a3: MOV EAX,dword ptr [EBX + 0x50]
// 004c89a6: FLD float ptr [EBP + 0xfffffeea]
//   XREF to: Stack[-0x194] (READ)
// 004c89ac: MOV dword ptr [EBP + 0xffffff3a],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 004c89b2: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c89b7: FMUL float ptr [EBX + 0x48]
// 004c89ba: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004c89bb: FSTP float ptr [EBP + 0xfffffeea]
//   XREF to: Stack[-0x194] (WRITE)
// 004c89c1: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004c89c6: ADD ESP,0x4
// 004c89c9: PUSH EDI
// 004c89ca: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c89d0: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c89d1: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004c89d6: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x14] (READ)
// 004c89dc: ADD ESP,0x8
// 004c89df: INC EAX
// 004c89e0: PUSH EAX
// 004c89e1: MOV EAX,dword ptr [EBX]
// 004c89e3: MOV dword ptr [EBP + 0xfffffe96],EAX
//   XREF to: Stack[-0x1e8] (WRITE)
// 004c89e9: MOV EAX,dword ptr [EBX + 0x4]
// 004c89ec: MOV dword ptr [EBP + 0xfffffe9a],EAX
//   XREF to: Stack[-0x1e4] (WRITE)
// 004c89f2: MOV EAX,dword ptr [EBX + 0x8]
// 004c89f5: MOV dword ptr [EBP + 0xfffffe9e],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 004c89fb: MOV EAX,dword ptr [EBX + 0xc]
// 004c89fe: MOV dword ptr [EBP + 0xfffffea2],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 004c8a04: MOV EAX,dword ptr [EBX + 0x10]
// 004c8a07: MOV dword ptr [EBP + 0xfffffea6],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004c8a0d: MOV EAX,dword ptr [EBX + 0x14]
// 004c8a10: MOV dword ptr [EBP + 0xfffffeaa],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004c8a16: MOV EAX,dword ptr [EBX + 0x18]
// 004c8a19: MOV dword ptr [EBP + 0xfffffeae],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004c8a1f: MOV EAX,dword ptr [EBX + 0x1c]
// 004c8a22: MOV dword ptr [EBP + 0xfffffeb2],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004c8a28: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x7c] (READ)
// 004c8a2b: MOV EAX,dword ptr [EAX]
// 004c8a2d: MOV dword ptr [EBP + 0xfffffeb6],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004c8a33: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x78] (READ)
// 004c8a36: MOV EAX,dword ptr [EAX]
// 004c8a38: MOV dword ptr [EBP + 0xfffffeba],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004c8a3e: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x74] (READ)
// 004c8a41: MOV EAX,dword ptr [EAX]
// 004c8a43: MOV dword ptr [EBP + 0xfffffebe],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 004c8a49: MOV EAX,dword ptr [ESI]
// 004c8a4b: MOV dword ptr [EBP + 0xfffffec2],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 004c8a51: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x64] (READ)
// 004c8a54: MOV EAX,dword ptr [EAX]
// 004c8a56: MOV dword ptr [EBP + 0xfffffec6],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 004c8a5c: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x70] (READ)
// 004c8a5f: MOV EAX,dword ptr [EAX]
// 004c8a61: MOV dword ptr [EBP + 0xfffffeca],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 004c8a67: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x6c] (READ)
// 004c8a6a: MOV EAX,dword ptr [EAX]
// 004c8a6c: MOV dword ptr [EBP + 0xfffffece],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004c8a72: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x68] (READ)
// 004c8a75: MOV EAX,dword ptr [EAX]
// 004c8a77: MOV dword ptr [EBP + 0xfffffed2],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004c8a7d: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x14] (READ)
// 004c8a80: MOV EAX,dword ptr [EAX]
// 004c8a82: MOV dword ptr [EBP + 0xfffffed6],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 004c8a88: MOV EAX,dword ptr [EBX + 0x44]
// 004c8a8b: MOV dword ptr [EBP + 0xfffffeda],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004c8a91: MOV EAX,dword ptr [EBX + 0x48]
// 004c8a94: MOV dword ptr [EBP + 0xfffffede],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004c8a9a: MOV EAX,dword ptr [EBX + 0x4c]
// 004c8a9d: MOV dword ptr [EBP + 0xfffffee2],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004c8aa3: MOV EAX,dword ptr [EBX + 0x50]
// 004c8aa6: MOV dword ptr [EBP + 0xfffffee6],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 004c8aac: LEA EAX,[EBP + 0xfffffe96]
//   XREF to: Stack[-0x1e8] (DATA)
// 004c8ab2: PUSH EAX
// 004c8ab3: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x104] (DATA)
// 004c8ab9: PUSH EAX
// 004c8aba: LEA EAX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x134] (DATA)
// 004c8ac0: PUSH EAX
// 004c8ac1: MOV ECX,dword ptr [EBP + 0x82]
//   XREF to: Stack[0x4] (READ)
// 004c8ac7: PUSH ECX
// 004c8ac8: CALL core_fire.cpp_CFireEffect_FUN_004c8230
//   XREF to: 004c8230 (UNCONDITIONAL_CALL)
// 004c8acd: FLD float ptr [EBX + 0x48]
// 004c8ad0: FLD1
// 004c8ad2: FSUBRP
// 004c8ad4: FMUL double ptr [0x0062a07b]
//   XREF to: 0062a07b (READ)
// 004c8ada: FLD float ptr [EBP + 0x56]
//   XREF to: Stack[-0x28] (READ)
// 004c8add: FXCH
// 004c8adf: FMUL ST1
// 004c8ae1: ADD ESP,0x14
// 004c8ae4: FSTP ST1
// 004c8ae6: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x28] (WRITE)
// 004c8ae9: MOV ESI,dword ptr [EBX + 0x14]
//   Label: LAB_004c8ae9
// 004c8aec: PUSH dword ptr [EBX + 0x4]
// 004c8aef: PUSH ESI
// 004c8af0: MOV EDI,dword ptr [EBX + 0x10]
// 004c8af3: PUSH EDI
// 004c8af4: MOV EAX,dword ptr [EBX + 0xc]
// 004c8af7: PUSH EAX
// 004c8af8: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xa4] (DATA)
// 004c8afb: PUSH EAX
// 004c8afc: PUSH dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x28] (READ)
// 004c8aff: LEA EAX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x134] (DATA)
// 004c8b05: PUSH dword ptr [EBX]
// 004c8b07: PUSH EAX
// 004c8b08: LEA EAX,[EBP + -0x62]
//   XREF to: Stack[-0xe0] (DATA)
// 004c8b0b: PUSH EAX
// 004c8b0c: MOV EDX,dword ptr [EBP + 0x82]
//   XREF to: Stack[0x4] (READ)
// 004c8b12: PUSH EDX
// 004c8b13: CALL core_fire.cpp_CFireEffect_FUN_004c7eb0
//   XREF to: 004c7eb0 (UNCONDITIONAL_CALL)
// 004c8b18: ADD ESP,0x28
// 004c8b1b: LEA ESP,[EBP + 0x6e]
//   Label: LAB_004c8b1b
//   XREF to: Stack[-0x10] (DATA)
// 004c8b1e: POP EBP
// 004c8b1f: POP EDI
// 004c8b20: POP ESI
// 004c8b21: POP EBX
// 004c8b22: RET
// 004c8b23: FLD float ptr [ESI]
//   Label: LAB_004c8b23
// 004c8b25: LEA EAX,[EBP + 0xffffff6e]
//   XREF to: Stack[-0x110] (DATA)
// 004c8b2b: LEA EDX,[EBP + -0x26]
//   XREF to: Stack[-0xa4] (DATA)
// 004c8b2e: FCHS
// 004c8b30: FSTP float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x110] (WRITE)
// 004c8b36: FLD float ptr [ESI + 0x4]
// 004c8b39: FCHS
// 004c8b3b: FSTP float ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x10c] (WRITE)
// 004c8b41: FLD float ptr [ESI + 0x8]
// 004c8b44: FCHS
// 004c8b46: FSTP float ptr [EBP + 0xffffff76]
//   XREF to: Stack[-0x108] (WRITE)
// 004c8b4c: CMP EDX,EAX
// 004c8b4e: JZ 0x004c8b6b
//   XREF to: 004c8b6b (CONDITIONAL_JUMP)
// 004c8b50: MOV EAX,dword ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x110] (DATA)
// 004c8b56: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004c8b59: MOV EAX,dword ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x10c] (READ)
// 004c8b5f: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004c8b62: MOV EAX,dword ptr [EBP + 0xffffff76]
//   XREF to: Stack[-0x108] (READ)
// 004c8b68: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004c8b6b: FLD float ptr [EBP + -0x22]
//   Label: LAB_004c8b6b
//   XREF to: Stack[-0xa0] (READ)
// 004c8b6e: FMUL ST0
// 004c8b70: FLD float ptr [EBP + -0x26]
//   XREF to: Stack[-0xa4] (READ)
// 004c8b73: FMUL ST0
// 004c8b75: FADDP
// 004c8b77: FLD float ptr [EBP + -0x1e]
//   XREF to: Stack[-0x9c] (READ)
// 004c8b7a: FMUL ST0
// 004c8b7c: FADDP
// 004c8b7e: FSQRT
// 004c8b80: FST float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x40] (WRITE)
// 004c8b83: FLDZ
// 004c8b85: FCOMPP
// 004c8b87: FNSTSW AX
// 004c8b89: SAHF
// 004c8b8a: JNC 0x004c8bb4
//   XREF to: 004c8bb4 (CONDITIONAL_JUMP)
// 004c8b8c: FLD1
// 004c8b8e: FLD float ptr [EBP + -0x26]
//   XREF to: Stack[-0xa4] (READ)
// 004c8b91: FXCH
// 004c8b93: FDIV float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x40] (READ)
// 004c8b96: FXCH
// 004c8b98: FMUL ST1
// 004c8b9a: FLD float ptr [EBP + -0x22]
//   XREF to: Stack[-0xa0] (READ)
// 004c8b9d: FMUL ST2
// 004c8b9f: FLD float ptr [EBP + -0x1e]
//   XREF to: Stack[-0x9c] (READ)
// 004c8ba2: FMULP ST3
// 004c8ba4: FXCH
// 004c8ba6: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xa4] (WRITE)
// 004c8ba9: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xa0] (WRITE)
// 004c8bac: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0x9c] (WRITE)
// 004c8baf: JMP 0x004c83f1
//   XREF to: 004c83f1 (UNCONDITIONAL_JUMP)
// 004c8bb4: XOR EAX,EAX
//   Label: LAB_004c8bb4
// 004c8bb6: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004c8bb9: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004c8bbc: JMP 0x004c83ee
//   XREF to: 004c83ee (UNCONDITIONAL_JUMP)
// 004c8bc1: XOR ECX,ECX
//   Label: LAB_004c8bc1
// 004c8bc3: MOV dword ptr [EBP + -0x6a],ECX
//   XREF to: Stack[-0xe8] (WRITE)
// 004c8bc6: MOV dword ptr [EBP + -0x6e],ECX
//   XREF to: Stack[-0xec] (WRITE)
// 004c8bc9: MOV dword ptr [EBP + -0x66],ECX
//   XREF to: Stack[-0xe4] (WRITE)
// 004c8bcc: JMP 0x004c854f
//   XREF to: 004c854f (UNCONDITIONAL_JUMP)
// 004c8bd1: FLD1
//   Label: LAB_004c8bd1
// 004c8bd3: FCOMP double ptr [EBP + -0x1a]
//   XREF to: Stack[-0x98] (READ)
// 004c8bd6: FNSTSW AX
// 004c8bd8: SAHF
// 004c8bd9: JA 0x004c8be5
//   XREF to: 004c8be5 (CONDITIONAL_JUMP)
// 004c8bdb: XOR ECX,ECX
// 004c8bdd: MOV dword ptr [EBP + 0x52],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004c8be0: JMP 0x004c857d
//   XREF to: 004c857d (UNCONDITIONAL_JUMP)
// 004c8be5: FLD double ptr [EBP + -0x1a]
//   Label: LAB_004c8be5
//   XREF to: Stack[-0x98] (READ)
// 004c8be8: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 004c8bed: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x2c] (WRITE)
// 004c8bf0: JMP 0x004c857d
//   XREF to: 004c857d (UNCONDITIONAL_JUMP)
// 004c8bf5: PUSH EDI
//   Label: LAB_004c8bf5
// 004c8bf6: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c8bfc: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004c8bfd: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004c8c02: ADD ESP,0x8
// 004c8c05: JMP 0x004c82a2
//   XREF to: 004c82a2 (UNCONDITIONAL_JUMP)
