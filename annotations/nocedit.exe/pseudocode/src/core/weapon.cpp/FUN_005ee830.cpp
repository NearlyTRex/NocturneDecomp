// Name: core_weapon.cpp_FUN_005ee830
// Address: 005ee830
// Address Range: [[005ee830, 005ee85f] [005ee861, 005ee9e3]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee830()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CHeroClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_fire.cpp_CFireEffect_FUN_004c8230
//   core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_weapon.cpp_FUN_005ee830(undefined4 param_1) */

void core_weapon_cpp_FUN_005ee830(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  undefined1 local_94 [16];
  float local_84;
  float local_80;
  CFireEffect *local_7c;
  char local_78 [92];
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  (*(in_stack_00000004->metadata).vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  local_14 = in_stack_00000004[2].orient.heading;
  local_1c = 0;
  local_18 = 0;
  core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar2 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar2 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar2);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0((SLaserInfo *)local_94);
  local_94[8] = '\x01';
  local_94[9] = '\0';
  local_94[10] = '\0';
  local_94[0xb] = '\0';
  local_94._12_4_ = in_stack_00000004[2].orient_matrix.m[0].z;
  local_84 = in_stack_00000004[2].orient_matrix.m[1].x;
  local_80 = in_stack_00000004[2].orient_matrix.m[1].y;
  local_94[0] = '\0';
  local_94[1] = '\0';
  local_94[2] = -0x80;
  local_94[3] = '?';
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                      g_CHeroClassInfo.name_hash);
  local_7c = (CFireEffect *)(uint)(pCVar2 != (CDemonActor *)0x0);
  local_78[0] = '\x01';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  core_fire_cpp_CFireEffect_FUN_004c8230(local_7c);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 005ee830: PUSH EBX
//   Label: core_weapon.cpp_FUN_005ee830
// 005ee831: PUSH ESI
// 005ee832: PUSH EDI
// 005ee833: PUSH EBP
// 005ee834: MOV EBP,ESP
// 005ee836: SUB ESP,0xd8
// 005ee83c: SUB EBP,0x7e
// 005ee83f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005ee845: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ee84b: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ee84c: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005ee851: ADD ESP,0x4
// 005ee854: TEST EAX,EAX
// 005ee856: JZ 0x005ee861
//   XREF to: 005ee861 (CONDITIONAL_JUMP)
// 005ee858: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005ee85b: POP EBP
// 005ee85c: POP EDI
// 005ee85d: POP ESI
// 005ee85e: POP EBX
// 005ee85f: NOP
// 005ee861: LEA EAX,[EBP + 0x4e]
//   Label: LAB_005ee861
//   XREF to: Stack[-0x40] (DATA)
// 005ee864: PUSH EAX
// 005ee865: MOV EDX,dword ptr [EBX + 0x154]
// 005ee86b: PUSH EBX
// 005ee86c: CALL dword ptr [EDX + 0xf4]
// 005ee872: ADD ESP,0x8
// 005ee875: PUSH EAX
// 005ee876: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 005ee879: PUSH EAX
// 005ee87a: PUSH EBX
// 005ee87b: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005ee880: MOV EAX,dword ptr [EBX + 0x2e8]
// 005ee886: ADD ESP,0xc
// 005ee889: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ee88c: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x1c] (DATA)
// 005ee88f: PUSH EAX
// 005ee890: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 005ee893: PUSH EAX
// 005ee894: XOR ECX,ECX
// 005ee896: PUSH EBX
// 005ee897: MOV dword ptr [EBP + 0x72],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ee89a: MOV dword ptr [EBP + 0x76],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005ee89d: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005ee8a2: ADD ESP,0xc
// 005ee8a5: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005ee8ab: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005ee8ac: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005ee8b1: ADD ESP,0x4
// 005ee8b4: PUSH EBX
// 005ee8b5: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ee8ba: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005ee8bb: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005ee8c0: MOV EDX,dword ptr [EBX + 0x304]
// 005ee8c6: ADD ESP,0x8
// 005ee8c9: TEST EDX,EDX
// 005ee8cb: JZ 0x005ee8dd
//   XREF to: 005ee8dd (CONDITIONAL_JUMP)
// 005ee8cd: PUSH EDX
// 005ee8ce: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005ee8d4: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005ee8d5: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005ee8da: ADD ESP,0x8
// 005ee8dd: LEA EAX,[EBP + -0x6]
//   Label: LAB_005ee8dd
//   XREF to: Stack[-0x94] (DATA)
// 005ee8e0: PUSH EAX
// 005ee8e1: MOV EDI,0x1
// 005ee8e6: CALL core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   XREF to: 004c81f0 (UNCONDITIONAL_CALL)
// 005ee8eb: MOV dword ptr [EBP + 0x2],EDI
//   XREF to: Stack[-0x8c] (WRITE)
// 005ee8ee: MOV EAX,dword ptr [EBX + 0x2f4]
// 005ee8f4: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005ee8f7: MOV EAX,dword ptr [EBX + 0x2f8]
// 005ee8fd: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005ee900: MOV EAX,dword ptr [EBX + 0x2fc]
// 005ee906: ADD ESP,0x4
// 005ee909: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005ee90c: MOV EAX,0x3f800000
// 005ee911: MOV EDX,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 005ee917: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005ee91a: PUSH EDX
// 005ee91b: MOV ECX,dword ptr [EBX + 0x304]
// 005ee921: PUSH ECX
// 005ee922: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ee927: XOR EBX,EBX
// 005ee929: ADD ESP,0x8
// 005ee92c: TEST EAX,EAX
// 005ee92e: SETNZ AL
// 005ee931: MOV BL,AL
// 005ee933: MOV EAX,dword ptr [EBP + -0x6]
//   XREF to: Stack[-0x94] (READ)
// 005ee936: MOV dword ptr [EBP + -0x5a],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005ee939: MOV EAX,dword ptr [EBP + -0x2]
//   XREF to: Stack[-0x90] (READ)
// 005ee93c: MOV dword ptr [EBP + -0x56],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005ee93f: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x8c] (READ)
// 005ee942: MOV dword ptr [EBP + -0x52],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005ee945: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x88] (READ)
// 005ee948: MOV dword ptr [EBP + -0x4e],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005ee94b: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x84] (READ)
// 005ee94e: MOV dword ptr [EBP + -0x4a],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005ee951: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x80] (READ)
// 005ee954: MOV dword ptr [EBP + -0x46],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005ee957: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x74] (READ)
// 005ee95a: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005ee95d: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x70] (READ)
// 005ee960: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005ee963: MOV EAX,dword ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (READ)
// 005ee966: MOV dword ptr [EBP + -0x32],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005ee969: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (READ)
// 005ee96c: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005ee96f: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x64] (READ)
// 005ee972: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005ee975: MOV EAX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x60] (READ)
// 005ee978: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005ee97b: MOV EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x5c] (READ)
// 005ee97e: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005ee981: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 005ee984: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005ee987: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 005ee98a: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005ee98d: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 005ee990: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005ee993: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 005ee996: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005ee999: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x48] (READ)
// 005ee99c: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005ee99f: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 005ee9a2: PUSH 0x0
// 005ee9a4: MOV dword ptr [EBP + -0xa],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005ee9a7: LEA EAX,[EBP + -0x5a]
//   XREF to: Stack[-0xe8] (DATA)
// 005ee9aa: PUSH EAX
// 005ee9ab: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 005ee9ae: PUSH EAX
// 005ee9af: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 005ee9b2: MOV dword ptr [EBP + 0x16],EDI
//   XREF to: Stack[-0x78] (WRITE)
// 005ee9b5: PUSH EAX
// 005ee9b6: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005ee9bb: MOV dword ptr [EBP + -0x3e],EDI
//   XREF to: Stack[-0xcc] (WRITE)
// 005ee9be: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 005ee9bf: MOV dword ptr [EBP + 0x12],EBX
//   XREF to: Stack[-0x7c] (WRITE)
// 005ee9c2: MOV dword ptr [EBP + -0x42],EBX
//   XREF to: Stack[-0xd0] (WRITE)
// 005ee9c5: CALL core_fire.cpp_CFireEffect_FUN_004c8230
//   XREF to: 004c8230 (UNCONDITIONAL_CALL)
// 005ee9ca: ADD ESP,0x14
// 005ee9cd: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005ee9d3: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005ee9d4: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005ee9d9: ADD ESP,0x4
// 005ee9dc: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005ee9df: POP EBP
// 005ee9e0: POP EDI
// 005ee9e1: POP ESI
// 005ee9e2: POP EBX
// 005ee9e3: RET
