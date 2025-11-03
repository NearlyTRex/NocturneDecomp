// Name: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
// Address: 0044edf0
// Address Range: [[0044edf0, 0044ef24]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction)
// Cross-references:
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 (0056db80) at 0056dbe2 [UNCONDITIONAL_CALL]
// Globals:
//   float g_FixedPointScale = 65536
//   float g_WorldToFloat = 0.00390625
//   int g_LightAttenuationMax
// Function calls:
//   core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
          (CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,
          CVector3i *light_direction)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  if (light_direction == (CVector3i *)0x0) {
    iVar7 = 0xaaaa;
  }
  else {
    fVar4 = (float)world_pos->x * g_WorldToFloat - (float)(light_source->base).base.position.x;
    fVar5 = (float)world_pos->y * g_WorldToFloat - (float)(light_source->base).base.position.y;
    fVar6 = (float)world_pos->z * g_WorldToFloat - (float)(light_source->base).base.position.z;
    fVar8 = (float)(g_LightAttenuationMax -
                   ((int)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) >> 1));
    lVar1 = (longlong)(int)ROUND(fVar4 * fVar8 * g_FixedPointScale) * (longlong)light_direction->x;
    lVar2 = (longlong)(int)ROUND(fVar5 * fVar8 * g_FixedPointScale) * (longlong)light_direction->y;
    lVar3 = (longlong)(int)ROUND(fVar6 * fVar8 * g_FixedPointScale) * (longlong)light_direction->z;
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (-1 < iVar7) {
      return 0;
    }
    iVar7 = -iVar7;
  }
  iVar7 = core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
                    (this_ptr,world_pos,light_source,iVar7);
  return iVar7;
}


// Assembly code:
// 0044edf0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
// 0044edf1: PUSH ESI
// 0044edf2: SUB ESP,0x2c
// 0044edf5: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0044edf9: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0044edfd: TEST ECX,ECX
// 0044edff: JNZ 0x0044ee20
//   XREF to: 0044ee20 (CONDITIONAL_JUMP)
// 0044ee01: MOV EAX,0xaaaa
// 0044ee06: PUSH EAX
//   Label: LAB_0044ee06
// 0044ee07: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 0044ee0b: PUSH EDX
// 0044ee0c: PUSH ESI
// 0044ee0d: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0044ee11: PUSH ECX
// 0044ee12: CALL core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
//   XREF to: 0044e790 (UNCONDITIONAL_CALL)
// 0044ee17: ADD ESP,0x10
// 0044ee1a: ADD ESP,0x2c
// 0044ee1d: POP ESI
// 0044ee1e: POP EBX
// 0044ee1f: RET
// 0044ee20: LEA EBX,[ESP + 0xc]
//   Label: LAB_0044ee20
//   XREF to: Stack[-0x28] (DATA)
// 0044ee24: MOV EAX,ESI
// 0044ee26: FILD dword ptr [EAX]
// 0044ee28: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 0044ee2e: FSTP float ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 0044ee30: FILD dword ptr [EAX + 0x4]
// 0044ee33: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 0044ee39: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0044ee3c: FILD dword ptr [EAX + 0x8]
// 0044ee3f: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 0044ee45: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0044ee48: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0044ee4c: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0044ee50: FSUB float ptr [EAX + 0x4]
// 0044ee53: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0044ee57: FXCH
// 0044ee59: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 0044ee5d: FSUB float ptr [EAX + 0x8]
// 0044ee60: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (WRITE)
// 0044ee64: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0044ee68: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0044ee6c: FMUL ST0
// 0044ee6e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0044ee72: FSUB float ptr [EAX + 0xc]
// 0044ee75: FXCH
// 0044ee77: FADDP ST2,ST0
// 0044ee79: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (WRITE)
// 0044ee7d: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0044ee81: FADDP
// 0044ee83: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (WRITE)
// 0044ee87: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 0044ee8b: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0044ee91: SAR EAX,0x1
// 0044ee93: SUB EDX,EAX
// 0044ee95: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0044ee99: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0044ee9d: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 0044eea1: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0044eea5: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 0044eea9: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0044eead: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 0044eeb1: MOV EBX,ESP
// 0044eeb3: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 0044eeb7: FXCH ST2
// 0044eeb9: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 0044eebd: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (WRITE)
// 0044eec1: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (WRITE)
// 0044eec5: FLD float ptr [EAX]
//   XREF to: Stack[-0x1c] (DATA)
// 0044eec7: FMUL float ptr [0x0065c640]
//   XREF to: 0065c640 (READ)
// 0044eecd: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 0044eecf: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0044eed2: FMUL float ptr [0x0065c640]
//   XREF to: 0065c640 (READ)
// 0044eed8: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 0044eedb: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0044eede: FMUL float ptr [0x0065c640]
//   XREF to: 0065c640 (READ)
// 0044eee4: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 0044eee7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0044eeea: MOV EDX,dword ptr [ECX]
// 0044eeec: IMUL EDX
// 0044eeee: SHRD EAX,EDX,0x10
// 0044eef2: MOV EBX,EAX
// 0044eef4: MOV EDX,dword ptr [ECX + 0x4]
// 0044eef7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 0044eefb: IMUL EDX
// 0044eefd: SHRD EAX,EDX,0x10
// 0044ef01: MOV EDX,dword ptr [ECX + 0x8]
// 0044ef04: ADD EBX,EAX
// 0044ef06: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 0044ef0a: IMUL EDX
// 0044ef0c: SHRD EAX,EDX,0x10
// 0044ef10: ADD EAX,EBX
// 0044ef12: TEST EAX,EAX
// 0044ef14: JL 0x0044ef1e
//   XREF to: 0044ef1e (CONDITIONAL_JUMP)
// 0044ef16: XOR EAX,EAX
// 0044ef18: ADD ESP,0x2c
// 0044ef1b: POP ESI
// 0044ef1c: POP EBX
// 0044ef1d: RET
// 0044ef1e: NEG EAX
//   Label: LAB_0044ef1e
// 0044ef20: JMP 0x0044ee06
//   XREF to: 0044ee06 (UNCONDITIONAL_JUMP)
