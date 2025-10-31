// Name: core_turret.cpp_FUN_005e3280
// Address: 005e3280
// Address Range: [[005e3280, 005e343e]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3280()
// Cross-references:
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e321d [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3560 (005e3560) at 005e35c4 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00656788
//   undefined4 DAT_00656790
//   undefined4 DAT_00664b6c
//   undefined4 DAT_00664b70
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_FUN_0040cd70
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_turret.cpp_FUN_005e3280(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

undefined4 core_turret_cpp_FUN_005e3280(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  float local_2c;
  float fStack_28;
  CVector3f local_24 [2];
  float local_c;
  
  local_24[0].x = *in_stack_00000008 - (in_stack_00000004->location).position.x;
  local_24[0].y = in_stack_00000008[1] - (in_stack_00000004->location).position.y;
  local_24[0].z = in_stack_00000008[2] - (in_stack_00000004->location).position.z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)&stack0xffffffd0,local_24);
  core_actor_cpp_FUN_0040cd70(fStack_28 - (in_stack_00000004->orient).bank);
  local_2c = core_actor_cpp_FUN_0040cd70(fStack_28 - (in_stack_00000004->orient).pitch);
  in_stack_0000000c =
       in_stack_0000000c *
       *(float *)(in_stack_00000004[5].create_event + 0x48) * (float)_DAT_00656788;
  local_c = -in_stack_0000000c;
  if (fStack_28 < local_c) {
    fStack_28 = local_c;
  }
  if (in_stack_0000000c < fStack_28) {
    fStack_28 = in_stack_0000000c;
  }
  if (local_2c < -in_stack_0000000c) {
    local_2c = -in_stack_0000000c;
  }
  if (in_stack_0000000c < local_2c) {
    local_2c = in_stack_0000000c;
  }
  (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + fStack_28;
  (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).pitch + local_2c;
  core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
  if (((float10)0 != ABS((float10)(local_24[0].x < (float)_DAT_00656790))) &&
     ((float10)0 != ABS((float10)(fStack_28 < (float)_DAT_00656790)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005e3280: PUSH EBX
//   Label: core_turret.cpp_FUN_005e3280
// 005e3281: PUSH EBP
// 005e3282: MOV EBP,ESP
// 005e3284: SUB ESP,0x30
// 005e3287: AND ESP,0xfffffff8
// 005e328a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e328d: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e3290: LEA EAX,[EBX + 0x20]
// 005e3293: FLD float ptr [EDX]
// 005e3295: FSUB float ptr [EAX]
// 005e3297: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 005e329b: FLD float ptr [EDX + 0x4]
// 005e329e: FSUB float ptr [EAX + 0x4]
// 005e32a1: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 005e32a5: FLD float ptr [EDX + 0x8]
// 005e32a8: FSUB float ptr [EAX + 0x8]
// 005e32ab: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x24] (DATA)
// 005e32af: PUSH EAX
// 005e32b0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x30] (DATA)
// 005e32b4: PUSH EAX
// 005e32b5: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 005e32b9: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005e32be: ADD ESP,0x8
// 005e32c1: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005e32c5: FCOMP float ptr [0x00664b6c]
//   XREF to: 00664b6c (READ)
// 005e32cb: FNSTSW AX
// 005e32cd: SAHF
// 005e32ce: JC 0x005e3422
//   XREF to: 005e3422 (CONDITIONAL_JUMP)
// 005e32d4: FLD float ptr [ESP + 0x8]
//   Label: LAB_005e32d4
//   XREF to: Stack[-0x30] (READ)
// 005e32d8: FCOMP float ptr [0x00664b70]
//   XREF to: 00664b70 (READ)
// 005e32de: FNSTSW AX
// 005e32e0: SAHF
// 005e32e1: JBE 0x005e32ec
//   XREF to: 005e32ec (CONDITIONAL_JUMP)
// 005e32e3: MOV EAX,[0x00664b70]
//   XREF to: 00664b70 (READ)
// 005e32e8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005e32ec: FLD float ptr [ESP + 0xc]
//   Label: LAB_005e32ec
//   XREF to: Stack[-0x2c] (READ)
// 005e32f0: FSUB float ptr [EBX + 0x34]
// 005e32f3: SUB ESP,0x4
// 005e32f6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 005e32f9: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e32fe: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005e3302: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xc] (READ)
// 005e3306: ADD ESP,0x4
// 005e3309: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005e330d: FXCH
// 005e330f: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 005e3313: FSUB float ptr [EBX + 0x30]
// 005e3316: SUB ESP,0x4
// 005e3319: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 005e331c: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e3321: FLD float ptr [EBX + 0x778]
// 005e3327: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005e332b: FMUL double ptr [0x00656788]
//   XREF to: 00656788 (READ)
// 005e3331: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xc] (READ)
// 005e3335: ADD ESP,0x4
// 005e3338: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005e333b: FMULP ST2
// 005e333d: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 005e3341: FXCH
// 005e3343: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005e3346: FXCH
// 005e3348: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (WRITE)
// 005e334c: FCHS
// 005e334e: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 005e3352: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005e3356: FNSTSW AX
// 005e3358: SAHF
// 005e3359: JNC 0x005e3363
//   XREF to: 005e3363 (CONDITIONAL_JUMP)
// 005e335b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005e335f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005e3363: FLD float ptr [ESP + 0x4]
//   Label: LAB_005e3363
//   XREF to: Stack[-0x34] (READ)
// 005e3367: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 005e336b: FNSTSW AX
// 005e336d: SAHF
// 005e336e: JBE 0x005e3378
//   XREF to: 005e3378 (CONDITIONAL_JUMP)
// 005e3370: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 005e3374: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005e3378: FLD float ptr [ESP]
//   Label: LAB_005e3378
//   XREF to: Stack[-0x38] (DATA)
// 005e337b: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 005e337f: FCHS
// 005e3381: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (WRITE)
// 005e3385: FCOMP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005e3389: FNSTSW AX
// 005e338b: SAHF
// 005e338c: JNC 0x005e3395
//   XREF to: 005e3395 (CONDITIONAL_JUMP)
// 005e338e: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005e3392: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 005e3395: FLD float ptr [ESP]
//   Label: LAB_005e3395
//   XREF to: Stack[-0x38] (DATA)
// 005e3398: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 005e339c: FNSTSW AX
// 005e339e: SAHF
// 005e339f: JBE 0x005e33a8
//   XREF to: 005e33a8 (CONDITIONAL_JUMP)
// 005e33a1: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 005e33a5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 005e33a8: FLD float ptr [EBX + 0x34]
//   Label: LAB_005e33a8
// 005e33ab: FLD float ptr [EBX + 0x30]
// 005e33ae: PUSH EBX
// 005e33af: FXCH
// 005e33b1: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005e33b5: FXCH
// 005e33b7: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 005e33bb: FXCH
// 005e33bd: FSTP float ptr [EBX + 0x34]
// 005e33c0: FSTP float ptr [EBX + 0x30]
// 005e33c3: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005e33c8: ADD ESP,0x4
// 005e33cb: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 005e33cf: FCOMP double ptr [0x00656790]
//   XREF to: 00656790 (READ)
// 005e33d5: FNSTSW AX
// 005e33d7: SAHF
// 005e33d8: JNC 0x005e3430
//   XREF to: 005e3430 (CONDITIONAL_JUMP)
// 005e33da: MOV EAX,0x1
// 005e33df: MOV dword ptr [ESP + 0x2c],EAX
//   Label: LAB_005e33df
//   XREF to: Stack[-0xc] (WRITE)
// 005e33e3: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc] (READ)
// 005e33e7: FABS
// 005e33e9: FLDZ
// 005e33eb: FCOMPP
// 005e33ed: FNSTSW AX
// 005e33ef: SAHF
// 005e33f0: JZ 0x005e3438
//   XREF to: 005e3438 (CONDITIONAL_JUMP)
// 005e33f2: FLD float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005e33f5: FCOMP double ptr [0x00656790]
//   XREF to: 00656790 (READ)
// 005e33fb: FNSTSW AX
// 005e33fd: SAHF
// 005e33fe: JNC 0x005e3434
//   XREF to: 005e3434 (CONDITIONAL_JUMP)
// 005e3400: MOV EAX,0x1
// 005e3405: MOV dword ptr [ESP + 0x2c],EAX
//   Label: LAB_005e3405
//   XREF to: Stack[-0xc] (WRITE)
// 005e3409: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc] (READ)
// 005e340d: FABS
// 005e340f: FLDZ
// 005e3411: FCOMPP
// 005e3413: FNSTSW AX
// 005e3415: SAHF
// 005e3416: JZ 0x005e3438
//   XREF to: 005e3438 (CONDITIONAL_JUMP)
// 005e3418: MOV EAX,0x1
// 005e341d: MOV ESP,EBP
// 005e341f: POP EBP
// 005e3420: POP EBX
// 005e3421: RET
// 005e3422: MOV EAX,[0x00664b6c]
//   Label: LAB_005e3422
//   XREF to: 00664b6c (READ)
// 005e3427: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005e342b: JMP 0x005e32d4
//   XREF to: 005e32d4 (UNCONDITIONAL_JUMP)
// 005e3430: XOR EAX,EAX
//   Label: LAB_005e3430
// 005e3432: JMP 0x005e33df
//   XREF to: 005e33df (UNCONDITIONAL_JUMP)
// 005e3434: XOR EAX,EAX
//   Label: LAB_005e3434
// 005e3436: JMP 0x005e3405
//   XREF to: 005e3405 (UNCONDITIONAL_JUMP)
// 005e3438: XOR EAX,EAX
//   Label: LAB_005e3438
// 005e343a: MOV ESP,EBP
// 005e343c: POP EBP
// 005e343d: POP EBX
// 005e343e: RET
