// Name: core_set.cpp_CDemonSet_FUN_0056d4a0
// Address: 0056d4a0
// Address Range: [[0056d4a0, 0056db79]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056d4a0(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 (0056db80) at 0056dbad [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00645e1b = 0.6660000
//   double DOUBLE_00645e23 = 2
//   float FLOAT_00662850 = 256
//   undefined4 DAT_02d7a7b8
//   int g_ActiveLightCount
//   CDemonLight*[96] g_ActiveLightList
//   undefined4 DAT_03276f38
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
//   int g_CoronaGlobeCount
//   CDemonGlobe*[100] g_CoronaGlobes
//   undefined4 DAT_032776d0
//   undefined4 DAT_03277b80
//   undefined4 DAT_03277b84
//   undefined4 DAT_03277b88
//   undefined4 DAT_03277d80
//   undefined4 DAT_03277d84
//   undefined4 DAT_03277d88
//   int g_SecondaryDirectionalLightCount
//   CDemonLight*[32] g_SecondaryDirectionalLights
//   undefined4 DAT_032c161c
//   int g_PrimaryDirectionalLightCount
//   CDemonLight* g_PrimaryDirectionalLights
//   undefined4 DAT_032c17a0
//   int g_GlobeLightCount
//   CDemonGlobe* g_GlobeLights
//   undefined4 DAT_032c17b4
//   int g_ColorCorrectionEnabled
//   undefined4 DAT_032c1944
//   undefined4 DAT_032c1948
//   int g_ColorCorrectionLightMultiplier
//   int g_ColorCorrectionColorMultiplier
//   int g_ColorCorrectionFogMultiplier
// Function calls:
//   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
//   core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056d4a0(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  CVector3f *in_stack_00000014;
  CMatrix3x3f *in_stack_00000018;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f local_a0 [2];
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  CVector3f local_64;
  CVector3f local_58 [3];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar8 = g_DynamicLightCount;
  if (in_stack_00000008 == (CVector3f *)0x0) {
    g_PrimaryDirectionalLightCount = (int)in_stack_00000008;
    if (0 < g_DynamicLightCount) {
      iVar5 = g_DynamicLightCount * 4;
      iVar4 = 0;
      iVar9 = 0;
      do {
        iVar7 = iVar9;
        if (*(int *)(*(int *)((int)g_DynamicLights + iVar4) + 0x1cb4) != 0) {
          iVar7 = iVar9 + 4;
          g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
          *(int *)((int)&g_PrimaryDirectionalLights + iVar9) =
               *(int *)((int)g_DynamicLights + iVar4);
        }
        iVar4 = iVar4 + 4;
        iVar9 = iVar7;
      } while (SBORROW4(iVar4,iVar5) != iVar4 + iVar8 * -4 < 0);
    }
    g_SecondaryDirectionalLightCount = 0;
    if (0 < g_ActiveLightCount) {
      iVar9 = g_ActiveLightCount * 4;
      iVar5 = 0;
      iVar8 = 0;
      do {
        iVar4 = iVar8;
        if (*(int *)(*(int *)((int)g_ActiveLightList + iVar5) + 0x1cb4) != 0) {
          iVar4 = iVar8 + 4;
          g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
          *(int *)((int)g_SecondaryDirectionalLights + iVar8) =
               *(int *)((int)g_ActiveLightList + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar8 = iVar4;
      } while (iVar5 < iVar9);
    }
    g_GlobeLightCount = g_CoronaGlobeCount;
    if (0 < g_CoronaGlobeCount) {
      iVar5 = g_CoronaGlobeCount * 4;
      iVar8 = 0;
      do {
        iVar9 = iVar8 + 4;
        *(undefined4 *)((int)&g_GlobeLights + iVar8) = *(undefined4 *)((int)g_CoronaGlobes + iVar8);
        iVar8 = iVar9;
      } while (iVar9 < iVar5);
    }
    g_ColorCorrectionEnabled = DAT_03277d80;
    local_70 = DAT_03277d80;
    if (0 < DAT_03277d80) {
      iVar5 = DAT_03277d80 * 4;
      iVar8 = 0;
      do {
        local_70 = iVar8 + 4;
        *(undefined4 *)((int)&DAT_032c1944 + iVar8) = *(undefined4 *)((int)&DAT_03277d84 + iVar8);
        iVar8 = local_70;
      } while (local_70 < iVar5);
    }
  }
  else {
    local_24 = 0;
    g_PrimaryDirectionalLightCount = 0;
    if (0 < g_DynamicLightCount) {
      iVar8 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_DynamicLights + iVar8))[1].rect_array[0x61].right != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                              (*(CDemonCamera **)((int)g_DynamicLights + iVar8),in_stack_00000008,
                               in_stack_0000000c,in_stack_00000010), iVar5 != 0)) {
          (&g_PrimaryDirectionalLights)[g_PrimaryDirectionalLightCount] =
               *(CDemonLight **)((int)g_DynamicLights + iVar8);
          g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
        }
        local_24 = local_24 + 1;
        iVar8 = iVar8 + 4;
      } while (local_24 < g_DynamicLightCount);
    }
    local_20 = 0;
    g_SecondaryDirectionalLightCount = 0;
    if (0 < g_ActiveLightCount) {
      iVar8 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_ActiveLightList + iVar8))[1].rect_array[0x61].right != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                              (*(CDemonCamera **)((int)g_ActiveLightList + iVar8),in_stack_00000008,
                               in_stack_0000000c,in_stack_00000010), iVar5 != 0)) {
          g_SecondaryDirectionalLights[g_SecondaryDirectionalLightCount] =
               *(CDemonLight **)((int)g_ActiveLightList + iVar8);
          g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
        }
        local_20 = local_20 + 1;
        iVar8 = iVar8 + 4;
      } while (local_20 < g_ActiveLightCount);
    }
    local_1c = 0;
    g_ColorCorrectionEnabled = 0;
    if (0 < DAT_03277d80) {
      local_2c = 0;
      do {
        iVar8 = *(int *)((int)&DAT_03277d84 + local_2c);
        local_64.x = *(float *)(iVar8 + 0x104) - in_stack_00000008->x;
        local_64.y = *(float *)(iVar8 + 0x108) - in_stack_00000008->y;
        local_64.z = *(float *)(iVar8 + 0x10c) - in_stack_00000008->z;
        pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                           (in_stack_00000018,local_a0,&local_64);
        if (&local_64 != pCVar6) {
          local_64.x = pCVar6->x;
          local_64.y = pCVar6->y;
          local_64.z = pCVar6->z;
        }
        if ((((in_stack_00000010->x <= local_64.x + *(float *)(iVar8 + 0x11d4)) &&
             (in_stack_00000010->y <= local_64.y + *(float *)(iVar8 + 0x11d4))) &&
            (in_stack_00000010->z <= local_64.z + *(float *)(iVar8 + 0x11d4))) &&
           (((local_64.x - *(float *)(iVar8 + 0x11d4) <= in_stack_00000014->x &&
             (local_64.y - *(float *)(iVar8 + 0x11d4) <= in_stack_00000014->y)) &&
            (local_64.z - *(float *)(iVar8 + 0x11d4) <= in_stack_00000014->z)))) {
          (&DAT_032c1944)[g_ColorCorrectionEnabled] = iVar8;
          g_ColorCorrectionEnabled = g_ColorCorrectionEnabled + 1;
        }
        local_2c = local_2c + 4;
        local_1c = local_1c + 1;
      } while (local_1c < DAT_03277d80);
    }
    local_28 = 0;
    g_GlobeLightCount = 0;
    local_70 = g_CoronaGlobeCount;
    if (0 < g_CoronaGlobeCount) {
      iVar8 = 0;
      do {
        iVar5 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                          (*(CDemonGlobe **)((int)g_CoronaGlobes + iVar8),in_stack_00000008,
                           in_stack_00000018,in_stack_00000010,in_stack_00000014);
        if (iVar5 != 0) {
          (&g_GlobeLights)[g_GlobeLightCount] = *(CDemonGlobe **)((int)g_CoronaGlobes + iVar8);
          g_GlobeLightCount = g_GlobeLightCount + 1;
        }
        local_70 = local_28 + 1;
        iVar8 = iVar8 + 4;
        local_28 = local_70;
      } while (local_70 < g_CoronaGlobeCount);
    }
    local_18 = 0;
    if (0 < DAT_03277b80) {
      iVar8 = 0;
      do {
        local_70 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                             (*(CDemonGlobe **)((int)&DAT_03277b84 + iVar8),in_stack_00000008,
                              in_stack_00000018,in_stack_00000010,in_stack_00000014);
        if (local_70 != 0) {
          g_GlobeLightCount = g_GlobeLightCount + 1;
          local_70 = *(int *)((int)&DAT_03277b84 + iVar8);
          (&g_GlobeLightCount)[g_GlobeLightCount] = local_70;
        }
        local_18 = local_18 + 1;
        iVar8 = iVar8 + 4;
      } while (local_18 < DAT_03277b80);
    }
    if (0 < g_ColorCorrectionEnabled) {
      local_ac.x = in_stack_00000014->x - in_stack_00000010->x;
      local_ac.y = in_stack_00000014->y - in_stack_00000010->y;
      local_ac.z = in_stack_00000014->z - in_stack_00000010->z;
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (in_stack_00000018,local_58,&local_ac);
      iVar8 = 0;
      local_7c = 0.0;
      local_80 = 0.0;
      local_84 = 0.0;
      local_ac.x = 0.0;
      local_b0 = 0.0;
      local_b4 = 0.0;
      if (0 < g_ColorCorrectionEnabled) {
        iVar5 = 0;
        do {
          iVar9 = *(int *)((int)&DAT_032c1944 + iVar5);
          if ((*(uint *)(iVar9 + 0x11d4) & 0x7fffffff) == 0) {
            local_b4 = *(float *)(iVar9 + 0x11c4) + local_b4;
            local_b0 = *(float *)(iVar9 + 0x11c8) + local_b0;
            local_ac.x = *(float *)(iVar9 + 0x11cc) + local_ac.x;
            iVar8 = iVar8 + 1;
          }
          else {
            fVar3 = *(float *)(iVar9 + 0x104) - (in_stack_00000008->x + pCVar6->x);
            fVar1 = *(float *)(iVar9 + 0x108) - (in_stack_00000008->y + pCVar6->y);
            fVar2 = *(float *)(iVar9 + 0x10c) - (in_stack_00000008->z + pCVar6->z);
            fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
            if (fVar1 <= *(float *)(iVar9 + 0x11d8)) {
              fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + DAT_02d7a7b8) * *(float *)(iVar9 + 0x11dc))
                      * FLOAT_00645e1b;
              fVar2 = (float)DOUBLE_00645e23;
              local_84 = fVar1 * *(float *)(iVar9 + 0x11c4) * fVar2 + local_84;
              local_80 = fVar1 * *(float *)(iVar9 + 0x11c8) * fVar2 + local_80;
              local_7c = fVar1 * *(float *)(iVar9 + 0x11cc) * fVar2 + local_7c;
            }
          }
          iVar5 = iVar5 + 4;
        } while (SBORROW4(iVar5,g_ColorCorrectionEnabled * 4) !=
                 iVar5 + g_ColorCorrectionEnabled * -4 < 0);
      }
      if (iVar8 == 0) {
        local_74 = 0xaaaa;
        local_70 = 0xaaaa;
        local_78 = 0xaaaa;
      }
      else {
        local_78 = (int)ROUND(local_b4 * FLOAT_00662850);
        local_74 = (int)ROUND(local_b0 * FLOAT_00662850);
        local_70 = (int)ROUND(local_ac.x * FLOAT_00662850);
      }
      g_ColorCorrectionLightMultiplier = (int)ROUND(local_84 * FLOAT_00662850) + local_78;
      g_ColorCorrectionColorMultiplier = (int)ROUND(local_80 * FLOAT_00662850) + local_74;
      local_70 = (int)ROUND(local_7c * FLOAT_00662850) + local_70;
      if (0xffff < g_ColorCorrectionLightMultiplier) {
        g_ColorCorrectionLightMultiplier = 0xffff;
      }
      if (0xffff < g_ColorCorrectionColorMultiplier) {
        g_ColorCorrectionColorMultiplier = 0xffff;
      }
      g_ColorCorrectionFogMultiplier = local_70;
      if (0xffff < local_70) {
        g_ColorCorrectionFogMultiplier = 0xffff;
        return local_70;
      }
    }
  }
  return local_70;
}


// Assembly code:
// 0056d4a0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056d4a0
// 0056d4a1: PUSH ESI
// 0056d4a2: PUSH EDI
// 0056d4a3: PUSH EBP
// 0056d4a4: MOV EBP,ESP
// 0056d4a6: SUB ESP,0xa4
// 0056d4ac: AND ESP,0xfffffff8
// 0056d4af: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056d4b2: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0056d4b5: TEST ESI,ESI
// 0056d4b7: JNZ 0x0056d5b7
//   XREF to: 0056d5b7 (CONDITIONAL_JUMP)
// 0056d4bd: MOV EDI,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056d4c3: MOV dword ptr [0x032c1798],ESI
//   XREF to: 032c1798 (WRITE)
// 0056d4c9: TEST EDI,EDI
// 0056d4cb: JLE 0x0056d504
//   XREF to: 0056d504 (CONDITIONAL_JUMP)
// 0056d4cd: LEA ESI,[EDI*0x4 + 0x0]
// 0056d4d4: XOR EDX,EDX
// 0056d4d6: XOR EAX,EAX
// 0056d4d8: MOV EBX,dword ptr [EAX + 0x32776b8]
//   Label: LAB_0056d4d8
//   XREF to: 032776b8 (READ)
//   XREF to: 032776bc (READ)
// 0056d4de: CMP dword ptr [EBX + 0x1cb4],0x0
// 0056d4e5: JZ 0x0056d4fd
//   XREF to: 0056d4fd (CONDITIONAL_JUMP)
// 0056d4e7: MOV ECX,dword ptr [0x032c1798]
//   XREF to: 032c1798 (READ)
// 0056d4ed: ADD EDX,0x4
// 0056d4f0: INC ECX
// 0056d4f1: MOV dword ptr [EDX + 0x32c1798],EBX
//   XREF to: 032c179c (WRITE)
//   XREF to: 032c17a0 (WRITE)
// 0056d4f7: MOV dword ptr [0x032c1798],ECX
//   XREF to: 032c1798 (WRITE)
// 0056d4fd: ADD EAX,0x4
//   Label: LAB_0056d4fd
// 0056d500: CMP EAX,ESI
// 0056d502: JL 0x0056d4d8
//   XREF to: 0056d4d8 (CONDITIONAL_JUMP)
// 0056d504: XOR EBX,EBX
//   Label: LAB_0056d504
// 0056d506: MOV ESI,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d50c: MOV dword ptr [0x032c1614],EBX
//   XREF to: 032c1614 (WRITE)
// 0056d512: TEST ESI,ESI
// 0056d514: JLE 0x0056d549
//   XREF to: 0056d549 (CONDITIONAL_JUMP)
// 0056d516: SHL ESI,0x2
// 0056d519: XOR EDX,EDX
// 0056d51b: XOR EAX,EAX
// 0056d51d: MOV EBX,dword ptr [EAX + 0x3276f34]
//   Label: LAB_0056d51d
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056d523: CMP dword ptr [EBX + 0x1cb4],0x0
// 0056d52a: JZ 0x0056d542
//   XREF to: 0056d542 (CONDITIONAL_JUMP)
// 0056d52c: MOV ECX,dword ptr [0x032c1614]
//   XREF to: 032c1614 (READ)
// 0056d532: ADD EDX,0x4
// 0056d535: INC ECX
// 0056d536: MOV dword ptr [EDX + 0x32c1614],EBX
//   XREF to: 032c1618 (WRITE)
//   XREF to: 032c161c (WRITE)
// 0056d53c: MOV dword ptr [0x032c1614],ECX
//   XREF to: 032c1614 (WRITE)
// 0056d542: ADD EAX,0x4
//   Label: LAB_0056d542
// 0056d545: CMP EAX,ESI
// 0056d547: JL 0x0056d51d
//   XREF to: 0056d51d (CONDITIONAL_JUMP)
// 0056d549: MOV EAX,[0x032776c8]
//   Label: LAB_0056d549
//   XREF to: 032776c8 (READ)
// 0056d54e: MOV [0x032c17ac],EAX
//   XREF to: 032c17ac (WRITE)
// 0056d553: TEST EAX,EAX
// 0056d555: JLE 0x0056d580
//   XREF to: 0056d580 (CONDITIONAL_JUMP)
// 0056d557: MOV EBX,dword ptr [0x032776c8]
//   XREF to: 032776c8 (READ)
// 0056d55d: XOR EAX,EAX
// 0056d55f: SHL EBX,0x2
// 0056d562: ADD EAX,0x4
//   Label: LAB_0056d562
// 0056d565: MOV EDX,dword ptr [EAX + 0x32776c8]
//   XREF to: 032776cc (READ)
//   XREF to: 032776d0 (READ)
// 0056d56b: MOV dword ptr [EAX + 0x32c17ac],EDX
//   XREF to: 032c17b0 (WRITE)
//   XREF to: 032c17b4 (WRITE)
// 0056d571: CMP EAX,EBX
// 0056d573: JL 0x0056d562
//   XREF to: 0056d562 (CONDITIONAL_JUMP)
// 0056d575: LEA EAX,[EAX]
// 0056d57b: LEA EDX,[EDX]
// 0056d57e: MOV EBX,EBX
// 0056d580: MOV EAX,[0x03277d80]
//   Label: LAB_0056d580
//   XREF to: 03277d80 (READ)
// 0056d585: MOV [0x032c1940],EAX
//   XREF to: 032c1940 (WRITE)
// 0056d58a: TEST EAX,EAX
// 0056d58c: JLE 0x0056d5b0
//   XREF to: 0056d5b0 (CONDITIONAL_JUMP)
// 0056d58e: MOV EBX,dword ptr [0x03277d80]
//   XREF to: 03277d80 (READ)
// 0056d594: XOR EAX,EAX
// 0056d596: SHL EBX,0x2
// 0056d599: ADD EAX,0x4
//   Label: LAB_0056d599
// 0056d59c: MOV EDX,dword ptr [EAX + 0x3277d80]
//   XREF to: 03277d84 (READ)
//   XREF to: 03277d88 (READ)
// 0056d5a2: MOV dword ptr [EAX + 0x32c1940],EDX
//   XREF to: 032c1944 (WRITE)
//   XREF to: 032c1948 (WRITE)
// 0056d5a8: CMP EAX,EBX
// 0056d5aa: JL 0x0056d599
//   XREF to: 0056d599 (CONDITIONAL_JUMP)
// 0056d5ac: LEA EAX,[EAX]
// 0056d5b0: MOV ESP,EBP
//   Label: LAB_0056d5b0
// 0056d5b2: POP EBP
// 0056d5b3: POP EDI
// 0056d5b4: POP ESI
// 0056d5b5: POP EBX
// 0056d5b6: RET
// 0056d5b7: XOR EDX,EDX
//   Label: LAB_0056d5b7
// 0056d5b9: MOV EBX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056d5bf: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0056d5c6: MOV dword ptr [0x032c1798],EDX
//   XREF to: 032c1798 (WRITE)
// 0056d5cc: TEST EBX,EBX
// 0056d5ce: JLE 0x0056d630
//   XREF to: 0056d630 (CONDITIONAL_JUMP)
// 0056d5d0: XOR EBX,EBX
// 0056d5d2: MOV EAX,dword ptr [EBX + 0x32776b8]
//   Label: LAB_0056d5d2
//   XREF to: 032776b8 (READ)
//   XREF to: 032776bc (READ)
// 0056d5d8: CMP dword ptr [EAX + 0x1cb4],0x0
// 0056d5df: JZ 0x0056d614
//   XREF to: 0056d614 (CONDITIONAL_JUMP)
// 0056d5e1: PUSH EDI
// 0056d5e2: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056d5e5: PUSH ECX
// 0056d5e6: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056d5e9: PUSH EDX
// 0056d5ea: PUSH ESI
// 0056d5eb: PUSH EAX
// 0056d5ec: CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
//   XREF to: 00452180 (UNCONDITIONAL_CALL)
// 0056d5f1: ADD ESP,0x14
// 0056d5f4: TEST EAX,EAX
// 0056d5f6: JZ 0x0056d614
//   XREF to: 0056d614 (CONDITIONAL_JUMP)
// 0056d5f8: MOV EDX,dword ptr [0x032c1798]
//   XREF to: 032c1798 (READ)
// 0056d5fe: MOV EAX,dword ptr [EBX + 0x32776b8]
//   XREF to: 032776b8 (READ)
// 0056d604: LEA ECX,[EDX + 0x1]
// 0056d607: MOV dword ptr [EDX*0x4 + 0x32c179c],EAX
//   XREF to: 032c179c (WRITE)
// 0056d60e: MOV dword ptr [0x032c1798],ECX
//   XREF to: 032c1798 (WRITE)
// 0056d614: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_0056d614
//   XREF to: Stack[-0x24] (READ)
// 0056d61b: MOV EDX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056d621: INC EAX
// 0056d622: ADD EBX,0x4
// 0056d625: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0056d62c: CMP EAX,EDX
// 0056d62e: JL 0x0056d5d2
//   XREF to: 0056d5d2 (CONDITIONAL_JUMP)
// 0056d630: XOR ECX,ECX
//   Label: LAB_0056d630
// 0056d632: MOV EAX,[0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d637: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0056d63e: MOV dword ptr [0x032c1614],ECX
//   XREF to: 032c1614 (WRITE)
// 0056d644: TEST EAX,EAX
// 0056d646: JLE 0x0056d6a7
//   XREF to: 0056d6a7 (CONDITIONAL_JUMP)
// 0056d648: XOR EBX,EBX
// 0056d64a: MOV EAX,dword ptr [EBX + 0x3276f34]
//   Label: LAB_0056d64a
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056d650: CMP dword ptr [EAX + 0x1cb4],0x0
// 0056d657: JZ 0x0056d68b
//   XREF to: 0056d68b (CONDITIONAL_JUMP)
// 0056d659: PUSH EDI
// 0056d65a: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056d65d: PUSH ECX
// 0056d65e: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056d661: PUSH EDX
// 0056d662: PUSH ESI
// 0056d663: PUSH EAX
// 0056d664: CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
//   XREF to: 00452180 (UNCONDITIONAL_CALL)
// 0056d669: ADD ESP,0x14
// 0056d66c: TEST EAX,EAX
// 0056d66e: JZ 0x0056d68b
//   XREF to: 0056d68b (CONDITIONAL_JUMP)
// 0056d670: MOV EAX,[0x032c1614]
//   XREF to: 032c1614 (READ)
// 0056d675: MOV EDX,dword ptr [EBX + 0x3276f34]
//   XREF to: 03276f34 (READ)
// 0056d67b: LEA ECX,[EAX + 0x1]
// 0056d67e: MOV dword ptr [EAX*0x4 + 0x32c1618],EDX
//   XREF to: 032c1618 (WRITE)
// 0056d685: MOV dword ptr [0x032c1614],ECX
//   XREF to: 032c1614 (WRITE)
// 0056d68b: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_0056d68b
//   XREF to: Stack[-0x20] (READ)
// 0056d692: MOV EDX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056d698: INC EAX
// 0056d699: ADD EBX,0x4
// 0056d69c: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0056d6a3: CMP EAX,EDX
// 0056d6a5: JL 0x0056d64a
//   XREF to: 0056d64a (CONDITIONAL_JUMP)
// 0056d6a7: XOR ECX,ECX
//   Label: LAB_0056d6a7
// 0056d6a9: MOV EAX,[0x03277d80]
//   XREF to: 03277d80 (READ)
// 0056d6ae: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056d6b5: MOV dword ptr [0x032c1940],ECX
//   XREF to: 032c1940 (WRITE)
// 0056d6bb: TEST EAX,EAX
// 0056d6bd: JLE 0x0056d773
//   XREF to: 0056d773 (CONDITIONAL_JUMP)
// 0056d6c3: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056d6ca: MOV EBX,dword ptr [ESP + 0x8c]
//   Label: LAB_0056d6ca
//   XREF to: Stack[-0x2c] (READ)
// 0056d6d1: MOV EBX,dword ptr [EBX + 0x3277d84]
//   XREF to: 03277d84 (DATA)
//   XREF to: 03277d88 (DATA)
// 0056d6d7: LEA EAX,[EBX + 0x104]
// 0056d6dd: FLD float ptr [EAX]
// 0056d6df: FSUB float ptr [ESI]
// 0056d6e1: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0056d6e5: FLD float ptr [EAX + 0x4]
// 0056d6e8: FSUB float ptr [ESI + 0x4]
// 0056d6eb: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x60] (WRITE)
// 0056d6ef: FLD float ptr [EAX + 0x8]
// 0056d6f2: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0056d6f6: PUSH EAX
// 0056d6f7: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0xa0] (DATA)
// 0056d6fb: MOV ECX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0056d6fe: PUSH EAX
// 0056d6ff: FSUB float ptr [ESI + 0x8]
// 0056d702: PUSH ECX
// 0056d703: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x5c] (WRITE)
// 0056d707: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0056d70c: MOV EDX,EAX
// 0056d70e: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x64] (DATA)
// 0056d712: ADD ESP,0xc
// 0056d715: CMP EAX,EDX
// 0056d717: JZ 0x0056d72d
//   XREF to: 0056d72d (CONDITIONAL_JUMP)
// 0056d719: MOV EAX,dword ptr [EDX]
// 0056d71b: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0056d71f: MOV EAX,dword ptr [EDX + 0x4]
// 0056d722: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0056d726: MOV EAX,dword ptr [EDX + 0x8]
// 0056d729: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0056d72d: FLD float ptr [ESP + 0x54]
//   Label: LAB_0056d72d
//   XREF to: Stack[-0x64] (READ)
// 0056d731: FADD float ptr [EBX + 0x11d4]
// 0056d737: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056d73a: FCOMP float ptr [EAX]
// 0056d73c: FNSTSW AX
// 0056d73e: SAHF
// 0056d73f: JNC 0x0056da31
//   XREF to: 0056da31 (CONDITIONAL_JUMP)
// 0056d745: MOV EBX,dword ptr [ESP + 0x8c]
//   Label: LAB_0056d745
//   XREF to: Stack[-0x2c] (READ)
// 0056d74c: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x1c] (READ)
// 0056d753: MOV EDX,dword ptr [0x03277d80]
//   XREF to: 03277d80 (READ)
// 0056d759: ADD EBX,0x4
// 0056d75c: INC EAX
// 0056d75d: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056d764: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056d76b: CMP EAX,EDX
// 0056d76d: JL 0x0056d6ca
//   XREF to: 0056d6ca (CONDITIONAL_JUMP)
// 0056d773: XOR ECX,ECX
//   Label: LAB_0056d773
// 0056d775: MOV EAX,[0x032776c8]
//   XREF to: 032776c8 (READ)
// 0056d77a: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0056d781: MOV dword ptr [0x032c17ac],ECX
//   XREF to: 032c17ac (WRITE)
// 0056d787: TEST EAX,EAX
// 0056d789: JLE 0x0056d7e1
//   XREF to: 0056d7e1 (CONDITIONAL_JUMP)
// 0056d78b: XOR EBX,EBX
// 0056d78d: PUSH EDI
//   Label: LAB_0056d78d
// 0056d78e: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056d791: PUSH EAX
// 0056d792: MOV EDX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0056d795: PUSH EDX
// 0056d796: PUSH ESI
// 0056d797: MOV ECX,dword ptr [EBX + 0x32776cc]
//   XREF to: 032776cc (READ)
//   XREF to: 032776d0 (READ)
// 0056d79d: PUSH ECX
// 0056d79e: CALL core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
//   XREF to: 00471770 (UNCONDITIONAL_CALL)
// 0056d7a3: ADD ESP,0x14
// 0056d7a6: TEST EAX,EAX
// 0056d7a8: JZ 0x0056d7c5
//   XREF to: 0056d7c5 (CONDITIONAL_JUMP)
// 0056d7aa: MOV EDX,dword ptr [0x032c17ac]
//   XREF to: 032c17ac (READ)
// 0056d7b0: MOV EAX,dword ptr [EBX + 0x32776cc]
//   XREF to: 032776cc (READ)
// 0056d7b6: MOV dword ptr [EDX*0x4 + 0x32c17b0],EAX
//   XREF to: 032c17b0 (WRITE)
// 0056d7bd: LEA EAX,[EDX + 0x1]
// 0056d7c0: MOV [0x032c17ac],EAX
//   XREF to: 032c17ac (WRITE)
// 0056d7c5: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_0056d7c5
//   XREF to: Stack[-0x28] (READ)
// 0056d7cc: MOV EDX,dword ptr [0x032776c8]
//   XREF to: 032776c8 (READ)
// 0056d7d2: INC EAX
// 0056d7d3: ADD EBX,0x4
// 0056d7d6: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0056d7dd: CMP EAX,EDX
// 0056d7df: JL 0x0056d78d
//   XREF to: 0056d78d (CONDITIONAL_JUMP)
// 0056d7e1: XOR ECX,ECX
//   Label: LAB_0056d7e1
// 0056d7e3: MOV EBX,dword ptr [0x03277b80]
//   XREF to: 03277b80 (READ)
// 0056d7e9: MOV dword ptr [ESP + 0xa0],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0056d7f0: TEST EBX,EBX
// 0056d7f2: JLE 0x0056d849
//   XREF to: 0056d849 (CONDITIONAL_JUMP)
// 0056d7f4: XOR EBX,EBX
// 0056d7f6: PUSH EDI
//   Label: LAB_0056d7f6
// 0056d7f7: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056d7fa: PUSH EDX
// 0056d7fb: MOV ECX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0056d7fe: PUSH ECX
// 0056d7ff: PUSH ESI
// 0056d800: MOV EAX,dword ptr [EBX + 0x3277b84]
//   XREF to: 03277b84 (READ)
//   XREF to: 03277b88 (READ)
// 0056d806: PUSH EAX
// 0056d807: CALL core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
//   XREF to: 00471770 (UNCONDITIONAL_CALL)
// 0056d80c: ADD ESP,0x14
// 0056d80f: TEST EAX,EAX
// 0056d811: JZ 0x0056d82d
//   XREF to: 0056d82d (CONDITIONAL_JUMP)
// 0056d813: MOV EDX,dword ptr [0x032c17ac]
//   XREF to: 032c17ac (READ)
// 0056d819: INC EDX
// 0056d81a: MOV EAX,dword ptr [EBX + 0x3277b84]
//   XREF to: 03277b84 (READ)
// 0056d820: MOV dword ptr [EDX*0x4 + 0x32c17ac],EAX
//   XREF to: 032c17b4 (WRITE)
// 0056d827: MOV dword ptr [0x032c17ac],EDX
//   XREF to: 032c17ac (WRITE)
// 0056d82d: MOV EDX,dword ptr [ESP + 0xa0]
//   Label: LAB_0056d82d
//   XREF to: Stack[-0x18] (READ)
// 0056d834: MOV ECX,dword ptr [0x03277b80]
//   XREF to: 03277b80 (READ)
// 0056d83a: INC EDX
// 0056d83b: ADD EBX,0x4
// 0056d83e: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0056d845: CMP EDX,ECX
// 0056d847: JL 0x0056d7f6
//   XREF to: 0056d7f6 (CONDITIONAL_JUMP)
// 0056d849: CMP dword ptr [0x032c1940],0x0
//   Label: LAB_0056d849
//   XREF to: 032c1940 (READ)
// 0056d850: JLE 0x0056d5b0
//   XREF to: 0056d5b0 (CONDITIONAL_JUMP)
// 0056d856: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056d859: FLD float ptr [EDI]
// 0056d85b: FSUB float ptr [EAX]
// 0056d85d: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0xac] (WRITE)
// 0056d861: FLD float ptr [EDI + 0x4]
// 0056d864: FSUB float ptr [EAX + 0x4]
// 0056d867: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0xa8] (WRITE)
// 0056d86b: FLD float ptr [EDI + 0x8]
// 0056d86e: FSUB float ptr [EAX + 0x8]
// 0056d871: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xac] (DATA)
// 0056d875: PUSH EAX
// 0056d876: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x58] (DATA)
// 0056d87a: PUSH EAX
// 0056d87b: MOV EDI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0056d87e: PUSH EDI
// 0056d87f: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa4] (WRITE)
// 0056d883: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0056d888: FLD float ptr [ESI]
// 0056d88a: FADD float ptr [EAX]
// 0056d88c: ADD ESP,0xc
// 0056d88f: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x70] (WRITE)
// 0056d893: FLD float ptr [ESI + 0x4]
// 0056d896: FADD float ptr [EAX + 0x4]
// 0056d899: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0056d89d: FLD float ptr [ESI + 0x8]
// 0056d8a0: FADD float ptr [EAX + 0x8]
// 0056d8a3: XOR EAX,EAX
// 0056d8a5: XOR ESI,ESI
// 0056d8a7: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0056d8ab: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0056d8af: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0056d8b3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0056d8b7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0056d8bb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xb8] (DATA)
// 0056d8be: MOV EAX,[0x032c1940]
//   XREF to: 032c1940 (READ)
// 0056d8c3: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (WRITE)
// 0056d8c7: TEST EAX,EAX
// 0056d8c9: JLE 0x0056d95d
//   XREF to: 0056d95d (CONDITIONAL_JUMP)
// 0056d8cf: LEA EDI,[EAX*0x4 + 0x0]
// 0056d8d6: XOR EBX,EBX
// 0056d8d8: MOV EDX,dword ptr [EBX + 0x32c1944]
//   Label: LAB_0056d8d8
//   XREF to: 032c1944 (READ)
//   XREF to: 032c1948 (READ)
// 0056d8de: TEST dword ptr [EDX + 0x11d4],0x7fffffff
// 0056d8e8: JZ 0x0056dabe
//   XREF to: 0056dabe (CONDITIONAL_JUMP)
// 0056d8ee: FLD float ptr [EDX + 0x108]
// 0056d8f4: FLD float ptr [EDX + 0x104]
// 0056d8fa: FSUB float ptr [ESP + 0x48]
//   XREF to: Stack[-0x70] (READ)
// 0056d8fe: FXCH
// 0056d900: FSUB float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x6c] (READ)
// 0056d904: FXCH
// 0056d906: FST float ptr [ESP + 0x84]
//   XREF to: Stack[-0x34] (WRITE)
// 0056d90d: FMUL float ptr [ESP + 0x84]
//   XREF to: Stack[-0x34] (READ)
// 0056d914: FXCH
// 0056d916: FST float ptr [ESP + 0x80]
//   XREF to: Stack[-0x38] (WRITE)
// 0056d91d: FMUL float ptr [ESP + 0x80]
//   XREF to: Stack[-0x38] (READ)
// 0056d924: FLD float ptr [EDX + 0x10c]
// 0056d92a: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (READ)
// 0056d92e: FXCH
// 0056d930: FADDP ST2,ST0
// 0056d932: FST float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0056d936: FMUL float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x3c] (READ)
// 0056d93a: FADDP
// 0056d93c: FST float ptr [ESP + 0x88]
//   XREF to: Stack[-0x30] (WRITE)
// 0056d943: FCOMP float ptr [EDX + 0x11d8]
// 0056d949: FNSTSW AX
// 0056d94b: SAHF
// 0056d94c: JBE 0x0056daec
//   XREF to: 0056daec (CONDITIONAL_JUMP)
// 0056d952: ADD EBX,0x4
//   Label: LAB_0056d952
// 0056d955: CMP EBX,EDI
// 0056d957: JL 0x0056d8d8
//   XREF to: 0056d8d8 (CONDITIONAL_JUMP)
// 0056d95d: TEST ESI,ESI
//   Label: LAB_0056d95d
// 0056d95f: JZ 0x0056db64
//   XREF to: 0056db64 (CONDITIONAL_JUMP)
// 0056d965: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x7c] (DATA)
// 0056d969: MOV EAX,ESP
// 0056d96b: FLD float ptr [EAX]
//   XREF to: Stack[-0xb8] (DATA)
// 0056d96d: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056d973: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x7c] (DATA)
// 0056d975: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xb4] (READ)
// 0056d978: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056d97e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x78] (WRITE)
// 0056d981: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xb0] (READ)
// 0056d984: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056d98a: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x74] (WRITE)
// 0056d98d: LEA EBX,[ESP + 0x24]
//   Label: LAB_0056d98d
//   XREF to: Stack[-0x94] (DATA)
// 0056d991: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x88] (DATA)
// 0056d995: FLD float ptr [EAX]
//   XREF to: Stack[-0x88] (DATA)
// 0056d997: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056d99d: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x94] (DATA)
// 0056d99f: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 0056d9a2: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056d9a8: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x90] (WRITE)
// 0056d9ab: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 0056d9ae: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056d9b4: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8c] (WRITE)
// 0056d9b7: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x94] (READ)
// 0056d9bb: ADD EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x7c] (READ)
// 0056d9bf: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 0056d9c3: MOV [0x032c1cc0],EAX
//   XREF to: 032c1cc0 (WRITE)
// 0056d9c8: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x90] (READ)
// 0056d9cc: ADD EAX,EDX
// 0056d9ce: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x74] (READ)
// 0056d9d2: MOV [0x032c1cc4],EAX
//   XREF to: 032c1cc4 (WRITE)
// 0056d9d7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8c] (READ)
// 0056d9db: ADD EAX,ECX
// 0056d9dd: MOV EBX,dword ptr [0x032c1cc0]
//   XREF to: 032c1cc0 (READ)
// 0056d9e3: MOV [0x032c1cc8],EAX
//   XREF to: 032c1cc8 (WRITE)
// 0056d9e8: CMP EBX,0xffff
// 0056d9ee: JLE 0x0056d9fa
//   XREF to: 0056d9fa (CONDITIONAL_JUMP)
// 0056d9f0: MOV dword ptr [0x032c1cc0],0xffff
//   XREF to: 032c1cc0 (WRITE)
// 0056d9fa: CMP dword ptr [0x032c1cc4],0xffff
//   Label: LAB_0056d9fa
//   XREF to: 032c1cc4 (READ)
// 0056da04: JLE 0x0056da10
//   XREF to: 0056da10 (CONDITIONAL_JUMP)
// 0056da06: MOV dword ptr [0x032c1cc4],0xffff
//   XREF to: 032c1cc4 (WRITE)
// 0056da10: CMP dword ptr [0x032c1cc8],0xffff
//   Label: LAB_0056da10
//   XREF to: 032c1cc8 (READ)
// 0056da1a: JLE 0x0056d5b0
//   XREF to: 0056d5b0 (CONDITIONAL_JUMP)
// 0056da20: MOV dword ptr [0x032c1cc8],0xffff
//   XREF to: 032c1cc8 (WRITE)
// 0056da2a: MOV ESP,EBP
// 0056da2c: POP EBP
// 0056da2d: POP EDI
// 0056da2e: POP ESI
// 0056da2f: POP EBX
// 0056da30: RET
// 0056da31: FLD float ptr [ESP + 0x58]
//   Label: LAB_0056da31
//   XREF to: Stack[-0x60] (READ)
// 0056da35: FADD float ptr [EBX + 0x11d4]
// 0056da3b: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056da3e: FCOMP float ptr [EAX + 0x4]
// 0056da41: FNSTSW AX
// 0056da43: SAHF
// 0056da44: JC 0x0056d745
//   XREF to: 0056d745 (CONDITIONAL_JUMP)
// 0056da4a: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x5c] (READ)
// 0056da4e: FADD float ptr [EBX + 0x11d4]
// 0056da54: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056da57: FCOMP float ptr [EAX + 0x8]
// 0056da5a: FNSTSW AX
// 0056da5c: SAHF
// 0056da5d: JC 0x0056d745
//   XREF to: 0056d745 (CONDITIONAL_JUMP)
// 0056da63: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x64] (READ)
// 0056da67: FSUB float ptr [EBX + 0x11d4]
// 0056da6d: FCOMP float ptr [EDI]
// 0056da6f: FNSTSW AX
// 0056da71: SAHF
// 0056da72: JA 0x0056d745
//   XREF to: 0056d745 (CONDITIONAL_JUMP)
// 0056da78: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x60] (READ)
// 0056da7c: FSUB float ptr [EBX + 0x11d4]
// 0056da82: FCOMP float ptr [EDI + 0x4]
// 0056da85: FNSTSW AX
// 0056da87: SAHF
// 0056da88: JA 0x0056d745
//   XREF to: 0056d745 (CONDITIONAL_JUMP)
// 0056da8e: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x5c] (READ)
// 0056da92: FSUB float ptr [EBX + 0x11d4]
// 0056da98: FCOMP float ptr [EDI + 0x8]
// 0056da9b: FNSTSW AX
// 0056da9d: SAHF
// 0056da9e: JA 0x0056d745
//   XREF to: 0056d745 (CONDITIONAL_JUMP)
// 0056daa4: MOV EAX,[0x032c1940]
//   XREF to: 032c1940 (READ)
// 0056daa9: MOV dword ptr [EAX*0x4 + 0x32c1944],EBX
//   XREF to: 032c1944 (WRITE)
// 0056dab0: LEA EBX,[EAX + 0x1]
// 0056dab3: MOV dword ptr [0x032c1940],EBX
//   XREF to: 032c1940 (WRITE)
// 0056dab9: JMP 0x0056d745
//   XREF to: 0056d745 (UNCONDITIONAL_JUMP)
// 0056dabe: FLD float ptr [EDX + 0x11c4]
//   Label: LAB_0056dabe
// 0056dac4: FADD float ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0056dac7: FSTP float ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0056daca: FLD float ptr [EDX + 0x11c8]
// 0056dad0: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0xb4] (READ)
// 0056dad4: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xb4] (WRITE)
// 0056dad8: FLD float ptr [EDX + 0x11cc]
// 0056dade: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xb0] (READ)
// 0056dae2: INC ESI
// 0056dae3: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xb0] (WRITE)
// 0056dae7: JMP 0x0056d952
//   XREF to: 0056d952 (UNCONDITIONAL_JUMP)
// 0056daec: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_0056daec
//   XREF to: Stack[-0x30] (READ)
// 0056daf3: MOV ECX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0056daf9: SAR EAX,0x1
// 0056dafb: ADD EAX,ECX
// 0056dafd: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0056db01: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x40] (READ)
// 0056db05: FMUL float ptr [EDX + 0x11dc]
// 0056db0b: FLD1
// 0056db0d: FSUBRP
// 0056db0f: FLD ST0
// 0056db11: FMUL float ptr [0x00645e1b]
//   XREF to: 00645e1b (READ)
// 0056db17: FST ST1
// 0056db19: FMUL float ptr [EDX + 0x11c4]
// 0056db1f: FLD double ptr [0x00645e23]
//   XREF to: 00645e23 (READ)
// 0056db25: FXCH
// 0056db27: FMUL ST1
// 0056db29: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x88] (READ)
// 0056db2d: FXCH
// 0056db2f: FADD ST0,ST1
// 0056db31: FLD ST3
// 0056db33: FXCH
// 0056db35: FSTP ST2
// 0056db37: FXCH
// 0056db39: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x88] (WRITE)
// 0056db3d: FMUL float ptr [EDX + 0x11c8]
// 0056db43: FMUL ST1
// 0056db45: FADD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x84] (READ)
// 0056db49: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x84] (WRITE)
// 0056db4d: FXCH
// 0056db4f: FMUL float ptr [EDX + 0x11cc]
// 0056db55: FMULP
// 0056db57: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x80] (READ)
// 0056db5b: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x80] (WRITE)
// 0056db5f: JMP 0x0056d952
//   XREF to: 0056d952 (UNCONDITIONAL_JUMP)
// 0056db64: MOV ECX,0xaaaa
//   Label: LAB_0056db64
// 0056db69: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 0056db6d: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x74] (WRITE)
// 0056db71: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x7c] (WRITE)
// 0056db75: JMP 0x0056d98d
//   XREF to: 0056d98d (UNCONDITIONAL_JUMP)
