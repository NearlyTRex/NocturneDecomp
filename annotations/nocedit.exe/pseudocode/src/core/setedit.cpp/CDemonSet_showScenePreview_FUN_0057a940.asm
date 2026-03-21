; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_showScenePreview_FUN_0057a940(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x138]:256  acStack_138
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; float            Stack[-0x28]:4  fStack_28
; float            Stack[-0x24]:4  fStack_24
; void *           Stack[-0x20]:4  pvStack_20
; char *           Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; C3DSCamera *     Stack[-0x14]:4  pCStack_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584b77
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_00647629
;   TerminatedCString s_core_setedit_cpp_0064763d
;   TerminatedCString s_Out_of_memory_00647651
;   TerminatedCString s_Visit_d_rotate_d_zcheck__00647660
;   TerminatedCString s_Viewer_pos_8_4f_8_4f_8_4_0064768b
;   TerminatedCString s_f_006476c0
;   TerminatedCString s_core_setedit_cpp_006476c3
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   char* g_CurrentDebugFilename = 0067d200
;   CSlew* g_CSlewPtr = 03f48f84
;   int g_CubesTestedCount
;   ... and 26 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00
;   core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310
;   core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560
;   core_setedit.cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70
;   core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
;   core_slew.cpp_CSlew_free_FUN_005a20a0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a940
        ;   Label: core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940
    PUSH ESI                            ; 0057a941
    PUSH EDI                            ; 0057a942
    PUSH EBP                            ; 0057a943
    MOV EBP,ESP                         ; 0057a944
    SUB ESP,0x518                       ; 0057a946
    NOP                                 ; 0057a94c
    NOP                                 ; 0057a94d
    NOP                                 ; 0057a94e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057a94f
    XOR EDX,EDX                         ; 0057a952
    PUSH EBX                            ; 0057a954
    MOV dword ptr [EBP + -0x8],EDX      ; 0057a955
    NOP                                 ; 0057a958
    NOP                                 ; 0057a959
    NOP                                 ; 0057a95a
    NOP                                 ; 0057a95b
    MOV dword ptr [EBP + -0xc],EDX      ; 0057a95c
    NOP                                 ; 0057a95f
    NOP                                 ; 0057a960
    NOP                                 ; 0057a961
    NOP                                 ; 0057a962
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057a963
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057a968
    MOV ESI,dword ptr [0x00681ab8]      ; 0057a96b | g_CSlewPtr
    PUSH ESI                            ; 0057a971 | g_CSlewInstance
    MOV dword ptr [EBX + 0x14d154],0x0  ; 0057a972
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0057a97c
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0057a981
    MOV EDI,dword ptr [0x0067b654]      ; 0057a984 | g_CGamePtr
    PUSH EDI                            ; 0057a98a | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0057a98b
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057a990
    PUSH EBX                            ; 0057a993
    CALL core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560 ; 0057a994
        ;   XREF to: 00580560 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057a999
    PUSH EBX                            ; 0057a99c
    CALL core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310 ; 0057a99d
        ;   XREF to: 00580310 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet * this_ptr)
    MOV EAX,[0x00679394]                ; 0057a9a2 | g_WindowWidth
    IMUL EAX,dword ptr [0x00679398]     ; 0057a9a7 | g_WindowHeight
    ADD ESP,0x4                         ; 0057a9ae
    PUSH 0x786                          ; 0057a9b1
    PUSH 0x647629                       ; 0057a9b6 | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 0057a9bb
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0057a9bc
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057a9c1
    MOV dword ptr [EBP + -0x10],EAX     ; 0057a9c4
    NOP                                 ; 0057a9c7
    NOP                                 ; 0057a9c8
    NOP                                 ; 0057a9c9
    NOP                                 ; 0057a9ca
    TEST EAX,EAX                        ; 0057a9cb
    JZ 0x0057ad1d                       ; 0057a9cd
        ;   XREF to: 0057ad1d (CONDITIONAL_JUMP)  ; LAB_0057ad1d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a9d3
        ;   Label: LAB_0057a9d3
    ADD EAX,0x4                         ; 0057a9d6
    MOV dword ptr [EBP + -0x4],EAX      ; 0057a9d9
    NOP                                 ; 0057a9dc
    NOP                                 ; 0057a9dd
    NOP                                 ; 0057a9de
    NOP                                 ; 0057a9df
    MOV EAX,[0x0067cf44]                ; 0057a9e0 | g_CKeysPtr
        ;   Label: LAB_0057a9e0
    PUSH EAX                            ; 0057a9e5 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0057a9e6 | g_CKeysInstance
    CALL dword ptr [EBX + 0x8]          ; 0057a9e8
    MOV EBX,dword ptr [0x00681ab8]      ; 0057a9eb | g_CSlewInstance | g_CSlewPtr
    ADD ESP,0x4                         ; 0057a9f1
    MOV EAX,dword ptr [EBX]             ; 0057a9f4 | g_CSlewInstance
    MOV dword ptr [EBP + -0x2c],EAX     ; 0057a9f6
    NOP                                 ; 0057a9f9
    NOP                                 ; 0057a9fa
    NOP                                 ; 0057a9fb
    NOP                                 ; 0057a9fc
    LEA EAX,[EBX + 0x4]                 ; 0057a9fd | g_CSlewInstance.position.y
    MOV EAX,dword ptr [EAX]             ; 0057aa00 | g_CSlewInstance.position.y
    MOV dword ptr [EBP + -0x28],EAX     ; 0057aa02
    NOP                                 ; 0057aa05
    NOP                                 ; 0057aa06
    NOP                                 ; 0057aa07
    NOP                                 ; 0057aa08
    LEA EAX,[EBX + 0x8]                 ; 0057aa09 | g_CSlewInstance.position.z
    MOV EAX,dword ptr [EAX]             ; 0057aa0c | g_CSlewInstance.position.z
    LEA ESI,[EBX + 0xc]                 ; 0057aa0e | g_CSlewInstance.pitch
    MOV dword ptr [EBP + -0x24],EAX     ; 0057aa11
    NOP                                 ; 0057aa14
    NOP                                 ; 0057aa15
    NOP                                 ; 0057aa16
    NOP                                 ; 0057aa17
    MOV EAX,dword ptr [ESI]             ; 0057aa18 | g_CSlewInstance.pitch
    MOV dword ptr [EBP + -0x20],EAX     ; 0057aa1a
    NOP                                 ; 0057aa1d
    NOP                                 ; 0057aa1e
    NOP                                 ; 0057aa1f
    NOP                                 ; 0057aa20
    LEA EAX,[ESI + 0x4]                 ; 0057aa21 | g_CSlewInstance.yaw
    MOV EAX,dword ptr [EAX]             ; 0057aa24 | g_CSlewInstance.yaw
    MOV dword ptr [EBP + -0x1c],EAX     ; 0057aa26
    NOP                                 ; 0057aa29
    NOP                                 ; 0057aa2a
    NOP                                 ; 0057aa2b
    NOP                                 ; 0057aa2c
    LEA EAX,[ESI + 0x8]                 ; 0057aa2d | g_CSlewInstance.roll
    MOV EAX,dword ptr [EAX]             ; 0057aa30 | g_CSlewInstance.roll
    MOV dword ptr [EBP + -0x18],EAX     ; 0057aa32
    NOP                                 ; 0057aa35
    NOP                                 ; 0057aa36
    NOP                                 ; 0057aa37
    NOP                                 ; 0057aa38
    MOV EAX,dword ptr [EBX + 0x18]      ; 0057aa39 | g_CSlewInstance.slew_rate
    PUSH EBX                            ; 0057aa3c | g_CSlewInstance
    MOV dword ptr [EBP + -0x14],EAX     ; 0057aa3d
    NOP                                 ; 0057aa40
    NOP                                 ; 0057aa41
    NOP                                 ; 0057aa42
    NOP                                 ; 0057aa43
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0057aa44
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    MOV EAX,[0x00681ab8]                ; 0057aa49 | g_CSlewPtr
    ADD ESP,0x4                         ; 0057aa4e
    CMP EAX,0x32758e8                   ; 0057aa51 | g_CDemonCameraInstance.base.position
    JZ 0x0057aa72                       ; 0057aa56
        ;   XREF to: 0057aa72 (CONDITIONAL_JUMP)  ; LAB_0057aa72
    FLD float ptr [EAX]                 ; 0057aa58 | g_CSlewInstance
    FLD float ptr [EAX + 0x8]           ; 0057aa5a | g_CSlewInstance.position.z
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057aa5d | g_CSlewInstance.position.y
    MOV dword ptr [0x032758ec],EDX      ; 0057aa60 | g_CDemonCameraInstance.base.position+4
    FSTP float ptr [0x032758f0]         ; 0057aa66 | g_CDemonCameraInstance.base.position+8
    FSTP float ptr [0x032758e8]         ; 0057aa6c | g_CDemonCameraInstance.base.position
    MOV EAX,[0x00681ab8]                ; 0057aa72 | g_CSlewPtr
        ;   Label: LAB_0057aa72
    ADD EAX,0xc                         ; 0057aa77 | g_CSlewInstance.pitch
    PUSH EAX                            ; 0057aa7a | g_CSlewInstance.pitch
    PUSH 0x32758f4                      ; 0057aa7b | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0057aa80
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,[0x00681ab8]                ; 0057aa85 | g_CSlewInstance | g_CSlewPtr
    ADD ESP,0x8                         ; 0057aa8a
    MOV EDX,dword ptr [EAX + 0x18]      ; 0057aa8d | g_CSlewInstance.slew_rate
    MOV dword ptr [0x0327591c],EDX      ; 0057aa90 | g_CDemonCameraInstance.base.focal_length
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 0057aa96
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    PUSH 0x0                            ; 0057aa9b
    PUSH 0x32758e4                      ; 0057aa9d | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0057aaa2
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0057aaa7
    CMP dword ptr [EBP + -0x8],0x0      ; 0057aaaa
    NOP                                 ; 0057aaae
    NOP                                 ; 0057aaaf
    NOP                                 ; 0057aab0
    NOP                                 ; 0057aab1
    JZ 0x0057aabe                       ; 0057aab2
        ;   XREF to: 0057aabe (CONDITIONAL_JUMP)  ; LAB_0057aabe
    MOV dword ptr [0x03277d14],0x4      ; 0057aab4 | g_CDemonRaytraceInstance
    PUSH 0x0                            ; 0057aabe
        ;   Label: LAB_0057aabe
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057aac0
    PUSH 0x461c3f9a                     ; 0057aac3
    PUSH EDX                            ; 0057aac8
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0057aac9
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0057aace
    PUSH 0x0                            ; 0057aad1
    PUSH 0x32758e4                      ; 0057aad3 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0057aad8
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0057aadd
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 0057aae0
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
    MOV EBX,dword ptr [0x00681ab8]      ; 0057aae5 | g_CSlewInstance | g_CSlewPtr
    FLD float ptr [EBP + -0x2c]         ; 0057aaeb
    NOP                                 ; 0057aaee
    NOP                                 ; 0057aaef
    NOP                                 ; 0057aaf0
    NOP                                 ; 0057aaf1
    FCOMP float ptr [EBX]               ; 0057aaf2 | g_CSlewInstance
    FNSTSW AX                           ; 0057aaf4
    SAHF                                ; 0057aaf6
    JZ 0x0057ad45                       ; 0057aaf7
        ;   XREF to: 0057ad45 (CONDITIONAL_JUMP)  ; LAB_0057ad45
    XOR ECX,ECX                         ; 0057aafd
        ;   Label: LAB_0057aafd
    MOV dword ptr [EBP + -0xc],ECX      ; 0057aaff
    NOP                                 ; 0057ab02
    NOP                                 ; 0057ab03
    NOP                                 ; 0057ab04
    NOP                                 ; 0057ab05
    CMP dword ptr [EBP + -0x8],0x0      ; 0057ab06
        ;   Label: LAB_0057ab06
    NOP                                 ; 0057ab0a
    NOP                                 ; 0057ab0b
    NOP                                 ; 0057ab0c
    NOP                                 ; 0057ab0d
    JZ 0x0057ab9c                       ; 0057ab0e
        ;   XREF to: 0057ab9c (CONDITIONAL_JUMP)  ; LAB_0057ab9c
    CMP dword ptr [EBP + -0xc],0x0      ; 0057ab14
    NOP                                 ; 0057ab18
    NOP                                 ; 0057ab19
    NOP                                 ; 0057ab1a
    NOP                                 ; 0057ab1b
    JZ 0x0057adbe                       ; 0057ab1c
        ;   XREF to: 0057adbe (CONDITIONAL_JUMP)  ; LAB_0057adbe
    MOV ECX,dword ptr [EBP + -0x10]     ; 0057ab22
        ;   Label: LAB_0057ab22
    NOP                                 ; 0057ab25
    NOP                                 ; 0057ab26
    NOP                                 ; 0057ab27
    NOP                                 ; 0057ab28
    PUSH ECX                            ; 0057ab29
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057ab2a
    PUSH EBX                            ; 0057ab2d
    CALL core_setedit.cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70 ; 0057ab2e
        ;   XREF to: 0057ff70 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70(CDemonSet * this_ptr, char * coverage_map)
    ADD ESP,0x8                         ; 0057ab33
    PUSH -0x1                           ; 0057ab36
    LEA EAX,[ESP + 0x8]                 ; 0057ab38
    PUSH EAX                            ; 0057ab3c
    MOV ESI,dword ptr [0x02cf6a90]      ; 0057ab3d | g_MouseY
    PUSH ESI                            ; 0057ab43
    MOV EDI,dword ptr [0x02cf6a8c]      ; 0057ab44 | g_MouseX
    PUSH EDI                            ; 0057ab4a
    PUSH EBX                            ; 0057ab4b
    CALL core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0 ; 0057ab4c
        ;   XREF to: 005800d0 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0(CDemonSet * this_ptr, int screen_x, int screen_y, int * result_cameras, ...)
    ADD ESP,0x14                        ; 0057ab51
    TEST EAX,EAX                        ; 0057ab54
    JLE 0x0057ab8b                      ; 0057ab56
        ;   XREF to: 0057ab8b (CONDITIONAL_JUMP)  ; LAB_0057ab8b
    MOV ESI,0x21                        ; 0057ab58
    LEA EDI,[EAX*0x4 + 0x0]             ; 0057ab5d
    XOR EBX,EBX                         ; 0057ab64
    IMUL EAX,dword ptr [ESP + EBX*0x1 + 0x4],0x1a4 ; 0057ab66
        ;   Label: LAB_0057ab66
    ADD EAX,dword ptr [EBP + -0x4]      ; 0057ab6e
    NOP                                 ; 0057ab71
    NOP                                 ; 0057ab72
    NOP                                 ; 0057ab73
    NOP                                 ; 0057ab74
    PUSH EAX                            ; 0057ab75
    PUSH ESI                            ; 0057ab76
    PUSH 0x0                            ; 0057ab77
    ADD EBX,0x4                         ; 0057ab79
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 0057ab7c
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x, int y, char * text)
    ADD ESI,0xb                         ; 0057ab81
    ADD ESP,0xc                         ; 0057ab84
    CMP EBX,EDI                         ; 0057ab87
    JL 0x0057ab66                       ; 0057ab89
        ;   XREF to: 0057ab66 (CONDITIONAL_JUMP)  ; LAB_0057ab66
    PUSH 0x0                            ; 0057ab8b
        ;   Label: LAB_0057ab8b
    MOV EBX,dword ptr [0x00678a60]      ; 0057ab8d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0057ab93 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0057ab94
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0057ab99
    MOV ESI,dword ptr [0x02ca03a0]      ; 0057ab9c | g_CubesRenderedCount
        ;   Label: LAB_0057ab9c
    PUSH ESI                            ; 0057aba2
    MOV EDI,dword ptr [0x02ca039c]      ; 0057aba3 | g_CubesVisibleCount
    PUSH EDI                            ; 0057aba9
    MOV EAX,[0x02ca0398]                ; 0057abaa | g_CubesWithVoxelsCount
    PUSH EAX                            ; 0057abaf
    MOV EDX,dword ptr [0x02ca0394]      ; 0057abb0 | g_CubesTestedCount
    PUSH EDX                            ; 0057abb6
    PUSH 0x647660                       ; 0057abb7 | = "Visit %d, rotate: %d, zcheck %d, rend..."
    LEA EAX,[EBP + 0xfffffed4]          ; 0057abbc
    NOP                                 ; 0057abc2
    PUSH EAX                            ; 0057abc3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057abc4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0057abc9
    PUSH 0x16                           ; 0057abcc
    PUSH 0x0                            ; 0057abce
    LEA EAX,[EBP + 0xfffffed4]          ; 0057abd0
    NOP                                 ; 0057abd6
    PUSH EAX                            ; 0057abd7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057abd8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057abdd
    MOV EAX,[0x00681ab8]                ; 0057abe0 | g_CSlewPtr
    SUB ESP,0x8                         ; 0057abe5
    FLD float ptr [EAX + 0x10]          ; 0057abe8 | g_CSlewInstance.yaw
    FSTP double ptr [ESP]               ; 0057abeb
    SUB ESP,0x8                         ; 0057abee
    FLD float ptr [EAX + 0x14]          ; 0057abf1 | g_CSlewInstance.roll
    FSTP double ptr [ESP]               ; 0057abf4
    SUB ESP,0x8                         ; 0057abf7
    FLD float ptr [EAX + 0xc]           ; 0057abfa | g_CSlewInstance.pitch
    FSTP double ptr [ESP]               ; 0057abfd
    SUB ESP,0x8                         ; 0057ac00
    FLD float ptr [EAX + 0x8]           ; 0057ac03 | g_CSlewInstance.position.z
    FSTP double ptr [ESP]               ; 0057ac06
    SUB ESP,0x8                         ; 0057ac09
    FLD float ptr [EAX + 0x4]           ; 0057ac0c | g_CSlewInstance.position.y
    FSTP double ptr [ESP]               ; 0057ac0f
    SUB ESP,0x8                         ; 0057ac12
    FLD float ptr [EAX]                 ; 0057ac15 | g_CSlewInstance
    FSTP double ptr [ESP]               ; 0057ac17
    PUSH 0x64768b                       ; 0057ac1a | = "Viewer pos: %8.4f,%8.4f,%8.4f pbh: %6..."
    LEA EAX,[EBP + 0xfffffed4]          ; 0057ac1f
    NOP                                 ; 0057ac25
    PUSH EAX                            ; 0057ac26
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057ac27
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0057ac2c | g_WindowHeight
    ADD ESP,0x38                        ; 0057ac31
    SUB EAX,0x2c                        ; 0057ac34
    PUSH EAX                            ; 0057ac37
    PUSH 0x0                            ; 0057ac38
    LEA EAX,[EBP + 0xfffffed4]          ; 0057ac3a
    NOP                                 ; 0057ac40
    PUSH EAX                            ; 0057ac41
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057ac42
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x0067b654]                ; 0057ac47 | g_CGamePtr
    ADD ESP,0xc                         ; 0057ac4c
    MOV EAX,dword ptr [EAX + 0x264]     ; 0057ac4f | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 0057ac55
    FLD float ptr [ESP]                 ; 0057ac58
    FLD1                                ; 0057ac5b
    FDIVRP                              ; 0057ac5d
    SUB ESP,0x8                         ; 0057ac5f
    FSTP double ptr [ESP]               ; 0057ac62
    PUSH 0x6476c0                       ; 0057ac65 | = "%f"
    LEA EAX,[EBP + 0xfffffed4]          ; 0057ac6a
    NOP                                 ; 0057ac70
    PUSH EAX                            ; 0057ac71
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057ac72
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0057ac77 | g_WindowHeight
    ADD ESP,0x10                        ; 0057ac7c
    SUB EAX,0xb                         ; 0057ac7f
    PUSH EAX                            ; 0057ac82
    PUSH 0x0                            ; 0057ac83
    LEA EAX,[EBP + 0xfffffed4]          ; 0057ac85
    NOP                                 ; 0057ac8b
    PUSH EAX                            ; 0057ac8c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057ac8d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057ac92
    PUSH 0x0                            ; 0057ac95
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 0057ac97
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 0057ac9c
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 0057ac9f
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057aca4
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV ECX,dword ptr [0x0067b654]      ; 0057aca9 | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 0057acaf | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0057acb0
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057acb5
    MOV EAX,[0x0067cf44]                ; 0057acb8 | g_CKeysPtr
    PUSH 0x1                            ; 0057acbd
    MOV EBX,dword ptr [EAX]             ; 0057acbf | g_CKeysInstance
    PUSH EAX                            ; 0057acc1 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0057acc2
    ADD ESP,0x8                         ; 0057acc4
    TEST EAX,EAX                        ; 0057acc7
    JNZ 0x0057ade5                      ; 0057acc9
        ;   XREF to: 0057ade5 (CONDITIONAL_JUMP)  ; LAB_0057ade5
    PUSH 0x13                           ; 0057accf
    MOV EAX,[0x0067cf44]                ; 0057acd1 | g_CKeysPtr
    PUSH EAX                            ; 0057acd6 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0057acd7 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0057acd9
    ADD ESP,0x8                         ; 0057acdc
    TEST EAX,EAX                        ; 0057acdf
    JZ 0x0057ace9                       ; 0057ace1
        ;   XREF to: 0057ace9 (CONDITIONAL_JUMP)  ; LAB_0057ace9
    INC dword ptr [0x03277d14]          ; 0057ace3 | g_CDemonRaytraceInstance
    PUSH 0x2e                           ; 0057ace9
        ;   Label: LAB_0057ace9
    MOV EAX,[0x0067cf44]                ; 0057aceb | g_CKeysPtr
    PUSH EAX                            ; 0057acf0 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0057acf1 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0057acf3
    ADD ESP,0x8                         ; 0057acf6
    TEST EAX,EAX                        ; 0057acf9
    JZ 0x0057a9e0                       ; 0057acfb
        ;   XREF to: 0057a9e0 (CONDITIONAL_JUMP)  ; LAB_0057a9e0
    CMP dword ptr [EBP + -0x8],0x0      ; 0057ad01
    NOP                                 ; 0057ad05
    NOP                                 ; 0057ad06
    NOP                                 ; 0057ad07
    NOP                                 ; 0057ad08
    SETZ AL                             ; 0057ad09
    AND EAX,0xff                        ; 0057ad0c
    MOV dword ptr [EBP + -0x8],EAX      ; 0057ad11
    NOP                                 ; 0057ad14
    NOP                                 ; 0057ad15
    NOP                                 ; 0057ad16
    NOP                                 ; 0057ad17
    JMP 0x0057a9e0                      ; 0057ad18
        ;   XREF to: 0057a9e0 (UNCONDITIONAL_JUMP)  ; LAB_0057a9e0
    MOV EBX,0x64763d                    ; 0057ad1d | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057ad1d
    MOV ESI,0x787                       ; 0057ad22
    PUSH 0x647651                       ; 0057ad27 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EBX      ; 0057ad2c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0057ad32 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057ad38
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057ad3d
    JMP 0x0057a9d3                      ; 0057ad40
        ;   XREF to: 0057a9d3 (UNCONDITIONAL_JUMP)  ; LAB_0057a9d3
    FLD float ptr [EBP + -0x28]         ; 0057ad45
        ;   Label: LAB_0057ad45
    NOP                                 ; 0057ad48
    NOP                                 ; 0057ad49
    NOP                                 ; 0057ad4a
    NOP                                 ; 0057ad4b
    FCOMP float ptr [EBX + 0x4]         ; 0057ad4c | g_CSlewInstance.position.y
    FNSTSW AX                           ; 0057ad4f
    SAHF                                ; 0057ad51
    JNZ 0x0057aafd                      ; 0057ad52
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    FLD float ptr [EBP + -0x24]         ; 0057ad58
    NOP                                 ; 0057ad5b
    NOP                                 ; 0057ad5c
    NOP                                 ; 0057ad5d
    NOP                                 ; 0057ad5e
    FCOMP float ptr [EBX + 0x8]         ; 0057ad5f | g_CSlewInstance.position.z
    FNSTSW AX                           ; 0057ad62
    SAHF                                ; 0057ad64
    JNZ 0x0057aafd                      ; 0057ad65
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    LEA ESI,[EBX + 0xc]                 ; 0057ad6b | g_CSlewInstance.pitch
    FLD float ptr [EBP + -0x20]         ; 0057ad6e
    NOP                                 ; 0057ad71
    NOP                                 ; 0057ad72
    NOP                                 ; 0057ad73
    NOP                                 ; 0057ad74
    FCOMP float ptr [ESI]               ; 0057ad75 | g_CSlewInstance.pitch
    FNSTSW AX                           ; 0057ad77
    SAHF                                ; 0057ad79
    JNZ 0x0057aafd                      ; 0057ad7a
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    FLD float ptr [EBP + -0x1c]         ; 0057ad80
    NOP                                 ; 0057ad83
    NOP                                 ; 0057ad84
    NOP                                 ; 0057ad85
    NOP                                 ; 0057ad86
    FCOMP float ptr [ESI + 0x4]         ; 0057ad87 | g_CSlewInstance.yaw
    FNSTSW AX                           ; 0057ad8a
    SAHF                                ; 0057ad8c
    JNZ 0x0057aafd                      ; 0057ad8d
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    FLD float ptr [EBP + -0x18]         ; 0057ad93
    NOP                                 ; 0057ad96
    NOP                                 ; 0057ad97
    NOP                                 ; 0057ad98
    NOP                                 ; 0057ad99
    FCOMP float ptr [ESI + 0x8]         ; 0057ad9a | g_CSlewInstance.roll
    FNSTSW AX                           ; 0057ad9d
    SAHF                                ; 0057ad9f
    JNZ 0x0057aafd                      ; 0057ada0
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    FLD float ptr [EBP + -0x14]         ; 0057ada6
    NOP                                 ; 0057ada9
    NOP                                 ; 0057adaa
    NOP                                 ; 0057adab
    NOP                                 ; 0057adac
    FCOMP float ptr [EBX + 0x18]        ; 0057adad | g_CSlewInstance.slew_rate
    FNSTSW AX                           ; 0057adb0
    SAHF                                ; 0057adb2
    JNZ 0x0057aafd                      ; 0057adb3
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    JMP 0x0057ab06                      ; 0057adb9
        ;   XREF to: 0057ab06 (UNCONDITIONAL_JUMP)  ; LAB_0057ab06
    PUSH -0x1                           ; 0057adbe
        ;   Label: LAB_0057adbe
    MOV EDI,dword ptr [EBP + -0x10]     ; 0057adc0
    NOP                                 ; 0057adc3
    NOP                                 ; 0057adc4
    NOP                                 ; 0057adc5
    NOP                                 ; 0057adc6
    PUSH EDI                            ; 0057adc7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057adc8
    PUSH EAX                            ; 0057adcb
    CALL core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00 ; 0057adcc
        ;   XREF to: 0057fd00 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00(CDemonSet * this_ptr, char * coverage_map, int exclude_camera_index)
    MOV EDX,0x1                         ; 0057add1
    ADD ESP,0xc                         ; 0057add6
    MOV dword ptr [EBP + -0xc],EDX      ; 0057add9
    NOP                                 ; 0057addc
    NOP                                 ; 0057addd
    NOP                                 ; 0057adde
    NOP                                 ; 0057addf
    JMP 0x0057ab22                      ; 0057ade0
        ;   XREF to: 0057ab22 (UNCONDITIONAL_JUMP)  ; LAB_0057ab22
    MOV EDI,0x6476c3                    ; 0057ade5 | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057ade5
    MOV EDX,dword ptr [EBP + -0x10]     ; 0057adea
    NOP                                 ; 0057aded
    NOP                                 ; 0057adee
    NOP                                 ; 0057adef
    NOP                                 ; 0057adf0
    MOV EAX,0x7f0                       ; 0057adf1
    PUSH EDX                            ; 0057adf6
    MOV dword ptr [0x0067d20c],EDI      ; 0057adf7 | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 0057adfd | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0057ae02
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0057ae07
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057ae0a
    PUSH ECX                            ; 0057ae0d
    CALL core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560 ; 0057ae0e
        ;   XREF to: 00580560 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057ae13
    MOV EBX,dword ptr [0x00681ab8]      ; 0057ae16 | g_CSlewInstance | g_CSlewPtr
    PUSH EBX                            ; 0057ae1c | g_CSlewInstance
    CALL core_slew.cpp_CSlew_free_FUN_005a20a0 ; 0057ae1d
        ;   XREF to: 005a20a0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_free_FUN_005a20a0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0057ae22
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057ae25
    PUSH ESI                            ; 0057ae28
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 0057ae29
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057ae2e
    XOR EDI,EDI                         ; 0057ae31
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057ae33
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [0x03277d14],EDI      ; 0057ae38 | g_CDemonRaytraceInstance
    MOV ESP,EBP                         ; 0057ae3e
    POP EBP                             ; 0057ae40
    POP EDI                             ; 0057ae41
    POP ESI                             ; 0057ae42
    POP EBX                             ; 0057ae43
    RET                                 ; 0057ae44

