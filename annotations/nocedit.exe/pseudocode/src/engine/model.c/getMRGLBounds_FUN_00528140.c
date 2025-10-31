// Name: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
// Address Range: [[00528140, 005285ea]]
// Convention: __cdecl
// Signature: void engine_model.c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended * header, SMRGLModelBounds * output)
// Cross-references:
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004588c3 [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048ff39 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_model_c_00639bd7
//   TerminatedCString s_Unable_to_read_magnify_00639be9
//   TerminatedCString s_Unable_to_read_verticies_00639c01
//   TerminatedCString s_engine_model_c_00639c24
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_boss.c_modelStructNotSupported_FUN_0041dbe0
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_loadModelFile_FUN_00527ec0

#include "nocturne.h"

void __cdecl
engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  SMRGLHeaderExtended *header_00;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  byte bVar13;
  float10 fVar14;
  double dVar15;
  char acStack_15c [4];
  SMRGLModelBounds *in_stack_fffffeac;
  uint local_110 [4];
  uint uStack_100;
  uint auStack_fc [13];
  uint auStack_c8 [9];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  uint auStack_64 [12];
  int *local_34;
  int *local_24;
  int local_20;
  uint *local_1c;
  float local_10;
  
  bVar13 = 0;
  iVar7 = (header->base).type;
  if (iVar7 == 0x20) {
    header_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)(header + 2));
    acStack_15c[0] = 'r';
    acStack_15c[1] = -0x7b;
    acStack_15c[2] = 'R';
    acStack_15c[3] = '\0';
    engine_model_c_getMRGLBounds_FUN_00528140(header_00,in_stack_fffffeac);
    puVar11 = auStack_64;
    puVar10 = &local_9c;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(header_00);
    iVar7 = 0xd;
    puVar11 = auStack_fc;
    puVar10 = &local_94;
  }
  else if (iVar7 == 0x26) {
    puVar11 = local_110;
    engine_boss_c_modelStructNotSupported_FUN_0041dbe0(header);
    iVar7 = 0xd;
    puVar10 = auStack_c8;
  }
  else {
    local_34 = &header[1].child_count;
    if ((header->base).type != 0x14) {
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x172;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to read magnify!");
    }
    iVar7 = (int)(0x7fffffff / (longlong)(header->base).count) * 2;
    if (*local_24 != 2) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_15c,"Unable to read verticies in model!");
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0x176;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffea0);
    }
    iVar6 = 0;
    iVar12 = -0x80000000;
    iVar9 = -0x80000000;
    local_1c = (uint *)0x7fffffff;
    iVar5 = 0x7fffffff;
    iVar8 = 0x7fffffff;
    local_20 = -0x80000000;
    local_10 = 0.0;
    if (0 < local_24[2]) {
      do {
        if (iVar9 < *unaff_ESI) {
          iVar9 = *unaff_ESI;
        }
        if (iVar12 < unaff_ESI[1]) {
          iVar12 = unaff_ESI[1];
        }
        if (local_20 < unaff_ESI[2]) {
          local_20 = unaff_ESI[2];
        }
        if (*unaff_ESI < iVar8) {
          iVar8 = *unaff_ESI;
        }
        if (unaff_ESI[1] < iVar5) {
          iVar5 = unaff_ESI[1];
        }
        if (unaff_ESI[2] < (int)local_1c) {
          local_1c = (uint *)unaff_ESI[2];
        }
        iVar1 = *unaff_ESI;
        unaff_ESI = unaff_ESI + 3;
        iVar6 = iVar6 + 1;
        local_10 = (float)iVar1 + local_10;
      } while (iVar6 < local_24[2]);
    }
    uVar3 = (uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
            (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10;
    local_94 = (uint)((longlong)iVar7 * (longlong)iVar12) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar12) >> 0x20) << 0x10;
    local_90 = (uint)((longlong)iVar7 * (longlong)local_20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)local_20) >> 0x20) << 0x10;
    uVar4 = (uint)((longlong)iVar7 * (longlong)iVar8) >> 0x10 |
            (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20) << 0x10;
    local_a0 = (uint)((longlong)iVar7 * (longlong)iVar5) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar5) >> 0x20) << 0x10;
    iVar5 = (int)((ulonglong)((longlong)iVar7 * (longlong)(int)local_1c) >> 0x20);
    local_9c = (uint)((longlong)iVar7 * (longlong)(int)local_1c) >> 0x10 | iVar5 << 0x10;
    local_10 = local_10 * (1.0 / (float)local_24[2]);
    fVar14 = (float10)local_10;
    local_a4 = uVar4;
    local_98 = uVar3;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar5,iVar7));
    lVar2 = (longlong)SUB84(dVar15,0) * (longlong)(int)ROUND(fVar14);
    iVar7 = (int)((ulonglong)lVar2 >> 0x20);
    local_88 = (uint)lVar2 >> 0x10 | iVar7 << 0x10;
    fVar14 = (float10)local_10;
    builtin_strncpy(acStack_15c,"R",4);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar7,local_88));
    iVar7 = (int)((ulonglong)((longlong)local_20 * (longlong)(int)ROUND(fVar14)) >> 0x20);
    local_80 = (uint)((longlong)local_20 * (longlong)(int)ROUND(fVar14)) >> 0x10 | iVar7 << 0x10;
    fVar14 = (float10)local_10;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar7,local_80));
    local_78 = (uint)((longlong)(int)local_1c * (longlong)(int)ROUND(fVar14)) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_1c * (longlong)(int)ROUND(fVar14)) >> 0x20) <<
               0x10;
    iStack_70 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = (int)uVar4 >> 0x1f;
    if (iStack_70 < (int)((uVar4 ^ uVar3) - uVar3)) {
      iStack_70 = (uVar4 ^ uVar3) - uVar3;
    }
    iStack_6c = (local_88 ^ (int)local_88 >> 0x1f) - ((int)local_88 >> 0x1f);
    uVar3 = (int)local_94 >> 0x1f;
    if (iStack_6c < (int)((local_94 ^ uVar3) - uVar3)) {
      iStack_6c = (local_94 ^ uVar3) - uVar3;
    }
    iStack_68 = (local_84 ^ (int)local_84 >> 0x1f) - ((int)local_84 >> 0x1f);
    uVar3 = (int)local_90 >> 0x1f;
    if (iStack_68 < (int)((local_90 ^ uVar3) - uVar3)) {
      iStack_68 = (local_90 ^ uVar3) - uVar3;
    }
    fVar14 = SQRT((float10)iStack_68 * (float10)iStack_68 +
                  (float10)iStack_6c * (float10)iStack_6c + (float10)iStack_70 * (float10)iStack_70)
    ;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar3,iStack_68));
    iStack_70 = (int)ROUND(fVar14);
    iVar7 = extraout_ECX;
    puVar10 = &local_98;
    puVar11 = &uStack_100;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
  }
  puVar11 = auStack_fc;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *local_1c = *puVar11;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    local_1c = local_1c + (uint)bVar13 * -2 + 1;
  }
  return;
}


// Assembly code:
// 00528140: PUSH EBX
//   Label: engine_model.c_getMRGLBounds_FUN_00528140
// 00528141: PUSH EDI
// 00528142: PUSH EBP
// 00528143: SUB ESP,0x154
// 00528149: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 00528150: MOV dword ptr [ESP + 0x130],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00528157: MOV EDX,dword ptr [EAX]
// 00528159: MOV EBX,EAX
// 0052815b: CMP EDX,0x20
// 0052815e: JZ 0x00528550
//   XREF to: 00528550 (CONDITIONAL_JUMP)
// 00528164: CMP EDX,0x26
// 00528167: JZ 0x0052859e
//   XREF to: 0052859e (CONDITIONAL_JUMP)
// 0052816d: LEA EDX,[EAX + 0x8]
// 00528170: MOV dword ptr [ESP + 0x138],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00528177: LEA EDX,[EAX + 0x14]
// 0052817a: MOV ESI,dword ptr [EAX]
// 0052817c: MOV dword ptr [ESP + 0x12c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00528183: CMP ESI,0x14
// 00528186: JNZ 0x005285c3
//   XREF to: 005285c3 (CONDITIONAL_JUMP)
// 0052818c: MOV EAX,0x7fffffff
//   Label: LAB_0052818c
// 00528191: MOV EDX,EAX
// 00528193: MOV ECX,dword ptr [EBX + 0x4]
// 00528196: SAR EDX,0x1f
// 00528199: IDIV ECX
// 0052819b: ADD EAX,EAX
// 0052819d: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005281a4: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 005281ab: CMP dword ptr [EAX],0x2
// 005281ae: JZ 0x005281e3
//   XREF to: 005281e3 (CONDITIONAL_JUMP)
// 005281b0: PUSH 0x639c01
//   XREF to: 00639c01 (DATA)
// 005281b5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x160] (DATA)
// 005281b9: PUSH EAX
// 005281ba: MOV ESI,0x639c24
//   XREF to: 00639c24 (DATA)
// 005281bf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005281c4: ADD ESP,0x8
// 005281c7: MOV EAX,ESP
// 005281c9: MOV EDI,0x176
// 005281ce: PUSH EAX
// 005281cf: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005281d5: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005281db: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005281e0: ADD ESP,0x4
// 005281e3: MOV EBP,0x80000000
//   Label: LAB_005281e3
// 005281e8: MOV EAX,0x7fffffff
// 005281ed: XOR EDX,EDX
// 005281ef: MOV EDI,EBP
// 005281f1: MOV ESI,EBP
// 005281f3: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005281fa: MOV ECX,EAX
// 005281fc: MOV EBX,EAX
// 005281fe: MOV dword ptr [ESP + 0x13c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00528205: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 0052820c: MOV dword ptr [ESP + 0x144],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00528213: MOV dword ptr [ESP + 0x148],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052821a: MOV EBP,dword ptr [EAX + 0x8]
// 0052821d: MOV dword ptr [ESP + 0x14c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00528224: TEST EBP,EBP
// 00528226: JLE 0x005282cb
//   XREF to: 005282cb (CONDITIONAL_JUMP)
// 0052822c: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x34] (READ)
// 00528233: MOV EBP,dword ptr [EAX]
//   Label: LAB_00528233
// 00528235: CMP ESI,EBP
// 00528237: JGE 0x0052823b
//   XREF to: 0052823b (CONDITIONAL_JUMP)
// 00528239: MOV ESI,EBP
// 0052823b: MOV EBP,dword ptr [EAX + 0x4]
//   Label: LAB_0052823b
// 0052823e: CMP EDI,EBP
// 00528240: JGE 0x00528244
//   XREF to: 00528244 (CONDITIONAL_JUMP)
// 00528242: MOV EDI,EBP
// 00528244: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_00528244
// 00528247: CMP EBP,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x24] (READ)
// 0052824e: JLE 0x00528257
//   XREF to: 00528257 (CONDITIONAL_JUMP)
// 00528250: MOV dword ptr [ESP + 0x13c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00528257: MOV EBP,dword ptr [EAX]
//   Label: LAB_00528257
// 00528259: CMP EBX,EBP
// 0052825b: JLE 0x0052825f
//   XREF to: 0052825f (CONDITIONAL_JUMP)
// 0052825d: MOV EBX,EBP
// 0052825f: MOV EBP,dword ptr [EAX + 0x4]
//   Label: LAB_0052825f
// 00528262: CMP ECX,EBP
// 00528264: JLE 0x00528268
//   XREF to: 00528268 (CONDITIONAL_JUMP)
// 00528266: MOV ECX,EBP
// 00528268: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_00528268
// 0052826b: CMP EBP,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 00528272: JGE 0x0052827b
//   XREF to: 0052827b (CONDITIONAL_JUMP)
// 00528274: MOV dword ptr [ESP + 0x140],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 0052827b: FILD dword ptr [EAX]
//   Label: LAB_0052827b
// 0052827d: FILD dword ptr [EAX + 0x4]
// 00528280: FILD dword ptr [EAX + 0x8]
// 00528283: MOV EBP,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 0052828a: ADD EAX,0xc
// 0052828d: INC EDX
// 0052828e: FXCH ST2
// 00528290: FADD float ptr [ESP + 0x14c]
//   XREF to: Stack[-0x14] (READ)
// 00528297: FXCH
// 00528299: FADD float ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 005282a0: FXCH ST2
// 005282a2: FADD float ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 005282a9: FXCH
// 005282ab: FSTP float ptr [ESP + 0x14c]
//   XREF to: Stack[-0x14] (WRITE)
// 005282b2: FXCH
// 005282b4: FSTP float ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (WRITE)
// 005282bb: FSTP float ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (WRITE)
// 005282c2: CMP EDX,dword ptr [EBP + 0x8]
// 005282c5: JL 0x00528233
//   XREF to: 00528233 (CONDITIONAL_JUMP)
// 005282cb: MOV EAX,dword ptr [ESP + 0x134]
//   Label: LAB_005282cb
//   XREF to: Stack[-0x2c] (READ)
// 005282d2: MOV EDX,ESI
// 005282d4: IMUL EDX
// 005282d6: SHRD EAX,EDX,0x10
// 005282da: MOV ESI,EAX
// 005282dc: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005282e3: MOV EDX,EDI
// 005282e5: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 005282ec: IMUL EDX
// 005282ee: SHRD EAX,EDX,0x10
// 005282f2: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x24] (READ)
// 005282f9: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00528300: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 00528307: IMUL EDX
// 00528309: SHRD EAX,EDX,0x10
// 0052830d: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 00528314: MOV EDX,EBX
// 00528316: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 0052831d: IMUL EDX
// 0052831f: SHRD EAX,EDX,0x10
// 00528323: MOV EBX,EAX
// 00528325: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 0052832c: MOV EDX,ECX
// 0052832e: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 00528335: IMUL EDX
// 00528337: SHRD EAX,EDX,0x10
// 0052833b: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 00528342: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 00528349: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 00528350: IMUL EDX
// 00528352: SHRD EAX,EDX,0x10
// 00528356: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 0052835d: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 00528364: FLD float ptr [ESP + 0x14c]
//   XREF to: Stack[-0x14] (READ)
// 0052836b: FILD dword ptr [EAX + 0x8]
// 0052836e: FLD1
// 00528370: FDIVRP
// 00528372: FXCH
// 00528374: FMUL ST1
// 00528376: FLD float ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 0052837d: FMUL ST2
// 0052837f: FLD float ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 00528386: FMULP ST3
// 00528388: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 0052838f: FXCH
// 00528391: FSTP float ptr [ESP + 0x14c]
//   XREF to: Stack[-0x14] (WRITE)
// 00528398: FSTP float ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (WRITE)
// 0052839f: FLD float ptr [ESP + 0x14c]
//   XREF to: Stack[-0x14] (READ)
// 005283a6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005283ab: FISTP dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (WRITE)
// 005283b2: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (READ)
// 005283b9: FSTP float ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (WRITE)
// 005283c0: IMUL EDX
// 005283c2: SHRD EAX,EDX,0x10
// 005283c6: FLD float ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 005283cd: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005283d4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005283d9: FISTP dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (WRITE)
// 005283e0: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 005283e7: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (READ)
// 005283ee: IMUL EDX
// 005283f0: SHRD EAX,EDX,0x10
// 005283f4: FLD float ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 005283fb: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00528402: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00528407: FISTP dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (WRITE)
// 0052840e: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 00528415: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (READ)
// 0052841c: IMUL EDX
// 0052841e: SHRD EAX,EDX,0x10
// 00528422: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00528429: MOV EAX,ESI
// 0052842b: CDQ
// 0052842c: XOR EAX,EDX
// 0052842e: SUB EAX,EDX
// 00528430: MOV ECX,EAX
// 00528432: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00528439: MOV EAX,EBX
// 0052843b: CDQ
// 0052843c: XOR EAX,EDX
// 0052843e: SUB EAX,EDX
// 00528440: CMP ECX,EAX
// 00528442: JGE 0x00528452
//   XREF to: 00528452 (CONDITIONAL_JUMP)
// 00528444: MOV EAX,EBX
// 00528446: CDQ
// 00528447: XOR EAX,EDX
// 00528449: SUB EAX,EDX
// 0052844b: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00528452: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_00528452
//   XREF to: Stack[-0x98] (READ)
// 00528459: CDQ
// 0052845a: XOR EAX,EDX
// 0052845c: SUB EAX,EDX
// 0052845e: MOV ECX,EAX
// 00528460: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00528467: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0xa4] (READ)
// 0052846e: CDQ
// 0052846f: XOR EAX,EDX
// 00528471: SUB EAX,EDX
// 00528473: CMP ECX,EAX
// 00528475: JGE 0x0052848a
//   XREF to: 0052848a (CONDITIONAL_JUMP)
// 00528477: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0xa4] (READ)
// 0052847e: CDQ
// 0052847f: XOR EAX,EDX
// 00528481: SUB EAX,EDX
// 00528483: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0052848a: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_0052848a
//   XREF to: Stack[-0x94] (READ)
// 00528491: CDQ
// 00528492: XOR EAX,EDX
// 00528494: SUB EAX,EDX
// 00528496: MOV ECX,EAX
// 00528498: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0052849f: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0xa0] (READ)
// 005284a6: CDQ
// 005284a7: XOR EAX,EDX
// 005284a9: SUB EAX,EDX
// 005284ab: CMP ECX,EAX
// 005284ad: JGE 0x005284c2
//   XREF to: 005284c2 (CONDITIONAL_JUMP)
// 005284af: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0xa0] (READ)
// 005284b6: CDQ
// 005284b7: XOR EAX,EDX
// 005284b9: SUB EAX,EDX
// 005284bb: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005284c2: MOV EAX,dword ptr [ESP + 0xe0]
//   Label: LAB_005284c2
//   XREF to: Stack[-0x80] (READ)
// 005284c9: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005284d0: FILD dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (READ)
// 005284d7: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x7c] (READ)
// 005284de: FLD ST0
// 005284e0: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005284e7: FMULP
// 005284e9: FILD dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (READ)
// 005284f0: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x78] (READ)
// 005284f7: FMUL ST0
// 005284f9: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00528500: FADDP
// 00528502: FILD dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x10] (READ)
// 00528509: FMUL ST0
// 0052850b: FADDP
// 0052850d: FSQRT
// 0052850f: MOV ECX,0xd
// 00528514: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[-0x110] (DATA)
// 00528518: LEA ESI,[ESP + 0xb8]
//   XREF to: Stack[-0xa8] (DATA)
// 0052851f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00528524: FISTP dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x84] (WRITE)
// 0052852b: MOVSD.REP ES:EDI,ESI
//   Label: LAB_0052852b
// 0052852d: MOV ECX,0xd
// 00528532: MOV EDI,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x30] (READ)
// 00528539: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0x110] (DATA)
// 0052853d: MOVSD.REP ES:EDI,ESI
// 0052853f: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x30] (READ)
// 00528546: ADD ESP,0x154
// 0052854c: POP EBP
// 0052854d: POP EDI
// 0052854e: POP EBX
// 0052854f: RET
// 00528550: ADD EAX,0x18
//   Label: LAB_00528550
// 00528553: PUSH EAX
// 00528554: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 00528559: ADD ESP,0x4
// 0052855c: LEA ESI,[ESP + 0xec]
//   XREF to: Stack[-0x74] (DATA)
// 00528563: PUSH EAX
// 00528564: LEA EDI,[ESP + 0xbc]
//   XREF to: Stack[-0xa8] (DATA)
// 0052856b: MOV EBX,EAX
// 0052856d: CALL engine_model.c_getMRGLBounds_FUN_00528140
//   XREF to: 00528140 (UNCONDITIONAL_CALL)
// 00528572: ADD ESP,0x4
// 00528575: MOV ECX,0xd
// 0052857a: LEA ESI,[ESP + 0xec]
//   XREF to: Stack[-0x74] (DATA)
// 00528581: PUSH EBX
// 00528582: MOVSD.REP ES:EDI,ESI
// 00528584: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 00528589: MOV ECX,0xd
// 0052858e: LEA EDI,[ESP + 0x54]
//   XREF to: Stack[-0x110] (DATA)
// 00528592: LEA ESI,[ESP + 0xbc]
//   XREF to: Stack[-0xa8] (DATA)
// 00528599: ADD ESP,0x4
// 0052859c: JMP 0x0052852b
//   XREF to: 0052852b (UNCONDITIONAL_JUMP)
// 0052859e: PUSH EAX
//   Label: LAB_0052859e
// 0052859f: LEA ESI,[ESP + 0x88]
//   XREF to: Stack[-0xdc] (DATA)
// 005285a6: LEA EDI,[ESP + 0x54]
//   XREF to: Stack[-0x110] (DATA)
// 005285aa: CALL engine_boss.c_modelStructNotSupported_FUN_0041dbe0
//   XREF to: 0041dbe0 (UNCONDITIONAL_CALL)
// 005285af: MOV ECX,0xd
// 005285b4: LEA ESI,[ESP + 0x88]
//   XREF to: Stack[-0xdc] (DATA)
// 005285bb: ADD ESP,0x4
// 005285be: JMP 0x0052852b
//   XREF to: 0052852b (UNCONDITIONAL_JUMP)
// 005285c3: MOV EDI,0x639bd7
//   Label: LAB_005285c3
//   XREF to: 00639bd7 (DATA)
// 005285c8: MOV EBP,0x172
// 005285cd: PUSH 0x639be9
//   XREF to: 00639be9 (DATA)
// 005285d2: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005285d8: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005285de: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005285e3: ADD ESP,0x4
// 005285e6: JMP 0x0052818c
//   XREF to: 0052818c (UNCONDITIONAL_JUMP)
