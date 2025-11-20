// Name: core_pendulum.cpp_FUN_00549b90
// Address: 00549b90
// Address Range: [[00549b90, 0054a175]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_00549b90()
// Cross-references:
//   core_pendulum.cpp_FUN_0054a180 (0054a180) at 0054a1d4 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a790 (0054a790) at 0054a7a4 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0063ecb5 = 0.5
//   double DOUBLE_0063ecb9 = 2
//   double DOUBLE_0063ecc1 = 3.14159265350000
//   double DOUBLE_0063ecc9 = -1
//   double DOUBLE_0063ecd1 = 0.100000000000000
//   double DOUBLE_0063ecd9 = -0.5
//   double DOUBLE_0063ece1 = 0.5
//   float FLOAT_0063ece9 = -1
//   double DOUBLE_0063ecf1 = 0.25
//   double DOUBLE_0063ecf9 = 0.75
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_00549b90(undefined4 param_1, undefined4
   param_2) */

void core_pendulum_cpp_FUN_00549b90(void)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_EAX;
  CVector3f *pCVar3;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double input_value;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float fStack_28;
  double local_24;
  
  local_24 = (double)in_stack_00000004[2].field13_0xec.y;
  input_value = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar2 = in_stack_00000004[3].orient.bank;
  in_stack_00000004[2].field13_0xec.y =
       in_stack_00000008 / in_stack_00000004[2].field13_0xec.z + in_stack_00000004[2].field13_0xec.y
  ;
  if ((fVar2 != 0.0) && (1.0 < in_stack_00000004[2].field13_0xec.y)) {
    in_stack_00000004[2].field13_0xec.y = in_stack_00000004[2].field13_0xec.y + FLOAT_0063ecb5;
  }
  crt_math_c_floor_FUN_005feb90(input_value);
  fVar4 = (float10)in_stack_00000004[2].field13_0xec.y -
          (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  in_stack_00000004[2].field13_0xec.y = (float)fVar4;
  fVar5 = (float10)fsin(fVar4 * (float10)DOUBLE_0063ecb9 * (float10)DOUBLE_0063ecc1);
  fVar2 = (float)in_stack_00000004[2].field14_0xf8;
  fVar6 = (float10)(float)in_stack_00000004[3].location.area_id + (float10)in_stack_00000008;
  fVar1 = in_stack_00000004[3].location.position.z;
  fVar7 = (float10)DOUBLE_0063ecc9;
  in_stack_00000004[3].location.area_id = (int)(float)fVar6;
  fVar4 = (float10)1;
  fVar7 = (float10)1.4426950408889634 * fVar6 * (float10)fVar1 * fVar7;
  fVar6 = (float10)f2xm1(fVar7 - (fVar7 / fVar4) * fVar4);
  fVar4 = (float10)fscale(fVar6 + fVar4,fVar7);
  (in_stack_00000004->orient).heading = (float)(fVar4 * fVar5 * (float10)fVar2);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_34,(CVector3f *)(in_stack_00000004[3].actor_name + 8)
                     );
  if ((CVector3f *)(in_stack_00000004[3].actor_name + 0x14) != pCVar3) {
    ((CVector3f *)(in_stack_00000004[3].actor_name + 0x14))->x = pCVar3->x;
    *(float *)(in_stack_00000004[3].actor_name + 0x18) = pCVar3->y;
    *(float *)(in_stack_00000004[3].actor_name + 0x1c) = pCVar3->z;
  }
  fVar4 = (float10)1;
  fVar7 = (float10)1.4426950408889634 *
          (float10)in_stack_00000004[3].location.position.z * (float10)DOUBLE_0063ecc9 *
          (float10)(float)in_stack_00000004[3].location.area_id;
  fVar5 = (float10)f2xm1(fVar7 - (fVar7 / fVar4) * fVar4);
  fVar4 = (float10)fscale(fVar5 + fVar4,fVar7);
  if ((0.0 < in_stack_00000008) && ((float)DOUBLE_0063ecd1 < (float)fVar4)) {
    local_48 = local_44;
    local_40 = in_stack_00000004[2].field13_0xec.y;
    local_34.x = 0.0;
    if (local_44 < (float)DOUBLE_0063ecd9) {
      local_48 = local_44 + 1.0;
    }
    if ((float)DOUBLE_0063ece1 + 0.0 < local_48) {
      local_48 = local_48 + FLOAT_0063ece9;
    }
    if (local_48 <= 0.0) {
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + FLOAT_0063ece9;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + FLOAT_0063ece9;
      }
      if (0.0 < local_40) {
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,(char *)&in_stack_00000004[2].field22_0x120);
      }
    }
    fStack_28 = (float)in_stack_00000004[2].field21_0x11c + (float)DOUBLE_0063ecf1;
    local_40 = local_34.y;
    local_50 = in_stack_00000004[2].field13_0xec.y;
    if (local_34.y < fStack_28 + (float)DOUBLE_0063ecd9) {
      local_40 = local_34.y + 1.0;
    }
    if (fStack_28 + (float)DOUBLE_0063ece1 < local_40) {
      local_40 = local_40 + FLOAT_0063ece9;
    }
    if (local_40 <= fStack_28) {
      if (local_50 < local_40) {
        local_50 = local_50 + 1.0;
      }
      if (local_50 < local_40) {
        local_50 = local_50 + 1.0;
      }
      if (local_40 + 1.0 < local_50) {
        local_50 = local_50 + FLOAT_0063ece9;
      }
      if (local_40 + 1.0 < local_50) {
        local_50 = local_50 + FLOAT_0063ece9;
      }
      if (fStack_28 < local_50) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,in_stack_00000004,(char *)&in_stack_00000004[2].is_transparent,
                   (CVector3f *)(in_stack_00000004[3].actor_name + 0x14));
      }
    }
    local_38 = local_34.y;
    local_4c = in_stack_00000004[2].field13_0xec.y;
    if (local_34.y < 0.0) {
      local_38 = local_34.y + 1.0;
    }
    if ((float)DOUBLE_0063ece1 + 0.5 < local_38) {
      local_38 = local_38 + FLOAT_0063ece9;
    }
    if (local_38 <= 0.5) {
      if (local_4c < local_38) {
        local_4c = local_4c + 1.0;
      }
      if (local_4c < local_38) {
        local_4c = local_4c + 1.0;
      }
      if (local_38 + 1.0 < local_4c) {
        local_4c = local_4c + FLOAT_0063ece9;
      }
      if (local_38 + 1.0 < local_4c) {
        local_4c = local_4c + FLOAT_0063ece9;
      }
      if (0.5 < local_4c) {
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,
                   (char *)&in_stack_00000004[2].previous_transform_state.dirty_flags);
      }
    }
    local_24._0_4_ = (float)in_stack_00000004[2].field21_0x11c + (float)DOUBLE_0063ecf9;
    local_3c = local_34.y;
    local_54 = in_stack_00000004[2].field13_0xec.y;
    if (local_34.y < local_24._0_4_ + (float)DOUBLE_0063ecd9) {
      local_3c = local_34.y + 1.0;
    }
    if (local_24._0_4_ + (float)DOUBLE_0063ece1 < local_3c) {
      local_3c = local_3c + FLOAT_0063ece9;
    }
    if (local_3c <= local_24._0_4_) {
      if (local_54 < local_3c) {
        local_54 = local_54 + 1.0;
      }
      if (local_54 < local_3c) {
        local_54 = local_54 + 1.0;
      }
      if (local_3c + 1.0 < local_54) {
        local_54 = local_54 + FLOAT_0063ece9;
      }
      if (local_3c + 1.0 < local_54) {
        local_54 = local_54 + FLOAT_0063ece9;
      }
      if (local_24._0_4_ < local_54) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,in_stack_00000004,(char *)&in_stack_00000004[2].is_transparent,
                   (CVector3f *)(in_stack_00000004[3].actor_name + 0x14));
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00549b90: PUSH EBX
//   Label: core_pendulum.cpp_FUN_00549b90
// 00549b91: PUSH ESI
// 00549b92: PUSH EDI
// 00549b93: PUSH EBP
// 00549b94: MOV EBP,ESP
// 00549b96: SUB ESP,0x58
// 00549b99: AND ESP,0xfffffff8
// 00549b9c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00549b9f: FLD float ptr [EBX + 0x3a0]
// 00549ba5: FSTP double ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (WRITE)
// 00549ba9: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 00549bad: PUSH EDX
// 00549bae: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x24] (READ)
// 00549bb2: PUSH ECX
// 00549bb3: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00549bb8: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00549bbc: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00549bc0: FLD double ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 00549bc4: ADD ESP,0x8
// 00549bc7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549bca: FDIV float ptr [EBX + 0x3a4]
// 00549bd0: MOV ESI,dword ptr [EBX + 0x43c]
// 00549bd6: FXCH
// 00549bd8: FSUBR double ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 00549bdc: FXCH
// 00549bde: FADD float ptr [EBX + 0x3a0]
// 00549be4: FXCH
// 00549be6: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (WRITE)
// 00549bea: FSTP float ptr [EBX + 0x3a0]
// 00549bf0: TEST ESI,ESI
// 00549bf2: JZ 0x00549c15
//   XREF to: 00549c15 (CONDITIONAL_JUMP)
// 00549bf4: FLD float ptr [EBX + 0x3a0]
// 00549bfa: FLD1
// 00549bfc: FCOMPP
// 00549bfe: FNSTSW AX
// 00549c00: SAHF
// 00549c01: JNC 0x00549c15
//   XREF to: 00549c15 (CONDITIONAL_JUMP)
// 00549c03: FLD float ptr [EBX + 0x3a0]
// 00549c09: FADD float ptr [0x0063ecb5]
//   XREF to: 0063ecb5 (READ)
// 00549c0f: FSTP float ptr [EBX + 0x3a0]
// 00549c15: SUB ESP,0x8
//   Label: LAB_00549c15
// 00549c18: FLD float ptr [EBX + 0x3a0]
// 00549c1e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 00549c21: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00549c26: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00549c2a: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00549c2e: FLD double ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 00549c32: ADD ESP,0x8
// 00549c35: FSUBR float ptr [EBX + 0x3a0]
// 00549c3b: FST float ptr [EBX + 0x3a0]
// 00549c41: FMUL double ptr [0x0063ecb9]
//   XREF to: 0063ecb9 (READ)
// 00549c47: FMUL double ptr [0x0063ecc1]
//   XREF to: 0063ecc1 (READ)
// 00549c4d: FSIN
// 00549c4f: FMUL float ptr [EBX + 0x3a8]
// 00549c55: FLD float ptr [EBX + 0x434]
// 00549c5b: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549c5e: FLD float ptr [EBX + 0x430]
// 00549c64: FMUL double ptr [0x0063ecc9]
//   XREF to: 0063ecc9 (READ)
// 00549c6a: FXCH
// 00549c6c: FST float ptr [EBX + 0x434]
// 00549c72: FMULP
// 00549c74: FLD1
// 00549c76: FLDL2E
// 00549c78: FMUL ST2
// 00549c7a: FST ST2
// 00549c7c: FPREM
// 00549c7e: F2XM1
// 00549c80: FADDP
// 00549c82: FSCALE
// 00549c84: FSTP ST1
// 00549c86: FMULP
// 00549c88: PUSH EBX
// 00549c89: FSTP float ptr [EBX + 0x38]
// 00549c8c: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00549c91: ADD ESP,0x4
// 00549c94: LEA EAX,[EBX + 0x410]
// 00549c9a: PUSH EAX
// 00549c9b: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x30] (DATA)
// 00549c9f: PUSH EAX
// 00549ca0: PUSH EBX
// 00549ca1: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00549ca6: LEA EDX,[EBX + 0x41c]
// 00549cac: ADD ESP,0xc
// 00549caf: CMP EDX,EAX
// 00549cb1: JZ 0x00549cc3
//   XREF to: 00549cc3 (CONDITIONAL_JUMP)
// 00549cb3: MOV ECX,dword ptr [EAX]
// 00549cb5: MOV dword ptr [EDX],ECX
// 00549cb7: MOV ECX,dword ptr [EAX + 0x4]
// 00549cba: MOV dword ptr [EDX + 0x4],ECX
// 00549cbd: MOV ECX,dword ptr [EAX + 0x8]
// 00549cc0: MOV dword ptr [EDX + 0x8],ECX
// 00549cc3: FLD float ptr [EBX + 0x430]
//   Label: LAB_00549cc3
// 00549cc9: FMUL double ptr [0x0063ecc9]
//   XREF to: 0063ecc9 (READ)
// 00549ccf: FMUL float ptr [EBX + 0x434]
// 00549cd5: FLD1
// 00549cd7: FLDL2E
// 00549cd9: FMUL ST2
// 00549cdb: FST ST2
// 00549cdd: FPREM
// 00549cdf: F2XM1
// 00549ce1: FADDP
// 00549ce3: FSCALE
// 00549ce5: FSTP ST1
// 00549ce7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549cea: FLDZ
// 00549cec: FXCH ST2
// 00549cee: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (WRITE)
// 00549cf2: FXCH
// 00549cf4: FCOMPP
// 00549cf6: FNSTSW AX
// 00549cf8: SAHF
// 00549cf9: JNC 0x00549f4c
//   XREF to: 00549f4c (CONDITIONAL_JUMP)
// 00549cff: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 00549d03: FCOMP double ptr [0x0063ecd1]
//   XREF to: 0063ecd1 (READ)
// 00549d09: FNSTSW AX
// 00549d0b: SAHF
// 00549d0c: JBE 0x00549f4c
//   XREF to: 00549f4c (CONDITIONAL_JUMP)
// 00549d12: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549d16: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549d1a: XOR EDI,EDI
// 00549d1c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00549d20: MOV EAX,dword ptr [EBX + 0x3a0]
// 00549d26: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00549d2a: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00549d2e: FCOMP double ptr [0x0063ecd9]
//   XREF to: 0063ecd9 (READ)
// 00549d34: FNSTSW AX
// 00549d36: SAHF
// 00549d37: JC 0x00549f53
//   XREF to: 00549f53 (CONDITIONAL_JUMP)
// 00549d3d: FLD float ptr [ESP + 0x34]
//   Label: LAB_00549d3d
//   XREF to: Stack[-0x34] (READ)
// 00549d41: FADD double ptr [0x0063ece1]
//   XREF to: 0063ece1 (READ)
// 00549d47: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00549d4b: FCOMPP
// 00549d4d: FNSTSW AX
// 00549d4f: SAHF
// 00549d50: JBE 0x00549d60
//   XREF to: 00549d60 (CONDITIONAL_JUMP)
// 00549d52: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00549d56: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549d5c: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (WRITE)
// 00549d60: FLD float ptr [ESP + 0x20]
//   Label: LAB_00549d60
//   XREF to: Stack[-0x48] (READ)
// 00549d64: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00549d68: FNSTSW AX
// 00549d6a: SAHF
// 00549d6b: JBE 0x00549f62
//   XREF to: 00549f62 (CONDITIONAL_JUMP)
// 00549d71: FLD float ptr [EBX + 0x3cc]
//   Label: LAB_00549d71
// 00549d77: FADD double ptr [0x0063ecf1]
//   XREF to: 0063ecf1 (READ)
// 00549d7d: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (WRITE)
// 00549d81: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00549d85: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00549d89: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00549d8d: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549d91: FADD double ptr [0x0063ecd9]
//   XREF to: 0063ecd9 (READ)
// 00549d97: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00549d9b: MOV EAX,dword ptr [EBX + 0x3a0]
// 00549da1: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549da5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00549da9: FCOMPP
// 00549dab: FNSTSW AX
// 00549dad: SAHF
// 00549dae: JNC 0x00549dba
//   XREF to: 00549dba (CONDITIONAL_JUMP)
// 00549db0: FLD1
// 00549db2: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549db6: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (WRITE)
// 00549dba: FLD float ptr [ESP + 0x2c]
//   Label: LAB_00549dba
//   XREF to: Stack[-0x3c] (READ)
// 00549dbe: FADD double ptr [0x0063ece1]
//   XREF to: 0063ece1 (READ)
// 00549dc4: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00549dc8: FCOMPP
// 00549dca: FNSTSW AX
// 00549dcc: SAHF
// 00549dcd: JBE 0x00549ddd
//   XREF to: 00549ddd (CONDITIONAL_JUMP)
// 00549dcf: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00549dd3: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549dd9: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (WRITE)
// 00549ddd: FLD float ptr [ESP + 0x14]
//   Label: LAB_00549ddd
//   XREF to: Stack[-0x54] (READ)
// 00549de1: FCOMP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00549de5: FNSTSW AX
// 00549de7: SAHF
// 00549de8: JBE 0x0054a004
//   XREF to: 0054a004 (CONDITIONAL_JUMP)
// 00549dee: FLD float ptr [ESP + 0x24]
//   Label: LAB_00549dee
//   XREF to: Stack[-0x44] (READ)
// 00549df2: MOV EDX,0x3f000000
// 00549df7: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549dfb: FLDZ
// 00549dfd: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00549e01: MOV EAX,dword ptr [EBX + 0x3a0]
// 00549e07: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 00549e0b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00549e0f: FCOMPP
// 00549e11: FNSTSW AX
// 00549e13: SAHF
// 00549e14: JBE 0x00549e20
//   XREF to: 00549e20 (CONDITIONAL_JUMP)
// 00549e16: FLD1
// 00549e18: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549e1c: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00549e20: FLD float ptr [ESP + 0x10]
//   Label: LAB_00549e20
//   XREF to: Stack[-0x58] (READ)
// 00549e24: FADD double ptr [0x0063ece1]
//   XREF to: 0063ece1 (READ)
// 00549e2a: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00549e2e: FCOMPP
// 00549e30: FNSTSW AX
// 00549e32: SAHF
// 00549e33: JBE 0x00549e43
//   XREF to: 00549e43 (CONDITIONAL_JUMP)
// 00549e35: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00549e39: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549e3f: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00549e43: FLD float ptr [ESP + 0x1c]
//   Label: LAB_00549e43
//   XREF to: Stack[-0x4c] (READ)
// 00549e47: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 00549e4b: FNSTSW AX
// 00549e4d: SAHF
// 00549e4e: JBE 0x0054a0af
//   XREF to: 0054a0af (CONDITIONAL_JUMP)
// 00549e54: FLD float ptr [EBX + 0x3cc]
//   Label: LAB_00549e54
// 00549e5a: FADD double ptr [0x0063ecf9]
//   XREF to: 0063ecf9 (READ)
// 00549e60: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (WRITE)
// 00549e64: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00549e68: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00549e6c: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00549e70: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549e74: FADD double ptr [0x0063ecd9]
//   XREF to: 0063ecd9 (READ)
// 00549e7a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00549e7e: MOV EAX,dword ptr [EBX + 0x3a0]
// 00549e84: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549e88: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x68] (DATA)
// 00549e8b: FCOMPP
// 00549e8d: FNSTSW AX
// 00549e8f: SAHF
// 00549e90: JNC 0x00549e9c
//   XREF to: 00549e9c (CONDITIONAL_JUMP)
// 00549e92: FLD1
// 00549e94: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549e98: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (WRITE)
// 00549e9c: FLD float ptr [ESP + 0x30]
//   Label: LAB_00549e9c
//   XREF to: Stack[-0x38] (READ)
// 00549ea0: FADD double ptr [0x0063ece1]
//   XREF to: 0063ece1 (READ)
// 00549ea6: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00549eaa: FCOMPP
// 00549eac: FNSTSW AX
// 00549eae: SAHF
// 00549eaf: JBE 0x00549ebf
//   XREF to: 00549ebf (CONDITIONAL_JUMP)
// 00549eb1: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00549eb5: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549ebb: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (WRITE)
// 00549ebf: FLD float ptr [ESP + 0x18]
//   Label: LAB_00549ebf
//   XREF to: Stack[-0x50] (READ)
// 00549ec3: FCOMP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00549ec7: FNSTSW AX
// 00549ec9: SAHF
// 00549eca: JA 0x00549f4c
//   XREF to: 00549f4c (CONDITIONAL_JUMP)
// 00549ed0: FLD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549ed3: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00549ed7: FNSTSW AX
// 00549ed9: SAHF
// 00549eda: JNC 0x00549ee4
//   XREF to: 00549ee4 (CONDITIONAL_JUMP)
// 00549edc: FLD1
// 00549ede: FADD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549ee1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549ee4: FLD float ptr [ESP]
//   Label: LAB_00549ee4
//   XREF to: Stack[-0x68] (DATA)
// 00549ee7: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00549eeb: FNSTSW AX
// 00549eed: SAHF
// 00549eee: JNC 0x00549ef8
//   XREF to: 00549ef8 (CONDITIONAL_JUMP)
// 00549ef0: FLD1
// 00549ef2: FADD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549ef5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549ef8: FLD float ptr [ESP + 0x18]
//   Label: LAB_00549ef8
//   XREF to: Stack[-0x50] (READ)
// 00549efc: FLD1
// 00549efe: FADDP
// 00549f00: FLD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549f03: FCOMPP
// 00549f05: FNSTSW AX
// 00549f07: SAHF
// 00549f08: JBE 0x00549f16
//   XREF to: 00549f16 (CONDITIONAL_JUMP)
// 00549f0a: FLD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549f0d: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549f13: FSTP float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549f16: FLD float ptr [ESP + 0x18]
//   Label: LAB_00549f16
//   XREF to: Stack[-0x50] (READ)
// 00549f1a: FLD1
// 00549f1c: FADDP
// 00549f1e: FLD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549f21: FCOMPP
// 00549f23: FNSTSW AX
// 00549f25: SAHF
// 00549f26: JBE 0x00549f34
//   XREF to: 00549f34 (CONDITIONAL_JUMP)
// 00549f28: FLD float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549f2b: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549f31: FSTP float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00549f34: FLD float ptr [ESP]
//   Label: LAB_00549f34
//   XREF to: Stack[-0x68] (DATA)
// 00549f37: FCOMP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00549f3b: FNSTSW AX
// 00549f3d: SAHF
// 00549f3e: SETA AL
// 00549f41: AND EAX,0xff
// 00549f46: JNZ 0x0054a151
//   XREF to: 0054a151 (CONDITIONAL_JUMP)
// 00549f4c: MOV ESP,EBP
//   Label: LAB_00549f4c
// 00549f4e: POP EBP
// 00549f4f: POP EDI
// 00549f50: POP ESI
// 00549f51: POP EBX
// 00549f52: RET
// 00549f53: FLD1
//   Label: LAB_00549f53
// 00549f55: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00549f59: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (WRITE)
// 00549f5d: JMP 0x00549d3d
//   XREF to: 00549d3d (UNCONDITIONAL_JUMP)
// 00549f62: FLD float ptr [ESP + 0x28]
//   Label: LAB_00549f62
//   XREF to: Stack[-0x40] (READ)
// 00549f66: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00549f6a: FNSTSW AX
// 00549f6c: SAHF
// 00549f6d: JNC 0x00549f79
//   XREF to: 00549f79 (CONDITIONAL_JUMP)
// 00549f6f: FLD1
// 00549f71: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00549f75: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 00549f79: FLD float ptr [ESP + 0x28]
//   Label: LAB_00549f79
//   XREF to: Stack[-0x40] (READ)
// 00549f7d: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00549f81: FNSTSW AX
// 00549f83: SAHF
// 00549f84: JNC 0x00549f90
//   XREF to: 00549f90 (CONDITIONAL_JUMP)
// 00549f86: FLD1
// 00549f88: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00549f8c: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 00549f90: FLD float ptr [ESP + 0x20]
//   Label: LAB_00549f90
//   XREF to: Stack[-0x48] (READ)
// 00549f94: FLD1
// 00549f96: FADDP
// 00549f98: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00549f9c: FCOMPP
// 00549f9e: FNSTSW AX
// 00549fa0: SAHF
// 00549fa1: JBE 0x00549fb1
//   XREF to: 00549fb1 (CONDITIONAL_JUMP)
// 00549fa3: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00549fa7: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549fad: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 00549fb1: FLD float ptr [ESP + 0x20]
//   Label: LAB_00549fb1
//   XREF to: Stack[-0x48] (READ)
// 00549fb5: FLD1
// 00549fb7: FADDP
// 00549fb9: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00549fbd: FCOMPP
// 00549fbf: FNSTSW AX
// 00549fc1: SAHF
// 00549fc2: JBE 0x00549fd2
//   XREF to: 00549fd2 (CONDITIONAL_JUMP)
// 00549fc4: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00549fc8: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 00549fce: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 00549fd2: FLD float ptr [ESP + 0x28]
//   Label: LAB_00549fd2
//   XREF to: Stack[-0x40] (READ)
// 00549fd6: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00549fda: FNSTSW AX
// 00549fdc: SAHF
// 00549fdd: SETA AL
// 00549fe0: AND EAX,0xff
// 00549fe5: JZ 0x00549d71
//   XREF to: 00549d71 (CONDITIONAL_JUMP)
// 00549feb: LEA EAX,[EBX + 0x3d0]
// 00549ff1: PUSH EAX
// 00549ff2: MOV EDX,dword ptr [EBX + 0x154]
// 00549ff8: PUSH EBX
// 00549ff9: CALL dword ptr [EDX + 0x24]
// 00549ffc: ADD ESP,0x8
// 00549fff: JMP 0x00549d71
//   XREF to: 00549d71 (UNCONDITIONAL_JUMP)
// 0054a004: FLD float ptr [ESP + 0x4]
//   Label: LAB_0054a004
//   XREF to: Stack[-0x64] (READ)
// 0054a008: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 0054a00c: FNSTSW AX
// 0054a00e: SAHF
// 0054a00f: JNC 0x0054a01b
//   XREF to: 0054a01b (CONDITIONAL_JUMP)
// 0054a011: FLD1
// 0054a013: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0054a017: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 0054a01b: FLD float ptr [ESP + 0x4]
//   Label: LAB_0054a01b
//   XREF to: Stack[-0x64] (READ)
// 0054a01f: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 0054a023: FNSTSW AX
// 0054a025: SAHF
// 0054a026: JNC 0x0054a032
//   XREF to: 0054a032 (CONDITIONAL_JUMP)
// 0054a028: FLD1
// 0054a02a: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0054a02e: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 0054a032: FLD float ptr [ESP + 0x14]
//   Label: LAB_0054a032
//   XREF to: Stack[-0x54] (READ)
// 0054a036: FLD1
// 0054a038: FADDP
// 0054a03a: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0054a03e: FCOMPP
// 0054a040: FNSTSW AX
// 0054a042: SAHF
// 0054a043: JBE 0x0054a053
//   XREF to: 0054a053 (CONDITIONAL_JUMP)
// 0054a045: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0054a049: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 0054a04f: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 0054a053: FLD float ptr [ESP + 0x14]
//   Label: LAB_0054a053
//   XREF to: Stack[-0x54] (READ)
// 0054a057: FLD1
// 0054a059: FADDP
// 0054a05b: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0054a05f: FCOMPP
// 0054a061: FNSTSW AX
// 0054a063: SAHF
// 0054a064: JBE 0x0054a074
//   XREF to: 0054a074 (CONDITIONAL_JUMP)
// 0054a066: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0054a06a: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 0054a070: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 0054a074: FLD float ptr [ESP + 0x4]
//   Label: LAB_0054a074
//   XREF to: Stack[-0x64] (READ)
// 0054a078: FCOMP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0054a07c: FNSTSW AX
// 0054a07e: SAHF
// 0054a07f: SETA AL
// 0054a082: AND EAX,0xff
// 0054a087: JZ 0x00549dee
//   XREF to: 00549dee (CONDITIONAL_JUMP)
// 0054a08d: LEA EAX,[EBX + 0x41c]
// 0054a093: PUSH EAX
// 0054a094: LEA EAX,[EBX + 0x3ac]
// 0054a09a: PUSH EAX
// 0054a09b: PUSH EBX
// 0054a09c: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0054a0a1: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 0054a0a2: CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 0054a0a7: ADD ESP,0x10
// 0054a0aa: JMP 0x00549dee
//   XREF to: 00549dee (UNCONDITIONAL_JUMP)
// 0054a0af: FLD float ptr [ESP + 0x8]
//   Label: LAB_0054a0af
//   XREF to: Stack[-0x60] (READ)
// 0054a0b3: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 0054a0b7: FNSTSW AX
// 0054a0b9: SAHF
// 0054a0ba: JNC 0x0054a0c6
//   XREF to: 0054a0c6 (CONDITIONAL_JUMP)
// 0054a0bc: FLD1
// 0054a0be: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0054a0c2: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 0054a0c6: FLD float ptr [ESP + 0x8]
//   Label: LAB_0054a0c6
//   XREF to: Stack[-0x60] (READ)
// 0054a0ca: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 0054a0ce: FNSTSW AX
// 0054a0d0: SAHF
// 0054a0d1: JNC 0x0054a0dd
//   XREF to: 0054a0dd (CONDITIONAL_JUMP)
// 0054a0d3: FLD1
// 0054a0d5: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0054a0d9: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 0054a0dd: FLD float ptr [ESP + 0x1c]
//   Label: LAB_0054a0dd
//   XREF to: Stack[-0x4c] (READ)
// 0054a0e1: FLD1
// 0054a0e3: FADDP
// 0054a0e5: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0054a0e9: FCOMPP
// 0054a0eb: FNSTSW AX
// 0054a0ed: SAHF
// 0054a0ee: JBE 0x0054a0fe
//   XREF to: 0054a0fe (CONDITIONAL_JUMP)
// 0054a0f0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0054a0f4: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 0054a0fa: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 0054a0fe: FLD float ptr [ESP + 0x1c]
//   Label: LAB_0054a0fe
//   XREF to: Stack[-0x4c] (READ)
// 0054a102: FLD1
// 0054a104: FADDP
// 0054a106: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0054a10a: FCOMPP
// 0054a10c: FNSTSW AX
// 0054a10e: SAHF
// 0054a10f: JBE 0x0054a11f
//   XREF to: 0054a11f (CONDITIONAL_JUMP)
// 0054a111: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0054a115: FADD float ptr [0x0063ece9]
//   XREF to: 0063ece9 (READ)
// 0054a11b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 0054a11f: FLD float ptr [ESP + 0x8]
//   Label: LAB_0054a11f
//   XREF to: Stack[-0x60] (READ)
// 0054a123: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 0054a127: FNSTSW AX
// 0054a129: SAHF
// 0054a12a: SETA AL
// 0054a12d: AND EAX,0xff
// 0054a132: JZ 0x00549e54
//   XREF to: 00549e54 (CONDITIONAL_JUMP)
// 0054a138: LEA EAX,[EBX + 0x3f0]
// 0054a13e: PUSH EAX
// 0054a13f: MOV EDX,dword ptr [EBX + 0x154]
// 0054a145: PUSH EBX
// 0054a146: CALL dword ptr [EDX + 0x24]
// 0054a149: ADD ESP,0x8
// 0054a14c: JMP 0x00549e54
//   XREF to: 00549e54 (UNCONDITIONAL_JUMP)
// 0054a151: LEA EAX,[EBX + 0x41c]
//   Label: LAB_0054a151
// 0054a157: PUSH EAX
// 0054a158: LEA EAX,[EBX + 0x3ac]
// 0054a15e: PUSH EAX
// 0054a15f: PUSH EBX
// 0054a160: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0054a166: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 0054a167: CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 0054a16c: ADD ESP,0x10
// 0054a16f: MOV ESP,EBP
// 0054a171: POP EBP
// 0054a172: POP EDI
// 0054a173: POP ESI
// 0054a174: POP EBX
// 0054a175: RET
