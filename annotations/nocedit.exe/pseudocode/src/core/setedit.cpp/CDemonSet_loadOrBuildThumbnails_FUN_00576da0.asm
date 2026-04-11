; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet *this_ptr,int force_rebuild)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   force_rebuild
; Local Variables:
; char[256]        Stack[-0x118]:256  local_118
; CDemonSet *      Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539193
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e2a4
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 at 0057f200
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584bae
;   core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730 at 00580745
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057c5e5
;   core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70 at 00584ec2
;
; Referenced Globals:
;   TerminatedCString s_thm_006466e3
;   undefined4 s_thm_006466e3+1
;   undefined4 s_thm_006466e3+2
;   undefined4 s_thm_006466e3+3
;   TerminatedCString s_rb_006466e8
;   TerminatedCString s_data_006466eb
;   TerminatedCString s_core_setedit_cpp_006466f0
;   TerminatedCString s_Building_thumbnail_image_00646704
;   TerminatedCString s_w_0064671e
;   TerminatedCString s_n_00646720
;   TerminatedCString s_e_00646722
;   TerminatedCString s_s_00646724
;   TerminatedCString s_b_s_p_d_p_p_d_p_00646726
;   TerminatedCString s_Can_t_open_the_following_00646727
;   TerminatedCString s_wb_00646753
;   ... and 14 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60
;   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
;   core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560
;   core_setedit.cpp_loadCameraThumbnail_FUN_005769a0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fwrite_FUN_005fdc00
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576da0
        ;   Label: core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0
    PUSH ESI                            ; 00576da1
    PUSH EDI                            ; 00576da2
    PUSH EBP                            ; 00576da3
    SUB ESP,0x108                       ; 00576da4
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00576daa
    PUSH EDX                            ; 00576db1
    CALL core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560 ; 00576db2
        ;   XREF to: 00580560 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00576db7
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00576dba
    MOV EDI,ESP                         ; 00576dc1
    ADD ESI,0x14d0f0                    ; 00576dc3
    MOV DL,0x2e                         ; 00576dc9
    PUSH EDI                            ; 00576dcb
    MOV AL,byte ptr [ESI]               ; 00576dcc
        ;   Label: LAB_00576dcc
    MOV byte ptr [EDI],AL               ; 00576dce
    CMP AL,0x0                          ; 00576dd0
    JZ 0x00576de4                       ; 00576dd2
        ;   XREF to: 00576de4 (CONDITIONAL_JUMP)  ; LAB_00576de4
    MOV AL,byte ptr [ESI + 0x1]         ; 00576dd4
    ADD ESI,0x2                         ; 00576dd7
    MOV byte ptr [EDI + 0x1],AL         ; 00576dda
    ADD EDI,0x2                         ; 00576ddd
    CMP AL,0x0                          ; 00576de0
    JNZ 0x00576dcc                      ; 00576de2
        ;   XREF to: 00576dcc (CONDITIONAL_JUMP)  ; LAB_00576dcc
    POP EDI                             ; 00576de4
        ;   Label: LAB_00576de4
    MOV ESI,ESP                         ; 00576de5
    MOV AL,byte ptr [ESI]               ; 00576de7
        ;   Label: LAB_00576de7
    CMP AL,DL                           ; 00576de9
    JZ 0x00576dff                       ; 00576deb
        ;   XREF to: 00576dff (CONDITIONAL_JUMP)  ; LAB_00576dff
    CMP AL,0x0                          ; 00576ded
    JZ 0x00576dfd                       ; 00576def
        ;   XREF to: 00576dfd (CONDITIONAL_JUMP)  ; LAB_00576dfd
    INC ESI                             ; 00576df1
    MOV AL,byte ptr [ESI]               ; 00576df2
    CMP AL,DL                           ; 00576df4
    JZ 0x00576dff                       ; 00576df6
        ;   XREF to: 00576dff (CONDITIONAL_JUMP)  ; LAB_00576dff
    INC ESI                             ; 00576df8
    CMP AL,0x0                          ; 00576df9
    JNZ 0x00576de7                      ; 00576dfb
        ;   XREF to: 00576de7 (CONDITIONAL_JUMP)  ; LAB_00576de7
    SUB ESI,ESI                         ; 00576dfd
        ;   Label: LAB_00576dfd
    MOV EDI,ESI                         ; 00576dff
        ;   Label: LAB_00576dff
    TEST ESI,ESI                        ; 00576e01
    JNZ 0x00576e23                      ; 00576e03
        ;   XREF to: 00576e23 (CONDITIONAL_JUMP)  ; LAB_00576e23
    MOV ESI,ESP                         ; 00576e05
    XOR DL,DL                           ; 00576e07
    MOV AL,byte ptr [ESI]               ; 00576e09
        ;   Label: LAB_00576e09
    CMP AL,DL                           ; 00576e0b
    JZ 0x00576e21                       ; 00576e0d
        ;   XREF to: 00576e21 (CONDITIONAL_JUMP)  ; LAB_00576e21
    CMP AL,0x0                          ; 00576e0f
    JZ 0x00576e1f                       ; 00576e11
        ;   XREF to: 00576e1f (CONDITIONAL_JUMP)  ; LAB_00576e1f
    INC ESI                             ; 00576e13
    MOV AL,byte ptr [ESI]               ; 00576e14
    CMP AL,DL                           ; 00576e16
    JZ 0x00576e21                       ; 00576e18
        ;   XREF to: 00576e21 (CONDITIONAL_JUMP)  ; LAB_00576e21
    INC ESI                             ; 00576e1a
    CMP AL,0x0                          ; 00576e1b
    JNZ 0x00576e09                      ; 00576e1d
        ;   XREF to: 00576e09 (CONDITIONAL_JUMP)  ; LAB_00576e09
    SUB ESI,ESI                         ; 00576e1f
        ;   Label: LAB_00576e1f
    MOV EDI,ESI                         ; 00576e21
        ;   Label: LAB_00576e21
    MOV ESI,0x6466e3                    ; 00576e23 | = ".thm"
        ;   Label: LAB_00576e23
    MOV ECX,dword ptr [ESP + 0x120]     ; 00576e28
    PUSH EDI                            ; 00576e2f
    MOV AL,byte ptr [ESI]               ; 00576e30 | = ".thm" | s_thm_006466e3+2
        ;   Label: LAB_00576e30
    MOV byte ptr [EDI],AL               ; 00576e32
    CMP AL,0x0                          ; 00576e34
    JZ 0x00576e48                       ; 00576e36
        ;   XREF to: 00576e48 (CONDITIONAL_JUMP)  ; LAB_00576e48
    MOV AL,byte ptr [ESI + 0x1]         ; 00576e38 | s_thm_006466e3+1 | s_thm_006466e3+3
    ADD ESI,0x2                         ; 00576e3b
    MOV byte ptr [EDI + 0x1],AL         ; 00576e3e
    ADD EDI,0x2                         ; 00576e41
    CMP AL,0x0                          ; 00576e44
    JNZ 0x00576e30                      ; 00576e46
        ;   XREF to: 00576e30 (CONDITIONAL_JUMP)  ; LAB_00576e30
    POP EDI                             ; 00576e48
        ;   Label: LAB_00576e48
    TEST ECX,ECX                        ; 00576e49
    JNZ 0x00576e6e                      ; 00576e4b
        ;   XREF to: 00576e6e (CONDITIONAL_JUMP)  ; LAB_00576e6e
    PUSH 0x6466e8                       ; 00576e4d | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00576e52
    PUSH EAX                            ; 00576e56
    PUSH 0x6466eb                       ; 00576e57 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00576e5c
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 00576e61
    ADD ESP,0xc                         ; 00576e63
    TEST EAX,EAX                        ; 00576e66
    JNZ 0x005770d3                      ; 00576e68
        ;   XREF to: 005770d3 (CONDITIONAL_JUMP)  ; LAB_005770d3
    PUSH 0x2ee000                       ; 00576e6e
        ;   Label: LAB_00576e6e
    PUSH 0x0                            ; 00576e73
    PUSH 0x3365cc0                      ; 00576e75 | g_ThumbnailImageBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 00576e7a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00576e7f
    PUSH 0x3653fc0                      ; 00576e82 | g_MissingBackdropFiles
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 00576e87
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00576e8c
    PUSH 0x646704                       ; 00576e8f | = "Building thumbnail images"
    MOV EBX,dword ptr [0x00678a60]      ; 00576e94 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00576e9a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00576e9b
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00576ea0
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00576ea3
    XOR ESI,ESI                         ; 00576eaa
    MOV EDI,dword ptr [EAX]             ; 00576eac
    XOR EBX,EBX                         ; 00576eae
    TEST EDI,EDI                        ; 00576eb0
    JLE 0x00576f70                      ; 00576eb2
        ;   XREF to: 00576f70 (CONDITIONAL_JUMP)  ; LAB_00576f70
    LEA EDI,[EAX + 0x4]                 ; 00576eb8
    MOV dword ptr [ESP + 0x100],EAX     ; 00576ebb
    MOV EAX,dword ptr [ESP + 0x100]     ; 00576ec2
        ;   Label: LAB_00576ec2
    MOV EDX,dword ptr [EAX + 0x144]     ; 00576ec9
    LEA EBP,[ESI + 0x1]                 ; 00576ecf
    TEST EDX,EDX                        ; 00576ed2
    JZ 0x00577106                       ; 00576ed4
        ;   XREF to: 00577106 (CONDITIONAL_JUMP)  ; LAB_00577106
    PUSH ESI                            ; 00576eda
    PUSH 0x64671e                       ; 00576edb | = "w"
    PUSH EDI                            ; 00576ee0
    CALL core_setedit.cpp_loadCameraThumbnail_FUN_005769a0 ; 00576ee1
        ;   XREF to: 005769a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_loadCameraThumbnail_FUN_005769a0(char * prefix, char * name, int thumbnail_index)
    ADD ESP,0xc                         ; 00576ee6
    PUSH EBP                            ; 00576ee9
    PUSH 0x646720                       ; 00576eea | = "n"
    PUSH EDI                            ; 00576eef
    CALL core_setedit.cpp_loadCameraThumbnail_FUN_005769a0 ; 00576ef0
        ;   XREF to: 005769a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_loadCameraThumbnail_FUN_005769a0(char * prefix, char * name, int thumbnail_index)
    ADD ESP,0xc                         ; 00576ef5
    LEA ESI,[EBP + 0x1]                 ; 00576ef8
    PUSH ESI                            ; 00576efb
    PUSH 0x646722                       ; 00576efc | = "e"
    PUSH EDI                            ; 00576f01
    CALL core_setedit.cpp_loadCameraThumbnail_FUN_005769a0 ; 00576f02
        ;   XREF to: 005769a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_loadCameraThumbnail_FUN_005769a0(char * prefix, char * name, int thumbnail_index)
    ADD ESP,0xc                         ; 00576f07
    INC ESI                             ; 00576f0a
    PUSH ESI                            ; 00576f0b
    PUSH 0x646724                       ; 00576f0c | = "s"
    PUSH EDI                            ; 00576f11
    INC ESI                             ; 00576f12
    CALL core_setedit.cpp_loadCameraThumbnail_FUN_005769a0 ; 00576f13
        ;   XREF to: 005769a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_loadCameraThumbnail_FUN_005769a0(char * prefix, char * name, int thumbnail_index)
        ;   Label: LAB_00576f13
    ADD ESP,0xc                         ; 00576f18
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00576f1b
    SUB ESP,0x4                         ; 00576f22
    FILD dword ptr [EAX]                ; 00576f25
    MOV dword ptr [ESP + 0x108],EBX     ; 00576f27
    FSTP float ptr [ESP]                ; 00576f2e
    FILD dword ptr [ESP + 0x108]        ; 00576f31
    SUB ESP,0x4                         ; 00576f38
    MOV EBP,dword ptr [0x00678a60]      ; 00576f3b | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00576f41
    PUSH EBP                            ; 00576f44 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00576f45
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float current_progress, float total_progress)
    ADD ESP,0xc                         ; 00576f4a
    ADD dword ptr [ESP + 0x100],0x1a4   ; 00576f4d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00576f58
    INC EBX                             ; 00576f5f
    MOV EDX,dword ptr [EAX]             ; 00576f60
    ADD EDI,0x1a4                       ; 00576f62
    CMP EBX,EDX                         ; 00576f68
    JL 0x00576ec2                       ; 00576f6a
        ;   XREF to: 00576ec2 (CONDITIONAL_JUMP)  ; LAB_00576ec2
    MOV ECX,dword ptr [0x00678a60]      ; 00576f70 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_00576f70
    PUSH ECX                            ; 00576f76 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00576f77
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    MOV EAX,[0x03653fc0]                ; 00576f7c | g_MissingBackdropFiles
    ADD ESP,0x4                         ; 00576f81
    TEST EAX,EAX                        ; 00576f84
    JLE 0x00576fad                      ; 00576f86
        ;   XREF to: 00576fad (CONDITIONAL_JUMP)  ; LAB_00576fad
    PUSH 0x0                            ; 00576f88
    PUSH 0x3653fc0                      ; 00576f8a | g_MissingBackdropFiles
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90 ; 00576f8f
        ;   XREF to: 004a3d90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 00576f94
    PUSH 0x0                            ; 00576f97
    PUSH -0x1                           ; 00576f99
    PUSH 0x646727                       ; 00576f9b | = "Can't open the following background i..."
    PUSH 0x3653fc0                      ; 00576fa0 | g_MissingBackdropFiles
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00576fa5
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00576faa
    PUSH 0x3653fc0                      ; 00576fad | g_MissingBackdropFiles
        ;   Label: LAB_00576fad
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 00576fb2
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00576fb7
    PUSH 0x646753                       ; 00576fba | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 00576fbf
    PUSH EAX                            ; 00576fc3
    PUSH 0x646756                       ; 00576fc4 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00576fc9
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00576fce
    MOV EBX,EAX                         ; 00576fd1
    TEST EAX,EAX                        ; 00576fd3
    JNZ 0x00576ffa                      ; 00576fd5
        ;   XREF to: 00576ffa (CONDITIONAL_JUMP)  ; LAB_00576ffa
    MOV ESI,0x64675b                    ; 00576fd7 | = "..\\core\\setedit.cpp"
    MOV EDI,0x17d                       ; 00576fdc
    PUSH 0x64676f                       ; 00576fe1 | = "Unable to write thumbs"
    MOV dword ptr [0x02f0ca48],ESI      ; 00576fe6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00576fec | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00576ff2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00576ff7
    PUSH EBX                            ; 00576ffa
        ;   Label: LAB_00576ffa
    PUSH 0x1                            ; 00576ffb
    PUSH 0x2ee000                       ; 00576ffd
    PUSH 0x3365cc0                      ; 00577002 | g_ThumbnailImageBuffer
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00577007
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0057700c
    PUSH 0x17f                          ; 0057700f
    PUSH 0x646786                       ; 00577014 | = "..\\core\\setedit.cpp"
    PUSH EBX                            ; 00577019
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057701a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057701f
    MOV EBP,dword ptr [ESP + 0x11c]     ; 00577022
    PUSH EBP                            ; 00577029
    LEA EDI,[ESP + 0x4]                 ; 0057702a
    CALL core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60 ; 0057702e
        ;   XREF to: 00575f60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00577033
    LEA ESI,[EBP + 0x14d0f0]            ; 00577036
    MOV DL,0x2e                         ; 0057703c
    PUSH EDI                            ; 0057703e
    MOV AL,byte ptr [ESI]               ; 0057703f
        ;   Label: LAB_0057703f
    MOV byte ptr [EDI],AL               ; 00577041
    CMP AL,0x0                          ; 00577043
    JZ 0x00577057                       ; 00577045
        ;   XREF to: 00577057 (CONDITIONAL_JUMP)  ; LAB_00577057
    MOV AL,byte ptr [ESI + 0x1]         ; 00577047
    ADD ESI,0x2                         ; 0057704a
    MOV byte ptr [EDI + 0x1],AL         ; 0057704d
    ADD EDI,0x2                         ; 00577050
    CMP AL,0x0                          ; 00577053
    JNZ 0x0057703f                      ; 00577055
        ;   XREF to: 0057703f (CONDITIONAL_JUMP)  ; LAB_0057703f
    POP EDI                             ; 00577057
        ;   Label: LAB_00577057
    MOV ESI,ESP                         ; 00577058
    MOV AL,byte ptr [ESI]               ; 0057705a
        ;   Label: LAB_0057705a
    CMP AL,DL                           ; 0057705c
    JZ 0x00577072                       ; 0057705e
        ;   XREF to: 00577072 (CONDITIONAL_JUMP)  ; LAB_00577072
    CMP AL,0x0                          ; 00577060
    JZ 0x00577070                       ; 00577062
        ;   XREF to: 00577070 (CONDITIONAL_JUMP)  ; LAB_00577070
    INC ESI                             ; 00577064
    MOV AL,byte ptr [ESI]               ; 00577065
    CMP AL,DL                           ; 00577067
    JZ 0x00577072                       ; 00577069
        ;   XREF to: 00577072 (CONDITIONAL_JUMP)  ; LAB_00577072
    INC ESI                             ; 0057706b
    CMP AL,0x0                          ; 0057706c
    JNZ 0x0057705a                      ; 0057706e
        ;   XREF to: 0057705a (CONDITIONAL_JUMP)  ; LAB_0057705a
    SUB ESI,ESI                         ; 00577070
        ;   Label: LAB_00577070
    MOV EDI,ESI                         ; 00577072
        ;   Label: LAB_00577072
    TEST ESI,ESI                        ; 00577074
    JNZ 0x00577096                      ; 00577076
        ;   XREF to: 00577096 (CONDITIONAL_JUMP)  ; LAB_00577096
    MOV ESI,ESP                         ; 00577078
    XOR DL,DL                           ; 0057707a
    MOV AL,byte ptr [ESI]               ; 0057707c
        ;   Label: LAB_0057707c
    CMP AL,DL                           ; 0057707e
    JZ 0x00577094                       ; 00577080
        ;   XREF to: 00577094 (CONDITIONAL_JUMP)  ; LAB_00577094
    CMP AL,0x0                          ; 00577082
    JZ 0x00577092                       ; 00577084
        ;   XREF to: 00577092 (CONDITIONAL_JUMP)  ; LAB_00577092
    INC ESI                             ; 00577086
    MOV AL,byte ptr [ESI]               ; 00577087
    CMP AL,DL                           ; 00577089
    JZ 0x00577094                       ; 0057708b
        ;   XREF to: 00577094 (CONDITIONAL_JUMP)  ; LAB_00577094
    INC ESI                             ; 0057708d
    CMP AL,0x0                          ; 0057708e
    JNZ 0x0057707c                      ; 00577090
        ;   XREF to: 0057707c (CONDITIONAL_JUMP)  ; LAB_0057707c
    SUB ESI,ESI                         ; 00577092
        ;   Label: LAB_00577092
    MOV EDI,ESI                         ; 00577094
        ;   Label: LAB_00577094
    MOV ESI,0x64679a                    ; 00577096 | = ".zth"
        ;   Label: LAB_00577096
    PUSH EDI                            ; 0057709b
    MOV AL,byte ptr [ESI]               ; 0057709c | = ".zth" | s_th_0064679c
        ;   Label: LAB_0057709c
    MOV byte ptr [EDI],AL               ; 0057709e
    CMP AL,0x0                          ; 005770a0
    JZ 0x005770b4                       ; 005770a2
        ;   XREF to: 005770b4 (CONDITIONAL_JUMP)  ; LAB_005770b4
    MOV AL,byte ptr [ESI + 0x1]         ; 005770a4 | s_zth_0064679b | s_h_0064679d
    ADD ESI,0x2                         ; 005770a7
    MOV byte ptr [EDI + 0x1],AL         ; 005770aa
    ADD EDI,0x2                         ; 005770ad
    CMP AL,0x0                          ; 005770b0
    JNZ 0x0057709c                      ; 005770b2
        ;   XREF to: 0057709c (CONDITIONAL_JUMP)  ; LAB_0057709c
    POP EDI                             ; 005770b4
        ;   Label: LAB_005770b4
    MOV EAX,ESP                         ; 005770b5
    PUSH EAX                            ; 005770b7
    MOV EAX,dword ptr [ESP + 0x120]     ; 005770b8
    PUSH EAX                            ; 005770bf
    CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 ; 005770c0
        ;   XREF to: 00575e40 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005770c5
    ADD ESP,0x108                       ; 005770c8
    POP EBP                             ; 005770ce
    POP EDI                             ; 005770cf
    POP ESI                             ; 005770d0
    POP EBX                             ; 005770d1
    RET                                 ; 005770d2
    PUSH EAX                            ; 005770d3
        ;   Label: LAB_005770d3
    PUSH 0x1                            ; 005770d4
    PUSH 0x2ee000                       ; 005770d6
    PUSH 0x3365cc0                      ; 005770db | g_ThumbnailImageBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005770e0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005770e5
    PUSH 0x152                          ; 005770e8
    PUSH 0x6466f0                       ; 005770ed | = "..\\core\\setedit.cpp"
    PUSH EBX                            ; 005770f2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005770f3
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005770f8
    ADD ESP,0x108                       ; 005770fb
    POP EBP                             ; 00577101
    POP EDI                             ; 00577102
    POP ESI                             ; 00577103
    POP EBX                             ; 00577104
    RET                                 ; 00577105
    PUSH ESI                            ; 00577106
        ;   Label: LAB_00577106
    PUSH 0x646726                       ; 00577107 | s_b_s_p_d_p_p_d_p_00646726
    PUSH EDI                            ; 0057710c
    MOV ESI,EBP                         ; 0057710d
    JMP 0x00576f13                      ; 0057710f
        ;   XREF to: 00576f13 (UNCONDITIONAL_JUMP)  ; LAB_00576f13

