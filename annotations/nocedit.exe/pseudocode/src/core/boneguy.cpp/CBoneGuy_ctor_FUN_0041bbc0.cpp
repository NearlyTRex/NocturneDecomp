// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// Address: 0041bbc0
// Address Range: [[0041bbc0, 0041bcf1]]
// Convention: __cdecl
// Signature: CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy * this_ptr)
// Cross-references:
//   core_boneguy.cpp_constructor_FUN_0041b820 (0041b820) at 0041b83a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_boneguy_dfm_00615f7d
//   TerminatedCString s_boneguydie_00615f89
//   undefined4 s_oneguydie_00615f8a
//   undefined4 s_neguydie_00615f8b
//   undefined4 s_eguydie_00615f8c
//   undefined4 DAT_0065af60
//   undefined4 PTR_FUN_0065af61+3
//   CDemonActor_vtable g_CBoneGuyVTable
//   WatcomTypeInfo g_SBoneGuyBoxTypeInfo
// Function calls:
//   core_actor.cpp_FUN_0040cc70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)

{
  char cVar1;
  undefined4 uVar2;
  CEnemy *pCVar3;
  void *dest;
  undefined4 uVar4;
  float fVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  undefined4 uStack00000008;
  float fStack0000000c;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  dest = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                   (pCVar3[1].base_character.base_actor.create_event + 0x10,0x14,
                    &g_SBoneGuyBoxTypeInfo);
  *(CDemonActor_vtable **)((int)dest + -0xbde8) = &g_CBoneGuyVTable;
  core_skeleton_cpp_FUN_005a0840();
  *(undefined4 *)((int)dest + -0x9160) = 0x3f19999a;
  *(undefined4 *)((int)dest + -0x915c) = 0x3f666666;
  pcVar6 = "boneguydie";
  *(undefined4 *)((int)dest + -0xbe40) = 1;
  pcVar7 = (char *)((int)dest + -0x6c);
  *(undefined4 *)((int)dest + 0x5a0) = 0;
  uVar4 = _DAT_0065af60;
  *(undefined4 *)((int)dest + -0x992c) = 2;
  uVar2 = _PTR_FUN_0065af61_3;
  *(undefined4 *)((int)dest + -8) = 0x41200000;
  *(undefined4 *)((int)dest + -0x9158) = uVar4;
  *(undefined4 *)((int)dest + -0x9154) = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)dest + -4) = 0;
  crt_memory_c_memset_FUN_005fde40(dest,0,0x5a0);
  uVar4 = core_actor_cpp_FUN_0040cc70();
  *(undefined4 *)((int)dest + -0x7c) = 0;
  *(undefined4 *)((int)dest + -0x78) = 0;
  *(undefined4 *)((int)dest + -0x74) = 0;
  *(undefined4 *)((int)dest + -0x8c) = 0x40c00000;
  *(undefined4 *)((int)dest + -0x80) = uVar4;
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,255.0);
  fStack00000010 = fVar5;
  fStack0000000c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,40.0);
  fStack00000014 = fStack0000000c;
  fStack00000014 = core_actor_cpp_getRandomFloat_FUN_0040cc10(106.0,256.0);
  fStack00000018 = fStack00000014;
  dVar10 = (double)core_boneguy_cpp_FUN_0041ba10();
  fVar8 = (float10)_DAT_00615f95;
  fVar9 = (float10)fVar5 * fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
  *(int *)((int)dest + -0xbe34) = (int)ROUND(fVar9);
  fVar9 = (float10)fStack0000000c * fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
  *(int *)((int)dest + -0xbe30) = (int)ROUND(fVar9);
  fVar8 = fVar8 * (float10)fStack00000014;
  uStack00000008 = 0x41bd7e;
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)dest + -0xbf3c));
  *(int *)((int)dest + -0xbe2c) = (int)ROUND(fVar8);
  return SUB84(dVar10,0);
}


// Assembly code:
// 0041bbc0: PUSH EBX
//   Label: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// 0041bbc1: SUB ESP,0x1c
// 0041bbc4: MOV EBX,dword ptr [ESP + 0x24]
// 0041bbc8: PUSH EDI
// 0041bbc9: PUSH ESI
// 0041bbca: PUSH EBX
// 0041bbcb: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0041bbd0: ADD ESP,0x4
// 0041bbd3: PUSH 0x65b0e0
//   XREF to: 0065b0e0 (DATA)
// 0041bbd8: PUSH 0x14
// 0041bbda: ADD EAX,0xbf3c
// 0041bbdf: PUSH EAX
// 0041bbe0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0041bbe5: ADD ESP,0xc
// 0041bbe8: LEA EBX,[EAX + 0xffff40c4]
// 0041bbee: PUSH 0x615f7d
//   XREF to: 00615f7d (DATA)
// 0041bbf3: LEA EAX,[EBX + 0x158]
// 0041bbf9: PUSH EAX
// 0041bbfa: MOV dword ptr [EBX + 0x154],0x65af74
//   XREF to: 0065af74 (DATA)
// 0041bc04: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0041bc09: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 0041bc13: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 0041bc1d: MOV ESI,0x615f89
//   XREF to: 00615f89 (DATA)
// 0041bc22: MOV dword ptr [EBX + 0xfc],0x1
// 0041bc2c: LEA EDI,[EBX + 0xbed0]
// 0041bc32: MOV dword ptr [EBX + 0xc4dc],0x0
// 0041bc3c: FLD float ptr [0x0065af60]
//   XREF to: 0065af60 (READ)
// 0041bc42: MOV dword ptr [EBX + 0x2610],0x2
// 0041bc4c: FLD float ptr [0x0065af64]
//   XREF to: 0065af64 (READ)
// 0041bc52: MOV dword ptr [EBX + 0xbf34],0x41200000
// 0041bc5c: ADD ESP,0x8
// 0041bc5f: FXCH
// 0041bc61: FSTP float ptr [EBX + 0x2de4]
// 0041bc67: FSTP float ptr [EBX + 0x2de8]
// 0041bc6d: PUSH EDI
// 0041bc6e: MOV AL,byte ptr [ESI]
//   Label: LAB_0041bc6e
//   XREF to: 00615f89 (READ)
//   XREF to: 00615f8b (READ)
// 0041bc70: MOV byte ptr [EDI],AL
// 0041bc72: CMP AL,0x0
// 0041bc74: JZ 0x0041bc86
//   XREF to: 0041bc86 (CONDITIONAL_JUMP)
// 0041bc76: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00615f8a (READ)
//   XREF to: 00615f8c (READ)
// 0041bc79: ADD ESI,0x2
// 0041bc7c: MOV byte ptr [EDI + 0x1],AL
// 0041bc7f: ADD EDI,0x2
// 0041bc82: CMP AL,0x0
// 0041bc84: JNZ 0x0041bc6e
//   XREF to: 0041bc6e (CONDITIONAL_JUMP)
// 0041bc86: POP EDI
//   Label: LAB_0041bc86
// 0041bc87: PUSH 0x5a0
// 0041bc8c: PUSH 0x0
// 0041bc8e: LEA EAX,[EBX + 0xbf3c]
// 0041bc94: PUSH EAX
// 0041bc95: MOV dword ptr [EBX + 0xbf38],0x0
// 0041bc9f: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0041bca4: ADD ESP,0xc
// 0041bca7: PUSH 0xff
// 0041bcac: PUSH 0x0
// 0041bcae: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 0041bcb3: MOV dword ptr [EBX + 0xbec0],0x0
// 0041bcbd: MOV dword ptr [EBX + 0xbec4],0x0
// 0041bcc7: MOV dword ptr [EBX + 0xbec8],0x0
// 0041bcd1: MOV dword ptr [EBX + 0xbeb0],0x40c00000
// 0041bcdb: ADD ESP,0x8
// 0041bcde: MOV dword ptr [EBX + 0xbebc],EAX
// 0041bce4: POP ESI
// 0041bce5: POP EDI
// 0041bce6: PUSH 0x437f0000
// 0041bceb: PUSH 0x0
// 0041bced: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
