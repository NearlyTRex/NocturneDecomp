// Name: core_dcamera.cpp_processCoronaScanline_FUN_004514b0
// Address: 004514b0
// Address Range: [[004514b0, 004517e2]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_processCoronaScanline_FUN_004514b0(int row, int x_start, int x_end, SCorona * corona_buffer)
// Globals:
//   CVector3i[15360] g_PrecomputedWorldPositions
//   int[76800] g_PrecomputedDepthBuffer
//   int g_CameraDownscaleIterations
//   int[240][320] g_CoronaDepthBuffer
//   CDemonGlobe* g_CurrentGlobe
//   int g_CoronaVisibilityEnabled
//   int g_CoronaTargetX
//   int g_CoronaTargetY
//   int g_CoronaTargetDepth
//   uint*[1024] g_ZBufferScanlineArray

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_processCoronaScanline_FUN_004514b0
          (int row,int x_start,int x_end,SCorona *corona_buffer)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *local_30;
  int *local_2c;
  uint *local_28;
  CVector3i *local_24;
  char local_14;
  
  local_24 = g_PrecomputedWorldPositions + row * 0x140 + x_start;
  local_2c = g_CoronaDepthBuffer[row] + x_start;
  local_28 = g_ZBufferScanlineArray[row << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (x_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  local_30 = corona_buffer->intensity[row] + x_start;
  if (x_start < x_end) {
    do {
      bVar1 = (byte)g_CameraDownscaleIterations;
      local_14 = '\0';
      if ((((*local_28 < (uint)*local_2c) &&
           (uVar2 = local_24->x - (g_CurrentGlobe->color).r, uVar7 = (int)uVar2 >> 0x1f,
           iVar3 = (uVar2 ^ uVar7) - uVar7, iVar3 < g_CurrentGlobe->linear_radius_scaled)) &&
          (uVar2 = local_24->y - (g_CurrentGlobe->color).g, uVar7 = (int)uVar2 >> 0x1f,
          iVar4 = (uVar2 ^ uVar7) - uVar7, iVar4 < g_CurrentGlobe->linear_radius_scaled)) &&
         ((uVar2 = local_24->z - (g_CurrentGlobe->color).b, uVar7 = (int)uVar2 >> 0x1f,
          iVar5 = (uVar2 ^ uVar7) - uVar7, iVar5 < g_CurrentGlobe->linear_radius_scaled &&
          (iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5,
          iVar3 < g_CurrentGlobe->quadratic_radius_scaled)))) {
        if (g_CoronaVisibilityEnabled != 0) {
          if (*local_28 == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = (int)(0x7fffffff / (longlong)(int)*local_28);
          }
          iVar8 = g_CoronaTargetDepth - iVar4;
          iVar9 = iVar8 >> 0x1f;
          iVar11 = x_start << 8;
          iVar5 = 0x10;
          iVar10 = row << 8;
          do {
            if (g_PrecomputedDepthBuffer[(iVar10 >> 8) * 0x140 + (iVar11 >> 8)] < iVar4 + -0x80)
            break;
            iVar5 = iVar5 + -1;
            iVar4 = iVar4 + ((int)((iVar8 + iVar9 * -0x10) - (uint)(iVar9 << 3 < 0)) >> 4);
            iVar11 = iVar11 + (g_CoronaTargetX - x_start) * 0x10;
            iVar10 = iVar10 + (g_CoronaTargetY - row) * 0x10;
          } while (0 < iVar5);
          if (iVar5 != 0) goto LAB_0045162e;
        }
        local_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - iVar3 >> 0x10) * 0x3f) /
                         (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
      }
LAB_0045162e:
      local_2c = local_2c + 1;
      local_24 = local_24 + 1;
      *local_30 = local_14;
      local_28 = local_28 + (1 << (bVar1 & 0x1f));
      x_start = x_start + 1;
      local_30 = local_30 + 1;
    } while (x_start < x_end);
  }
  iVar3 = corona_buffer->row_min_x[row];
  iVar4 = corona_buffer->row_max_x[row];
  for (pcVar6 = corona_buffer->intensity[row] + iVar3; (iVar3 < iVar4 && (*pcVar6 == '\0'));
      pcVar6 = pcVar6 + 1) {
    iVar3 = iVar3 + 1;
  }
  pcVar6 = corona_buffer->intensity[row] + iVar4;
  while ((iVar3 < iVar4 && (pcVar6 = pcVar6 + -1, *pcVar6 == '\0'))) {
    iVar4 = iVar4 + -1;
  }
  corona_buffer->row_min_x[row] = iVar3;
  corona_buffer->row_max_x[row] = iVar4;
  return;
}


// Assembly code:
// 004514b0: PUSH EBX
//   Label: core_dcamera.cpp_processCoronaScanline_FUN_004514b0
// 004514b1: PUSH ESI
// 004514b2: PUSH EDI
// 004514b3: PUSH EBP
// 004514b4: SUB ESP,0x2c
// 004514b7: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004514bb: SHL EAX,0x8
// 004514be: MOV EDX,EAX
// 004514c0: SHL EAX,0x4
// 004514c3: MOV ECX,0x902f74
//   XREF to: 00902f74 (DATA)
// 004514c8: SUB EAX,EDX
// 004514ca: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 004514ce: ADD ECX,EAX
// 004514d0: LEA EAX,[EDX*0x4 + 0x0]
// 004514d7: SUB EAX,EDX
// 004514d9: SHL EAX,0x2
// 004514dc: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004514e0: ADD ECX,EAX
// 004514e2: LEA EAX,[EDX*0x4 + 0x0]
// 004514e9: ADD EAX,EDX
// 004514eb: MOV EDX,0x1577728
//   XREF to: 01577728 (DATA)
// 004514f0: SHL EAX,0x8
// 004514f3: ADD EDX,EAX
// 004514f5: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 004514f9: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004514fd: SHL EAX,0x2
// 00451500: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00451506: ADD EDX,EAX
// 00451508: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0045150c: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00451510: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 00451514: SHL EAX,CL
// 00451516: SHL EDX,CL
// 00451518: MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0045151f: SHL EDX,0x2
// 00451522: ADD EAX,EDX
// 00451524: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00451528: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0045152c: LEA EAX,[EDX*0x4 + 0x0]
// 00451533: ADD EAX,EDX
// 00451535: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 00451539: SHL EAX,0x6
// 0045153c: ADD EDX,0x784
// 00451542: ADD EAX,EDX
// 00451544: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 00451548: ADD EDX,EAX
// 0045154a: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0045154e: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00451552: CMP EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 00451556: JGE 0x00451684
//   XREF to: 00451684 (CONDITIONAL_JUMP)
// 0045155c: XOR AH,AH
//   Label: LAB_0045155c
// 0045155e: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 00451562: MOV byte ptr [ESP + 0x28],AH
//   XREF to: Stack[-0x14] (WRITE)
// 00451566: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 0045156a: MOV ECX,dword ptr [EDX]
// 0045156c: CMP ECX,dword ptr [EAX]
// 0045156e: JBE 0x0045162e
//   XREF to: 0045162e (CONDITIONAL_JUMP)
// 00451574: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 00451578: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 0045157e: MOV EAX,dword ptr [EAX]
// 00451580: SUB EAX,dword ptr [EDX]
// 00451582: CDQ
// 00451583: XOR EAX,EDX
// 00451585: SUB EAX,EDX
// 00451587: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 0045158d: MOV ESI,dword ptr [EDX + 0xc]
// 00451590: MOV ECX,EAX
// 00451592: CMP EAX,ESI
// 00451594: JGE 0x0045162e
//   XREF to: 0045162e (CONDITIONAL_JUMP)
// 0045159a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 0045159e: MOV EDI,dword ptr [EDX + 0x4]
// 004515a1: MOV EAX,dword ptr [EAX + 0x4]
// 004515a4: SUB EAX,EDI
// 004515a6: CDQ
// 004515a7: XOR EAX,EDX
// 004515a9: SUB EAX,EDX
// 004515ab: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 004515b1: MOV EBP,dword ptr [EDX + 0xc]
// 004515b4: MOV EBX,EAX
// 004515b6: CMP EAX,EBP
// 004515b8: JGE 0x0045162e
//   XREF to: 0045162e (CONDITIONAL_JUMP)
// 004515ba: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 004515be: MOV ESI,dword ptr [EDX + 0x8]
// 004515c1: MOV EAX,dword ptr [EAX + 0x8]
// 004515c4: SUB EAX,ESI
// 004515c6: CDQ
// 004515c7: XOR EAX,EDX
// 004515c9: SUB EAX,EDX
// 004515cb: MOV EDX,dword ptr [0x015c4170]
//   XREF to: 015c4170 (READ)
// 004515d1: CMP EAX,dword ptr [EDX + 0xc]
// 004515d4: JGE 0x0045162e
//   XREF to: 0045162e (CONDITIONAL_JUMP)
// 004515d6: IMUL EBX,EBX
// 004515d9: IMUL ECX,ECX
// 004515dc: IMUL EAX,EAX
// 004515df: ADD ECX,EBX
// 004515e1: ADD ECX,EAX
// 004515e3: MOV EBP,dword ptr [EDX + 0x10]
// 004515e6: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004515ea: CMP ECX,EBP
// 004515ec: JGE 0x0045162e
//   XREF to: 0045162e (CONDITIONAL_JUMP)
// 004515ee: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004515f2: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 004515f6: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 004515fa: MOV EAX,[0x015c4174]
//   XREF to: 015c4174 (READ)
// 004515ff: MOV ECX,dword ptr [ECX]
// 00451601: TEST EAX,EAX
// 00451603: JNZ 0x00451711
//   XREF to: 00451711 (CONDITIONAL_JUMP)
// 00451609: MOV EAX,[0x015c4170]
//   Label: LAB_00451609
//   XREF to: 015c4170 (READ)
// 0045160e: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 00451612: MOV EDX,dword ptr [EAX + 0x10]
// 00451615: SUB EDX,ECX
// 00451617: SAR EDX,0x10
// 0045161a: IMUL EDX,EDX,0x3f
// 0045161d: MOV ECX,dword ptr [EAX + 0x10]
// 00451620: SAR ECX,0x10
// 00451623: MOV EAX,EDX
// 00451625: SAR EDX,0x1f
// 00451628: IDIV ECX
// 0045162a: MOV byte ptr [ESP + 0x28],AL
//   XREF to: Stack[-0x14] (WRITE)
// 0045162e: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0045162e
//   XREF to: Stack[-0x30] (READ)
// 00451632: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 00451636: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 0045163a: MOV AL,byte ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0045163e: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 00451642: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00451648: LEA EBX,[EDX + 0x1]
// 0045164b: ADD EDI,0x4
// 0045164e: ADD EBP,0xc
// 00451651: MOV byte ptr [EDX],AL
// 00451653: MOV EAX,0x1
// 00451658: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 0045165c: SHL EAX,CL
// 0045165e: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00451662: SHL EAX,0x2
// 00451665: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00451669: ADD ESI,EAX
// 0045166b: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0045166f: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00451673: INC EAX
// 00451674: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00451678: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[0x8] (WRITE)
// 0045167c: CMP EAX,EDX
// 0045167e: JL 0x0045155c
//   XREF to: 0045155c (CONDITIONAL_JUMP)
// 00451684: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_00451684
//   XREF to: Stack[0x4] (READ)
// 00451688: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 0045168c: SHL EDX,0x2
// 0045168f: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00451693: ADD EDX,ECX
// 00451695: LEA ECX,[EBX*0x4 + 0x0]
// 0045169c: ADD ECX,EBX
// 0045169e: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 004516a2: SHL ECX,0x6
// 004516a5: ADD EBX,0x784
// 004516ab: MOV EAX,dword ptr [EDX + 0x4]
// 004516ae: ADD ECX,EBX
// 004516b0: MOV EDX,dword ptr [EDX + 0x3c4]
// 004516b6: ADD ECX,EAX
// 004516b8: CMP EAX,EDX
// 004516ba: JGE 0x004516c5
//   XREF to: 004516c5 (CONDITIONAL_JUMP)
// 004516bc: CMP byte ptr [ECX],0x0
//   Label: LAB_004516bc
// 004516bf: JZ 0x004517d4
//   XREF to: 004517d4 (CONDITIONAL_JUMP)
// 004516c5: MOV EBX,dword ptr [ESP + 0x40]
//   Label: LAB_004516c5
//   XREF to: Stack[0x4] (READ)
// 004516c9: LEA ECX,[EBX*0x4 + 0x0]
// 004516d0: ADD ECX,EBX
// 004516d2: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 004516d6: SHL ECX,0x6
// 004516d9: ADD EBX,0x784
// 004516df: ADD ECX,EBX
// 004516e1: ADD ECX,EDX
// 004516e3: DEC ECX
// 004516e4: CMP EDX,EAX
// 004516e6: JLE 0x004516f3
//   XREF to: 004516f3 (CONDITIONAL_JUMP)
// 004516e8: CMP byte ptr [ECX],0x0
//   Label: LAB_004516e8
// 004516eb: JNZ 0x004516f3
//   XREF to: 004516f3 (CONDITIONAL_JUMP)
// 004516ed: DEC EDX
// 004516ee: DEC ECX
// 004516ef: CMP EDX,EAX
// 004516f1: JG 0x004516e8
//   XREF to: 004516e8 (CONDITIONAL_JUMP)
// 004516f3: MOV ECX,dword ptr [ESP + 0x40]
//   Label: LAB_004516f3
//   XREF to: Stack[0x4] (READ)
// 004516f7: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 004516fb: SHL ECX,0x2
// 004516fe: ADD ECX,EBX
// 00451700: MOV dword ptr [ECX + 0x4],EAX
// 00451703: MOV dword ptr [ECX + 0x3c4],EDX
// 00451709: ADD ESP,0x2c
// 0045170c: POP EBP
// 0045170d: POP EDI
// 0045170e: POP ESI
// 0045170f: POP EBX
// 00451710: RET
// 00451711: MOV EBP,dword ptr [0x015c4178]
//   Label: LAB_00451711
//   XREF to: 015c4178 (READ)
// 00451717: MOV EAX,[0x015c417c]
//   XREF to: 015c417c (READ)
// 0045171c: MOV EDI,dword ptr [0x015c4180]
//   XREF to: 015c4180 (READ)
// 00451722: XOR EDX,EDX
// 00451724: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 00451727: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0045172b: TEST ECX,ECX
// 0045172d: JZ 0x004517a1
//   XREF to: 004517a1 (CONDITIONAL_JUMP)
// 0045172f: MOV EAX,0x7fffffff
// 00451734: MOV EDX,EAX
// 00451736: SAR EDX,0x1f
// 00451739: IDIV ECX
// 0045173b: MOV ECX,EAX
// 0045173d: MOV EAX,EBP
//   Label: LAB_0045173d
// 0045173f: SUB EAX,EBX
// 00451741: SHL EAX,0x4
// 00451744: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00451748: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0045174b: SUB EAX,ESI
// 0045174d: MOV EDX,EDI
// 0045174f: SHL EAX,0x4
// 00451752: SUB EDX,ECX
// 00451754: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00451758: MOV EAX,EDX
// 0045175a: SAR EDX,0x1f
// 0045175d: SHL EDX,0x4
// 00451760: SBB EAX,EDX
// 00451762: SAR EAX,0x4
// 00451765: SHL EBX,0x8
// 00451768: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045176c: MOV EDX,ESI
// 0045176e: MOV EAX,0x10
// 00451773: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 00451777: SHL EDX,0x8
// 0045177a: MOV ESI,EDX
//   Label: LAB_0045177a
// 0045177c: SAR ESI,0x8
// 0045177f: IMUL EDI,ESI,0x500
// 00451785: MOV ESI,EBX
// 00451787: SAR ESI,0x8
// 0045178a: MOV ESI,dword ptr [EDI + ESI*0x4 + 0xbce6f8]
//   XREF to: 00bce6f8 (DATA)
// 00451791: LEA EDI,[ECX + -0x80]
// 00451794: CMP ESI,EDI
// 00451796: JGE 0x004517a8
//   XREF to: 004517a8 (CONDITIONAL_JUMP)
// 00451798: TEST EAX,EAX
// 0045179a: JNZ 0x004517c4
//   XREF to: 004517c4 (CONDITIONAL_JUMP)
// 0045179c: JMP 0x00451609
//   XREF to: 00451609 (UNCONDITIONAL_JUMP)
// 004517a1: MOV ECX,0x7fffffff
//   Label: LAB_004517a1
// 004517a6: JMP 0x0045173d
//   XREF to: 0045173d (UNCONDITIONAL_JUMP)
// 004517a8: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_004517a8
//   XREF to: Stack[-0x1c] (READ)
// 004517ac: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 004517b0: DEC EAX
// 004517b1: ADD ECX,EBP
// 004517b3: ADD EBX,ESI
// 004517b5: ADD EDX,EDI
// 004517b7: TEST EAX,EAX
// 004517b9: JG 0x0045177a
//   XREF to: 0045177a (CONDITIONAL_JUMP)
// 004517bb: TEST EAX,EAX
// 004517bd: JNZ 0x004517c4
//   XREF to: 004517c4 (CONDITIONAL_JUMP)
// 004517bf: JMP 0x00451609
//   XREF to: 00451609 (UNCONDITIONAL_JUMP)
// 004517c4: CMP dword ptr [ESP + 0x4],0x0
//   Label: LAB_004517c4
//   XREF to: Stack[-0x38] (READ)
// 004517c9: JNZ 0x00451609
//   XREF to: 00451609 (CONDITIONAL_JUMP)
// 004517cf: JMP 0x0045162e
//   XREF to: 0045162e (UNCONDITIONAL_JUMP)
// 004517d4: INC EAX
//   Label: LAB_004517d4
// 004517d5: INC ECX
// 004517d6: CMP EAX,EDX
// 004517d8: JL 0x004516bc
//   XREF to: 004516bc (CONDITIONAL_JUMP)
// 004517de: JMP 0x004516c5
//   XREF to: 004516c5 (UNCONDITIONAL_JUMP)
