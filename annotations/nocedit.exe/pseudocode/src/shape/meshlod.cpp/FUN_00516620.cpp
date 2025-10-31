// Name: shape_meshlod.cpp_FUN_00516620
// Address: 00516620
// Address Range: [[00516620, 00516a3c]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00516620()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516d50 (00516d50) at 00516da9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_0063753d
//   TerminatedCString s_shape_meshlod_cpp_00637552
//   TerminatedCString s_Out_of_memory_00637567
//   TerminatedCString s_Creating_quick_grid_00637576
//   TerminatedCString s_shape_meshlod_cpp_0063758a
//   TerminatedCString s_shape_meshlod_cpp_0063759f
//   TerminatedCString s_Out_of_memory_creating_g_006375b4
//   TerminatedCString s_shape_meshlod_cpp_006375d4
//   TerminatedCString s_Bug_creating_grid_006375e9
//   double DOUBLE_006375fd = 0.0625
//   double DOUBLE_00637605 = -0.510000000000000
//   double DOUBLE_0063760d = 0.0500000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00516620
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  float *pfVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = 0;
  pvVar7 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(param_5 + 0x54),0x4004,"..\\shape\\meshlod.cpp",0x43f);
  *(void **)(param_5 + 0x54) = pvVar7;
  if (pvVar7 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x440;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Creating quick-grid");
  pcVar12 = (char *)0x0;
  local_24 = 0;
  do {
    local_3c = (float)(int)pcVar12 * (float)DOUBLE_006375fd + (float)DOUBLE_00637605;
    iVar13 = 0;
    fVar1 = local_3c + (float)DOUBLE_006375fd;
    fVar2 = (float)DOUBLE_0063760d;
    local_20 = local_24;
    do {
      local_38 = (float)iVar13 * (float)DOUBLE_006375fd + (float)DOUBLE_00637605;
      local_64 = 0;
      fVar3 = local_38 + (float)DOUBLE_006375fd;
      fVar4 = (float)DOUBLE_0063760d;
      local_1c = local_20;
      do {
        local_34 = (float)local_64 * (float)DOUBLE_006375fd + (float)DOUBLE_00637605;
        fVar5 = local_34 + (float)DOUBLE_006375fd;
        fVar6 = (float)DOUBLE_0063760d;
        *(int *)(*(int *)(param_5 + 0x54) + local_1c) = local_18;
        iVar11 = 0;
        if (0 < *(int *)(param_5 + 8)) {
          unaff_EBP = local_18 * 4 + 4;
          local_14 = 0;
          do {
            iVar10 = *(int *)(param_5 + 0xc) + local_14;
            pfVar8 = (float *)(*(int *)(iVar10 + 0x10) * 0x4c4 + *(int *)(param_5 + 4));
            if (&local_48 != pfVar8) {
              local_48 = *pfVar8;
              local_44 = pfVar8[1];
              local_40 = pfVar8[2];
            }
            if (&local_54 != &local_48) {
              local_54 = local_48;
              local_50 = local_44;
              local_4c = local_40;
            }
            iVar9 = iVar10 + 4;
            do {
              pfVar8 = (float *)(*(int *)(param_5 + 4) + *(int *)(iVar9 + 0x10) * 0x4c4);
              local_30 = *pfVar8;
              local_2c = pfVar8[1];
              local_28 = pfVar8[2];
              if (local_30 < local_54) {
                local_54 = local_30;
              }
              if (local_48 < local_30) {
                local_48 = local_30;
              }
              if (local_2c < local_50) {
                local_50 = local_2c;
              }
              if (local_44 < local_2c) {
                local_44 = local_2c;
              }
              if (local_28 < local_4c) {
                local_4c = local_28;
              }
              if (local_40 < local_28) {
                local_40 = local_28;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 != iVar10 + 0xc);
            if ((((local_54 <= fVar1 + fVar2) && (local_3c <= local_48)) &&
                (local_50 <= fVar3 + fVar4)) &&
               (((local_38 <= local_44 && (local_4c <= fVar5 + fVar6)) && (local_34 <= local_40))))
            {
              pvVar7 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (*(void **)(param_5 + 0x58),unaff_EBP,"..\\shape\\meshlod.cpp",
                                  0x464);
              *(void **)(param_5 + 0x58) = pvVar7;
              if (pvVar7 == (void *)0x0) {
                pcVar12 = "Out of memory creating gridList";
                g_CurrentFilename = "..\\shape\\meshlod.cpp";
                g_CurrentLineNumber = 0x465;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory creating gridList");
              }
              *(int *)(*(int *)(param_5 + 0x58) + unaff_EBX) = iVar11;
              unaff_EBX = unaff_EBX + 4;
              unaff_EBP = unaff_EBP + 1;
            }
            iVar11 = iVar11 + 1;
            local_14 = local_14 + 0x8c;
          } while (iVar11 < *(int *)(param_5 + 8));
        }
        local_64 = local_64 + 1;
        local_1c = local_1c + 4;
      } while (local_64 < 0x10);
      iVar13 = iVar13 + 1;
      local_20 = local_20 + 0x40;
    } while (iVar13 < 0x10);
    pcVar12 = pcVar12 + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)(int)pcVar12,16.0);
    local_20 = local_20 + 0x400;
  } while ((int)pcVar12 < 0x10);
  if (local_14 < *(int *)(param_5 + 8)) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bug creating grid!");
  }
  *(int *)(*(int *)(param_5 + 0x54) + 0x4000) = unaff_EBP;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}


// Assembly code:
// 00516620: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00516620
// 00516621: PUSH ESI
// 00516622: PUSH EDI
// 00516623: PUSH EBP
// 00516624: MOV EBP,ESP
// 00516626: SUB ESP,0x68
// 00516629: AND ESP,0xfffffff8
// 0051662c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051662f: PUSH 0x43f
// 00516634: PUSH 0x63753d
//   XREF to: 0063753d (DATA)
// 00516639: PUSH 0x4004
// 0051663e: MOV ECX,dword ptr [EBX + 0x54]
// 00516641: XOR EDX,EDX
// 00516643: PUSH ECX
// 00516644: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00516648: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0051664d: ADD ESP,0x10
// 00516650: MOV dword ptr [EBX + 0x54],EAX
// 00516653: TEST EAX,EAX
// 00516655: JZ 0x0051690c
//   XREF to: 0051690c (CONDITIONAL_JUMP)
// 0051665b: PUSH 0x637576
//   Label: LAB_0051665b
//   XREF to: 00637576 (DATA)
// 00516660: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00516666: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00516667: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0051666c: ADD ESP,0x8
// 0051666f: XOR ECX,ECX
// 00516671: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x78] (DATA)
// 00516674: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00516678: MOV EAX,dword ptr [ESP]
//   Label: LAB_00516678
//   XREF to: Stack[-0x78] (DATA)
// 0051667b: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051667f: FLD double ptr [0x006375fd]
//   XREF to: 006375fd (READ)
// 00516685: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00516689: FMUL ST1
// 0051668b: XOR EDI,EDI
// 0051668d: FADD double ptr [0x00637605]
//   XREF to: 00637605 (READ)
// 00516693: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 00516697: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (WRITE)
// 0051669b: FADDP
// 0051669d: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 005166a1: FADD double ptr [0x0063760d]
//   XREF to: 0063760d (READ)
// 005166a7: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005166ab: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x6c] (WRITE)
// 005166af: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005166af
//   XREF to: Stack[-0x74] (READ)
// 005166b3: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005166b7: FLD double ptr [0x006375fd]
//   XREF to: 006375fd (READ)
// 005166bd: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005166c1: FMUL ST1
// 005166c3: XOR EAX,EAX
// 005166c5: FADD double ptr [0x00637605]
//   XREF to: 00637605 (READ)
// 005166cb: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005166cf: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 005166d3: FADDP
// 005166d5: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 005166d9: FADD double ptr [0x0063760d]
//   XREF to: 0063760d (READ)
// 005166df: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005166e3: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (WRITE)
// 005166e7: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005166e7
//   XREF to: Stack[-0x70] (READ)
// 005166eb: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005166ef: FLD double ptr [0x006375fd]
//   XREF to: 006375fd (READ)
// 005166f5: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005166f9: FMUL ST1
// 005166fb: FADD double ptr [0x00637605]
//   XREF to: 00637605 (READ)
// 00516701: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (WRITE)
// 00516705: FADDP
// 00516707: FADD double ptr [0x0063760d]
//   XREF to: 0063760d (READ)
// 0051670d: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 00516711: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x64] (WRITE)
// 00516715: MOV EAX,dword ptr [EBX + 0x54]
// 00516718: ADD EAX,EDX
// 0051671a: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 0051671e: MOV dword ptr [EAX],EDX
// 00516720: MOV ECX,dword ptr [EBX + 0x8]
// 00516723: XOR EDI,EDI
// 00516725: TEST ECX,ECX
// 00516727: JLE 0x00516862
//   XREF to: 00516862 (CONDITIONAL_JUMP)
// 0051672d: LEA EAX,[EDX*0x4 + 0x0]
// 00516734: LEA EDX,[EAX + 0x4]
// 00516737: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0051673b: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051673f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00516743: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00516743
//   XREF to: Stack[-0x20] (READ)
// 00516747: MOV ESI,dword ptr [EBX + 0xc]
// 0051674a: ADD ESI,EDX
// 0051674c: IMUL EDX,dword ptr [ESI + 0x10],0x4c4
// 00516753: MOV EAX,dword ptr [EBX + 0x4]
// 00516756: ADD EDX,EAX
// 00516758: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x54] (DATA)
// 0051675c: CMP EAX,EDX
// 0051675e: JZ 0x00516774
//   XREF to: 00516774 (CONDITIONAL_JUMP)
// 00516760: MOV EAX,dword ptr [EDX]
// 00516762: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00516766: MOV EAX,dword ptr [EDX + 0x4]
// 00516769: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0051676d: MOV EAX,dword ptr [EDX + 0x8]
// 00516770: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00516774: LEA EDX,[ESP + 0x18]
//   Label: LAB_00516774
//   XREF to: Stack[-0x60] (DATA)
// 00516778: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x54] (DATA)
// 0051677c: CMP EDX,EAX
// 0051677e: JNZ 0x00516933
//   XREF to: 00516933 (CONDITIONAL_JUMP)
// 00516784: LEA EDX,[ESI + 0x4]
//   Label: LAB_00516784
// 00516787: ADD ESI,0xc
// 0051678a: IMUL EAX,dword ptr [EDX + 0x10],0x4c4
//   Label: LAB_0051678a
// 00516791: MOV ECX,dword ptr [EBX + 0x4]
// 00516794: ADD ECX,EAX
// 00516796: MOV EAX,dword ptr [ECX]
// 00516798: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0051679c: LEA EAX,[ECX + 0x4]
// 0051679f: MOV EAX,dword ptr [EAX]
// 005167a1: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005167a5: LEA EAX,[ECX + 0x8]
// 005167a8: MOV EAX,dword ptr [EAX]
// 005167aa: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x3c] (READ)
// 005167ae: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005167b2: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (READ)
// 005167b6: FNSTSW AX
// 005167b8: SAHF
// 005167b9: JNC 0x005167c3
//   XREF to: 005167c3 (CONDITIONAL_JUMP)
// 005167bb: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x3c] (READ)
// 005167bf: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005167c3: FLD float ptr [ESP + 0x3c]
//   Label: LAB_005167c3
//   XREF to: Stack[-0x3c] (READ)
// 005167c7: FCOMP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x54] (READ)
// 005167cb: FNSTSW AX
// 005167cd: SAHF
// 005167ce: JBE 0x005167d8
//   XREF to: 005167d8 (CONDITIONAL_JUMP)
// 005167d0: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x3c] (READ)
// 005167d4: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005167d8: FLD float ptr [ESP + 0x40]
//   Label: LAB_005167d8
//   XREF to: Stack[-0x38] (READ)
// 005167dc: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 005167e0: FNSTSW AX
// 005167e2: SAHF
// 005167e3: JNC 0x005167ed
//   XREF to: 005167ed (CONDITIONAL_JUMP)
// 005167e5: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (READ)
// 005167e9: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005167ed: FLD float ptr [ESP + 0x40]
//   Label: LAB_005167ed
//   XREF to: Stack[-0x38] (READ)
// 005167f1: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 005167f5: FNSTSW AX
// 005167f7: SAHF
// 005167f8: JBE 0x00516802
//   XREF to: 00516802 (CONDITIONAL_JUMP)
// 005167fa: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (READ)
// 005167fe: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00516802: FLD float ptr [ESP + 0x44]
//   Label: LAB_00516802
//   XREF to: Stack[-0x34] (READ)
// 00516806: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 0051680a: FNSTSW AX
// 0051680c: SAHF
// 0051680d: JNC 0x00516817
//   XREF to: 00516817 (CONDITIONAL_JUMP)
// 0051680f: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (READ)
// 00516813: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00516817: FLD float ptr [ESP + 0x44]
//   Label: LAB_00516817
//   XREF to: Stack[-0x34] (READ)
// 0051681b: FCOMP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (READ)
// 0051681f: FNSTSW AX
// 00516821: SAHF
// 00516822: JBE 0x0051682c
//   XREF to: 0051682c (CONDITIONAL_JUMP)
// 00516824: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (READ)
// 00516828: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0051682c: ADD EDX,0x4
//   Label: LAB_0051682c
// 0051682f: CMP EDX,ESI
// 00516831: JNZ 0x0051678a
//   XREF to: 0051678a (CONDITIONAL_JUMP)
// 00516837: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (READ)
// 0051683b: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x6c] (READ)
// 0051683f: FNSTSW AX
// 00516841: SAHF
// 00516842: JBE 0x00516950
//   XREF to: 00516950 (CONDITIONAL_JUMP)
// 00516848: MOV ESI,dword ptr [ESP + 0x58]
//   Label: LAB_00516848
//   XREF to: Stack[-0x20] (READ)
// 0051684c: INC EDI
// 0051684d: ADD ESI,0x8c
// 00516853: MOV EAX,dword ptr [EBX + 0x8]
// 00516856: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0051685a: CMP EDI,EAX
// 0051685c: JL 0x00516743
//   XREF to: 00516743 (CONDITIONAL_JUMP)
// 00516862: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_00516862
//   XREF to: Stack[-0x70] (READ)
// 00516866: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 0051686a: INC ECX
// 0051686b: ADD EDX,0x4
// 0051686e: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x70] (WRITE)
// 00516872: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00516876: CMP ECX,0x10
// 00516879: JL 0x005166e7
//   XREF to: 005166e7 (CONDITIONAL_JUMP)
// 0051687f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x74] (READ)
// 00516883: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 00516887: INC EAX
// 00516888: ADD EDI,0x40
// 0051688b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0051688f: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00516893: CMP EAX,0x10
// 00516896: JL 0x005166af
//   XREF to: 005166af (CONDITIONAL_JUMP)
// 0051689c: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0051689f: INC ESI
// 005168a0: MOV dword ptr [ESP + 0x64],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005168a4: PUSH 0x41800000
// 005168a9: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x14] (READ)
// 005168ad: SUB ESP,0x4
// 005168b0: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005168b6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005168b9: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005168ba: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 005168bf: ADD ESP,0xc
// 005168c2: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 005168c6: ADD EDI,0x400
// 005168cc: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x78] (DATA)
// 005168cf: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005168d3: CMP ESI,0x10
// 005168d6: JL 0x00516678
//   XREF to: 00516678 (CONDITIONAL_JUMP)
// 005168dc: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 005168e0: CMP EAX,dword ptr [EBX + 0x8]
// 005168e3: JL 0x00516a15
//   XREF to: 00516a15 (CONDITIONAL_JUMP)
// 005168e9: MOV EAX,dword ptr [EBX + 0x54]
//   Label: LAB_005168e9
// 005168ec: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 005168f0: MOV dword ptr [EAX + 0x4000],EDX
// 005168f6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005168fc: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005168fd: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00516902: ADD ESP,0x4
// 00516905: MOV ESP,EBP
// 00516907: POP EBP
// 00516908: POP EDI
// 00516909: POP ESI
// 0051690a: POP EBX
// 0051690b: RET
// 0051690c: MOV EDI,0x637552
//   Label: LAB_0051690c
//   XREF to: 00637552 (DATA)
// 00516911: MOV EAX,0x440
// 00516916: PUSH 0x637567
//   XREF to: 00637567 (DATA)
// 0051691b: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00516921: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00516926: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051692b: ADD ESP,0x4
// 0051692e: JMP 0x0051665b
//   XREF to: 0051665b (UNCONDITIONAL_JUMP)
// 00516933: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00516933
//   XREF to: Stack[-0x54] (DATA)
// 00516937: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0051693b: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 0051693f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00516943: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (READ)
// 00516947: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0051694b: JMP 0x00516784
//   XREF to: 00516784 (UNCONDITIONAL_JUMP)
// 00516950: FLD float ptr [ESP + 0x24]
//   Label: LAB_00516950
//   XREF to: Stack[-0x54] (READ)
// 00516954: FCOMP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (READ)
// 00516958: FNSTSW AX
// 0051695a: SAHF
// 0051695b: JC 0x00516848
//   XREF to: 00516848 (CONDITIONAL_JUMP)
// 00516961: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 00516965: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 00516969: FNSTSW AX
// 0051696b: SAHF
// 0051696c: JA 0x00516848
//   XREF to: 00516848 (CONDITIONAL_JUMP)
// 00516972: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 00516976: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x44] (READ)
// 0051697a: FNSTSW AX
// 0051697c: SAHF
// 0051697d: JC 0x00516848
//   XREF to: 00516848 (CONDITIONAL_JUMP)
// 00516983: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 00516987: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x64] (READ)
// 0051698b: FNSTSW AX
// 0051698d: SAHF
// 0051698e: JA 0x00516848
//   XREF to: 00516848 (CONDITIONAL_JUMP)
// 00516994: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (READ)
// 00516998: FCOMP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (READ)
// 0051699c: FNSTSW AX
// 0051699e: SAHF
// 0051699f: JC 0x00516848
//   XREF to: 00516848 (CONDITIONAL_JUMP)
// 005169a5: PUSH 0x464
// 005169aa: PUSH 0x63758a
//   XREF to: 0063758a (DATA)
// 005169af: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 005169b3: PUSH ESI
// 005169b4: MOV EAX,dword ptr [EBX + 0x58]
// 005169b7: PUSH EAX
// 005169b8: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005169bd: ADD ESP,0x10
// 005169c0: MOV dword ptr [EBX + 0x58],EAX
// 005169c3: TEST EAX,EAX
// 005169c5: JNZ 0x005169ea
//   XREF to: 005169ea (CONDITIONAL_JUMP)
// 005169c7: MOV ECX,0x63759f
//   XREF to: 0063759f (DATA)
// 005169cc: MOV ESI,0x465
// 005169d1: PUSH 0x6375b4
//   XREF to: 006375b4 (DATA)
// 005169d6: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005169dc: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005169e2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005169e7: ADD ESP,0x4
// 005169ea: MOV EDX,dword ptr [ESP + 0x60]
//   Label: LAB_005169ea
//   XREF to: Stack[-0x18] (READ)
// 005169ee: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1c] (READ)
// 005169f2: MOV EAX,dword ptr [EBX + 0x58]
// 005169f5: ADD ECX,0x4
// 005169f8: ADD EAX,EDX
// 005169fa: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005169fe: MOV dword ptr [EAX],EDI
// 00516a00: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 00516a04: LEA ESI,[EDX + 0x4]
// 00516a07: INC EAX
// 00516a08: MOV dword ptr [ESP + 0x60],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00516a0c: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00516a10: JMP 0x00516848
//   XREF to: 00516848 (UNCONDITIONAL_JUMP)
// 00516a15: MOV ECX,0x6375d4
//   Label: LAB_00516a15
//   XREF to: 006375d4 (DATA)
// 00516a1a: MOV ESI,0x46d
// 00516a1f: PUSH 0x6375e9
//   XREF to: 006375e9 (DATA)
// 00516a24: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00516a2a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00516a30: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00516a35: ADD ESP,0x4
// 00516a38: JMP 0x005168e9
//   XREF to: 005168e9 (UNCONDITIONAL_JUMP)
