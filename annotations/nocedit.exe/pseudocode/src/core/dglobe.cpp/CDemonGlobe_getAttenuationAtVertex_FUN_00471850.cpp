// Name: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
// Address: 00471850
// Address Range: [[00471850, 004719a9]]
// Convention: __cdecl
// Signature: int core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850(CDemonGlobe * this_ptr, CVector3i * vertex_position, CVector3i * surface_normal)
// Cross-references:
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 (0056db80) at 0056dc5f [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0065c8c8 = 0.00390625
//   float FLOAT_0065c8cc = 0.00001525879
//   int g_LightAttenuationMax

#include "nocturne.h"

int __cdecl
core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
          (CDemonGlobe *this_ptr,CVector3i *vertex_position,CVector3i *surface_normal)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float local_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  
  local_30 = (float)vertex_position->x * FLOAT_0065c8c8;
  local_2c = (float)vertex_position->y * FLOAT_0065c8c8;
  local_28 = (float)vertex_position->z * FLOAT_0065c8c8;
  if (&local_30 != local_48) {
    local_30 = local_30 - (this_ptr->position).x;
    local_2c = local_2c - (this_ptr->position).y;
    local_28 = local_28 - (this_ptr->position).z;
  }
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (this_ptr->radius_squared < fVar1) {
    return 0;
  }
  local_20 = (float)this_ptr->intensity_multiplier *
             (this_ptr->radius_squared - fVar1) * this_ptr->inverse_radius_squared;
  if (surface_normal != (CVector3i *)0x0) {
    fVar1 = (float)(g_LightAttenuationMax - ((int)fVar1 >> 1));
    fVar1 = local_28 * fVar1 * (float)surface_normal->z * FLOAT_0065c8cc +
            local_30 * fVar1 * (float)surface_normal->x * FLOAT_0065c8cc +
            local_2c * fVar1 * (float)surface_normal->y * FLOAT_0065c8cc;
    if (0.0 < fVar1) {
      return 0;
    }
    local_20 = -fVar1 * local_20;
  }
  return (int)ROUND(local_20);
}


// Assembly code:
// 00471850: PUSH EBX
//   Label: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
// 00471851: PUSH ESI
// 00471852: PUSH EDI
// 00471853: PUSH EBP
// 00471854: MOV EBP,ESP
// 00471856: SUB ESP,0x38
// 00471859: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047185c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047185f: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00471862: LEA EBX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 00471865: FILD dword ptr [EAX]
// 00471867: FMUL float ptr [0x0065c8c8]
//   XREF to: 0065c8c8 (READ)
// 0047186d: FSTP float ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 0047186f: FILD dword ptr [EAX + 0x4]
// 00471872: FMUL float ptr [0x0065c8c8]
//   XREF to: 0065c8c8 (READ)
// 00471878: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 0047187b: FILD dword ptr [EAX + 0x8]
// 0047187e: FMUL float ptr [0x0065c8c8]
//   XREF to: 0065c8c8 (READ)
// 00471884: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00471887: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0047188a: LEA EAX,[EDX + 0x24]
// 0047188d: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00471890: FXCH
// 00471892: FSUB float ptr [EAX]
// 00471894: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00471897: FXCH
// 00471899: FSTP float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0047189c: FXCH
// 0047189e: FSUB float ptr [EAX + 0x4]
// 004718a1: LEA EBX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004718a4: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 004718a7: FSUB float ptr [EAX + 0x8]
// 004718aa: LEA EAX,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 004718ad: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 004718b0: CMP EBX,EAX
// 004718b2: JNZ 0x0047198a
//   XREF to: 0047198a (CONDITIONAL_JUMP)
// 004718b8: FLD float ptr [EBP + -0x1c]
//   Label: LAB_004718b8
//   XREF to: Stack[-0x2c] (READ)
// 004718bb: FMUL ST0
// 004718bd: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004718c0: FMUL ST0
// 004718c2: FADDP
// 004718c4: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004718c7: FMUL ST0
// 004718c9: FADDP
// 004718cb: FST float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004718ce: FCOMP float ptr [EDX + 0x18]
// 004718d1: FNSTSW AX
// 004718d3: SAHF
// 004718d4: JA 0x004719a1
//   XREF to: 004719a1 (CONDITIONAL_JUMP)
// 004718da: FLD float ptr [EDX + 0x18]
// 004718dd: FSUB float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004718e0: FMUL float ptr [EDX + 0x38]
// 004718e3: FILD dword ptr [EDX + 0x3c]
// 004718e6: FMULP
// 004718e8: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 004718eb: TEST ECX,ECX
// 004718ed: JZ 0x00471974
//   XREF to: 00471974 (CONDITIONAL_JUMP)
// 004718f3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004718f6: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 004718fc: SAR EAX,0x1
// 004718fe: SUB EDX,EAX
// 00471900: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00471903: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00471906: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00471909: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0047190c: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0047190f: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00471912: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00471915: LEA EBX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 00471918: MOV EAX,ECX
// 0047191a: FXCH ST2
// 0047191c: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0047191f: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00471922: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00471925: FILD dword ptr [EAX]
// 00471927: FMUL float ptr [0x0065c8cc]
//   XREF to: 0065c8cc (READ)
// 0047192d: FSTP float ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 0047192f: FILD dword ptr [EAX + 0x4]
// 00471932: FMUL float ptr [0x0065c8cc]
//   XREF to: 0065c8cc (READ)
// 00471938: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 0047193b: FILD dword ptr [EAX + 0x8]
// 0047193e: FMUL float ptr [0x0065c8cc]
//   XREF to: 0065c8cc (READ)
// 00471944: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 00471947: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0047194a: FMUL float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0047194d: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00471950: FMUL float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00471953: FADDP
// 00471955: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00471958: FMUL float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0047195b: FADDP
// 0047195d: FST float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00471960: FLDZ
// 00471962: FCOMPP
// 00471964: FNSTSW AX
// 00471966: SAHF
// 00471967: JC 0x004719a1
//   XREF to: 004719a1 (CONDITIONAL_JUMP)
// 00471969: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0047196c: FCHS
// 0047196e: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00471971: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00471974: FLD float ptr [EBP + 0xfffffff0]
//   Label: LAB_00471974
//   XREF to: Stack[-0x20] (READ)
// 0047197a: FISTP dword ptr [EBP + 0xffffffec]
//   XREF to: Stack[-0x24] (WRITE)
// 00471980: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00471983: MOV ESP,EBP
// 00471985: POP EBP
// 00471986: POP EDI
// 00471987: POP ESI
// 00471988: POP EBX
// 00471989: RET
// 0047198a: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_0047198a
//   XREF to: Stack[-0x48] (DATA)
// 0047198d: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00471990: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00471993: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00471996: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00471999: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047199c: JMP 0x004718b8
//   XREF to: 004718b8 (UNCONDITIONAL_JUMP)
// 004719a1: XOR EAX,EAX
//   Label: LAB_004719a1
// 004719a3: MOV ESP,EBP
// 004719a5: POP EBP
// 004719a6: POP EDI
// 004719a7: POP ESI
// 004719a8: POP EBX
// 004719a9: RET
