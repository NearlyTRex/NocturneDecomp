// Name: core_icepick.cpp_FUN_004f8c70
// Address: 004f8c70
// Address Range: [[004f8c70, 004f9378]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8c70()
// Cross-references:
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f83d6 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0062f7a3
//   undefined4 DAT_0062f7ab
//   undefined4 DAT_0062f7b3
//   undefined4 DAT_0062f7bb
//   undefined4 DAT_0062f7c3
//   undefined4 DAT_0062f7cb
//   undefined4 DAT_0062f7d3
//   undefined4 DAT_0062f7db
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_0042ede0
//   core_hero.cpp_FUN_004f3960
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f8c70(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f8c70(void)

{
  float fVar1;
  bool bVar2;
  CCharacter *pCVar3;
  int iVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  uint uVar8;
  CPathMap *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_EDI;
  CHero *pCVar9;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff4c;
  int in_stack_ffffff54;
  float fStack_70;
  float local_6c;
  CVector3f CStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [12];
  float local_24;
  float fStack_20;
  CPathMap *local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = false;
  local_1c = (CPathMap *)0x3e800000;
  local_24 = 0.7853982;
  pCVar9 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    fVar7 = (in_stack_00000004->base_actor).location.position.x -
            (pCVar5->base_character).base_actor.location.position.x;
    fVar1 = (in_stack_00000004->base_actor).location.position.y -
            (pCVar5->base_character).base_actor.location.position.y;
    CStack_60.x = (in_stack_00000004->base_actor).location.position.z -
                  (pCVar5->base_character).base_actor.location.position.z;
    local_30._4_4_ = SQRT(CStack_60.x * CStack_60.x + fVar7 * fVar7 + fVar1 * fVar1);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
      local_30._4_4_ = 0.0;
    }
    local_24 = 20.0;
    iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable[1].
              processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
    if (iVar4 != 0) {
      unaff_EBP = 30.0;
    }
    if ((fStack_18 < unaff_EBP) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      local_24 = 9999.9;
      in_stack_ffffff54 = 0x4f8d93;
      pCVar5 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar5 == (CHero *)0x0) || (unaff_EDI <= fStack_20)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar2 = true;
        pCVar9 = pCVar5;
      }
    }
    CStack_60.y = (pCVar9->base_character).base_actor.location.position.x -
                  (in_stack_00000004->base_actor).location.position.x;
    CStack_60.z = (pCVar9->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    fStack_54 = (pCVar9->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if (&fStack_50 != &CStack_60.y) {
      fStack_50 = CStack_60.y;
      fStack_4c = CStack_60.z;
      auStack_48._0_4_ = fStack_54;
    }
    in_stack_00000004->field2_0x240c[0xc] = '\0';
    in_stack_00000004->field2_0x240c[0xd] = '\0';
    in_stack_00000004->field2_0x240c[0xe] = '\0';
    in_stack_00000004->field2_0x240c[0xf] = '\0';
    if ((float)_DAT_0062f7a3 <=
        SQRT((float)auStack_48._0_4_ * (float)auStack_48._0_4_ +
             fStack_50 * fStack_50 + fStack_4c * fStack_4c)) {
      if (bVar2) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        local_1c = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
        if ((iVar4 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar8 != 0)) {
          if (uVar8 < 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar8 == 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[0x10] = '\x01';
            (pCVar3->base_actor).actor_name[0x11] = '\0';
            (pCVar3->base_actor).actor_name[0x12] = '\0';
            (pCVar3->base_actor).actor_name[0x13] = '\0';
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
        }
      }
      this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,&(in_stack_00000004->base_actor).location.position,
                         (CVector3f *)(local_30 + 4),(in_stack_00000004->base_actor).field7_0x6c);
      if (iVar4 != 0) {
        fVar7 = core_actor_cpp_FUN_0040cd70(local_24 - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)_DAT_0062f7ab * (float)_DAT_0062f7b3;
        fStack_14 = -in_stack_00000008;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < fStack_14) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_14;
        }
        if (in_stack_00000008 < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
        }
        if (((float)_DAT_0062f7bb <= fStack_70) || (bVar2)) {
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[0x10] = '\x01';
          (pCVar3->base_actor).actor_name[0x11] = '\0';
          (pCVar3->base_actor).actor_name[0x12] = '\0';
          (pCVar3->base_actor).actor_name[0x13] = '\0';
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[8] = '\x01';
          (pCVar3->base_actor).actor_name[9] = '\0';
          (pCVar3->base_actor).actor_name[10] = '\0';
          (pCVar3->base_actor).actor_name[0xb] = '\0';
        }
        else {
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[8] = '\x01';
          (pCVar3->base_actor).actor_name[9] = '\0';
          (pCVar3->base_actor).actor_name[10] = '\0';
          (pCVar3->base_actor).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      if (bVar2) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        else {
          iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0();
          if ((*(int *)(iVar4 + 0x24) != 2) && (*(int *)(iVar4 + 0x24) != 1)) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[0x14] = '\x01';
            (pCVar3->base_actor).actor_name[0x15] = '\0';
            (pCVar3->base_actor).actor_name[0x16] = '\0';
            (pCVar3->base_actor).actor_name[0x17] = '\0';
          }
        }
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0();
        if ((*(int *)(iVar4 + 0x24) == 10) &&
           (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff54);
        if ((iVar4 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar8 != 0)) {
          if (uVar8 < 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar8 == 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[0x10] = '\x01';
            (pCVar3->base_actor).actor_name[0x11] = '\0';
            (pCVar3->base_actor).actor_name[0x12] = '\0';
            (pCVar3->base_actor).actor_name[0x13] = '\0';
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
        }
      }
      if (bVar2) {
        pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           ((CVector3f *)local_30,(CVector3f *)auStack_48);
        fVar7 = core_actor_cpp_FUN_0040cd70(pCVar6->y - (in_stack_00000004->base_actor).orient.bank)
        ;
        fVar7 = fVar7 * (float)_DAT_0062f7ab * (float)_DAT_0062f7b3;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < -in_stack_00000008) {
          in_stack_00000004[1].base_actor.location.area_id = (int)-in_stack_00000008;
        }
        if (in_stack_00000008 < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
        }
        fVar7 = (float)in_stack_00000004[1].base_actor.location.area_id;
        if ((((float)_DAT_0062f7c3 < fVar7) && ((double)fVar7 < _DAT_0062f7cb)) &&
           (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0)) {
          in_stack_00000004[1].base_actor.location.area_id = 0;
        }
      }
    }
    if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) <= 0.0) {
      if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < 0.0) {
        in_stack_00000004->field2_0x240c[0xc] = '\0';
        in_stack_00000004->field2_0x240c[0xd] = '\0';
        in_stack_00000004->field2_0x240c[0xe] = '\0';
        in_stack_00000004->field2_0x240c[0xf] = '\0';
        in_stack_00000004[1].base_actor.location.area_id = (int)-in_stack_00000008;
      }
    }
    else {
      in_stack_00000004->field2_0x240c[0xc] = '\0';
      in_stack_00000004->field2_0x240c[0xd] = '\0';
      in_stack_00000004->field2_0x240c[0xe] = '\0';
      in_stack_00000004->field2_0x240c[0xf] = '\0';
      in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
    }
    fStack_3c = (pCVar9->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_38 = (pCVar9->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_34 = (pCVar9->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if ((float *)auStack_48 != &fStack_3c) {
      auStack_48._0_4_ = fStack_3c;
      auStack_48._4_4_ = fStack_38;
      fStack_40 = fStack_34;
    }
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_60,(CVector3f *)auStack_48);
    if ((CVector3f *)(auStack_48 + 4) != pCVar6) {
      auStack_48._4_4_ = pCVar6->x;
      fStack_40 = pCVar6->y;
      fStack_3c = pCVar6->z;
    }
    CStack_60.x = core_actor_cpp_FUN_0040cd70
                            (fStack_40 - (in_stack_00000004->base_actor).orient.bank);
    if (in_stack_00000008 < CStack_60.x) {
      CStack_60.x = in_stack_00000008;
    }
    if (CStack_60.x < -in_stack_00000008) {
      CStack_60.x = -in_stack_00000008;
    }
    local_6c = CStack_60.x - *(float *)(in_stack_00000004[2].cloth_data + 0x5508);
    if (in_stack_00000008 * (float)_DAT_0062f7d3 < local_6c) {
      local_6c = in_stack_00000008 * (float)_DAT_0062f7d3;
    }
    if (local_6c < in_stack_00000008 * (float)_DAT_0062f7db) {
      local_6c = in_stack_00000008 * (float)_DAT_0062f7db;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5508) =
         *(float *)(in_stack_00000004[2].cloth_data + 0x5508) + local_6c;
  }
  return;
}


// Assembly code:
// 004f8c70: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f8c70
// 004f8c71: PUSH ESI
// 004f8c72: PUSH EDI
// 004f8c73: PUSH EBP
// 004f8c74: MOV EBP,ESP
// 004f8c76: SUB ESP,0xa8
// 004f8c7c: AND ESP,0xfffffff8
// 004f8c7f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f8c82: MOV EDX,0x3e800000
// 004f8c87: MOV ECX,0x3f490fdb
// 004f8c8c: PUSH 0x2c
// 004f8c8e: XOR ESI,ESI
// 004f8c90: MOV EDI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f8c96: PUSH ESI
// 004f8c97: LEA EAX,[EBX + 0xbe2c]
// 004f8c9d: MOV dword ptr [ESP + 0xa4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f8ca4: PUSH EAX
// 004f8ca5: MOV dword ptr [ESP + 0xa0],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004f8cac: MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f8cb3: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004f8cb8: MOV EAX,dword ptr [EBX + 0x1fbd0]
// 004f8cbe: ADD ESP,0xc
// 004f8cc1: TEST EAX,EAX
// 004f8cc3: JZ 0x004f90b7
//   XREF to: 004f90b7 (CONDITIONAL_JUMP)
// 004f8cc9: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f8cce: LEA EDX,[EBX + 0x20]
// 004f8cd1: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f8cd8: FLD float ptr [EDX]
// 004f8cda: FSUB float ptr [EAX + 0x20]
// 004f8cdd: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x6c] (WRITE)
// 004f8ce1: FLD float ptr [EDX + 0x4]
// 004f8ce4: FSUB float ptr [EAX + 0x24]
// 004f8ce7: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (WRITE)
// 004f8ceb: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (READ)
// 004f8cef: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x6c] (READ)
// 004f8cf3: FMUL ST0
// 004f8cf5: FLD float ptr [EDX + 0x8]
// 004f8cf8: FSUB float ptr [EAX + 0x28]
// 004f8cfb: FXCH
// 004f8cfd: FADDP ST2,ST0
// 004f8cff: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 004f8d03: FMUL float ptr [ESP + 0x54]
//   XREF to: Stack[-0x64] (READ)
// 004f8d07: FADDP
// 004f8d09: FSQRT
// 004f8d0b: MOV EDX,dword ptr [EBX + 0x1fbd0]
// 004f8d11: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x30] (WRITE)
// 004f8d18: CMP EDX,0x3
// 004f8d1b: JNZ 0x004f8d24
//   XREF to: 004f8d24 (CONDITIONAL_JUMP)
// 004f8d1d: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 004f8d24: MOV dword ptr [ESP + 0x90],0x41a00000
//   Label: LAB_004f8d24
//   XREF to: Stack[-0x28] (WRITE)
// 004f8d2f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f8d34: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f8d3b: PUSH EAX
// 004f8d3c: MOV EDX,dword ptr [EAX + 0x154]
// 004f8d42: CALL dword ptr [EDX + 0x15c]
// 004f8d48: ADD ESP,0x4
// 004f8d4b: TEST EAX,EAX
// 004f8d4d: JZ 0x004f8d5a
//   XREF to: 004f8d5a (CONDITIONAL_JUMP)
// 004f8d4f: MOV dword ptr [ESP + 0x90],0x41f00000
// 004f8d5a: FLD float ptr [ESP + 0x88]
//   Label: LAB_004f8d5a
// 004f8d61: FCOMP float ptr [ESP + 0x90]
// 004f8d68: FNSTSW AX
// 004f8d6a: SAHF
// 004f8d6b: JNC 0x004f8dbb
//   XREF to: 004f8dbb (CONDITIONAL_JUMP)
// 004f8d6d: MOV ECX,dword ptr [EBX + 0x1fbd0]
// 004f8d73: CMP ECX,0x2
// 004f8d76: JNZ 0x004f90be
//   XREF to: 004f90be (CONDITIONAL_JUMP)
// 004f8d7c: LEA EAX,[ESP + 0x7c]
//   Label: LAB_004f8d7c
// 004f8d80: PUSH EAX
// 004f8d81: MOV EDX,0x461c3f9a
// 004f8d86: PUSH EBX
// 004f8d87: MOV dword ptr [ESP + 0x84],EDX
// 004f8d8e: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 004f8d93: MOV EDX,EAX
// 004f8d95: ADD ESP,0x8
// 004f8d98: TEST EAX,EAX
// 004f8d9a: JZ 0x004f90cc
//   XREF to: 004f90cc (CONDITIONAL_JUMP)
// 004f8da0: FLD float ptr [ESP + 0x7c]
// 004f8da4: FCOMP float ptr [ESP + 0x90]
// 004f8dab: FNSTSW AX
// 004f8dad: SAHF
// 004f8dae: JNC 0x004f90cc
//   XREF to: 004f90cc (CONDITIONAL_JUMP)
// 004f8db4: MOV ESI,0x1
// 004f8db9: MOV EDI,EDX
// 004f8dbb: LEA EDX,[EDI + 0x20]
//   Label: LAB_004f8dbb
// 004f8dbe: LEA EAX,[EBX + 0x20]
// 004f8dc1: FLD float ptr [EDX]
// 004f8dc3: FSUB float ptr [EAX]
// 004f8dc5: FSTP float ptr [ESP + 0x40]
// 004f8dc9: FLD float ptr [EDX + 0x4]
// 004f8dcc: FSUB float ptr [EAX + 0x4]
// 004f8dcf: FSTP float ptr [ESP + 0x44]
// 004f8dd3: FLD float ptr [EDX + 0x8]
// 004f8dd6: LEA EDX,[ESP + 0x40]
// 004f8dda: FSUB float ptr [EAX + 0x8]
// 004f8ddd: LEA EAX,[ESP + 0x4c]
// 004f8de1: FSTP float ptr [ESP + 0x48]
// 004f8de5: CMP EAX,EDX
// 004f8de7: JZ 0x004f8e01
//   XREF to: 004f8e01 (CONDITIONAL_JUMP)
// 004f8de9: MOV EAX,dword ptr [ESP + 0x40]
// 004f8ded: MOV dword ptr [ESP + 0x4c],EAX
// 004f8df1: MOV EAX,dword ptr [ESP + 0x44]
// 004f8df5: MOV dword ptr [ESP + 0x50],EAX
// 004f8df9: MOV EAX,dword ptr [ESP + 0x48]
// 004f8dfd: MOV dword ptr [ESP + 0x54],EAX
// 004f8e01: FLD float ptr [ESP + 0x50]
//   Label: LAB_004f8e01
// 004f8e05: FMUL ST0
// 004f8e07: FLD float ptr [ESP + 0x4c]
// 004f8e0b: FMUL ST0
// 004f8e0d: FADDP
// 004f8e0f: FLD float ptr [ESP + 0x54]
// 004f8e13: FMUL ST0
// 004f8e15: FADDP
// 004f8e17: FSQRT
// 004f8e19: MOV dword ptr [EBX + 0x2418],0x0
// 004f8e23: FSTP float ptr [ESP + 0xa0]
// 004f8e2a: MOV EAX,dword ptr [ESP + 0xa0]
// 004f8e31: FLD float ptr [ESP + 0xa0]
// 004f8e38: MOV dword ptr [ESP + 0x24],EAX
// 004f8e3c: FCOMP double ptr [0x0062f7a3]
//   XREF to: 0062f7a3 (READ)
// 004f8e42: FNSTSW AX
// 004f8e44: SAHF
// 004f8e45: JNC 0x004f91a1
//   XREF to: 004f91a1 (CONDITIONAL_JUMP)
// 004f8e4b: LEA EAX,[EBX + 0x158]
// 004f8e51: CMP ESI,0x1
// 004f8e54: JNZ 0x004f9110
//   XREF to: 004f9110 (CONDITIONAL_JUMP)
// 004f8e5a: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004f8e61: JNZ 0x004f90e8
//   XREF to: 004f90e8 (CONDITIONAL_JUMP)
// 004f8e67: MOV dword ptr [EBX + 0xbe44],ESI
// 004f8e6d: MOV dword ptr [EBX + 0x2dc4],0x0
//   Label: LAB_004f8e6d
// 004f8e77: CMP ESI,0x1
//   Label: LAB_004f8e77
// 004f8e7a: JNZ 0x004f8f45
//   XREF to: 004f8f45 (CONDITIONAL_JUMP)
// 004f8e80: LEA EAX,[ESP + 0x4c]
// 004f8e84: PUSH EAX
// 004f8e85: LEA EAX,[ESP + 0x68]
// 004f8e89: PUSH EAX
// 004f8e8a: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f8e8f: FLD float ptr [EAX + 0x4]
// 004f8e92: ADD ESP,0x8
// 004f8e95: FSUB float ptr [EBX + 0x34]
// 004f8e98: SUB ESP,0x4
// 004f8e9b: FSTP float ptr [ESP]
// 004f8e9e: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f8ea3: MOV dword ptr [ESP + 0xa8],EAX
// 004f8eaa: FLD float ptr [ESP + 0xa8]
// 004f8eb1: FMUL double ptr [0x0062f7ab]
//   XREF to: 0062f7ab (READ)
// 004f8eb7: ADD ESP,0x4
// 004f8eba: FMUL double ptr [0x0062f7b3]
//   XREF to: 0062f7b3 (READ)
// 004f8ec0: FLD float ptr [ESP + 0x9c]
// 004f8ec7: FCHS
// 004f8ec9: FSTP float ptr [ESP + 0x84]
// 004f8ed0: FST float ptr [EBX + 0xbe50]
// 004f8ed6: FCOMP float ptr [ESP + 0x84]
// 004f8edd: FNSTSW AX
// 004f8edf: SAHF
// 004f8ee0: JNC 0x004f8eef
//   XREF to: 004f8eef (CONDITIONAL_JUMP)
// 004f8ee2: MOV EAX,dword ptr [ESP + 0x84]
// 004f8ee9: MOV dword ptr [EBX + 0xbe50],EAX
// 004f8eef: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f8eef
// 004f8ef5: FCOMP float ptr [ESP + 0x9c]
// 004f8efc: FNSTSW AX
// 004f8efe: SAHF
// 004f8eff: JBE 0x004f8f0e
//   XREF to: 004f8f0e (CONDITIONAL_JUMP)
// 004f8f01: MOV EAX,dword ptr [ESP + 0x9c]
// 004f8f08: MOV dword ptr [EBX + 0xbe50],EAX
// 004f8f0e: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f8f0e
// 004f8f14: FST double ptr [ESP + 0x18]
// 004f8f18: FCOMP double ptr [0x0062f7c3]
//   XREF to: 0062f7c3 (READ)
// 004f8f1e: FNSTSW AX
// 004f8f20: SAHF
// 004f8f21: JBE 0x004f8f45
//   XREF to: 004f8f45 (CONDITIONAL_JUMP)
// 004f8f23: FLD double ptr [ESP + 0x18]
// 004f8f27: FCOMP double ptr [0x0062f7cb]
//   XREF to: 0062f7cb (READ)
// 004f8f2d: FNSTSW AX
// 004f8f2f: SAHF
// 004f8f30: JNC 0x004f8f45
//   XREF to: 004f8f45 (CONDITIONAL_JUMP)
// 004f8f32: CMP dword ptr [EBX + 0xbe38],0x0
// 004f8f39: JZ 0x004f8f45
//   XREF to: 004f8f45 (CONDITIONAL_JUMP)
// 004f8f3b: MOV dword ptr [EBX + 0xbe50],0x0
// 004f8f45: FLDZ
//   Label: LAB_004f8f45
// 004f8f47: FLD float ptr [EBX + 0x2418]
// 004f8f4d: FSTP double ptr [ESP + 0x8]
// 004f8f51: FCOMP double ptr [ESP + 0x8]
// 004f8f55: FNSTSW AX
// 004f8f57: SAHF
// 004f8f58: JNC 0x004f9355
//   XREF to: 004f9355 (CONDITIONAL_JUMP)
// 004f8f5e: MOV EAX,dword ptr [ESP + 0x9c]
// 004f8f65: MOV dword ptr [EBX + 0x2418],0x0
// 004f8f6f: MOV dword ptr [EBX + 0xbe50],EAX
// 004f8f75: LEA EAX,[EBX + 0x20]
//   Label: LAB_004f8f75
// 004f8f78: FLD float ptr [EDI + 0x20]
// 004f8f7b: FSUB float ptr [EAX]
// 004f8f7d: FSTP float ptr [ESP + 0x58]
// 004f8f81: FLD float ptr [EDI + 0x24]
// 004f8f84: FSUB float ptr [EAX + 0x4]
// 004f8f87: LEA EDX,[ESP + 0x4c]
// 004f8f8b: FSTP float ptr [ESP + 0x5c]
// 004f8f8f: FLD float ptr [EDI + 0x28]
// 004f8f92: FSUB float ptr [EAX + 0x8]
// 004f8f95: LEA EAX,[ESP + 0x58]
// 004f8f99: FSTP float ptr [ESP + 0x60]
// 004f8f9d: CMP EDX,EAX
// 004f8f9f: JZ 0x004f8fb9
//   XREF to: 004f8fb9 (CONDITIONAL_JUMP)
// 004f8fa1: MOV EAX,dword ptr [ESP + 0x58]
// 004f8fa5: MOV dword ptr [ESP + 0x4c],EAX
// 004f8fa9: MOV EAX,dword ptr [ESP + 0x5c]
// 004f8fad: MOV dword ptr [ESP + 0x50],EAX
// 004f8fb1: MOV EAX,dword ptr [ESP + 0x60]
// 004f8fb5: MOV dword ptr [ESP + 0x54],EAX
// 004f8fb9: LEA EAX,[ESP + 0x4c]
//   Label: LAB_004f8fb9
// 004f8fbd: PUSH EAX
// 004f8fbe: LEA EAX,[ESP + 0x38]
// 004f8fc2: PUSH EAX
// 004f8fc3: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f8fc8: MOV EDX,EAX
// 004f8fca: LEA EAX,[ESP + 0x54]
// 004f8fce: ADD ESP,0x8
// 004f8fd1: CMP EAX,EDX
// 004f8fd3: JZ 0x004f8fe9
//   XREF to: 004f8fe9 (CONDITIONAL_JUMP)
// 004f8fd5: MOV EAX,dword ptr [EDX]
// 004f8fd7: MOV dword ptr [ESP + 0x4c],EAX
// 004f8fdb: MOV EAX,dword ptr [EDX + 0x4]
// 004f8fde: MOV dword ptr [ESP + 0x50],EAX
// 004f8fe2: MOV EAX,dword ptr [EDX + 0x8]
// 004f8fe5: MOV dword ptr [ESP + 0x54],EAX
// 004f8fe9: FLD float ptr [ESP + 0x50]
//   Label: LAB_004f8fe9
// 004f8fed: FSUB float ptr [EBX + 0x34]
// 004f8ff0: SUB ESP,0x4
// 004f8ff3: FSTP float ptr [ESP]
// 004f8ff6: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f8ffb: MOV dword ptr [ESP + 0xa8],EAX
// 004f9002: FLD float ptr [ESP + 0xa8]
// 004f9009: ADD ESP,0x4
// 004f900c: FST float ptr [ESP + 0x2c]
// 004f9010: FCOMP float ptr [ESP + 0x94]
// 004f9017: FNSTSW AX
// 004f9019: SAHF
// 004f901a: JBE 0x004f9027
//   XREF to: 004f9027 (CONDITIONAL_JUMP)
// 004f901c: MOV EAX,dword ptr [ESP + 0x94]
// 004f9023: MOV dword ptr [ESP + 0x2c],EAX
// 004f9027: FLD float ptr [ESP + 0x2c]
//   Label: LAB_004f9027
// 004f902b: FLD float ptr [ESP + 0x94]
// 004f9032: FCHS
// 004f9034: FSTP float ptr [ESP + 0x8c]
// 004f903b: FCOMP float ptr [ESP + 0x8c]
// 004f9042: FNSTSW AX
// 004f9044: SAHF
// 004f9045: JNC 0x004f9052
//   XREF to: 004f9052 (CONDITIONAL_JUMP)
// 004f9047: MOV EAX,dword ptr [ESP + 0x8c]
// 004f904e: MOV dword ptr [ESP + 0x2c],EAX
// 004f9052: FLD float ptr [ESP + 0x2c]
//   Label: LAB_004f9052
// 004f9056: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f9059: FXCH
// 004f905b: FSUB float ptr [EBX + 0x1fbe8]
// 004f9061: FXCH
// 004f9063: FMUL double ptr [0x0062f7d3]
//   XREF to: 0062f7d3 (READ)
// 004f9069: FXCH
// 004f906b: FST float ptr [ESP + 0x20]
// 004f906f: FXCH
// 004f9071: FSTP double ptr [ESP]
// 004f9074: FCOMP double ptr [ESP]
// 004f9077: FNSTSW AX
// 004f9079: SAHF
// 004f907a: JBE 0x004f9083
//   XREF to: 004f9083 (CONDITIONAL_JUMP)
// 004f907c: FLD double ptr [ESP]
// 004f907f: FSTP float ptr [ESP + 0x20]
// 004f9083: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f9083
//   XREF to: Stack[0x8] (READ)
// 004f9086: FMUL double ptr [0x0062f7db]
//   XREF to: 0062f7db (READ)
// 004f908c: FLD float ptr [ESP + 0x20]
// 004f9090: FXCH
// 004f9092: FSTP double ptr [ESP + 0x10]
// 004f9096: FCOMP double ptr [ESP + 0x10]
// 004f909a: FNSTSW AX
// 004f909c: SAHF
// 004f909d: JNC 0x004f90a7
//   XREF to: 004f90a7 (CONDITIONAL_JUMP)
// 004f909f: FLD double ptr [ESP + 0x10]
// 004f90a3: FSTP float ptr [ESP + 0x20]
// 004f90a7: FLD float ptr [EBX + 0x1fbe8]
//   Label: LAB_004f90a7
// 004f90ad: FADD float ptr [ESP + 0x20]
// 004f90b1: FSTP float ptr [EBX + 0x1fbe8]
// 004f90b7: MOV ESP,EBP
//   Label: LAB_004f90b7
// 004f90b9: POP EBP
// 004f90ba: POP EDI
// 004f90bb: POP ESI
// 004f90bc: POP EBX
// 004f90bd: RET
// 004f90be: CMP ECX,0x3
//   Label: LAB_004f90be
// 004f90c1: JZ 0x004f8d7c
//   XREF to: 004f8d7c (CONDITIONAL_JUMP)
// 004f90c7: JMP 0x004f8dbb
//   XREF to: 004f8dbb (UNCONDITIONAL_JUMP)
// 004f90cc: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_004f90cc
// 004f90d3: JZ 0x004f8dbb
//   XREF to: 004f8dbb (CONDITIONAL_JUMP)
// 004f90d9: MOV dword ptr [EBX + 0xbe44],0x1
// 004f90e3: JMP 0x004f8dbb
//   XREF to: 004f8dbb (UNCONDITIONAL_JUMP)
// 004f90e8: PUSH EAX
//   Label: LAB_004f90e8
// 004f90e9: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f90ee: MOV EAX,dword ptr [EAX + 0x24]
// 004f90f1: ADD ESP,0x4
// 004f90f4: CMP EAX,0x2
// 004f90f7: JZ 0x004f8e6d
//   XREF to: 004f8e6d (CONDITIONAL_JUMP)
// 004f90fd: CMP EAX,ESI
// 004f90ff: JZ 0x004f8e6d
//   XREF to: 004f8e6d (CONDITIONAL_JUMP)
// 004f9105: MOV dword ptr [EBX + 0xbe38],ESI
// 004f910b: JMP 0x004f8e6d
//   XREF to: 004f8e6d (UNCONDITIONAL_JUMP)
// 004f9110: PUSH EAX
//   Label: LAB_004f9110
// 004f9111: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f9116: MOV EAX,dword ptr [EAX + 0x24]
// 004f9119: ADD ESP,0x4
// 004f911c: CMP EAX,0xa
// 004f911f: JNZ 0x004f9134
//   XREF to: 004f9134 (CONDITIONAL_JUMP)
// 004f9121: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004f9128: JZ 0x004f9134
//   XREF to: 004f9134 (CONDITIONAL_JUMP)
// 004f912a: MOV dword ptr [EBX + 0xbe44],0x1
// 004f9134: MOV EAX,[0x02db87d0]
//   Label: LAB_004f9134
//   XREF to: 02db87d0 (READ)
// 004f9139: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f9140: PUSH EAX
// 004f9141: MOV EDX,dword ptr [EAX + 0x154]
// 004f9147: CALL dword ptr [EDX + 0x15c]
// 004f914d: ADD ESP,0x4
// 004f9150: TEST EAX,EAX
// 004f9152: JNZ 0x004f8e77
//   XREF to: 004f8e77 (CONDITIONAL_JUMP)
// 004f9158: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f915b: PUSH EBX
// 004f915c: CALL core_charactr.cpp_CCharacter_FUN_0042ede0
//   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
// 004f9161: ADD ESP,0x8
// 004f9164: CMP EAX,0x1
// 004f9167: JC 0x004f8e77
//   XREF to: 004f8e77 (CONDITIONAL_JUMP)
// 004f916d: JA 0x004f9197
//   XREF to: 004f9197 (CONDITIONAL_JUMP)
// 004f916f: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f9179: JMP 0x004f8e77
//   XREF to: 004f8e77 (UNCONDITIONAL_JUMP)
// 004f917e: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_004f917e
// 004f9188: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f9192: JMP 0x004f8e77
//   XREF to: 004f8e77 (UNCONDITIONAL_JUMP)
// 004f9197: CMP EAX,0x2
//   Label: LAB_004f9197
// 004f919a: JZ 0x004f917e
//   XREF to: 004f917e (CONDITIONAL_JUMP)
// 004f919c: JMP 0x004f8e77
//   XREF to: 004f8e77 (UNCONDITIONAL_JUMP)
// 004f91a1: XOR EAX,EAX
//   Label: LAB_004f91a1
// 004f91a3: MOV dword ptr [ESP + 0x98],EAX
// 004f91aa: TEST ESI,ESI
// 004f91ac: JNZ 0x004f931f
//   XREF to: 004f931f (CONDITIONAL_JUMP)
// 004f91b2: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f91b7: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f91be: PUSH EAX
// 004f91bf: MOV EDX,dword ptr [EAX + 0x154]
// 004f91c5: CALL dword ptr [EDX + 0xbc]
// 004f91cb: ADD ESP,0x4
// 004f91ce: MOV dword ptr [ESP + 0x98],EAX
// 004f91d5: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f91da: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f91e1: PUSH EAX
// 004f91e2: MOV EDX,dword ptr [EAX + 0x154]
// 004f91e8: CALL dword ptr [EDX + 0x15c]
// 004f91ee: ADD ESP,0x4
// 004f91f1: TEST EAX,EAX
// 004f91f3: JZ 0x004f92fe
//   XREF to: 004f92fe (CONDITIONAL_JUMP)
// 004f91f9: CMP dword ptr [ESP + 0x98],0x0
//   Label: LAB_004f91f9
// 004f9201: JNZ 0x004f9216
//   XREF to: 004f9216 (CONDITIONAL_JUMP)
// 004f9203: LEA EAX,[EDI + 0x20]
// 004f9206: PUSH EAX
// 004f9207: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 004f920c: ADD ESP,0x4
// 004f920f: MOV dword ptr [ESP + 0x98],EAX
// 004f9216: MOV ECX,dword ptr [EBX + 0x6c]
//   Label: LAB_004f9216
// 004f9219: PUSH ECX
// 004f921a: LEA EAX,[ESP + 0x74]
// 004f921e: PUSH EAX
// 004f921f: LEA EAX,[EBX + 0x20]
// 004f9222: PUSH EAX
// 004f9223: MOV EAX,dword ptr [ESP + 0xa4]
// 004f922a: PUSH EAX
// 004f922b: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 004f9230: ADD ESP,0x10
// 004f9233: TEST EAX,EAX
// 004f9235: JZ 0x004f8f45
//   XREF to: 004f8f45 (CONDITIONAL_JUMP)
// 004f923b: FLD float ptr [ESP + 0x74]
// 004f923f: FSUB float ptr [EBX + 0x34]
// 004f9242: SUB ESP,0x4
// 004f9245: FSTP float ptr [ESP]
// 004f9248: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f924d: MOV dword ptr [ESP + 0xa8],EAX
// 004f9254: FLD float ptr [ESP + 0xa8]
// 004f925b: FMUL double ptr [0x0062f7ab]
//   XREF to: 0062f7ab (READ)
// 004f9261: ADD ESP,0x4
// 004f9264: FMUL double ptr [0x0062f7b3]
//   XREF to: 0062f7b3 (READ)
// 004f926a: FLD float ptr [ESP + 0x9c]
// 004f9271: FCHS
// 004f9273: FSTP float ptr [ESP + 0x80]
// 004f927a: FST float ptr [EBX + 0xbe50]
// 004f9280: FCOMP float ptr [ESP + 0x80]
// 004f9287: FNSTSW AX
// 004f9289: SAHF
// 004f928a: JC 0x004f932a
//   XREF to: 004f932a (CONDITIONAL_JUMP)
// 004f9290: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f9290
// 004f9296: FCOMP float ptr [ESP + 0x9c]
// 004f929d: FNSTSW AX
// 004f929f: SAHF
// 004f92a0: JBE 0x004f92af
//   XREF to: 004f92af (CONDITIONAL_JUMP)
// 004f92a2: MOV EAX,dword ptr [ESP + 0x9c]
// 004f92a9: MOV dword ptr [EBX + 0xbe50],EAX
// 004f92af: FLD float ptr [ESP + 0x24]
//   Label: LAB_004f92af
// 004f92b3: FCOMP double ptr [0x0062f7bb]
//   XREF to: 0062f7bb (READ)
// 004f92b9: FNSTSW AX
// 004f92bb: SAHF
// 004f92bc: JNC 0x004f933c
//   XREF to: 004f933c (CONDITIONAL_JUMP)
// 004f92c2: CMP ESI,0x1
// 004f92c5: JZ 0x004f933c
//   XREF to: 004f933c (CONDITIONAL_JUMP)
// 004f92c7: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f92d1: JMP 0x004f8f45
//   XREF to: 004f8f45 (UNCONDITIONAL_JUMP)
// 004f92d6: MOV dword ptr [EBX + 0xbe2c],0x1
//   Label: LAB_004f92d6
// 004f92e0: JMP 0x004f91f9
//   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)
// 004f92e5: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_004f92e5
// 004f92ef: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f92f9: JMP 0x004f91f9
//   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)
// 004f92fe: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f92fe
//   XREF to: Stack[0x8] (READ)
// 004f9301: PUSH EBX
// 004f9302: CALL core_charactr.cpp_CCharacter_FUN_0042ede0
//   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
// 004f9307: ADD ESP,0x8
// 004f930a: CMP EAX,0x1
// 004f930d: JC 0x004f91f9
//   XREF to: 004f91f9 (CONDITIONAL_JUMP)
// 004f9313: JBE 0x004f92d6
//   XREF to: 004f92d6 (CONDITIONAL_JUMP)
// 004f9315: CMP EAX,0x2
// 004f9318: JZ 0x004f92e5
//   XREF to: 004f92e5 (CONDITIONAL_JUMP)
// 004f931a: JMP 0x004f91f9
//   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)
// 004f931f: MOV dword ptr [EBX + 0x2dc4],EAX
//   Label: LAB_004f931f
// 004f9325: JMP 0x004f91f9
//   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)
// 004f932a: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_004f932a
// 004f9331: MOV dword ptr [EBX + 0xbe50],EAX
// 004f9337: JMP 0x004f9290
//   XREF to: 004f9290 (UNCONDITIONAL_JUMP)
// 004f933c: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_004f933c
// 004f9346: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f9350: JMP 0x004f8f45
//   XREF to: 004f8f45 (UNCONDITIONAL_JUMP)
// 004f9355: JBE 0x004f8f75
//   Label: LAB_004f9355
//   XREF to: 004f8f75 (CONDITIONAL_JUMP)
// 004f935b: FLD float ptr [ESP + 0x9c]
// 004f9362: MOV dword ptr [EBX + 0x2418],0x0
// 004f936c: FCHS
// 004f936e: FSTP float ptr [EBX + 0xbe50]
// 004f9374: JMP 0x004f8f75
//   XREF to: 004f8f75 (UNCONDITIONAL_JUMP)
