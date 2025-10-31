// Name: core_manpuz.cpp_FUN_0050a8d0
// Address: 0050a8d0
// Address Range: [[0050a8d0, 0050ab95]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a8d0()
// Cross-references:
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 00509223 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006357d5 = 2
//   float FLOAT_006357d9 = 4
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_fire.cpp_CFireEffect_FUN_004c8230
//   core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   core_manpuz.cpp_FUN_0050aef0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050a8d0(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_manpuz_cpp_FUN_0050a8d0(void)

{
  char *pcVar1;
  char *pcVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  CVector3f local_6c;
  CVector3f local_60 [2];
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_30;
  double local_24;
  char *local_1c;
  char *local_18;
  int local_14;
  
  local_18 = in_stack_00000004[4].create_event + 0x18;
  pcVar2 = local_18 + in_stack_00000008 * 100;
  local_14 = 0;
  if (*(int *)pcVar2 == 0) {
    local_14 = 1;
    iVar4 = core_manpuz_cpp_FUN_0050aef0();
    if ((*(int *)(local_18 + iVar4 * 100) == 0) || (*(float *)(local_18 + iVar4 * 100 + 8) <= 0.0))
    goto LAB_0050a917;
  }
  else {
LAB_0050a917:
    if (local_14 != 0) {
      in_stack_0000000c =
           *(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10) +
           in_stack_0000000c;
      goto LAB_0050a92e;
    }
  }
  in_stack_0000000c =
       *(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10) -
       in_stack_0000000c;
LAB_0050a92e:
  *(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10) =
       in_stack_0000000c;
  local_24 = (double)*(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10)
  ;
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      pcVar1 = in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
    }
    local_1c = pcVar2 + 0x24;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)local_1c,&local_6c,
                        (CVector3f *)(in_stack_00000004[4].create_event + 0xc));
    local_48 = *(float *)(pcVar2 + 0xc) + pCVar3->x;
    local_44 = *(float *)(pcVar2 + 0x10) + pCVar3->y;
    local_40 = *(float *)(pcVar2 + 0x14) + pCVar3->z;
    core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
    local_60[0].x = 0.0;
    local_60[0].y =
         ((float)in_stack_00000004[4].was_created -
         *(float *)(in_stack_00000004[4].create_event + 0x10)) * FLOAT_006357d9;
    local_60[0].z =
         -(in_stack_00000004[0xf].field_224.y * FLOAT_006357d5 +
           *(float *)(in_stack_00000004[4].create_event + 0x14) + in_stack_00000004[4].create_prob)
         * FLOAT_006357d9;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              ((CMatrix3x3f *)local_1c,&local_30,local_60);
    core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0((SLaserInfo *)&stack0xfffffeec);
    core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  pcVar2 = in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  return;
}


// Assembly code:
// 0050a8d0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050a8d0
// 0050a8d1: PUSH ESI
// 0050a8d2: PUSH EDI
// 0050a8d3: PUSH EBP
// 0050a8d4: MOV EBP,ESP
// 0050a8d6: SUB ESP,0x104
// 0050a8dc: SUB EBP,0x76
// 0050a8df: MOV EBX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 0050a8e5: MOV ESI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 0050a8eb: LEA EAX,[ESI*0x4 + 0x0]
// 0050a8f2: SUB EAX,ESI
// 0050a8f4: SHL EAX,0x3
// 0050a8f7: ADD EAX,ESI
// 0050a8f9: LEA EDX,[EBX + 0x5f0]
// 0050a8ff: SHL EAX,0x2
// 0050a902: MOV dword ptr [EBP + 0x6e],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0050a905: LEA EDI,[EDX + EAX*0x1]
// 0050a908: XOR EDX,EDX
// 0050a90a: MOV ECX,dword ptr [EDI]
// 0050a90c: MOV dword ptr [EBP + 0x72],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0050a90f: TEST ECX,ECX
// 0050a911: JZ 0x0050ab32
//   XREF to: 0050ab32 (CONDITIONAL_JUMP)
// 0050a917: CMP dword ptr [EBP + 0x72],0x0
//   Label: LAB_0050a917
//   XREF to: Stack[-0x14] (READ)
// 0050a91b: JZ 0x0050ab72
//   XREF to: 0050ab72 (CONDITIONAL_JUMP)
// 0050a921: FLD float ptr [EBX + ESI*0x4 + 0x1490]
// 0050a928: FADD float ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 0050a92e: FSTP float ptr [EBX + ESI*0x4 + 0x1490]
//   Label: LAB_0050a92e
// 0050a935: LEA EDX,[ESI*0x4 + 0x0]
// 0050a93c: ADD EDX,EBX
// 0050a93e: FLDZ
// 0050a940: FLD float ptr [EDX + 0x1490]
// 0050a946: FSTP double ptr [EBP + 0x62]
//   XREF to: Stack[-0x24] (WRITE)
// 0050a949: FCOMP double ptr [EBP + 0x62]
//   XREF to: Stack[-0x24] (READ)
// 0050a94c: FNSTSW AX
// 0050a94e: SAHF
// 0050a94f: JNC 0x0050ab84
//   XREF to: 0050ab84 (CONDITIONAL_JUMP)
// 0050a955: FLD1
// 0050a957: FCOMP double ptr [EBP + 0x62]
//   XREF to: Stack[-0x24] (READ)
// 0050a95a: FNSTSW AX
// 0050a95c: SAHF
// 0050a95d: JNC 0x0050a969
//   XREF to: 0050a969 (CONDITIONAL_JUMP)
// 0050a95f: MOV dword ptr [EDX + 0x1490],0x3f800000
// 0050a969: LEA EAX,[EBX + 0x5e4]
//   Label: LAB_0050a969
// 0050a96f: PUSH EAX
// 0050a970: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 0050a973: PUSH EAX
// 0050a974: LEA EAX,[EDI + 0x24]
// 0050a977: PUSH EAX
// 0050a978: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050a97b: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0050a980: LEA EDX,[EDI + 0xc]
// 0050a983: FLD float ptr [EDX]
// 0050a985: FADD float ptr [EAX]
// 0050a987: FSTP float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x48] (WRITE)
// 0050a98a: FLD float ptr [EDX + 0x4]
// 0050a98d: FADD float ptr [EAX + 0x4]
// 0050a990: ADD ESP,0xc
// 0050a993: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (WRITE)
// 0050a996: FLD float ptr [EDX + 0x8]
// 0050a999: FADD float ptr [EAX + 0x8]
// 0050a99c: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x48] (DATA)
// 0050a99f: PUSH EAX
// 0050a9a0: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x3c] (DATA)
// 0050a9a3: PUSH EAX
// 0050a9a4: PUSH EBX
// 0050a9a5: FSTP float ptr [EBP + 0x46]
//   XREF to: Stack[-0x40] (WRITE)
// 0050a9a8: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050a9ad: XOR ECX,ECX
// 0050a9af: MOV dword ptr [EBP + 0x26],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 0050a9b2: FLD float ptr [EBX + 0x5d0]
// 0050a9b8: FSUB float ptr [EBX + 0x5e8]
// 0050a9be: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x5c] (WRITE)
// 0050a9c1: FLD float ptr [EBX + 0x150c]
// 0050a9c7: FMUL float ptr [0x006357d5]
//   XREF to: 006357d5 (READ)
// 0050a9cd: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x60] (DATA)
// 0050a9d0: ADD ESP,0xc
// 0050a9d3: FLD float ptr [0x006357d9]
//   XREF to: 006357d9 (READ)
// 0050a9d9: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x5c] (READ)
// 0050a9dc: FMUL ST1
// 0050a9de: PUSH EAX
// 0050a9df: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x30] (DATA)
// 0050a9e2: FXCH ST2
// 0050a9e4: FADD float ptr [EBX + 0x5ec]
// 0050a9ea: PUSH EAX
// 0050a9eb: FADD float ptr [EBX + 0x5d4]
// 0050a9f1: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x1c] (READ)
// 0050a9f4: FCHS
// 0050a9f6: FMULP
// 0050a9f8: PUSH EAX
// 0050a9f9: FXCH
// 0050a9fb: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x5c] (WRITE)
// 0050a9fe: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x58] (WRITE)
// 0050aa01: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0050aa06: ADD ESP,0xc
// 0050aa09: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x30] (DATA)
// 0050aa0c: PUSH EAX
// 0050aa0d: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x54] (DATA)
// 0050aa10: PUSH EAX
// 0050aa11: PUSH EBX
// 0050aa12: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0050aa17: ADD ESP,0xc
// 0050aa1a: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0050aa20: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0050aa21: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0050aa26: ADD ESP,0x4
// 0050aa29: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x114] (DATA)
// 0050aa2f: PUSH EAX
// 0050aa30: MOV EDI,0x3da3d70a
// 0050aa35: CALL core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   XREF to: 004c81f0 (UNCONDITIONAL_CALL)
// 0050aa3a: MOV ECX,0x2
// 0050aa3f: MOV dword ptr [EBP + 0xffffff76],EDI
//   XREF to: Stack[-0x110] (WRITE)
// 0050aa45: MOV dword ptr [EBP + 0xffffff7a],ECX
//   XREF to: Stack[-0x10c] (WRITE)
// 0050aa4b: MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1400]
// 0050aa52: MOV dword ptr [EBP + 0xffffff7e],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 0050aa58: MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1430]
// 0050aa5f: MOV dword ptr [EBP + -0x7e],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 0050aa62: MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1460]
// 0050aa69: MOV dword ptr [EBP + -0x7a],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0050aa6c: MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1490]
// 0050aa73: MOV dword ptr [EBP + 0xffffff72],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 0050aa79: XOR EAX,EAX
// 0050aa7b: ADD ESP,0x4
// 0050aa7e: MOV dword ptr [EBP + -0x76],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0050aa81: MOV dword ptr [EBP + -0x72],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 0050aa84: PUSH EAX
// 0050aa85: MOV EAX,dword ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x114] (READ)
// 0050aa8b: XOR EDX,EDX
// 0050aa8d: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 0050aa90: MOV EAX,dword ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x108] (READ)
// 0050aa96: MOV dword ptr [EBP + -0x36],EDI
//   XREF to: Stack[-0xbc] (WRITE)
// 0050aa99: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0050aa9c: MOV EAX,dword ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (READ)
// 0050aa9f: MOV dword ptr [EBP + -0x32],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 0050aaa2: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0050aaa5: MOV EAX,dword ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (READ)
// 0050aaa8: MOV dword ptr [EBP + -0x1e],EDX
//   XREF to: Stack[-0xa4] (WRITE)
// 0050aaab: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0050aaae: MOV EAX,dword ptr [EBP + -0x6e]
//   XREF to: Stack[-0xf4] (READ)
// 0050aab1: XOR ESI,ESI
// 0050aab3: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 0050aab6: MOV EAX,dword ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf0] (READ)
// 0050aab9: MOV dword ptr [EBP + -0x22],ESI
//   XREF to: Stack[-0xa8] (WRITE)
// 0050aabc: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 0050aabf: MOV EAX,dword ptr [EBP + -0x66]
//   XREF to: Stack[-0xec] (READ)
// 0050aac2: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0050aac5: MOV EAX,dword ptr [EBP + -0x62]
//   XREF to: Stack[-0xe8] (READ)
// 0050aac8: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0050aacb: MOV EAX,dword ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe4] (READ)
// 0050aace: MOV dword ptr [EBP + -0xa],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0050aad1: MOV EAX,dword ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe0] (READ)
// 0050aad4: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0050aad7: MOV EAX,dword ptr [EBP + -0x56]
//   XREF to: Stack[-0xdc] (READ)
// 0050aada: MOV dword ptr [EBP + -0x2],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0050aadd: MOV EAX,dword ptr [EBP + -0x52]
//   XREF to: Stack[-0xd8] (READ)
// 0050aae0: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0050aae3: MOV EAX,dword ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd4] (READ)
// 0050aae6: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0050aae9: MOV EAX,dword ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd0] (READ)
// 0050aaec: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0050aaef: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 0050aaf2: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0050aaf5: MOV EAX,dword ptr [EBP + -0x42]
//   XREF to: Stack[-0xc8] (READ)
// 0050aaf8: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0050aafb: MOV EAX,dword ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 0050aafe: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0050ab01: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc0] (DATA)
// 0050ab04: PUSH EAX
// 0050ab05: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x54] (DATA)
// 0050ab08: PUSH EAX
// 0050ab09: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x3c] (DATA)
// 0050ab0c: PUSH EAX
// 0050ab0d: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0050ab12: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 0050ab13: CALL core_fire.cpp_CFireEffect_FUN_004c8230
//   XREF to: 004c8230 (UNCONDITIONAL_CALL)
// 0050ab18: ADD ESP,0x14
// 0050ab1b: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0050ab21: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0050ab22: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0050ab27: ADD ESP,0x4
// 0050ab2a: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 0050ab2d: POP EBP
// 0050ab2e: POP EDI
// 0050ab2f: POP ESI
// 0050ab30: POP EBX
// 0050ab31: RET
// 0050ab32: PUSH ESI
//   Label: LAB_0050ab32
// 0050ab33: MOV EAX,0x1
// 0050ab38: PUSH EBX
// 0050ab39: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050ab3c: CALL core_manpuz.cpp_FUN_0050aef0
//   XREF to: 0050aef0 (UNCONDITIONAL_CALL)
// 0050ab41: MOV EDX,EAX
// 0050ab43: SHL EAX,0x2
// 0050ab46: SUB EAX,EDX
// 0050ab48: SHL EAX,0x3
// 0050ab4b: ADD EAX,EDX
// 0050ab4d: MOV EDX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 0050ab50: SHL EAX,0x2
// 0050ab53: ADD EAX,EDX
// 0050ab55: MOV ECX,dword ptr [EAX]
// 0050ab57: ADD ESP,0x8
// 0050ab5a: TEST ECX,ECX
// 0050ab5c: JZ 0x0050a917
//   XREF to: 0050a917 (CONDITIONAL_JUMP)
// 0050ab62: FLD float ptr [EAX + 0x8]
// 0050ab65: FLDZ
// 0050ab67: FCOMPP
// 0050ab69: FNSTSW AX
// 0050ab6b: SAHF
// 0050ab6c: JNC 0x0050a917
//   XREF to: 0050a917 (CONDITIONAL_JUMP)
// 0050ab72: FLD float ptr [EBX + ESI*0x4 + 0x1490]
//   Label: LAB_0050ab72
// 0050ab79: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 0050ab7f: JMP 0x0050a92e
//   XREF to: 0050a92e (UNCONDITIONAL_JUMP)
// 0050ab84: MOV dword ptr [EDX + 0x1490],0x0
//   Label: LAB_0050ab84
// 0050ab8e: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 0050ab91: POP EBP
// 0050ab92: POP EDI
// 0050ab93: POP ESI
// 0050ab94: POP EBX
// 0050ab95: RET
