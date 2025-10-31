// Name: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
// Address: 00476f20
// Address Range: [[00476f20, 00477109]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel * this_ptr, FILE * file)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476f0d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f37f
//   TerminatedCString s_Error_reading_keyframed__0061f392
//   TerminatedCString s_core_dmodel_cpp_0061f3b5
//   TerminatedCString s_KFM_file_is_invalid_vers_0061f3c8
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel *this_ptr,FILE *file)

{
  SIZE_T SVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar4;
  FILE *size;
  FILE *vertex_count;
  char *poly_count;
  char *in_stack_ffffffd4;
  char *local_28;
  int local_24;
  undefined4 local_20 [4];
  
  vertex_count = (FILE *)&DAT_00000001;
  size = (FILE *)0x18;
  poly_count = (char *)file;
  SVar1 = crt_stdio_c_fread_FUN_005fd990(&stack0xffffffd4,0x18,1,file);
  if (SVar1 != 1) goto LAB_00476f99;
  do {
    if (((int)local_28 < 3) || (4 < (int)local_28)) {
      poly_count = "KFM file is invalid version %d";
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0xed;
      in_stack_ffffffd4 = local_28;
      core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is invalid version %d");
    }
    local_20[0] = 0;
    if (((int)size < 4) || (SVar1 = crt_stdio_c_fread_FUN_005fd990(local_20,4,1,file), SVar1 == 1))
    {
      core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
                (this_ptr,(int)vertex_count,(int)poly_count,(int)in_stack_ffffffd4,(int)local_28,
                 local_24);
      size = file;
      pFVar2 = (FILE *)crt_stdio_c_fread_FUN_005fd990
                                 (this_ptr->vertex_list,
                                  this_ptr->vertex_count * this_ptr->frame_count * 0xc,1,file);
      if (pFVar2 == (FILE *)&DAT_00000001) {
        if (this_ptr->poly_count < 1) {
LAB_0047706d:
          if (0 < this_ptr->texture_count) {
            crt_memory_c_memset_FUN_005fde40(this_ptr->texture_list,0,0x5460);
            for (iVar4 = 0; iVar4 < this_ptr->texture_count; iVar4 = iVar4 + 1) {
              vertex_count = (FILE *)&DAT_00000001;
              size = (FILE *)0x18;
              SVar1 = crt_stdio_c_fread_FUN_005fd990(this_ptr->texture_list + iVar4,0x18,1,file);
              if (SVar1 != 1) goto LAB_00476f99;
            }
          }
          vertex_count = (FILE *)&DAT_00000001;
          size = (FILE *)(this_ptr->part_count << 3);
          SVar1 = crt_stdio_c_fread_FUN_005fd990(this_ptr->part_list,(SIZE_T)size,1,file);
          if (SVar1 == 1) {
            if (unaff_EBP != 0) {
              core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
              return;
            }
            return;
          }
        }
        else {
          vertex_count = file;
          pFVar3 = (FILE *)crt_stdio_c_fread_FUN_005fd990
                                     (this_ptr->poly_vert_list,this_ptr->poly_count * 0x48,1,file);
          size = pFVar2;
          if (pFVar3 == (FILE *)&DAT_00000001) {
            size = (FILE *)(this_ptr->poly_count << 2);
            SVar1 = crt_stdio_c_fread_FUN_005fd990
                              (this_ptr->poly_texture_index_list,(SIZE_T)size,1,file);
            vertex_count = pFVar3;
            if (SVar1 == 1) goto LAB_0047706d;
          }
        }
      }
    }
LAB_00476f99:
    in_stack_ffffffd4 = "Error reading keyframed model file";
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe7;
    poly_count = (char *)0x476fb9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading keyframed model file");
  } while( true );
}


// Assembly code:
// 00476f20: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
// 00476f21: PUSH ESI
// 00476f22: PUSH EDI
// 00476f23: PUSH EBP
// 00476f24: SUB ESP,0x1c
// 00476f27: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00476f2b: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00476f2f: PUSH ESI
// 00476f30: PUSH 0x1
// 00476f32: PUSH 0x18
// 00476f34: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 00476f38: PUSH EAX
// 00476f39: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00476f3e: ADD ESP,0x10
// 00476f41: CMP EAX,0x1
// 00476f44: JNZ 0x00476f99
//   XREF to: 00476f99 (CONDITIONAL_JUMP)
// 00476f46: MOV EDI,dword ptr [ESP]
//   Label: LAB_00476f46
//   XREF to: Stack[-0x2c] (DATA)
// 00476f49: CMP EDI,0x3
// 00476f4c: JGE 0x00476fbe
//   XREF to: 00476fbe (CONDITIONAL_JUMP)
// 00476f4e: MOV ECX,dword ptr [ESP]
//   Label: LAB_00476f4e
//   XREF to: Stack[-0x2c] (DATA)
// 00476f51: PUSH ECX
// 00476f52: MOV EAX,0x61f3b5
//   XREF to: 0061f3b5 (PARAM)
// 00476f57: MOV EDX,0xed
// 00476f5c: PUSH 0x61f3c8
//   XREF to: 0061f3c8 (DATA)
// 00476f61: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00476f66: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00476f6c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00476f71: ADD ESP,0x8
// 00476f74: XOR EDI,EDI
//   Label: LAB_00476f74
// 00476f76: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00476f79: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00476f7d: CMP EBP,0x4
// 00476f80: JL 0x00476fc5
//   XREF to: 00476fc5 (CONDITIONAL_JUMP)
// 00476f82: PUSH ESI
// 00476f83: PUSH 0x1
// 00476f85: PUSH 0x4
// 00476f87: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x14] (DATA)
// 00476f8b: PUSH EAX
// 00476f8c: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00476f91: ADD ESP,0x10
// 00476f94: CMP EAX,0x1
// 00476f97: JZ 0x00476fc5
//   XREF to: 00476fc5 (CONDITIONAL_JUMP)
// 00476f99: MOV EDX,0x61f37f
//   Label: LAB_00476f99
//   XREF to: 0061f37f (PARAM)
// 00476f9e: MOV ECX,0xe7
// 00476fa3: PUSH 0x61f392
//   XREF to: 0061f392 (DATA)
// 00476fa8: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00476fae: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00476fb4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00476fb9: ADD ESP,0x4
// 00476fbc: JMP 0x00476f46
//   XREF to: 00476f46 (UNCONDITIONAL_JUMP)
// 00476fbe: CMP EDI,0x4
//   Label: LAB_00476fbe
// 00476fc1: JG 0x00476f4e
//   XREF to: 00476f4e (CONDITIONAL_JUMP)
// 00476fc3: JMP 0x00476f74
//   XREF to: 00476f74 (UNCONDITIONAL_JUMP)
// 00476fc5: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00476fc5
//   XREF to: Stack[-0x18] (READ)
// 00476fc9: PUSH EAX
// 00476fca: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00476fce: PUSH EDX
// 00476fcf: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00476fd3: PUSH ECX
// 00476fd4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00476fd8: PUSH EDI
// 00476fd9: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 00476fdd: PUSH EBP
// 00476fde: PUSH EBX
// 00476fdf: CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   XREF to: 00477bf0 (UNCONDITIONAL_CALL)
// 00476fe4: MOV EDI,dword ptr [EBX + 0x104]
// 00476fea: IMUL EDI,dword ptr [EBX + 0x100]
// 00476ff1: ADD ESP,0x18
// 00476ff4: LEA EAX,[EDI*0x4 + 0x0]
// 00476ffb: PUSH ESI
// 00476ffc: SUB EAX,EDI
// 00476ffe: PUSH 0x1
// 00477000: SHL EAX,0x2
// 00477003: PUSH EAX
// 00477004: MOV ECX,dword ptr [EBX + 0x10c]
// 0047700a: PUSH ECX
// 0047700b: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00477010: ADD ESP,0x10
// 00477013: CMP EAX,0x1
// 00477016: JNZ 0x00476f99
//   XREF to: 00476f99 (CONDITIONAL_JUMP)
// 00477018: MOV EDI,dword ptr [EBX + 0x110]
// 0047701e: TEST EDI,EDI
// 00477020: JLE 0x0047706d
//   XREF to: 0047706d (CONDITIONAL_JUMP)
// 00477022: PUSH ESI
// 00477023: PUSH EAX
// 00477024: LEA EAX,[EDI*0x8 + 0x0]
// 0047702b: ADD EAX,EDI
// 0047702d: SHL EAX,0x3
// 00477030: PUSH EAX
// 00477031: MOV EBP,dword ptr [EBX + 0x114]
// 00477037: PUSH EBP
// 00477038: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0047703d: ADD ESP,0x10
// 00477040: CMP EAX,0x1
// 00477043: JNZ 0x00476f99
//   XREF to: 00476f99 (CONDITIONAL_JUMP)
// 00477049: PUSH ESI
// 0047704a: PUSH EAX
// 0047704b: MOV EAX,dword ptr [EBX + 0x110]
// 00477051: SHL EAX,0x2
// 00477054: PUSH EAX
// 00477055: MOV EAX,dword ptr [EBX + 0x118]
// 0047705b: PUSH EAX
// 0047705c: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00477061: ADD ESP,0x10
// 00477064: CMP EAX,0x1
// 00477067: JNZ 0x00476f99
//   XREF to: 00476f99 (CONDITIONAL_JUMP)
// 0047706d: CMP dword ptr [EBX + 0x120],0x0
//   Label: LAB_0047706d
// 00477074: JLE 0x004770c5
//   XREF to: 004770c5 (CONDITIONAL_JUMP)
// 00477076: PUSH 0x5460
// 0047707b: PUSH 0x0
// 0047707d: LEA EAX,[EBX + 0x124]
// 00477083: PUSH EAX
// 00477084: XOR EDI,EDI
// 00477086: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0047708b: ADD ESP,0xc
// 0047708e: CMP EDI,dword ptr [EBX + 0x120]
//   Label: LAB_0047708e
// 00477094: JGE 0x004770c5
//   XREF to: 004770c5 (CONDITIONAL_JUMP)
// 00477096: PUSH ESI
// 00477097: LEA EAX,[EDI*0x8 + 0x0]
// 0047709e: LEA EDX,[EBX + 0x124]
// 004770a4: ADD EAX,EDI
// 004770a6: PUSH 0x1
// 004770a8: SHL EAX,0x3
// 004770ab: PUSH 0x18
// 004770ad: ADD EAX,EDX
// 004770af: PUSH EAX
// 004770b0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004770b5: ADD ESP,0x10
// 004770b8: CMP EAX,0x1
// 004770bb: JNZ 0x00476f99
//   XREF to: 00476f99 (CONDITIONAL_JUMP)
// 004770c1: ADD EDI,EAX
// 004770c3: JMP 0x0047708e
//   XREF to: 0047708e (UNCONDITIONAL_JUMP)
// 004770c5: PUSH ESI
//   Label: LAB_004770c5
// 004770c6: MOV EAX,dword ptr [EBX + 0x5584]
// 004770cc: PUSH 0x1
// 004770ce: SHL EAX,0x3
// 004770d1: PUSH EAX
// 004770d2: LEA EAX,[EBX + 0x5588]
// 004770d8: PUSH EAX
// 004770d9: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004770de: ADD ESP,0x10
// 004770e1: CMP EAX,0x1
// 004770e4: JNZ 0x00476f99
//   XREF to: 00476f99 (CONDITIONAL_JUMP)
// 004770ea: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[-0x14] (READ)
// 004770ef: JNZ 0x004770f9
//   XREF to: 004770f9 (CONDITIONAL_JUMP)
// 004770f1: ADD ESP,0x1c
// 004770f4: POP EBP
// 004770f5: POP EDI
// 004770f6: POP ESI
// 004770f7: POP EBX
// 004770f8: RET
// 004770f9: PUSH EBX
//   Label: LAB_004770f9
// 004770fa: CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
//   XREF to: 00478830 (UNCONDITIONAL_CALL)
// 004770ff: ADD ESP,0x4
// 00477102: ADD ESP,0x1c
// 00477105: POP EBP
// 00477106: POP EDI
// 00477107: POP ESI
// 00477108: POP EBX
// 00477109: RET
