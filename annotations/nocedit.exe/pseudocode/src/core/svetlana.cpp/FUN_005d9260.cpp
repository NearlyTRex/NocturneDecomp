// Name: core_svetlana.cpp_FUN_005d9260
// Address: 005d9260
// Address Range: [[005d9260, 005d9968]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_FUN_005d9260()
// Cross-references:
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8f54 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00654aca = 6
//   double DOUBLE_00654ad2 = 0.318309886192889
//   double DOUBLE_00654ada = 4
//   double DOUBLE_00654ae2 = 10
//   double DOUBLE_00654aea = -0.25
//   double DOUBLE_00654af2 = 0.25
//   double DOUBLE_00654afa = 3.14159265350000
//   double DOUBLE_00654b02 = -3.14159265350000
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_0042ede0
//   core_hero.cpp_FUN_004f3960
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_svetlana.cpp_FUN_005d9260(undefined4 param_1, undefined4
   param_2) */

void core_svetlana_cpp_FUN_005d9260(void)

{
  float fVar1;
  bool bVar2;
  CCharacter *pCVar3;
  int iVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  SMotion *pSVar8;
  uint uVar9;
  CPathMap *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_EDI;
  CHero *pCVar10;
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
  pCVar10 = g_HeroActors[g_LocalHeroIndex];
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
    iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].processMeleeHit)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
    if (iVar4 != 0) {
      unaff_EBP = 30.0;
    }
    if ((fStack_18 < unaff_EBP) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      local_24 = 9999.9;
      in_stack_ffffff54 = 0x5d9383;
      pCVar5 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar5 == (CHero *)0x0) || (unaff_EDI <= fStack_20)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar2 = true;
        pCVar10 = pCVar5;
      }
    }
    CStack_60.y = (pCVar10->base_character).base_actor.location.position.x -
                  (in_stack_00000004->base_actor).location.position.x;
    CStack_60.z = (pCVar10->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    fStack_54 = (pCVar10->base_character).base_actor.location.position.z -
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
    if ((float)DOUBLE_00654aca <=
        SQRT((float)auStack_48._0_4_ * (float)auStack_48._0_4_ +
             fStack_50 * fStack_50 + fStack_4c * fStack_4c)) {
      if (bVar2) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        local_1c = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
        if ((iVar4 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar9 != 0)) {
          if (uVar9 < 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar9 == 2) {
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
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_24 - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)DOUBLE_00654ad2 * (float)DOUBLE_00654ada;
        fStack_14 = -in_stack_00000008;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < fStack_14) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_14;
        }
        if (in_stack_00000008 < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
        }
        if (((float)DOUBLE_00654ae2 <= fStack_70) || (bVar2)) {
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
          pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(in_stack_00000004->model).motion_controller);
          if ((pSVar8->state_index != 2) && (pSVar8->state_index != 1)) {
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
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if ((pSVar8->state_index == 10) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)
           ) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff54);
        if ((iVar4 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar9 != 0)) {
          if (uVar9 < 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar9 == 2) {
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
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar6->y - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)DOUBLE_00654ad2 * (float)DOUBLE_00654ada;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < -in_stack_00000008) {
          in_stack_00000004[1].base_actor.location.area_id = (int)-in_stack_00000008;
        }
        if (in_stack_00000008 < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
        }
        fVar7 = (float)in_stack_00000004[1].base_actor.location.area_id;
        if ((((float)DOUBLE_00654aea < fVar7) && ((double)fVar7 < DOUBLE_00654af2)) &&
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
    fStack_3c = (pCVar10->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_38 = (pCVar10->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_34 = (pCVar10->base_character).base_actor.location.position.z -
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
    CStack_60.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (fStack_40 - (in_stack_00000004->base_actor).orient.bank);
    if (in_stack_00000008 < CStack_60.x) {
      CStack_60.x = in_stack_00000008;
    }
    if (CStack_60.x < -in_stack_00000008) {
      CStack_60.x = -in_stack_00000008;
    }
    local_6c = CStack_60.x - *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658);
    if (in_stack_00000008 * (float)DOUBLE_00654afa < local_6c) {
      local_6c = in_stack_00000008 * (float)DOUBLE_00654afa;
    }
    if (local_6c < in_stack_00000008 * (float)DOUBLE_00654b02) {
      local_6c = in_stack_00000008 * (float)DOUBLE_00654b02;
    }
    *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658) =
         *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658) + local_6c;
  }
  return;
}


// Assembly code:
// 005d9260: PUSH EBX
//   Label: core_svetlana.cpp_FUN_005d9260
// 005d9261: PUSH ESI
// 005d9262: PUSH EDI
// 005d9263: PUSH EBP
// 005d9264: MOV EBP,ESP
// 005d9266: SUB ESP,0xa8
// 005d926c: AND ESP,0xfffffff8
// 005d926f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d9272: MOV EDX,0x3e800000
// 005d9277: MOV ECX,0x3f490fdb
// 005d927c: PUSH 0x2c
// 005d927e: XOR ESI,ESI
// 005d9280: MOV EDI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005d9286: PUSH ESI
// 005d9287: LEA EAX,[EBX + 0xbe2c]
// 005d928d: MOV dword ptr [ESP + 0xa4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d9294: PUSH EAX
// 005d9295: MOV dword ptr [ESP + 0xa0],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005d929c: MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005d92a3: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005d92a8: MOV EAX,dword ptr [EBX + 0x1fbd0]
// 005d92ae: ADD ESP,0xc
// 005d92b1: TEST EAX,EAX
// 005d92b3: JZ 0x005d96a7
//   XREF to: 005d96a7 (CONDITIONAL_JUMP)
// 005d92b9: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005d92be: LEA EDX,[EBX + 0x20]
// 005d92c1: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005d92c8: FLD float ptr [EDX]
// 005d92ca: FSUB float ptr [EAX + 0x20]
// 005d92cd: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x6c] (WRITE)
// 005d92d1: FLD float ptr [EDX + 0x4]
// 005d92d4: FSUB float ptr [EAX + 0x24]
// 005d92d7: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (WRITE)
// 005d92db: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (READ)
// 005d92df: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x6c] (READ)
// 005d92e3: FMUL ST0
// 005d92e5: FLD float ptr [EDX + 0x8]
// 005d92e8: FSUB float ptr [EAX + 0x28]
// 005d92eb: FXCH
// 005d92ed: FADDP ST2,ST0
// 005d92ef: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 005d92f3: FMUL float ptr [ESP + 0x54]
//   XREF to: Stack[-0x64] (READ)
// 005d92f7: FADDP
// 005d92f9: FSQRT
// 005d92fb: MOV EDX,dword ptr [EBX + 0x1fbd0]
// 005d9301: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x30] (WRITE)
// 005d9308: CMP EDX,0x3
// 005d930b: JNZ 0x005d9314
//   XREF to: 005d9314 (CONDITIONAL_JUMP)
// 005d930d: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005d9314: MOV dword ptr [ESP + 0x90],0x41a00000
//   Label: LAB_005d9314
//   XREF to: Stack[-0x28] (WRITE)
// 005d931f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005d9324: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005d932b: PUSH EAX
// 005d932c: MOV EDX,dword ptr [EAX + 0x154]
// 005d9332: CALL dword ptr [EDX + 0x15c]
// 005d9338: ADD ESP,0x4
// 005d933b: TEST EAX,EAX
// 005d933d: JZ 0x005d934a
//   XREF to: 005d934a (CONDITIONAL_JUMP)
// 005d933f: MOV dword ptr [ESP + 0x90],0x41f00000
// 005d934a: FLD float ptr [ESP + 0x88]
//   Label: LAB_005d934a
// 005d9351: FCOMP float ptr [ESP + 0x90]
// 005d9358: FNSTSW AX
// 005d935a: SAHF
// 005d935b: JNC 0x005d93ab
//   XREF to: 005d93ab (CONDITIONAL_JUMP)
// 005d935d: MOV ECX,dword ptr [EBX + 0x1fbd0]
// 005d9363: CMP ECX,0x2
// 005d9366: JNZ 0x005d96ae
//   XREF to: 005d96ae (CONDITIONAL_JUMP)
// 005d936c: LEA EAX,[ESP + 0x7c]
//   Label: LAB_005d936c
// 005d9370: PUSH EAX
// 005d9371: MOV EDX,0x461c3f9a
// 005d9376: PUSH EBX
// 005d9377: MOV dword ptr [ESP + 0x84],EDX
// 005d937e: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 005d9383: MOV EDX,EAX
// 005d9385: ADD ESP,0x8
// 005d9388: TEST EAX,EAX
// 005d938a: JZ 0x005d96bc
//   XREF to: 005d96bc (CONDITIONAL_JUMP)
// 005d9390: FLD float ptr [ESP + 0x7c]
// 005d9394: FCOMP float ptr [ESP + 0x90]
// 005d939b: FNSTSW AX
// 005d939d: SAHF
// 005d939e: JNC 0x005d96bc
//   XREF to: 005d96bc (CONDITIONAL_JUMP)
// 005d93a4: MOV ESI,0x1
// 005d93a9: MOV EDI,EDX
// 005d93ab: LEA EDX,[EDI + 0x20]
//   Label: LAB_005d93ab
// 005d93ae: LEA EAX,[EBX + 0x20]
// 005d93b1: FLD float ptr [EDX]
// 005d93b3: FSUB float ptr [EAX]
// 005d93b5: FSTP float ptr [ESP + 0x40]
// 005d93b9: FLD float ptr [EDX + 0x4]
// 005d93bc: FSUB float ptr [EAX + 0x4]
// 005d93bf: FSTP float ptr [ESP + 0x44]
// 005d93c3: FLD float ptr [EDX + 0x8]
// 005d93c6: LEA EDX,[ESP + 0x40]
// 005d93ca: FSUB float ptr [EAX + 0x8]
// 005d93cd: LEA EAX,[ESP + 0x4c]
// 005d93d1: FSTP float ptr [ESP + 0x48]
// 005d93d5: CMP EAX,EDX
// 005d93d7: JZ 0x005d93f1
//   XREF to: 005d93f1 (CONDITIONAL_JUMP)
// 005d93d9: MOV EAX,dword ptr [ESP + 0x40]
// 005d93dd: MOV dword ptr [ESP + 0x4c],EAX
// 005d93e1: MOV EAX,dword ptr [ESP + 0x44]
// 005d93e5: MOV dword ptr [ESP + 0x50],EAX
// 005d93e9: MOV EAX,dword ptr [ESP + 0x48]
// 005d93ed: MOV dword ptr [ESP + 0x54],EAX
// 005d93f1: FLD float ptr [ESP + 0x50]
//   Label: LAB_005d93f1
// 005d93f5: FMUL ST0
// 005d93f7: FLD float ptr [ESP + 0x4c]
// 005d93fb: FMUL ST0
// 005d93fd: FADDP
// 005d93ff: FLD float ptr [ESP + 0x54]
// 005d9403: FMUL ST0
// 005d9405: FADDP
// 005d9407: FSQRT
// 005d9409: MOV dword ptr [EBX + 0x2418],0x0
// 005d9413: FSTP float ptr [ESP + 0xa0]
// 005d941a: MOV EAX,dword ptr [ESP + 0xa0]
// 005d9421: FLD float ptr [ESP + 0xa0]
// 005d9428: MOV dword ptr [ESP + 0x24],EAX
// 005d942c: FCOMP double ptr [0x00654aca]
//   XREF to: 00654aca (READ)
// 005d9432: FNSTSW AX
// 005d9434: SAHF
// 005d9435: JNC 0x005d9791
//   XREF to: 005d9791 (CONDITIONAL_JUMP)
// 005d943b: LEA EAX,[EBX + 0x158]
// 005d9441: CMP ESI,0x1
// 005d9444: JNZ 0x005d9700
//   XREF to: 005d9700 (CONDITIONAL_JUMP)
// 005d944a: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005d9451: JNZ 0x005d96d8
//   XREF to: 005d96d8 (CONDITIONAL_JUMP)
// 005d9457: MOV dword ptr [EBX + 0xbe44],ESI
// 005d945d: MOV dword ptr [EBX + 0x2dc4],0x0
//   Label: LAB_005d945d
// 005d9467: CMP ESI,0x1
//   Label: LAB_005d9467
// 005d946a: JNZ 0x005d9535
//   XREF to: 005d9535 (CONDITIONAL_JUMP)
// 005d9470: LEA EAX,[ESP + 0x4c]
// 005d9474: PUSH EAX
// 005d9475: LEA EAX,[ESP + 0x68]
// 005d9479: PUSH EAX
// 005d947a: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005d947f: FLD float ptr [EAX + 0x4]
// 005d9482: ADD ESP,0x8
// 005d9485: FSUB float ptr [EBX + 0x34]
// 005d9488: SUB ESP,0x4
// 005d948b: FSTP float ptr [ESP]
// 005d948e: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005d9493: MOV dword ptr [ESP + 0xa8],EAX
// 005d949a: FLD float ptr [ESP + 0xa8]
// 005d94a1: FMUL double ptr [0x00654ad2]
//   XREF to: 00654ad2 (READ)
// 005d94a7: ADD ESP,0x4
// 005d94aa: FMUL double ptr [0x00654ada]
//   XREF to: 00654ada (READ)
// 005d94b0: FLD float ptr [ESP + 0x9c]
// 005d94b7: FCHS
// 005d94b9: FSTP float ptr [ESP + 0x84]
// 005d94c0: FST float ptr [EBX + 0xbe50]
// 005d94c6: FCOMP float ptr [ESP + 0x84]
// 005d94cd: FNSTSW AX
// 005d94cf: SAHF
// 005d94d0: JNC 0x005d94df
//   XREF to: 005d94df (CONDITIONAL_JUMP)
// 005d94d2: MOV EAX,dword ptr [ESP + 0x84]
// 005d94d9: MOV dword ptr [EBX + 0xbe50],EAX
// 005d94df: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_005d94df
// 005d94e5: FCOMP float ptr [ESP + 0x9c]
// 005d94ec: FNSTSW AX
// 005d94ee: SAHF
// 005d94ef: JBE 0x005d94fe
//   XREF to: 005d94fe (CONDITIONAL_JUMP)
// 005d94f1: MOV EAX,dword ptr [ESP + 0x9c]
// 005d94f8: MOV dword ptr [EBX + 0xbe50],EAX
// 005d94fe: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_005d94fe
// 005d9504: FST double ptr [ESP + 0x18]
// 005d9508: FCOMP double ptr [0x00654aea]
//   XREF to: 00654aea (READ)
// 005d950e: FNSTSW AX
// 005d9510: SAHF
// 005d9511: JBE 0x005d9535
//   XREF to: 005d9535 (CONDITIONAL_JUMP)
// 005d9513: FLD double ptr [ESP + 0x18]
// 005d9517: FCOMP double ptr [0x00654af2]
//   XREF to: 00654af2 (READ)
// 005d951d: FNSTSW AX
// 005d951f: SAHF
// 005d9520: JNC 0x005d9535
//   XREF to: 005d9535 (CONDITIONAL_JUMP)
// 005d9522: CMP dword ptr [EBX + 0xbe38],0x0
// 005d9529: JZ 0x005d9535
//   XREF to: 005d9535 (CONDITIONAL_JUMP)
// 005d952b: MOV dword ptr [EBX + 0xbe50],0x0
// 005d9535: FLDZ
//   Label: LAB_005d9535
// 005d9537: FLD float ptr [EBX + 0x2418]
// 005d953d: FSTP double ptr [ESP + 0x8]
// 005d9541: FCOMP double ptr [ESP + 0x8]
// 005d9545: FNSTSW AX
// 005d9547: SAHF
// 005d9548: JNC 0x005d9945
//   XREF to: 005d9945 (CONDITIONAL_JUMP)
// 005d954e: MOV EAX,dword ptr [ESP + 0x9c]
// 005d9555: MOV dword ptr [EBX + 0x2418],0x0
// 005d955f: MOV dword ptr [EBX + 0xbe50],EAX
// 005d9565: LEA EAX,[EBX + 0x20]
//   Label: LAB_005d9565
// 005d9568: FLD float ptr [EDI + 0x20]
// 005d956b: FSUB float ptr [EAX]
// 005d956d: FSTP float ptr [ESP + 0x58]
// 005d9571: FLD float ptr [EDI + 0x24]
// 005d9574: FSUB float ptr [EAX + 0x4]
// 005d9577: LEA EDX,[ESP + 0x4c]
// 005d957b: FSTP float ptr [ESP + 0x5c]
// 005d957f: FLD float ptr [EDI + 0x28]
// 005d9582: FSUB float ptr [EAX + 0x8]
// 005d9585: LEA EAX,[ESP + 0x58]
// 005d9589: FSTP float ptr [ESP + 0x60]
// 005d958d: CMP EDX,EAX
// 005d958f: JZ 0x005d95a9
//   XREF to: 005d95a9 (CONDITIONAL_JUMP)
// 005d9591: MOV EAX,dword ptr [ESP + 0x58]
// 005d9595: MOV dword ptr [ESP + 0x4c],EAX
// 005d9599: MOV EAX,dword ptr [ESP + 0x5c]
// 005d959d: MOV dword ptr [ESP + 0x50],EAX
// 005d95a1: MOV EAX,dword ptr [ESP + 0x60]
// 005d95a5: MOV dword ptr [ESP + 0x54],EAX
// 005d95a9: LEA EAX,[ESP + 0x4c]
//   Label: LAB_005d95a9
// 005d95ad: PUSH EAX
// 005d95ae: LEA EAX,[ESP + 0x38]
// 005d95b2: PUSH EAX
// 005d95b3: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005d95b8: MOV EDX,EAX
// 005d95ba: LEA EAX,[ESP + 0x54]
// 005d95be: ADD ESP,0x8
// 005d95c1: CMP EAX,EDX
// 005d95c3: JZ 0x005d95d9
//   XREF to: 005d95d9 (CONDITIONAL_JUMP)
// 005d95c5: MOV EAX,dword ptr [EDX]
// 005d95c7: MOV dword ptr [ESP + 0x4c],EAX
// 005d95cb: MOV EAX,dword ptr [EDX + 0x4]
// 005d95ce: MOV dword ptr [ESP + 0x50],EAX
// 005d95d2: MOV EAX,dword ptr [EDX + 0x8]
// 005d95d5: MOV dword ptr [ESP + 0x54],EAX
// 005d95d9: FLD float ptr [ESP + 0x50]
//   Label: LAB_005d95d9
// 005d95dd: FSUB float ptr [EBX + 0x34]
// 005d95e0: SUB ESP,0x4
// 005d95e3: FSTP float ptr [ESP]
// 005d95e6: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005d95eb: MOV dword ptr [ESP + 0xa8],EAX
// 005d95f2: FLD float ptr [ESP + 0xa8]
// 005d95f9: ADD ESP,0x4
// 005d95fc: FST float ptr [ESP + 0x2c]
// 005d9600: FCOMP float ptr [ESP + 0x94]
// 005d9607: FNSTSW AX
// 005d9609: SAHF
// 005d960a: JBE 0x005d9617
//   XREF to: 005d9617 (CONDITIONAL_JUMP)
// 005d960c: MOV EAX,dword ptr [ESP + 0x94]
// 005d9613: MOV dword ptr [ESP + 0x2c],EAX
// 005d9617: FLD float ptr [ESP + 0x2c]
//   Label: LAB_005d9617
// 005d961b: FLD float ptr [ESP + 0x94]
// 005d9622: FCHS
// 005d9624: FSTP float ptr [ESP + 0x8c]
// 005d962b: FCOMP float ptr [ESP + 0x8c]
// 005d9632: FNSTSW AX
// 005d9634: SAHF
// 005d9635: JNC 0x005d9642
//   XREF to: 005d9642 (CONDITIONAL_JUMP)
// 005d9637: MOV EAX,dword ptr [ESP + 0x8c]
// 005d963e: MOV dword ptr [ESP + 0x2c],EAX
// 005d9642: FLD float ptr [ESP + 0x2c]
//   Label: LAB_005d9642
// 005d9646: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d9649: FXCH
// 005d964b: FSUB float ptr [EBX + 0x9f8c4]
// 005d9651: FXCH
// 005d9653: FMUL double ptr [0x00654afa]
//   XREF to: 00654afa (READ)
// 005d9659: FXCH
// 005d965b: FST float ptr [ESP + 0x20]
// 005d965f: FXCH
// 005d9661: FSTP double ptr [ESP]
// 005d9664: FCOMP double ptr [ESP]
// 005d9667: FNSTSW AX
// 005d9669: SAHF
// 005d966a: JBE 0x005d9673
//   XREF to: 005d9673 (CONDITIONAL_JUMP)
// 005d966c: FLD double ptr [ESP]
// 005d966f: FSTP float ptr [ESP + 0x20]
// 005d9673: FLD float ptr [EBP + 0x18]
//   Label: LAB_005d9673
//   XREF to: Stack[0x8] (READ)
// 005d9676: FMUL double ptr [0x00654b02]
//   XREF to: 00654b02 (READ)
// 005d967c: FLD float ptr [ESP + 0x20]
// 005d9680: FXCH
// 005d9682: FSTP double ptr [ESP + 0x10]
// 005d9686: FCOMP double ptr [ESP + 0x10]
// 005d968a: FNSTSW AX
// 005d968c: SAHF
// 005d968d: JNC 0x005d9697
//   XREF to: 005d9697 (CONDITIONAL_JUMP)
// 005d968f: FLD double ptr [ESP + 0x10]
// 005d9693: FSTP float ptr [ESP + 0x20]
// 005d9697: FLD float ptr [EBX + 0x9f8c4]
//   Label: LAB_005d9697
// 005d969d: FADD float ptr [ESP + 0x20]
// 005d96a1: FSTP float ptr [EBX + 0x9f8c4]
// 005d96a7: MOV ESP,EBP
//   Label: LAB_005d96a7
// 005d96a9: POP EBP
// 005d96aa: POP EDI
// 005d96ab: POP ESI
// 005d96ac: POP EBX
// 005d96ad: RET
// 005d96ae: CMP ECX,0x3
//   Label: LAB_005d96ae
// 005d96b1: JZ 0x005d936c
//   XREF to: 005d936c (CONDITIONAL_JUMP)
// 005d96b7: JMP 0x005d93ab
//   XREF to: 005d93ab (UNCONDITIONAL_JUMP)
// 005d96bc: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_005d96bc
// 005d96c3: JZ 0x005d93ab
//   XREF to: 005d93ab (CONDITIONAL_JUMP)
// 005d96c9: MOV dword ptr [EBX + 0xbe44],0x1
// 005d96d3: JMP 0x005d93ab
//   XREF to: 005d93ab (UNCONDITIONAL_JUMP)
// 005d96d8: PUSH EAX
//   Label: LAB_005d96d8
// 005d96d9: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d96de: MOV EAX,dword ptr [EAX + 0x24]
// 005d96e1: ADD ESP,0x4
// 005d96e4: CMP EAX,0x2
// 005d96e7: JZ 0x005d945d
//   XREF to: 005d945d (CONDITIONAL_JUMP)
// 005d96ed: CMP EAX,ESI
// 005d96ef: JZ 0x005d945d
//   XREF to: 005d945d (CONDITIONAL_JUMP)
// 005d96f5: MOV dword ptr [EBX + 0xbe38],ESI
// 005d96fb: JMP 0x005d945d
//   XREF to: 005d945d (UNCONDITIONAL_JUMP)
// 005d9700: PUSH EAX
//   Label: LAB_005d9700
// 005d9701: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d9706: MOV EAX,dword ptr [EAX + 0x24]
// 005d9709: ADD ESP,0x4
// 005d970c: CMP EAX,0xa
// 005d970f: JNZ 0x005d9724
//   XREF to: 005d9724 (CONDITIONAL_JUMP)
// 005d9711: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005d9718: JZ 0x005d9724
//   XREF to: 005d9724 (CONDITIONAL_JUMP)
// 005d971a: MOV dword ptr [EBX + 0xbe44],0x1
// 005d9724: MOV EAX,[0x02db87d0]
//   Label: LAB_005d9724
//   XREF to: 02db87d0 (READ)
// 005d9729: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005d9730: PUSH EAX
// 005d9731: MOV EDX,dword ptr [EAX + 0x154]
// 005d9737: CALL dword ptr [EDX + 0x15c]
// 005d973d: ADD ESP,0x4
// 005d9740: TEST EAX,EAX
// 005d9742: JNZ 0x005d9467
//   XREF to: 005d9467 (CONDITIONAL_JUMP)
// 005d9748: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d974b: PUSH EBX
// 005d974c: CALL core_charactr.cpp_CCharacter_FUN_0042ede0
//   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
// 005d9751: ADD ESP,0x8
// 005d9754: CMP EAX,0x1
// 005d9757: JC 0x005d9467
//   XREF to: 005d9467 (CONDITIONAL_JUMP)
// 005d975d: JA 0x005d9787
//   XREF to: 005d9787 (CONDITIONAL_JUMP)
// 005d975f: MOV dword ptr [EBX + 0xbe2c],0x1
// 005d9769: JMP 0x005d9467
//   XREF to: 005d9467 (UNCONDITIONAL_JUMP)
// 005d976e: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_005d976e
// 005d9778: MOV dword ptr [EBX + 0xbe2c],0x1
// 005d9782: JMP 0x005d9467
//   XREF to: 005d9467 (UNCONDITIONAL_JUMP)
// 005d9787: CMP EAX,0x2
//   Label: LAB_005d9787
// 005d978a: JZ 0x005d976e
//   XREF to: 005d976e (CONDITIONAL_JUMP)
// 005d978c: JMP 0x005d9467
//   XREF to: 005d9467 (UNCONDITIONAL_JUMP)
// 005d9791: XOR EAX,EAX
//   Label: LAB_005d9791
// 005d9793: MOV dword ptr [ESP + 0x98],EAX
// 005d979a: TEST ESI,ESI
// 005d979c: JNZ 0x005d990f
//   XREF to: 005d990f (CONDITIONAL_JUMP)
// 005d97a2: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005d97a7: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005d97ae: PUSH EAX
// 005d97af: MOV EDX,dword ptr [EAX + 0x154]
// 005d97b5: CALL dword ptr [EDX + 0xbc]
// 005d97bb: ADD ESP,0x4
// 005d97be: MOV dword ptr [ESP + 0x98],EAX
// 005d97c5: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005d97ca: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005d97d1: PUSH EAX
// 005d97d2: MOV EDX,dword ptr [EAX + 0x154]
// 005d97d8: CALL dword ptr [EDX + 0x15c]
// 005d97de: ADD ESP,0x4
// 005d97e1: TEST EAX,EAX
// 005d97e3: JZ 0x005d98ee
//   XREF to: 005d98ee (CONDITIONAL_JUMP)
// 005d97e9: CMP dword ptr [ESP + 0x98],0x0
//   Label: LAB_005d97e9
// 005d97f1: JNZ 0x005d9806
//   XREF to: 005d9806 (CONDITIONAL_JUMP)
// 005d97f3: LEA EAX,[EDI + 0x20]
// 005d97f6: PUSH EAX
// 005d97f7: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 005d97fc: ADD ESP,0x4
// 005d97ff: MOV dword ptr [ESP + 0x98],EAX
// 005d9806: MOV ECX,dword ptr [EBX + 0x6c]
//   Label: LAB_005d9806
// 005d9809: PUSH ECX
// 005d980a: LEA EAX,[ESP + 0x74]
// 005d980e: PUSH EAX
// 005d980f: LEA EAX,[EBX + 0x20]
// 005d9812: PUSH EAX
// 005d9813: MOV EAX,dword ptr [ESP + 0xa4]
// 005d981a: PUSH EAX
// 005d981b: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 005d9820: ADD ESP,0x10
// 005d9823: TEST EAX,EAX
// 005d9825: JZ 0x005d9535
//   XREF to: 005d9535 (CONDITIONAL_JUMP)
// 005d982b: FLD float ptr [ESP + 0x74]
// 005d982f: FSUB float ptr [EBX + 0x34]
// 005d9832: SUB ESP,0x4
// 005d9835: FSTP float ptr [ESP]
// 005d9838: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005d983d: MOV dword ptr [ESP + 0xa8],EAX
// 005d9844: FLD float ptr [ESP + 0xa8]
// 005d984b: FMUL double ptr [0x00654ad2]
//   XREF to: 00654ad2 (READ)
// 005d9851: ADD ESP,0x4
// 005d9854: FMUL double ptr [0x00654ada]
//   XREF to: 00654ada (READ)
// 005d985a: FLD float ptr [ESP + 0x9c]
// 005d9861: FCHS
// 005d9863: FSTP float ptr [ESP + 0x80]
// 005d986a: FST float ptr [EBX + 0xbe50]
// 005d9870: FCOMP float ptr [ESP + 0x80]
// 005d9877: FNSTSW AX
// 005d9879: SAHF
// 005d987a: JC 0x005d991a
//   XREF to: 005d991a (CONDITIONAL_JUMP)
// 005d9880: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_005d9880
// 005d9886: FCOMP float ptr [ESP + 0x9c]
// 005d988d: FNSTSW AX
// 005d988f: SAHF
// 005d9890: JBE 0x005d989f
//   XREF to: 005d989f (CONDITIONAL_JUMP)
// 005d9892: MOV EAX,dword ptr [ESP + 0x9c]
// 005d9899: MOV dword ptr [EBX + 0xbe50],EAX
// 005d989f: FLD float ptr [ESP + 0x24]
//   Label: LAB_005d989f
// 005d98a3: FCOMP double ptr [0x00654ae2]
//   XREF to: 00654ae2 (READ)
// 005d98a9: FNSTSW AX
// 005d98ab: SAHF
// 005d98ac: JNC 0x005d992c
//   XREF to: 005d992c (CONDITIONAL_JUMP)
// 005d98b2: CMP ESI,0x1
// 005d98b5: JZ 0x005d992c
//   XREF to: 005d992c (CONDITIONAL_JUMP)
// 005d98b7: MOV dword ptr [EBX + 0xbe2c],0x1
// 005d98c1: JMP 0x005d9535
//   XREF to: 005d9535 (UNCONDITIONAL_JUMP)
// 005d98c6: MOV dword ptr [EBX + 0xbe2c],0x1
//   Label: LAB_005d98c6
// 005d98d0: JMP 0x005d97e9
//   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)
// 005d98d5: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_005d98d5
// 005d98df: MOV dword ptr [EBX + 0xbe2c],0x1
// 005d98e9: JMP 0x005d97e9
//   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)
// 005d98ee: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005d98ee
//   XREF to: Stack[0x8] (READ)
// 005d98f1: PUSH EBX
// 005d98f2: CALL core_charactr.cpp_CCharacter_FUN_0042ede0
//   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
// 005d98f7: ADD ESP,0x8
// 005d98fa: CMP EAX,0x1
// 005d98fd: JC 0x005d97e9
//   XREF to: 005d97e9 (CONDITIONAL_JUMP)
// 005d9903: JBE 0x005d98c6
//   XREF to: 005d98c6 (CONDITIONAL_JUMP)
// 005d9905: CMP EAX,0x2
// 005d9908: JZ 0x005d98d5
//   XREF to: 005d98d5 (CONDITIONAL_JUMP)
// 005d990a: JMP 0x005d97e9
//   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)
// 005d990f: MOV dword ptr [EBX + 0x2dc4],EAX
//   Label: LAB_005d990f
// 005d9915: JMP 0x005d97e9
//   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)
// 005d991a: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_005d991a
// 005d9921: MOV dword ptr [EBX + 0xbe50],EAX
// 005d9927: JMP 0x005d9880
//   XREF to: 005d9880 (UNCONDITIONAL_JUMP)
// 005d992c: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_005d992c
// 005d9936: MOV dword ptr [EBX + 0xbe2c],0x1
// 005d9940: JMP 0x005d9535
//   XREF to: 005d9535 (UNCONDITIONAL_JUMP)
// 005d9945: JBE 0x005d9565
//   Label: LAB_005d9945
//   XREF to: 005d9565 (CONDITIONAL_JUMP)
// 005d994b: FLD float ptr [ESP + 0x9c]
// 005d9952: MOV dword ptr [EBX + 0x2418],0x0
// 005d995c: FCHS
// 005d995e: FSTP float ptr [EBX + 0xbe50]
// 005d9964: JMP 0x005d9565
//   XREF to: 005d9565 (UNCONDITIONAL_JUMP)
