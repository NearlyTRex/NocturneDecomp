// Name: core_scat.cpp_FUN_00558cf0
// Address: 00558cf0
// Address Range: [[00558cf0, 00558fc0]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558cf0()
// Cross-references:
//   core_scat.cpp_FUN_00558720 (00558720) at 00558a17 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00641474 = 30
//   double DOUBLE_0064147c = -0.781490709825871
//   double DOUBLE_00641484 = 1.56298141965174
//   double DOUBLE_0064148c = 35
//   double DOUBLE_00641494 = -0.785398163375000
//   double DOUBLE_0064149c = 1.57079632675000
//   float FLOAT_006414a4 = 0.5
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CEnemyClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00558cf0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

float core_scat_cpp_FUN_00558cf0(void)

{
  float fVar1;
  CDemonActor *this_ptr;
  CDemonActor *this_ptr_00;
  int iVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  SCollisionInfo *in_stack_ffffff0c;
  float fStack_f0;
  float in_stack_ffffff3c;
  CVector3f aCStack_ac [8];
  undefined1 auStack_48 [40];
  undefined1 auStack_20 [8];
  float fStack_18;
  float fStack_14;
  
  this_ptr = in_stack_00000008;
  this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff0c,10,&g_CVectorTypeInfo)
  ;
  iVar2 = (*this_ptr->vtable->getTargetPoints)(this_ptr,(CVector3f *)&fStack_f0);
  if ((iVar2 != 0) &&
     ((this_ptr_00 == (CDemonActor *)0x0 ||
      (iVar2 = (*this_ptr_00->vtable[1].hasCollision)(this_ptr_00,in_stack_ffffff0c), iVar2 < 1))))
  {
    fStack_f0 = 7.856783e-39;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,(CVector3f *)auStack_20,&(this_ptr->location).position);
    if (0.0 < fStack_14) {
      in_stack_00000014 =
           SQRT(fStack_14 * fStack_14 +
                (float)auStack_20._4_4_ * (float)auStack_20._4_4_ + fStack_18 * fStack_18);
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)(auStack_48 + 0x14),(CVector3f *)(auStack_20 + 4));
      fVar1 = pCVar3->y;
      if (in_stack_0000000c == 0.0) {
        if ((float)DOUBLE_00641474 < in_stack_ffffff3c) {
          return -1.0;
        }
        if (fVar1 < (float)DOUBLE_0064147c) {
          return -1.0;
        }
        if (DOUBLE_00641484 < (double)fVar1) {
          return -1.0;
        }
      }
      else {
        if ((float)DOUBLE_0064148c < in_stack_ffffff3c) {
          return -1.0;
        }
        if (fVar1 < (float)DOUBLE_00641494) {
          return -1.0;
        }
        if (DOUBLE_0064149c < (double)fVar1) {
          return -1.0;
        }
      }
      pCVar4 = (*in_stack_00000004->vtable->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)auStack_48);
      in_stack_00000014 = (pCVar4->min).x + (pCVar4->max).x;
      in_stack_00000018 = (pCVar4->min).y + (pCVar4->max).y;
      in_stack_00000020 = in_stack_00000014 * FLOAT_006414a4;
      in_stack_0000001c = (pCVar4->min).z + (pCVar4->max).z;
      in_stack_00000024 = in_stack_00000018 * FLOAT_006414a4;
      in_stack_00000028 = in_stack_0000001c * FLOAT_006414a4;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (this_ptr,(CVector3f *)&stack0x00000008,aCStack_ac);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      in_stack_00000040 =
           core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                     (g_CDemonSetPtr,(CVector3f *)&stack0xfffffffc,(CVector3f *)&stack0x00000014);
      in_stack_00000048 = in_stack_00000040;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if ((in_stack_00000044 <= 1.0) && (this_ptr == g_CDemonSetPtr->collision_actor)) {
        return in_stack_00000040;
      }
    }
  }
  return -1.0;
}


// Assembly code:
// 00558cf0: PUSH EBX
//   Label: core_scat.cpp_FUN_00558cf0
// 00558cf1: PUSH ESI
// 00558cf2: PUSH EDI
// 00558cf3: PUSH EBP
// 00558cf4: MOV EBP,ESP
// 00558cf6: SUB ESP,0x100
// 00558cfc: AND ESP,0xfffffff8
// 00558cff: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00558d02: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00558d05: MOV EDX,dword ptr [0x02cf2bf0]
//   XREF to: 02cf2bf0 (READ)
// 00558d0b: PUSH EDX
// 00558d0c: PUSH ESI
// 00558d0d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00558d12: ADD ESP,0x8
// 00558d15: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00558d1a: PUSH 0xa
// 00558d1c: MOV EBX,EAX
// 00558d1e: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0xf8] (DATA)
// 00558d22: PUSH EAX
// 00558d23: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00558d28: ADD ESP,0xc
// 00558d2b: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xf8] (DATA)
// 00558d2f: PUSH EAX
// 00558d30: MOV EDX,dword ptr [ESI + 0x154]
// 00558d36: PUSH ESI
// 00558d37: CALL dword ptr [EDX + 0x4c]
// 00558d3a: ADD ESP,0x8
// 00558d3d: TEST EAX,EAX
// 00558d3f: JZ 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558d41: TEST EBX,EBX
// 00558d43: JZ 0x00558d72
//   XREF to: 00558d72 (CONDITIONAL_JUMP)
// 00558d45: PUSH EBX
// 00558d46: MOV EAX,dword ptr [EBX + 0x154]
// 00558d4c: CALL dword ptr [EAX + 0x120]
// 00558d52: ADD ESP,0x4
// 00558d55: TEST EAX,EAX
// 00558d57: JLE 0x00558d72
//   XREF to: 00558d72 (CONDITIONAL_JUMP)
// 00558d59: MOV dword ptr [ESP + 0xf8],0xbf800000
//   Label: LAB_00558d59
// 00558d64: MOV EAX,dword ptr [ESP + 0xf8]
// 00558d6b: MOV ESP,EBP
// 00558d6d: POP EBP
// 00558d6e: POP EDI
// 00558d6f: POP ESI
// 00558d70: POP EBX
// 00558d71: RET
// 00558d72: LEA EAX,[ESI + 0x20]
//   Label: LAB_00558d72
// 00558d75: PUSH EAX
// 00558d76: LEA EAX,[ESP + 0xc4]
// 00558d7d: PUSH EAX
// 00558d7e: PUSH EDI
// 00558d7f: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00558d84: ADD ESP,0xc
// 00558d87: FLD float ptr [ESP + 0xc8]
// 00558d8e: FLDZ
// 00558d90: FCOMPP
// 00558d92: FNSTSW AX
// 00558d94: SAHF
// 00558d95: JNC 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558d97: FLD float ptr [ESP + 0xc4]
// 00558d9e: FMUL ST0
// 00558da0: FLD float ptr [ESP + 0xc0]
// 00558da7: FMUL ST0
// 00558da9: FADDP
// 00558dab: FLD float ptr [ESP + 0xc8]
// 00558db2: FMUL ST0
// 00558db4: FADDP
// 00558db6: FSQRT
// 00558db8: FSTP float ptr [ESP + 0x14]
// 00558dbc: MOV EAX,dword ptr [ESP + 0x14]
// 00558dc0: MOV dword ptr [ESP + 0xf0],EAX
// 00558dc7: LEA EAX,[ESP + 0xc0]
// 00558dce: PUSH EAX
// 00558dcf: LEA EAX,[ESP + 0xac]
// 00558dd6: PUSH EAX
// 00558dd7: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00558ddc: ADD ESP,0x8
// 00558ddf: MOV EAX,dword ptr [EAX + 0x4]
// 00558de2: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00558de5: MOV dword ptr [ESP + 0x10],EAX
// 00558de9: TEST ECX,ECX
// 00558deb: JZ 0x00558e2b
//   XREF to: 00558e2b (CONDITIONAL_JUMP)
// 00558ded: FLD float ptr [ESP + 0x14]
// 00558df1: FCOMP double ptr [0x0064148c]
//   XREF to: 0064148c (READ)
// 00558df7: FNSTSW AX
// 00558df9: SAHF
// 00558dfa: JA 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558e00: FLD float ptr [ESP + 0x10]
// 00558e04: FST double ptr [ESP + 0x8]
// 00558e08: FCOMP double ptr [0x00641494]
//   XREF to: 00641494 (READ)
// 00558e0e: FNSTSW AX
// 00558e10: SAHF
// 00558e11: JC 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558e17: FLD double ptr [ESP + 0x8]
// 00558e1b: FCOMP double ptr [0x0064149c]
//   XREF to: 0064149c (READ)
// 00558e21: FNSTSW AX
// 00558e23: SAHF
// 00558e24: JBE 0x00558e66
//   XREF to: 00558e66 (CONDITIONAL_JUMP)
// 00558e26: JMP 0x00558d59
//   XREF to: 00558d59 (UNCONDITIONAL_JUMP)
// 00558e2b: FLD float ptr [ESP + 0x14]
//   Label: LAB_00558e2b
// 00558e2f: FCOMP double ptr [0x00641474]
//   XREF to: 00641474 (READ)
// 00558e35: FNSTSW AX
// 00558e37: SAHF
// 00558e38: JA 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558e3e: FLD float ptr [ESP + 0x10]
// 00558e42: FST double ptr [ESP]
// 00558e45: FCOMP double ptr [0x0064147c]
//   XREF to: 0064147c (READ)
// 00558e4b: FNSTSW AX
// 00558e4d: SAHF
// 00558e4e: JC 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558e54: FLD double ptr [ESP]
// 00558e57: FCOMP double ptr [0x00641484]
//   XREF to: 00641484 (READ)
// 00558e5d: FNSTSW AX
// 00558e5f: SAHF
// 00558e60: JA 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558e66: LEA EBX,[ESP + 0x90]
//   Label: LAB_00558e66
// 00558e6d: PUSH EBX
// 00558e6e: MOV EAX,dword ptr [EDI + 0x154]
// 00558e74: PUSH EDI
// 00558e75: CALL dword ptr [EAX + 0x14]
// 00558e78: LEA EBX,[EAX + 0xc]
// 00558e7b: FLD float ptr [EAX]
// 00558e7d: FADD float ptr [EBX]
// 00558e7f: ADD ESP,0x8
// 00558e82: FST float ptr [ESP + 0xd8]
// 00558e89: FLD float ptr [EAX + 0x4]
// 00558e8c: FADD float ptr [EBX + 0x4]
// 00558e8f: FXCH
// 00558e91: FLD float ptr [0x006414a4]
//   XREF to: 006414a4 (READ)
// 00558e97: FXCH
// 00558e99: FMUL ST1
// 00558e9b: FXCH ST2
// 00558e9d: FST float ptr [ESP + 0xdc]
// 00558ea4: FLD float ptr [EAX + 0x8]
// 00558ea7: FADD float ptr [EBX + 0x8]
// 00558eaa: FXCH
// 00558eac: FMUL ST2
// 00558eae: FXCH
// 00558eb0: FST float ptr [ESP + 0xe0]
// 00558eb7: FMULP ST2
// 00558eb9: LEA EAX,[EDI + 0x20]
// 00558ebc: FXCH ST2
// 00558ebe: FSTP float ptr [ESP + 0xe4]
// 00558ec5: FXCH
// 00558ec7: FSTP float ptr [ESP + 0xe8]
// 00558ece: FSTP float ptr [ESP + 0xec]
// 00558ed5: FLD float ptr [EAX]
// 00558ed7: FADD float ptr [ESP + 0xe4]
// 00558ede: FSTP float ptr [ESP + 0xb4]
// 00558ee5: FLD float ptr [EAX + 0x4]
// 00558ee8: FADD float ptr [ESP + 0xe8]
// 00558eef: FSTP float ptr [ESP + 0xb8]
// 00558ef6: FLD float ptr [EAX + 0x8]
// 00558ef9: LEA EAX,[ESP + 0x18]
// 00558efd: PUSH EAX
// 00558efe: LEA EAX,[ESP + 0xd0]
// 00558f05: PUSH EAX
// 00558f06: FADD float ptr [ESP + 0xf4]
// 00558f0d: PUSH ESI
// 00558f0e: FSTP float ptr [ESP + 0xc8]
// 00558f15: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00558f1a: ADD ESP,0xc
// 00558f1d: PUSH 0x1
// 00558f1f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00558f24: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00558f25: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 00558f2a: ADD ESP,0x8
// 00558f2d: PUSH EDI
// 00558f2e: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00558f34: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00558f35: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00558f3a: ADD ESP,0x8
// 00558f3d: LEA EAX,[ESP + 0xcc]
// 00558f44: PUSH EAX
// 00558f45: LEA EAX,[ESP + 0xb8]
// 00558f4c: PUSH EAX
// 00558f4d: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00558f53: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00558f54: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 00558f59: MOV dword ptr [ESP + 0x108],EAX
// 00558f60: FLD float ptr [ESP + 0x108]
// 00558f67: ADD ESP,0xc
// 00558f6a: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00558f70: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00558f71: FSTP float ptr [ESP + 0xf8]
// 00558f78: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00558f7d: ADD ESP,0x4
// 00558f80: FLD float ptr [ESP + 0xf4]
// 00558f87: FLD1
// 00558f89: FCOMPP
// 00558f8b: FNSTSW AX
// 00558f8d: SAHF
// 00558f8e: JC 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558f94: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00558f99: CMP ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00558f9f: JNZ 0x00558d59
//   XREF to: 00558d59 (CONDITIONAL_JUMP)
// 00558fa5: MOV EAX,dword ptr [ESP + 0xf0]
// 00558fac: MOV dword ptr [ESP + 0xf8],EAX
// 00558fb3: MOV EAX,dword ptr [ESP + 0xf8]
// 00558fba: MOV ESP,EBP
// 00558fbc: POP EBP
// 00558fbd: POP EDI
// 00558fbe: POP ESI
// 00558fbf: POP EBX
// 00558fc0: RET
