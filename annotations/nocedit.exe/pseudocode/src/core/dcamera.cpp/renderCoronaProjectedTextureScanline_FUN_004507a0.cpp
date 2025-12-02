// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
// Address: 004507a0
// Address Range: [[004507a0, 004509a2]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y, int x_start, int x_end)
// Globals:
//   CVector3i[320] g_TempWorldPositionRow
//   CVector3f[76800] g_PrecomputedSurfaceNormals
//   char[241][320] g_CoronaBlurOutputBuffer
//   int g_CoronaMaxDepth
//   int g_CoronaDepthShift
//   CDemonLight* g_CurrentLightForCorona
//   undefined4 g_CoronaCameraRotationMatrix.m[0].z
//   undefined4 g_CoronaCameraRotationMatrix.m[1].z
//   undefined4 g_CoronaCameraRotationMatrix.m[2].z
//   int g_CameraDownscaleIterations
//   int[240][320] g_CoronaDepthBuffer
//   uint*[1024] g_ZBufferScanlineArray
// Function calls:
//   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl
core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
          (int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  int aiStackY_1028 [4];
  CVector3i *apCStackY_1018 [1012];
  CVector3i *in_stack_ffffffc0;
  int local_3c [3];
  CVector3i *pCStack_30;
  CVector3i *apCStack_2c [3];
  uint *local_20;
  int *local_1c;
  char *local_18;
  char *pcStack_14;
  
  bVar3 = 0;
  apCStack_2c[2] = g_TempWorldPositionRow + scanline_y * 0x140 + x_start;
  local_18 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  local_1c = g_CoronaDepthBuffer[scanline_y] + x_start;
  local_20 = g_ZBufferScanlineArray[scanline_y << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (x_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  pCVar2 = g_PrecomputedSurfaceNormals + scanline_y * 0x140 + x_start;
  if (x_start < x_end) {
    do {
      if ((*local_20 < (uint)*local_1c) &&
         (0.0 <= pCVar2->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                 pCVar2->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                 pCVar2->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
        core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                  (&g_CurrentLightForCorona->base,apCStack_2c[2],in_stack_ffffffc0);
        in_stack_ffffffc0 = pCStack_30;
        local_3c[(uint)bVar3 * -2] = (int)apCStack_2c[(uint)bVar3 * -2];
        local_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             (int)apCStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        if (0 < local_3c[2]) {
          uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                        [(local_3c[0] >> 0x10) +
                         (local_3c[1] >> 0x10) * g_CurrentLightForCorona->shadow_map_width];
          if (((int)uVar1 < g_CoronaMaxDepth) && (local_3c[2] < (int)(uVar1 + 0x80))) {
            apCStack_2c[2] =
                 (CVector3i *)
                 (g_CurrentLightForCorona->teture_coord_mask &
                 local_3c[0] >> ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f));
            *pcStack_14 = *pcStack_14 +
                          (char)((int)((g_CoronaMaxDepth - uVar1) *
                                      (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                            [(int)&apCStack_2c[2]->x +
                                             ((local_3c[1] >>
                                               ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f
                                               ) & g_CurrentLightForCorona->teture_coord_mask) <<
                                             ((byte)g_CurrentLightForCorona->texture_row_shift &
                                             0x1f))]) >> ((byte)g_CoronaDepthShift & 0x1f));
          }
        }
      }
      pCVar2 = pCVar2 + 1;
      local_1c = local_1c + 1;
      apCStack_2c[2] = apCStack_2c[2] + 1;
      x_start = x_start + 1;
      local_20 = local_20 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
      local_18 = local_18 + 1;
    } while (x_start < x_end);
  }
  return;
}


// Assembly code:
// 004507a0: PUSH EBX
//   Label: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
// 004507a1: PUSH ESI
// 004507a2: PUSH EDI
// 004507a3: PUSH EBP
// 004507a4: MOV EBP,ESP
// 004507a6: SUB ESP,0x2c
// 004507a9: AND ESP,0xfffffff8
// 004507ac: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004507af: MOV EAX,EDI
// 004507b1: SHL EAX,0x8
// 004507b4: MOV ECX,0x9e4e74
//   XREF to: 009e4e74 (DATA)
// 004507b9: MOV ESI,EAX
// 004507bb: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004507be: SHL ESI,0x4
// 004507c1: LEA EBX,[EDX*0x4 + 0x0]
// 004507c8: SUB ESI,EAX
// 004507ca: LEA EAX,[EDI*0x4 + 0x0]
// 004507d1: SUB EBX,EDX
// 004507d3: ADD EAX,EDI
// 004507d5: SHL EBX,0x2
// 004507d8: SHL EAX,0x6
// 004507db: ADD ECX,ESI
// 004507dd: ADD EAX,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 004507e2: ADD ECX,EBX
// 004507e4: ADD EDX,EAX
// 004507e6: LEA EAX,[EDI*0x4 + 0x0]
// 004507ed: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004507f1: ADD EAX,EDI
// 004507f3: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004507f6: SHL EAX,0x8
// 004507f9: SHL EDX,0x2
// 004507fc: ADD EAX,0x1577728
//   XREF to: 01577728 (DATA)
// 00450801: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00450805: ADD EAX,EDX
// 00450807: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0045080d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00450811: MOV EDX,EDI
// 00450813: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00450816: SHL EDX,CL
// 00450818: SHL EAX,CL
// 0045081a: MOV EDX,dword ptr [EDX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00450821: SHL EAX,0x2
// 00450824: ADD ESI,0xac6d74
//   XREF to: 00ac6d74 (DATA)
// 0045082a: ADD EDX,EAX
// 0045082c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045082f: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00450833: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00450836: ADD EBX,ESI
// 00450838: CMP EAX,EDX
// 0045083a: JGE 0x0045099c
//   XREF to: 0045099c (CONDITIONAL_JUMP)
// 00450840: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_00450840
//   XREF to: Stack[-0x1c] (READ)
// 00450844: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00450848: MOV ESI,dword ptr [EDX]
// 0045084a: CMP ESI,dword ptr [EAX]
// 0045084c: JBE 0x0045094e
//   XREF to: 0045094e (CONDITIONAL_JUMP)
// 00450852: FLD float ptr [EBX + 0x4]
// 00450855: FMUL float ptr [0x013bc24c]
//   XREF to: 013bc24c (READ)
// 0045085b: FLD float ptr [EBX]
// 0045085d: FMUL float ptr [0x013bc240]
//   XREF to: 013bc240 (READ)
// 00450863: FADDP
// 00450865: FLD float ptr [EBX + 0x8]
// 00450868: FMUL float ptr [0x013bc258]
//   XREF to: 013bc258 (READ)
// 0045086e: FADDP
// 00450870: FLDZ
// 00450872: FCOMPP
// 00450874: FNSTSW AX
// 00450876: SAHF
// 00450877: JA 0x0045094e
//   XREF to: 0045094e (CONDITIONAL_JUMP)
// 0045087d: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00450881: PUSH EDI
// 00450882: MOV EAX,[0x013bc234]
//   XREF to: 013bc234 (READ)
// 00450887: PUSH EAX
// 00450888: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x34] (DATA)
// 0045088c: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 00450890: CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)
// 00450895: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x34] (DATA)
// 00450899: ADD ESP,0x8
// 0045089c: MOVSD ES:EDI,ESI
// 0045089d: MOVSD ES:EDI,ESI
// 0045089e: MOVSD ES:EDI,ESI
// 0045089f: CMP dword ptr [ESP + 0x8],0x0
//   XREF to: Stack[-0x38] (READ)
// 004508a4: JLE 0x0045094e
//   XREF to: 0045094e (CONDITIONAL_JUMP)
// 004508aa: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004508ae: MOV EAX,[0x013bc234]
//   XREF to: 013bc234 (READ)
// 004508b3: SAR ESI,0x10
// 004508b6: IMUL ESI,dword ptr [EAX + 0x1cc0]
// 004508bd: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004508c0: SAR EDX,0x10
// 004508c3: ADD EDX,ESI
// 004508c5: MOV ESI,dword ptr [EAX + 0x2f94]
// 004508cb: MOV DX,word ptr [ESI + EDX*0x2]
// 004508cf: MOV ESI,dword ptr [0x00c1a1fc]
//   XREF to: 00c1a1fc (READ)
// 004508d5: AND EDX,0xffff
// 004508db: CMP EDX,ESI
// 004508dd: JGE 0x0045094e
//   XREF to: 0045094e (CONDITIONAL_JUMP)
// 004508df: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004508e3: LEA ESI,[EDX + 0x80]
// 004508e9: CMP ESI,EDI
// 004508eb: JLE 0x0045094e
//   XREF to: 0045094e (CONDITIONAL_JUMP)
// 004508ed: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004508f0: MOV CL,byte ptr [EAX + 0x1cc8]
// 004508f6: SAR ESI,CL
// 004508f8: MOV ECX,dword ptr [EAX + 0x1c68]
// 004508fe: AND ECX,ESI
// 00450900: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00450904: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00450908: MOV CL,byte ptr [EAX + 0x1ccc]
// 0045090e: SAR ESI,CL
// 00450910: AND ESI,dword ptr [EAX + 0x1c68]
// 00450916: MOV CL,byte ptr [EAX + 0x1c60]
// 0045091c: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00450920: SHL ESI,CL
// 00450922: MOV EAX,dword ptr [EAX + 0x1c54]
// 00450928: ADD ESI,EDI
// 0045092a: MOVZX ESI,byte ptr [ESI + EAX*0x1]
// 0045092e: MOV EAX,[0x00c1a1fc]
//   XREF to: 00c1a1fc (READ)
// 00450933: SUB EAX,EDX
// 00450935: MOV EDX,EAX
// 00450937: IMUL EDX,ESI
// 0045093a: MOV CL,byte ptr [0x00c1a200]
//   XREF to: 00c1a200 (READ)
// 00450940: SAR EDX,CL
// 00450942: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00450946: XOR EAX,EAX
// 00450948: MOV AL,byte ptr [ECX]
// 0045094a: ADD EAX,EDX
// 0045094c: MOV byte ptr [ECX],AL
// 0045094e: MOV EAX,0x1
//   Label: LAB_0045094e
// 00450953: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00450957: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0045095b: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045095e: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450964: ADD EBX,0xc
// 00450967: ADD ESI,0x4
// 0045096a: ADD EDI,0xc
// 0045096d: INC EDX
// 0045096e: SHL EAX,CL
// 00450970: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00450974: SHL EAX,0x2
// 00450977: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0045097b: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0045097f: MOV dword ptr [EBP + 0x18],EDX
//   XREF to: Stack[0x8] (WRITE)
// 00450982: ADD ECX,EAX
// 00450984: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00450988: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0045098c: INC EAX
// 0045098d: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00450990: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00450994: CMP EDX,ECX
// 00450996: JL 0x00450840
//   XREF to: 00450840 (CONDITIONAL_JUMP)
// 0045099c: MOV ESP,EBP
//   Label: LAB_0045099c
// 0045099e: POP EBP
// 0045099f: POP EDI
// 004509a0: POP ESI
// 004509a1: POP EBX
// 004509a2: RET
