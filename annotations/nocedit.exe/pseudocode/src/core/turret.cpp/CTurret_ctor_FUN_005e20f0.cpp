// Name: core_turret.cpp_CTurret_ctor_FUN_005e20f0
// Address: 005e20f0
// Address Range: [[005e20f0, 005e2237]]
// Convention: __cdecl
// Signature: CTurret * core_turret.cpp_CTurret_ctor_FUN_005e20f0(CTurret * this_ptr)
// Cross-references:
//   core_turret.cpp_FUN_005e20b0 (005e20b0) at 005e20cd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gturret_head_kfm_006565c3
//   TerminatedCString s_gturret_tripod_kfm_006565d4
//   TerminatedCString s_CCharacter_006565e7
//   undefined4 s_Character_006565e8
//   undefined4 s_haracter_006565e9
//   undefined4 s_aracter_006565ea
//   CDemonActor_vtable g_CTurretVTable
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)

{
  char cVar1;
  CWeapon *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  float *pfVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2[1].base_actor.actor_name + 0xc));
  this_ptr_00[-3].part_visibility_flags[0x11] = (int)&g_CTurretVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(this_ptr_00[-3].part_visibility_flags + 0x12),
             "gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"gturret_tripod.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 1) = 0;
  this_ptr_00[1].part_visibility_flags[0x1a] = 0x40400000;
  this_ptr_00[1].part_visibility_flags[0x1b] = 0x40c00000;
  this_ptr_00[1].part_visibility_flags[0x1c] = 0x40400000;
  this_ptr_00[1].part_visibility_flags[0x1d] = 0x3e4ccccd;
  this_ptr_00[1].model_name[0] = '\0';
  this_ptr_00[1].model_name[1] = '\0';
  this_ptr_00[1].model_name[2] = -0x10;
  this_ptr_00[1].model_name[3] = 'A';
  pcVar4 = "CCharacter";
  this_ptr_00[1].model_name[4] = '\0';
  this_ptr_00[1].model_name[5] = '\0';
  this_ptr_00[1].model_name[6] = '\0';
  this_ptr_00[1].model_name[7] = '\0';
  this_ptr_00[-2].part_visibility_flags[0x1d] = 0;
  pcVar5 = this_ptr_00[1].model_name + 0xc;
  this_ptr_00[1].model_name[8] = '\0';
  this_ptr_00[1].model_name[9] = '\0';
  this_ptr_00[1].model_name[10] = '\0';
  this_ptr_00[1].model_name[0xb] = '\0';
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pfVar3 = core_actor_cpp_CDemonActor_FUN_00408ec0
                     ((CDemonActor *)(this_ptr_00[-4].part_visibility_flags + 0x1b));
  if ((float *)(this_ptr_00[1].animation_state + 0x70) != pfVar3) {
    *(float *)(this_ptr_00[1].animation_state + 0x70) = *pfVar3;
    *(float *)(this_ptr_00[1].animation_state + 0x74) = pfVar3[1];
    *(float *)(this_ptr_00[1].animation_state + 0x78) = pfVar3[2];
  }
  this_ptr_00[1].animation_state[0x80] = '\0';
  this_ptr_00[1].animation_state[0x81] = '\0';
  this_ptr_00[1].animation_state[0x82] = '\0';
  this_ptr_00[1].animation_state[0x83] = '\0';
  this_ptr_00[1].animation_state[0x90] = '\0';
  this_ptr_00[1].animation_state[0x91] = '\0';
  this_ptr_00[1].animation_state[0x92] = '\0';
  this_ptr_00[1].animation_state[0x93] = '\0';
  this_ptr_00[1].animation_state[0x7c] = '\0';
  this_ptr_00[1].animation_state[0x7d] = '\0';
  this_ptr_00[1].animation_state[0x7e] = '\0';
  this_ptr_00[1].animation_state[0x7f] = '\0';
  return (CTurret *)(this_ptr_00[-4].part_visibility_flags + 0x1b);
}


// Assembly code:
// 005e20f0: PUSH EBX
//   Label: core_turret.cpp_CTurret_ctor_FUN_005e20f0
// 005e20f1: PUSH ESI
// 005e20f2: PUSH EDI
// 005e20f3: SUB ESP,0x18
// 005e20f6: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005e20fa: PUSH EBX
// 005e20fb: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 005e2100: ADD ESP,0x4
// 005e2103: ADD EAX,0x584
// 005e2108: PUSH EAX
// 005e2109: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005e210e: ADD ESP,0x4
// 005e2111: LEA EBX,[EAX + 0xfffffa7c]
// 005e2117: PUSH 0x6565c3
//   XREF to: 006565c3 (DATA)
// 005e211c: LEA EAX,[EBX + 0x158]
// 005e2122: PUSH EAX
// 005e2123: MOV dword ptr [EBX + 0x154],0x664b84
//   XREF to: 00664b84 (DATA)
// 005e212d: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e2132: ADD ESP,0x8
// 005e2135: PUSH 0x6565d4
//   XREF to: 006565d4 (DATA)
// 005e213a: LEA EAX,[EBX + 0x584]
// 005e2140: PUSH EAX
// 005e2141: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e2146: MOV dword ptr [EBX + 0x700],0x0
// 005e2150: MOV byte ptr [EBX + 0x704],0x0
// 005e2157: MOV dword ptr [EBX + 0x768],0x40400000
// 005e2161: MOV dword ptr [EBX + 0x76c],0x40c00000
// 005e216b: MOV dword ptr [EBX + 0x770],0x40400000
// 005e2175: MOV dword ptr [EBX + 0x774],0x3e4ccccd
// 005e217f: MOV dword ptr [EBX + 0x778],0x41f00000
// 005e2189: MOV ESI,0x6565e7
//   XREF to: 006565e7 (DATA)
// 005e218e: MOV dword ptr [EBX + 0x77c],0x0
// 005e2198: ADD ESP,0x8
// 005e219b: MOV dword ptr [EBX + 0x300],0x0
// 005e21a5: LEA EDI,[EBX + 0x784]
// 005e21ab: MOV dword ptr [EBX + 0x780],0x0
// 005e21b5: PUSH EDI
// 005e21b6: MOV AL,byte ptr [ESI]
//   Label: LAB_005e21b6
//   XREF to: 006565e7 (READ)
//   XREF to: 006565e9 (READ)
// 005e21b8: MOV byte ptr [EDI],AL
// 005e21ba: CMP AL,0x0
// 005e21bc: JZ 0x005e21ce
//   XREF to: 005e21ce (CONDITIONAL_JUMP)
// 005e21be: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006565e8 (READ)
//   XREF to: 006565ea (READ)
// 005e21c1: ADD ESI,0x2
// 005e21c4: MOV byte ptr [EDI + 0x1],AL
// 005e21c7: ADD EDI,0x2
// 005e21ca: CMP AL,0x0
// 005e21cc: JNZ 0x005e21b6
//   XREF to: 005e21b6 (CONDITIONAL_JUMP)
// 005e21ce: POP EDI
//   Label: LAB_005e21ce
// 005e21cf: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 005e21d3: PUSH EAX
// 005e21d4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 005e21d8: XOR EDX,EDX
// 005e21da: PUSH EAX
// 005e21db: MOV ESI,0x3f800000
// 005e21e0: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005e21e4: PUSH EBX
// 005e21e5: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005e21e9: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005e21ed: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e21f2: LEA EDX,[EBX + 0x84c]
// 005e21f8: ADD ESP,0xc
// 005e21fb: CMP EDX,EAX
// 005e21fd: JNZ 0x005e2226
//   XREF to: 005e2226 (CONDITIONAL_JUMP)
// 005e21ff: MOV dword ptr [EBX + 0x85c],0x0
//   Label: LAB_005e21ff
// 005e2209: MOV dword ptr [EBX + 0x86c],0x0
// 005e2213: MOV EAX,EBX
// 005e2215: MOV dword ptr [EBX + 0x858],0x0
// 005e221f: ADD ESP,0x18
// 005e2222: POP EDI
// 005e2223: POP ESI
// 005e2224: POP EBX
// 005e2225: RET
// 005e2226: MOV ECX,dword ptr [EAX]
//   Label: LAB_005e2226
// 005e2228: MOV dword ptr [EDX],ECX
// 005e222a: MOV ECX,dword ptr [EAX + 0x4]
// 005e222d: MOV dword ptr [EDX + 0x4],ECX
// 005e2230: MOV ECX,dword ptr [EAX + 0x8]
// 005e2233: MOV dword ptr [EDX + 0x8],ECX
// 005e2236: JMP 0x005e21ff
//   XREF to: 005e21ff (UNCONDITIONAL_JUMP)
