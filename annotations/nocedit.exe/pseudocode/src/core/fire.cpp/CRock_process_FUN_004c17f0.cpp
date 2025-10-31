// Name: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
// Address Range: [[004c17f0, 004c1867]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRock_process_FUN_004c17f0(CRock * this_ptr)
// Globals:
//   double DOUBLE_00629ccb = 32767.7000000000
//   int g_GlobalDeltaTimeInt
// Function calls:
//   core_particle.cpp_CParticle_process_FUN_00545760
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

{
  longlong lVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  fVar3 = (float10)(this_ptr->base).velocity.y;
  fVar4 = (float10)(this_ptr->base).velocity.x;
  fVar5 = (float10)(this_ptr->base).velocity.z;
  iVar2 = g_GlobalDeltaTimeInt >> 0x1f;
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float10)DOUBLE_00629ccb;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(iVar2 * 4,
                                      (int)((g_GlobalDeltaTimeInt + iVar2 * -4) -
                                           (uint)(iVar2 << 1 < 0)) >> 2));
  iVar2 = g_GlobalDeltaTimeInt;
  lVar1 = (longlong)SUB84(dVar6,0) * (longlong)(int)ROUND(fVar3);
  *(uint *)this_ptr->field1_0x38 =
       *(int *)this_ptr->field1_0x38 +
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar2 / 2) * (longlong)(int)ROUND(fVar3);
  *(uint *)(this_ptr->field1_0x38 + 4) =
       *(int *)(this_ptr->field1_0x38 + 4) +
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}


// Assembly code:
// 004c17f0: PUSH EBX
//   Label: core_fire.cpp_CRock_process_FUN_004c17f0
// 004c17f1: SUB ESP,0x4
// 004c17f4: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c17f8: PUSH EBX
// 004c17f9: CALL core_particle.cpp_CParticle_process_FUN_00545760
//   XREF to: 00545760 (UNCONDITIONAL_CALL)
// 004c17fe: LEA EAX,[EBX + 0xc]
// 004c1801: FLD float ptr [EAX + 0x4]
// 004c1804: FMUL ST0
// 004c1806: FLD float ptr [EAX]
// 004c1808: FMUL ST0
// 004c180a: FADDP
// 004c180c: FLD float ptr [EAX + 0x8]
// 004c180f: FMUL ST0
// 004c1811: FADDP
// 004c1813: FSQRT
// 004c1815: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c181a: MOV EDX,EAX
// 004c181c: SAR EDX,0x1f
// 004c181f: SHL EDX,0x2
// 004c1822: SBB EAX,EDX
// 004c1824: SAR EAX,0x2
// 004c1827: FMUL double ptr [0x00629ccb]
//   XREF to: 00629ccb (READ)
// 004c182d: ADD ESP,0x4
// 004c1830: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c1835: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004c1838: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004c183b: IMUL EDX
// 004c183d: SHRD EAX,EDX,0x10
// 004c1841: MOV EDX,dword ptr [EBX + 0x38]
// 004c1844: ADD EDX,EAX
// 004c1846: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c184b: MOV dword ptr [EBX + 0x38],EDX
// 004c184e: MOV EDX,EAX
// 004c1850: SAR EDX,0x1f
// 004c1853: SUB EAX,EDX
// 004c1855: SAR EAX,0x1
// 004c1857: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004c185a: IMUL EDX
// 004c185c: SHRD EAX,EDX,0x10
// 004c1860: ADD dword ptr [EBX + 0x3c],EAX
// 004c1863: ADD ESP,0x4
// 004c1866: POP EBX
// 004c1867: RET
