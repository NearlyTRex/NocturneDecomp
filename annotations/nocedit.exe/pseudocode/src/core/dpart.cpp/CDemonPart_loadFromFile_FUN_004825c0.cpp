// Name: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
// Address: 004825c0
// Address Range: [[004825c0, 004828aa]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0(CDemonPart * this_ptr, FILE * file_handle, CVector3f * offset_position)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710 (00494710) at 00494790 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_newformat_006217ef
//   double g_WorldToVertexScale = 256
//   double g_VertexToWorldScale = 0.00390625
//   char[72] g_PolyDataConversionBuffer
//   undefined4 DAT_02c14d34
//   undefined4 DAT_02c14d38
//   undefined4 DAT_02c14d3c
//   undefined4 DAT_02c14d40
//   undefined4 DAT_02c14d44
//   undefined4 DAT_02c14d48
//   undefined4 DAT_02c14d54
//   undefined4 DAT_02c14d60
//   undefined4 DAT_02c14d6c
//   undefined4 DAT_02c14d80
//   undefined4 DAT_02c14d84
//   undefined4 DAT_02c14d88
//   undefined4 DAT_02c14d8c
//   undefined4 DAT_02c14d90
// Function calls:
//   core_dpart.cpp_CDemonPart_alloc_FUN_00482180
//   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fread_FUN_005fd990
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void __cdecl
core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0
          (CDemonPart *this_ptr,FILE *file_handle,CVector3f *offset_position)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  SIZE_T SVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar6;
  int iVar7;
  char *buffer;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float *in_stack_00000044;
  
  crt_stdio_c_fread_FUN_005fd990(this_ptr,0x20,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_count,4,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->face_count,4,1,file_handle);
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox1,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox2,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox3,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox4,0xc,1,file_handle);
  iVar6 = 0;
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->mystery_array_size,4,1,file_handle);
  if (0 < this_ptr->mystery_array_size) {
    buffer = this_ptr->mystery_array;
    do {
      iVar6 = iVar6 + 1;
      crt_stdio_c_fread_FUN_005fd990(buffer,0x10,1,file_handle);
      buffer = buffer + 0x18;
    } while (iVar6 < this_ptr->mystery_array_size);
  }
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_group_size,4,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_positions,0xc,this_ptr->vertex_count,file_handle);
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_normals,0xc,this_ptr->vertex_count,file_handle);
  iVar6 = crt_string_c_strcmp_FUN_005fef20(this_ptr->format,"newformat");
  if (iVar6 == 0) {
    SVar5 = crt_stdio_c_fread_FUN_005fd990
                      (this_ptr->face_data,0x20,this_ptr->face_count,file_handle);
    iVar6 = extraout_EDX_00;
  }
  else {
    iVar8 = 0;
    SVar5 = crt_stdio_c_fread_FUN_005fd990
                      (g_PolyDataConversionBuffer,0x48,this_ptr->face_count,file_handle);
    iVar6 = extraout_EDX;
    if (0 < this_ptr->face_count) {
      iVar6 = 0;
      SVar5 = 0;
      do {
        *(undefined4 *)((int)&(this_ptr->face_data->plane).A + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 8);
        *(undefined4 *)((int)&(this_ptr->face_data->plane).B + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0xc);
        *(undefined4 *)((int)&(this_ptr->face_data->plane).C + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0x10);
        *(undefined4 *)((int)&(this_ptr->face_data->plane).D + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0x14);
        *(undefined4 *)((int)&this_ptr->face_data->vertex_index_1 + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0x18);
        *(undefined4 *)((int)&this_ptr->face_data->vertex_index_2 + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0x24);
        *(undefined4 *)((int)&this_ptr->face_data->vertex_index_3 + SVar5) =
             *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0x30);
        if (*(int *)(g_PolyDataConversionBuffer + iVar6 + 4) == 3) {
          *(undefined4 *)((int)&this_ptr->face_data->material + SVar5) = 0xffffffff;
        }
        else {
          *(undefined4 *)((int)&this_ptr->face_data->material + SVar5) =
               *(undefined4 *)(g_PolyDataConversionBuffer + iVar6 + 0x3c);
        }
        SVar5 = SVar5 + 0x20;
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar8 < this_ptr->face_count);
    }
  }
  if (in_stack_00000044 != (float *)0x0) {
    fVar9 = (float10)g_WorldToVertexScale;
    fVar10 = (float10)*in_stack_00000044 * fVar9;
    fVar11 = (float10)in_stack_00000044[1] * fVar9;
    fVar9 = (float10)in_stack_00000044[2] * fVar9;
    iVar8 = this_ptr->vertex_count;
    iVar7 = 0;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,SVar5));
    dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
    crt_math_c_round_FUN_005fe6b0(dVar12);
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        piVar1 = (int *)((int)&this_ptr->vertex_positions->x + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(fVar10);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->y + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(fVar11);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->z + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  fVar4 = (float)g_VertexToWorldScale;
  iVar6 = (this_ptr->bbox3).y;
  iVar8 = (this_ptr->bbox3).z;
  iVar7 = (this_ptr->bbox4).x;
  iVar2 = (this_ptr->bbox4).y;
  iVar3 = (this_ptr->bbox4).z;
  (this_ptr->bbox1_float).x = (float)(this_ptr->bbox3).x * fVar4;
  (this_ptr->bbox1_float).y = (float)iVar6 * fVar4;
  (this_ptr->bbox1_float).z = (float)iVar8 * fVar4;
  (this_ptr->bbox2_float).x = (float)iVar7 * fVar4;
  (this_ptr->bbox2_float).y = (float)iVar2 * fVar4;
  (this_ptr->bbox2_float).z = (float)iVar3 * fVar4;
  return;
}


// Assembly code:
// 004825c0: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
// 004825c1: PUSH ESI
// 004825c2: PUSH EDI
// 004825c3: PUSH EBP
// 004825c4: SUB ESP,0xc
// 004825c7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004825cb: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004825cf: PUSH EBP
// 004825d0: PUSH 0x1
// 004825d2: PUSH 0x20
// 004825d4: PUSH EBX
// 004825d5: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004825da: ADD ESP,0x10
// 004825dd: PUSH EBP
// 004825de: PUSH 0x1
// 004825e0: PUSH 0x4
// 004825e2: LEA EAX,[EBX + 0x20]
// 004825e5: PUSH EAX
// 004825e6: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004825eb: ADD ESP,0x10
// 004825ee: PUSH EBP
// 004825ef: PUSH 0x1
// 004825f1: PUSH 0x4
// 004825f3: LEA EAX,[EBX + 0x24]
// 004825f6: PUSH EAX
// 004825f7: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004825fc: ADD ESP,0x10
// 004825ff: PUSH EBX
// 00482600: CALL core_dpart.cpp_CDemonPart_alloc_FUN_00482180
//   XREF to: 00482180 (UNCONDITIONAL_CALL)
// 00482605: ADD ESP,0x4
// 00482608: PUSH EBP
// 00482609: PUSH 0x1
// 0048260b: PUSH 0xc
// 0048260d: LEA EAX,[EBX + 0x33c]
// 00482613: PUSH EAX
// 00482614: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00482619: ADD ESP,0x10
// 0048261c: PUSH EBP
// 0048261d: PUSH 0x1
// 0048261f: PUSH 0xc
// 00482621: LEA EAX,[EBX + 0x348]
// 00482627: PUSH EAX
// 00482628: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0048262d: ADD ESP,0x10
// 00482630: PUSH EBP
// 00482631: PUSH 0x1
// 00482633: PUSH 0xc
// 00482635: LEA EAX,[EBX + 0x354]
// 0048263b: PUSH EAX
// 0048263c: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00482641: ADD ESP,0x10
// 00482644: PUSH EBP
// 00482645: PUSH 0x1
// 00482647: PUSH 0xc
// 00482649: LEA EAX,[EBX + 0x360]
// 0048264f: PUSH EAX
// 00482650: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00482655: ADD ESP,0x10
// 00482658: PUSH EBP
// 00482659: PUSH 0x1
// 0048265b: PUSH 0x4
// 0048265d: LEA EAX,[EBX + 0x38]
// 00482660: PUSH EAX
// 00482661: XOR ESI,ESI
// 00482663: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00482668: MOV EDX,dword ptr [EBX + 0x38]
// 0048266b: ADD ESP,0x10
// 0048266e: TEST EDX,EDX
// 00482670: JLE 0x00482690
//   XREF to: 00482690 (CONDITIONAL_JUMP)
// 00482672: LEA EDI,[EBX + 0x44]
// 00482675: PUSH EBP
//   Label: LAB_00482675
// 00482676: PUSH 0x1
// 00482678: PUSH 0x10
// 0048267a: PUSH EDI
// 0048267b: INC ESI
// 0048267c: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00482681: ADD ESP,0x10
// 00482684: MOV ECX,dword ptr [EBX + 0x38]
// 00482687: ADD EDI,0x18
// 0048268a: CMP ESI,ECX
// 0048268c: JL 0x00482675
//   XREF to: 00482675 (CONDITIONAL_JUMP)
// 0048268e: MOV EAX,EAX
// 00482690: PUSH EBP
//   Label: LAB_00482690
// 00482691: PUSH 0x1
// 00482693: PUSH 0x4
// 00482695: LEA EAX,[EBX + 0x28]
// 00482698: PUSH EAX
// 00482699: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0048269e: ADD ESP,0x10
// 004826a1: PUSH EBP
// 004826a2: MOV ESI,dword ptr [EBX + 0x20]
// 004826a5: PUSH ESI
// 004826a6: PUSH 0xc
// 004826a8: MOV EDI,dword ptr [EBX + 0x2c]
// 004826ab: PUSH EDI
// 004826ac: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004826b1: ADD ESP,0x10
// 004826b4: PUSH EBP
// 004826b5: MOV EAX,dword ptr [EBX + 0x20]
// 004826b8: PUSH EAX
// 004826b9: PUSH 0xc
// 004826bb: MOV EDX,dword ptr [EBX + 0x30]
// 004826be: PUSH EDX
// 004826bf: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004826c4: ADD ESP,0x10
// 004826c7: PUSH 0x6217ef
//   XREF to: 006217ef (DATA)
// 004826cc: PUSH EBX
// 004826cd: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004826d2: ADD ESP,0x8
// 004826d5: TEST EAX,EAX
// 004826d7: JZ 0x00482893
//   XREF to: 00482893 (CONDITIONAL_JUMP)
// 004826dd: PUSH EBP
// 004826de: MOV EDI,dword ptr [EBX + 0x24]
// 004826e1: PUSH EDI
// 004826e2: PUSH 0x48
// 004826e4: PUSH 0x2c14d30
//   XREF to: 02c14d30 (DATA)
// 004826e9: XOR EDI,EDI
// 004826eb: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004826f0: MOV EBP,dword ptr [EBX + 0x24]
// 004826f3: ADD ESP,0x10
// 004826f6: TEST EBP,EBP
// 004826f8: JLE 0x0048278a
//   XREF to: 0048278a (CONDITIONAL_JUMP)
// 004826fe: XOR EDX,EDX
// 00482700: XOR EAX,EAX
// 00482702: MOV ESI,dword ptr [EBX + 0x34]
//   Label: LAB_00482702
// 00482705: LEA ECX,[ESI + EAX*0x1]
// 00482708: MOV ESI,dword ptr [EDX + 0x2c14d38]
//   XREF to: 02c14d38 (READ)
//   XREF to: 02c14d80 (READ)
// 0048270e: MOV dword ptr [ECX],ESI
// 00482710: MOV ESI,dword ptr [EBX + 0x34]
// 00482713: LEA ECX,[ESI + EAX*0x1]
// 00482716: MOV ESI,dword ptr [EDX + 0x2c14d3c]
//   XREF to: 02c14d3c (READ)
//   XREF to: 02c14d84 (READ)
// 0048271c: MOV dword ptr [ECX + 0x4],ESI
// 0048271f: MOV ECX,dword ptr [EBX + 0x34]
// 00482722: MOV ESI,dword ptr [EDX + 0x2c14d40]
//   XREF to: 02c14d40 (READ)
//   XREF to: 02c14d88 (READ)
// 00482728: MOV dword ptr [ECX + EAX*0x1 + 0x8],ESI
// 0048272c: MOV ECX,dword ptr [EBX + 0x34]
// 0048272f: MOV ESI,dword ptr [EDX + 0x2c14d44]
//   XREF to: 02c14d44 (READ)
//   XREF to: 02c14d8c (READ)
// 00482735: MOV dword ptr [ECX + EAX*0x1 + 0xc],ESI
// 00482739: MOV ECX,dword ptr [EBX + 0x34]
// 0048273c: MOV ESI,dword ptr [EDX + 0x2c14d48]
//   XREF to: 02c14d48 (READ)
//   XREF to: 02c14d90 (READ)
// 00482742: MOV dword ptr [ECX + EAX*0x1 + 0x10],ESI
// 00482746: MOV ECX,dword ptr [EBX + 0x34]
// 00482749: MOV ESI,dword ptr [EDX + 0x2c14d54]
//   XREF to: 02c14d54 (READ)
// 0048274f: MOV dword ptr [ECX + EAX*0x1 + 0x14],ESI
// 00482753: MOV ECX,dword ptr [EBX + 0x34]
// 00482756: MOV ESI,dword ptr [EDX + 0x2c14d60]
//   XREF to: 02c14d60 (READ)
// 0048275c: MOV dword ptr [ECX + EAX*0x1 + 0x18],ESI
// 00482760: CMP dword ptr [EDX + 0x2c14d34],0x3
//   XREF to: 02c14d34 (READ)
// 00482767: JNZ 0x0048287f
//   XREF to: 0048287f (CONDITIONAL_JUMP)
// 0048276d: MOV ESI,dword ptr [EBX + 0x34]
// 00482770: MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff
// 00482778: ADD EAX,0x20
//   Label: LAB_00482778
// 0048277b: INC EDI
// 0048277c: MOV ECX,dword ptr [EBX + 0x24]
// 0048277f: ADD EDX,0x48
// 00482782: CMP EDI,ECX
// 00482784: JL 0x00482702
//   XREF to: 00482702 (CONDITIONAL_JUMP)
// 0048278a: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_0048278a
//   XREF to: Stack[0xc] (READ)
// 0048278e: TEST EDI,EDI
// 00482790: JZ 0x00482810
//   XREF to: 00482810 (CONDITIONAL_JUMP)
// 00482796: FLD double ptr [0x006217fe]
//   XREF to: 006217fe (READ)
// 0048279c: FLD float ptr [EDI]
// 0048279e: FMUL ST1
// 004827a0: FLD float ptr [EDI + 0x4]
// 004827a3: FMUL ST2
// 004827a5: FLD float ptr [EDI + 0x8]
// 004827a8: FMULP ST3
// 004827aa: MOV EBP,dword ptr [EBX + 0x20]
// 004827ad: XOR ESI,ESI
// 004827af: FXCH
// 004827b1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004827b6: FXCH
// 004827b8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004827bd: FXCH ST2
// 004827bf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004827c4: FXCH ST2
// 004827c6: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 004827ca: FXCH
// 004827cc: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 004827d0: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004827d3: TEST EBP,EBP
// 004827d5: JLE 0x00482810
//   XREF to: 00482810 (CONDITIONAL_JUMP)
// 004827d7: XOR EDX,EDX
// 004827d9: MOV EDI,dword ptr [EBX + 0x2c]
//   Label: LAB_004827d9
// 004827dc: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004827df: SUB dword ptr [EDX + EDI*0x1],EAX
// 004827e2: MOV EDI,dword ptr [EBX + 0x2c]
// 004827e5: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 004827e9: SUB dword ptr [EDX + EDI*0x1 + 0x4],EAX
// 004827ed: MOV EDI,dword ptr [EBX + 0x2c]
// 004827f0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004827f4: SUB dword ptr [EDX + EDI*0x1 + 0x8],EAX
// 004827f8: INC ESI
// 004827f9: MOV EDI,dword ptr [EBX + 0x20]
// 004827fc: ADD EDX,0xc
// 004827ff: CMP ESI,EDI
// 00482801: JL 0x004827d9
//   XREF to: 004827d9 (CONDITIONAL_JUMP)
// 00482803: LEA EAX,[EAX]
// 00482809: LEA EDX,[EDX]
// 0048280f: NOP
// 00482810: PUSH EBX
//   Label: LAB_00482810
// 00482811: CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
//   XREF to: 004824f0 (UNCONDITIONAL_CALL)
// 00482816: FLD double ptr [0x00621806]
//   XREF to: 00621806 (READ)
// 0048281c: FILD dword ptr [EBX + 0x354]
// 00482822: FMUL ST1
// 00482824: FILD dword ptr [EBX + 0x358]
// 0048282a: FMUL ST2
// 0048282c: FILD dword ptr [EBX + 0x35c]
// 00482832: FMUL ST3
// 00482834: FILD dword ptr [EBX + 0x360]
// 0048283a: FMUL ST4
// 0048283c: FILD dword ptr [EBX + 0x364]
// 00482842: FMUL ST5
// 00482844: FILD dword ptr [EBX + 0x368]
// 0048284a: FMULP ST6
// 0048284c: ADD ESP,0x4
// 0048284f: FXCH ST4
// 00482851: FSTP float ptr [EBX + 0x36c]
// 00482857: FXCH ST2
// 00482859: FSTP float ptr [EBX + 0x370]
// 0048285f: FSTP float ptr [EBX + 0x374]
// 00482865: FSTP float ptr [EBX + 0x378]
// 0048286b: FSTP float ptr [EBX + 0x37c]
// 00482871: FSTP float ptr [EBX + 0x380]
// 00482877: ADD ESP,0xc
// 0048287a: POP EBP
// 0048287b: POP EDI
// 0048287c: POP ESI
// 0048287d: POP EBX
// 0048287e: RET
// 0048287f: MOV ESI,dword ptr [EBX + 0x34]
//   Label: LAB_0048287f
// 00482882: LEA ECX,[ESI + EAX*0x1]
// 00482885: MOV ESI,dword ptr [EDX + 0x2c14d6c]
//   XREF to: 02c14d6c (READ)
// 0048288b: MOV dword ptr [ECX + 0x1c],ESI
// 0048288e: JMP 0x00482778
//   XREF to: 00482778 (UNCONDITIONAL_JUMP)
// 00482893: PUSH EBP
//   Label: LAB_00482893
// 00482894: MOV ECX,dword ptr [EBX + 0x24]
// 00482897: PUSH ECX
// 00482898: PUSH 0x20
// 0048289a: MOV ESI,dword ptr [EBX + 0x34]
// 0048289d: PUSH ESI
// 0048289e: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004828a3: ADD ESP,0x10
// 004828a6: JMP 0x0048278a
//   XREF to: 0048278a (UNCONDITIONAL_JUMP)
