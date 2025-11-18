// Name: core_fire.cpp_CShell_onCollision_FUN_004c6380
// Address: 004c6380
// Address Range: [[004c6380, 004c63c1]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CShell_onCollision_FUN_004c6380(CShell * this_ptr, CVector3f * collision_normal)
// Globals:
//   double DOUBLE_00629ff3 = 0.25
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

int __cdecl
core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)(4 - *(int *)(this_ptr->field1_0x38 + 0x18)) * (float)DOUBLE_00629ff3;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-6.2831855,6.2831855);
  fVar6 = 3.1415927;
  *(float *)(this_ptr->field1_0x38 + 0xc) = fVar1 * fVar5;
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
  *(float *)(this_ptr->field1_0x38 + 0x10) = fVar5 * fVar6;
  if (*(int *)(this_ptr->field1_0x38 + 0x18) == 0) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(&DAT_02d141dc + iVar3));
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar3 < 0xc);
    if (iVar4 != 3) {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        (*(char **)(this_ptr->field1_0x38 + 0x1c),"shell.kfm");
      if (iVar3 == 0) {
        core_sound_cpp_CSound_FUN_005b3a40
                  (g_CSoundPtr,(char *)g_CFireEffectPtr,"sh-sh?c @ .15");
        *(undefined4 *)(&DAT_02d141dc + iVar4 * 4) = extraout_EAX;
        *(int *)(this_ptr->field1_0x38 + 0x18) = *(int *)(this_ptr->field1_0x38 + 0x18) + 1;
        return 0;
      }
      core_sound_cpp_CSound_FUN_005b3a40
                (g_CSoundPtr,(char *)g_CFireEffectPtr,"44-sh?c @ .2");
      *(undefined4 *)(&DAT_02d141dc + iVar4 * 4) = extraout_EAX_00;
      *(int *)(this_ptr->field1_0x38 + 0x18) = *(int *)(this_ptr->field1_0x38 + 0x18) + 1;
      return 0;
    }
  }
  *(int *)(this_ptr->field1_0x38 + 0x18) = *(int *)(this_ptr->field1_0x38 + 0x18) + 1;
  return 0;
}


// Assembly code:
// 004c6380: PUSH EBX
//   Label: core_fire.cpp_CShell_onCollision_FUN_004c6380
// 004c6381: PUSH ESI
// 004c6382: PUSH EDI
// 004c6383: PUSH EBP
// 004c6384: MOV EBP,ESP
// 004c6386: SUB ESP,0x8
// 004c6389: MOV EDI,dword ptr [EBP + 0x14]
// 004c638c: MOV EAX,0x4
// 004c6391: MOV EDX,dword ptr [EDI + 0x50]
// 004c6394: SUB EAX,EDX
// 004c6396: MOV dword ptr [EBP + -0x4],EAX
// 004c6399: FILD dword ptr [EBP + -0x4]
// 004c639c: FMUL double ptr [0x00629ff3]
//   XREF to: 00629ff3 (READ)
// 004c63a2: FST float ptr [EBP + -0x8]
// 004c63a5: FLDZ
// 004c63a7: FCOMPP
// 004c63a9: FNSTSW AX
// 004c63ab: SAHF
// 004c63ac: JBE 0x004c63b3
//   XREF to: 004c63b3 (CONDITIONAL_JUMP)
// 004c63ae: XOR ECX,ECX
// 004c63b0: MOV dword ptr [EBP + -0x8],ECX
// 004c63b3: PUSH 0x40c90fdb
//   Label: LAB_004c63b3
// 004c63b8: PUSH 0xc0c90fdb
// 004c63bd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
