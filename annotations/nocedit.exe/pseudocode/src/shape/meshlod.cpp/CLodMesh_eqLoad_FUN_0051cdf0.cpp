// Name: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
// Address Range: [[0051cdf0, 0051d0d5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_005173f0 (005173f0) at 005174ea [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b8a0 (0051b8a0) at 0051b903 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00637fd4
//   TerminatedCString s_shape_meshlod_cpp_00637fd8
//   TerminatedCString s_shape_meshlod_cpp_00637fed
//   TerminatedCString s_Out_of_memory_00638002
//   TerminatedCString s_d_d_lf_f_00638011
//   TerminatedCString s_shape_meshlod_cpp_0063801f
//   TerminatedCString s_LodMesh_eqLoad_file_is_c_00638034
//   TerminatedCString s_shape_meshlod_cpp_00638057
//   TerminatedCString s_LodMesh_eqLoad_EQ_is_not_0063806c
//   TerminatedCString s_shape_meshlod_cpp_00638098
//   double DOUBLE_006380ad = 0.950000000000000
//   undefined4 DAT_00661388
//   undefined4 DAT_0066138c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_meshlod.cpp_CLodMesh_FUN_00516000
//   shape_meshlod.cpp_CLodMesh_FUN_00519710

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr)

{
  SLodEdge *pSVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  FILE *in_stack_00000008;
  SIZE_T in_stack_ffffffcc;
  double dVar6;
  void *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  int iVar7;
  
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&stack0xffffffc8);
  pvVar2 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (in_stack_ffffffcc,0xf0,"..\\shape\\meshlod.cpp",0x13e4);
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x13e5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  if (pvVar2 != (void *)this_ptr->edge_count) {
    iStack_14 = 0;
  }
  local_18 = 0;
  if (0 < (int)pvVar2) {
    local_20 = (int)local_28 + 4;
    dVar6 = (double)CONCAT44(DAT_0066138c,DAT_00661388) * DOUBLE_006380ad;
    local_1c = (int)local_28 + 8;
    iVar7 = 0;
    do {
      piVar3 = (int *)((int)local_28 + iVar7);
      iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000008,"%d,%d,%lf,%f\n",in_stack_00000008,"%d,%d,%lf,%f\n"
                         ,piVar3,local_20,local_1c);
      if (*(double *)(iVar7 + 8) <= dVar6) {
LAB_0051d075:
        if (iVar4 != 4) {
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          g_CurrentLineNumber = 0x13fa;
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - file is corrupt.");
        }
      }
      else {
        *(undefined4 *)(iVar7 + 8) = DAT_00661388;
        *(undefined4 *)(iVar7 + 0xc) = DAT_0066138c;
        *(undefined4 *)(iVar7 + 0x10) = 0;
        if (iVar4 != 3) goto LAB_0051d075;
        iVar4 = 1;
        do {
          iVar5 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
          if (iVar5 < 0) break;
        } while ((iVar5 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
      }
      if (iStack_14 != 0) {
        if (*(int *)(this_ptr->edges_ptr->field2_0x8 + iVar7 + -8) != *piVar3) {
          iStack_14 = 0;
        }
        if (piVar3[1] != *(int *)(this_ptr->edges_ptr->field2_0x8 + iVar7 + -4)) {
          iStack_14 = 0;
        }
      }
      local_20 = local_20 + 0xf0;
      local_1c = local_1c + 0xf0;
      iVar7 = iVar7 + 0xf0;
      local_18 = local_18 + 1;
    } while (local_18 < (int)pvVar2);
  }
  if (iStack_14 == 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1419;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - EQ is not not up to date.");
    shape_meshlod_cpp_CLodMesh_FUN_00519710(this_ptr);
  }
  else {
    iVar7 = 0;
    pvVar2 = local_28;
    if (0 < this_ptr->edge_count) {
      do {
        pSVar1 = this_ptr->edges_ptr;
        *(undefined4 *)pSVar1[iVar7].field2_0x8 = *(undefined4 *)((int)pvVar2 + 8);
        *(undefined4 *)(pSVar1[iVar7].field2_0x8 + 4) = *(undefined4 *)((int)pvVar2 + 0xc);
        *(undefined4 *)(this_ptr->edges_ptr[iVar7].field2_0x8 + 8) =
             *(undefined4 *)((int)pvVar2 + 0x10);
        pSVar1 = this_ptr->edges_ptr + iVar7;
        pSVar1->field4_0x18[8] = '\0';
        pSVar1->field4_0x18[9] = '\0';
        pSVar1->field4_0x18[10] = '\0';
        pSVar1->field4_0x18[0xb] = '\0';
        iVar7 = iVar7 + 1;
        pvVar2 = (void *)((int)pvVar2 + 0xf0);
      } while (iVar7 < this_ptr->edge_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->edge_count) {
      do {
        shape_meshlod_cpp_CLodMesh_FUN_00516000(this_ptr);
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->edge_count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\meshlod.cpp",0x141f);
  return;
}


// Assembly code:
// 0051cdf0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// 0051cdf1: PUSH ESI
// 0051cdf2: PUSH EDI
// 0051cdf3: PUSH EBP
// 0051cdf4: MOV EBP,ESP
// 0051cdf6: SUB ESP,0x2c
// 0051cdf9: AND ESP,0xfffffff8
// 0051cdfc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051cdff: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 0051ce03: PUSH EAX
// 0051ce04: PUSH 0x637fd4
//   XREF to: 00637fd4 (DATA)
// 0051ce09: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051ce0c: MOV EDX,0x1
// 0051ce11: PUSH ECX
// 0051ce12: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0051ce16: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051ce1b: ADD ESP,0xc
// 0051ce1e: PUSH 0x13e4
// 0051ce23: PUSH 0x637fd8
//   XREF to: 00637fd8 (DATA)
// 0051ce28: PUSH 0xf0
// 0051ce2d: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0051ce31: PUSH EBX
// 0051ce32: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 0051ce37: ADD ESP,0x10
// 0051ce3a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0051ce3e: TEST EAX,EAX
// 0051ce40: JZ 0x0051d04e
//   XREF to: 0051d04e (CONDITIONAL_JUMP)
// 0051ce46: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0051ce46
//   XREF to: Stack[-0x38] (READ)
// 0051ce4a: CMP EAX,dword ptr [EDI + 0x44]
// 0051ce4d: JZ 0x0051ce55
//   XREF to: 0051ce55 (CONDITIONAL_JUMP)
// 0051ce4f: XOR ECX,ECX
// 0051ce51: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0051ce55: XOR EBX,EBX
//   Label: LAB_0051ce55
// 0051ce57: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0051ce5b: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0051ce5f: TEST ESI,ESI
// 0051ce61: JLE 0x0051cfb1
//   XREF to: 0051cfb1 (CONDITIONAL_JUMP)
// 0051ce67: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0051ce6b: FLD double ptr [0x00661388]
//   XREF to: 00661388 (READ)
// 0051ce71: ADD EAX,0x4
// 0051ce74: FMUL double ptr [0x006380ad]
//   XREF to: 006380ad (READ)
// 0051ce7a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051ce7e: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0051ce82: ADD EAX,0x8
// 0051ce85: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0051ce89: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0051ce8d: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051ce91: ADD EAX,0x10
// 0051ce94: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0051ce97: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0051ce9b: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0051ce9b
//   XREF to: Stack[-0x34] (READ)
// 0051ce9f: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0051cea3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0051cea7: ADD EAX,EBX
// 0051cea9: PUSH ESI
// 0051ceaa: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051ceae: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x28] (READ)
// 0051ceb2: PUSH EAX
// 0051ceb3: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0051ceb7: PUSH EDX
// 0051ceb8: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 0051cebc: PUSH ECX
// 0051cebd: PUSH 0x638011
//   XREF to: 00638011 (DATA)
// 0051cec2: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051cec5: PUSH EBX
// 0051cec6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051cecb: MOV EBX,EAX
// 0051cecd: ADD ESP,0x18
// 0051ced0: MOV EDX,EAX
// 0051ced2: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0051ced6: FLD double ptr [EAX + 0x8]
// 0051ced9: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0051cedc: FNSTSW AX
// 0051cede: SAHF
// 0051cedf: JBE 0x0051d075
//   XREF to: 0051d075 (CONDITIONAL_JUMP)
// 0051cee5: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0051cee9: MOV ECX,dword ptr [0x00661388]
//   XREF to: 00661388 (READ)
// 0051ceef: MOV dword ptr [EAX + 0x8],ECX
// 0051cef2: MOV ECX,dword ptr [0x0066138c]
//   XREF to: 0066138c (READ)
// 0051cef8: MOV dword ptr [EAX + 0xc],ECX
// 0051cefb: MOV dword ptr [EAX + 0x10],0x0
// 0051cf02: CMP EBX,0x3
// 0051cf05: JNZ 0x0051d075
//   XREF to: 0051d075 (CONDITIONAL_JUMP)
// 0051cf0b: MOV EBX,0x1
// 0051cf10: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051cf13: PUSH ESI
//   Label: LAB_0051cf13
// 0051cf14: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051cf19: ADD ESP,0x4
// 0051cf1c: TEST EAX,EAX
// 0051cf1e: JL 0x0051cf2a
//   XREF to: 0051cf2a (CONDITIONAL_JUMP)
// 0051cf20: CMP EAX,0xa
// 0051cf23: JNZ 0x0051cf13
//   XREF to: 0051cf13 (CONDITIONAL_JUMP)
// 0051cf25: DEC EBX
// 0051cf26: TEST EBX,EBX
// 0051cf28: JG 0x0051cf13
//   XREF to: 0051cf13 (CONDITIONAL_JUMP)
// 0051cf2a: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_0051cf2a
//   XREF to: Stack[-0x20] (READ)
// 0051cf2f: JZ 0x0051cf65
//   XREF to: 0051cf65 (CONDITIONAL_JUMP)
// 0051cf31: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0051cf35: MOV EAX,dword ptr [EDI + 0x48]
// 0051cf38: ADD EAX,EDX
// 0051cf3a: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0051cf3e: MOV EAX,dword ptr [EAX]
// 0051cf40: CMP EAX,dword ptr [EDX]
// 0051cf42: JZ 0x0051cf4a
//   XREF to: 0051cf4a (CONDITIONAL_JUMP)
// 0051cf44: XOR EBX,EBX
// 0051cf46: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0051cf4a: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_0051cf4a
//   XREF to: Stack[-0x1c] (READ)
// 0051cf4e: MOV EAX,dword ptr [EDI + 0x48]
// 0051cf51: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0051cf55: ADD EAX,ESI
// 0051cf57: MOV ECX,dword ptr [EDX + 0x4]
// 0051cf5a: CMP ECX,dword ptr [EAX + 0x4]
// 0051cf5d: JZ 0x0051cf65
//   XREF to: 0051cf65 (CONDITIONAL_JUMP)
// 0051cf5f: XOR EBX,EBX
// 0051cf61: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0051cf65: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0051cf65
//   XREF to: Stack[-0x2c] (READ)
// 0051cf69: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0051cf6d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0051cf71: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0051cf75: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0051cf79: ADD EAX,0xf0
// 0051cf7e: ADD EDX,0xf0
// 0051cf84: ADD ECX,0xf0
// 0051cf8a: ADD EBX,0xf0
// 0051cf90: INC ESI
// 0051cf91: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051cf95: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0051cf99: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0051cf9d: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051cfa1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0051cfa5: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0051cfa9: CMP ESI,EDX
// 0051cfab: JL 0x0051ce9b
//   XREF to: 0051ce9b (CONDITIONAL_JUMP)
// 0051cfb1: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_0051cfb1
//   XREF to: Stack[-0x20] (READ)
// 0051cfb6: JZ 0x0051d0a5
//   XREF to: 0051d0a5 (CONDITIONAL_JUMP)
// 0051cfbc: MOV EDX,dword ptr [EDI + 0x44]
// 0051cfbf: XOR EAX,EAX
// 0051cfc1: TEST EDX,EDX
// 0051cfc3: JLE 0x0051d010
//   XREF to: 0051d010 (CONDITIONAL_JUMP)
// 0051cfc5: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0051cfc9: IMUL ESI,EAX,0xf0
//   Label: LAB_0051cfc9
// 0051cfcf: MOV EDX,dword ptr [EDI + 0x48]
// 0051cfd2: MOV ECX,dword ptr [EBX + 0x8]
// 0051cfd5: MOV dword ptr [EDX + ESI*0x1 + 0x8],ECX
// 0051cfd9: MOV ECX,dword ptr [EBX + 0xc]
// 0051cfdc: MOV dword ptr [EDX + ESI*0x1 + 0xc],ECX
// 0051cfe0: MOV EDX,dword ptr [EDI + 0x48]
// 0051cfe3: MOV ECX,dword ptr [EBX + 0x10]
// 0051cfe6: MOV dword ptr [EDX + ESI*0x1 + 0x10],ECX
// 0051cfea: MOV EDX,dword ptr [EDI + 0x48]
// 0051cfed: MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0
// 0051cff5: INC EAX
// 0051cff6: MOV EDX,dword ptr [EDI + 0x44]
// 0051cff9: ADD EBX,0xf0
// 0051cfff: CMP EAX,EDX
// 0051d001: JL 0x0051cfc9
//   XREF to: 0051cfc9 (CONDITIONAL_JUMP)
// 0051d003: LEA EAX,[EAX]
// 0051d009: LEA EDX,[EDX]
// 0051d00f: NOP
// 0051d010: MOV ECX,dword ptr [EDI + 0x44]
//   Label: LAB_0051d010
// 0051d013: XOR EBX,EBX
// 0051d015: TEST ECX,ECX
// 0051d017: JLE 0x0051d030
//   XREF to: 0051d030 (CONDITIONAL_JUMP)
// 0051d019: PUSH 0x1
//   Label: LAB_0051d019
// 0051d01b: PUSH EBX
// 0051d01c: PUSH EDI
// 0051d01d: CALL shape_meshlod.cpp_CLodMesh_FUN_00516000
//   XREF to: 00516000 (UNCONDITIONAL_CALL)
// 0051d022: INC EBX
// 0051d023: MOV ESI,dword ptr [EDI + 0x44]
// 0051d026: ADD ESP,0xc
// 0051d029: CMP EBX,ESI
// 0051d02b: JL 0x0051d019
//   XREF to: 0051d019 (CONDITIONAL_JUMP)
// 0051d02d: LEA EAX,[EAX]
// 0051d030: PUSH 0x141f
//   Label: LAB_0051d030
// 0051d035: PUSH 0x638098
//   XREF to: 00638098 (DATA)
// 0051d03a: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 0051d03e: PUSH ESI
// 0051d03f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0051d044: ADD ESP,0xc
// 0051d047: MOV ESP,EBP
// 0051d049: POP EBP
// 0051d04a: POP EDI
// 0051d04b: POP ESI
// 0051d04c: POP EBX
// 0051d04d: RET
// 0051d04e: MOV ESI,0x637fed
//   Label: LAB_0051d04e
//   XREF to: 00637fed (DATA)
// 0051d053: MOV EAX,0x13e5
// 0051d058: PUSH 0x638002
//   XREF to: 00638002 (DATA)
// 0051d05d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0051d063: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0051d068: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d06d: ADD ESP,0x4
// 0051d070: JMP 0x0051ce46
//   XREF to: 0051ce46 (UNCONDITIONAL_JUMP)
// 0051d075: CMP EDX,0x4
//   Label: LAB_0051d075
// 0051d078: JZ 0x0051cf2a
//   XREF to: 0051cf2a (CONDITIONAL_JUMP)
// 0051d07e: MOV ESI,0x63801f
//   XREF to: 0063801f (DATA)
// 0051d083: MOV EAX,0x13fa
// 0051d088: PUSH 0x638034
//   XREF to: 00638034 (DATA)
// 0051d08d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0051d093: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0051d098: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d09d: ADD ESP,0x4
// 0051d0a0: JMP 0x0051cf2a
//   XREF to: 0051cf2a (UNCONDITIONAL_JUMP)
// 0051d0a5: MOV EBX,0x638057
//   Label: LAB_0051d0a5
//   XREF to: 00638057 (PARAM)
// 0051d0aa: MOV ESI,0x1419
// 0051d0af: PUSH 0x63806c
//   XREF to: 0063806c (DATA)
// 0051d0b4: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0051d0ba: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0051d0c0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d0c5: ADD ESP,0x4
// 0051d0c8: PUSH EDI
// 0051d0c9: CALL shape_meshlod.cpp_CLodMesh_FUN_00519710
//   XREF to: 00519710 (UNCONDITIONAL_CALL)
// 0051d0ce: ADD ESP,0x4
// 0051d0d1: JMP 0x0051d030
//   XREF to: 0051d030 (UNCONDITIONAL_JUMP)
