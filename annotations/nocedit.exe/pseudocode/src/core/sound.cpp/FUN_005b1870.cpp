// Name: core_sound.cpp_FUN_005b1870
// Address: 005b1870
// Address Range: [[005b1870, 005b1ec6]]
// Convention: __cdecl
// Signature: void core_sound.cpp_FUN_005b1870(void)
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b2dd0 (005b2dd0) at 005b2e0d [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b300f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_castle_00652506
//   double DOUBLE_0065250e = 0.000100000000000000
//   double DOUBLE_00652516 = 0.00390625
//   double DOUBLE_0065251e = 0.0200000000000000
//   double DOUBLE_00652526 = 0.0166666666666667
//   float FLOAT_0065252e = 0.015625
//   float FLOAT_00652532 = 0.3000000
//   double DOUBLE_00652536 = 50
//   double DOUBLE_0065253e = -50
//   double DOUBLE_00652546 = 60
//   double DOUBLE_0065254e = -60
//   float FLOAT_00652556 = 0.2000000
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDemonLightInstance.base.base.position.x
//   undefined4 g_CDemonLightInstance.base.base.position.y
//   undefined4 g_CDemonLightInstance.base.base.position.z
//   undefined4 DAT_02d7eb00
//   undefined4 DAT_02d7eb04
//   undefined4 g_CGameInstance.block_auto_save
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03261368
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.rotation_matrix.m[0][0]
//   undefined4 DAT_032758f8
//   undefined4 g_ScreenHeightForFonts
//   undefined4 g_CDemonCameraInstance.framebuffer_height
//   undefined4 DAT_03f6af70
//   undefined4 DAT_03f6af74
//   undefined4 DAT_03f6af78
//   undefined4 DAT_03f6af7c
// Function calls:
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
//   crt_string.c_strnicmp_FUN_005ff070
//   sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
//   sound_sndmain.cpp_set3DListenerPos_FUN_005aa020

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_005b1870(void)

{
  float fVar1;
  double dVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  float afStackY_10b4 [963];
  CDemonSet *in_stack_fffffea8;
  CVector3f *in_stack_fffffeac;
  double dStack_150;
  float fStack_148;
  undefined8 uStack_144;
  float fStack_13c;
  int local_134 [10];
  int local_10c [14];
  undefined1 local_d4 [12];
  CVector3i local_c8;
  CVector3f local_b8;
  float local_ac;
  CVector3f local_a8 [3];
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  undefined1 local_6c [12];
  float local_60;
  float local_5c;
  CVector3f local_58;
  int local_48;
  int local_44;
  int local_40;
  undefined4 uStack_34;
  int local_30;
  CVector3f local_2c;
  float fStack_20;
  float local_1c [3];
  
  bVar11 = 0;
  if (g_CGamePtr->block_auto_save == 0) {
    local_48 = g_CDemonCameraInstance.base.position.x;
    local_44 = g_CDemonCameraInstance.base.position.y;
    local_40 = g_CDemonCameraInstance.base.position.z;
    if ((int *)(local_d4 + 8) != &local_48) {
      local_d4._8_4_ = g_CDemonCameraInstance.base.position.x;
      local_c8.x = g_CDemonCameraInstance.base.position.y;
      local_c8.y = g_CDemonCameraInstance.base.position.z;
    }
    local_6c._4_4_ = (float)local_c8.x - DAT_03f6af74;
    local_6c._0_4_ = (float)local_d4._8_4_ - DAT_03f6af70;
    local_6c._8_4_ = (float)local_c8.y - DAT_03f6af78;
    if (SQRT((float)local_6c._8_4_ * (float)local_6c._8_4_ +
             (float)local_6c._0_4_ * (float)local_6c._0_4_ +
             (float)local_6c._4_4_ * (float)local_6c._4_4_) < (float)DOUBLE_0065250e) {
      return;
    }
    pCVar8 = &g_CDemonCameraInstance.base.rotation_matrix;
    piVar10 = local_10c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = pCVar8->m[0][0];
      pCVar8 = (CMatrix3x3i *)(pCVar8->m[0] + 1);
      piVar10 = piVar10 + 1;
    }
    iVar4 = 10;
    piVar9 = local_10c;
    piVar10 = (int *)&stack0xfffffea4;
  }
  else {
    local_a8[0].x = (float)g_CDemonLightInstance.base.base.position.x;
    local_a8[0].y = (float)g_CDemonLightInstance.base.base.position.y;
    local_a8[0].z = (float)g_CDemonLightInstance.base.base.position.z;
    if ((CVector3f *)(local_d4 + 8) != local_a8) {
      local_d4._8_4_ = g_CDemonLightInstance.base.base.position.x;
      local_c8.x = g_CDemonLightInstance.base.base.position.y;
      local_c8.y = g_CDemonLightInstance.base.base.position.z;
    }
    pCVar8 = &g_CDemonLightInstance.base.base.rotation_matrix;
    piVar10 = local_134;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = pCVar8->m[0][0];
      pCVar8 = (CMatrix3x3i *)(pCVar8->m[0] + 1);
      piVar10 = piVar10 + 1;
    }
    iVar4 = 10;
    piVar10 = (int *)&stack0xfffffea4;
    piVar9 = local_134;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  sound_sndmain_cpp_set3DListenerPos_FUN_005aa020
            ((double)(float)local_d4._8_4_,(double)(float)local_c8.x,(double)(float)local_c8.y);
  local_d4._0_4_ = 1.0;
  local_d4._4_4_ = 0.0;
  local_d4._8_4_ = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&stack0xfffffea8,&local_2c,(CVector3f *)local_d4);
  local_58.y = 1.0;
  local_58.x = 0.0;
  local_58.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&stack0xfffffeac,&local_b8,&local_58);
  local_a8[0].x = 0.0;
  local_a8[0].y = 0.0;
  local_a8[0].z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&dStack_150,(CVector3f *)local_6c,local_a8);
  sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0
            ((double)fStack_20,(double)local_1c[0],(double)local_1c[1],(double)local_b8.z,
             (double)local_ac,(double)local_a8[0].x,(double)(float)local_6c._4_4_,
             (double)(float)local_6c._8_4_,(double)local_60);
  _DAT_03f6af7c = 0.0;
  if (g_CGamePtr->block_auto_save == 0) {
    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                      (g_CDemonSetPtr->geometry_filename,"castle",6);
    if (iVar4 == 0) {
      iVar4 = 1;
      do {
        iVar7 = 1;
        do {
          iVar5 = g_CDemonCameraInstance.framebuffer_width * iVar7 >> 0x1f;
          iVar6 = g_CDemonCameraInstance.framebuffer_height * iVar4 >> 0x1f;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (&g_CDemonCameraInstance,
                     (CVector3i *)
                     ((int)((g_CDemonCameraInstance.framebuffer_width * iVar7 + iVar5 * -0x20) -
                           (uint)(iVar5 << 4 < 0)) >> 5),
                     (int)((g_CDemonCameraInstance.framebuffer_height * iVar4 + iVar6 * -0x20) -
                          (uint)(iVar6 << 4 < 0)) >> 5,(int)in_stack_fffffea8);
          local_d4._8_4_ = fStack_20;
          *(float *)((int)&local_c8 + (uint)bVar11 * -8) = local_1c[(uint)bVar11 * -2];
          *(float *)((int)&local_c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
               local_1c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          dVar2 = uStack_144;
          uStack_144 = (double)((ulonglong)uStack_144 & 0xffffffff00000000);
          if (local_c8.z < 0x7fffffff) {
            local_c8.z = local_c8.z + -0x300;
            if (local_c8.z < 1) {
              local_c8.z = 1;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                      (&g_CDemonCameraInstance,&local_c8,(CVector3i *)in_stack_fffffeac);
            local_74 = (float)uStack_34;
            (&local_70)[(uint)bVar11 * -2] = (&local_30)[(uint)bVar11 * -2];
            *(undefined4 *)(local_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(undefined4 *)((int)&local_2c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fVar1 = (float)DOUBLE_00652516;
            local_6c._8_4_ = (float)local_70 * fVar1;
            local_5c = (float)(int)local_6c._4_4_ * fVar1;
            local_78 = (float)(int)local_6c._0_4_ * fVar1 - local_a8[0].x;
            local_7c = (float)local_6c._8_4_ - local_ac;
            local_74 = local_5c - local_a8[0].y;
            fVar3 = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78);
            dStack_150 = (double)fVar3;
            if ((float)DOUBLE_00652536 < fVar3) {
              uStack_144 = (double)CONCAT44((fVar3 + (float)DOUBLE_0065253e) *
                                            (float)DOUBLE_0065251e + uStack_144._4_4_,
                                            (float)uStack_144);
            }
            in_stack_fffffeac = (CVector3f *)(local_6c + 8);
            local_60 = (float)(int)local_6c._0_4_ * fVar1 + 1.0;
            in_stack_fffffea8 = g_CDemonSetPtr;
            fVar3 = core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
                              (g_CDemonSetPtr,in_stack_fffffeac);
            fVar3 = fVar3 - local_5c;
            uStack_144 = (double)fVar3;
            if ((float)DOUBLE_00652546 < fVar3) {
              fStack_13c = (fVar3 + (float)DOUBLE_0065254e) * (float)DOUBLE_00652526 + fStack_13c;
            }
          }
          else {
            uStack_144._4_4_ = SUB84(dVar2,4);
            uStack_144 = (double)CONCAT44(uStack_144._4_4_,0x3f800000);
          }
          if (0.0 < fStack_148) {
            fStack_148 = fStack_148 + FLOAT_00652556;
          }
          fStack_148 = fStack_148 * fStack_148;
          if (1.0 < fStack_148) {
            fStack_148 = 1.0;
          }
          _DAT_03f6af7c = fStack_148 * FLOAT_0065252e + _DAT_03f6af7c;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0x21);
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0x21);
    }
    _DAT_03f6af7c = _DAT_03f6af7c * _DAT_03f6af7c;
    if (0.0 < _DAT_03f6af7c) {
      _DAT_03f6af7c = _DAT_03f6af7c + FLOAT_00652532;
    }
    if (1.0 < _DAT_03f6af7c) {
      _DAT_03f6af7c = 1.0;
    }
  }
  if (&stack0x00000000 == (undefined1 *)0x3f6b024) {
    return;
  }
  DAT_03f6af70 = local_b8.y;
  DAT_03f6af74 = local_b8.z;
  DAT_03f6af78 = local_ac;
  return;
}


// Assembly code:
// 005b1870: PUSH EBX
//   Label: core_sound.cpp_FUN_005b1870
// 005b1871: PUSH ESI
// 005b1872: PUSH EDI
// 005b1873: PUSH EBP
// 005b1874: MOV EBP,ESP
// 005b1876: SUB ESP,0x160
// 005b187c: AND ESP,0xfffffff8
// 005b187f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005b1884: CMP dword ptr [EAX + 0x240],0x0
//   XREF to: 02d81cdc (READ)
// 005b188b: JNZ 0x005b1b09
//   XREF to: 005b1b09 (CONDITIONAL_JUMP)
// 005b1891: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 005b1896: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005b189d: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 005b18a2: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 005b18a5: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005b18ac: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 005b18b1: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 005b18b4: LEA EDX,[ESP + 0xa4]
//   XREF to: Stack[-0xcc] (DATA)
// 005b18bb: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005b18c2: LEA EAX,[ESP + 0x128]
//   XREF to: Stack[-0x48] (DATA)
// 005b18c9: CMP EDX,EAX
// 005b18cb: JZ 0x005b18f7
//   XREF to: 005b18f7 (CONDITIONAL_JUMP)
// 005b18cd: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x48] (DATA)
// 005b18d4: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005b18db: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x44] (READ)
// 005b18e2: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005b18e9: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x40] (READ)
// 005b18f0: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005b18f7: FLD float ptr [ESP + 0xa4]
//   Label: LAB_005b18f7
//   XREF to: Stack[-0xcc] (READ)
// 005b18fe: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0xc8] (READ)
// 005b1905: FSUB float ptr [0x03f6af74]
//   XREF to: 03f6af74 (READ)
// 005b190b: FXCH
// 005b190d: FSUB float ptr [0x03f6af70]
//   XREF to: 03f6af70 (READ)
// 005b1913: FXCH
// 005b1915: FST float ptr [ESP + 0x108]
//   XREF to: Stack[-0x68] (WRITE)
// 005b191c: FMUL float ptr [ESP + 0x108]
//   XREF to: Stack[-0x68] (READ)
// 005b1923: FXCH
// 005b1925: FST float ptr [ESP + 0x104]
//   XREF to: Stack[-0x6c] (WRITE)
// 005b192c: FMUL float ptr [ESP + 0x104]
//   XREF to: Stack[-0x6c] (READ)
// 005b1933: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0xc4] (READ)
// 005b193a: FSUB float ptr [0x03f6af78]
//   XREF to: 03f6af78 (READ)
// 005b1940: FXCH
// 005b1942: FADDP ST2,ST0
// 005b1944: FST float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x64] (WRITE)
// 005b194b: FMUL float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x64] (READ)
// 005b1952: FADDP
// 005b1954: FSQRT
// 005b1956: FCOMP double ptr [0x0065250e]
//   XREF to: 0065250e (READ)
// 005b195c: FNSTSW AX
// 005b195e: SAHF
// 005b195f: JC 0x005b1b02
//   XREF to: 005b1b02 (CONDITIONAL_JUMP)
// 005b1965: MOV ECX,0xa
// 005b196a: LEA EDI,[ESP + 0x64]
//   XREF to: Stack[-0x10c] (DATA)
// 005b196e: MOV ESI,0x32758f4
//   XREF to: 032758f4 (DATA)
// 005b1973: MOVSD.REP ES:EDI,ESI
//   XREF to: 032758f4 (READ)
//   XREF to: 032758f8 (READ)
// 005b1975: MOV ECX,0xa
// 005b197a: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x15c] (DATA)
// 005b197e: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x10c] (DATA)
// 005b1982: MOVSD.REP ES:EDI,ESI
//   Label: LAB_005b1982
// 005b1984: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0xc4] (READ)
// 005b198b: SUB ESP,0x8
// 005b198e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x178] (DATA)
// 005b1991: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0xc8] (READ)
// 005b1998: SUB ESP,0x8
// 005b199b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005b199e: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0xcc] (READ)
// 005b19a5: SUB ESP,0x8
// 005b19a8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x188] (DATA)
// 005b19ab: CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
//   XREF to: 005aa020 (UNCONDITIONAL_CALL)
// 005b19b0: ADD ESP,0x18
// 005b19b3: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0xd8] (DATA)
// 005b19ba: XOR EBX,EBX
// 005b19bc: PUSH EAX
// 005b19bd: LEA EAX,[ESP + 0x144]
//   XREF to: Stack[-0x30] (DATA)
// 005b19c4: MOV ECX,0x3f800000
// 005b19c9: PUSH EAX
// 005b19ca: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x15c] (DATA)
// 005b19ce: MOV dword ptr [ESP + 0xa0],ECX
//   XREF to: Stack[-0xd8] (WRITE)
// 005b19d5: PUSH EAX
// 005b19d6: MOV dword ptr [ESP + 0xa8],EBX
//   XREF to: Stack[-0xd4] (WRITE)
// 005b19dd: MOV dword ptr [ESP + 0xac],EBX
//   XREF to: Stack[-0xd0] (WRITE)
// 005b19e4: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005b19e9: MOV EAX,0x3f800000
// 005b19ee: ADD ESP,0xc
// 005b19f1: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005b19f8: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x60] (DATA)
// 005b19ff: PUSH EAX
// 005b1a00: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0xc0] (DATA)
// 005b1a07: PUSH EAX
// 005b1a08: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x15c] (DATA)
// 005b1a0c: PUSH EAX
// 005b1a0d: MOV dword ptr [ESP + 0x11c],EBX
//   XREF to: Stack[-0x60] (WRITE)
// 005b1a14: MOV dword ptr [ESP + 0x124],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 005b1a1b: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005b1a20: ADD ESP,0xc
// 005b1a23: LEA EAX,[ESP + 0xbc]
//   XREF to: Stack[-0xb4] (DATA)
// 005b1a2a: PUSH EAX
// 005b1a2b: LEA EAX,[ESP + 0xfc]
//   XREF to: Stack[-0x78] (DATA)
// 005b1a32: MOV ESI,0x3f800000
// 005b1a37: PUSH EAX
// 005b1a38: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x15c] (DATA)
// 005b1a3c: MOV dword ptr [ESP + 0xc4],EBX
//   XREF to: Stack[-0xb4] (WRITE)
// 005b1a43: PUSH EAX
// 005b1a44: MOV dword ptr [ESP + 0xcc],EBX
//   XREF to: Stack[-0xb0] (WRITE)
// 005b1a4b: MOV dword ptr [ESP + 0xd0],ESI
//   XREF to: Stack[-0xac] (WRITE)
// 005b1a52: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005b1a57: ADD ESP,0xc
// 005b1a5a: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x70] (READ)
// 005b1a61: SUB ESP,0x8
// 005b1a64: FSTP double ptr [ESP]
//   XREF to: Stack[-0x178] (DATA)
// 005b1a67: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x74] (READ)
// 005b1a6e: SUB ESP,0x8
// 005b1a71: FSTP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005b1a74: FLD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x78] (READ)
// 005b1a7b: SUB ESP,0x8
// 005b1a7e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x188] (DATA)
// 005b1a81: FLD float ptr [ESP + 0xd0]
//   XREF to: Stack[-0xb8] (READ)
// 005b1a88: SUB ESP,0x8
// 005b1a8b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x190] (DATA)
// 005b1a8e: FLD float ptr [ESP + 0xd4]
//   XREF to: Stack[-0xbc] (READ)
// 005b1a95: SUB ESP,0x8
// 005b1a98: FSTP double ptr [ESP]
//   XREF to: Stack[-0x198] (DATA)
// 005b1a9b: FLD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0xc0] (READ)
// 005b1aa2: SUB ESP,0x8
// 005b1aa5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1a0] (DATA)
// 005b1aa8: FLD float ptr [ESP + 0x178]
//   XREF to: Stack[-0x28] (READ)
// 005b1aaf: SUB ESP,0x8
// 005b1ab2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1a8] (DATA)
// 005b1ab5: FLD float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x2c] (READ)
// 005b1abc: SUB ESP,0x8
// 005b1abf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1b0] (DATA)
// 005b1ac2: FLD float ptr [ESP + 0x180]
//   XREF to: Stack[-0x30] (READ)
// 005b1ac9: SUB ESP,0x8
// 005b1acc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1b8] (DATA)
// 005b1acf: CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
//   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
// 005b1ad4: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005b1ad9: ADD ESP,0x48
// 005b1adc: MOV EDX,dword ptr [EAX + 0x240]
//   XREF to: 02d81cdc (READ)
// 005b1ae2: MOV dword ptr [0x03f6af7c],EBX
//   XREF to: 03f6af7c (WRITE)
// 005b1ae8: TEST EDX,EDX
// 005b1aea: JZ 0x005b1b91
//   XREF to: 005b1b91 (CONDITIONAL_JUMP)
// 005b1af0: LEA EAX,[ESP + 0xa4]
//   Label: LAB_005b1af0
//   XREF to: Stack[-0xcc] (DATA)
// 005b1af7: CMP EAX,0x3f6af70
//   XREF to: 03f6af70 (DATA)
// 005b1afc: JNZ 0x005b1e9c
//   XREF to: 005b1e9c (CONDITIONAL_JUMP)
// 005b1b02: MOV ESP,EBP
//   Label: LAB_005b1b02
// 005b1b04: POP EBP
// 005b1b05: POP EDI
// 005b1b06: POP ESI
// 005b1b07: POP EBX
// 005b1b08: RET
// 005b1b09: MOV EAX,[0x02d7eaf4]
//   Label: LAB_005b1b09
//   XREF to: 02d7eaf4 (READ)
// 005b1b0e: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005b1b15: MOV EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 005b1b1a: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 02d7eaf8 (READ)
// 005b1b1d: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005b1b24: MOV EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 005b1b29: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 02d7eafc (READ)
// 005b1b2c: LEA EDX,[ESP + 0xa4]
//   XREF to: Stack[-0xcc] (DATA)
// 005b1b33: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005b1b3a: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0xa8] (DATA)
// 005b1b41: CMP EDX,EAX
// 005b1b43: JZ 0x005b1b6f
//   XREF to: 005b1b6f (CONDITIONAL_JUMP)
// 005b1b45: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0xa8] (DATA)
// 005b1b4c: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005b1b53: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0xa4] (READ)
// 005b1b5a: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005b1b61: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0xa0] (READ)
// 005b1b68: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005b1b6f: MOV ECX,0xa
//   Label: LAB_005b1b6f
// 005b1b74: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x134] (DATA)
// 005b1b78: MOV ESI,0x2d7eb00
//   XREF to: 02d7eb00 (DATA)
// 005b1b7d: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d7eb00 (READ)
//   XREF to: 02d7eb04 (READ)
// 005b1b7f: MOV ECX,0xa
// 005b1b84: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x15c] (DATA)
// 005b1b88: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x134] (DATA)
// 005b1b8c: JMP 0x005b1982
//   XREF to: 005b1982 (UNCONDITIONAL_JUMP)
// 005b1b91: PUSH 0x6
//   Label: LAB_005b1b91
// 005b1b93: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b1b98: PUSH 0x652506
//   XREF to: 00652506 (DATA)
// 005b1b9d: ADD EAX,0x14d0f0
// 005b1ba2: PUSH EAX
//   XREF to: 03261368 (DATA)
// 005b1ba3: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005b1ba8: ADD ESP,0xc
// 005b1bab: TEST EAX,EAX
// 005b1bad: JNZ 0x005b1cc0
//   XREF to: 005b1cc0 (CONDITIONAL_JUMP)
// 005b1bb3: MOV dword ptr [ESP + 0x154],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 005b1bbe: MOV EAX,dword ptr [ESP + 0x154]
//   Label: LAB_005b1bbe
//   XREF to: Stack[-0x1c] (READ)
// 005b1bc5: MOV EBX,0x1
// 005b1bca: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005b1bd1: MOV EDX,dword ptr [0x03275a28]
//   Label: LAB_005b1bd1
//   XREF to: 03275a28 (READ)
// 005b1bd7: IMUL EDX,EBX
// 005b1bda: MOV EAX,EDX
// 005b1bdc: SAR EDX,0x1f
// 005b1bdf: SHL EDX,0x5
// 005b1be2: SBB EAX,EDX
// 005b1be4: SAR EAX,0x5
// 005b1be7: MOV EDI,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 005b1bee: MOV EDX,dword ptr [0x03275a2c]
//   XREF to: 03275a2c (READ)
// 005b1bf4: IMUL EDX,EDI
// 005b1bf7: MOV ESI,EAX
// 005b1bf9: MOV EAX,EDX
// 005b1bfb: SAR EDX,0x1f
// 005b1bfe: SHL EDX,0x5
// 005b1c01: SBB EAX,EDX
// 005b1c03: SAR EAX,0x5
// 005b1c06: PUSH EAX
// 005b1c07: PUSH ESI
// 005b1c08: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 005b1c0d: LEA ESI,[ESP + 0x140]
//   XREF to: Stack[-0x3c] (DATA)
// 005b1c14: LEA EDI,[ESP + 0x98]
//   XREF to: Stack[-0xe4] (DATA)
// 005b1c1b: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 005b1c20: LEA ESI,[ESP + 0x140]
//   XREF to: Stack[-0x3c] (DATA)
// 005b1c27: ADD ESP,0xc
// 005b1c2a: MOVSD ES:EDI,ESI
// 005b1c2b: MOVSD ES:EDI,ESI
// 005b1c2c: MOVSD ES:EDI,ESI
// 005b1c2d: XOR EAX,EAX
// 005b1c2f: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0xdc] (READ)
// 005b1c36: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005b1c3a: CMP EDX,0x7fffffff
// 005b1c40: JL 0x005b1d0b
//   XREF to: 005b1d0b (CONDITIONAL_JUMP)
// 005b1c46: MOV dword ptr [ESP + 0x10],0x3f800000
//   XREF to: Stack[-0x160] (WRITE)
// 005b1c4e: FLD float ptr [ESP + 0x10]
//   Label: LAB_005b1c4e
//   XREF to: Stack[-0x160] (READ)
// 005b1c52: FLDZ
// 005b1c54: FCOMPP
// 005b1c56: FNSTSW AX
// 005b1c58: SAHF
// 005b1c59: JNC 0x005b1c69
//   XREF to: 005b1c69 (CONDITIONAL_JUMP)
// 005b1c5b: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (READ)
// 005b1c5f: FADD float ptr [0x00652556]
//   XREF to: 00652556 (READ)
// 005b1c65: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (WRITE)
// 005b1c69: FLD float ptr [ESP + 0x10]
//   Label: LAB_005b1c69
//   XREF to: Stack[-0x160] (READ)
// 005b1c6d: FMUL ST0
// 005b1c6f: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (WRITE)
// 005b1c73: FLD1
// 005b1c75: FCOMPP
// 005b1c77: FNSTSW AX
// 005b1c79: SAHF
// 005b1c7a: JNC 0x005b1c84
//   XREF to: 005b1c84 (CONDITIONAL_JUMP)
// 005b1c7c: MOV dword ptr [ESP + 0x10],0x3f800000
//   XREF to: Stack[-0x160] (WRITE)
// 005b1c84: FLD float ptr [ESP + 0x10]
//   Label: LAB_005b1c84
//   XREF to: Stack[-0x160] (READ)
// 005b1c88: FMUL float ptr [0x0065252e]
//   XREF to: 0065252e (READ)
// 005b1c8e: FADD float ptr [0x03f6af7c]
//   XREF to: 03f6af7c (READ)
// 005b1c94: ADD EBX,0x2
// 005b1c97: FSTP float ptr [0x03f6af7c]
//   XREF to: 03f6af7c (WRITE)
// 005b1c9d: CMP EBX,0x21
// 005b1ca0: JNZ 0x005b1bd1
//   XREF to: 005b1bd1 (CONDITIONAL_JUMP)
// 005b1ca6: MOV EBX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x1c] (READ)
// 005b1cad: ADD EBX,0x2
// 005b1cb0: MOV dword ptr [ESP + 0x154],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005b1cb7: CMP EBX,0x21
// 005b1cba: JNZ 0x005b1bbe
//   XREF to: 005b1bbe (CONDITIONAL_JUMP)
// 005b1cc0: FLD float ptr [0x03f6af7c]
//   Label: LAB_005b1cc0
//   XREF to: 03f6af7c (READ)
// 005b1cc6: FMUL ST0
// 005b1cc8: FST float ptr [0x03f6af7c]
//   XREF to: 03f6af7c (WRITE)
// 005b1cce: FLDZ
// 005b1cd0: FCOMPP
// 005b1cd2: FNSTSW AX
// 005b1cd4: SAHF
// 005b1cd5: JNC 0x005b1ce9
//   XREF to: 005b1ce9 (CONDITIONAL_JUMP)
// 005b1cd7: FLD float ptr [0x03f6af7c]
//   XREF to: 03f6af7c (READ)
// 005b1cdd: FADD float ptr [0x00652532]
//   XREF to: 00652532 (READ)
// 005b1ce3: FSTP float ptr [0x03f6af7c]
//   XREF to: 03f6af7c (WRITE)
// 005b1ce9: FLD float ptr [0x03f6af7c]
//   Label: LAB_005b1ce9
//   XREF to: 03f6af7c (READ)
// 005b1cef: FLD1
// 005b1cf1: FCOMPP
// 005b1cf3: FNSTSW AX
// 005b1cf5: SAHF
// 005b1cf6: JNC 0x005b1af0
//   XREF to: 005b1af0 (CONDITIONAL_JUMP)
// 005b1cfc: MOV dword ptr [0x03f6af7c],0x3f800000
//   XREF to: 03f6af7c (WRITE)
// 005b1d06: JMP 0x005b1af0
//   XREF to: 005b1af0 (UNCONDITIONAL_JUMP)
// 005b1d0b: LEA ECX,[EDX + 0xfffffd00]
//   Label: LAB_005b1d0b
// 005b1d11: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0xdc] (WRITE)
// 005b1d18: CMP ECX,0x1
// 005b1d1b: JGE 0x005b1d28
//   XREF to: 005b1d28 (CONDITIONAL_JUMP)
// 005b1d1d: MOV dword ptr [ESP + 0x94],0x1
//   XREF to: Stack[-0xdc] (WRITE)
// 005b1d28: LEA EAX,[ESP + 0x8c]
//   Label: LAB_005b1d28
//   XREF to: Stack[-0xe4] (DATA)
// 005b1d2f: PUSH EAX
// 005b1d30: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 005b1d35: LEA ESI,[ESP + 0x124]
//   XREF to: Stack[-0x54] (DATA)
// 005b1d3c: LEA EDI,[ESP + 0xe8]
//   XREF to: Stack[-0x90] (DATA)
// 005b1d43: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 005b1d48: LEA ESI,[ESP + 0x124]
//   XREF to: Stack[-0x54] (DATA)
// 005b1d4f: ADD ESP,0x8
// 005b1d52: MOVSD ES:EDI,ESI
// 005b1d53: MOVSD ES:EDI,ESI
// 005b1d54: MOVSD ES:EDI,ESI
// 005b1d55: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x90] (READ)
// 005b1d5c: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b1d63: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 005b1d6a: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x8c] (READ)
// 005b1d71: FLD double ptr [0x00652516]
//   XREF to: 00652516 (READ)
// 005b1d77: FXCH
// 005b1d79: FMUL ST1
// 005b1d7b: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b1d82: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x88] (READ)
// 005b1d89: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 005b1d90: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b1d97: FMUL ST2
// 005b1d99: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 005b1da0: FMULP ST3
// 005b1da2: FXCH
// 005b1da4: FST float ptr [ESP + 0xec]
//   XREF to: Stack[-0x84] (WRITE)
// 005b1dab: FXCH
// 005b1dad: FST float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x80] (WRITE)
// 005b1db4: FSUB float ptr [ESP + 0xa8]
//   XREF to: Stack[-0xc8] (READ)
// 005b1dbb: FXCH
// 005b1dbd: FSUB float ptr [ESP + 0xa4]
//   XREF to: Stack[-0xcc] (READ)
// 005b1dc4: FXCH
// 005b1dc6: FST float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x98] (WRITE)
// 005b1dcd: FMUL float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x98] (READ)
// 005b1dd4: FXCH
// 005b1dd6: FST float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x9c] (WRITE)
// 005b1ddd: FMUL float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x9c] (READ)
// 005b1de4: FXCH ST2
// 005b1de6: FST float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x7c] (WRITE)
// 005b1ded: FSUB float ptr [ESP + 0xac]
//   XREF to: Stack[-0xc4] (READ)
// 005b1df4: FXCH ST2
// 005b1df6: FADDP
// 005b1df8: FXCH
// 005b1dfa: FST float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x94] (WRITE)
// 005b1e01: FMUL float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x94] (READ)
// 005b1e08: FADDP
// 005b1e0a: FSQRT
// 005b1e0c: FST double ptr [ESP]
//   XREF to: Stack[-0x170] (DATA)
// 005b1e0f: FCOMP double ptr [0x00652536]
//   XREF to: 00652536 (READ)
// 005b1e15: FNSTSW AX
// 005b1e17: SAHF
// 005b1e18: JBE 0x005b1e31
//   XREF to: 005b1e31 (CONDITIONAL_JUMP)
// 005b1e1a: FLD double ptr [ESP]
//   XREF to: Stack[-0x170] (DATA)
// 005b1e1d: FADD double ptr [0x0065253e]
//   XREF to: 0065253e (READ)
// 005b1e23: FMUL double ptr [0x0065251e]
//   XREF to: 0065251e (READ)
// 005b1e29: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (READ)
// 005b1e2d: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (WRITE)
// 005b1e31: LEA EAX,[ESP + 0xec]
//   Label: LAB_005b1e31
//   XREF to: Stack[-0x84] (DATA)
// 005b1e38: FLD1
// 005b1e3a: PUSH EAX
// 005b1e3b: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005b1e40: FADD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x80] (READ)
// 005b1e47: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005b1e48: FSTP float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x80] (WRITE)
// 005b1e4f: CALL core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
//   XREF to: 00572340 (UNCONDITIONAL_CALL)
// 005b1e54: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b1e5b: FLD float ptr [ESP + 0x164]
//   XREF to: Stack[-0x14] (READ)
// 005b1e62: ADD ESP,0x8
// 005b1e65: FSUB float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x80] (READ)
// 005b1e6c: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x168] (WRITE)
// 005b1e70: FCOMP double ptr [0x00652546]
//   XREF to: 00652546 (READ)
// 005b1e76: FNSTSW AX
// 005b1e78: SAHF
// 005b1e79: JBE 0x005b1c4e
//   XREF to: 005b1c4e (CONDITIONAL_JUMP)
// 005b1e7f: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x168] (READ)
// 005b1e83: FADD double ptr [0x0065254e]
//   XREF to: 0065254e (READ)
// 005b1e89: FMUL double ptr [0x00652526]
//   XREF to: 00652526 (READ)
// 005b1e8f: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (READ)
// 005b1e93: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x160] (WRITE)
// 005b1e97: JMP 0x005b1c4e
//   XREF to: 005b1c4e (UNCONDITIONAL_JUMP)
// 005b1e9c: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_005b1e9c
//   XREF to: Stack[-0xcc] (DATA)
// 005b1ea3: MOV [0x03f6af70],EAX
//   XREF to: 03f6af70 (WRITE)
// 005b1ea8: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0xc8] (READ)
// 005b1eaf: MOV [0x03f6af74],EAX
//   XREF to: 03f6af74 (WRITE)
// 005b1eb4: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0xc4] (READ)
// 005b1ebb: MOV [0x03f6af78],EAX
//   XREF to: 03f6af78 (WRITE)
// 005b1ec0: MOV ESP,EBP
// 005b1ec2: POP EBP
// 005b1ec3: POP EDI
// 005b1ec4: POP ESI
// 005b1ec5: POP EBX
// 005b1ec6: RET
