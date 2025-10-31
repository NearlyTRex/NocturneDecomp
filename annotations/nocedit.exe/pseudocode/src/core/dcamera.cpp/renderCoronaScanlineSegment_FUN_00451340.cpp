// Name: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340
// Address: 00451340
// Address Range: [[00451340, 004514a4]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340(int row_index, int column_start, int column_end)
// Globals:
//   CVector3i[15360] g_PrecomputedWorldPositions
//   char[241][320] g_CoronaBlurOutputBuffer
//   int g_CameraDownscaleIterations
//   int[240][320] g_CoronaDepthBuffer
//   CDemonGlobe* g_CurrentGlobe
//   uint*[1024] g_ZBufferScanlineArray

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderCoronaScanlineSegment_FUN_00451340
          (int row_index,int column_start,int column_end)

{
  int iVar1;
  uint uVar2;
  CVector3i *pCVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int *local_18;
  uint *local_14;
  
  pCVar3 = g_PrecomputedWorldPositions + row_index * 0x140 + column_start;
  pcVar4 = g_CoronaBlurOutputBuffer[row_index] + column_start;
  local_18 = g_CoronaDepthBuffer[row_index] + column_start;
  local_14 = g_ZBufferScanlineArray[row_index << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (column_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  if (column_start < column_end) {
    do {
      if (((*local_14 < (uint)*local_18) &&
          (uVar5 = pCVar3->x - (g_CurrentGlobe->color).r,
          (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
          g_CurrentGlobe->linear_radius_scaled)) &&
         (uVar2 = pCVar3->y - (g_CurrentGlobe->color).g,
         (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) <
         g_CurrentGlobe->linear_radius_scaled)) {
        uVar6 = pCVar3->z - (g_CurrentGlobe->color).b;
        if ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
            g_CurrentGlobe->linear_radius_scaled) {
          iVar1 = uVar6 * uVar6 + uVar2 * uVar2 + uVar5 * uVar5;
          if (iVar1 < g_CurrentGlobe->quadratic_radius_scaled) {
            *pcVar4 = *pcVar4 + (char)((ulonglong)
                                       ((longlong)
                                        (g_CurrentGlobe->quadratic_radius_scaled - iVar1 >> 0x10) *
                                       (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
          }
        }
      }
      pCVar3 = pCVar3 + 1;
      pcVar4 = pcVar4 + 1;
      local_18 = local_18 + 1;
      column_start = column_start + 1;
      local_14 = local_14 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
    } while (column_start < column_end);
  }
  return;
}


// Assembly code:
// 00451340: PUSH EBX
//   Label: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340
// 00451341: PUSH ESI
// 00451342: PUSH EDI
// 00451343: PUSH EBP
// 00451344: SUB ESP,0xc
// 00451347: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0045134b: MOV EAX,ESI
// 0045134d: SHL EAX,0x8
// 00451350: MOV EDX,EAX
// 00451352: SHL EAX,0x4
// 00451355: MOV EBX,0x902f74
//   XREF to: 00902f74 (DATA)
// 0045135a: SUB EAX,EDX
// 0045135c: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00451360: ADD EBX,EAX
// 00451362: LEA EAX,[EDX*0x4 + 0x0]
// 00451369: SUB EAX,EDX
// 0045136b: SHL EAX,0x2
// 0045136e: ADD EBX,EAX
// 00451370: LEA EAX,[ESI*0x4 + 0x0]
// 00451377: ADD EAX,ESI
// 00451379: SHL EAX,0x6
// 0045137c: ADD EAX,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 00451381: LEA EBP,[EDX + EAX*0x1]
// 00451384: LEA EAX,[ESI*0x4 + 0x0]
// 0045138b: ADD EAX,ESI
// 0045138d: SHL EAX,0x8
// 00451390: SHL EDX,0x2
// 00451393: ADD EAX,0x1577728
//   XREF to: 01577728 (DATA)
// 00451398: ADD EAX,EDX
// 0045139a: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 004513a0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004513a4: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004513a8: SHL ESI,CL
// 004513aa: SHL EAX,CL
// 004513ac: MOV EDX,dword ptr [ESI*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 004513b3: SHL EAX,0x2
// 004513b6: ADD EDX,EAX
// 004513b8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004513bc: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004513c0: CMP EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004513c4: JGE 0x0045140e
//   XREF to: 0045140e (CONDITIONAL_JUMP)
// 004513c6: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004513c6
//   XREF to: Stack[-0x18] (READ)
// 004513ca: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004513ce: MOV ECX,dword ptr [EDX]
// 004513d0: CMP ECX,dword ptr [EAX]
// 004513d2: JA 0x00451416
//   XREF to: 00451416 (CONDITIONAL_JUMP)
// 004513d4: MOV EAX,0x1
//   Label: LAB_004513d4
// 004513d9: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 004513dd: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004513e1: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004513e5: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 004513eb: ADD EBX,0xc
// 004513ee: INC EBP
// 004513ef: ADD ESI,0x4
// 004513f2: INC EDI
// 004513f3: SHL EAX,CL
// 004513f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004513f9: SHL EAX,0x2
// 004513fc: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00451400: ADD ECX,EAX
// 00451402: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[0x8] (WRITE)
// 00451406: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0045140a: CMP EDI,EDX
// 0045140c: JL 0x004513c6
//   XREF to: 004513c6 (CONDITIONAL_JUMP)
// 0045140e: ADD ESP,0xc
//   Label: LAB_0045140e
// 00451411: POP EBP
// 00451412: POP EDI
// 00451413: POP ESI
// 00451414: POP EBX
// 00451415: RET
// 00451416: MOV ECX,dword ptr [0x015c4170]
//   Label: LAB_00451416
//   XREF to: 015c4170 (READ)
// 0045141c: MOV ESI,dword ptr [EBX]
// 0045141e: MOV EDI,dword ptr [ECX]
// 00451420: SUB ESI,EDI
// 00451422: MOV EAX,ESI
// 00451424: CDQ
// 00451425: XOR EAX,EDX
// 00451427: SUB EAX,EDX
// 00451429: CMP EAX,dword ptr [ECX + 0xc]
// 0045142c: JGE 0x004513d4
//   XREF to: 004513d4 (CONDITIONAL_JUMP)
// 0045142e: MOV EDI,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 00451434: MOV ECX,dword ptr [EBX + 0x4]
// 00451437: MOV EAX,dword ptr [EDI + 0x4]
// 0045143a: SUB ECX,EAX
// 0045143c: MOV EAX,ECX
// 0045143e: CDQ
// 0045143f: XOR EAX,EDX
// 00451441: SUB EAX,EDX
// 00451443: CMP EAX,dword ptr [EDI + 0xc]
// 00451446: JGE 0x004513d4
//   XREF to: 004513d4 (CONDITIONAL_JUMP)
// 00451448: MOV EAX,[0x015c4170]
//   XREF to: 015c4170 (READ)
// 0045144d: MOV EDI,dword ptr [EBX + 0x8]
// 00451450: SUB EDI,dword ptr [EAX + 0x8]
// 00451453: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 00451456: MOV EAX,EDI
// 00451458: CDQ
// 00451459: XOR EAX,EDX
// 0045145b: SUB EAX,EDX
// 0045145d: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00451460: CMP EAX,dword ptr [EDX + 0xc]
// 00451463: JGE 0x004513d4
//   XREF to: 004513d4 (CONDITIONAL_JUMP)
// 00451469: IMUL ESI,ESI
// 0045146c: MOV EDX,ECX
// 0045146e: IMUL EDX,ECX
// 00451471: MOV EAX,EDI
// 00451473: IMUL EAX,EDI
// 00451476: MOV ECX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 0045147c: ADD EDX,ESI
// 0045147e: MOV ESI,dword ptr [ECX + 0x10]
// 00451481: ADD EAX,EDX
// 00451483: CMP EAX,ESI
// 00451485: JGE 0x004513d4
//   XREF to: 004513d4 (CONDITIONAL_JUMP)
// 0045148b: MOV EDX,ESI
// 0045148d: SUB EDX,EAX
// 0045148f: MOV EAX,EDX
// 00451491: SAR EAX,0x10
// 00451494: MOV EDX,dword ptr [ECX + 0x14]
// 00451497: IMUL EDX
// 00451499: SHRD EAX,EDX,0x10
// 0045149d: ADD byte ptr [EBP],AL
// 004514a0: JMP 0x004513d4
//   XREF to: 004513d4 (UNCONDITIONAL_JUMP)
