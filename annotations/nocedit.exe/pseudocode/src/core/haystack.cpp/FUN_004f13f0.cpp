// Name: core_haystack.cpp_FUN_004f13f0
// Address: 004f13f0
// Address Range: [[004f13f0, 004f1943]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f13f0()
// Cross-references:
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f10f3 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062e963 = 20
//   double DOUBLE_0062e96b = 20
//   double DOUBLE_0062e973 = 6
//   double DOUBLE_0062e97b = 0.318309886192889
//   double DOUBLE_0062e983 = 4
//   double DOUBLE_0062e98b = 10
//   double DOUBLE_0062e993 = -0.25
//   double DOUBLE_0062e99b = 0.25
//   double DOUBLE_0062e9a3 = 3.14159265350000
//   double DOUBLE_0062e9ab = -3.14159265350000
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_hero.cpp_FUN_004f3960
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f13f0(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f13f0(void)

{
  bool bVar1;
  CHero *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  int iVar5;
  CPathMap *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_EDI;
  CHero *pCVar6;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_80;
  CVector3f CStack_7c;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_5c;
  CVector3f CStack_58;
  float local_44;
  undefined1 local_40 [12];
  undefined1 auStack_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  
  bVar1 = false;
  local_1c = 0x3e800000;
  local_20 = 0x3f490fdb;
  pCVar6 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  if (*(int *)(in_stack_00000004 + 130000) != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_44 = *(float *)(in_stack_00000004 + 0x20) -
               (pCVar2->base_character).base_actor.location.position.x;
    local_40._0_4_ =
         *(float *)(in_stack_00000004 + 0x24) -
         (pCVar2->base_character).base_actor.location.position.y;
    local_40._4_4_ =
         *(float *)(in_stack_00000004 + 0x28) -
         (pCVar2->base_character).base_actor.location.position.z;
    auStack_34._8_4_ =
         SQRT((float)local_40._4_4_ * (float)local_40._4_4_ +
              local_44 * local_44 + (float)local_40._0_4_ * (float)local_40._0_4_);
    if (((*(int *)(in_stack_00000004 + 130000) == 3) || ((float)auStack_34._8_4_ < FLOAT_0062e963))
       && ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3)
           ))) {
      pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar2 == (CHero *)0x0) || ((float)DOUBLE_0062e96b <= local_80)) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) != 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      else {
        bVar1 = true;
        pCVar6 = pCVar2;
      }
    }
    local_70 = (pCVar6->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_6c = (pCVar6->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    local_68 = (pCVar6->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_40 != &local_70) {
      local_40._0_4_ = local_70;
      local_40._4_4_ = local_6c;
      local_40._8_4_ = local_68;
    }
    if ((float)DOUBLE_0062e973 <=
        SQRT((float)local_40._8_4_ * (float)local_40._8_4_ +
             (float)local_40._0_4_ * (float)local_40._0_4_ +
             (float)local_40._4_4_ * (float)local_40._4_4_)) {
      this_ptr = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,(CVector3f *)(in_stack_00000004 + 0x20),&CStack_7c,
                         *(int *)(in_stack_00000004 + 0x6c));
      if (iVar5 != 0) {
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_7c.z - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)DOUBLE_0062e97b * (float)DOUBLE_0062e983;
        local_14 = -unaff_EDI;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_14) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_14;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EDI;
        }
        if (((float)DOUBLE_0062e98b <= local_80) || (bVar1)) {
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
          iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0
                            ((CMotionController *)(in_stack_00000004 + 0x158));
          if ((*(int *)(iVar5 + 0x24) != 2) && (*(int *)(iVar5 + 0x24) != 1)) {
            *(undefined4 *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0
                          ((CMotionController *)(in_stack_00000004 + 0x158));
        if ((*(int *)(iVar5 + 0x24) == 10) && (*(int *)(in_stack_00000004 + 0x1fbd4) != 0)) {
          *(undefined4 *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_58,(CVector3f *)local_40);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)DOUBLE_0062e97b * (float)DOUBLE_0062e983;
        local_18 = -unaff_EDI;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_18) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_18;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EDI;
        }
        if ((((float)DOUBLE_0062e993 < *(float *)(in_stack_00000004 + 0xbe50)) &&
            ((double)*(float *)(in_stack_00000004 + 0xbe50) < DOUBLE_0062e99b)) &&
           (*(int *)(in_stack_00000004 + 0xbe38) != 0)) {
          *(undefined4 *)(in_stack_00000004 + 0xbe50) = 0;
        }
      }
    }
    fStack_5c = (pCVar6->base_character).base_actor.location.position.x -
                *(float *)(in_stack_00000004 + 0x20);
    CStack_58.x = (pCVar6->base_character).base_actor.location.position.y -
                  *(float *)(in_stack_00000004 + 0x24);
    CStack_58.y = (pCVar6->base_character).base_actor.location.position.z -
                  *(float *)(in_stack_00000004 + 0x28);
    if ((float *)(local_40 + 8) != &fStack_5c) {
      local_40._8_4_ = fStack_5c;
      auStack_34._0_4_ = CStack_58.x;
      auStack_34._4_4_ = CStack_58.y;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(auStack_34 + 8),(CVector3f *)(local_40 + 8));
    if ((CVector3f *)auStack_34 != pCVar3) {
      auStack_34._0_4_ = pCVar3->x;
      auStack_34._4_4_ = pCVar3->y;
      auStack_34._8_4_ = pCVar3->z;
    }
    local_40._8_4_ =
         core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                   ((float)auStack_34._4_4_ - *(float *)(in_stack_00000004 + 0x34));
    if (unaff_ESI < (float)local_40._8_4_) {
      local_40._8_4_ = unaff_ESI;
    }
    if ((float)local_40._8_4_ < -unaff_ESI) {
      local_40._8_4_ = -unaff_ESI;
    }
    CStack_7c.z = (float)local_40._8_4_ - *(float *)(in_stack_00000004 + 0x1fbe0);
    if (in_stack_00000008 * (float)DOUBLE_0062e9a3 < CStack_7c.z) {
      CStack_7c.z = in_stack_00000008 * (float)DOUBLE_0062e9a3;
    }
    if (CStack_7c.z < in_stack_00000008 * (float)DOUBLE_0062e9ab) {
      CStack_7c.z = in_stack_00000008 * (float)DOUBLE_0062e9ab;
    }
    *(float *)(in_stack_00000004 + 0x1fbe0) = *(float *)(in_stack_00000004 + 0x1fbe0) + CStack_7c.z;
  }
  return;
}


// Assembly code:
// 004f13f0: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f13f0
// 004f13f1: PUSH ESI
// 004f13f2: PUSH EDI
// 004f13f3: PUSH EBP
// 004f13f4: MOV EBP,ESP
// 004f13f6: SUB ESP,0x98
// 004f13fc: AND ESP,0xfffffff8
// 004f13ff: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f1402: MOV EDX,0x3e800000
// 004f1407: MOV ECX,0x3f490fdb
// 004f140c: PUSH 0x2c
// 004f140e: XOR ESI,ESI
// 004f1410: MOV EDI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f1416: PUSH ESI
// 004f1417: LEA EAX,[EBX + 0xbe2c]
// 004f141d: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f1424: PUSH EAX
// 004f1425: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004f142c: MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f1433: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004f1438: MOV EAX,dword ptr [EBX + 0x1fbd0]
// 004f143e: ADD ESP,0xc
// 004f1441: TEST EAX,EAX
// 004f1443: JZ 0x004f1797
//   XREF to: 004f1797 (CONDITIONAL_JUMP)
// 004f1449: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f144e: LEA EDX,[EBX + 0x20]
// 004f1451: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f1458: FLD float ptr [EDX]
// 004f145a: FSUB float ptr [EAX + 0x20]
// 004f145d: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x48] (WRITE)
// 004f1461: FLD float ptr [EDX + 0x4]
// 004f1464: FSUB float ptr [EAX + 0x24]
// 004f1467: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x44] (WRITE)
// 004f146b: FMUL float ptr [ESP + 0x64]
//   XREF to: Stack[-0x44] (READ)
// 004f146f: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x48] (READ)
// 004f1473: FMUL ST0
// 004f1475: FLD float ptr [EDX + 0x8]
// 004f1478: FSUB float ptr [EAX + 0x28]
// 004f147b: FXCH
// 004f147d: FADDP ST2,ST0
// 004f147f: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x40] (WRITE)
// 004f1483: FMUL float ptr [ESP + 0x68]
//   XREF to: Stack[-0x40] (READ)
// 004f1487: FADDP
// 004f1489: FSQRT
// 004f148b: MOV EDX,dword ptr [EBX + 0x1fbd0]
// 004f1491: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (WRITE)
// 004f1495: CMP EDX,0x3
// 004f1498: JNZ 0x004f179e
//   XREF to: 004f179e (CONDITIONAL_JUMP)
// 004f149e: MOV ECX,dword ptr [EBX + 0x1fbd0]
//   Label: LAB_004f149e
// 004f14a4: CMP ECX,0x2
// 004f14a7: JNZ 0x004f17b6
//   XREF to: 004f17b6 (CONDITIONAL_JUMP)
// 004f14ad: LEA EAX,[ESP + 0x20]
//   Label: LAB_004f14ad
//   XREF to: Stack[-0x88] (DATA)
// 004f14b1: PUSH EAX
// 004f14b2: MOV EDX,0x461c3f9a
// 004f14b7: PUSH EBX
// 004f14b8: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 004f14bc: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 004f14c1: MOV EDX,EAX
// 004f14c3: ADD ESP,0x8
// 004f14c6: TEST EAX,EAX
// 004f14c8: JZ 0x004f17c4
//   XREF to: 004f17c4 (CONDITIONAL_JUMP)
// 004f14ce: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 004f14d2: FCOMP double ptr [0x0062e96b]
//   XREF to: 0062e96b (READ)
// 004f14d8: FNSTSW AX
// 004f14da: SAHF
// 004f14db: JNC 0x004f17c4
//   XREF to: 004f17c4 (CONDITIONAL_JUMP)
// 004f14e1: MOV ESI,0x1
// 004f14e6: MOV EDI,EDX
// 004f14e8: LEA EDX,[EDI + 0x20]
//   Label: LAB_004f14e8
// 004f14eb: LEA EAX,[EBX + 0x20]
// 004f14ee: FLD float ptr [EDX]
// 004f14f0: FSUB float ptr [EAX]
// 004f14f2: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x78] (WRITE)
// 004f14f6: FLD float ptr [EDX + 0x4]
// 004f14f9: FSUB float ptr [EAX + 0x4]
// 004f14fc: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x74] (WRITE)
// 004f1500: FLD float ptr [EDX + 0x8]
// 004f1503: LEA EDX,[ESP + 0x60]
//   XREF to: Stack[-0x48] (DATA)
// 004f1507: FSUB float ptr [EAX + 0x8]
// 004f150a: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x78] (DATA)
// 004f150e: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (WRITE)
// 004f1512: CMP EDX,EAX
// 004f1514: JZ 0x004f152e
//   XREF to: 004f152e (CONDITIONAL_JUMP)
// 004f1516: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x78] (DATA)
// 004f151a: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004f151e: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x74] (READ)
// 004f1522: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004f1526: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (READ)
// 004f152a: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004f152e: FLD float ptr [ESP + 0x64]
//   Label: LAB_004f152e
//   XREF to: Stack[-0x44] (READ)
// 004f1532: FMUL ST0
// 004f1534: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x48] (READ)
// 004f1538: FMUL ST0
// 004f153a: FADDP
// 004f153c: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x40] (READ)
// 004f1540: FMUL ST0
// 004f1542: FADDP
// 004f1544: FSQRT
// 004f1546: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 004f154d: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 004f1554: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 004f155b: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004f155f: FCOMP double ptr [0x0062e973]
//   XREF to: 0062e973 (READ)
// 004f1565: FNSTSW AX
// 004f1567: SAHF
// 004f1568: JNC 0x004f1839
//   XREF to: 004f1839 (CONDITIONAL_JUMP)
// 004f156e: LEA EAX,[EBX + 0x158]
// 004f1574: CMP ESI,0x1
// 004f1577: JNZ 0x004f1808
//   XREF to: 004f1808 (CONDITIONAL_JUMP)
// 004f157d: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004f1584: JNZ 0x004f17e0
//   XREF to: 004f17e0 (CONDITIONAL_JUMP)
// 004f158a: MOV dword ptr [EBX + 0xbe44],ESI
// 004f1590: CMP ESI,0x1
//   Label: LAB_004f1590
// 004f1593: JNZ 0x004f165e
//   XREF to: 004f165e (CONDITIONAL_JUMP)
// 004f1599: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x48] (DATA)
// 004f159d: PUSH EAX
// 004f159e: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x60] (DATA)
// 004f15a2: PUSH EAX
// 004f15a3: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f15a8: FLD float ptr [EAX + 0x4]
// 004f15ab: ADD ESP,0x8
// 004f15ae: FSUB float ptr [EBX + 0x34]
// 004f15b1: SUB ESP,0x4
// 004f15b4: FSTP float ptr [ESP]
//   XREF to: Stack[-0xac] (DATA)
// 004f15b7: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f15bc: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f15c3: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 004f15ca: FMUL double ptr [0x0062e97b]
//   XREF to: 0062e97b (READ)
// 004f15d0: ADD ESP,0x4
// 004f15d3: FMUL double ptr [0x0062e983]
//   XREF to: 0062e983 (READ)
// 004f15d9: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f15e0: FCHS
// 004f15e2: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (WRITE)
// 004f15e9: FST float ptr [EBX + 0xbe50]
// 004f15ef: FCOMP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 004f15f6: FNSTSW AX
// 004f15f8: SAHF
// 004f15f9: JNC 0x004f1608
//   XREF to: 004f1608 (CONDITIONAL_JUMP)
// 004f15fb: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 004f1602: MOV dword ptr [EBX + 0xbe50],EAX
// 004f1608: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f1608
// 004f160e: FCOMP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f1615: FNSTSW AX
// 004f1617: SAHF
// 004f1618: JBE 0x004f1627
//   XREF to: 004f1627 (CONDITIONAL_JUMP)
// 004f161a: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f1621: MOV dword ptr [EBX + 0xbe50],EAX
// 004f1627: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f1627
// 004f162d: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (WRITE)
// 004f1631: FCOMP double ptr [0x0062e993]
//   XREF to: 0062e993 (READ)
// 004f1637: FNSTSW AX
// 004f1639: SAHF
// 004f163a: JBE 0x004f165e
//   XREF to: 004f165e (CONDITIONAL_JUMP)
// 004f163c: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 004f1640: FCOMP double ptr [0x0062e99b]
//   XREF to: 0062e99b (READ)
// 004f1646: FNSTSW AX
// 004f1648: SAHF
// 004f1649: JNC 0x004f165e
//   XREF to: 004f165e (CONDITIONAL_JUMP)
// 004f164b: CMP dword ptr [EBX + 0xbe38],0x0
// 004f1652: JZ 0x004f165e
//   XREF to: 004f165e (CONDITIONAL_JUMP)
// 004f1654: MOV dword ptr [EBX + 0xbe50],0x0
// 004f165e: LEA EAX,[EBX + 0x20]
//   Label: LAB_004f165e
// 004f1661: FLD float ptr [EDI + 0x20]
// 004f1664: FSUB float ptr [EAX]
// 004f1666: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x6c] (WRITE)
// 004f166a: FLD float ptr [EDI + 0x24]
// 004f166d: FSUB float ptr [EAX + 0x4]
// 004f1670: LEA EDX,[ESP + 0x3c]
//   XREF to: Stack[-0x6c] (DATA)
// 004f1674: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (WRITE)
// 004f1678: FLD float ptr [EDI + 0x28]
// 004f167b: FSUB float ptr [EAX + 0x8]
// 004f167e: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x48] (DATA)
// 004f1682: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x64] (WRITE)
// 004f1686: CMP EAX,EDX
// 004f1688: JZ 0x004f16a2
//   XREF to: 004f16a2 (CONDITIONAL_JUMP)
// 004f168a: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x6c] (READ)
// 004f168e: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004f1692: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (READ)
// 004f1696: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004f169a: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x64] (READ)
// 004f169e: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004f16a2: LEA EAX,[ESP + 0x60]
//   Label: LAB_004f16a2
//   XREF to: Stack[-0x48] (DATA)
// 004f16a6: PUSH EAX
// 004f16a7: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x3c] (DATA)
// 004f16ab: PUSH EAX
// 004f16ac: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f16b1: MOV EDX,EAX
// 004f16b3: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x48] (DATA)
// 004f16b7: ADD ESP,0x8
// 004f16ba: CMP EAX,EDX
// 004f16bc: JZ 0x004f16d2
//   XREF to: 004f16d2 (CONDITIONAL_JUMP)
// 004f16be: MOV EAX,dword ptr [EDX]
// 004f16c0: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004f16c4: MOV EAX,dword ptr [EDX + 0x4]
// 004f16c7: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004f16cb: MOV EAX,dword ptr [EDX + 0x8]
// 004f16ce: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004f16d2: FLD float ptr [ESP + 0x64]
//   Label: LAB_004f16d2
//   XREF to: Stack[-0x44] (READ)
// 004f16d6: FSUB float ptr [EBX + 0x34]
// 004f16d9: SUB ESP,0x4
// 004f16dc: FSTP float ptr [ESP]
//   XREF to: Stack[-0xac] (DATA)
// 004f16df: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f16e4: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f16eb: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 004f16f2: ADD ESP,0x4
// 004f16f5: FST float ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (WRITE)
// 004f16f9: FCOMP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 004f1700: FNSTSW AX
// 004f1702: SAHF
// 004f1703: JBE 0x004f1710
//   XREF to: 004f1710 (CONDITIONAL_JUMP)
// 004f1705: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 004f170c: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004f1710: FLD float ptr [ESP + 0x58]
//   Label: LAB_004f1710
//   XREF to: Stack[-0x50] (READ)
// 004f1714: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 004f171b: FCHS
// 004f171d: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004f1721: FCOMP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (READ)
// 004f1725: FNSTSW AX
// 004f1727: SAHF
// 004f1728: JNC 0x004f1732
//   XREF to: 004f1732 (CONDITIONAL_JUMP)
// 004f172a: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (READ)
// 004f172e: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004f1732: FLD float ptr [ESP + 0x58]
//   Label: LAB_004f1732
//   XREF to: Stack[-0x50] (READ)
// 004f1736: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f1739: FXCH
// 004f173b: FSUB float ptr [EBX + 0x1fbe0]
// 004f1741: FXCH
// 004f1743: FMUL double ptr [0x0062e9a3]
//   XREF to: 0062e9a3 (READ)
// 004f1749: FXCH
// 004f174b: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (WRITE)
// 004f174f: FXCH
// 004f1751: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (WRITE)
// 004f1755: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 004f1759: FNSTSW AX
// 004f175b: SAHF
// 004f175c: JBE 0x004f1766
//   XREF to: 004f1766 (CONDITIONAL_JUMP)
// 004f175e: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 004f1762: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (WRITE)
// 004f1766: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f1766
//   XREF to: Stack[0x8] (READ)
// 004f1769: FMUL double ptr [0x0062e9ab]
//   XREF to: 0062e9ab (READ)
// 004f176f: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (READ)
// 004f1773: FXCH
// 004f1775: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 004f1778: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 004f177b: FNSTSW AX
// 004f177d: SAHF
// 004f177e: JNC 0x004f1787
//   XREF to: 004f1787 (CONDITIONAL_JUMP)
// 004f1780: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 004f1783: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (WRITE)
// 004f1787: FLD float ptr [EBX + 0x1fbe0]
//   Label: LAB_004f1787
// 004f178d: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8c] (READ)
// 004f1791: FSTP float ptr [EBX + 0x1fbe0]
// 004f1797: MOV ESP,EBP
//   Label: LAB_004f1797
// 004f1799: POP EBP
// 004f179a: POP EDI
// 004f179b: POP ESI
// 004f179c: POP EBX
// 004f179d: RET
// 004f179e: FLD float ptr [ESP + 0x78]
//   Label: LAB_004f179e
//   XREF to: Stack[-0x30] (READ)
// 004f17a2: FCOMP float ptr [0x0062e963]
//   XREF to: 0062e963 (READ)
// 004f17a8: FNSTSW AX
// 004f17aa: SAHF
// 004f17ab: JC 0x004f149e
//   XREF to: 004f149e (CONDITIONAL_JUMP)
// 004f17b1: JMP 0x004f14e8
//   XREF to: 004f14e8 (UNCONDITIONAL_JUMP)
// 004f17b6: CMP ECX,0x3
//   Label: LAB_004f17b6
// 004f17b9: JZ 0x004f14ad
//   XREF to: 004f14ad (CONDITIONAL_JUMP)
// 004f17bf: JMP 0x004f14e8
//   XREF to: 004f14e8 (UNCONDITIONAL_JUMP)
// 004f17c4: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_004f17c4
// 004f17cb: JZ 0x004f14e8
//   XREF to: 004f14e8 (CONDITIONAL_JUMP)
// 004f17d1: MOV dword ptr [EBX + 0xbe44],0x1
// 004f17db: JMP 0x004f14e8
//   XREF to: 004f14e8 (UNCONDITIONAL_JUMP)
// 004f17e0: PUSH EAX
//   Label: LAB_004f17e0
// 004f17e1: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f17e6: MOV EAX,dword ptr [EAX + 0x24]
// 004f17e9: ADD ESP,0x4
// 004f17ec: CMP EAX,0x2
// 004f17ef: JZ 0x004f1590
//   XREF to: 004f1590 (CONDITIONAL_JUMP)
// 004f17f5: CMP EAX,ESI
// 004f17f7: JZ 0x004f1590
//   XREF to: 004f1590 (CONDITIONAL_JUMP)
// 004f17fd: MOV dword ptr [EBX + 0xbe38],ESI
// 004f1803: JMP 0x004f1590
//   XREF to: 004f1590 (UNCONDITIONAL_JUMP)
// 004f1808: PUSH EAX
//   Label: LAB_004f1808
// 004f1809: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f180e: MOV EAX,dword ptr [EAX + 0x24]
// 004f1811: ADD ESP,0x4
// 004f1814: CMP EAX,0xa
// 004f1817: JNZ 0x004f1590
//   XREF to: 004f1590 (CONDITIONAL_JUMP)
// 004f181d: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004f1824: JZ 0x004f1590
//   XREF to: 004f1590 (CONDITIONAL_JUMP)
// 004f182a: MOV dword ptr [EBX + 0xbe44],0x1
// 004f1834: JMP 0x004f1590
//   XREF to: 004f1590 (UNCONDITIONAL_JUMP)
// 004f1839: XOR EAX,EAX
//   Label: LAB_004f1839
// 004f183b: TEST ESI,ESI
// 004f183d: JNZ 0x004f185b
//   XREF to: 004f185b (CONDITIONAL_JUMP)
// 004f183f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f1844: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f184b: PUSH EAX
// 004f184c: MOV EDX,dword ptr [EAX + 0x154]
// 004f1852: CALL dword ptr [EDX + 0xbc]
// 004f1858: ADD ESP,0x4
// 004f185b: TEST EAX,EAX
//   Label: LAB_004f185b
// 004f185d: JNZ 0x004f186b
//   XREF to: 004f186b (CONDITIONAL_JUMP)
// 004f185f: LEA EAX,[EDI + 0x20]
// 004f1862: PUSH EAX
// 004f1863: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 004f1868: ADD ESP,0x4
// 004f186b: MOV EDX,dword ptr [EBX + 0x6c]
//   Label: LAB_004f186b
// 004f186e: PUSH EDX
// 004f186f: LEA EDX,[ESP + 0x28]
//   XREF to: Stack[-0x84] (DATA)
// 004f1873: PUSH EDX
// 004f1874: LEA EDX,[EBX + 0x20]
// 004f1877: PUSH EDX
// 004f1878: PUSH EAX
// 004f1879: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 004f187e: ADD ESP,0x10
// 004f1881: TEST EAX,EAX
// 004f1883: JZ 0x004f165e
//   XREF to: 004f165e (CONDITIONAL_JUMP)
// 004f1889: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 004f188d: FSUB float ptr [EBX + 0x34]
// 004f1890: SUB ESP,0x4
// 004f1893: FSTP float ptr [ESP]
//   XREF to: Stack[-0xac] (DATA)
// 004f1896: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f189b: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f18a2: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 004f18a9: FMUL double ptr [0x0062e97b]
//   XREF to: 0062e97b (READ)
// 004f18af: ADD ESP,0x4
// 004f18b2: FMUL double ptr [0x0062e983]
//   XREF to: 0062e983 (READ)
// 004f18b8: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f18bf: FCHS
// 004f18c1: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (WRITE)
// 004f18c8: FST float ptr [EBX + 0xbe50]
// 004f18ce: FCOMP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (READ)
// 004f18d5: FNSTSW AX
// 004f18d7: SAHF
// 004f18d8: JC 0x004f191c
//   XREF to: 004f191c (CONDITIONAL_JUMP)
// 004f18da: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f18da
// 004f18e0: FCOMP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f18e7: FNSTSW AX
// 004f18e9: SAHF
// 004f18ea: JBE 0x004f18f9
//   XREF to: 004f18f9 (CONDITIONAL_JUMP)
// 004f18ec: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f18f3: MOV dword ptr [EBX + 0xbe50],EAX
// 004f18f9: FLD float ptr [ESP + 0x18]
//   Label: LAB_004f18f9
//   XREF to: Stack[-0x90] (READ)
// 004f18fd: FCOMP double ptr [0x0062e98b]
//   XREF to: 0062e98b (READ)
// 004f1903: FNSTSW AX
// 004f1905: SAHF
// 004f1906: JNC 0x004f192b
//   XREF to: 004f192b (CONDITIONAL_JUMP)
// 004f1908: CMP ESI,0x1
// 004f190b: JZ 0x004f192b
//   XREF to: 004f192b (CONDITIONAL_JUMP)
// 004f190d: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f1917: JMP 0x004f165e
//   XREF to: 004f165e (UNCONDITIONAL_JUMP)
// 004f191c: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_004f191c
//   XREF to: Stack[-0x24] (READ)
// 004f1923: MOV dword ptr [EBX + 0xbe50],EAX
// 004f1929: JMP 0x004f18da
//   XREF to: 004f18da (UNCONDITIONAL_JUMP)
// 004f192b: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_004f192b
// 004f1935: MOV dword ptr [EBX + 0xbe2c],0x1
// 004f193f: JMP 0x004f165e
//   XREF to: 004f165e (UNCONDITIONAL_JUMP)
