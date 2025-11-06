// Name: core_colonel.cpp_FUN_0043ff20
// Address: 0043ff20
// Address Range: [[0043ff20, 00440423]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043ff20()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fa7b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00618cf1
//   undefined4 DAT_00618cf9
//   undefined4 DAT_00618d01
//   undefined4 DAT_00618d09
//   undefined4 DAT_00618d11
//   undefined4 DAT_00618d19
//   undefined4 DAT_00618d21
//   undefined4 DAT_00618d29
//   undefined4 DAT_00618d31
//   undefined4 DAT_00618d39
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_hero.cpp_FUN_004f3960
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_colonel.cpp_FUN_0043ff20(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_0043ff20(void)

{
  bool bVar1;
  CHero *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_EDI;
  CHero *pCVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_80;
  CVector3f CStack_7c;
  float fStack_68;
  float fStack_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  undefined1 local_4c [12];
  CVector3f CStack_40;
  CVector3f CStack_34;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  bVar1 = false;
  local_1c = 0x3e800000;
  local_20 = 0x3f490fdb;
  pCVar7 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  if (*(int *)(in_stack_00000004 + 130000) != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_50 = *(float *)(in_stack_00000004 + 0x20) -
               (pCVar2->base_character).base_actor.location.position.x;
    local_4c._0_4_ =
         *(float *)(in_stack_00000004 + 0x24) -
         (pCVar2->base_character).base_actor.location.position.y;
    local_4c._4_4_ =
         *(float *)(in_stack_00000004 + 0x28) -
         (pCVar2->base_character).base_actor.location.position.z;
    local_28 = SQRT((float)local_4c._4_4_ * (float)local_4c._4_4_ +
                    local_50 * local_50 + (float)local_4c._0_4_ * (float)local_4c._0_4_);
    if ((((*(int *)(in_stack_00000004 + 130000) == 3) || (local_28 < _DAT_00618cf1)) &&
        ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3)))
        ) && ((pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960(), pCVar2 != (CHero *)0x0 &&
              (local_80 < (float)_DAT_00618cf9)))) {
      bVar1 = true;
      pCVar7 = pCVar2;
    }
    local_5c.y = (pCVar7->base_character).base_actor.location.position.x -
                 *(float *)(in_stack_00000004 + 0x20);
    local_5c.z = (pCVar7->base_character).base_actor.location.position.y -
                 *(float *)(in_stack_00000004 + 0x24);
    local_50 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_4c != &local_5c.y) {
      local_4c._0_4_ = local_5c.y;
      local_4c._4_4_ = local_5c.z;
      local_4c._8_4_ = local_50;
    }
    local_28 = SQRT((float)local_4c._8_4_ * (float)local_4c._8_4_ +
                    (float)local_4c._0_4_ * (float)local_4c._0_4_ +
                    (float)local_4c._4_4_ * (float)local_4c._4_4_);
    if ((float)_DAT_00618d01 <= local_28) {
      this_ptr = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,(CVector3f *)(in_stack_00000004 + 0x20),&CStack_7c,
                         *(int *)(in_stack_00000004 + 0x6c));
      if (iVar6 != 0) {
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_7c.z - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)_DAT_00618d09 * (float)_DAT_00618d11;
        local_18 = -unaff_EDI;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_18) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_18;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EDI;
        }
        if (((float)_DAT_00618d19 <= local_80) || (bVar1)) {
          *(undefined4 *)(in_stack_00000004 + 0xbe34) = 1;
          *(undefined4 *)(in_stack_00000004 + 0xbe2c) = 1;
        }
        else {
          *(undefined4 *)(in_stack_00000004 + 0xbe2c) = 1;
        }
      }
    }
    else {
      if (bVar1) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe44) = 1;
        }
        else {
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            *(undefined4 *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  ((CMotionController *)(in_stack_00000004 + 0x158));
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_34,(CVector3f *)local_4c);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)_DAT_00618d09 * (float)_DAT_00618d11;
        unaff_ESI = -unaff_EDI;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < unaff_ESI) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_ESI;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EDI;
        }
        if ((((float)_DAT_00618d21 < *(float *)(in_stack_00000004 + 0xbe50)) &&
            ((double)*(float *)(in_stack_00000004 + 0xbe50) < _DAT_00618d29)) &&
           (*(int *)(in_stack_00000004 + 0xbe38) != 0)) {
          *(undefined4 *)(in_stack_00000004 + 0xbe50) = 0;
        }
      }
    }
    fStack_68 = (pCVar7->base_character).base_actor.location.position.x -
                *(float *)(in_stack_00000004 + 0x20);
    fStack_64 = (pCVar7->base_character).base_actor.location.position.y -
                *(float *)(in_stack_00000004 + 0x24);
    local_60 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)(local_4c + 8) != &fStack_68) {
      local_4c._8_4_ = fStack_68;
      CStack_40.x = fStack_64;
      CStack_40.y = local_60;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_5c,(CVector3f *)(local_4c + 8));
    if (&CStack_40 != pCVar3) {
      CStack_40.x = pCVar3->x;
      CStack_40.y = pCVar3->y;
      CStack_40.z = pCVar3->z;
    }
    CStack_34.z = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (CStack_40.y - *(float *)(in_stack_00000004 + 0x34));
    if (unaff_ESI < CStack_34.z) {
      CStack_34.z = unaff_ESI;
    }
    if (CStack_34.z < -unaff_ESI) {
      CStack_34.z = -unaff_ESI;
    }
    CStack_7c.z = CStack_34.z - *(float *)(in_stack_00000004 + 0x1fbe0);
    if (in_stack_00000008 * (float)_DAT_00618d31 < CStack_7c.z) {
      CStack_7c.z = in_stack_00000008 * (float)_DAT_00618d31;
    }
    if (CStack_7c.z < in_stack_00000008 * (float)_DAT_00618d39) {
      CStack_7c.z = in_stack_00000008 * (float)_DAT_00618d39;
    }
    *(float *)(in_stack_00000004 + 0x1fbe0) = *(float *)(in_stack_00000004 + 0x1fbe0) + CStack_7c.z;
  }
  return;
}


// Assembly code:
// 0043ff20: PUSH EBX
//   Label: core_colonel.cpp_FUN_0043ff20
// 0043ff21: PUSH ESI
// 0043ff22: PUSH EDI
// 0043ff23: PUSH EBP
// 0043ff24: MOV EBP,ESP
// 0043ff26: SUB ESP,0x98
// 0043ff2c: AND ESP,0xfffffff8
// 0043ff2f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043ff32: MOV EDX,0x3e800000
// 0043ff37: MOV ECX,0x3f490fdb
// 0043ff3c: PUSH 0x2c
// 0043ff3e: XOR ESI,ESI
// 0043ff40: MOV EDI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0043ff46: PUSH ESI
// 0043ff47: LEA EAX,[EBX + 0xbe2c]
// 0043ff4d: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043ff54: PUSH EAX
// 0043ff55: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0043ff5c: MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0043ff63: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0043ff68: MOV EAX,dword ptr [EBX + 0x1fbd0]
// 0043ff6e: ADD ESP,0xc
// 0043ff71: TEST EAX,EAX
// 0043ff73: JZ 0x004402b6
//   XREF to: 004402b6 (CONDITIONAL_JUMP)
// 0043ff79: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0043ff7e: LEA EDX,[EBX + 0x20]
// 0043ff81: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0043ff88: FLD float ptr [EDX]
// 0043ff8a: FSUB float ptr [EAX + 0x20]
// 0043ff8d: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x54] (WRITE)
// 0043ff91: FLD float ptr [EDX + 0x4]
// 0043ff94: FSUB float ptr [EAX + 0x24]
// 0043ff97: FST float ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (WRITE)
// 0043ff9b: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (READ)
// 0043ff9f: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x54] (READ)
// 0043ffa3: FMUL ST0
// 0043ffa5: FLD float ptr [EDX + 0x8]
// 0043ffa8: FSUB float ptr [EAX + 0x28]
// 0043ffab: FXCH
// 0043ffad: FADDP ST2,ST0
// 0043ffaf: FST float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0043ffb3: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x4c] (READ)
// 0043ffb7: FADDP
// 0043ffb9: FSQRT
// 0043ffbb: MOV EDX,dword ptr [EBX + 0x1fbd0]
// 0043ffc1: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0043ffc5: CMP EDX,0x3
// 0043ffc8: JNZ 0x004402bd
//   XREF to: 004402bd (CONDITIONAL_JUMP)
// 0043ffce: MOV ECX,dword ptr [EBX + 0x1fbd0]
//   Label: LAB_0043ffce
// 0043ffd4: CMP ECX,0x2
// 0043ffd7: JNZ 0x004402d5
//   XREF to: 004402d5 (CONDITIONAL_JUMP)
// 0043ffdd: LEA EAX,[ESP + 0x20]
//   Label: LAB_0043ffdd
//   XREF to: Stack[-0x88] (DATA)
// 0043ffe1: PUSH EAX
// 0043ffe2: PUSH EBX
// 0043ffe3: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 0043ffe8: MOV EDX,EAX
// 0043ffea: ADD ESP,0x8
// 0043ffed: TEST EAX,EAX
// 0043ffef: JZ 0x00440007
//   XREF to: 00440007 (CONDITIONAL_JUMP)
// 0043fff1: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 0043fff5: FCOMP double ptr [0x00618cf9]
//   XREF to: 00618cf9 (READ)
// 0043fffb: FNSTSW AX
// 0043fffd: SAHF
// 0043fffe: JNC 0x00440007
//   XREF to: 00440007 (CONDITIONAL_JUMP)
// 00440000: MOV ESI,0x1
// 00440005: MOV EDI,EDX
// 00440007: LEA EDX,[EDI + 0x20]
//   Label: LAB_00440007
// 0044000a: LEA EAX,[EBX + 0x20]
// 0044000d: FLD float ptr [EDX]
// 0044000f: FSUB float ptr [EAX]
// 00440011: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (WRITE)
// 00440015: FLD float ptr [EDX + 0x4]
// 00440018: FSUB float ptr [EAX + 0x4]
// 0044001b: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0044001f: FLD float ptr [EDX + 0x8]
// 00440022: LEA EDX,[ESP + 0x54]
//   XREF to: Stack[-0x54] (DATA)
// 00440026: FSUB float ptr [EAX + 0x8]
// 00440029: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x60] (DATA)
// 0044002d: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (WRITE)
// 00440031: CMP EDX,EAX
// 00440033: JZ 0x0044004d
//   XREF to: 0044004d (CONDITIONAL_JUMP)
// 00440035: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (DATA)
// 00440039: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0044003d: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00440041: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00440045: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (READ)
// 00440049: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0044004d: FLD float ptr [ESP + 0x58]
//   Label: LAB_0044004d
//   XREF to: Stack[-0x50] (READ)
// 00440051: FMUL ST0
// 00440053: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x54] (READ)
// 00440057: FMUL ST0
// 00440059: FADDP
// 0044005b: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x4c] (READ)
// 0044005f: FMUL ST0
// 00440061: FADDP
// 00440063: FSQRT
// 00440065: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (WRITE)
// 00440069: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 0044006d: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 00440071: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 00440075: FCOMP double ptr [0x00618d01]
//   XREF to: 00618d01 (READ)
// 0044007b: FNSTSW AX
// 0044007d: SAHF
// 0044007e: JNC 0x00440319
//   XREF to: 00440319 (CONDITIONAL_JUMP)
// 00440084: LEA EAX,[EBX + 0x158]
// 0044008a: CMP ESI,0x1
// 0044008d: JNZ 0x0044030b
//   XREF to: 0044030b (CONDITIONAL_JUMP)
// 00440093: CMP dword ptr [EBX + 0x1fbd4],0x0
// 0044009a: JNZ 0x004402e3
//   XREF to: 004402e3 (CONDITIONAL_JUMP)
// 004400a0: MOV dword ptr [EBX + 0xbe44],ESI
// 004400a6: CMP ESI,0x1
//   Label: LAB_004400a6
// 004400a9: JNZ 0x00440174
//   XREF to: 00440174 (CONDITIONAL_JUMP)
// 004400af: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x54] (DATA)
// 004400b3: PUSH EAX
// 004400b4: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x3c] (DATA)
// 004400b8: PUSH EAX
// 004400b9: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004400be: FLD float ptr [EAX + 0x4]
// 004400c1: ADD ESP,0x8
// 004400c4: FSUB float ptr [EBX + 0x34]
// 004400c7: SUB ESP,0x4
// 004400ca: FSTP float ptr [ESP]
//   XREF to: Stack[-0xac] (DATA)
// 004400cd: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004400d2: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004400d9: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 004400e0: FMUL double ptr [0x00618d09]
//   XREF to: 00618d09 (READ)
// 004400e6: ADD ESP,0x4
// 004400e9: FMUL double ptr [0x00618d11]
//   XREF to: 00618d11 (READ)
// 004400ef: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004400f6: FCHS
// 004400f8: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 004400ff: FST float ptr [EBX + 0xbe50]
// 00440105: FCOMP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 0044010c: FNSTSW AX
// 0044010e: SAHF
// 0044010f: JNC 0x0044011e
//   XREF to: 0044011e (CONDITIONAL_JUMP)
// 00440111: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 00440118: MOV dword ptr [EBX + 0xbe50],EAX
// 0044011e: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_0044011e
// 00440124: FCOMP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 0044012b: FNSTSW AX
// 0044012d: SAHF
// 0044012e: JBE 0x0044013d
//   XREF to: 0044013d (CONDITIONAL_JUMP)
// 00440130: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 00440137: MOV dword ptr [EBX + 0xbe50],EAX
// 0044013d: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_0044013d
// 00440143: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (WRITE)
// 00440147: FCOMP double ptr [0x00618d21]
//   XREF to: 00618d21 (READ)
// 0044014d: FNSTSW AX
// 0044014f: SAHF
// 00440150: JBE 0x00440174
//   XREF to: 00440174 (CONDITIONAL_JUMP)
// 00440152: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 00440156: FCOMP double ptr [0x00618d29]
//   XREF to: 00618d29 (READ)
// 0044015c: FNSTSW AX
// 0044015e: SAHF
// 0044015f: JNC 0x00440174
//   XREF to: 00440174 (CONDITIONAL_JUMP)
// 00440161: CMP dword ptr [EBX + 0xbe38],0x0
// 00440168: JZ 0x00440174
//   XREF to: 00440174 (CONDITIONAL_JUMP)
// 0044016a: MOV dword ptr [EBX + 0xbe50],0x0
// 00440174: LEA EAX,[EBX + 0x20]
//   Label: LAB_00440174
// 00440177: FLD float ptr [EDI + 0x20]
// 0044017a: FSUB float ptr [EAX]
// 0044017c: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x78] (WRITE)
// 00440180: FLD float ptr [EDI + 0x24]
// 00440183: FSUB float ptr [EAX + 0x4]
// 00440186: LEA EDX,[ESP + 0x54]
//   XREF to: Stack[-0x54] (DATA)
// 0044018a: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x74] (WRITE)
// 0044018e: FLD float ptr [EDI + 0x28]
// 00440191: FSUB float ptr [EAX + 0x8]
// 00440194: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x78] (DATA)
// 00440198: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (WRITE)
// 0044019c: CMP EDX,EAX
// 0044019e: JZ 0x004401b8
//   XREF to: 004401b8 (CONDITIONAL_JUMP)
// 004401a0: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x78] (DATA)
// 004401a4: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004401a8: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x74] (READ)
// 004401ac: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004401b0: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (READ)
// 004401b4: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004401b8: LEA EAX,[ESP + 0x54]
//   Label: LAB_004401b8
//   XREF to: Stack[-0x54] (DATA)
// 004401bc: PUSH EAX
// 004401bd: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x6c] (DATA)
// 004401c1: PUSH EAX
// 004401c2: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004401c7: MOV EDX,EAX
// 004401c9: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x54] (DATA)
// 004401cd: ADD ESP,0x8
// 004401d0: CMP EAX,EDX
// 004401d2: JZ 0x004401e8
//   XREF to: 004401e8 (CONDITIONAL_JUMP)
// 004401d4: MOV EAX,dword ptr [EDX]
// 004401d6: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004401da: MOV EAX,dword ptr [EDX + 0x4]
// 004401dd: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004401e1: MOV EAX,dword ptr [EDX + 0x8]
// 004401e4: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004401e8: FLD float ptr [ESP + 0x58]
//   Label: LAB_004401e8
//   XREF to: Stack[-0x50] (READ)
// 004401ec: FSUB float ptr [EBX + 0x34]
// 004401ef: SUB ESP,0x4
// 004401f2: FSTP float ptr [ESP]
//   XREF to: Stack[-0xac] (DATA)
// 004401f5: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004401fa: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440201: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 00440208: ADD ESP,0x4
// 0044020b: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x44] (WRITE)
// 0044020f: FCOMP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 00440216: FNSTSW AX
// 00440218: SAHF
// 00440219: JBE 0x00440226
//   XREF to: 00440226 (CONDITIONAL_JUMP)
// 0044021b: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 00440222: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00440226: FLD float ptr [ESP + 0x64]
//   Label: LAB_00440226
//   XREF to: Stack[-0x44] (READ)
// 0044022a: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 00440231: FCHS
// 00440233: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (WRITE)
// 0044023a: FCOMP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (READ)
// 00440241: FNSTSW AX
// 00440243: SAHF
// 00440244: JNC 0x00440251
//   XREF to: 00440251 (CONDITIONAL_JUMP)
// 00440246: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (READ)
// 0044024d: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00440251: FLD float ptr [ESP + 0x64]
//   Label: LAB_00440251
//   XREF to: Stack[-0x44] (READ)
// 00440255: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00440258: FXCH
// 0044025a: FSUB float ptr [EBX + 0x1fbe0]
// 00440260: FXCH
// 00440262: FMUL double ptr [0x00618d31]
//   XREF to: 00618d31 (READ)
// 00440268: FXCH
// 0044026a: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (WRITE)
// 0044026e: FXCH
// 00440270: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 00440273: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 00440276: FNSTSW AX
// 00440278: SAHF
// 00440279: JBE 0x00440282
//   XREF to: 00440282 (CONDITIONAL_JUMP)
// 0044027b: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0044027e: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (WRITE)
// 00440282: FLD float ptr [EBP + 0x18]
//   Label: LAB_00440282
//   XREF to: Stack[0x8] (READ)
// 00440285: FMUL double ptr [0x00618d39]
//   XREF to: 00618d39 (READ)
// 0044028b: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (READ)
// 0044028f: FXCH
// 00440291: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (WRITE)
// 00440295: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 00440299: FNSTSW AX
// 0044029b: SAHF
// 0044029c: JNC 0x004402a6
//   XREF to: 004402a6 (CONDITIONAL_JUMP)
// 0044029e: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 004402a2: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (WRITE)
// 004402a6: FLD float ptr [EBX + 0x1fbe0]
//   Label: LAB_004402a6
// 004402ac: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (READ)
// 004402b0: FSTP float ptr [EBX + 0x1fbe0]
// 004402b6: MOV ESP,EBP
//   Label: LAB_004402b6
// 004402b8: POP EBP
// 004402b9: POP EDI
// 004402ba: POP ESI
// 004402bb: POP EBX
// 004402bc: RET
// 004402bd: FLD float ptr [ESP + 0x7c]
//   Label: LAB_004402bd
//   XREF to: Stack[-0x2c] (READ)
// 004402c1: FCOMP float ptr [0x00618cf1]
//   XREF to: 00618cf1 (READ)
// 004402c7: FNSTSW AX
// 004402c9: SAHF
// 004402ca: JC 0x0043ffce
//   XREF to: 0043ffce (CONDITIONAL_JUMP)
// 004402d0: JMP 0x00440007
//   XREF to: 00440007 (UNCONDITIONAL_JUMP)
// 004402d5: CMP ECX,0x3
//   Label: LAB_004402d5
// 004402d8: JZ 0x0043ffdd
//   XREF to: 0043ffdd (CONDITIONAL_JUMP)
// 004402de: JMP 0x00440007
//   XREF to: 00440007 (UNCONDITIONAL_JUMP)
// 004402e3: PUSH EAX
//   Label: LAB_004402e3
// 004402e4: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004402e9: MOV EAX,dword ptr [EAX + 0x24]
// 004402ec: ADD ESP,0x4
// 004402ef: CMP EAX,0x2
// 004402f2: JZ 0x004400a6
//   XREF to: 004400a6 (CONDITIONAL_JUMP)
// 004402f8: CMP EAX,ESI
// 004402fa: JZ 0x004400a6
//   XREF to: 004400a6 (CONDITIONAL_JUMP)
// 00440300: MOV dword ptr [EBX + 0xbe38],ESI
// 00440306: JMP 0x004400a6
//   XREF to: 004400a6 (UNCONDITIONAL_JUMP)
// 0044030b: PUSH EAX
//   Label: LAB_0044030b
// 0044030c: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00440311: ADD ESP,0x4
// 00440314: JMP 0x004400a6
//   XREF to: 004400a6 (UNCONDITIONAL_JUMP)
// 00440319: XOR EAX,EAX
//   Label: LAB_00440319
// 0044031b: TEST ESI,ESI
// 0044031d: JNZ 0x0044033b
//   XREF to: 0044033b (CONDITIONAL_JUMP)
// 0044031f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00440324: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0044032b: PUSH EAX
// 0044032c: MOV EDX,dword ptr [EAX + 0x154]
// 00440332: CALL dword ptr [EDX + 0xbc]
// 00440338: ADD ESP,0x4
// 0044033b: TEST EAX,EAX
//   Label: LAB_0044033b
// 0044033d: JNZ 0x0044034b
//   XREF to: 0044034b (CONDITIONAL_JUMP)
// 0044033f: LEA EAX,[EDI + 0x20]
// 00440342: PUSH EAX
// 00440343: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 00440348: ADD ESP,0x4
// 0044034b: MOV EDX,dword ptr [EBX + 0x6c]
//   Label: LAB_0044034b
// 0044034e: PUSH EDX
// 0044034f: LEA EDX,[ESP + 0x28]
//   XREF to: Stack[-0x84] (DATA)
// 00440353: PUSH EDX
// 00440354: LEA EDX,[EBX + 0x20]
// 00440357: PUSH EDX
// 00440358: PUSH EAX
// 00440359: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 0044035e: ADD ESP,0x10
// 00440361: TEST EAX,EAX
// 00440363: JZ 0x00440174
//   XREF to: 00440174 (CONDITIONAL_JUMP)
// 00440369: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 0044036d: FSUB float ptr [EBX + 0x34]
// 00440370: SUB ESP,0x4
// 00440373: FSTP float ptr [ESP]
//   XREF to: Stack[-0xac] (DATA)
// 00440376: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0044037b: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440382: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 00440389: FMUL double ptr [0x00618d09]
//   XREF to: 00618d09 (READ)
// 0044038f: ADD ESP,0x4
// 00440392: FMUL double ptr [0x00618d11]
//   XREF to: 00618d11 (READ)
// 00440398: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 0044039f: FCHS
// 004403a1: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (WRITE)
// 004403a8: FST float ptr [EBX + 0xbe50]
// 004403ae: FCOMP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 004403b5: FNSTSW AX
// 004403b7: SAHF
// 004403b8: JC 0x004403fc
//   XREF to: 004403fc (CONDITIONAL_JUMP)
// 004403ba: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004403ba
// 004403c0: FCOMP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004403c7: FNSTSW AX
// 004403c9: SAHF
// 004403ca: JBE 0x004403d9
//   XREF to: 004403d9 (CONDITIONAL_JUMP)
// 004403cc: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004403d3: MOV dword ptr [EBX + 0xbe50],EAX
// 004403d9: FLD float ptr [ESP + 0x18]
//   Label: LAB_004403d9
//   XREF to: Stack[-0x90] (READ)
// 004403dd: FCOMP double ptr [0x00618d19]
//   XREF to: 00618d19 (READ)
// 004403e3: FNSTSW AX
// 004403e5: SAHF
// 004403e6: JNC 0x0044040b
//   XREF to: 0044040b (CONDITIONAL_JUMP)
// 004403e8: CMP ESI,0x1
// 004403eb: JZ 0x0044040b
//   XREF to: 0044040b (CONDITIONAL_JUMP)
// 004403ed: MOV dword ptr [EBX + 0xbe2c],0x1
// 004403f7: JMP 0x00440174
//   XREF to: 00440174 (UNCONDITIONAL_JUMP)
// 004403fc: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_004403fc
//   XREF to: Stack[-0x28] (READ)
// 00440403: MOV dword ptr [EBX + 0xbe50],EAX
// 00440409: JMP 0x004403ba
//   XREF to: 004403ba (UNCONDITIONAL_JUMP)
// 0044040b: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_0044040b
// 00440415: MOV dword ptr [EBX + 0xbe2c],0x1
// 0044041f: JMP 0x00440174
//   XREF to: 00440174 (UNCONDITIONAL_JUMP)
