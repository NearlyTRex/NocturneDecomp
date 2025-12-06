// Name: core_boneguy.cpp_CBoneGuy_FUN_0041d680
// Address: 0041d680
// Address Range: [[0041d680, 0041d72f] [0041d853, 0041d89c]]
// Convention: __cdecl
// Signature: void core_boneguy.cpp_CBoneGuy_FUN_0041d680(CBoneGuy * this_ptr)

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_CBoneGuy_explode2(uint param_1) */

void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d680(CBoneGuy *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  uint *puVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000008;
  int in_stack_0000000c;
  CDemonActor *in_stack_00000010;
  float afStackY_1818 [1519];
  float fStack_50;
  CVector3f *euler_angles;
  float local_34;
  COrientation *local_20;
  CDeformableModel *local_1c;
  float local_18;
  int *local_14;
  CDemonActor *pCVar7;
  int iVar8;
  
  bVar6 = 0;
  fStack_50 = 6.046279e-39;
  core_charactr_cpp_CCharacter_FUN_0042d060((CCharacter *)this_ptr);
  *(uint *)(in_stack_00000008 + 0xc4dc) = 1;
  *(uint *)(in_stack_00000008 + 0xc4e0) = 0;
  local_1c = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000008 + 0x158));
  iVar8 = local_1c->num_parts;
  *(int *)(in_stack_0000000c + 0xbf38) = iVar8;
  if (0x14 < iVar8) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  iVar8 = 0;
  if (0 < *(int *)((int)local_18 + 0x7140)) {
    local_14 = &in_stack_00000010[0x8e].field7_0x6c;
    local_20 = &in_stack_00000010->orient;
    local_1c = (CDeformableModel *)&in_stack_00000010->location;
    pcVar4 = in_stack_00000010[0x8e].create_event;
    pCVar7 = in_stack_00000010;
    do {
      euler_angles = (CVector3f *)0x40a00000;
      local_20 = (COrientation *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      pCVar1 = (CDeformableModel *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,10.0);
      local_1c = pCVar1;
      local_34 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      fStack_50 = 2.8026e-45;
      local_18 = local_34;
      iVar2 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      fStack_50 = local_18;
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      *(uint *)(iVar2 + 0xcc4) = 1;
      core_bodypart_cpp_FUN_0041a050();
      local_14[0x2fe0] = iVar2;
      puVar3 = (uint *)((int)pCVar7 * 0x48 + (int)local_18);
      if (puVar3 != (uint *)(iVar2 + 0x20)) {
        *puVar3 = *(uint *)(iVar2 + 0x20);
        puVar3[1] = *(uint *)(iVar2 + 0x24);
        puVar3[2] = *(uint *)(iVar2 + 0x28);
      }
      if (pcVar4 != (char *)(iVar2 + 0x30)) {
        *(uint *)pcVar4 = *(uint *)(iVar2 + 0x30);
        *(uint *)(pcVar4 + 4) = *(uint *)(iVar2 + 0x34);
        *(uint *)(pcVar4 + 8) = *(uint *)(iVar2 + 0x38);
      }
      pcVar4 = pcVar4 + 0x48;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CQuaternion4f *)(iVar2 + 0x30),euler_angles);
      iVar8 = iVar8 + 1;
      puVar3 = (uint *)((int)pCVar7 + (uint)bVar6 * -8 + 49000);
      *(CDeformableModel **)(pCVar7[0x8e].create_event + 0x1c) = pCVar1;
      puVar5 = puVar3 + (uint)bVar6 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffc8 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc8 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) +
            ((uint)bVar6 * -2 + 1) * 4);
      pCVar7 = (CDemonActor *)((pCVar7->orient_matrix).m + 1);
    } while (iVar8 < *(int *)((int)local_18 + 0x7140));
  }
  (*in_stack_00000010->vtable->playSound)(in_stack_00000010,"boneguy-fallapart.wav");
  return;
}
