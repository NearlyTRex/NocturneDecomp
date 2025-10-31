// Name: core_stranger.cpp_FUN_005c37e0
// Address: 005c37e0
// Address Range: [[005c37e0, 005c395c]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c37e0()
// Globals:
//   undefined4 DAT_00653c8c
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * core_stranger_cpp_FUN_005c37e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  CVector3f *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float *in_stack_0000000c;
  float local_28;
  float local_20;
  
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            (in_stack_00000004,in_stack_00000008);
  local_28 = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                  in_stack_00000008->x * in_stack_00000008->x +
                  in_stack_00000008->y * in_stack_00000008->y);
  if ((float)_DAT_00653c8c < local_28) {
    fVar2 = -*in_stack_0000000c;
    pfVar1 = &in_stack_00000004->y;
    if ((((float)_DAT_00653c8c <= local_28) &&
        (dVar4 = (double)(SQRT(local_28 * local_28 - fVar2 * fVar2) / local_28), dVar4 < 1.0)) &&
       (0.0 <= dVar4)) {
      dVar4 = crt_math_c_acos_FUN_00600162(dVar4);
      local_28 = (float)dVar4;
      if (0.0 <= local_20) {
        fVar3 = *pfVar1 + local_28;
      }
      else {
        fVar3 = *pfVar1 - local_28;
      }
      *pfVar1 = fVar3;
      fVar3 = core_actor_cpp_FUN_0040cd70(*pfVar1);
      *pfVar1 = fVar3;
    }
    if (((_DAT_00653c8c <= (double)local_28) &&
        (dVar4 = (double)(SQRT(local_28 * local_28 - in_stack_0000000c[1] * in_stack_0000000c[1]) /
                         local_28), dVar4 < 1.0)) && (0.0 <= dVar4)) {
      dVar4 = crt_math_c_acos_FUN_00600162(dVar4);
      if (0.0 <= fVar2) {
        fVar2 = in_stack_00000004->x + (float)dVar4;
      }
      else {
        fVar2 = in_stack_00000004->x - (float)dVar4;
      }
      in_stack_00000004->x = fVar2;
      fVar2 = core_actor_cpp_FUN_0040cd70(in_stack_00000004->x);
      in_stack_00000004->x = fVar2;
    }
  }
  return in_stack_00000004;
}


// Assembly code:
// 005c37e0: PUSH EBX
//   Label: core_stranger.cpp_FUN_005c37e0
// 005c37e1: PUSH ESI
// 005c37e2: PUSH EDI
// 005c37e3: PUSH EBP
// 005c37e4: MOV EBP,ESP
// 005c37e6: SUB ESP,0x3c
// 005c37e9: AND ESP,0xfffffff8
// 005c37ec: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c37ef: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c37f2: PUSH ESI
// 005c37f3: PUSH EBX
// 005c37f4: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005c37f9: FLD float ptr [ESI + 0x4]
// 005c37fc: FMUL ST0
// 005c37fe: FLD float ptr [ESI]
// 005c3800: FMUL ST0
// 005c3802: FADDP
// 005c3804: FLD float ptr [ESI + 0x8]
// 005c3807: FMUL ST0
// 005c3809: FADDP
// 005c380b: FSQRT
// 005c380d: ADD ESP,0x8
// 005c3810: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 005c3814: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 005c3818: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (WRITE)
// 005c381c: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 005c3820: FCOMP double ptr [0x00653c8c]
//   XREF to: 00653c8c (READ)
// 005c3826: FNSTSW AX
// 005c3828: SAHF
// 005c3829: JBE 0x005c38ce
//   XREF to: 005c38ce (CONDITIONAL_JUMP)
// 005c382f: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c3832: FLD float ptr [ESI]
// 005c3834: FCHS
// 005c3836: LEA ESI,[EBX + 0x4]
// 005c3839: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 005c383d: MOV EDI,ESI
// 005c383f: JNC 0x005c38d7
//   XREF to: 005c38d7 (CONDITIONAL_JUMP)
// 005c3845: FLD float ptr [ESP + 0x24]
//   Label: LAB_005c3845
//   XREF to: Stack[-0x2c] (READ)
// 005c3849: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c384c: MOV ESI,EBX
// 005c384e: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 005c3852: MOV EDI,dword ptr [EDI + 0x4]
// 005c3855: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005c3859: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005c385d: FCOMP double ptr [0x00653c8c]
//   XREF to: 00653c8c (READ)
// 005c3863: FNSTSW AX
// 005c3865: SAHF
// 005c3866: JC 0x005c38ce
//   XREF to: 005c38ce (CONDITIONAL_JUMP)
// 005c3868: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 005c386c: FMUL ST0
// 005c386e: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 005c3872: FMUL ST0
// 005c3874: FSUBP
// 005c3876: FSQRT
// 005c3878: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005c387c: FLD1
// 005c387e: FXCH
// 005c3880: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005c3883: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005c3886: FNSTSW AX
// 005c3888: SAHF
// 005c3889: JBE 0x005c38ce
//   XREF to: 005c38ce (CONDITIONAL_JUMP)
// 005c388b: FLDZ
// 005c388d: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005c3890: FNSTSW AX
// 005c3892: SAHF
// 005c3893: JA 0x005c38ce
//   XREF to: 005c38ce (CONDITIONAL_JUMP)
// 005c3895: FLD double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005c3898: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005c389d: FLDZ
// 005c389f: FXCH
// 005c38a1: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (WRITE)
// 005c38a5: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 005c38a9: FNSTSW AX
// 005c38ab: SAHF
// 005c38ac: JBE 0x005c3952
//   XREF to: 005c3952 (CONDITIONAL_JUMP)
// 005c38b2: FLD float ptr [EBX]
// 005c38b4: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 005c38b8: FSTP float ptr [EBX]
//   Label: LAB_005c38b8
// 005c38ba: PUSH dword ptr [ESI]
// 005c38bc: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c38c1: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c38c5: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 005c38c9: MOV dword ptr [ESI],EAX
// 005c38cb: ADD ESP,0x4
// 005c38ce: MOV EAX,EBX
//   Label: LAB_005c38ce
// 005c38d0: MOV ESP,EBP
// 005c38d2: POP EBP
// 005c38d3: POP EDI
// 005c38d4: POP ESI
// 005c38d5: POP EBX
// 005c38d6: RET
// 005c38d7: FLD float ptr [ESP + 0x20]
//   Label: LAB_005c38d7
//   XREF to: Stack[-0x30] (READ)
// 005c38db: FMUL ST0
// 005c38dd: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 005c38e1: FMUL ST0
// 005c38e3: FSUBP
// 005c38e5: FSQRT
// 005c38e7: FDIV double ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 005c38eb: FLD1
// 005c38ed: FXCH
// 005c38ef: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (WRITE)
// 005c38f3: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 005c38f7: FNSTSW AX
// 005c38f9: SAHF
// 005c38fa: JBE 0x005c3845
//   XREF to: 005c3845 (CONDITIONAL_JUMP)
// 005c3900: FLDZ
// 005c3902: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 005c3906: FNSTSW AX
// 005c3908: SAHF
// 005c3909: JA 0x005c3845
//   XREF to: 005c3845 (CONDITIONAL_JUMP)
// 005c390f: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 005c3913: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005c3918: FLDZ
// 005c391a: FXCH
// 005c391c: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 005c3920: FCOMP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 005c3924: FNSTSW AX
// 005c3926: SAHF
// 005c3927: JBE 0x005c394a
//   XREF to: 005c394a (CONDITIONAL_JUMP)
// 005c3929: FLD float ptr [ESI]
// 005c392b: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 005c392f: FSTP float ptr [ESI]
//   Label: LAB_005c392f
// 005c3931: PUSH dword ptr [EDI]
// 005c3933: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c3938: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c393c: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 005c3940: MOV dword ptr [EDI],EAX
// 005c3942: ADD ESP,0x4
// 005c3945: JMP 0x005c3845
//   XREF to: 005c3845 (UNCONDITIONAL_JUMP)
// 005c394a: FLD float ptr [ESI]
//   Label: LAB_005c394a
// 005c394c: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 005c3950: JMP 0x005c392f
//   XREF to: 005c392f (UNCONDITIONAL_JUMP)
// 005c3952: FLD float ptr [EBX]
//   Label: LAB_005c3952
// 005c3954: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 005c3958: JMP 0x005c38b8
//   XREF to: 005c38b8 (UNCONDITIONAL_JUMP)
