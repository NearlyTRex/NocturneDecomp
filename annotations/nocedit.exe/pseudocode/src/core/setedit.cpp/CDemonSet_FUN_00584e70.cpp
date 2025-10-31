// Name: core_setedit.cpp_CDemonSet_FUN_00584e70
// Address: 00584e70
// Address Range: [[00584e70, 00585197]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00584e70(CDemonSet * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 (004bd8e0) at 004bd91f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_data_s_00648ffe
//   TerminatedCString s_core_setedit_cpp_00649007
//   TerminatedCString s_Unable_to_find_ext_in_ge_0064901b
//   TerminatedCString s_zth_0064903a
//   TerminatedCString s_data_s_0064903f
//   TerminatedCString s_thm_00649048
//   TerminatedCString s_data_s_0064904d
//   TerminatedCString s_backdrop_sn_raw_00649056
//   TerminatedCString s_backdrop_sn_act_00649068
//   TerminatedCString s_backdrop_ss_raw_0064907a
//   TerminatedCString s_backdrop_ss_act_0064908c
//   TerminatedCString s_backdrop_se_raw_0064909e
//   TerminatedCString s_backdrop_se_act_006490b0
//   TerminatedCString s_backdrop_sw_raw_006490c2
//   TerminatedCString s_backdrop_sw_act_006490d4
//   TerminatedCString s_backdrop_su_raw_006490e6
//   TerminatedCString s_backdrop_su_act_006490f8
//   TerminatedCString s_backdrop_sd_raw_0064910a
//   TerminatedCString s_backdrop_sd_act_0064911c
//   TerminatedCString s_backdrop_s_cm_0064912e
//   TerminatedCString s_s_raw_0064913e
//   TerminatedCString s_rb_00649145
//   TerminatedCString s_backdrop_00649148
//   TerminatedCString s_art_00649151
//   undefined4 DAT_00649152
//   undefined4 DAT_00649153
//   undefined4 DAT_00649154
//   TerminatedCString s_backdrop_00649155
//   undefined4 s_ackdrop_00649156
//   undefined4 s_ckdrop_00649157
//   undefined4 s_kdrop_00649158
//   TerminatedCString s_core_setedit_cpp_0064915e
//   TerminatedCString s_s_s_raw_00649172
//   TerminatedCString s_s_s_act_0064917d
//   TerminatedCString s_backdrop_s_fog_00649188
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_00584e70(CDemonSet *this_ptr)

{
  char cVar1;
  FILE *file_ptr;
  int *piVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  FILE *in_stack_00000008;
  CDemonSet *in_stack_0000000c;
  int *in_stack_00000024;
  int in_stack_00000040;
  int *in_stack_00000058;
  int *apiStack_1cc [47];
  char acStack_110 [12];
  undefined1 auStack_104 [8];
  undefined1 auStack_fc [4];
  char acStack_f8 [32];
  char acStack_d8 [200];
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",this_ptr->geometry_filename);
  if (*(int *)&in_stack_00000008[0xc629]._ungotten != 0) {
    core_dmodel_cpp_writeModelDependencies_FUN_0047ee30
              (in_stack_00000008,(char *)(in_stack_00000008 + 0xc62a));
  }
  pcVar4 = acStack_110;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(in_stack_0000000c);
  pcVar3 = in_stack_0000000c->geometry_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = acStack_110 + 4;
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00584f0b;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_00584f0b;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00584f0b:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x1756;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to find ext in geomName");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".zth");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",auStack_104);
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".thm");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",auStack_fc);
  if (0 < *in_stack_00000024) {
    piVar2 = in_stack_00000024 + 1;
    do {
      if (in_stack_00000024[0x51] == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f8,"%s.raw",piVar2);
        file_ptr = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_d8,"rb")
        ;
        pcVar3 = &stack0xfffffe30;
        pcVar4 = &stack0xfffffe30;
        if (file_ptr == (FILE *)0x0) {
          pcVar4 = "art";
          do {
            cVar1 = *pcVar4;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
        }
        else {
          pcVar3 = "backdrop";
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x177e);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000008,"%s\\%s.raw\n",&stack0xfffffe30,piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s\\%s.act\n",apiStack_1cc);
        pcVar3 = "backdrop\\%s.fog\n";
      }
      else {
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sn.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sn.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%ss.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%ss.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%se.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%se.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sw.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sw.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%su.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%su.act\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sd.raw\n",piVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"backdrop\\%sd.act\n");
        pcVar3 = "backdrop\\%s.cm\n";
      }
      apiStack_1cc[0] = piVar2;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,pcVar3);
      piVar2 = piVar2 + 0x69;
      in_stack_00000040 = in_stack_00000040 + 1;
    } while (in_stack_00000040 < *in_stack_00000058);
  }
  return;
}


// Assembly code:
// 00584e70: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_FUN_00584e70
// 00584e71: PUSH ESI
// 00584e72: PUSH EDI
// 00584e73: PUSH EBP
// 00584e74: SUB ESP,0x208
// 00584e7a: MOV EBP,dword ptr [ESP + 0x220]
//   XREF to: Stack[0x8] (READ)
// 00584e81: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 00584e88: ADD EDX,0x14d0f0
// 00584e8e: PUSH EDX
// 00584e8f: PUSH 0x648ffe
//   XREF to: 00648ffe (DATA)
// 00584e94: PUSH EBP
// 00584e95: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00584e9a: ADD ESP,0xc
// 00584e9d: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 00584ea4: CMP dword ptr [EDX + 0x15ac94],0x0
// 00584eab: JNZ 0x0058508b
//   XREF to: 0058508b (CONDITIONAL_JUMP)
// 00584eb1: PUSH 0x1
//   Label: LAB_00584eb1
// 00584eb3: MOV EBX,dword ptr [ESP + 0x220]
//   XREF to: Stack[0x4] (READ)
// 00584eba: PUSH EBX
// 00584ebb: LEA EDI,[ESP + 0x108]
//   XREF to: Stack[-0x118] (DATA)
// 00584ec2: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 00584ec7: ADD ESP,0x8
// 00584eca: LEA ESI,[EBX + 0x14d0f0]
// 00584ed0: MOV DL,0x2e
// 00584ed2: PUSH EDI
// 00584ed3: MOV AL,byte ptr [ESI]
//   Label: LAB_00584ed3
// 00584ed5: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x118] (DATA)
// 00584ed7: CMP AL,0x0
// 00584ed9: JZ 0x00584eeb
//   XREF to: 00584eeb (CONDITIONAL_JUMP)
// 00584edb: MOV AL,byte ptr [ESI + 0x1]
// 00584ede: ADD ESI,0x2
// 00584ee1: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x117] (WRITE)
// 00584ee4: ADD EDI,0x2
// 00584ee7: CMP AL,0x0
// 00584ee9: JNZ 0x00584ed3
//   XREF to: 00584ed3 (CONDITIONAL_JUMP)
// 00584eeb: POP EDI
//   Label: LAB_00584eeb
// 00584eec: LEA ESI,[ESP + 0x100]
//   XREF to: Stack[-0x118] (DATA)
// 00584ef3: MOV AL,byte ptr [ESI]
//   Label: LAB_00584ef3
//   XREF to: Stack[-0x118] (DATA)
// 00584ef5: CMP AL,DL
// 00584ef7: JZ 0x00584f0b
//   XREF to: 00584f0b (CONDITIONAL_JUMP)
// 00584ef9: CMP AL,0x0
// 00584efb: JZ 0x00584f09
//   XREF to: 00584f09 (CONDITIONAL_JUMP)
// 00584efd: INC ESI
// 00584efe: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x117] (DATA)
// 00584f00: CMP AL,DL
// 00584f02: JZ 0x00584f0b
//   XREF to: 00584f0b (CONDITIONAL_JUMP)
// 00584f04: INC ESI
// 00584f05: CMP AL,0x0
// 00584f07: JNZ 0x00584ef3
//   XREF to: 00584ef3 (CONDITIONAL_JUMP)
// 00584f09: SUB ESI,ESI
//   Label: LAB_00584f09
// 00584f0b: MOV EBX,ESI
//   Label: LAB_00584f0b
// 00584f0d: TEST ESI,ESI
// 00584f0f: JNZ 0x00584f34
//   XREF to: 00584f34 (CONDITIONAL_JUMP)
// 00584f11: MOV ESI,0x649007
//   XREF to: 00649007 (DATA)
// 00584f16: MOV EDI,0x1756
// 00584f1b: PUSH 0x64901b
//   XREF to: 0064901b (DATA)
// 00584f20: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00584f26: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00584f2c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00584f31: ADD ESP,0x4
// 00584f34: PUSH 0x64903a
//   Label: LAB_00584f34
//   XREF to: 0064903a (DATA)
// 00584f39: PUSH EBX
// 00584f3a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00584f3f: ADD ESP,0x8
// 00584f42: LEA EDX,[ESP + 0x100]
//   XREF to: Stack[-0x118] (DATA)
// 00584f49: PUSH EDX
// 00584f4a: PUSH 0x64903f
//   XREF to: 0064903f (DATA)
// 00584f4f: PUSH EBP
// 00584f50: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00584f55: ADD ESP,0xc
// 00584f58: PUSH 0x649048
//   XREF to: 00649048 (DATA)
// 00584f5d: PUSH EBX
// 00584f5e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00584f63: ADD ESP,0x8
// 00584f66: LEA EDX,[ESP + 0x100]
//   XREF to: Stack[-0x118] (DATA)
// 00584f6d: PUSH EDX
// 00584f6e: PUSH 0x64904d
//   XREF to: 0064904d (DATA)
// 00584f73: PUSH EBP
// 00584f74: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00584f79: ADD ESP,0xc
// 00584f7c: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 00584f83: XOR EAX,EAX
// 00584f85: MOV ECX,dword ptr [EDX]
// 00584f87: MOV dword ptr [ESP + 0x204],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00584f8e: TEST ECX,ECX
// 00584f90: JLE 0x00585080
//   XREF to: 00585080 (CONDITIONAL_JUMP)
// 00584f96: LEA EBX,[EDX + 0x4]
// 00584f99: MOV dword ptr [ESP + 0x200],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00584fa0: MOV EDX,dword ptr [ESP + 0x200]
//   Label: LAB_00584fa0
//   XREF to: Stack[-0x18] (READ)
// 00584fa7: CMP dword ptr [EDX + 0x144],0x0
// 00584fae: JNZ 0x005850a0
//   XREF to: 005850a0 (CONDITIONAL_JUMP)
// 00584fb4: PUSH EBX
// 00584fb5: PUSH 0x64913e
//   XREF to: 0064913e (DATA)
// 00584fba: LEA EDX,[ESP + 0x108]
//   XREF to: Stack[-0x118] (DATA)
// 00584fc1: PUSH EDX
// 00584fc2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00584fc7: ADD ESP,0xc
// 00584fca: PUSH 0x649145
//   XREF to: 00649145 (DATA)
// 00584fcf: LEA EDX,[ESP + 0x104]
//   XREF to: Stack[-0x118] (DATA)
// 00584fd6: PUSH EDX
// 00584fd7: PUSH 0x649148
//   XREF to: 00649148 (DATA)
// 00584fdc: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00584fe1: MOV EDX,EAX
// 00584fe3: ADD ESP,0xc
// 00584fe6: TEST EAX,EAX
// 00584fe8: JNZ 0x0058515f
//   XREF to: 0058515f (CONDITIONAL_JUMP)
// 00584fee: MOV ESI,0x649151
//   XREF to: 00649151 (DATA)
// 00584ff3: MOV EDI,ESP
// 00584ff5: PUSH EDI
// 00584ff6: MOV AL,byte ptr [ESI]
//   Label: LAB_00584ff6
//   XREF to: 00649151 (READ)
//   XREF to: 00649153 (READ)
// 00584ff8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x218] (DATA)
// 00584ffa: CMP AL,0x0
// 00584ffc: JZ 0x0058500e
//   XREF to: 0058500e (CONDITIONAL_JUMP)
// 00584ffe: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00649152 (READ)
//   XREF to: 00649154 (READ)
// 00585001: ADD ESI,0x2
// 00585004: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x217] (WRITE)
// 00585007: ADD EDI,0x2
// 0058500a: CMP AL,0x0
// 0058500c: JNZ 0x00584ff6
//   XREF to: 00584ff6 (CONDITIONAL_JUMP)
// 0058500e: POP EDI
//   Label: LAB_0058500e
// 0058500f: PUSH EBX
//   Label: LAB_0058500f
// 00585010: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x218] (DATA)
// 00585014: PUSH EDX
// 00585015: PUSH 0x649172
//   XREF to: 00649172 (DATA)
// 0058501a: PUSH EBP
// 0058501b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585020: ADD ESP,0x10
// 00585023: PUSH EBX
// 00585024: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x218] (DATA)
// 00585028: PUSH EDX
// 00585029: PUSH 0x64917d
//   XREF to: 0064917d (DATA)
// 0058502e: PUSH EBP
// 0058502f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585034: ADD ESP,0x10
// 00585037: PUSH EBX
// 00585038: PUSH 0x649188
//   XREF to: 00649188 (DATA)
// 0058503d: PUSH EBP
//   Label: LAB_0058503d
// 0058503e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585043: ADD ESP,0xc
// 00585046: MOV ESI,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x18] (READ)
// 0058504d: ADD ESI,0x1a4
// 00585053: MOV EDI,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x14] (READ)
// 0058505a: MOV dword ptr [ESP + 0x200],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00585061: MOV ESI,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 00585068: ADD EBX,0x1a4
// 0058506e: INC EDI
// 0058506f: MOV EAX,dword ptr [ESI]
// 00585071: MOV dword ptr [ESP + 0x204],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00585078: CMP EDI,EAX
// 0058507a: JL 0x00584fa0
//   XREF to: 00584fa0 (CONDITIONAL_JUMP)
// 00585080: ADD ESP,0x208
//   Label: LAB_00585080
// 00585086: POP EBP
// 00585087: POP EDI
// 00585088: POP ESI
// 00585089: POP EBX
// 0058508a: RET
// 0058508b: ADD EDX,0x15ac98
//   Label: LAB_0058508b
// 00585091: PUSH EDX
// 00585092: PUSH EBP
// 00585093: CALL core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
//   XREF to: 0047ee30 (UNCONDITIONAL_CALL)
// 00585098: ADD ESP,0x8
// 0058509b: JMP 0x00584eb1
//   XREF to: 00584eb1 (UNCONDITIONAL_JUMP)
// 005850a0: PUSH EBX
//   Label: LAB_005850a0
// 005850a1: PUSH 0x649056
//   XREF to: 00649056 (DATA)
// 005850a6: PUSH EBP
// 005850a7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005850ac: ADD ESP,0xc
// 005850af: PUSH EBX
// 005850b0: PUSH 0x649068
//   XREF to: 00649068 (DATA)
// 005850b5: PUSH EBP
// 005850b6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005850bb: ADD ESP,0xc
// 005850be: PUSH EBX
// 005850bf: PUSH 0x64907a
//   XREF to: 0064907a (DATA)
// 005850c4: PUSH EBP
// 005850c5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005850ca: ADD ESP,0xc
// 005850cd: PUSH EBX
// 005850ce: PUSH 0x64908c
//   XREF to: 0064908c (DATA)
// 005850d3: PUSH EBP
// 005850d4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005850d9: ADD ESP,0xc
// 005850dc: PUSH EBX
// 005850dd: PUSH 0x64909e
//   XREF to: 0064909e (DATA)
// 005850e2: PUSH EBP
// 005850e3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005850e8: ADD ESP,0xc
// 005850eb: PUSH EBX
// 005850ec: PUSH 0x6490b0
//   XREF to: 006490b0 (DATA)
// 005850f1: PUSH EBP
// 005850f2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005850f7: ADD ESP,0xc
// 005850fa: PUSH EBX
// 005850fb: PUSH 0x6490c2
//   XREF to: 006490c2 (DATA)
// 00585100: PUSH EBP
// 00585101: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585106: ADD ESP,0xc
// 00585109: PUSH EBX
// 0058510a: PUSH 0x6490d4
//   XREF to: 006490d4 (DATA)
// 0058510f: PUSH EBP
// 00585110: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585115: ADD ESP,0xc
// 00585118: PUSH EBX
// 00585119: PUSH 0x6490e6
//   XREF to: 006490e6 (DATA)
// 0058511e: PUSH EBP
// 0058511f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585124: ADD ESP,0xc
// 00585127: PUSH EBX
// 00585128: PUSH 0x6490f8
//   XREF to: 006490f8 (DATA)
// 0058512d: PUSH EBP
// 0058512e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585133: ADD ESP,0xc
// 00585136: PUSH EBX
// 00585137: PUSH 0x64910a
//   XREF to: 0064910a (DATA)
// 0058513c: PUSH EBP
// 0058513d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585142: ADD ESP,0xc
// 00585145: PUSH EBX
// 00585146: PUSH 0x64911c
//   XREF to: 0064911c (DATA)
// 0058514b: PUSH EBP
// 0058514c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585151: ADD ESP,0xc
// 00585154: PUSH EBX
// 00585155: PUSH 0x64912e
//   XREF to: 0064912e (DATA)
// 0058515a: JMP 0x0058503d
//   XREF to: 0058503d (UNCONDITIONAL_JUMP)
// 0058515f: MOV ESI,0x649155
//   Label: LAB_0058515f
//   XREF to: 00649155 (DATA)
// 00585164: MOV EDI,ESP
// 00585166: PUSH EDI
// 00585167: MOV AL,byte ptr [ESI]
//   Label: LAB_00585167
//   XREF to: 00649155 (READ)
//   XREF to: 00649157 (READ)
// 00585169: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x218] (DATA)
// 0058516b: CMP AL,0x0
// 0058516d: JZ 0x0058517f
//   XREF to: 0058517f (CONDITIONAL_JUMP)
// 0058516f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00649156 (READ)
//   XREF to: 00649158 (READ)
// 00585172: ADD ESI,0x2
// 00585175: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x217] (WRITE)
// 00585178: ADD EDI,0x2
// 0058517b: CMP AL,0x0
// 0058517d: JNZ 0x00585167
//   XREF to: 00585167 (CONDITIONAL_JUMP)
// 0058517f: POP EDI
//   Label: LAB_0058517f
// 00585180: PUSH 0x177e
// 00585185: PUSH 0x64915e
//   XREF to: 0064915e (DATA)
// 0058518a: PUSH EDX
// 0058518b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00585190: ADD ESP,0xc
// 00585193: JMP 0x0058500f
//   XREF to: 0058500f (UNCONDITIONAL_JUMP)
