// Name: core_bugs.cpp_FUN_00424e50
// Address: 00424e50
// Address Range: [[00424e50, 00424fdf] [00425083, 004250d2]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00424e50()
// Globals:
//   float FLOAT_00616d1b = 12
//   float FLOAT_00616d1f = -12
//   double DOUBLE_00616d23 = 0.5
//   undefined4 DAT_0065b5c8
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_bugs.cpp_FUN_004272f0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_enemy.cpp_CEnemy_FUN_004a9650

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00424e50(undefined4 param_1) */

void core_bugs_cpp_FUN_00424e50(void)

{
  float min_value;
  CEnemy *pCVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  COrientation *pCVar7;
  CEnemy *in_stack_00000004;
  float fVar8;
  float fVar9;
  float *local_28;
  int local_24;
  CKeyFramedModelInstance *local_1c;
  char *local_18;
  
  (in_stack_00000004->base_character).base_actor.orient.heading = 0.0;
  (in_stack_00000004->base_character).base_actor.orient.bank =
       (in_stack_00000004->base_character).base_actor.orient.heading;
  (in_stack_00000004->base_character).base_actor.orient.pitch =
       (in_stack_00000004->base_character).base_actor.orient.bank;
  fVar8 = 6.089292e-39;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_character).cloth_data[0x3978] = '\x04';
  (pCVar1->base_character).cloth_data[0x3979] = '\0';
  (pCVar1->base_character).cloth_data[0x397a] = '\0';
  (pCVar1->base_character).cloth_data[0x397b] = '\0';
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978)) {
    pcVar6 = in_stack_00000004[1].base_character.cloth_data + 0x39f4;
    do {
      if (*pcVar6 == '\0') {
        iVar3 = *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) + -1;
        *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) = iVar3;
        if (iVar4 < iVar3) {
          local_1c = (CKeyFramedModelInstance *)
                     (in_stack_00000004[1].base_character.cloth_data + iVar4 * 0x17c + 0x397c);
          local_18 = in_stack_00000004[1].base_character.cloth_data + iVar4 * 0x17c + 0x3b70;
          iVar3 = iVar4;
          do {
            fVar8 = 6.08947e-39;
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(local_1c,local_18);
            iVar3 = iVar3 + 1;
            local_1c = local_1c + 1;
            local_18 = local_18 + 0x17c;
          } while (iVar3 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
        }
      }
      else {
        fVar8 = 6.090116e-39;
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                  ((CKeyFramedModelInstance *)
                   (in_stack_00000004[1].base_character.cloth_data + iVar4 * 0x17c + 0x397c));
        pcVar6 = pcVar6 + 0x17c;
        iVar4 = iVar4 + 1;
      }
    } while (iVar4 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
  }
  local_24 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)) {
    min_value = _DAT_0065b5c8 * FLOAT_00616d1f;
    pCVar7 = &in_stack_00000004[1].base_character.base_actor.orient;
    pfVar5 = &in_stack_00000004[1].base_character.base_actor.location.position.y;
    local_28 = (float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18);
    do {
      pcVar6 = in_stack_00000004[1].base_character.base_actor.actor_name + local_24 * 0x40 + 0x10;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      fVar9 = 0.0;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70
                        (0,*(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) + -1);
      fVar2 = (float)DOUBLE_00616d23;
      fVar9 = fVar9 * fVar2;
      *(int *)(pcVar6 + 4) = iVar4;
      fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar9,fVar8 * fVar2);
      pcVar6[0xc] = '\0';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
      *(float *)(pcVar6 + 8) = fVar8;
      fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar9);
      *(float *)(pcVar6 + 0x10) = fVar8;
      pfVar5[2] = 0.0;
      fVar8 = -3.1415927;
      pfVar5[1] = pfVar5[2];
      *pfVar5 = pfVar5[1];
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
      *(float *)(pcVar6 + 0x18) = fVar2;
      if (pCVar7 != (COrientation *)local_28) {
        pCVar7->pitch = pfVar5[-3];
        pCVar7->bank = pfVar5[-2];
        pCVar7->heading = ((CVector3f *)(pfVar5 + -1))->x;
      }
      pCVar7 = (COrientation *)((int)(pCVar7 + 5) + 4);
      pfVar5 = pfVar5 + 0x10;
      local_28 = local_28 + 0x10;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc));
  }
  core_bugs_cpp_FUN_004272f0();
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[1].x = -NAN;
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[1].y = -NAN;
  (in_stack_00000004->base_character).base_actor.field16_0x100 = 1;
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[2].x = 0.0;
  return;
}


// Assembly code:
// 00424e50: PUSH EBX
//   Label: core_bugs.cpp_FUN_00424e50
// 00424e51: PUSH ESI
// 00424e52: PUSH EDI
// 00424e53: PUSH EBP
// 00424e54: MOV EBP,ESP
// 00424e56: SUB ESP,0x2c
// 00424e59: AND ESP,0xfffffff8
// 00424e5c: MOV EAX,dword ptr [EBP + 0x14]
// 00424e5f: MOV dword ptr [EAX + 0x38],0x0
// 00424e66: PUSH EAX
// 00424e67: MOV EDX,dword ptr [EAX + 0x38]
// 00424e6a: MOV dword ptr [EAX + 0x34],EDX
// 00424e6d: MOV EDX,dword ptr [EAX + 0x34]
// 00424e70: MOV dword ptr [EAX + 0x30],EDX
// 00424e73: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 00424e78: ADD ESP,0x4
// 00424e7b: MOV EAX,dword ptr [EBP + 0x14]
// 00424e7e: MOV dword ptr [EAX + 0x122c4],0x4
// 00424e88: MOV ECX,dword ptr [EAX + 0x122c4]
// 00424e8e: XOR EBX,EBX
// 00424e90: TEST ECX,ECX
// 00424e92: JLE 0x00424f33
//   XREF to: 00424f33 (CONDITIONAL_JUMP)
// 00424e98: ADD EAX,0x122c8
// 00424e9d: MOV dword ptr [ESP + 0x1c],EAX
// 00424ea1: LEA ESI,[EAX + 0x78]
// 00424ea4: IMUL EDI,EBX,0x17c
//   Label: LAB_00424ea4
// 00424eaa: MOV ECX,dword ptr [ESP + 0x1c]
// 00424eae: MOV AH,byte ptr [ESI]
// 00424eb0: ADD EDI,ECX
// 00424eb2: TEST AH,AH
// 00424eb4: JNZ 0x004250be
//   XREF to: 004250be (CONDITIONAL_JUMP)
// 00424eba: MOV EAX,dword ptr [EBP + 0x14]
// 00424ebd: MOV EDX,dword ptr [EAX + 0x122c4]
// 00424ec3: DEC EDX
// 00424ec4: MOV EDI,EBX
// 00424ec6: MOV dword ptr [EAX + 0x122c4],EDX
// 00424ecc: CMP EBX,EDX
// 00424ece: JGE 0x00424f24
//   XREF to: 00424f24 (CONDITIONAL_JUMP)
// 00424ed0: IMUL EAX,EBX,0x17c
// 00424ed6: LEA EDX,[ECX + EAX*0x1]
// 00424ed9: ADD EAX,0x1f4
// 00424ede: ADD EAX,ECX
// 00424ee0: MOV dword ptr [ESP + 0x20],EDX
// 00424ee4: MOV dword ptr [ESP + 0x24],EAX
// 00424ee8: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00424ee8
// 00424eec: PUSH ECX
// 00424eed: MOV EAX,dword ptr [ESP + 0x24]
// 00424ef1: PUSH EAX
// 00424ef2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00424ef7: ADD ESP,0x8
// 00424efa: INC EDI
// 00424efb: MOV EDX,dword ptr [ESP + 0x20]
// 00424eff: MOV ECX,dword ptr [ESP + 0x24]
// 00424f03: MOV EAX,dword ptr [EBP + 0x14]
// 00424f06: ADD EDX,0x17c
// 00424f0c: ADD ECX,0x17c
// 00424f12: MOV dword ptr [ESP + 0x20],EDX
// 00424f16: MOV EDX,dword ptr [EAX + 0x122c4]
// 00424f1c: MOV dword ptr [ESP + 0x24],ECX
// 00424f20: CMP EDI,EDX
// 00424f22: JL 0x00424ee8
//   XREF to: 00424ee8 (CONDITIONAL_JUMP)
// 00424f24: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00424f24
// 00424f27: CMP EBX,dword ptr [EAX + 0x122c4]
// 00424f2d: JL 0x00424ea4
//   XREF to: 00424ea4 (CONDITIONAL_JUMP)
// 00424f33: XOR EAX,EAX
//   Label: LAB_00424f33
// 00424f35: MOV dword ptr [ESP + 0x18],EAX
// 00424f39: MOV EAX,dword ptr [EBP + 0x14]
// 00424f3c: CMP dword ptr [EAX + 0xbec0],0x0
// 00424f43: JLE 0x00425083
//   XREF to: 00425083 (CONDITIONAL_JUMP)
// 00424f49: FLD float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00424f4f: FLD ST0
// 00424f51: FMUL float ptr [0x00616d1b]
//   XREF to: 00616d1b (READ)
// 00424f57: FXCH
// 00424f59: FMUL float ptr [0x00616d1f]
//   XREF to: 00616d1f (READ)
// 00424f5f: MOV EDI,dword ptr [EBP + 0x14]
// 00424f62: ADD EAX,0xbec4
// 00424f67: MOV EBX,dword ptr [EBP + 0x14]
// 00424f6a: MOV dword ptr [ESP + 0x10],EAX
// 00424f6e: ADD EDI,0xbee4
// 00424f74: ADD EBX,0xbed8
// 00424f7a: MOV EAX,dword ptr [EBP + 0x14]
// 00424f7d: FXCH
// 00424f7f: FSTP float ptr [ESP]
// 00424f82: ADD EAX,0xbecc
// 00424f87: FSTP float ptr [ESP + 0x4]
// 00424f8b: MOV dword ptr [ESP + 0x14],EAX
// 00424f8f: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_00424f8f
// 00424f93: MOV EAX,dword ptr [ESP + 0x10]
// 00424f97: SHL ESI,0x6
// 00424f9a: ADD ESI,EAX
// 00424f9c: MOV EAX,dword ptr [EBP + 0x14]
// 00424f9f: MOV dword ptr [ESI],0x0
// 00424fa5: MOV EAX,dword ptr [EAX + 0x122c4]
// 00424fab: DEC EAX
// 00424fac: PUSH EAX
// 00424fad: PUSH 0x0
// 00424faf: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00424fb4: ADD ESP,0x8
// 00424fb7: FLD double ptr [0x00616d23]
//   XREF to: 00616d23 (READ)
// 00424fbd: FLD float ptr [ESP]
// 00424fc0: FMUL ST1
// 00424fc2: FLD float ptr [ESP + 0x4]
// 00424fc6: FMULP ST2
// 00424fc8: FSTP float ptr [ESP + 0x8]
// 00424fcc: PUSH dword ptr [ESP + 0x8]
// 00424fd0: FSTP float ptr [ESP + 0x10]
// 00424fd4: PUSH dword ptr [ESP + 0x10]
// 00424fd8: MOV dword ptr [ESI + 0x4],EAX
// 00424fdb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00425083: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_00425083
// 00425086: PUSH EBX
// 00425087: CALL core_bugs.cpp_FUN_004272f0
//   XREF to: 004272f0 (UNCONDITIONAL_CALL)
// 0042508c: MOV dword ptr [EBX + 0x199e4],0xffffd8f1
// 00425096: MOV dword ptr [EBX + 0x199e8],0xffffd8f1
// 004250a0: MOV dword ptr [EBX + 0x100],0x1
// 004250aa: ADD ESP,0x4
// 004250ad: MOV dword ptr [EBX + 0x199f4],0x0
// 004250b7: MOV ESP,EBP
// 004250b9: POP EBP
// 004250ba: POP EDI
// 004250bb: POP ESI
// 004250bc: POP EBX
// 004250bd: RET
// 004250be: PUSH EDI
//   Label: LAB_004250be
// 004250bf: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004250c4: ADD ESI,0x17c
// 004250ca: INC EBX
// 004250cb: ADD ESP,0x4
// 004250ce: JMP 0x00424f24
//   XREF to: 00424f24 (UNCONDITIONAL_JUMP)
