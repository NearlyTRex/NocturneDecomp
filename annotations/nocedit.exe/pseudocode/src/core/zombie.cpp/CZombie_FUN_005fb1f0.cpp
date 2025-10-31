// Name: core_zombie.cpp_CZombie_FUN_005fb1f0
// Address: 005fb1f0
// Address Range: [[005fb1f0, 005fb521]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fb1f0()
// Globals:
//   TerminatedCString s_new_0065881d
//   undefined4 DAT_00658821
//   undefined4 DAT_00658825
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CVector_ctor_FUN_00410340
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fb1f0(CZombie* param_1, undefined4
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fb1f0(void)

{
  uint uVar1;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  CMatrix3x4f *pCVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f *output_vector;
  CMatrix3x4f *in_stack_fffffe94;
  float local_13c [12];
  CMatrix3x4f local_10c;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  int local_10;
  
  bVar9 = 0;
  iVar2 = in_stack_00000008 * 0x44 + in_stack_00000004;
  iVar5 = *(int *)(iVar2 + 0x24b4);
  local_10 = *(int *)(iVar2 + 0x24ac);
  uVar1 = *(uint *)(in_stack_00000004 + 0xbed0);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    pfVar4 = (float *)(**(code **)(*(int *)(iVar5 + 0x154) + 0x14))();
    local_34 = *pfVar4 + pfVar4[3];
    local_30 = pfVar4[1] + pfVar4[4];
    local_4c.x = local_34 * _DAT_00658821;
    local_2c = pfVar4[2] + pfVar4[5];
    local_4c.y = local_30 * _DAT_00658821;
    local_4c.z = local_2c * _DAT_00658821;
    if (&local_64 != &local_4c) {
      local_64.x = local_4c.x;
      local_64.y = local_4c.y;
      local_64.z = local_4c.z;
    }
    puVar7 = (undefined4 *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24b8);
    puVar8 = (undefined4 *)&stack0xfffffe94;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  else {
    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                      ((char *)(in_stack_00000004 + 0x23b8),"new",3);
    if (iVar2 == 0) {
      local_94.z = -0.986001;
      local_94.y = 0.950253;
      local_94.x = -1.15383;
    }
    else {
      local_94.z = 0.0;
      local_94.y = 0.904;
      local_94.x = 0.155;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffffe94,&g_ZeroVector,&local_94);
    (**(code **)(*(int *)(iVar5 + 0x154) + 0x14))();
    core_actor_cpp_CVector_ctor_FUN_00410340(&local_1c);
    local_1c.x = local_dc + local_d0;
    local_1c.y = local_d8 + local_cc;
    local_1c.z = local_d4 + local_c8;
    core_actor_cpp_CVector_ctor_FUN_00410340(&local_7c);
    local_7c.x = local_1c.x * _DAT_00658821;
    local_7c.y = local_1c.y * _DAT_00658821;
    local_7c.z = local_d4 + (float)_DAT_00658825;
    if (&local_64 != &local_7c) {
      local_64.x = local_7c.x;
      local_64.y = local_7c.y;
      local_64.z = local_7c.z;
    }
  }
  if (local_10 == *(int *)(in_stack_00000004 + 0xbf50)) {
    pCVar3 = &local_70;
    output_vector = &local_88;
    local_70.x = -0.4;
    local_70.y = 0.0;
    local_70.z = 0.0;
  }
  else {
    pCVar3 = &local_58;
    output_vector = &local_28;
    local_58.x = 0.4;
    local_58.y = 0.0;
    local_58.z = 0.0;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (output_vector,pCVar3,
                      (CMatrix3x4f *)(local_10 * 0x30 + in_stack_00000004 + 0xfd8));
  if (&local_40 != pCVar3) {
    local_40.x = pCVar3->x;
    local_40.y = pCVar3->y;
    local_40.z = pCVar3->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)&stack0xfffffe94,
             (CMatrix3x4f *)(local_10 * 0x30 + in_stack_00000004 + 0xfd8),in_stack_fffffe94);
  pfVar4 = local_13c;
  pCVar6 = &local_10c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_ac,&local_64,&local_10c);
  local_a0 = local_40.x - pCVar3->x;
  local_9c = local_40.y - pCVar3->y;
  local_98 = local_40.z - pCVar3->z;
  local_10c.m[0].z = local_10c.m[0].z + local_a0;
  local_10c.m[1].z = local_10c.m[1].z + local_9c;
  local_10c.m[2].z = local_10c.m[2].z + local_98;
  pCVar6 = &local_10c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *unaff_ESI = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar9 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005fb1f0: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fb1f0
// 005fb1f1: PUSH EDI
// 005fb1f2: PUSH EBP
// 005fb1f3: MOV EBP,ESP
// 005fb1f5: SUB ESP,0x160
// 005fb1fb: SUB EBP,0x7a
// 005fb1fe: MOV EBX,ESI
// 005fb200: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005fb206: MOV EAX,EDX
// 005fb208: SHL EAX,0x4
// 005fb20b: ADD EAX,EDX
// 005fb20d: MOV EDX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005fb213: SHL EAX,0x2
// 005fb216: ADD EAX,EDX
// 005fb218: MOV ESI,dword ptr [EAX + 0x24b4]
// 005fb21e: MOV EAX,dword ptr [EAX + 0x24ac]
// 005fb224: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005fb227: MOV EAX,dword ptr [EDX + 0xbed0]
// 005fb22d: CMP EAX,0x1
// 005fb230: JC 0x005fb468
//   XREF to: 005fb468 (CONDITIONAL_JUMP)
// 005fb236: JA 0x005fb45f
//   XREF to: 005fb45f (CONDITIONAL_JUMP)
// 005fb23c: PUSH 0x3
//   Label: LAB_005fb23c
// 005fb23e: MOV EAX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005fb244: PUSH 0x65881d
//   XREF to: 0065881d (DATA)
// 005fb249: ADD EAX,0x23b8
// 005fb24e: PUSH EAX
// 005fb24f: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005fb254: ADD ESP,0xc
// 005fb257: TEST EAX,EAX
// 005fb259: JNZ 0x005fb445
//   XREF to: 005fb445 (CONDITIONAL_JUMP)
// 005fb25f: MOV ECX,0xbf7c6a90
// 005fb264: MOV EDI,0x3f7343c8
// 005fb269: MOV EDX,0xbf93b0b4
// 005fb26e: MOV dword ptr [EBP + -0x6],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 005fb271: MOV dword ptr [EBP + -0xa],EDI
//   XREF to: Stack[-0x90] (WRITE)
// 005fb274: MOV dword ptr [EBP + -0xe],EDX
//   XREF to: Stack[-0x94] (WRITE)
// 005fb277: LEA EAX,[EBP + -0xe]
//   Label: LAB_005fb277
//   XREF to: Stack[-0x94] (DATA)
// 005fb27a: PUSH EAX
// 005fb27b: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005fb280: LEA EAX,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x16c] (DATA)
// 005fb286: PUSH EAX
// 005fb287: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005fb28c: ADD ESP,0xc
// 005fb28f: LEA EAX,[EBP + -0x56]
//   XREF to: Stack[-0xdc] (DATA)
// 005fb292: PUSH EAX
// 005fb293: MOV EDX,dword ptr [ESI + 0x154]
// 005fb299: PUSH ESI
// 005fb29a: CALL dword ptr [EDX + 0x14]
// 005fb29d: ADD ESP,0x8
// 005fb2a0: LEA EAX,[EBP + 0x6a]
//   XREF to: Stack[-0x1c] (DATA)
// 005fb2a3: PUSH EAX
// 005fb2a4: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 005fb2a9: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xdc] (READ)
// 005fb2ac: FLD float ptr [EBP + -0x52]
//   XREF to: Stack[-0xd8] (READ)
// 005fb2af: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd4] (READ)
// 005fb2b2: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x7c] (DATA)
// 005fb2b5: ADD ESP,0x4
// 005fb2b8: FXCH ST2
// 005fb2ba: FADD float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd0] (READ)
// 005fb2bd: FXCH
// 005fb2bf: FADD float ptr [EBP + -0x46]
//   XREF to: Stack[-0xcc] (READ)
// 005fb2c2: FXCH ST2
// 005fb2c4: FADD float ptr [EBP + -0x42]
//   XREF to: Stack[-0xc8] (READ)
// 005fb2c7: PUSH EAX
// 005fb2c8: FXCH
// 005fb2ca: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x1c] (WRITE)
// 005fb2cd: FXCH
// 005fb2cf: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (WRITE)
// 005fb2d2: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (WRITE)
// 005fb2d5: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 005fb2da: FLD float ptr [0x00658821]
//   XREF to: 00658821 (READ)
// 005fb2e0: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x1c] (READ)
// 005fb2e3: FMUL ST1
// 005fb2e5: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 005fb2e8: FMULP ST2
// 005fb2ea: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd4] (READ)
// 005fb2ed: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x7c] (DATA)
// 005fb2f0: LEA EDX,[EBP + 0x22]
//   XREF to: Stack[-0x64] (DATA)
// 005fb2f3: ADD ESP,0x4
// 005fb2f6: FADD double ptr [0x00658825]
//   XREF to: 00658825 (READ)
// 005fb2fc: FXCH
// 005fb2fe: FSTP float ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (WRITE)
// 005fb301: FXCH
// 005fb303: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x78] (WRITE)
// 005fb306: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x74] (WRITE)
// 005fb309: CMP EDX,EAX
// 005fb30b: JZ 0x005fb31f
//   XREF to: 005fb31f (CONDITIONAL_JUMP)
// 005fb30d: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (DATA)
// 005fb310: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005fb313: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x78] (READ)
// 005fb316: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005fb319: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x74] (READ)
// 005fb31c: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005fb31f: MOV EDX,dword ptr [EBP + 0x76]
//   Label: LAB_005fb31f
//   XREF to: Stack[-0x10] (READ)
// 005fb322: LEA EAX,[EDX*0x4 + 0x0]
// 005fb329: MOV ESI,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005fb32f: SUB EAX,EDX
// 005fb331: ADD ESI,0xfd8
// 005fb337: SHL EAX,0x4
// 005fb33a: ADD EAX,ESI
// 005fb33c: MOV ESI,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005fb342: CMP EDX,dword ptr [ESI + 0xbf50]
// 005fb348: JNZ 0x005fb504
//   XREF to: 005fb504 (CONDITIONAL_JUMP)
// 005fb34e: MOV EDX,0xbecccccd
// 005fb353: PUSH EAX
// 005fb354: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x70] (DATA)
// 005fb357: XOR ECX,ECX
// 005fb359: PUSH EAX
// 005fb35a: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x88] (DATA)
// 005fb35d: MOV dword ptr [EBP + 0x16],EDX
//   XREF to: Stack[-0x70] (WRITE)
// 005fb360: PUSH EAX
// 005fb361: MOV dword ptr [EBP + 0x1a],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 005fb364: MOV dword ptr [EBP + 0x1e],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 005fb367: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   Label: LAB_005fb367
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005fb36c: MOV EDX,EAX
// 005fb36e: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x40] (DATA)
// 005fb371: ADD ESP,0xc
// 005fb374: CMP EAX,EDX
// 005fb376: JZ 0x005fb389
//   XREF to: 005fb389 (CONDITIONAL_JUMP)
// 005fb378: MOV EAX,dword ptr [EDX]
// 005fb37a: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005fb37d: MOV EAX,dword ptr [EDX + 0x4]
// 005fb380: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005fb383: MOV EAX,dword ptr [EDX + 0x8]
// 005fb386: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005fb389: MOV EDX,dword ptr [EBP + 0x76]
//   Label: LAB_005fb389
//   XREF to: Stack[-0x10] (READ)
// 005fb38c: LEA EAX,[EDX*0x4 + 0x0]
// 005fb393: SUB EAX,EDX
// 005fb395: MOV EDX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005fb39b: SHL EAX,0x4
// 005fb39e: ADD EDX,0xfd8
// 005fb3a4: ADD EAX,EDX
// 005fb3a6: PUSH EAX
// 005fb3a7: LEA EAX,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x16c] (DATA)
// 005fb3ad: PUSH EAX
// 005fb3ae: LEA ESI,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x13c] (DATA)
// 005fb3b4: LEA EDI,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x10c] (DATA)
// 005fb3ba: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005fb3bf: ADD ESP,0x8
// 005fb3c2: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x10c] (DATA)
// 005fb3c8: MOV ECX,0xc
// 005fb3cd: PUSH EAX
// 005fb3ce: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x64] (DATA)
// 005fb3d1: LEA ESI,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x13c] (DATA)
// 005fb3d7: PUSH EAX
// 005fb3d8: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xac] (DATA)
// 005fb3db: MOVSD.REP ES:EDI,ESI
// 005fb3dd: PUSH EAX
// 005fb3de: LEA ESI,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x10c] (DATA)
// 005fb3e4: MOV EDI,EBX
// 005fb3e6: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005fb3eb: FLD float ptr [EBP + 0x46]
//   XREF to: Stack[-0x40] (READ)
// 005fb3ee: FLD float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (READ)
// 005fb3f1: FLD float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x38] (READ)
// 005fb3f4: FLD float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (READ)
// 005fb3f7: FLD float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf0] (READ)
// 005fb3fa: FLD float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe0] (READ)
// 005fb3fd: MOV ECX,0xc
// 005fb402: FXCH ST5
// 005fb404: FSUB float ptr [EAX]
// 005fb406: ADD ESP,0xc
// 005fb409: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa0] (WRITE)
// 005fb40c: FXCH ST3
// 005fb40e: FSUB float ptr [EAX + 0x4]
// 005fb411: FXCH
// 005fb413: FADD float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa0] (READ)
// 005fb416: FXCH
// 005fb418: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (WRITE)
// 005fb41b: FXCH
// 005fb41d: FSUB float ptr [EAX + 0x8]
// 005fb420: FXCH ST2
// 005fb422: FADD float ptr [EBP + -0x16]
//   XREF to: Stack[-0x9c] (READ)
// 005fb425: FXCH ST2
// 005fb427: FSTP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x98] (WRITE)
// 005fb42a: FSTP float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (WRITE)
// 005fb42d: FXCH
// 005fb42f: FADD float ptr [EBP + -0x12]
//   XREF to: Stack[-0x98] (READ)
// 005fb432: FXCH
// 005fb434: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf0] (WRITE)
// 005fb437: FSTP float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe0] (WRITE)
// 005fb43a: MOVSD.REP ES:EDI,ESI
// 005fb43c: MOV EAX,EBX
// 005fb43e: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0xc] (DATA)
// 005fb441: POP EBP
// 005fb442: POP EDI
// 005fb443: POP EBX
// 005fb444: RET
// 005fb445: MOV EAX,0x3f676c8b
//   Label: LAB_005fb445
// 005fb44a: XOR EDI,EDI
// 005fb44c: MOV ECX,0x3e1eb852
// 005fb451: MOV dword ptr [EBP + -0x6],EDI
//   XREF to: Stack[-0x8c] (WRITE)
// 005fb454: MOV dword ptr [EBP + -0xa],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005fb457: MOV dword ptr [EBP + -0xe],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 005fb45a: JMP 0x005fb277
//   XREF to: 005fb277 (UNCONDITIONAL_JUMP)
// 005fb45f: CMP EAX,0x3
//   Label: LAB_005fb45f
// 005fb462: JZ 0x005fb23c
//   XREF to: 005fb23c (CONDITIONAL_JUMP)
// 005fb468: LEA EAX,[EBP + -0x3e]
//   Label: LAB_005fb468
//   XREF to: Stack[-0xc4] (DATA)
// 005fb46b: PUSH EAX
// 005fb46c: MOV EDX,dword ptr [ESI + 0x154]
// 005fb472: PUSH ESI
// 005fb473: CALL dword ptr [EDX + 0x14]
// 005fb476: LEA EDX,[EAX + 0xc]
// 005fb479: FLD float ptr [EAX]
// 005fb47b: FADD float ptr [EDX]
// 005fb47d: FST float ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (WRITE)
// 005fb480: FLD float ptr [EAX + 0x4]
// 005fb483: FADD float ptr [EDX + 0x4]
// 005fb486: FXCH
// 005fb488: FLD float ptr [0x00658821]
//   XREF to: 00658821 (READ)
// 005fb48e: FXCH
// 005fb490: FMUL ST1
// 005fb492: FXCH ST2
// 005fb494: FST float ptr [EBP + 0x56]
//   XREF to: Stack[-0x30] (WRITE)
// 005fb497: FLD float ptr [EAX + 0x8]
// 005fb49a: FADD float ptr [EDX + 0x8]
// 005fb49d: FXCH
// 005fb49f: FMUL ST2
// 005fb4a1: FXCH
// 005fb4a3: FST float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (WRITE)
// 005fb4a6: FMULP ST2
// 005fb4a8: ADD ESP,0x8
// 005fb4ab: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x4c] (DATA)
// 005fb4ae: FXCH ST2
// 005fb4b0: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x4c] (WRITE)
// 005fb4b3: FXCH
// 005fb4b5: FSTP float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x48] (WRITE)
// 005fb4b8: LEA EDX,[EBP + 0x22]
//   XREF to: Stack[-0x64] (DATA)
// 005fb4bb: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (WRITE)
// 005fb4be: CMP EDX,EAX
// 005fb4c0: JZ 0x005fb4d4
//   XREF to: 005fb4d4 (CONDITIONAL_JUMP)
// 005fb4c2: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x4c] (DATA)
// 005fb4c5: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005fb4c8: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x48] (READ)
// 005fb4cb: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005fb4ce: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x44] (READ)
// 005fb4d1: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005fb4d4: MOV EDX,dword ptr [EBP + 0x8e]
//   Label: LAB_005fb4d4
//   XREF to: Stack[0x8] (READ)
// 005fb4da: MOV EAX,EDX
// 005fb4dc: SHL EAX,0x4
// 005fb4df: ADD EAX,EDX
// 005fb4e1: MOV EDX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005fb4e7: SHL EAX,0x2
// 005fb4ea: ADD EAX,EDX
// 005fb4ec: MOV ECX,0xc
// 005fb4f1: LEA EDI,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x16c] (DATA)
// 005fb4f7: LEA ESI,[EAX + 0x24b8]
// 005fb4fd: MOVSD.REP ES:EDI,ESI
// 005fb4ff: JMP 0x005fb31f
//   XREF to: 005fb31f (UNCONDITIONAL_JUMP)
// 005fb504: MOV ESI,0x3ecccccd
//   Label: LAB_005fb504
// 005fb509: PUSH EAX
// 005fb50a: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x58] (DATA)
// 005fb50d: XOR EDI,EDI
// 005fb50f: PUSH EAX
// 005fb510: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x28] (DATA)
// 005fb513: MOV dword ptr [EBP + 0x2e],ESI
//   XREF to: Stack[-0x58] (WRITE)
// 005fb516: PUSH EAX
// 005fb517: MOV dword ptr [EBP + 0x32],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 005fb51a: MOV dword ptr [EBP + 0x36],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005fb51d: JMP 0x005fb367
//   XREF to: 005fb367 (UNCONDITIONAL_JUMP)
