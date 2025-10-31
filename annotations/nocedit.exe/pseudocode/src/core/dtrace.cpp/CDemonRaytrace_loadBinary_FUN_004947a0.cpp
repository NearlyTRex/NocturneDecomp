// Name: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// Address: 004947a0
// Address Range: [[004947a0, 00494dd4]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace * this_ptr, FILE * file_handle)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494e1e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_0062274d
//   TerminatedCString s_CDemonRaytrace_loadBinar_00622760
//   TerminatedCString s_core_dtrace_cpp_0062278d
//   TerminatedCString s_CDemonRaytrace_loadBinar_006227a0
//   TerminatedCString s_core_dtrace_cpp_006227d6
//   TerminatedCString s_core_dtrace_cpp_006227e9
//   TerminatedCString s_core_dtrace_cpp_006227fc
//   TerminatedCString s_CDemonRaytrace_loadBinar_0062280f
//   TerminatedCString s_core_dtrace_cpp_0062283b
//   TerminatedCString s_core_dtrace_cpp_0062284e
//   TerminatedCString s_core_dtrace_cpp_00622861
//   TerminatedCString s_Out_of_memory_for_cube_m_00622874
//   TerminatedCString s_Converting_GEO_file_to_v_006228a9
//   TerminatedCString s_core_dtrace_cpp_006228cb
//   TerminatedCString s_CDemonRaytrace_loadBinar_006228de
//   float FLOAT_0062290e = 8
//   float FLOAT_00622912 = 0.125
//   int g_GeoFileFormatVersion = 0x4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 DAT_02cee5ac
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcube.cpp_CDemonCube_load_FUN_00457530
//   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
//   core_dpart.cpp_CDemonPart_ctor_FUN_00482110
//   core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
//   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
//   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
//   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
//   core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
//   core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
//   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
//   core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
//   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fread_FUN_005fd990
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,FILE *file_handle)

{
  SIZE_T SVar1;
  SVoxelCubeMetadata *pSVar2;
  float fVar3;
  float fVar4;
  CDemonRaytrace *this_ptr_00;
  SIZE_T *pSVar5;
  SIZE_T *pSVar6;
  void *pvVar7;
  CDemonPart *pCVar8;
  uchar *puVar9;
  int unaff_EBX;
  uint cube_index;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar10;
  int *piVar11;
  int iVar12;
  SIZE_T *buffer;
  int iVar13;
  FILE *in_stack_0000000c;
  int in_stack_00000010;
  FILE *in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000024;
  FILE *in_stack_00000030;
  FILE *in_stack_00000034;
  void *in_stack_0000003c;
  FILE *in_stack_00000040;
  void *in_stack_00000048;
  FILE *in_stack_0000004c;
  FILE *in_stack_00000050;
  int in_stack_ffffffdc;
  int in_stack_ffffffe0;
  
  this_ptr_00 = this_ptr;
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(this_ptr);
  DAT_02cee5ac = 0;
  crt_stdio_c_fread_FUN_005fd990(&stack0xffffffd8,4,1,in_stack_0000000c);
  if (in_stack_ffffffdc < 1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x148;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - invalid version");
  }
  if (g_GeoFileFormatVersion < in_stack_ffffffe0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x14b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->grid_coord,4,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&(this_ptr->grid_coord).y,4,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&(this_ptr->grid_coord).z,4,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox_min,0xc,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox_max,0xc,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->cell_size,0xc,1,in_stack_00000014);
  fVar3 = (this_ptr->cell_size).y * FLOAT_00622912;
  fVar4 = FLOAT_00622912 * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&stack0xffffffec) {
    (this_ptr->adjusted_size).x = (this_ptr->cell_size).x / FLOAT_0062290e;
    (this_ptr->adjusted_size).y = fVar3;
    (this_ptr->adjusted_size).z = fVar4;
  }
  if (unaff_ESI < 4) {
    core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(this_ptr);
    if (unaff_EBX < 3) {
      this_ptr = (CDemonRaytrace *)0x0;
      for (in_stack_0000000c = (FILE *)0x0;
          iVar10 = (this_ptr_00->grid_coord).x * (this_ptr_00->grid_coord).y *
                   (this_ptr_00->grid_coord).z,
          iVar10 - (int)in_stack_0000000c != 0 && (int)in_stack_0000000c <= iVar10;
          in_stack_0000000c = (FILE *)((int)in_stack_0000000c + 1)) {
        buffer = (SIZE_T *)
                 ((int)((SVoxelCubeMetadata *)(this_ptr_00->cube_list->voxel_data + -5))->voxel_data
                 + (int)&this_ptr[-1].grid_bounds_min.y);
        crt_stdio_c_fread_FUN_005fd990(buffer,4,1,in_stack_00000030);
        SVar1 = *buffer;
        if (SVar1 != 0) {
          pSVar5 = (SIZE_T *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (SVar1 * 0x38 + 4,"..\\core\\dtrace.cpp",0x172);
          pSVar6 = pSVar5;
          if (pSVar5 != (SIZE_T *)0x0) {
            pSVar6 = pSVar5 + 1;
            *pSVar5 = SVar1;
          }
          buffer[1] = (SIZE_T)pSVar6;
          pvVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (*buffer,"..\\core\\dtrace.cpp",0x173);
          buffer[0x15] = (SIZE_T)pvVar7;
          if ((buffer[1] == 0) || (pvVar7 == (void *)0x0)) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x175;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - out of memory!");
          }
          iVar10 = 0;
          if (0 < (int)*buffer) {
            iVar12 = 0;
            do {
              iVar10 = iVar10 + 1;
              core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                        ((CDemonTriangle *)(buffer[1] + iVar12),in_stack_00000040);
              iVar12 = iVar12 + 0x38;
            } while (iVar10 < (int)*buffer);
          }
          pCVar8 = (CDemonPart *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\dtrace.cpp",0x17a);
          if (pCVar8 != (CDemonPart *)0x0) {
            pCVar8 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar8);
          }
          buffer[3] = (SIZE_T)pCVar8;
          core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
                    (this_ptr_00,pCVar8,in_stack_00000024,in_stack_00000048);
        }
        crt_stdio_c_fread_FUN_005fd990(buffer + 5,0x40,1,in_stack_0000004c);
        if (in_stack_0000001c < 2) {
          crt_memory_c_memset_FUN_005fde40((void *)buffer[0x15],0,*buffer);
        }
        else {
          crt_stdio_c_fread_FUN_005fd990((void *)buffer[0x15],*buffer,1,in_stack_00000050);
        }
        this_ptr = (CDemonRaytrace *)&(this_ptr->grid_bounds_min).y;
      }
      core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450((CDemonRaytrace *)0x494acd);
    }
    else {
      iVar12 = 0;
      iVar10 = 0;
      while (iVar10 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z
            ) {
        piVar11 = (int *)((int)this_ptr->cube_list->voxel_data + iVar12 + -0x14);
        crt_stdio_c_fread_FUN_005fd990(piVar11,4,1,in_stack_00000030);
        if (*piVar11 < 1) {
          crt_memory_c_memset_FUN_005fde40(piVar11 + 5,0,0x40);
          iVar10 = iVar10 + 1;
          iVar12 = iVar12 + 0x58;
        }
        else {
          pCVar8 = (CDemonPart *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\dtrace.cpp",0x19a);
          if (pCVar8 != (CDemonPart *)0x0) {
            pCVar8 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar8);
          }
          piVar11[3] = (int)pCVar8;
          if (pCVar8 == (CDemonPart *)0x0) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x19b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for cube model loading dtrace database");
          }
          core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
                    (this_ptr,(void *)piVar11[3],iVar10,in_stack_0000003c);
          crt_stdio_c_fread_FUN_005fd990(piVar11 + 5,0x40,1,in_stack_00000040);
          iVar10 = iVar10 + 1;
          iVar12 = iVar12 + 0x58;
        }
      }
      iVar10 = 0;
      this_ptr->triangle_count = in_stack_00000010;
      core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
      if (0 < this_ptr->triangle_count) {
        iVar12 = 0;
        do {
          iVar10 = iVar10 + 1;
          core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                    ((CDemonTriangle *)((int)&(this_ptr->triangle_list->vertex1).x + iVar12),
                     in_stack_00000034);
          iVar12 = iVar12 + 0x38;
        } while (iVar10 < this_ptr->triangle_count);
      }
      iVar12 = 0;
      iVar13 = 0;
      crt_stdio_c_fread_FUN_005fd990
                (this_ptr->triangle_flags,this_ptr->triangle_count,1,in_stack_00000034);
      iVar10 = 0;
      while (iVar12 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z
            ) {
        piVar11 = (int *)((int)this_ptr->cube_list->voxel_data + iVar13 + -0x14);
        if (*piVar11 < 1) {
          piVar11[0x15] = 0;
          piVar11[1] = 0;
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 0x58;
        }
        else {
          piVar11[1] = (int)(this_ptr->triangle_list + iVar10);
          puVar9 = this_ptr->triangle_flags + iVar10;
          iVar10 = iVar10 + *piVar11;
          piVar11[0x15] = (int)puVar9;
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 0x58;
        }
      }
    }
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr_00);
    cube_index = 0;
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Converting .GEO file to version 4");
    iVar10 = 0;
    while ((int)cube_index <
           (this_ptr_00->grid_coord).x * (this_ptr_00->grid_coord).y * (this_ptr_00->grid_coord).z)
    {
      pSVar2 = this_ptr_00->cube_list;
      core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
                (this_ptr_00,(CVector3f *)&stack0xfffffff4,cube_index);
      piVar11 = (int *)((int)pSVar2->voxel_data + iVar10 + -0x14);
      core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
                ((CDemonCube *)((int)&this_ptr_00->cube_data->voxel_buffer1 + in_stack_0000001c),
                 (void *)piVar11[1],*piVar11,(CVector3f *)&stack0xfffffff8,
                 (CVector3f *)&stack0xffffffec,(uchar *)piVar11[0x15],(uint *)(piVar11 + 5));
      if ((cube_index & 0xf) == 0) {
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)(cube_index + 1),
                   (float)((this_ptr_00->grid_coord).x * (this_ptr_00->grid_coord).y *
                          (this_ptr_00->grid_coord).z));
        iVar10 = iVar10 + 0x58;
        cube_index = cube_index + 1;
      }
      else {
        iVar10 = iVar10 + 0x58;
        cube_index = cube_index + 1;
      }
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(this_ptr_00);
    core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr_00);
    DAT_02cee5ac = 1;
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
    iVar10 = 0;
    for (iVar12 = 0;
        iVar12 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
        iVar12 = iVar12 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_00457530
                ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar10),in_stack_0000004c
                );
      iVar10 = iVar10 + 0x34;
    }
  }
  if ((in_stack_0000004c->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x1ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - error reading file");
    return;
  }
  return;
}


// Assembly code:
// 004947a0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// 004947a1: PUSH ESI
// 004947a2: PUSH EDI
// 004947a3: PUSH EBP
// 004947a4: SUB ESP,0x40
// 004947a7: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 004947ab: XOR EDX,EDX
// 004947ad: PUSH EBP
// 004947ae: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004947b2: CALL core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
//   XREF to: 00494400 (UNCONDITIONAL_CALL)
// 004947b7: ADD ESP,0x4
// 004947ba: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 004947be: PUSH EBX
// 004947bf: PUSH 0x1
// 004947c1: PUSH 0x4
// 004947c3: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x2c] (DATA)
// 004947c7: XOR ECX,ECX
// 004947c9: PUSH EAX
// 004947ca: MOV dword ptr [0x02cee5ac],ECX
//   XREF to: 02cee5ac (WRITE)
// 004947d0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004947d5: ADD ESP,0x10
// 004947d8: CMP dword ptr [ESP + 0x24],0x1
//   XREF to: Stack[-0x2c] (READ)
// 004947dd: JL 0x004948ff
//   XREF to: 004948ff (CONDITIONAL_JUMP)
// 004947e3: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004947e3
//   XREF to: Stack[-0x2c] (READ)
// 004947e7: CMP EAX,dword ptr [0x006789f0]
//   XREF to: 006789f0 (READ)
// 004947ed: JLE 0x00494812
//   XREF to: 00494812 (CONDITIONAL_JUMP)
// 004947ef: MOV ECX,0x62278d
//   XREF to: 0062278d (PARAM)
// 004947f4: MOV EBX,0x14b
// 004947f9: PUSH 0x6227a0
//   XREF to: 006227a0 (DATA)
// 004947fe: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00494804: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049480a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049480f: ADD ESP,0x4
// 00494812: MOV ESI,dword ptr [ESP + 0x58]
//   Label: LAB_00494812
//   XREF to: Stack[0x8] (READ)
// 00494816: PUSH ESI
// 00494817: PUSH 0x1
// 00494819: PUSH 0x4
// 0049481b: LEA EAX,[EBP + 0x40]
// 0049481e: PUSH EAX
// 0049481f: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494824: ADD ESP,0x10
// 00494827: PUSH ESI
// 00494828: PUSH 0x1
// 0049482a: PUSH 0x4
// 0049482c: LEA EAX,[EBP + 0x44]
// 0049482f: PUSH EAX
// 00494830: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494835: ADD ESP,0x10
// 00494838: PUSH ESI
// 00494839: PUSH 0x1
// 0049483b: PUSH 0x4
// 0049483d: LEA EAX,[EBP + 0x48]
// 00494840: PUSH EAX
// 00494841: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494846: ADD ESP,0x10
// 00494849: PUSH ESI
// 0049484a: PUSH 0x1
// 0049484c: PUSH 0xc
// 0049484e: LEA EAX,[EBP + 0x10]
// 00494851: PUSH EAX
// 00494852: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494857: ADD ESP,0x10
// 0049485a: PUSH ESI
// 0049485b: PUSH 0x1
// 0049485d: PUSH 0xc
// 0049485f: LEA EAX,[EBP + 0x1c]
// 00494862: PUSH EAX
// 00494863: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494868: ADD ESP,0x10
// 0049486b: PUSH ESI
// 0049486c: PUSH 0x1
// 0049486e: PUSH 0xc
// 00494870: LEA EBX,[EBP + 0x28]
// 00494873: PUSH EBX
// 00494874: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494879: FLD float ptr [EBX]
// 0049487b: FDIV float ptr [0x0062290e]
//   XREF to: 0062290e (READ)
// 00494881: ADD ESP,0x10
// 00494884: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (WRITE)
// 00494888: FLD float ptr [0x00622912]
//   XREF to: 00622912 (READ)
// 0049488e: FLD float ptr [EBX + 0x4]
// 00494891: FMUL ST1
// 00494893: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (WRITE)
// 00494897: FMUL float ptr [EBX + 0x8]
// 0049489a: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x38] (DATA)
// 0049489e: LEA EDX,[EBP + 0x34]
// 004948a1: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 004948a5: CMP EDX,EAX
// 004948a7: JZ 0x004948bd
//   XREF to: 004948bd (CONDITIONAL_JUMP)
// 004948a9: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (DATA)
// 004948ad: MOV dword ptr [EDX],EAX
// 004948af: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 004948b3: MOV dword ptr [EDX + 0x4],EAX
// 004948b6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 004948ba: MOV dword ptr [EDX + 0x8],EAX
// 004948bd: CMP dword ptr [ESP + 0x24],0x4
//   Label: LAB_004948bd
//   XREF to: Stack[-0x2c] (READ)
// 004948c2: JL 0x00494926
//   XREF to: 00494926 (CONDITIONAL_JUMP)
// 004948c4: PUSH EBP
// 004948c5: CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
//   XREF to: 00494380 (UNCONDITIONAL_CALL)
// 004948ca: XOR EDI,EDI
// 004948cc: XOR ESI,ESI
// 004948ce: ADD ESP,0x4
// 004948d1: MOV ECX,dword ptr [EBP + 0x44]
//   Label: LAB_004948d1
// 004948d4: MOV EAX,dword ptr [EBP + 0x40]
// 004948d7: IMUL EAX,ECX
// 004948da: IMUL EAX,dword ptr [EBP + 0x48]
// 004948de: CMP EDI,EAX
// 004948e0: JGE 0x00494d98
//   XREF to: 00494d98 (CONDITIONAL_JUMP)
// 004948e6: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 004948ea: PUSH EAX
// 004948eb: MOV EAX,dword ptr [EBP + 0x50]
// 004948ee: ADD EAX,ESI
// 004948f0: PUSH EAX
// 004948f1: INC EDI
// 004948f2: CALL core_dcube.cpp_CDemonCube_load_FUN_00457530
//   XREF to: 00457530 (UNCONDITIONAL_CALL)
// 004948f7: ADD ESI,0x34
// 004948fa: ADD ESP,0x8
// 004948fd: JMP 0x004948d1
//   XREF to: 004948d1 (UNCONDITIONAL_JUMP)
// 004948ff: MOV EDI,0x62274d
//   Label: LAB_004948ff
//   XREF to: 0062274d (DATA)
// 00494904: MOV EAX,0x148
// 00494909: PUSH 0x622760
//   XREF to: 00622760 (DATA)
// 0049490e: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00494914: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00494919: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049491e: ADD ESP,0x4
// 00494921: JMP 0x004947e3
//   XREF to: 004947e3 (UNCONDITIONAL_JUMP)
// 00494926: PUSH EBP
//   Label: LAB_00494926
// 00494927: CALL core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
//   XREF to: 00494270 (UNCONDITIONAL_CALL)
// 0049492c: ADD ESP,0x4
// 0049492f: CMP dword ptr [ESP + 0x24],0x3
//   XREF to: Stack[-0x2c] (READ)
// 00494934: JGE 0x00494b94
//   XREF to: 00494b94 (CONDITIONAL_JUMP)
// 0049493a: XOR EAX,EAX
// 0049493c: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00494940: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00494944: MOV EBX,dword ptr [EBP + 0x44]
//   Label: LAB_00494944
// 00494947: MOV EAX,dword ptr [EBP + 0x40]
// 0049494a: IMUL EAX,EBX
// 0049494d: IMUL EAX,dword ptr [EBP + 0x48]
// 00494951: CMP EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 00494955: JLE 0x00494ac7
//   XREF to: 00494ac7 (CONDITIONAL_JUMP)
// 0049495b: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0049495f: PUSH EDX
// 00494960: PUSH 0x1
// 00494962: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 00494966: MOV EDI,dword ptr [EBP + 0x4c]
// 00494969: PUSH 0x4
// 0049496b: ADD EDI,EAX
// 0049496d: PUSH EDI
// 0049496e: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494973: MOV ECX,dword ptr [EDI]
// 00494975: ADD ESP,0x10
// 00494978: TEST ECX,ECX
// 0049497a: JZ 0x00494a50
//   XREF to: 00494a50 (CONDITIONAL_JUMP)
// 00494980: MOV EBX,ECX
// 00494982: IMUL EAX,ECX,0x38
// 00494985: PUSH 0x172
// 0049498a: PUSH 0x6227d6
//   XREF to: 006227d6 (DATA)
// 0049498f: ADD EAX,0x4
// 00494992: PUSH EAX
// 00494993: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00494998: ADD ESP,0xc
// 0049499b: TEST EAX,EAX
// 0049499d: JZ 0x004949a5
//   XREF to: 004949a5 (CONDITIONAL_JUMP)
// 0049499f: ADD EAX,0x4
// 004949a2: MOV dword ptr [EAX + -0x4],EBX
// 004949a5: PUSH 0x173
//   Label: LAB_004949a5
// 004949aa: PUSH 0x6227e9
//   XREF to: 006227e9 (DATA)
// 004949af: MOV EBX,dword ptr [EDI]
// 004949b1: PUSH EBX
// 004949b2: MOV dword ptr [EDI + 0x4],EAX
// 004949b5: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004949ba: ADD ESP,0xc
// 004949bd: MOV ESI,dword ptr [EDI + 0x4]
// 004949c0: MOV dword ptr [EDI + 0x54],EAX
// 004949c3: TEST ESI,ESI
// 004949c5: JNZ 0x00494aa7
//   XREF to: 00494aa7 (CONDITIONAL_JUMP)
// 004949cb: MOV EDX,0x6227fc
//   Label: LAB_004949cb
//   XREF to: 006227fc (PARAM)
// 004949d0: MOV ECX,0x175
// 004949d5: PUSH 0x62280f
//   XREF to: 0062280f (DATA)
// 004949da: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004949e0: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004949e6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004949eb: ADD ESP,0x4
// 004949ee: MOV EBX,dword ptr [EDI]
//   Label: LAB_004949ee
// 004949f0: XOR ESI,ESI
// 004949f2: TEST EBX,EBX
// 004949f4: JLE 0x00494a15
//   XREF to: 00494a15 (CONDITIONAL_JUMP)
// 004949f6: XOR EBX,EBX
// 004949f8: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_004949f8
//   XREF to: Stack[0x8] (READ)
// 004949fc: PUSH EAX
// 004949fd: MOV EAX,dword ptr [EDI + 0x4]
// 00494a00: ADD EAX,EBX
// 00494a02: PUSH EAX
// 00494a03: INC ESI
// 00494a04: CALL core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
//   XREF to: 0049a5a0 (UNCONDITIONAL_CALL)
// 00494a09: ADD EBX,0x38
// 00494a0c: MOV EDX,dword ptr [EDI]
// 00494a0e: ADD ESP,0x8
// 00494a11: CMP ESI,EDX
// 00494a13: JL 0x004949f8
//   XREF to: 004949f8 (CONDITIONAL_JUMP)
// 00494a15: PUSH 0x17a
//   Label: LAB_00494a15
// 00494a1a: PUSH 0x62283b
//   XREF to: 0062283b (DATA)
// 00494a1f: PUSH 0x388
// 00494a24: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00494a29: ADD ESP,0xc
// 00494a2c: TEST EAX,EAX
// 00494a2e: JZ 0x00494a39
//   XREF to: 00494a39 (CONDITIONAL_JUMP)
// 00494a30: PUSH EAX
// 00494a31: CALL core_dpart.cpp_CDemonPart_ctor_FUN_00482110
//   XREF to: 00482110 (UNCONDITIONAL_CALL)
// 00494a36: ADD ESP,0x4
// 00494a39: MOV ECX,dword ptr [ESP + 0x58]
//   Label: LAB_00494a39
//   XREF to: Stack[0x8] (READ)
// 00494a3d: PUSH ECX
// 00494a3e: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 00494a42: PUSH EBX
// 00494a43: PUSH EAX
// 00494a44: PUSH EBP
// 00494a45: MOV dword ptr [EDI + 0xc],EAX
// 00494a48: CALL core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
//   XREF to: 00494710 (UNCONDITIONAL_CALL)
// 00494a4d: ADD ESP,0x10
// 00494a50: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00494a50
//   XREF to: Stack[0x8] (READ)
// 00494a54: PUSH EAX
// 00494a55: PUSH 0x1
// 00494a57: PUSH 0x40
// 00494a59: LEA EAX,[EDI + 0x14]
// 00494a5c: PUSH EAX
// 00494a5d: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494a62: ADD ESP,0x10
// 00494a65: CMP dword ptr [ESP + 0x24],0x2
//   XREF to: Stack[-0x2c] (READ)
// 00494a6a: JL 0x00494ab4
//   XREF to: 00494ab4 (CONDITIONAL_JUMP)
// 00494a6c: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 00494a70: PUSH ESI
// 00494a71: PUSH 0x1
// 00494a73: MOV EAX,dword ptr [EDI]
// 00494a75: PUSH EAX
// 00494a76: MOV EDX,dword ptr [EDI + 0x54]
// 00494a79: PUSH EDX
// 00494a7a: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494a7f: ADD ESP,0x10
// 00494a82: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_00494a82
//   XREF to: Stack[-0x24] (READ)
// 00494a86: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 00494a8a: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 00494a8e: MOV EAX,dword ptr [EDI]
// 00494a90: ADD EBX,0x58
// 00494a93: INC ESI
// 00494a94: ADD ECX,EAX
// 00494a96: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00494a9a: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00494a9e: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00494aa2: JMP 0x00494944
//   XREF to: 00494944 (UNCONDITIONAL_JUMP)
// 00494aa7: TEST EAX,EAX
//   Label: LAB_00494aa7
// 00494aa9: JZ 0x004949cb
//   XREF to: 004949cb (CONDITIONAL_JUMP)
// 00494aaf: JMP 0x004949ee
//   XREF to: 004949ee (UNCONDITIONAL_JUMP)
// 00494ab4: MOV ECX,dword ptr [EDI]
//   Label: LAB_00494ab4
// 00494ab6: PUSH ECX
// 00494ab7: PUSH 0x0
// 00494ab9: MOV EBX,dword ptr [EDI + 0x54]
// 00494abc: PUSH EBX
// 00494abd: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00494ac2: ADD ESP,0xc
// 00494ac5: JMP 0x00494a82
//   XREF to: 00494a82 (UNCONDITIONAL_JUMP)
// 00494ac7: PUSH EBP
//   Label: LAB_00494ac7
// 00494ac8: CALL core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
//   XREF to: 00494450 (UNCONDITIONAL_CALL)
// 00494acd: ADD ESP,0x4
// 00494ad0: PUSH EBP
//   Label: LAB_00494ad0
// 00494ad1: CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
//   XREF to: 00494380 (UNCONDITIONAL_CALL)
// 00494ad6: ADD ESP,0x4
// 00494ad9: PUSH 0x6228a9
//   XREF to: 006228a9 (DATA)
// 00494ade: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00494ae4: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00494ae5: XOR EBX,EBX
// 00494ae7: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 00494aec: ADD ESP,0x8
// 00494aef: LEA EAX,[EBP + 0x28]
// 00494af2: XOR EDI,EDI
// 00494af4: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00494af8: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00494afc: MOV EDX,dword ptr [EBP + 0x44]
//   Label: LAB_00494afc
// 00494aff: MOV EAX,dword ptr [EBP + 0x40]
// 00494b02: IMUL EAX,EDX
// 00494b05: IMUL EAX,dword ptr [EBP + 0x48]
// 00494b09: CMP EBX,EAX
// 00494b0b: JGE 0x00494d6c
//   XREF to: 00494d6c (CONDITIONAL_JUMP)
// 00494b11: PUSH EBX
// 00494b12: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x44] (DATA)
// 00494b16: PUSH EAX
// 00494b17: PUSH EBP
// 00494b18: MOV ESI,dword ptr [EBP + 0x4c]
// 00494b1b: CALL core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
//   XREF to: 00499ba0 (UNCONDITIONAL_CALL)
// 00494b20: ADD ESP,0xc
// 00494b23: ADD ESI,EDI
// 00494b25: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00494b29: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 00494b2d: FADD float ptr [EAX]
// 00494b2f: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 00494b33: FXCH
// 00494b35: FSTP float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00494b38: FADD float ptr [EAX + 0x4]
// 00494b3b: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 00494b3f: FXCH
// 00494b41: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 00494b45: FADD float ptr [EAX + 0x8]
// 00494b48: LEA EAX,[ESI + 0x14]
// 00494b4b: PUSH EAX
// 00494b4c: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (WRITE)
// 00494b50: MOV EAX,dword ptr [ESI + 0x54]
// 00494b53: PUSH EAX
// 00494b54: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x50] (DATA)
// 00494b58: PUSH EAX
// 00494b59: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x44] (DATA)
// 00494b5d: PUSH EAX
// 00494b5e: MOV EDX,dword ptr [ESI]
// 00494b60: MOV ECX,dword ptr [ESI + 0x4]
// 00494b63: PUSH EDX
// 00494b64: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x20] (READ)
// 00494b68: MOV EAX,dword ptr [EBP + 0x50]
// 00494b6b: PUSH ECX
// 00494b6c: ADD EAX,ESI
// 00494b6e: PUSH EAX
// 00494b6f: CALL core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
//   XREF to: 004570a0 (UNCONDITIONAL_CALL)
// 00494b74: ADD ESP,0x1c
// 00494b77: TEST BL,0xf
// 00494b7a: JZ 0x00494d1d
//   XREF to: 00494d1d (CONDITIONAL_JUMP)
// 00494b80: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 00494b84: ADD EDI,0x58
// 00494b87: ADD EAX,0x34
// 00494b8a: INC EBX
// 00494b8b: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00494b8f: JMP 0x00494afc
//   XREF to: 00494afc (UNCONDITIONAL_JUMP)
// 00494b94: XOR EDI,EDI
//   Label: LAB_00494b94
// 00494b96: XOR ESI,ESI
// 00494b98: MOV EDX,dword ptr [EBP + 0x44]
//   Label: LAB_00494b98
// 00494b9b: MOV EAX,dword ptr [EBP + 0x40]
// 00494b9e: IMUL EAX,EDX
// 00494ba1: IMUL EAX,dword ptr [EBP + 0x48]
// 00494ba5: CMP ESI,EAX
// 00494ba7: JGE 0x00494c6b
//   XREF to: 00494c6b (CONDITIONAL_JUMP)
// 00494bad: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 00494bb1: PUSH EAX
// 00494bb2: PUSH 0x1
// 00494bb4: MOV EBX,dword ptr [EBP + 0x4c]
// 00494bb7: PUSH 0x4
// 00494bb9: ADD EBX,EDI
// 00494bbb: PUSH EBX
// 00494bbc: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494bc1: MOV EDX,dword ptr [EBX]
// 00494bc3: ADD ESP,0x10
// 00494bc6: TEST EDX,EDX
// 00494bc8: JLE 0x00494c52
//   XREF to: 00494c52 (CONDITIONAL_JUMP)
// 00494bce: PUSH 0x19a
// 00494bd3: PUSH 0x62284e
//   XREF to: 0062284e (DATA)
// 00494bd8: PUSH 0x388
// 00494bdd: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00494be2: ADD ESP,0xc
// 00494be5: TEST EAX,EAX
// 00494be7: JZ 0x00494bf2
//   XREF to: 00494bf2 (CONDITIONAL_JUMP)
// 00494be9: PUSH EAX
// 00494bea: CALL core_dpart.cpp_CDemonPart_ctor_FUN_00482110
//   XREF to: 00482110 (UNCONDITIONAL_CALL)
// 00494bef: ADD ESP,0x4
// 00494bf2: MOV dword ptr [EBX + 0xc],EAX
//   Label: LAB_00494bf2
// 00494bf5: TEST EAX,EAX
// 00494bf7: JNZ 0x00494c1b
//   XREF to: 00494c1b (CONDITIONAL_JUMP)
// 00494bf9: MOV EAX,0x622861
//   XREF to: 00622861 (PARAM)
// 00494bfe: MOV EDX,0x19b
// 00494c03: PUSH 0x622874
//   XREF to: 00622874 (DATA)
// 00494c08: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00494c0d: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00494c13: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00494c18: ADD ESP,0x4
// 00494c1b: MOV ECX,dword ptr [ESP + 0x58]
//   Label: LAB_00494c1b
//   XREF to: Stack[0x8] (READ)
// 00494c1f: PUSH ECX
// 00494c20: PUSH ESI
// 00494c21: MOV EAX,dword ptr [EBX + 0xc]
// 00494c24: PUSH EAX
// 00494c25: PUSH EBP
// 00494c26: CALL core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
//   XREF to: 00494710 (UNCONDITIONAL_CALL)
// 00494c2b: ADD ESP,0x10
// 00494c2e: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 00494c32: PUSH EDX
// 00494c33: PUSH 0x1
// 00494c35: PUSH 0x40
// 00494c37: LEA EAX,[EBX + 0x14]
// 00494c3a: PUSH EAX
// 00494c3b: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494c40: ADD ESP,0x10
// 00494c43: MOV EAX,dword ptr [EBX]
// 00494c45: ADD dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00494c49: INC ESI
// 00494c4a: ADD EDI,0x58
// 00494c4d: JMP 0x00494b98
//   XREF to: 00494b98 (UNCONDITIONAL_JUMP)
// 00494c52: PUSH 0x40
//   Label: LAB_00494c52
// 00494c54: PUSH 0x0
// 00494c56: ADD EBX,0x14
// 00494c59: PUSH EBX
// 00494c5a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00494c5f: ADD ESP,0xc
// 00494c62: INC ESI
// 00494c63: ADD EDI,0x58
// 00494c66: JMP 0x00494b98
//   XREF to: 00494b98 (UNCONDITIONAL_JUMP)
// 00494c6b: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_00494c6b
//   XREF to: Stack[-0x18] (READ)
// 00494c6f: PUSH EBP
// 00494c70: XOR ESI,ESI
// 00494c72: MOV dword ptr [EBP + 0x4],EAX
// 00494c75: CALL core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
//   XREF to: 00494600 (UNCONDITIONAL_CALL)
// 00494c7a: MOV EBX,dword ptr [EBP + 0x4]
// 00494c7d: ADD ESP,0x4
// 00494c80: TEST EBX,EBX
// 00494c82: JLE 0x00494cb0
//   XREF to: 00494cb0 (CONDITIONAL_JUMP)
// 00494c84: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 00494c88: XOR EBX,EBX
// 00494c8a: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_00494c8a
// 00494c8d: PUSH EDI
// 00494c8e: ADD EAX,EBX
// 00494c90: PUSH EAX
// 00494c91: INC ESI
// 00494c92: CALL core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
//   XREF to: 0049a5a0 (UNCONDITIONAL_CALL)
// 00494c97: ADD EBX,0x38
// 00494c9a: MOV EAX,dword ptr [EBP + 0x4]
// 00494c9d: ADD ESP,0x8
// 00494ca0: CMP ESI,EAX
// 00494ca2: JL 0x00494c8a
//   XREF to: 00494c8a (CONDITIONAL_JUMP)
// 00494ca4: LEA EAX,[EAX]
// 00494caa: LEA EDX,[EDX]
// 00494cb0: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00494cb0
//   XREF to: Stack[0x8] (READ)
// 00494cb4: PUSH EDX
// 00494cb5: PUSH 0x1
// 00494cb7: MOV ECX,dword ptr [EBP + 0x4]
// 00494cba: PUSH ECX
// 00494cbb: MOV EBX,dword ptr [EBP + 0xc]
// 00494cbe: PUSH EBX
// 00494cbf: XOR ESI,ESI
// 00494cc1: XOR EDI,EDI
// 00494cc3: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00494cc8: ADD ESP,0x10
// 00494ccb: XOR EBX,EBX
// 00494ccd: MOV EDX,dword ptr [EBP + 0x44]
//   Label: LAB_00494ccd
// 00494cd0: MOV EAX,dword ptr [EBP + 0x40]
// 00494cd3: IMUL EAX,EDX
// 00494cd6: IMUL EAX,dword ptr [EBP + 0x48]
// 00494cda: CMP ESI,EAX
// 00494cdc: JGE 0x00494ad0
//   XREF to: 00494ad0 (CONDITIONAL_JUMP)
// 00494ce2: MOV EAX,dword ptr [EBP + 0x4c]
// 00494ce5: ADD EAX,EDI
// 00494ce7: CMP dword ptr [EAX],0x0
// 00494cea: JLE 0x00494d09
//   XREF to: 00494d09 (CONDITIONAL_JUMP)
// 00494cec: IMUL EDX,EBX,0x38
// 00494cef: MOV ECX,dword ptr [EBP + 0x8]
// 00494cf2: ADD ECX,EDX
// 00494cf4: MOV dword ptr [EAX + 0x4],ECX
// 00494cf7: MOV EDX,dword ptr [EBP + 0xc]
// 00494cfa: MOV ECX,dword ptr [EAX]
// 00494cfc: ADD EDX,EBX
// 00494cfe: ADD EBX,ECX
// 00494d00: MOV dword ptr [EAX + 0x54],EDX
// 00494d03: INC ESI
// 00494d04: ADD EDI,0x58
// 00494d07: JMP 0x00494ccd
//   XREF to: 00494ccd (UNCONDITIONAL_JUMP)
// 00494d09: MOV dword ptr [EAX + 0x54],0x0
//   Label: LAB_00494d09
// 00494d10: MOV dword ptr [EAX + 0x4],0x0
// 00494d17: INC ESI
// 00494d18: ADD EDI,0x58
// 00494d1b: JMP 0x00494ccd
//   XREF to: 00494ccd (UNCONDITIONAL_JUMP)
// 00494d1d: MOV EAX,dword ptr [EBP + 0x40]
//   Label: LAB_00494d1d
// 00494d20: IMUL EAX,dword ptr [EBP + 0x44]
// 00494d24: MOV ECX,dword ptr [EBP + 0x48]
// 00494d27: IMUL EAX,ECX
// 00494d2a: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00494d2e: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 00494d32: LEA EAX,[EBX + 0x1]
// 00494d35: SUB ESP,0x4
// 00494d38: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00494d3c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 00494d3f: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 00494d43: SUB ESP,0x4
// 00494d46: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00494d4c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 00494d4f: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00494d50: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 00494d55: ADD ESP,0xc
// 00494d58: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 00494d5c: ADD EDI,0x58
// 00494d5f: ADD EAX,0x34
// 00494d62: INC EBX
// 00494d63: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00494d67: JMP 0x00494afc
//   XREF to: 00494afc (UNCONDITIONAL_JUMP)
// 00494d6c: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_00494d6c
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00494d72: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00494d73: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00494d78: ADD ESP,0x4
// 00494d7b: PUSH EBP
// 00494d7c: CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
//   XREF to: 004942d0 (UNCONDITIONAL_CALL)
// 00494d81: ADD ESP,0x4
// 00494d84: PUSH EBP
// 00494d85: MOV ESI,0x1
// 00494d8a: CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   XREF to: 00494690 (UNCONDITIONAL_CALL)
// 00494d8f: ADD ESP,0x4
// 00494d92: MOV dword ptr [0x02cee5ac],ESI
//   XREF to: 02cee5ac (WRITE)
// 00494d98: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00494d98
//   XREF to: Stack[0x8] (READ)
// 00494d9c: TEST byte ptr [EAX + 0xc],0x20
// 00494da0: JNZ 0x00494daa
//   XREF to: 00494daa (CONDITIONAL_JUMP)
// 00494da2: ADD ESP,0x40
// 00494da5: POP EBP
// 00494da6: POP EDI
// 00494da7: POP ESI
// 00494da8: POP EBX
// 00494da9: RET
// 00494daa: MOV EDX,0x6228cb
//   Label: LAB_00494daa
//   XREF to: 006228cb (PARAM)
// 00494daf: MOV ECX,0x1ff
// 00494db4: PUSH 0x6228de
//   XREF to: 006228de (DATA)
// 00494db9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00494dbf: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00494dc5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00494dca: ADD ESP,0x4
// 00494dcd: ADD ESP,0x40
// 00494dd0: POP EBP
// 00494dd1: POP EDI
// 00494dd2: POP ESI
// 00494dd3: POP EBX
// 00494dd4: RET
