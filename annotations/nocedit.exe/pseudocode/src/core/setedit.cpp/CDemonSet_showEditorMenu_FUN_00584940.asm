; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; CPickList        Stack[-0x714]:936  local_714
; char[260]        Stack[-0x36c]:260  local_36c
; char[256]        Stack[-0x268]:256  local_268
; char[256]        Stack[-0x168]:256  local_168
; char[80]         Stack[-0x68]:80  local_68
; char *           Stack[-0x18]:4  local_18
; char[4]          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507799
;
; Referenced Globals:
;   TerminatedCString s_Demon_R_Set_Editor_TM_00648e6d
;   TerminatedCString s_s_1_Load_set_00648e85
;   TerminatedCString s_s_2_Save_set_00648e92
;   TerminatedCString s_s_3_Import_set_00648e9f
;   TerminatedCString s_s_4_View_set_00648eae
;   TerminatedCString s_s_7_Light_editor_00648ebb
;   TerminatedCString s_s_9_Camera_editor_00648ecc
;   TerminatedCString s_A_Fog_editor_00648ede
;   TerminatedCString s_C_Rebuild_thumbs_00648eed
;   TerminatedCString s_D_Default_ground_type_s_00648f00
;   TerminatedCString s_F_Export_lights_cameras__00648f1c
;   TerminatedCString s_G_Virtual_director_box_e_00648f42
;   TerminatedCString s_H_Weather_s_00648f62
;   TerminatedCString s_I_Edit_ground_types_00648f72
;   TerminatedCString s_set_00648f88
;   ... and 24 more
;
; Called Functions:
;   core_ground.cpp_getGroundTypeName_FUN_004eed80
;   core_set.cpp_CDemonSet_load_FUN_00569410
;   core_setedit.cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0
;   core_setedit.cpp_CDemonSet_importSet_FUN_00578a20
;   core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0
;   core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170
;   core_setedit.cpp_editGroundTypes_FUN_00578630
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_strupr_FUN_00600770
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584940
        ;   Label: core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
    PUSH ESI                            ; 00584941
    PUSH EDI                            ; 00584942
    PUSH EBP                            ; 00584943
    SUB ESP,0x704                       ; 00584944
    MOV EBP,dword ptr [ESP + 0x718]     ; 0058494a
    MOV EDX,0x1                         ; 00584951
    LEA EAX,[EBP + 0x14d0f0]            ; 00584956
    XOR ECX,ECX                         ; 0058495c
    MOV dword ptr [EBP + 0x14d154],0x0  ; 0058495e
    MOV dword ptr [0x02d807ac],ECX      ; 00584968 | g_CDemonLightInstance.volumetric_enabled
    MOV dword ptr [ESP + 0x6fc],EAX     ; 0058496e
    MOV dword ptr [0x03277d14],EDX      ; 00584975 | g_CDemonRaytraceInstance
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0058497b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0058497b
    PUSH 0x0                            ; 00584980
    PUSH 0x0                            ; 00584982
    PUSH 0x648e6d                       ; 00584984 | = "Demon(R) Set Editor(TM)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584989
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0058498e
    PUSH 0x16                           ; 00584991
    PUSH 0x0                            ; 00584993
    PUSH 0x648e85                       ; 00584995 | = "1.  Load set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058499a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0058499f
    PUSH 0x21                           ; 005849a2
    PUSH 0x0                            ; 005849a4
    PUSH 0x648e92                       ; 005849a6 | = "2.  Save set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005849ab
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005849b0
    PUSH 0x2c                           ; 005849b3
    PUSH 0x0                            ; 005849b5
    PUSH 0x648e9f                       ; 005849b7 | = "3.  Import set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005849bc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005849c1
    PUSH 0x42                           ; 005849c4
    PUSH 0x0                            ; 005849c6
    PUSH 0x648eae                       ; 005849c8 | = "4.  View set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005849cd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005849d2
    PUSH 0x58                           ; 005849d5
    PUSH 0x0                            ; 005849d7
    PUSH 0x648ebb                       ; 005849d9 | = "7.  Light editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005849de
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005849e3
    PUSH 0x6e                           ; 005849e6
    PUSH 0x0                            ; 005849e8
    PUSH 0x648ecc                       ; 005849ea | = "9.  Camera editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005849ef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005849f4
    PUSH 0x79                           ; 005849f7
    PUSH 0x0                            ; 005849f9
    PUSH 0x648ede                       ; 005849fb | = "A.  Fog editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584a00
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00584a05
    PUSH 0x8f                           ; 00584a08
    PUSH 0x0                            ; 00584a0d
    PUSH 0x648eed                       ; 00584a0f | = "C.  Rebuild thumbs"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584a14
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00584a19
    MOV EBX,dword ptr [EBP + 0x15f67c]  ; 00584a1c
    PUSH EBX                            ; 00584a22
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 00584a23
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 00584a28
    PUSH EAX                            ; 00584a2b
    PUSH 0x648f00                       ; 00584a2c | = "D.  Default ground type: %s"
    LEA EAX,[ESP + 0x6b4]               ; 00584a31
    PUSH EAX                            ; 00584a38
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00584a39
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00584a3e
    PUSH 0x9a                           ; 00584a41
    PUSH 0x0                            ; 00584a46
    LEA EAX,[ESP + 0x6b4]               ; 00584a48
    PUSH EAX                            ; 00584a4f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584a50
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00584a55
    PUSH 0xb0                           ; 00584a58
    PUSH 0x0                            ; 00584a5d
    PUSH 0x648f1c                       ; 00584a5f | = "F.  Export lights/cameras to .LC file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584a64
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00584a69
    PUSH 0xbb                           ; 00584a6c
    PUSH 0x0                            ; 00584a71
    PUSH 0x648f42                       ; 00584a73 | = "G.  Virtual director box editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584a78
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x161668]  ; 00584a7d
    ADD ESP,0xc                         ; 00584a83
    MOV ESI,dword ptr [EAX*0x4 + 0x6817f0] ; 00584a86 | g_WeatherTypeNames
    PUSH ESI                            ; 00584a8d
    PUSH 0x648f62                       ; 00584a8e | = "H.  Weather: %s"
    LEA EAX,[ESP + 0x6b4]               ; 00584a93
    PUSH EAX                            ; 00584a9a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00584a9b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00584aa0
    PUSH 0xc6                           ; 00584aa3
    PUSH 0x0                            ; 00584aa8
    LEA EAX,[ESP + 0x6b4]               ; 00584aaa
    PUSH EAX                            ; 00584ab1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584ab2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00584ab7
    PUSH 0xd1                           ; 00584aba
    PUSH 0x0                            ; 00584abf
    PUSH 0x648f72                       ; 00584ac1 | = "I.  Edit ground types"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00584ac6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00584acb
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00584ace
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00584ad3
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDI,dword ptr [0x0067cf44]      ; 00584ad8 | g_CKeysPtr
    PUSH EDI                            ; 00584ade | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 00584adf
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00584ae4
    MOV EBX,EAX                         ; 00584ae7
    CMP EAX,0x41                        ; 00584ae9
    JNC 0x00584d41                      ; 00584aec
        ;   XREF to: 00584d41 (CONDITIONAL_JUMP)  ; LAB_00584d41
    CMP EAX,0x33                        ; 00584af2
    JNC 0x00584d8c                      ; 00584af5
        ;   XREF to: 00584d8c (CONDITIONAL_JUMP)  ; LAB_00584d8c
    CMP EAX,0x31                        ; 00584afb
    JNC 0x00584db9                      ; 00584afe
        ;   XREF to: 00584db9 (CONDITIONAL_JUMP)  ; LAB_00584db9
    CMP EBX,0x1b                        ; 00584b04
        ;   Label: LAB_00584b04
    JNZ 0x0058497b                      ; 00584b07
        ;   XREF to: 0058497b (CONDITIONAL_JUMP)  ; LAB_0058497b
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00584b0d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    ADD ESP,0x704                       ; 00584b12
    POP EBP                             ; 00584b18
    POP EDI                             ; 00584b19
    POP ESI                             ; 00584b1a
    POP EBX                             ; 00584b1b
    RET                                 ; 00584b1c
    PUSH 0x0                            ; 00584b1d
        ;   Label: LAB_00584b1d
    LEA EAX,[ESP + 0x6b0]               ; 00584b1f
    PUSH EAX                            ; 00584b26
    MOV EAX,0x648f88                    ; 00584b27 | = "*.set"
    PUSH EAX                            ; 00584b2c | = "*.set"
    MOV EAX,0x648f8e                    ; 00584b2d | = "models"
    PUSH EAX                            ; 00584b32 | = "models"
    MOV EAX,0x648f95                    ; 00584b33 | = "Load set"
    PUSH EAX                            ; 00584b38 | = "Load set"
    MOV EDX,dword ptr [0x00678a60]      ; 00584b39 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00584b3f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00584b40
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 00584b45
    TEST EAX,EAX                        ; 00584b48
    JZ 0x00584b04                       ; 00584b4a
        ;   XREF to: 00584b04 (CONDITIONAL_JUMP)  ; LAB_00584b04
    LEA EAX,[ESP + 0x6ac]               ; 00584b4c
    PUSH EAX                            ; 00584b53
    PUSH EBP                            ; 00584b54
    CALL core_set.cpp_CDemonSet_load_FUN_00569410 ; 00584b55
        ;   XREF to: 00569410 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_load_FUN_00569410(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00584b5a
    JMP 0x00584b04                      ; 00584b5d
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    MOV byte ptr [ESP + 0x6ac],DL       ; 00584b5f
        ;   Label: LAB_00584b5f
    JMP 0x00584e29                      ; 00584b66
        ;   XREF to: 00584e29 (UNCONDITIONAL_JUMP)  ; LAB_00584e29
    PUSH EBP                            ; 00584b6b
        ;   Label: LAB_00584b6b
    CALL core_setedit.cpp_CDemonSet_importSet_FUN_00578a20 ; 00584b6c
        ;   XREF to: 00578a20 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_importSet_FUN_00578a20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584b71
    JMP 0x00584b04                      ; 00584b74
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH EBP                            ; 00584b76
        ;   Label: LAB_00584b76
    CALL core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 ; 00584b77
        ;   XREF to: 0057a940 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584b7c
    JMP 0x00584b04                      ; 00584b7f
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH EBP                            ; 00584b81
        ;   Label: LAB_00584b81
    CALL core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 ; 00584b82
        ;   XREF to: 0057c5d0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584b87
    JMP 0x00584b04                      ; 00584b8a
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH EBP                            ; 00584b8f
        ;   Label: LAB_00584b8f
    CALL core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 ; 00584b90
        ;   XREF to: 0057e7c0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584b95
    JMP 0x00584b04                      ; 00584b98
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH EBP                            ; 00584b9d
        ;   Label: LAB_00584b9d
    CALL core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730 ; 00584b9e
        ;   XREF to: 00580730 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584ba3
    JMP 0x00584b04                      ; 00584ba6
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH 0x1                            ; 00584bab
        ;   Label: LAB_00584bab
    PUSH EBP                            ; 00584bad
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 00584bae
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 00584bb3
    JMP 0x00584b04                      ; 00584bb6
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    MOV EAX,ESP                         ; 00584bbb
        ;   Label: LAB_00584bbb
    PUSH EAX                            ; 00584bbd
    MOV ESI,0x2                         ; 00584bbe
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00584bc3
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00584bc8
    PUSH ESI                            ; 00584bcb
        ;   Label: LAB_00584bcb
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 00584bcc
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 00584bd1
    PUSH EAX                            ; 00584bd4
    LEA EAX,[ESP + 0x4]                 ; 00584bd5
    PUSH EAX                            ; 00584bd9
    INC ESI                             ; 00584bda
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00584bdb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00584be0
    CMP ESI,0xd                         ; 00584be3
    JLE 0x00584bcb                      ; 00584be6
        ;   XREF to: 00584bcb (CONDITIONAL_JUMP)  ; LAB_00584bcb
    MOV EAX,dword ptr [EBP + 0x15f67c]  ; 00584be8
    PUSH 0x0                            ; 00584bee
    SUB EAX,0x2                         ; 00584bf0
    PUSH EAX                            ; 00584bf3
    PUSH 0x648fb7                       ; 00584bf4 | = "Select default ground type."
    LEA EAX,[ESP + 0xc]                 ; 00584bf9
    PUSH EAX                            ; 00584bfd
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00584bfe
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00584c03
    MOV EBX,EAX                         ; 00584c06
    TEST EAX,EAX                        ; 00584c08
    JL 0x00584c15                       ; 00584c0a
        ;   XREF to: 00584c15 (CONDITIONAL_JUMP)  ; LAB_00584c15
    ADD EAX,0x2                         ; 00584c0c
    MOV dword ptr [EBP + 0x15f67c],EAX  ; 00584c0f
    PUSH 0x0                            ; 00584c15
        ;   Label: LAB_00584c15
    LEA EAX,[ESP + 0x4]                 ; 00584c17
    PUSH EAX                            ; 00584c1b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00584c1c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00584c21
    JMP 0x00584b04                      ; 00584c24
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH EBP                            ; 00584c29
        ;   Label: LAB_00584c29
    CALL core_setedit.cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0 ; 00584c2a
        ;   XREF to: 0057a0c0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584c2f
    JMP 0x00584b04                      ; 00584c32
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    PUSH EBP                            ; 00584c37
        ;   Label: LAB_00584c37
    CALL core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 ; 00584c38
        ;   XREF to: 00583170 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00584c3d
    JMP 0x00584b04                      ; 00584c40
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    MOV ECX,dword ptr [EBP + 0x161668]  ; 00584c45
        ;   Label: LAB_00584c45
    INC ECX                             ; 00584c4b
    MOV dword ptr [EBP + 0x161668],ECX  ; 00584c4c
    CMP ECX,0x2                         ; 00584c52
    JLE 0x00584b04                      ; 00584c55
        ;   XREF to: 00584b04 (CONDITIONAL_JUMP)  ; LAB_00584b04
    MOV dword ptr [EBP + 0x161668],0x0  ; 00584c5b
    JMP 0x00584b04                      ; 00584c65
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    MOV ESI,0x6816d8                    ; 00584c6a | = ".\\GroundTypes"
        ;   Label: LAB_00584c6a
    LEA EDI,[ESP + 0x3a8]               ; 00584c6f
    PUSH EDI                            ; 00584c76
    MOV AL,byte ptr [ESI]               ; 00584c77 | = ".\\GroundTypes" | s_GroundTypes_006816da
        ;   Label: LAB_00584c77
    MOV byte ptr [EDI],AL               ; 00584c79
    CMP AL,0x0                          ; 00584c7b
    JZ 0x00584c8f                       ; 00584c7d
        ;   XREF to: 00584c8f (CONDITIONAL_JUMP)  ; LAB_00584c8f
    MOV AL,byte ptr [ESI + 0x1]         ; 00584c7f | s_\GroundTypes_006816d9 | s_roundTypes_006816db
    ADD ESI,0x2                         ; 00584c82
    MOV byte ptr [EDI + 0x1],AL         ; 00584c85
    ADD EDI,0x2                         ; 00584c88
    CMP AL,0x0                          ; 00584c8b
    JNZ 0x00584c77                      ; 00584c8d
        ;   XREF to: 00584c77 (CONDITIONAL_JUMP)  ; LAB_00584c77
    POP EDI                             ; 00584c8f
        ;   Label: LAB_00584c8f
    CMP byte ptr [EBP + 0x14d0f0],0x0   ; 00584c90
    JZ 0x00584d01                       ; 00584c97
        ;   XREF to: 00584d01 (CONDITIONAL_JUMP)  ; LAB_00584d01
    LEA EAX,[ESP + 0x5ac]               ; 00584c99
    PUSH EAX                            ; 00584ca0
    LEA EAX,[ESP + 0x704]               ; 00584ca1
    PUSH EAX                            ; 00584ca8
    PUSH 0x6816d8                       ; 00584ca9 | = ".\\GroundTypes"
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 00584cae
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 00584cb3
    PUSH 0x0                            ; 00584cb6
    LEA EAX,[ESP + 0x4b0]               ; 00584cb8
    PUSH EAX                            ; 00584cbf
    PUSH 0x0                            ; 00584cc0
    PUSH 0x0                            ; 00584cc2
    MOV EAX,dword ptr [ESP + 0x70c]     ; 00584cc4
    PUSH EAX                            ; 00584ccb
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00584ccc
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00584cd1
    PUSH 0x648fd3                       ; 00584cd4 | = ".txt"
    LEA EAX,[ESP + 0x4b0]               ; 00584cd9
    PUSH EAX                            ; 00584ce0
    LEA EAX,[ESP + 0x5b4]               ; 00584ce1
    PUSH EAX                            ; 00584ce8
    LEA EAX,[ESP + 0x70c]               ; 00584ce9
    PUSH EAX                            ; 00584cf0
    LEA EAX,[ESP + 0x3b8]               ; 00584cf1
    PUSH EAX                            ; 00584cf8
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 00584cf9
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00584cfe
    PUSH 0x1                            ; 00584d01
        ;   Label: LAB_00584d01
    LEA EAX,[ESP + 0x3ac]               ; 00584d03
    PUSH EAX                            ; 00584d0a
    PUSH 0x648fd8                       ; 00584d0b | = "*.txt"
    PUSH 0x648fde                       ; 00584d10 | = "Select ground type file to edit"
    MOV EDX,dword ptr [0x00678a60]      ; 00584d15 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00584d1b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 00584d1c
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 00584d21
    TEST EAX,EAX                        ; 00584d24
    JZ 0x00584b04                       ; 00584d26
        ;   XREF to: 00584b04 (CONDITIONAL_JUMP)  ; LAB_00584b04
    LEA EAX,[ESP + 0x3a8]               ; 00584d2c
    PUSH EAX                            ; 00584d33
    CALL core_setedit.cpp_editGroundTypes_FUN_00578630 ; 00584d34
        ;   XREF to: 00578630 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_editGroundTypes_FUN_00578630(char * filename)
    ADD ESP,0x4                         ; 00584d39
    JMP 0x00584b04                      ; 00584d3c
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    JBE 0x00584b9d                      ; 00584d41
        ;   XREF to: 00584b9d (CONDITIONAL_JUMP)  ; LAB_00584b9d
        ;   Label: LAB_00584d41
    CMP EAX,0x46                        ; 00584d47
    JNC 0x00584d69                      ; 00584d4a
        ;   XREF to: 00584d69 (CONDITIONAL_JUMP)  ; LAB_00584d69
    CMP EAX,0x43                        ; 00584d4c
    JC 0x00584b04                       ; 00584d4f
        ;   XREF to: 00584b04 (CONDITIONAL_JUMP)  ; LAB_00584b04
    JBE 0x00584bab                      ; 00584d55
        ;   XREF to: 00584bab (CONDITIONAL_JUMP)  ; LAB_00584bab
    CMP EAX,0x44                        ; 00584d5b
    JZ 0x00584bbb                       ; 00584d5e
        ;   XREF to: 00584bbb (CONDITIONAL_JUMP)  ; LAB_00584bbb
    JMP 0x00584b04                      ; 00584d64
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    JBE 0x00584c29                      ; 00584d69
        ;   XREF to: 00584c29 (CONDITIONAL_JUMP)  ; LAB_00584c29
        ;   Label: LAB_00584d69
    CMP EAX,0x48                        ; 00584d6f
    JC 0x00584c37                       ; 00584d72
        ;   XREF to: 00584c37 (CONDITIONAL_JUMP)  ; LAB_00584c37
    JBE 0x00584c45                      ; 00584d78
        ;   XREF to: 00584c45 (CONDITIONAL_JUMP)  ; LAB_00584c45
    CMP EAX,0x49                        ; 00584d7e
    JZ 0x00584c6a                       ; 00584d81
        ;   XREF to: 00584c6a (CONDITIONAL_JUMP)  ; LAB_00584c6a
    JMP 0x00584b04                      ; 00584d87
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    JBE 0x00584b6b                      ; 00584d8c
        ;   XREF to: 00584b6b (CONDITIONAL_JUMP)  ; LAB_00584b6b
        ;   Label: LAB_00584d8c
    CMP EAX,0x37                        ; 00584d92
    JNC 0x00584da5                      ; 00584d95
        ;   XREF to: 00584da5 (CONDITIONAL_JUMP)  ; LAB_00584da5
    CMP EAX,0x34                        ; 00584d97
    JZ 0x00584b76                       ; 00584d9a
        ;   XREF to: 00584b76 (CONDITIONAL_JUMP)  ; LAB_00584b76
    JMP 0x00584b04                      ; 00584da0
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    JBE 0x00584b81                      ; 00584da5
        ;   XREF to: 00584b81 (CONDITIONAL_JUMP)  ; LAB_00584b81
        ;   Label: LAB_00584da5
    CMP EAX,0x39                        ; 00584dab
    JZ 0x00584b8f                       ; 00584dae
        ;   XREF to: 00584b8f (CONDITIONAL_JUMP)  ; LAB_00584b8f
    JMP 0x00584b04                      ; 00584db4
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04
    JBE 0x00584b1d                      ; 00584db9
        ;   XREF to: 00584b1d (CONDITIONAL_JUMP)  ; LAB_00584b1d
        ;   Label: LAB_00584db9
    MOV DL,byte ptr [EBP + 0x14d0f0]    ; 00584dbf
    TEST DL,DL                          ; 00584dc5
    JZ 0x00584b5f                       ; 00584dc7
        ;   XREF to: 00584b5f (CONDITIONAL_JUMP)  ; LAB_00584b5f
    PUSH 0x0                            ; 00584dcd
    LEA EAX,[ESP + 0x6b0]               ; 00584dcf
    PUSH EAX                            ; 00584dd6
    PUSH 0x0                            ; 00584dd7
    PUSH 0x0                            ; 00584dd9
    MOV EDI,dword ptr [ESP + 0x70c]     ; 00584ddb
    PUSH EDI                            ; 00584de2
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00584de3
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00584de8
    MOV ESI,0x648f9e                    ; 00584deb | = ".set"
    LEA EDI,[ESP + 0x6ac]               ; 00584df0
    PUSH EDI                            ; 00584df7
    SUB ECX,ECX                         ; 00584df8
    DEC ECX                             ; 00584dfa
    MOV AL,0x0                          ; 00584dfb
    SCASB.REPNE ES:EDI                  ; 00584dfd
    DEC EDI                             ; 00584dff
    MOV AL,byte ptr [ESI]               ; 00584e00 | = ".set" | DAT_00648fa0
        ;   Label: LAB_00584e00
    MOV byte ptr [EDI],AL               ; 00584e02
    CMP AL,0x0                          ; 00584e04
    JZ 0x00584e18                       ; 00584e06
        ;   XREF to: 00584e18 (CONDITIONAL_JUMP)  ; LAB_00584e18
    MOV AL,byte ptr [ESI + 0x1]         ; 00584e08 | DAT_00648f9f | DAT_00648fa1
    ADD ESI,0x2                         ; 00584e0b
    MOV byte ptr [EDI + 0x1],AL         ; 00584e0e
    ADD EDI,0x2                         ; 00584e11
    CMP AL,0x0                          ; 00584e14
    JNZ 0x00584e00                      ; 00584e16
        ;   XREF to: 00584e00 (CONDITIONAL_JUMP)  ; LAB_00584e00
    POP EDI                             ; 00584e18
        ;   Label: LAB_00584e18
    LEA EAX,[ESP + 0x6ac]               ; 00584e19
    PUSH EAX                            ; 00584e20
    CALL crt_string.c_strupr_FUN_00600770 ; 00584e21
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 00584e26
    PUSH 0x1                            ; 00584e29
        ;   Label: LAB_00584e29
    LEA EAX,[ESP + 0x6b0]               ; 00584e2b
    PUSH EAX                            ; 00584e32
    PUSH 0x648fa3                       ; 00584e33 | = "set"
    PUSH 0x648fa7                       ; 00584e38 | = "models"
    PUSH 0x648fae                       ; 00584e3d | = "Save set"
    MOV EAX,[0x00678a60]                ; 00584e42 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00584e47 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 00584e48
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 00584e4d
    TEST EAX,EAX                        ; 00584e50
    JZ 0x00584b04                       ; 00584e52
        ;   XREF to: 00584b04 (CONDITIONAL_JUMP)  ; LAB_00584b04
    LEA EAX,[ESP + 0x6ac]               ; 00584e58
    PUSH EAX                            ; 00584e5f
    PUSH EBP                            ; 00584e60
    CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 ; 00584e61
        ;   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00584e66
    JMP 0x00584b04                      ; 00584e69
        ;   XREF to: 00584b04 (UNCONDITIONAL_JUMP)  ; LAB_00584b04

