; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_showCameraEditor_FUN_0057e7c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4790]:4  local_4790
; undefined4       Stack[-0x478c]:4  local_478c
; undefined1       Stack[-0x4788]:1  local_4788
; undefined1       Stack[-0x2ef0]:1  local_2ef0
; undefined1       Stack[-0x1658]:1  local_1658
; undefined1       Stack[-0x12b0]:1  local_12b0
; undefined1       Stack[-0xf08]:1  local_f08
; undefined1       Stack[-0xb60]:1  local_b60
; undefined4       Stack[-0xa60]:4  local_a60
; undefined4       Stack[-0xa5c]:4  local_a5c
; undefined4       Stack[-0xa58]:4  local_a58
; undefined4       Stack[-0xa54]:4  local_a54
; undefined4       Stack[-0xa50]:4  local_a50
; undefined4       Stack[-0xa4c]:4  local_a4c
; undefined1       Stack[-0x9bc]:1  local_9bc
; undefined1       Stack[-0x8bc]:1  local_8bc
; undefined1       Stack[-0x7bc]:1  local_7bc
; undefined1       Stack[-0x7bb]:1  local_7bb
; undefined1       Stack[-0x6bc]:1  local_6bc
; undefined1       Stack[-0x5bc]:1  local_5bc
; undefined1       Stack[-0x4bd]:1  local_4bd
; undefined1       Stack[-0x4bc]:1  local_4bc
; undefined1       Stack[-0x4bb]:1  local_4bb
; undefined1       Stack[-0x3bc]:1  local_3bc
; undefined1       Stack[-0x2bc]:1  local_2bc
; undefined1       Stack[-0x1bc]:1  local_1bc
; undefined1       Stack[-0xbc]:1  local_bc
; undefined1       Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584b90
;
; Referenced Globals:
;   void* switchdataD_0057e77c = 0057ea93
;   TerminatedCString s_d_006465a5
;   TerminatedCString s_Demented_Camera_Editor_006480b5
;   TerminatedCString s_s_006480cc
;   TerminatedCString s_s_1_Add_new_camera_006480cf
;   TerminatedCString s_s_2_Delete_existing_came_006480e2
;   TerminatedCString s_s_3_Edit_existing_camera_006480fd
;   TerminatedCString s_s_4_Save_set_00648116
;   TerminatedCString s_s_5_Rename_all_cameras_00648123
;   TerminatedCString s_s_6_Clone_a_camera_0064813a
;   TerminatedCString s_s_7_Merge_LC_file_0064814d
;   TerminatedCString s_s_8_Precompute_all_PVS_00648160
;   TerminatedCString s_s_9_Merge2_00648177
;   TerminatedCString s_A_Rename2_00648182
;   TerminatedCString s_Name_this_new_camera_0064818e
;   ... and 86 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560
;   core_setedit.cpp_CDemonSet_deleteCamera_FUN_0057e430
;   core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660
;   core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0
;   core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
;   core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
;   core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
;   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
;   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e7c0
        ;   Label: core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0
    PUSH ESI                            ; 0057e7c1
    PUSH EDI                            ; 0057e7c2
    PUSH EBP                            ; 0057e7c3
    MOV EBP,ESP                         ; 0057e7c4
    SUB ESP,0x4778                      ; 0057e7c6
    AND ESP,0xfffffff8                  ; 0057e7cc
    PUSH 0x0                            ; 0057e7cf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057e7d1
    PUSH EDX                            ; 0057e7d4
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 0057e7d5
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 0057e7da
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057e7dd
    ADD EAX,0x4                         ; 0057e7e0
    MOV dword ptr [ESP + 0x4744],EAX    ; 0057e7e3
    MOV dword ptr [ESP + 0x4754],EAX    ; 0057e7ea
    MOV dword ptr [ESP + 0x4750],EAX    ; 0057e7f1
    MOV dword ptr [ESP + 0x474c],EAX    ; 0057e7f8
    MOV dword ptr [ESP + 0x4748],EAX    ; 0057e7ff
    MOV dword ptr [ESP + 0x470c],EAX    ; 0057e806
    MOV dword ptr [ESP + 0x4710],EAX    ; 0057e80d
    MOV dword ptr [ESP + 0x4718],EAX    ; 0057e814
    MOV dword ptr [ESP + 0x4728],EAX    ; 0057e81b
    MOV dword ptr [ESP + 0x472c],EAX    ; 0057e822
    MOV dword ptr [ESP + 0x4708],EAX    ; 0057e829
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057e830
    ADD EAX,0x14d0f0                    ; 0057e833
    MOV dword ptr [ESP + 0x4714],EAX    ; 0057e838
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057e83f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0057e83f
    PUSH 0x0                            ; 0057e844
    PUSH 0x0                            ; 0057e846
    PUSH 0x6480b5                       ; 0057e848 | = "Demented Camera Editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e84d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057e852
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057e855
    MOV EDI,0x16                        ; 0057e858
    XOR ESI,ESI                         ; 0057e85d
    MOV ECX,dword ptr [EAX]             ; 0057e85f
    XOR EBX,EBX                         ; 0057e861
    TEST ECX,ECX                        ; 0057e863
    JLE 0x0057e8eb                      ; 0057e865
        ;   XREF to: 0057e8eb (CONDITIONAL_JUMP)  ; LAB_0057e8eb
    MOV EAX,dword ptr [ESP + 0x4708]    ; 0057e86b
    MOV dword ptr [ESP + 0x4758],EAX    ; 0057e872
    MOV ECX,dword ptr [ESP + 0x4758]    ; 0057e879
        ;   Label: LAB_0057e879
    PUSH ECX                            ; 0057e880
    PUSH 0x6480cc                       ; 0057e881 | = "%s"
    LEA EAX,[ESP + 0x42d4]              ; 0057e886
    PUSH EAX                            ; 0057e88d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057e88e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057e893
    PUSH EDI                            ; 0057e896
    PUSH ESI                            ; 0057e897
    LEA EAX,[ESP + 0x42d4]              ; 0057e898
    PUSH EAX                            ; 0057e89f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e8a0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679398]                ; 0057e8a5 | g_WindowHeight
    MOV EDX,EAX                         ; 0057e8aa
    SAR EDX,0x1f                        ; 0057e8ac
    SUB EAX,EDX                         ; 0057e8af
    SAR EAX,0x1                         ; 0057e8b1
    ADD EDI,0xb                         ; 0057e8b3
    SUB EAX,0xb                         ; 0057e8b6
    ADD ESP,0xc                         ; 0057e8b9
    CMP EDI,EAX                         ; 0057e8bc
    JLE 0x0057e8d8                      ; 0057e8be
        ;   XREF to: 0057e8d8 (CONDITIONAL_JUMP)  ; LAB_0057e8d8
    MOV EAX,[0x00679394]                ; 0057e8c0 | g_WindowWidth
    MOV EDX,EAX                         ; 0057e8c5
    MOV ECX,0x7                         ; 0057e8c7
    SAR EDX,0x1f                        ; 0057e8cc
    IDIV ECX                            ; 0057e8cf
    MOV EDI,0x16                        ; 0057e8d1
    ADD ESI,EAX                         ; 0057e8d6
    ADD dword ptr [ESP + 0x4758],0x1a4  ; 0057e8d8
        ;   Label: LAB_0057e8d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057e8e3
    INC EBX                             ; 0057e8e6
    CMP EBX,dword ptr [EAX]             ; 0057e8e7
    JL 0x0057e879                       ; 0057e8e9
        ;   XREF to: 0057e879 (CONDITIONAL_JUMP)  ; LAB_0057e879
    MOV EAX,[0x00679398]                ; 0057e8eb | g_WindowHeight
        ;   Label: LAB_0057e8eb
    MOV EDX,EAX                         ; 0057e8f0
    SAR EDX,0x1f                        ; 0057e8f2
    SUB EAX,EDX                         ; 0057e8f5
    SAR EAX,0x1                         ; 0057e8f7
    PUSH EAX                            ; 0057e8f9
    PUSH 0x0                            ; 0057e8fa
    PUSH 0x6480cf                       ; 0057e8fc | = "1.  Add new camera"
    MOV EBX,EAX                         ; 0057e901
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e903
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057e908
    LEA ESI,[EBX + 0xb]                 ; 0057e90b
    PUSH ESI                            ; 0057e90e
    PUSH 0x0                            ; 0057e90f
    PUSH 0x6480e2                       ; 0057e911 | = "2.  Delete existing camera"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e916
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057e91b
    LEA EDI,[EBX + 0x16]                ; 0057e91e
    PUSH EDI                            ; 0057e921
    PUSH 0x0                            ; 0057e922
    PUSH 0x6480fd                       ; 0057e924 | = "3.  Edit existing camera"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e929
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,EBX                         ; 0057e92e
    ADD ESP,0xc                         ; 0057e930
    ADD EAX,0x21                        ; 0057e933
    PUSH EAX                            ; 0057e936
    PUSH 0x0                            ; 0057e937
    PUSH 0x648116                       ; 0057e939 | = "4.  Save set"
    MOV dword ptr [ESP + 0x4780],EAX    ; 0057e93e
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e945
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0057e94a | g_WindowWidth
    MOV EDX,EAX                         ; 0057e94f
    MOV ECX,0x3                         ; 0057e951
    SAR EDX,0x1f                        ; 0057e956
    IDIV ECX                            ; 0057e959
    ADD ESP,0xc                         ; 0057e95b
    PUSH EBX                            ; 0057e95e
    PUSH EAX                            ; 0057e95f
    PUSH 0x648123                       ; 0057e960 | = "5.  Rename all cameras"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e965
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0057e96a | g_WindowWidth
    MOV EDX,EAX                         ; 0057e96f
    MOV ECX,0x3                         ; 0057e971
    SAR EDX,0x1f                        ; 0057e976
    IDIV ECX                            ; 0057e979
    ADD ESP,0xc                         ; 0057e97b
    PUSH ESI                            ; 0057e97e
    PUSH EAX                            ; 0057e97f
    PUSH 0x64813a                       ; 0057e980 | = "6.  Clone a camera"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e985
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0057e98a | g_WindowWidth
    MOV EDX,EAX                         ; 0057e98f
    MOV ECX,0x3                         ; 0057e991
    SAR EDX,0x1f                        ; 0057e996
    IDIV ECX                            ; 0057e999
    ADD ESP,0xc                         ; 0057e99b
    PUSH EDI                            ; 0057e99e
    PUSH EAX                            ; 0057e99f
    PUSH 0x64814d                       ; 0057e9a0 | = "7.  Merge .LC file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e9a5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0057e9aa | g_WindowWidth
    MOV EDX,EAX                         ; 0057e9af
    MOV ECX,0x3                         ; 0057e9b1
    SAR EDX,0x1f                        ; 0057e9b6
    IDIV ECX                            ; 0057e9b9
    ADD ESP,0xc                         ; 0057e9bb
    MOV EDI,dword ptr [ESP + 0x4774]    ; 0057e9be
    PUSH EDI                            ; 0057e9c5
    PUSH EAX                            ; 0057e9c6
    PUSH 0x648160                       ; 0057e9c7 | = "8.  Precompute all PVS"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e9cc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [0x00679394]      ; 0057e9d1 | g_WindowWidth
    ADD EDX,EDX                         ; 0057e9d7
    MOV ECX,0x3                         ; 0057e9d9
    MOV EAX,EDX                         ; 0057e9de
    SAR EDX,0x1f                        ; 0057e9e0
    IDIV ECX                            ; 0057e9e3
    ADD ESP,0xc                         ; 0057e9e5
    PUSH EBX                            ; 0057e9e8
    PUSH EAX                            ; 0057e9e9
    PUSH 0x648177                       ; 0057e9ea | = "9.  Merge2"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e9ef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [0x00679394]      ; 0057e9f4 | g_WindowWidth
    ADD EDX,EDX                         ; 0057e9fa
    MOV ECX,0x3                         ; 0057e9fc
    MOV EAX,EDX                         ; 0057ea01
    SAR EDX,0x1f                        ; 0057ea03
    IDIV ECX                            ; 0057ea06
    ADD ESP,0xc                         ; 0057ea08
    PUSH ESI                            ; 0057ea0b
    PUSH EAX                            ; 0057ea0c
    PUSH 0x648182                       ; 0057ea0d | = "A.  Rename2"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057ea12
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057ea17
    PUSH 0x0                            ; 0057ea1a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ea1c
    PUSH EAX                            ; 0057ea1f
    CALL core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0 ; 0057ea20
        ;   XREF to: 00577af0 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(CDemonSet * this_ptr, int * camera_flags)
    ADD ESP,0x8                         ; 0057ea25
    CMP EAX,-0x1                        ; 0057ea28
    JZ 0x0057ea4c                       ; 0057ea2b
        ;   XREF to: 0057ea4c (CONDITIONAL_JUMP)  ; LAB_0057ea4c
    PUSH EAX                            ; 0057ea2d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057ea2e
    PUSH EDX                            ; 0057ea31
    CALL core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 ; 0057ea32
        ;   XREF to: 0057d660 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet * this_ptr, int camera_index)
    ADD ESP,0x8                         ; 0057ea37
    TEST EAX,EAX                        ; 0057ea3a
    JZ 0x0057ea4c                       ; 0057ea3c
        ;   XREF to: 0057ea4c (CONDITIONAL_JUMP)  ; LAB_0057ea4c
    PUSH 0x1                            ; 0057ea3e
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057ea40
    PUSH ECX                            ; 0057ea43
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 0057ea44
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 0057ea49
    CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 ; 0057ea4c
        ;   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0()
        ;   Label: LAB_0057ea4c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057ea51
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0057ea56
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
    TEST EAX,EAX                        ; 0057ea5b
    JZ 0x0057eb69                       ; 0057ea5d
        ;   XREF to: 0057eb69 (CONDITIONAL_JUMP)  ; LAB_0057eb69
    MOV ESI,dword ptr [0x0067cf44]      ; 0057ea63 | g_CKeysPtr
    PUSH ESI                            ; 0057ea69 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0057ea6a
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0057ea6f
    MOV dword ptr [ESP + 0x4704],EAX    ; 0057ea72
    MOV EAX,dword ptr [ESP + 0x4704]    ; 0057ea79
        ;   Label: LAB_0057ea79
    SUB EAX,0x31                        ; 0057ea80
    CMP EAX,0x10                        ; 0057ea83
    JA 0x0057eb43                       ; 0057ea86
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EAX*0x4 + 0x57e77c]  ; 0057ea8c | caseD_31 | caseD_3f | caseD_32
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ea93
        ;   Label: caseD_31
    MOV EBX,dword ptr [EAX]             ; 0057ea96
    CMP EBX,0xfa                        ; 0057ea98
    JGE 0x0057eb43                      ; 0057ea9e
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    IMUL EAX,EBX,0x1a4                  ; 0057eaa4
    ADD EAX,dword ptr [ESP + 0x4744]    ; 0057eaaa
    PUSH EAX                            ; 0057eab1
    CALL core_setutil.cpp_C3DSCamera_reset_FUN_005853b0 ; 0057eab2
        ;   XREF to: 005853b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 0057eab7
    PUSH 0x64818e                       ; 0057eaba | = "Name this new camera : "
    PUSH 0x0                            ; 0057eabf
    PUSH 0x0                            ; 0057eac1
    PUSH 0x8                            ; 0057eac3
    LEA EAX,[ESP + 0x42dc]              ; 0057eac5
    PUSH EAX                            ; 0057eacc
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0057eacd
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0057ead2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ead5
    IMUL EDI,dword ptr [EAX],0x1a4      ; 0057ead8
    MOV ECX,dword ptr [ESP + 0x4744]    ; 0057eade
    LEA ESI,[ESP + 0x42cc]              ; 0057eae5
    ADD EDI,ECX                         ; 0057eaec
    PUSH EDI                            ; 0057eaee
    MOV AL,byte ptr [ESI]               ; 0057eaef
        ;   Label: LAB_0057eaef
    MOV byte ptr [EDI],AL               ; 0057eaf1
    CMP AL,0x0                          ; 0057eaf3
    JZ 0x0057eb07                       ; 0057eaf5
        ;   XREF to: 0057eb07 (CONDITIONAL_JUMP)  ; LAB_0057eb07
    MOV AL,byte ptr [ESI + 0x1]         ; 0057eaf7
    ADD ESI,0x2                         ; 0057eafa
    MOV byte ptr [EDI + 0x1],AL         ; 0057eafd
    ADD EDI,0x2                         ; 0057eb00
    CMP AL,0x0                          ; 0057eb03
    JNZ 0x0057eaef                      ; 0057eb05
        ;   XREF to: 0057eaef (CONDITIONAL_JUMP)  ; LAB_0057eaef
    POP EDI                             ; 0057eb07
        ;   Label: LAB_0057eb07
    LEA EDI,[ESP + 0x42cc]              ; 0057eb08
    SUB ECX,ECX                         ; 0057eb0f
    DEC ECX                             ; 0057eb11
    XOR EAX,EAX                         ; 0057eb12
    SCASB.REPNE ES:EDI                  ; 0057eb14
    NOT ECX                             ; 0057eb16
    DEC ECX                             ; 0057eb18
    TEST ECX,ECX                        ; 0057eb19
    JZ 0x0057eb43                       ; 0057eb1b
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057eb1d
    MOV EBX,dword ptr [EAX]             ; 0057eb20
    PUSH EBX                            ; 0057eb22
    PUSH EAX                            ; 0057eb23
    CALL core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 ; 0057eb24
        ;   XREF to: 0057d660 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet * this_ptr, int camera_index)
    ADD ESP,0x8                         ; 0057eb29
    TEST EAX,EAX                        ; 0057eb2c
    JZ 0x0057eb43                       ; 0057eb2e
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057eb30
    MOV EDX,dword ptr [EDI]             ; 0057eb33
    PUSH 0x1                            ; 0057eb35
    INC EDX                             ; 0057eb37
    PUSH EDI                            ; 0057eb38
    MOV dword ptr [EDI],EDX             ; 0057eb39
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 0057eb3b
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
        ;   Label: LAB_0057eb3b
    ADD ESP,0x8                         ; 0057eb40
        ;   Label: LAB_0057eb40
    CMP dword ptr [ESP + 0x4704],0x1b   ; 0057eb43
        ;   Label: caseD_40
    JNZ 0x0057e83f                      ; 0057eb4b
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057eb51
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057eb56
    PUSH ECX                            ; 0057eb59
    CALL core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560 ; 0057eb5a
        ;   XREF to: 00580560 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057eb5f
    MOV ESP,EBP                         ; 0057eb62
    POP EBP                             ; 0057eb64
    POP EDI                             ; 0057eb65
    POP ESI                             ; 0057eb66
    POP EBX                             ; 0057eb67
    RET                                 ; 0057eb68
    MOV dword ptr [ESP + 0x4704],0xffffffff ; 0057eb69
        ;   Label: LAB_0057eb69
    JMP 0x0057ea79                      ; 0057eb74
        ;   XREF to: 0057ea79 (UNCONDITIONAL_JUMP)  ; LAB_0057ea79
    LEA EAX,[ESP + 0x3880]              ; 0057eb79
        ;   Label: caseD_32
    PUSH EAX                            ; 0057eb80
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057eb81
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057eb86
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057eb89
    MOV ECX,dword ptr [EAX]             ; 0057eb8c
    XOR EDI,EDI                         ; 0057eb8e
    TEST ECX,ECX                        ; 0057eb90
    JLE 0x0057ebbc                      ; 0057eb92
        ;   XREF to: 0057ebbc (CONDITIONAL_JUMP)  ; LAB_0057ebbc
    MOV EBX,dword ptr [ESP + 0x470c]    ; 0057eb94
    PUSH EBX                            ; 0057eb9b
        ;   Label: LAB_0057eb9b
    LEA EAX,[ESP + 0x3884]              ; 0057eb9c
    PUSH EAX                            ; 0057eba3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057eba4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057eba9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ebac
    INC EDI                             ; 0057ebaf
    MOV EDX,dword ptr [EAX]             ; 0057ebb0
    ADD EBX,0x1a4                       ; 0057ebb2
    CMP EDI,EDX                         ; 0057ebb8
    JL 0x0057eb9b                       ; 0057ebba
        ;   XREF to: 0057eb9b (CONDITIONAL_JUMP)  ; LAB_0057eb9b
    PUSH 0x0                            ; 0057ebbc
        ;   Label: LAB_0057ebbc
    PUSH -0x1                           ; 0057ebbe
    PUSH 0x6481a6                       ; 0057ebc0 | = "Delete which camera"
    LEA EAX,[ESP + 0x388c]              ; 0057ebc5
    PUSH EAX                            ; 0057ebcc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057ebcd
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0057ebd2
    TEST EAX,EAX                        ; 0057ebd5
    JL 0x0057ebf4                       ; 0057ebd7
        ;   XREF to: 0057ebf4 (CONDITIONAL_JUMP)  ; LAB_0057ebf4
    PUSH EAX                            ; 0057ebd9
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057ebda
    PUSH ECX                            ; 0057ebdd
    CALL core_setedit.cpp_CDemonSet_deleteCamera_FUN_0057e430 ; 0057ebde
        ;   XREF to: 0057e430 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_deleteCamera_FUN_0057e430(CDemonSet * this_ptr, int camera_index)
    ADD ESP,0x8                         ; 0057ebe3
    PUSH 0x1                            ; 0057ebe6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057ebe8
    PUSH EBX                            ; 0057ebeb
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 0057ebec
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 0057ebf1
    PUSH 0x0                            ; 0057ebf4
        ;   Label: LAB_0057ebf4
    LEA EAX,[ESP + 0x3884]              ; 0057ebf6
    PUSH EAX                            ; 0057ebfd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057ebfe
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x0057eb40                      ; 0057ec03
        ;   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)  ; LAB_0057eb40
    LEA EAX,[ESP + 0x3130]              ; 0057ec08
        ;   Label: caseD_33
    PUSH EAX                            ; 0057ec0f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057ec10
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057ec15
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ec18
    MOV EDX,dword ptr [EAX]             ; 0057ec1b
    XOR EDI,EDI                         ; 0057ec1d
    TEST EDX,EDX                        ; 0057ec1f
    JLE 0x0057ec4b                      ; 0057ec21
        ;   XREF to: 0057ec4b (CONDITIONAL_JUMP)  ; LAB_0057ec4b
    MOV EBX,dword ptr [ESP + 0x4710]    ; 0057ec23
    PUSH EBX                            ; 0057ec2a
        ;   Label: LAB_0057ec2a
    LEA EAX,[ESP + 0x3134]              ; 0057ec2b
    PUSH EAX                            ; 0057ec32
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057ec33
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057ec38
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ec3b
    INC EDI                             ; 0057ec3e
    MOV ESI,dword ptr [EAX]             ; 0057ec3f
    ADD EBX,0x1a4                       ; 0057ec41
    CMP EDI,ESI                         ; 0057ec47
    JL 0x0057ec2a                       ; 0057ec49
        ;   XREF to: 0057ec2a (CONDITIONAL_JUMP)  ; LAB_0057ec2a
    PUSH 0x0                            ; 0057ec4b
        ;   Label: LAB_0057ec4b
    PUSH -0x1                           ; 0057ec4d
    PUSH 0x6481ba                       ; 0057ec4f | = "Move which camera"
    LEA EAX,[ESP + 0x313c]              ; 0057ec54
    PUSH EAX                            ; 0057ec5b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057ec5c
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0057ec61
    TEST EAX,EAX                        ; 0057ec64
    JL 0x0057ec84                       ; 0057ec66
        ;   XREF to: 0057ec84 (CONDITIONAL_JUMP)  ; LAB_0057ec84
    PUSH EAX                            ; 0057ec68
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057ec69
    PUSH EDI                            ; 0057ec6c
    CALL core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 ; 0057ec6d
        ;   XREF to: 0057d660 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet * this_ptr, int camera_index)
    ADD ESP,0x8                         ; 0057ec72
    TEST EAX,EAX                        ; 0057ec75
    JZ 0x0057ec84                       ; 0057ec77
        ;   XREF to: 0057ec84 (CONDITIONAL_JUMP)  ; LAB_0057ec84
    PUSH 0x1                            ; 0057ec79
    PUSH EDI                            ; 0057ec7b
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 0057ec7c
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 0057ec81
    PUSH 0x0                            ; 0057ec84
        ;   Label: LAB_0057ec84
    LEA EAX,[ESP + 0x3134]              ; 0057ec86
    PUSH EAX                            ; 0057ec8d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057ec8e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x0057eb40                      ; 0057ec93
        ;   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)  ; LAB_0057eb40
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ec98
        ;   Label: caseD_34
    MOV DH,byte ptr [EAX + 0x14d0f0]    ; 0057ec9b
    TEST DH,DH                          ; 0057eca1
    JZ 0x0057ed4b                       ; 0057eca3
        ;   XREF to: 0057ed4b (CONDITIONAL_JUMP)  ; LAB_0057ed4b
    PUSH 0x0                            ; 0057eca9
    LEA EAX,[ESP + 0x42d0]              ; 0057ecab
    PUSH EAX                            ; 0057ecb2
    PUSH 0x0                            ; 0057ecb3
    PUSH 0x0                            ; 0057ecb5
    MOV ESI,dword ptr [ESP + 0x4724]    ; 0057ecb7
    PUSH ESI                            ; 0057ecbe
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0057ecbf
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0057ecc4
    LEA EDI,[ESP + 0x42cc]              ; 0057ecc7
    MOV ESI,0x6481cc                    ; 0057ecce | = ".set"
    PUSH EDI                            ; 0057ecd3
    SUB ECX,ECX                         ; 0057ecd4
    DEC ECX                             ; 0057ecd6
    MOV AL,0x0                          ; 0057ecd7
    SCASB.REPNE ES:EDI                  ; 0057ecd9
    DEC EDI                             ; 0057ecdb
    MOV AL,byte ptr [ESI]               ; 0057ecdc | = ".set" | DAT_006481ce
        ;   Label: LAB_0057ecdc
    MOV byte ptr [EDI],AL               ; 0057ecde
    CMP AL,0x0                          ; 0057ece0
    JZ 0x0057ecf4                       ; 0057ece2
        ;   XREF to: 0057ecf4 (CONDITIONAL_JUMP)  ; LAB_0057ecf4
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ece4 | DAT_006481cd | DAT_006481cf
    ADD ESI,0x2                         ; 0057ece7
    MOV byte ptr [EDI + 0x1],AL         ; 0057ecea
    ADD EDI,0x2                         ; 0057eced
    CMP AL,0x0                          ; 0057ecf0
    JNZ 0x0057ecdc                      ; 0057ecf2
        ;   XREF to: 0057ecdc (CONDITIONAL_JUMP)  ; LAB_0057ecdc
    POP EDI                             ; 0057ecf4
        ;   Label: LAB_0057ecf4
    LEA EAX,[ESP + 0x42cc]              ; 0057ecf5
    PUSH EAX                            ; 0057ecfc
    CALL crt_string.c_strupr_FUN_00600770 ; 0057ecfd
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 0057ed02
    PUSH 0x1                            ; 0057ed05
        ;   Label: LAB_0057ed05
    LEA EAX,[ESP + 0x42d0]              ; 0057ed07
    PUSH EAX                            ; 0057ed0e
    PUSH 0x6481d1                       ; 0057ed0f | = "set"
    PUSH 0x6481d5                       ; 0057ed14 | = "models"
    PUSH 0x6481dc                       ; 0057ed19 | = "Save set"
    MOV EDI,dword ptr [0x00678a60]      ; 0057ed1e | g_CEditorToolsPtr
    PUSH EDI                            ; 0057ed24 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 0057ed25
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 0057ed2a
    TEST EAX,EAX                        ; 0057ed2d
    JZ 0x0057eb43                       ; 0057ed2f
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    LEA EAX,[ESP + 0x42cc]              ; 0057ed35
    PUSH EAX                            ; 0057ed3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ed3d
    PUSH EAX                            ; 0057ed40
    CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 ; 0057ed41
        ;   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)
    JMP 0x0057eb40                      ; 0057ed46
        ;   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)  ; LAB_0057eb40
    MOV byte ptr [ESP + 0x42cc],DH      ; 0057ed4b
        ;   Label: LAB_0057ed4b
    JMP 0x0057ed05                      ; 0057ed52
        ;   XREF to: 0057ed05 (UNCONDITIONAL_JUMP)  ; LAB_0057ed05
    PUSH 0x6481e5                       ; 0057ed54 | = "Enter new base name : "
        ;   Label: caseD_35
    PUSH 0x0                            ; 0057ed59
    PUSH 0x0                            ; 0057ed5b
    PUSH 0x5                            ; 0057ed5d
    LEA EAX,[ESP + 0x46dc]              ; 0057ed5f
    XOR DL,DL                           ; 0057ed66
    PUSH EAX                            ; 0057ed68
    MOV byte ptr [ESP + 0x46e0],DL      ; 0057ed69
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0057ed70
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0057ed75
    LEA EDI,[ESP + 0x46cc]              ; 0057ed78
    SUB ECX,ECX                         ; 0057ed7f
    DEC ECX                             ; 0057ed81
    XOR EAX,EAX                         ; 0057ed82
    SCASB.REPNE ES:EDI                  ; 0057ed84
    NOT ECX                             ; 0057ed86
    DEC ECX                             ; 0057ed88
    TEST ECX,ECX                        ; 0057ed89
    JZ 0x0057eb43                       ; 0057ed8b
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ed91
    MOV EBX,dword ptr [EAX]             ; 0057ed94
    XOR EDI,EDI                         ; 0057ed96
    TEST EBX,EBX                        ; 0057ed98
    JLE 0x0057edd7                      ; 0057ed9a
        ;   XREF to: 0057edd7 (CONDITIONAL_JUMP)  ; LAB_0057edd7
    MOV EBX,dword ptr [ESP + 0x4718]    ; 0057ed9c
    PUSH EDI                            ; 0057eda3
        ;   Label: LAB_0057eda3
    LEA EAX,[ESP + 0x46d0]              ; 0057eda4
    PUSH EAX                            ; 0057edab
    PUSH 0x6481fc                       ; 0057edac | = "%s%d"
    PUSH EBX                            ; 0057edb1
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057edb2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057edb7
    PUSH EBX                            ; 0057edba
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057edbb
    PUSH EAX                            ; 0057edbe
    CALL core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340 ; 0057edbf
        ;   XREF to: 0057d340 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340(CDemonSet * this_ptr, C3DSCamera * camera)
    ADD ESP,0x8                         ; 0057edc4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057edc7
    INC EDI                             ; 0057edca
    MOV EDX,dword ptr [EAX]             ; 0057edcb
    ADD EBX,0x1a4                       ; 0057edcd
    CMP EDI,EDX                         ; 0057edd3
    JL 0x0057eda3                       ; 0057edd5
        ;   XREF to: 0057eda3 (CONDITIONAL_JUMP)  ; LAB_0057eda3
    PUSH 0x1                            ; 0057edd7
        ;   Label: LAB_0057edd7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057edd9
    PUSH ECX                            ; 0057eddc
    JMP 0x0057eb3b                      ; 0057eddd
        ;   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)  ; LAB_0057eb3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ede2
        ;   Label: caseD_36
    CMP dword ptr [EAX],0xfa            ; 0057ede5
    JGE 0x0057eb43                      ; 0057edeb
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    LEA EAX,[ESP + 0x34d8]              ; 0057edf1
    PUSH EAX                            ; 0057edf8
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057edf9
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057edfe
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ee01
    XOR EDI,EDI                         ; 0057ee04
    MOV ECX,dword ptr [EAX]             ; 0057ee06
    MOV ESI,dword ptr [ESP + 0x4744]    ; 0057ee08
    TEST ECX,ECX                        ; 0057ee0f
    JLE 0x0057ee34                      ; 0057ee11
        ;   XREF to: 0057ee34 (CONDITIONAL_JUMP)  ; LAB_0057ee34
    PUSH ESI                            ; 0057ee13
        ;   Label: LAB_0057ee13
    LEA EAX,[ESP + 0x34dc]              ; 0057ee14
    PUSH EAX                            ; 0057ee1b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057ee1c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057ee21
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ee24
    INC EDI                             ; 0057ee27
    MOV ECX,dword ptr [EAX]             ; 0057ee28
    ADD ESI,0x1a4                       ; 0057ee2a
    CMP EDI,ECX                         ; 0057ee30
    JL 0x0057ee13                       ; 0057ee32
        ;   XREF to: 0057ee13 (CONDITIONAL_JUMP)  ; LAB_0057ee13
    PUSH 0x0                            ; 0057ee34
        ;   Label: LAB_0057ee34
    PUSH -0x1                           ; 0057ee36
    PUSH 0x648201                       ; 0057ee38 | = "Clone which camera"
    LEA EAX,[ESP + 0x34e4]              ; 0057ee3d
    PUSH EAX                            ; 0057ee44
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057ee45
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0057ee4a
    MOV dword ptr [ESP + 0x476c],EAX    ; 0057ee4d
    TEST EAX,EAX                        ; 0057ee54
    JL 0x0057f208                       ; 0057ee56
        ;   XREF to: 0057f208 (CONDITIONAL_JUMP)  ; LAB_0057f208
    IMUL EAX,EAX,0x1a4                  ; 0057ee5c
    MOV ESI,dword ptr [ESP + 0x4744]    ; 0057ee62
    LEA EDI,[ESP + 0x42cc]              ; 0057ee69
    ADD ESI,EAX                         ; 0057ee70
    PUSH EDI                            ; 0057ee72
    MOV AL,byte ptr [ESI]               ; 0057ee73
        ;   Label: LAB_0057ee73
    MOV byte ptr [EDI],AL               ; 0057ee75
    CMP AL,0x0                          ; 0057ee77
    JZ 0x0057ee8b                       ; 0057ee79
        ;   XREF to: 0057ee8b (CONDITIONAL_JUMP)  ; LAB_0057ee8b
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ee7b
    ADD ESI,0x2                         ; 0057ee7e
    MOV byte ptr [EDI + 0x1],AL         ; 0057ee81
    ADD EDI,0x2                         ; 0057ee84
    CMP AL,0x0                          ; 0057ee87
    JNZ 0x0057ee73                      ; 0057ee89
        ;   XREF to: 0057ee73 (CONDITIONAL_JUMP)  ; LAB_0057ee73
    POP EDI                             ; 0057ee8b
        ;   Label: LAB_0057ee8b
    LEA EDI,[ESP + 0x42cc]              ; 0057ee8c
    SUB ECX,ECX                         ; 0057ee93
    DEC ECX                             ; 0057ee95
    XOR EAX,EAX                         ; 0057ee96
    SCASB.REPNE ES:EDI                  ; 0057ee98
    NOT ECX                             ; 0057ee9a
    DEC ECX                             ; 0057ee9c
    LEA EDX,[ECX + -0x1]                ; 0057ee9d
    LEA EBX,[ESP + 0x42cc]              ; 0057eea0
    TEST EDX,EDX                        ; 0057eea7
    JLE 0x0057eebf                      ; 0057eea9
        ;   XREF to: 0057eebf (CONDITIONAL_JUMP)  ; LAB_0057eebf
    LEA EAX,[ESP + 0x42cc]              ; 0057eeab
    ADD EAX,EDX                         ; 0057eeb2
    MOV CL,byte ptr [EAX]               ; 0057eeb4
        ;   Label: LAB_0057eeb4
    CMP CL,0x30                         ; 0057eeb6
    JNC 0x0057f21c                      ; 0057eeb9
        ;   XREF to: 0057f21c (CONDITIONAL_JUMP)  ; LAB_0057f21c
    INC EDX                             ; 0057eebf
        ;   Label: LAB_0057eebf
    ADD EBX,EDX                         ; 0057eec0
    PUSH EBX                            ; 0057eec2
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0057eec3
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0057eec8
    INC EAX                             ; 0057eecb
    PUSH EAX                            ; 0057eecc
    PUSH 0x6465a5                       ; 0057eecd | = "%d"
    PUSH EBX                            ; 0057eed2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057eed3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057eed8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057eedb
    MOV EBX,dword ptr [EAX]             ; 0057eede
    XOR ESI,ESI                         ; 0057eee0
    TEST EBX,EBX                        ; 0057eee2
    JLE 0x0057ef5a                      ; 0057eee4
        ;   XREF to: 0057ef5a (CONDITIONAL_JUMP)  ; LAB_0057ef5a
    LEA EAX,[ESP + 0x42cc]              ; 0057eee6
        ;   Label: LAB_0057eee6
    PUSH EAX                            ; 0057eeed
    IMUL EAX,ESI,0x1a4                  ; 0057eeee
    ADD EAX,dword ptr [ESP + 0x4748]    ; 0057eef4
    PUSH EAX                            ; 0057eefb
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0057eefc
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057ef01
    TEST EAX,EAX                        ; 0057ef04
    JNZ 0x0057ef52                      ; 0057ef06
        ;   XREF to: 0057ef52 (CONDITIONAL_JUMP)  ; LAB_0057ef52
    LEA ESI,[ESP + 0x42cc]              ; 0057ef08
    LEA EDI,[ESP + 0x3fcc]              ; 0057ef0f
    PUSH EDI                            ; 0057ef16
    MOV AL,byte ptr [ESI]               ; 0057ef17
        ;   Label: LAB_0057ef17
    MOV byte ptr [EDI],AL               ; 0057ef19
    CMP AL,0x0                          ; 0057ef1b
    JZ 0x0057ef2f                       ; 0057ef1d
        ;   XREF to: 0057ef2f (CONDITIONAL_JUMP)  ; LAB_0057ef2f
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ef1f
    ADD ESI,0x2                         ; 0057ef22
    MOV byte ptr [EDI + 0x1],AL         ; 0057ef25
    ADD EDI,0x2                         ; 0057ef28
    CMP AL,0x0                          ; 0057ef2b
    JNZ 0x0057ef17                      ; 0057ef2d
        ;   XREF to: 0057ef17 (CONDITIONAL_JUMP)  ; LAB_0057ef17
    POP EDI                             ; 0057ef2f
        ;   Label: LAB_0057ef2f
    LEA EAX,[ESP + 0x3fcc]              ; 0057ef30
    PUSH EAX                            ; 0057ef37
    PUSH 0x648214                       ; 0057ef38 | = "%s1"
    LEA EAX,[ESP + 0x42d4]              ; 0057ef3d
    PUSH EAX                            ; 0057ef44
    MOV ESI,0xffffffff                  ; 0057ef45
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057ef4a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057ef4f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ef52
        ;   Label: LAB_0057ef52
    INC ESI                             ; 0057ef55
    CMP ESI,dword ptr [EAX]             ; 0057ef56
    JL 0x0057eee6                       ; 0057ef58
        ;   XREF to: 0057eee6 (CONDITIONAL_JUMP)  ; LAB_0057eee6
    PUSH 0x1                            ; 0057ef5a
        ;   Label: LAB_0057ef5a
    PUSH 0x1f                           ; 0057ef5c
    LEA EAX,[ESP + 0x42d4]              ; 0057ef5e
    PUSH EAX                            ; 0057ef65
    PUSH 0x648218                       ; 0057ef66 | = "Enter name of clone"
    MOV EAX,[0x00678a60]                ; 0057ef6b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0057ef70 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057ef71
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0057ef76
    TEST EAX,EAX                        ; 0057ef79
    JZ 0x0057f208                       ; 0057ef7b
        ;   XREF to: 0057f208 (CONDITIONAL_JUMP)  ; LAB_0057f208
    IMUL EAX,dword ptr [ESP + 0x476c],0x1a4 ; 0057ef81
    MOV EDX,dword ptr [ESP + 0x4744]    ; 0057ef8c
    ADD EDX,EAX                         ; 0057ef93
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ef95
    IMUL EBX,dword ptr [EAX],0x1a4      ; 0057ef98
    ADD EBX,dword ptr [ESP + 0x4744]    ; 0057ef9e
    MOV ECX,0x40                        ; 0057efa5
    MOV EDI,EBX                         ; 0057efaa
    MOV ESI,EDX                         ; 0057efac
    MOV EAX,EBX                         ; 0057efae
    MOVSD.REP ES:EDI,ESI                ; 0057efb0
    ADD EBX,0x100                       ; 0057efb2
    LEA ESI,[EDX + 0x100]               ; 0057efb8
    CMP EBX,ESI                         ; 0057efbe
    JZ 0x0057efd2                       ; 0057efc0
        ;   XREF to: 0057efd2 (CONDITIONAL_JUMP)  ; LAB_0057efd2
    MOV ECX,dword ptr [ESI]             ; 0057efc2
    MOV dword ptr [EBX],ECX             ; 0057efc4
    MOV ECX,dword ptr [ESI + 0x4]       ; 0057efc6
    MOV dword ptr [EBX + 0x4],ECX       ; 0057efc9
    MOV ECX,dword ptr [ESI + 0x8]       ; 0057efcc
    MOV dword ptr [EBX + 0x8],ECX       ; 0057efcf
    LEA ESI,[EDX + 0x10c]               ; 0057efd2
        ;   Label: LAB_0057efd2
    LEA EBX,[EAX + 0x10c]               ; 0057efd8
    CMP EBX,ESI                         ; 0057efde
    JZ 0x0057eff2                       ; 0057efe0
        ;   XREF to: 0057eff2 (CONDITIONAL_JUMP)  ; LAB_0057eff2
    MOV ECX,dword ptr [ESI]             ; 0057efe2
    MOV dword ptr [EBX],ECX             ; 0057efe4
    MOV ECX,dword ptr [ESI + 0x4]       ; 0057efe6
    MOV dword ptr [EBX + 0x4],ECX       ; 0057efe9
    MOV ECX,dword ptr [ESI + 0x8]       ; 0057efec
    MOV dword ptr [EBX + 0x8],ECX       ; 0057efef
    MOV ECX,dword ptr [EDX + 0x118]     ; 0057eff2
        ;   Label: LAB_0057eff2
    MOV dword ptr [EAX + 0x118],ECX     ; 0057eff8
    MOV ECX,dword ptr [EDX + 0x11c]     ; 0057effe
    MOV dword ptr [EAX + 0x11c],ECX     ; 0057f004
    MOV ECX,dword ptr [EDX + 0x120]     ; 0057f00a
    MOV dword ptr [EAX + 0x120],ECX     ; 0057f010
    MOV ECX,dword ptr [EDX + 0x124]     ; 0057f016
    MOV dword ptr [EAX + 0x124],ECX     ; 0057f01c
    MOV ECX,dword ptr [EDX + 0x128]     ; 0057f022
    MOV dword ptr [EAX + 0x128],ECX     ; 0057f028
    MOV ECX,dword ptr [EDX + 0x12c]     ; 0057f02e
    MOV dword ptr [EAX + 0x12c],ECX     ; 0057f034
    MOV ECX,dword ptr [EDX + 0x130]     ; 0057f03a
    MOV dword ptr [EAX + 0x130],ECX     ; 0057f040
    MOV ECX,dword ptr [EDX + 0x134]     ; 0057f046
    MOV dword ptr [EAX + 0x134],ECX     ; 0057f04c
    MOV ECX,dword ptr [EDX + 0x138]     ; 0057f052
    MOV dword ptr [EAX + 0x138],ECX     ; 0057f058
    MOV ECX,dword ptr [EDX + 0x13c]     ; 0057f05e
    MOV dword ptr [EAX + 0x13c],ECX     ; 0057f064
    MOV ECX,dword ptr [EDX + 0x140]     ; 0057f06a
    MOV dword ptr [EAX + 0x140],ECX     ; 0057f070
    MOV ECX,dword ptr [EDX + 0x144]     ; 0057f076
    MOV dword ptr [EAX + 0x144],ECX     ; 0057f07c
    MOV ECX,dword ptr [EDX + 0x148]     ; 0057f082
    MOV dword ptr [EAX + 0x148],ECX     ; 0057f088
    MOV ECX,dword ptr [EDX + 0x14c]     ; 0057f08e
    MOV dword ptr [EAX + 0x14c],ECX     ; 0057f094
    MOV ECX,dword ptr [EDX + 0x150]     ; 0057f09a
    MOV dword ptr [EAX + 0x150],ECX     ; 0057f0a0
    MOV ECX,dword ptr [EDX + 0x154]     ; 0057f0a6
    MOV dword ptr [EAX + 0x154],ECX     ; 0057f0ac
    MOV ECX,dword ptr [EDX + 0x158]     ; 0057f0b2
    MOV dword ptr [EAX + 0x158],ECX     ; 0057f0b8
    LEA ESI,[EAX + 0x160]               ; 0057f0be
    MOV ECX,dword ptr [EDX + 0x15c]     ; 0057f0c4
    LEA EBX,[EDX + 0x160]               ; 0057f0ca
    MOV dword ptr [EAX + 0x15c],ECX     ; 0057f0d0
    CMP ESI,EBX                         ; 0057f0d6
    JZ 0x0057f0ea                       ; 0057f0d8
        ;   XREF to: 0057f0ea (CONDITIONAL_JUMP)  ; LAB_0057f0ea
    MOV ECX,dword ptr [EBX]             ; 0057f0da
    MOV dword ptr [ESI],ECX             ; 0057f0dc
    MOV ECX,dword ptr [EBX + 0x4]       ; 0057f0de
    MOV dword ptr [ESI + 0x4],ECX       ; 0057f0e1
    MOV ECX,dword ptr [EBX + 0x8]       ; 0057f0e4
    MOV dword ptr [ESI + 0x8],ECX       ; 0057f0e7
    FLD float ptr [EDX + 0x16c]         ; 0057f0ea
        ;   Label: LAB_0057f0ea
    LEA EBX,[EAX + 0x17c]               ; 0057f0f0
    FSTP float ptr [EAX + 0x16c]        ; 0057f0f6
    MOV ECX,dword ptr [EDX + 0x170]     ; 0057f0fc
    MOV dword ptr [EAX + 0x170],ECX     ; 0057f102
    MOV ECX,dword ptr [EDX + 0x174]     ; 0057f108
    MOV dword ptr [EAX + 0x174],ECX     ; 0057f10e
    MOV ECX,dword ptr [EDX + 0x178]     ; 0057f114
    LEA ESI,[EDX + 0x17c]               ; 0057f11a
    MOV dword ptr [EAX + 0x178],ECX     ; 0057f120
    CMP EBX,ESI                         ; 0057f126
    JZ 0x0057f13a                       ; 0057f128
        ;   XREF to: 0057f13a (CONDITIONAL_JUMP)  ; LAB_0057f13a
    MOV ECX,dword ptr [ESI]             ; 0057f12a
    MOV dword ptr [EBX],ECX             ; 0057f12c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0057f12e
    MOV dword ptr [EBX + 0x4],ECX       ; 0057f131
    MOV ECX,dword ptr [ESI + 0x8]       ; 0057f134
    MOV dword ptr [EBX + 0x8],ECX       ; 0057f137
    LEA ESI,[EDX + 0x188]               ; 0057f13a
        ;   Label: LAB_0057f13a
    LEA EBX,[EAX + 0x188]               ; 0057f140
    CMP EBX,ESI                         ; 0057f146
    JZ 0x0057f15a                       ; 0057f148
        ;   XREF to: 0057f15a (CONDITIONAL_JUMP)  ; LAB_0057f15a
    MOV ECX,dword ptr [ESI]             ; 0057f14a
    MOV dword ptr [EBX],ECX             ; 0057f14c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0057f14e
    MOV dword ptr [EBX + 0x4],ECX       ; 0057f151
    MOV ECX,dword ptr [ESI + 0x8]       ; 0057f154
    MOV dword ptr [EBX + 0x8],ECX       ; 0057f157
    MOV ECX,dword ptr [EDX + 0x194]     ; 0057f15a
        ;   Label: LAB_0057f15a
    MOV dword ptr [EAX + 0x194],ECX     ; 0057f160
    MOV ECX,dword ptr [EDX + 0x198]     ; 0057f166
    MOV dword ptr [EAX + 0x198],ECX     ; 0057f16c
    MOV ECX,dword ptr [EDX + 0x19c]     ; 0057f172
    MOV dword ptr [EAX + 0x19c],ECX     ; 0057f178
    MOV EDX,dword ptr [EDX + 0x1a0]     ; 0057f17e
    MOV dword ptr [EAX + 0x1a0],EDX     ; 0057f184
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f18a
    IMUL EAX,dword ptr [EAX],0x1a4      ; 0057f18d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057f193
    ADD EAX,EDX                         ; 0057f196
    MOV dword ptr [EAX + 0x198],0x0     ; 0057f198
    IMUL EAX,dword ptr [EDX],0x1a4      ; 0057f1a2
    ADD EAX,EDX                         ; 0057f1a8
    MOV dword ptr [EAX + 0x19c],0x0     ; 0057f1aa
    IMUL EDI,dword ptr [EDX],0x1a4      ; 0057f1b4
    MOV EAX,dword ptr [ESP + 0x4744]    ; 0057f1ba
    LEA ESI,[ESP + 0x42cc]              ; 0057f1c1
    ADD EDI,EAX                         ; 0057f1c8
    MOV EBX,EDX                         ; 0057f1ca
    PUSH EDI                            ; 0057f1cc
    MOV AL,byte ptr [ESI]               ; 0057f1cd
        ;   Label: LAB_0057f1cd
    MOV byte ptr [EDI],AL               ; 0057f1cf
    CMP AL,0x0                          ; 0057f1d1
    JZ 0x0057f1e5                       ; 0057f1d3
        ;   XREF to: 0057f1e5 (CONDITIONAL_JUMP)  ; LAB_0057f1e5
    MOV AL,byte ptr [ESI + 0x1]         ; 0057f1d5
    ADD ESI,0x2                         ; 0057f1d8
    MOV byte ptr [EDI + 0x1],AL         ; 0057f1db
    ADD EDI,0x2                         ; 0057f1de
    CMP AL,0x0                          ; 0057f1e1
    JNZ 0x0057f1cd                      ; 0057f1e3
        ;   XREF to: 0057f1cd (CONDITIONAL_JUMP)  ; LAB_0057f1cd
    POP EDI                             ; 0057f1e5
        ;   Label: LAB_0057f1e5
    MOV EDX,dword ptr [EDX]             ; 0057f1e6
    PUSH EDX                            ; 0057f1e8
    PUSH EBX                            ; 0057f1e9
    CALL core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 ; 0057f1ea
        ;   XREF to: 0057d660 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet * this_ptr, int camera_index)
    ADD ESP,0x8                         ; 0057f1ef
    TEST EAX,EAX                        ; 0057f1f2
    JZ 0x0057f208                       ; 0057f1f4
        ;   XREF to: 0057f208 (CONDITIONAL_JUMP)  ; LAB_0057f208
    MOV EAX,EBX                         ; 0057f1f6
    MOV ESI,dword ptr [EAX]             ; 0057f1f8
    PUSH 0x1                            ; 0057f1fa
    INC ESI                             ; 0057f1fc
    PUSH EBX                            ; 0057f1fd
    MOV dword ptr [EAX],ESI             ; 0057f1fe
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 0057f200
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 0057f205
    PUSH 0x0                            ; 0057f208
        ;   Label: LAB_0057f208
    LEA EAX,[ESP + 0x34dc]              ; 0057f20a
    PUSH EAX                            ; 0057f211
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057f212
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x0057eb40                      ; 0057f217
        ;   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)  ; LAB_0057eb40
    CMP CL,0x39                         ; 0057f21c
        ;   Label: LAB_0057f21c
    JA 0x0057eebf                       ; 0057f21f
        ;   XREF to: 0057eebf (CONDITIONAL_JUMP)  ; LAB_0057eebf
    DEC EDX                             ; 0057f225
    DEC EAX                             ; 0057f226
    TEST EDX,EDX                        ; 0057f227
    JG 0x0057eeb4                       ; 0057f229
        ;   XREF to: 0057eeb4 (CONDITIONAL_JUMP)  ; LAB_0057eeb4
    JMP 0x0057eebf                      ; 0057f22f
        ;   XREF to: 0057eebf (UNCONDITIONAL_JUMP)  ; LAB_0057eebf
    PUSH 0x0                            ; 0057f234
        ;   Label: caseD_37
    LEA EAX,[ESP + 0x3dd0]              ; 0057f236
    PUSH EAX                            ; 0057f23d
    PUSH 0x64822c                       ; 0057f23e | = "*.lc"
    PUSH 0x648231                       ; 0057f243 | = "models"
    PUSH 0x648238                       ; 0057f248 | = "Merge .LC"
    MOV ECX,dword ptr [0x00678a60]      ; 0057f24d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0057f253 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0057f254
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0057f259
    TEST EAX,EAX                        ; 0057f25c
    JZ 0x0057eb43                       ; 0057f25e
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    PUSH 0x648242                       ; 0057f264 | = "rt"
    LEA EAX,[ESP + 0x3dd0]              ; 0057f269
    PUSH EAX                            ; 0057f270
    PUSH 0x648245                       ; 0057f271 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057f276
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057f27b
    MOV ESI,EAX                         ; 0057f27e
    TEST EAX,EAX                        ; 0057f280
    JNZ 0x0057f2a7                      ; 0057f282
        ;   XREF to: 0057f2a7 (CONDITIONAL_JUMP)  ; LAB_0057f2a7
    MOV EBX,0x64824c                    ; 0057f284 | = "..\\core\\setedit.cpp"
    MOV EDI,0xe68                       ; 0057f289
    PUSH 0x648260                       ; 0057f28e | = "Can't open LC file"
    MOV dword ptr [0x02f0ca48],EBX      ; 0057f293 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0057f299 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057f29f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057f2a4
    PUSH ESI                            ; 0057f2a7
        ;   Label: LAB_0057f2a7
    PUSH 0xff                           ; 0057f2a8
    LEA EAX,[ESP + 0x42d4]              ; 0057f2ad
    PUSH EAX                            ; 0057f2b4
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f2b5
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,0xffffffff                  ; 0057f2ba
    ADD ESP,0xc                         ; 0057f2bf
    MOV dword ptr [ESP + 0x471c],EAX    ; 0057f2c2
    LEA EAX,[ESP + 0x471c]              ; 0057f2c9
    PUSH EAX                            ; 0057f2d0
    PUSH 0x648273                       ; 0057f2d1 | = "%d\n"
    PUSH ESI                            ; 0057f2d6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0057f2d7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057f2dc
    MOV EDX,dword ptr [ESP + 0x471c]    ; 0057f2df
    CMP EDX,0x1                         ; 0057f2e6
    JZ 0x0057f30f                       ; 0057f2e9
        ;   XREF to: 0057f30f (CONDITIONAL_JUMP)  ; LAB_0057f30f
    PUSH EDX                            ; 0057f2eb
    MOV ECX,0x648277                    ; 0057f2ec | = "..\\core\\setedit.cpp"
    MOV EBX,0xe6c                       ; 0057f2f1
    PUSH 0x64828b                       ; 0057f2f6 | = "Can't merge version %d LC file"
    MOV dword ptr [0x02f0ca48],ECX      ; 0057f2fb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0057f301 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057f307
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057f30c
    PUSH ESI                            ; 0057f30f
        ;   Label: LAB_0057f30f
    PUSH 0xff                           ; 0057f310
    LEA EAX,[ESP + 0x42d4]              ; 0057f315
    PUSH EAX                            ; 0057f31c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f31d
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0057f322
    LEA EAX,[ESP + 0x4724]              ; 0057f325
    PUSH EAX                            ; 0057f32c
    LEA EAX,[ESP + 0x4724]              ; 0057f32d
    PUSH EAX                            ; 0057f334
    PUSH 0x6482aa                       ; 0057f335 | = "%d,%d\n"
    PUSH ESI                            ; 0057f33a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0057f33b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057f340
    PUSH ESI                            ; 0057f343
    PUSH 0xff                           ; 0057f344
    LEA EAX,[ESP + 0x42d4]              ; 0057f349
    PUSH EAX                            ; 0057f350
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f351
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0057f356
    MOV EAX,dword ptr [ESP + 0x4720]    ; 0057f359
    XOR EDI,EDI                         ; 0057f360
    TEST EAX,EAX                        ; 0057f362
    JLE 0x0057f391                      ; 0057f364
        ;   XREF to: 0057f391 (CONDITIONAL_JUMP)  ; LAB_0057f391
    LEA EAX,[ESP + 0x1898]              ; 0057f366
        ;   Label: LAB_0057f366
    PUSH EAX                            ; 0057f36d
    CALL core_setutil.cpp_C3DSLight_ctor_FUN_005862f0 ; 0057f36e
        ;   XREF to: 005862f0 (UNCONDITIONAL_CALL)  ; C3DSLight * core_setutil.cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0057f373
    PUSH ESI                            ; 0057f376
    LEA EAX,[ESP + 0x189c]              ; 0057f377
    PUSH EAX                            ; 0057f37e
    CALL core_setutil.cpp_C3DSLight_importS3D_FUN_00587710 ; 0057f37f
        ;   XREF to: 00587710 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057f384
    INC EDI                             ; 0057f387
    CMP EDI,dword ptr [ESP + 0x4720]    ; 0057f388
    JL 0x0057f366                       ; 0057f38f
        ;   XREF to: 0057f366 (CONDITIONAL_JUMP)  ; LAB_0057f366
    PUSH ESI                            ; 0057f391
        ;   Label: LAB_0057f391
    PUSH 0xff                           ; 0057f392
    LEA EAX,[ESP + 0x42d4]              ; 0057f397
    PUSH EAX                            ; 0057f39e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f39f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0057f3a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f3a7
    CMP dword ptr [EAX],0xfa            ; 0057f3aa
    JGE 0x0057f453                      ; 0057f3b0
        ;   XREF to: 0057f453 (CONDITIONAL_JUMP)  ; LAB_0057f453
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057f3b6
    CMP dword ptr [ESP + 0x4724],0x0    ; 0057f3b9
        ;   Label: LAB_0057f3b9
    JLE 0x0057f453                      ; 0057f3c1
        ;   XREF to: 0057f453 (CONDITIONAL_JUMP)  ; LAB_0057f453
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f3c7
    IMUL EAX,dword ptr [EAX],0x1a4      ; 0057f3ca
    MOV EDX,dword ptr [ESP + 0x4728]    ; 0057f3d0
    PUSH ESI                            ; 0057f3d7
    ADD EAX,EDX                         ; 0057f3d8
    PUSH EAX                            ; 0057f3da
    CALL core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 ; 0057f3db
        ;   XREF to: 00585ff0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057f3e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f3e3
    MOV ECX,dword ptr [EAX]             ; 0057f3e6
    PUSH ECX                            ; 0057f3e8
    IMUL EAX,ECX,0x1a4                  ; 0057f3e9
    MOV EDI,dword ptr [ESP + 0x472c]    ; 0057f3ef
    PUSH 0x6482b1                       ; 0057f3f6 | = "ncam%d"
    ADD EAX,EDI                         ; 0057f3fb
    PUSH EAX                            ; 0057f3fd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057f3fe
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057f403
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f406
    IMUL EAX,dword ptr [EAX],0x1a4      ; 0057f409
    ADD EAX,EDI                         ; 0057f40f
    PUSH EAX                            ; 0057f411
    PUSH EBX                            ; 0057f412
    CALL core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340 ; 0057f413
        ;   XREF to: 0057d340 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340(CDemonSet * this_ptr, C3DSCamera * camera)
    ADD ESP,0x8                         ; 0057f418
    PUSH 0x6482b8                       ; 0057f41b | = "Import this camera?"
    MOV EDI,dword ptr [0x00678a60]      ; 0057f420 | g_CEditorToolsPtr
    PUSH EDI                            ; 0057f426 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0057f427
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0057f42c
    TEST EAX,EAX                        ; 0057f42f
    JZ 0x0057f435                       ; 0057f431
        ;   XREF to: 0057f435 (CONDITIONAL_JUMP)  ; LAB_0057f435
    INC dword ptr [EBX]                 ; 0057f433
    MOV EDI,dword ptr [ESP + 0x4724]    ; 0057f435
        ;   Label: LAB_0057f435
    DEC EDI                             ; 0057f43c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f43d
    MOV dword ptr [ESP + 0x4724],EDI    ; 0057f440
    CMP dword ptr [EAX],0xfa            ; 0057f447
    JL 0x0057f3b9                       ; 0057f44d
        ;   XREF to: 0057f3b9 (CONDITIONAL_JUMP)  ; LAB_0057f3b9
    PUSH 0xe7f                          ; 0057f453
        ;   Label: LAB_0057f453
    PUSH 0x6482cc                       ; 0057f458 | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 0057f45d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057f45e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057f463
    PUSH 0x1                            ; 0057f466
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057f468
    PUSH EBX                            ; 0057f46b
    JMP 0x0057eb3b                      ; 0057f46c
        ;   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)  ; LAB_0057eb3b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057f471
        ;   Label: caseD_38
    PUSH ESI                            ; 0057f474
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057f475
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057f47a
    MOV dword ptr [ESI + 0x15ac8c],0x1  ; 0057f47d
    PUSH 0x6482e0                       ; 0057f487 | = "Recomputing all PVS"
    MOV EDI,dword ptr [0x00678a60]      ; 0057f48c | g_CEditorToolsPtr
    MOV dword ptr [ESI + 0x15ac90],0x1  ; 0057f492
    PUSH EDI                            ; 0057f49c | g_CEditorToolsInstance
    MOV dword ptr [ESI + 0x15ac84],0x1  ; 0057f49d
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0057f4a7
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0057f4ac
    MOV EDX,dword ptr [ESI]             ; 0057f4af
    XOR EDI,EDI                         ; 0057f4b1
    TEST EDX,EDX                        ; 0057f4b3
    JLE 0x0057f590                      ; 0057f4b5
        ;   XREF to: 0057f590 (CONDITIONAL_JUMP)  ; LAB_0057f590
    MOV EAX,dword ptr [ESP + 0x472c]    ; 0057f4bb
    MOV EBX,ESI                         ; 0057f4c2
    MOV dword ptr [ESP + 0x475c],EAX    ; 0057f4c4
    MOV ESI,dword ptr [ESP + 0x475c]    ; 0057f4cb
        ;   Label: LAB_0057f4cb
    PUSH ESI                            ; 0057f4d2
    PUSH 0x6482f4                       ; 0057f4d3 | = "backdrop\\%s.pvs"
    LEA EAX,[ESP + 0x43d4]              ; 0057f4d8
    PUSH EAX                            ; 0057f4df
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057f4e0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057f4e5
    LEA EAX,[ESP + 0x43cc]              ; 0057f4e8
    PUSH EAX                            ; 0057f4ef
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0057f4f0
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0057f4f5
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0057f4f8
    MOV dword ptr [EBX + 0x198],0x0     ; 0057f4fe
    TEST EAX,EAX                        ; 0057f508
    JZ 0x0057f529                       ; 0057f50a
        ;   XREF to: 0057f529 (CONDITIONAL_JUMP)  ; LAB_0057f529
    PUSH 0xe97                          ; 0057f50c
    PUSH 0x648304                       ; 0057f511 | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 0057f516
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0057f517
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057f51c
    MOV dword ptr [EBX + 0x19c],0x0     ; 0057f51f
    PUSH EDI                            ; 0057f529
        ;   Label: LAB_0057f529
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057f52a
    PUSH EDX                            ; 0057f52d
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0057f52e
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0057f533
    LEA ESI,[EDI + 0x1]                 ; 0057f536
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f539
    SUB ESP,0x4                         ; 0057f53c
    FILD dword ptr [EAX]                ; 0057f53f
    MOV dword ptr [ESP + 0x4778],ESI    ; 0057f541
    FSTP float ptr [ESP]                ; 0057f548
    FILD dword ptr [ESP + 0x4778]       ; 0057f54b
    SUB ESP,0x4                         ; 0057f552
    MOV ECX,dword ptr [0x00678a60]      ; 0057f555 | g_CEditorToolsInstance | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0057f55b
    PUSH ECX                            ; 0057f55e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 0057f55f
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 0057f564
    MOV EDI,dword ptr [ESP + 0x475c]    ; 0057f567
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f56e
    ADD EBX,0x1a4                       ; 0057f571
    ADD EDI,0x1a4                       ; 0057f577
    MOV EDX,dword ptr [EAX]             ; 0057f57d
    MOV dword ptr [ESP + 0x475c],EDI    ; 0057f57f
    MOV EDI,ESI                         ; 0057f586
    CMP ESI,EDX                         ; 0057f588
    JL 0x0057f4cb                       ; 0057f58a
        ;   XREF to: 0057f4cb (CONDITIONAL_JUMP)  ; LAB_0057f4cb
    MOV ECX,dword ptr [0x00678a60]      ; 0057f590 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_0057f590
    PUSH ECX                            ; 0057f596 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0057f597
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0057f59c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f59f
    MOV dword ptr [EAX + 0x15ac84],0x0  ; 0057f5a2
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 0057f5ac
    PUSH EAX                            ; 0057f5b6
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0057f5b7
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 0057f5c1
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057f5c6
    JMP 0x0057eb43                      ; 0057f5c9
        ;   XREF to: 0057eb43 (UNCONDITIONAL_JUMP)  ; caseD_3f
    PUSH 0x0                            ; 0057f5ce
        ;   Label: caseD_39
    LEA EAX,[ESP + 0x44d0]              ; 0057f5d0
    PUSH EAX                            ; 0057f5d7
    PUSH 0x648318                       ; 0057f5d8 | = "*.lc"
    PUSH 0x64831d                       ; 0057f5dd | = "models"
    PUSH 0x648324                       ; 0057f5e2 | = "Merge2 .LC"
    MOV ECX,dword ptr [0x00678a60]      ; 0057f5e7 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0057f5ed | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0057f5ee
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0057f5f3
    TEST EAX,EAX                        ; 0057f5f6
    JZ 0x0057eb43                       ; 0057f5f8
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    PUSH 0x64832f                       ; 0057f5fe | = "rt"
    LEA EAX,[ESP + 0x44d0]              ; 0057f603
    PUSH EAX                            ; 0057f60a
    PUSH 0x648332                       ; 0057f60b | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057f610
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057f615
    MOV dword ptr [ESP + 0x4730],EAX    ; 0057f618
    TEST EAX,EAX                        ; 0057f61f
    JNZ 0x0057f646                      ; 0057f621
        ;   XREF to: 0057f646 (CONDITIONAL_JUMP)  ; LAB_0057f646
    MOV EBX,0x648339                    ; 0057f623 | = "..\\core\\setedit.cpp"
    MOV ESI,0xeae                       ; 0057f628
    PUSH 0x64834d                       ; 0057f62d | = "Can't open LC file"
    MOV dword ptr [0x02f0ca48],EBX      ; 0057f632 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0057f638 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057f63e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057f643
    MOV EDI,dword ptr [ESP + 0x4730]    ; 0057f646
        ;   Label: LAB_0057f646
    PUSH EDI                            ; 0057f64d
    PUSH 0xff                           ; 0057f64e
    LEA EAX,[ESP + 0x42d4]              ; 0057f653
    PUSH EAX                            ; 0057f65a
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f65b
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,0xffffffff                  ; 0057f660
    ADD ESP,0xc                         ; 0057f665
    MOV dword ptr [ESP + 0x4734],EAX    ; 0057f668
    LEA EAX,[ESP + 0x4734]              ; 0057f66f
    PUSH EAX                            ; 0057f676
    PUSH 0x648360                       ; 0057f677 | = "%d\n"
    PUSH EDI                            ; 0057f67c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0057f67d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057f682
    MOV ECX,dword ptr [ESP + 0x4734]    ; 0057f685
    CMP ECX,0x1                         ; 0057f68c
    JZ 0x0057f6b5                       ; 0057f68f
        ;   XREF to: 0057f6b5 (CONDITIONAL_JUMP)  ; LAB_0057f6b5
    PUSH ECX                            ; 0057f691
    MOV EBX,0x648364                    ; 0057f692 | = "..\\core\\setedit.cpp"
    MOV ESI,0xeb2                       ; 0057f697
    PUSH 0x648378                       ; 0057f69c | = "Can't merge version %d LC file"
    MOV dword ptr [0x02f0ca48],EBX      ; 0057f6a1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0057f6a7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057f6ad
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057f6b2
    MOV EAX,dword ptr [ESP + 0x4730]    ; 0057f6b5
        ;   Label: LAB_0057f6b5
    PUSH EAX                            ; 0057f6bc
    PUSH 0xff                           ; 0057f6bd
    LEA EAX,[ESP + 0x42d4]              ; 0057f6c2
    PUSH EAX                            ; 0057f6c9
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f6ca
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0057f6cf
    LEA EAX,[ESP + 0x473c]              ; 0057f6d2
    PUSH EAX                            ; 0057f6d9
    LEA EAX,[ESP + 0x473c]              ; 0057f6da
    PUSH EAX                            ; 0057f6e1
    PUSH 0x648397                       ; 0057f6e2 | = "%d,%d\n"
    MOV EDX,dword ptr [ESP + 0x473c]    ; 0057f6e7
    PUSH EDX                            ; 0057f6ee
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0057f6ef
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057f6f4
    MOV ECX,dword ptr [ESP + 0x4730]    ; 0057f6f7
    PUSH ECX                            ; 0057f6fe
    PUSH 0xff                           ; 0057f6ff
    LEA EAX,[ESP + 0x42d4]              ; 0057f704
    PUSH EAX                            ; 0057f70b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f70c
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0057f711
    MOV EBX,dword ptr [ESP + 0x4738]    ; 0057f714
    XOR EDI,EDI                         ; 0057f71b
    TEST EBX,EBX                        ; 0057f71d
    JLE 0x0057f74b                      ; 0057f71f
        ;   XREF to: 0057f74b (CONDITIONAL_JUMP)  ; LAB_0057f74b
    MOV EBX,dword ptr [ESP + 0x4730]    ; 0057f721
    MOV EAX,ESP                         ; 0057f728
        ;   Label: LAB_0057f728
    PUSH EAX                            ; 0057f72a
    CALL core_setutil.cpp_C3DSLight_ctor_FUN_005862f0 ; 0057f72b
        ;   XREF to: 005862f0 (UNCONDITIONAL_CALL)  ; C3DSLight * core_setutil.cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0057f730
    PUSH EBX                            ; 0057f733
    LEA EAX,[ESP + 0x4]                 ; 0057f734
    PUSH EAX                            ; 0057f738
    CALL core_setutil.cpp_C3DSLight_importS3D_FUN_00587710 ; 0057f739
        ;   XREF to: 00587710 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057f73e
    INC EDI                             ; 0057f741
    CMP EDI,dword ptr [ESP + 0x4738]    ; 0057f742
    JL 0x0057f728                       ; 0057f749
        ;   XREF to: 0057f728 (CONDITIONAL_JUMP)  ; LAB_0057f728
    MOV EDI,dword ptr [ESP + 0x4730]    ; 0057f74b
        ;   Label: LAB_0057f74b
    PUSH EDI                            ; 0057f752
    PUSH 0xff                           ; 0057f753
    LEA EAX,[ESP + 0x42d4]              ; 0057f758
    PUSH EAX                            ; 0057f75f
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057f760
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0057f765
    CMP dword ptr [ESP + 0x473c],0x0    ; 0057f768
    JLE 0x0057fa44                      ; 0057f770
        ;   XREF to: 0057fa44 (CONDITIONAL_JUMP)  ; LAB_0057fa44
    LEA EAX,[ESP + 0x3c28]              ; 0057f776
        ;   Label: LAB_0057f776
    PUSH EAX                            ; 0057f77d
    CALL core_setutil.cpp_C3DSCamera_ctor_FUN_00585310 ; 0057f77e
        ;   XREF to: 00585310 (UNCONDITIONAL_CALL)  ; C3DSCamera * core_setutil.cpp_C3DSCamera_ctor_FUN_00585310(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 0057f783
    MOV ESI,dword ptr [ESP + 0x4730]    ; 0057f786
    PUSH ESI                            ; 0057f78d
    LEA EAX,[ESP + 0x3c2c]              ; 0057f78e
    PUSH EAX                            ; 0057f795
    CALL core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 ; 0057f796
        ;   XREF to: 00585ff0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057f79b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f79e
    MOV EDI,dword ptr [EAX]             ; 0057f7a1
    XOR EBX,EBX                         ; 0057f7a3
    TEST EDI,EDI                        ; 0057f7a5
    JLE 0x0057fa1d                      ; 0057f7a7
        ;   XREF to: 0057fa1d (CONDITIONAL_JUMP)  ; LAB_0057fa1d
    MOV EDX,dword ptr [ESP + 0x4754]    ; 0057f7ad
    MOV EDI,dword ptr [ESP + 0x4754]    ; 0057f7b4
    ADD EDX,0x100                       ; 0057f7bb
    FLD float ptr [ESP + 0x3d28]        ; 0057f7c1
        ;   Label: LAB_0057f7c1
    FSUB float ptr [EDX]                ; 0057f7c8
    FLD float ptr [ESP + 0x3d2c]        ; 0057f7ca
    FXCH                                ; 0057f7d1
    FSTP float ptr [ESP + 0x46f8]       ; 0057f7d3
    FSUB float ptr [EDX + 0x4]          ; 0057f7da
    FST float ptr [ESP + 0x46fc]        ; 0057f7dd
    FMUL float ptr [ESP + 0x46fc]       ; 0057f7e4
    FLD float ptr [ESP + 0x46f8]        ; 0057f7eb
    FMUL ST0                            ; 0057f7f2
    FLD float ptr [ESP + 0x3d30]        ; 0057f7f4
    FSUB float ptr [EDX + 0x8]          ; 0057f7fb
    FXCH                                ; 0057f7fe
    FADDP ST2,ST0                       ; 0057f800
    FST float ptr [ESP + 0x4700]        ; 0057f802
    FMUL float ptr [ESP + 0x4700]       ; 0057f809
    FADDP                               ; 0057f810
    FSQRT                               ; 0057f812
    IMUL ESI,EBX,0x1a4                  ; 0057f814
    ADD ESI,EDI                         ; 0057f81a
    FCOMP double ptr [0x00648515]       ; 0057f81c | DOUBLE_00648515
    FNSTSW AX                           ; 0057f822
    SAHF                                ; 0057f824
    JNC 0x0057fa69                      ; 0057f825
        ;   XREF to: 0057fa69 (CONDITIONAL_JUMP)  ; LAB_0057fa69
    LEA EAX,[ESI + 0x10c]               ; 0057f82b
    FLD float ptr [ESP + 0x3d34]        ; 0057f831
    FSUB float ptr [EAX]                ; 0057f838
    FLD float ptr [ESP + 0x3d38]        ; 0057f83a
    FXCH                                ; 0057f841
    FSTP float ptr [ESP + 0x46ec]       ; 0057f843
    FSUB float ptr [EAX + 0x4]          ; 0057f84a
    FST float ptr [ESP + 0x46f0]        ; 0057f84d
    FMUL float ptr [ESP + 0x46f0]       ; 0057f854
    FLD float ptr [ESP + 0x46ec]        ; 0057f85b
    FMUL ST0                            ; 0057f862
    FLD float ptr [ESP + 0x3d3c]        ; 0057f864
    FSUB float ptr [EAX + 0x8]          ; 0057f86b
    FXCH                                ; 0057f86e
    FADDP ST2,ST0                       ; 0057f870
    FST float ptr [ESP + 0x46f4]        ; 0057f872
    FMUL float ptr [ESP + 0x46f4]       ; 0057f879
    FADDP                               ; 0057f880
    FSQRT                               ; 0057f882
    FCOMP double ptr [0x00648515]       ; 0057f884 | DOUBLE_00648515
    FNSTSW AX                           ; 0057f88a
    SAHF                                ; 0057f88c
    JNC 0x0057fa69                      ; 0057f88d
        ;   XREF to: 0057fa69 (CONDITIONAL_JUMP)  ; LAB_0057fa69
    LEA EAX,[ESP + 0x3c28]              ; 0057f893
    PUSH EAX                            ; 0057f89a
    PUSH 0x64839e                       ; 0057f89b | = "%s.raw"
    LEA EAX,[ESP + 0x40d4]              ; 0057f8a0
    PUSH EAX                            ; 0057f8a7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057f8a8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057f8ad
    PUSH 0x6483a5                       ; 0057f8b0 | = "rb"
    LEA EAX,[ESP + 0x40d0]              ; 0057f8b5
    PUSH EAX                            ; 0057f8bc
    PUSH 0x6483a8                       ; 0057f8bd | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057f8c2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057f8c7
    PUSH ESI                            ; 0057f8ca
    PUSH 0x6483b1                       ; 0057f8cb | = "%s.raw"
    MOV dword ptr [ESP + 0x4748],EAX    ; 0057f8d0
    LEA EAX,[ESP + 0x41d4]              ; 0057f8d7
    PUSH EAX                            ; 0057f8de
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057f8df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057f8e4
    PUSH 0x6483b8                       ; 0057f8e7 | = "wb"
    LEA EAX,[ESP + 0x41d0]              ; 0057f8ec
    PUSH EAX                            ; 0057f8f3
    PUSH 0x6483bb                       ; 0057f8f4 | = "backdrop"
    XOR ESI,ESI                         ; 0057f8f9
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057f8fb
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057f900
    MOV EDI,EAX                         ; 0057f903
    PUSH EDI                            ; 0057f905
        ;   Label: LAB_0057f905
    MOV EAX,dword ptr [ESP + 0x4744]    ; 0057f906
    PUSH EAX                            ; 0057f90d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057f90e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057f913
    PUSH EAX                            ; 0057f916
    INC ESI                             ; 0057f917
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0057f918
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0057f91d
    CMP ESI,0x4b000                     ; 0057f920
    JL 0x0057f905                       ; 0057f926
        ;   XREF to: 0057f905 (CONDITIONAL_JUMP)  ; LAB_0057f905
    IMUL EBX,EBX,0x1a4                  ; 0057f928
    PUSH 0xecd                          ; 0057f92e
    PUSH 0x6483c4                       ; 0057f933 | = "..\\core\\setedit.cpp"
    MOV EDX,dword ptr [ESP + 0x4748]    ; 0057f938
    PUSH EDX                            ; 0057f93f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057f940
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057f945
    PUSH 0xece                          ; 0057f948
    PUSH 0x6483d8                       ; 0057f94d | = "..\\core\\setedit.cpp"
    PUSH EDI                            ; 0057f952
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057f953
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057f958
    LEA EAX,[ESP + 0x3c28]              ; 0057f95b
    PUSH EAX                            ; 0057f962
    PUSH 0x6483ec                       ; 0057f963 | = "%s.act"
    LEA EAX,[ESP + 0x40d4]              ; 0057f968
    PUSH EAX                            ; 0057f96f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057f970
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057f975
    PUSH 0x6483f3                       ; 0057f978 | = "rb"
    LEA EAX,[ESP + 0x40d0]              ; 0057f97d
    PUSH EAX                            ; 0057f984
    PUSH 0x6483f6                       ; 0057f985 | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057f98a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057f98f
    ADD EBX,dword ptr [ESP + 0x4744]    ; 0057f992
    PUSH EBX                            ; 0057f999
    PUSH 0x6483ff                       ; 0057f99a | = "%s.act"
    MOV dword ptr [ESP + 0x4748],EAX    ; 0057f99f
    LEA EAX,[ESP + 0x41d4]              ; 0057f9a6
    PUSH EAX                            ; 0057f9ad
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057f9ae
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057f9b3
    PUSH 0x648406                       ; 0057f9b6 | = "wb"
    LEA EAX,[ESP + 0x41d0]              ; 0057f9bb
    PUSH EAX                            ; 0057f9c2
    PUSH 0x648409                       ; 0057f9c3 | = "backdrop"
    XOR EBX,EBX                         ; 0057f9c8
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057f9ca
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057f9cf
    MOV EDI,EAX                         ; 0057f9d2
    MOV ESI,dword ptr [ESP + 0x4740]    ; 0057f9d4
    PUSH EDI                            ; 0057f9db
        ;   Label: LAB_0057f9db
    PUSH ESI                            ; 0057f9dc
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057f9dd
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057f9e2
    PUSH EAX                            ; 0057f9e5
    INC EBX                             ; 0057f9e6
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0057f9e7
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0057f9ec
    CMP EBX,0x300                       ; 0057f9ef
    JL 0x0057f9db                       ; 0057f9f5
        ;   XREF to: 0057f9db (CONDITIONAL_JUMP)  ; LAB_0057f9db
    PUSH 0xed6                          ; 0057f9f7
    PUSH 0x648412                       ; 0057f9fc | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 0057fa01
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fa02
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fa07
    PUSH 0xed7                          ; 0057fa0a
    PUSH 0x648426                       ; 0057fa0f | = "..\\core\\setedit.cpp"
    PUSH EDI                            ; 0057fa14
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fa15
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fa1a
    PUSH 0x0                            ; 0057fa1d
        ;   Label: LAB_0057fa1d
    LEA EAX,[ESP + 0x3c2c]              ; 0057fa1f
    PUSH EAX                            ; 0057fa26
    DEC dword ptr [ESP + 0x4744]        ; 0057fa27
    CALL core_setutil.cpp_C3DSCamera_dtor_FUN_00585340 ; 0057fa2e
        ;   XREF to: 00585340 (UNCONDITIONAL_CALL)  ; C3DSCamera * core_setutil.cpp_C3DSCamera_dtor_FUN_00585340(C3DSCamera * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057fa33
    CMP dword ptr [ESP + 0x473c],0x0    ; 0057fa36
    JG 0x0057f776                       ; 0057fa3e
        ;   XREF to: 0057f776 (CONDITIONAL_JUMP)  ; LAB_0057f776
    PUSH 0xede                          ; 0057fa44
        ;   Label: LAB_0057fa44
    PUSH 0x64843a                       ; 0057fa49 | = "..\\core\\setedit.cpp"
    MOV ECX,dword ptr [ESP + 0x4738]    ; 0057fa4e
    PUSH ECX                            ; 0057fa55
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fa56
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fa5b
    PUSH 0x1                            ; 0057fa5e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057fa60
    PUSH EBX                            ; 0057fa63
    JMP 0x0057eb3b                      ; 0057fa64
        ;   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)  ; LAB_0057eb3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057fa69
        ;   Label: LAB_0057fa69
    INC EBX                             ; 0057fa6c
    MOV ECX,dword ptr [EAX]             ; 0057fa6d
    ADD EDX,0x1a4                       ; 0057fa6f
    CMP EBX,ECX                         ; 0057fa75
    JL 0x0057f7c1                       ; 0057fa77
        ;   XREF to: 0057f7c1 (CONDITIONAL_JUMP)  ; LAB_0057f7c1
    JMP 0x0057fa1d                      ; 0057fa7d
        ;   XREF to: 0057fa1d (UNCONDITIONAL_JUMP)  ; LAB_0057fa1d
    PUSH 0x64844e                       ; 0057fa7f | = "Enter new unique base name : "
        ;   Label: caseD_41
    PUSH 0x0                            ; 0057fa84
    PUSH 0x0                            ; 0057fa86
    XOR AH,AH                           ; 0057fa88
    PUSH 0x5                            ; 0057fa8a
    MOV byte ptr [ESP + 0x46ec],AH      ; 0057fa8c
    LEA EAX,[ESP + 0x46ec]              ; 0057fa93
    PUSH EAX                            ; 0057fa9a
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0057fa9b
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0057faa0
    LEA EDI,[ESP + 0x46dc]              ; 0057faa3
    SUB ECX,ECX                         ; 0057faaa
    DEC ECX                             ; 0057faac
    XOR EAX,EAX                         ; 0057faad
    SCASB.REPNE ES:EDI                  ; 0057faaf
    NOT ECX                             ; 0057fab1
    DEC ECX                             ; 0057fab3
    TEST ECX,ECX                        ; 0057fab4
    JZ 0x0057eb43                       ; 0057fab6
        ;   XREF to: 0057eb43 (CONDITIONAL_JUMP)  ; caseD_3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057fabc
    XOR EDI,EDI                         ; 0057fabf
    MOV EDX,dword ptr [EAX]             ; 0057fac1
    MOV dword ptr [ESP + 0x4770],EDI    ; 0057fac3
    TEST EDX,EDX                        ; 0057faca
    JLE 0x0057fce8                      ; 0057facc
        ;   XREF to: 0057fce8 (CONDITIONAL_JUMP)  ; LAB_0057fce8
    MOV EAX,dword ptr [ESP + 0x4748]    ; 0057fad2
    MOV dword ptr [ESP + 0x4760],EAX    ; 0057fad9
    MOV EAX,dword ptr [ESP + 0x474c]    ; 0057fae0
    MOV dword ptr [ESP + 0x4764],EAX    ; 0057fae7
    MOV EAX,dword ptr [ESP + 0x4750]    ; 0057faee
    MOV dword ptr [ESP + 0x4768],EAX    ; 0057faf5
    MOV ESI,dword ptr [ESP + 0x4760]    ; 0057fafc
        ;   Label: LAB_0057fafc
    PUSH ESI                            ; 0057fb03
    PUSH 0x64846c                       ; 0057fb04 | = "%s.raw"
    LEA EAX,[ESP + 0x3ed4]              ; 0057fb09
    PUSH EAX                            ; 0057fb10
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057fb11
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057fb16
    MOV EAX,dword ptr [ESP + 0x4770]    ; 0057fb19
    INC EAX                             ; 0057fb20
    PUSH EAX                            ; 0057fb21
    LEA EAX,[ESP + 0x46e0]              ; 0057fb22
    PUSH EAX                            ; 0057fb29
    PUSH 0x648473                       ; 0057fb2a | = "%s%d.raw"
    LEA EAX,[ESP + 0x45d8]              ; 0057fb2f
    PUSH EAX                            ; 0057fb36
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057fb37
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057fb3c
    PUSH 0x64847c                       ; 0057fb3f | = "rb"
    LEA EAX,[ESP + 0x3ed0]              ; 0057fb44
    PUSH EAX                            ; 0057fb4b
    PUSH 0x64847f                       ; 0057fb4c | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057fb51
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057fb56
    PUSH 0x648488                       ; 0057fb59 | = "wb"
    MOV EDI,EAX                         ; 0057fb5e
    LEA EAX,[ESP + 0x45d0]              ; 0057fb60
    PUSH EAX                            ; 0057fb67
    PUSH 0x64848b                       ; 0057fb68 | = "backdrop"
    XOR EBX,EBX                         ; 0057fb6d
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057fb6f
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057fb74
    MOV ESI,EAX                         ; 0057fb77
    PUSH ESI                            ; 0057fb79
        ;   Label: LAB_0057fb79
    PUSH EDI                            ; 0057fb7a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057fb7b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057fb80
    PUSH EAX                            ; 0057fb83
    INC EBX                             ; 0057fb84
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0057fb85
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0057fb8a
    CMP EBX,0x4b000                     ; 0057fb8d
    JL 0x0057fb79                       ; 0057fb93
        ;   XREF to: 0057fb79 (CONDITIONAL_JUMP)  ; LAB_0057fb79
    PUSH 0xef5                          ; 0057fb95
    PUSH 0x648494                       ; 0057fb9a | = "..\\core\\setedit.cpp"
    PUSH EDI                            ; 0057fb9f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fba0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fba5
    PUSH 0xef6                          ; 0057fba8
    PUSH 0x6484a8                       ; 0057fbad | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 0057fbb2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fbb3
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fbb8
    MOV EDI,dword ptr [ESP + 0x4764]    ; 0057fbbb
    PUSH EDI                            ; 0057fbc2
    PUSH 0x6484bc                       ; 0057fbc3 | = "%s.act"
    LEA EAX,[ESP + 0x3ed4]              ; 0057fbc8
    PUSH EAX                            ; 0057fbcf
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057fbd0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057fbd5
    MOV EAX,dword ptr [ESP + 0x4770]    ; 0057fbd8
    INC EAX                             ; 0057fbdf
    PUSH EAX                            ; 0057fbe0
    LEA EAX,[ESP + 0x46e0]              ; 0057fbe1
    PUSH EAX                            ; 0057fbe8
    PUSH 0x6484c3                       ; 0057fbe9 | = "%s%d.act"
    LEA EAX,[ESP + 0x45d8]              ; 0057fbee
    PUSH EAX                            ; 0057fbf5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057fbf6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057fbfb
    PUSH 0x6484cc                       ; 0057fbfe | = "rb"
    LEA EAX,[ESP + 0x3ed0]              ; 0057fc03
    PUSH EAX                            ; 0057fc0a
    PUSH 0x6484cf                       ; 0057fc0b | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057fc10
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057fc15
    PUSH 0x6484d8                       ; 0057fc18 | = "wb"
    MOV EDI,EAX                         ; 0057fc1d
    LEA EAX,[ESP + 0x45d0]              ; 0057fc1f
    PUSH EAX                            ; 0057fc26
    PUSH 0x6484db                       ; 0057fc27 | = "backdrop"
    XOR EBX,EBX                         ; 0057fc2c
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057fc2e
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057fc33
    MOV ESI,EAX                         ; 0057fc36
    PUSH ESI                            ; 0057fc38
        ;   Label: LAB_0057fc38
    PUSH EDI                            ; 0057fc39
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057fc3a
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057fc3f
    PUSH EAX                            ; 0057fc42
    INC EBX                             ; 0057fc43
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0057fc44
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0057fc49
    CMP EBX,0x300                       ; 0057fc4c
    JL 0x0057fc38                       ; 0057fc52
        ;   XREF to: 0057fc38 (CONDITIONAL_JUMP)  ; LAB_0057fc38
    PUSH 0xefe                          ; 0057fc54
    PUSH 0x6484e4                       ; 0057fc59 | = "..\\core\\setedit.cpp"
    PUSH EDI                            ; 0057fc5e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fc5f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fc64
    PUSH 0xeff                          ; 0057fc67
    PUSH 0x6484f8                       ; 0057fc6c | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 0057fc71
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057fc72
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057fc77
    MOV EBX,dword ptr [ESP + 0x4770]    ; 0057fc7a
    INC EBX                             ; 0057fc81
    PUSH EBX                            ; 0057fc82
    LEA EAX,[ESP + 0x46e0]              ; 0057fc83
    PUSH EAX                            ; 0057fc8a
    PUSH 0x64850c                       ; 0057fc8b | = "%s%d"
    MOV ESI,dword ptr [ESP + 0x4774]    ; 0057fc90
    PUSH ESI                            ; 0057fc97
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057fc98
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057fc9d
    LEA EDX,[ESI + 0x1a4]               ; 0057fca0
    MOV EAX,dword ptr [ESP + 0x4764]    ; 0057fca6
    MOV EDI,dword ptr [ESP + 0x4760]    ; 0057fcad
    ADD EAX,0x1a4                       ; 0057fcb4
    MOV dword ptr [ESP + 0x4768],EDX    ; 0057fcb9
    MOV dword ptr [ESP + 0x4764],EAX    ; 0057fcc0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057fcc7
    MOV dword ptr [ESP + 0x4770],EBX    ; 0057fcca
    ADD EDI,0x1a4                       ; 0057fcd1
    MOV ECX,dword ptr [EAX]             ; 0057fcd7
    MOV dword ptr [ESP + 0x4760],EDI    ; 0057fcd9
    CMP EBX,ECX                         ; 0057fce0
    JL 0x0057fafc                       ; 0057fce2
        ;   XREF to: 0057fafc (CONDITIONAL_JUMP)  ; LAB_0057fafc
    PUSH 0x1                            ; 0057fce8
        ;   Label: LAB_0057fce8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057fcea
    PUSH EBX                            ; 0057fced
    JMP 0x0057eb3b                      ; 0057fcee
        ;   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)  ; LAB_0057eb3b

