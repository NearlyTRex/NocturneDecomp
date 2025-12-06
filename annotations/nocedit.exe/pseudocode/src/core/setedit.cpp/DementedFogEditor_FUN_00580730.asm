; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setedit.cpp_DementedFogEditor_FUN_00580730(void * unk)
;
; Parameters:
; void *           Stack[0x4]:4   unk
; Local Variables:
; undefined8       Stack[-0x600]:8  local_600
; undefined8       Stack[-0x5f8]:8  local_5f8
; undefined8       Stack[-0x5f0]:8  local_5f0
; undefined1       Stack[-0x5e8]:1  local_5e8
; undefined1       Stack[-0x240]:1  local_240
; undefined1       Stack[-0x140]:1  local_140
; undefined1       Stack[-0x13f]:1  local_13f
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584b9e
;
; Referenced Globals:
;   TerminatedCString s_Demented_R_Fog_Editor_00648639
;   TerminatedCString s_s_1_Use_global_fog_00648650
;   TerminatedCString s_s_1_Fog_settings_for_cam_00648663
;   TerminatedCString s_s_2_Fog_color_d_d_d_00648682
;   TerminatedCString s_s_3_Fog_velocity_f_f_f_0064869b
;   TerminatedCString s_s_4_Fog_taper_f_006486b7
;   TerminatedCString s_s_5_Fog_density_f_006486ca
;   TerminatedCString s_T_Temperature_F_3_2f_006486df
;   TerminatedCString s_s_6_Reset_all_cameras_to_006486fb
;   TerminatedCString s_s_7_Precompute_fog_for_s_00648727
;   TerminatedCString s_S_Save_set_0064874e
;   TerminatedCString s_s_8_Preview_fog_settings_0064875b
;   TerminatedCString s_s_9_Precompute_fog_00648774
;   TerminatedCString s_R_Default_set_reverb_s_00648787
;   TerminatedCString s_R_Reverb_for_camera_s_s_006487a3
;   ... and 40 more
;
; Called Functions:
;   core_setedit.cpp_BackdropMaybe_FUN_005805a0
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
;   core_setedit.cpp_CDemonSet_FUN_00577af0
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
;   core_setedit.cpp_FUN_00581320
;   core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70
;   core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
;   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c_strtod_FUN_005ff0f3
;   crt_string.c_strupr_FUN_00600770
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580730
        ;   Label: core_setedit.cpp_DementedFogEditor_FUN_00580730
    PUSH ESI                            ; 00580731
    PUSH EDI                            ; 00580732
    PUSH EBP                            ; 00580733
    MOV EBP,ESP                         ; 00580734
    SUB ESP,0x5d4                       ; 00580736
    AND ESP,0xfffffff8                  ; 0058073c
    PUSH 0x0                            ; 0058073f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00580741
    PUSH EDX                            ; 00580744
    CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 ; 00580745 | void core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet * this_ptr)
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058074a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058074d
    ADD EAX,0x4                         ; 00580750
    MOV dword ptr [EAX + 0x15aea0],0x0  ; 00580753
    MOV dword ptr [ESP + 0x5c0],EAX     ; 0058075d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580764
    ADD EAX,0x15ac30                    ; 00580767
    MOV dword ptr [ESP + 0x5c4],EAX     ; 0058076c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580773
    ADD EAX,0x15ac3c                    ; 00580776
    MOV dword ptr [ESP + 0x5d0],EAX     ; 0058077b
    MOV EAX,dword ptr [ESP + 0x5c0]     ; 00580782
    MOV dword ptr [ESP + 0x5b8],EAX     ; 00580789
    MOV EAX,dword ptr [ESP + 0x5c4]     ; 00580790
    MOV dword ptr [ESP + 0x5cc],EAX     ; 00580797
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058079e
    ADD EAX,0x15ac7c                    ; 005807a1
    MOV dword ptr [ESP + 0x5b0],EAX     ; 005807a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005807ad
    ADD EAX,0x14d0f0                    ; 005807b0
    MOV dword ptr [ESP + 0x5b4],EAX     ; 005807b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005807bc
        ;   Label: LAB_005807bc
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 005807bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 005807c9
    CMP dword ptr [EDX + EAX*0x1 + 0x154],0x0 ; 005807cc
    JZ 0x00580af7                       ; 005807d4 | LAB_00580af7
        ;   XREF to: 00580af7 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x5c4]     ; 005807da
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005807e1 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_005807e1
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 005807e6
    PUSH 0x0                            ; 005807e8
    PUSH 0x648639                       ; 005807ea | = "Demented(R) Fog Editor" | s_Demented_R_Fog_Editor_00648639 = Demented(R) Fog Editor
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005807ef | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005807f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005807f7
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 005807fa
    MOV EDX,dword ptr [EBP + 0x14]      ; 00580804
    CMP dword ptr [EDX + EAX*0x1 + 0x154],0x0 ; 00580807
    JZ 0x00580b09                       ; 0058080f | LAB_00580b09
        ;   XREF to: 00580b09 (CONDITIONAL_JUMP)
    PUSH 0x16                           ; 00580815
    PUSH 0x0                            ; 00580817
    PUSH 0x648650                       ; 00580819 | = "1.  Use global fog" | s_s_1_Use_global_fog_00648650 = 1.  Use global fog
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058081e | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   Label: LAB_0058081e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580823
    MOV EDI,dword ptr [ESI + 0x8]       ; 00580826
    PUSH EDI                            ; 00580829
    MOV EAX,dword ptr [ESI + 0x4]       ; 0058082a
    PUSH EAX                            ; 0058082d
    MOV EDX,dword ptr [ESI]             ; 0058082e
    PUSH EDX                            ; 00580830
    PUSH 0x648682                       ; 00580831 | = "2.  Fog color : %d,%d,%d" | s_s_2_Fog_color_d_d_d_00648682 = 2.  Fog color : %d,%d,%d
    LEA EAX,[ESP + 0x4b8]               ; 00580836
    PUSH EAX                            ; 0058083d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0058083e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580843
    PUSH 0x2c                           ; 00580846
    PUSH 0x0                            ; 00580848
    LEA EAX,[ESP + 0x4b0]               ; 0058084a
    PUSH EAX                            ; 00580851
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00580852 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580857
    SUB ESP,0x8                         ; 0058085a
    FLD float ptr [ESI + 0x14]          ; 0058085d
    FSTP double ptr [ESP]               ; 00580860
    SUB ESP,0x8                         ; 00580863
    FLD float ptr [ESI + 0x10]          ; 00580866
    FSTP double ptr [ESP]               ; 00580869
    SUB ESP,0x8                         ; 0058086c
    FLD float ptr [ESI + 0xc]           ; 0058086f
    FSTP double ptr [ESP]               ; 00580872
    PUSH 0x64869b                       ; 00580875 | = "3.  Fog velocity : %f,%f,%f" | s_s_3_Fog_velocity_f_f_f_0064869b = 3.  Fog velocity : %f,%f,%f
    LEA EAX,[ESP + 0x4c4]               ; 0058087a
    PUSH EAX                            ; 00580881
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00580882 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 00580887
    PUSH 0x37                           ; 0058088a
    PUSH 0x0                            ; 0058088c
    LEA EAX,[ESP + 0x4b0]               ; 0058088e
    PUSH EAX                            ; 00580895
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00580896 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058089b
    SUB ESP,0x8                         ; 0058089e
    FLD float ptr [ESI + 0x18]          ; 005808a1
    FSTP double ptr [ESP]               ; 005808a4
    PUSH 0x6486b7                       ; 005808a7 | = "4.  Fog taper : %f" | s_s_4_Fog_taper_f_006486b7 = 4.  Fog taper : %f
    LEA EAX,[ESP + 0x4b4]               ; 005808ac
    PUSH EAX                            ; 005808b3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005808b4 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005808b9
    PUSH 0x42                           ; 005808bc
    PUSH 0x0                            ; 005808be
    LEA EAX,[ESP + 0x4b0]               ; 005808c0
    PUSH EAX                            ; 005808c7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005808c8 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005808cd
    SUB ESP,0x8                         ; 005808d0
    FLD float ptr [ESI + 0x1c]          ; 005808d3
    FSTP double ptr [ESP]               ; 005808d6
    PUSH 0x6486ca                       ; 005808d9 | = "5.  Fog density : %f" | s_s_5_Fog_density_f_006486ca = 5.  Fog density : %f
    LEA EAX,[ESP + 0x4b4]               ; 005808de
    PUSH EAX                            ; 005808e5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005808e6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005808eb
    PUSH 0x4d                           ; 005808ee
    PUSH 0x0                            ; 005808f0
    LEA EAX,[ESP + 0x4b0]               ; 005808f2
    PUSH EAX                            ; 005808f9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005808fa | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005808ff
    SUB ESP,0x8                         ; 00580902
    FLD float ptr [ESI + 0x20]          ; 00580905
    FSTP double ptr [ESP]               ; 00580908
    PUSH 0x6486df                       ; 0058090b | = "T.  Temperature (F) : %3.2f" | s_T_Temperature_F_3_2f_006486df = T.  Temperature (F) : %3.2f
    LEA EAX,[ESP + 0x4b4]               ; 00580910
    PUSH EAX                            ; 00580917
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00580918 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0058091d
    PUSH 0x58                           ; 00580920
    PUSH 0x0                            ; 00580922
    LEA EAX,[ESP + 0x4b0]               ; 00580924
    PUSH EAX                            ; 0058092b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058092c | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580931
    PUSH 0x63                           ; 00580934
    PUSH 0x0                            ; 00580936
    PUSH 0x6486fb                       ; 00580938 | = "6.  Reset all cameras to master fog s..." | s_s_6_Reset_all_cameras_to_006486fb = 6.  Reset all cameras to master fog setting
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058093d | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580942
    PUSH 0x6e                           ; 00580945
    PUSH 0x0                            ; 00580947
    PUSH 0x648727                       ; 00580949 | = "7.  Precompute fog for selected camera" | s_s_7_Precompute_fog_for_s_00648727 = 7.  Precompute fog for selected camera
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058094e | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580953
    PUSH 0x79                           ; 00580956
    PUSH 0x0                            ; 00580958
    PUSH 0x64874e                       ; 0058095a | = "S.  Save set" | s_S_Save_set_0064874e = S.  Save set
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058095f | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580964
    PUSH 0x84                           ; 00580967
    PUSH 0x0                            ; 0058096c
    PUSH 0x64875b                       ; 0058096e | = "8.  Preview fog settings" | s_s_8_Preview_fog_settings_0064875b = 8.  Preview fog settings
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00580973 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580978
    PUSH 0x8f                           ; 0058097b
    PUSH 0x0                            ; 00580980
    PUSH 0x648774                       ; 00580982 | = "9.  Precompute fog" | s_s_9_Precompute_fog_00648774 = 9.  Precompute fog
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00580987 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058098c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058098f
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 00580992
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058099c
    ADD EAX,EBX                         ; 0058099f
    CMP dword ptr [EAX + 0x154],0x0     ; 005809a1
    JZ 0x00580b37                       ; 005809a8 | LAB_00580b37
        ;   XREF to: 00580b37 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x15ac7c]  ; 005809ae
    PUSH EDX                            ; 005809b4
    MOV ECX,dword ptr [0x00681ef8]      ; 005809b5 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH ECX                            ; 005809bb | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70 ; 005809bc | char * core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70(CSound * this_ptr, int sound_mode_index)
        ;   XREF to: 005b3c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005809c1
    PUSH EAX                            ; 005809c4
    PUSH 0x648787                       ; 005809c5 | = "R.  Default set reverb : %s" | s_R_Default_set_reverb_s_00648787 = R.  Default set reverb : %s
    LEA EAX,[ESP + 0x4b0]               ; 005809ca
    PUSH EAX                            ; 005809d1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005809d2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005809d7
    PUSH 0xa5                           ; 005809da
        ;   Label: LAB_005809da
    PUSH 0x0                            ; 005809df
    LEA EAX,[ESP + 0x4b0]               ; 005809e1
    PUSH EAX                            ; 005809e8
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005809e9 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005809ee
    PUSH 0xb0                           ; 005809f1
    PUSH 0x0                            ; 005809f6
    PUSH 0x6487c1                       ; 005809f8 | = "V.  Test reverb" | s_V_Test_reverb_006487c1 = V.  Test reverb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005809fd | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580a02
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580a05
    MOV EBX,dword ptr [EAX]             ; 00580a08
    XOR EDI,EDI                         ; 00580a0a
    TEST EBX,EBX                        ; 00580a0c
    JLE 0x00580a30                      ; 00580a0e | LAB_00580a30
        ;   XREF to: 00580a30 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 00580a10
    MOV EDX,dword ptr [EAX + 0x154]     ; 00580a12
        ;   Label: LAB_00580a12
    MOV dword ptr [ECX + 0x3659388],EDX ; 00580a18 | undefined4 DAT_03659388 | DAT_0365938c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00580a1e
    ADD ECX,0x4                         ; 00580a21
    INC EDI                             ; 00580a24
    MOV EBX,dword ptr [EDX]             ; 00580a25
    ADD EAX,0x1a4                       ; 00580a27
    CMP EDI,EBX                         ; 00580a2c
    JL 0x00580a12                       ; 00580a2e | LAB_00580a12
        ;   XREF to: 00580a12 (CONDITIONAL_JUMP)
    PUSH 0x3659388                      ; 00580a30 | undefined4 DAT_03659388
        ;   Label: LAB_00580a30
    MOV EDI,dword ptr [EBP + 0x14]      ; 00580a35
    PUSH EDI                            ; 00580a38
    CALL core_setedit.cpp_CDemonSet_FUN_00577af0 ; 00580a39 | int core_setedit.cpp_CDemonSet_FUN_00577af0(CDemonSet * this_ptr)
        ;   XREF to: 00577af0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580a3e
    CMP EAX,-0x1                        ; 00580a41
    JZ 0x00580adb                       ; 00580a44 | LAB_00580adb
        ;   XREF to: 00580adb (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDI + 0x15aea4]  ; 00580a4a
    CMP EAX,ECX                         ; 00580a50
    JNZ 0x00580b7c                      ; 00580a52 | LAB_00580b7c
        ;   XREF to: 00580b7c (CONDITIONAL_JUMP)
    IMUL EAX,ECX,0x1a4                  ; 00580a58
    ADD EAX,EDI                         ; 00580a5e
    CMP dword ptr [EAX + 0x154],0x0     ; 00580a60
    SETZ DL                             ; 00580a67
    AND EDX,0xff                        ; 00580a6a
    MOV dword ptr [EAX + 0x154],EDX     ; 00580a70
    IMUL EAX,dword ptr [EDI + 0x15aea4],0x1a4 ; 00580a76
    MOV EDI,dword ptr [ESP + 0x5c0]     ; 00580a80
    MOV EDX,dword ptr [ESP + 0x5c4]     ; 00580a87
    ADD EAX,EDI                         ; 00580a8e
    MOV EBX,dword ptr [EDX]             ; 00580a90
    MOV dword ptr [EAX + 0x154],EBX     ; 00580a92
    ADD EAX,0x154                       ; 00580a98
    MOV EBX,dword ptr [EDX + 0x4]       ; 00580a9d
    MOV ECX,EAX                         ; 00580aa0
    MOV dword ptr [EAX + 0x4],EBX       ; 00580aa2
    ADD EAX,0xc                         ; 00580aa5
    MOV EBX,dword ptr [EDX + 0x8]       ; 00580aa8
    MOV dword ptr [EAX + -0x4],EBX      ; 00580aab
    MOV EBX,dword ptr [ESP + 0x5d0]     ; 00580aae
    CMP EAX,EBX                         ; 00580ab5
    JZ 0x00580ac9                       ; 00580ab7 | LAB_00580ac9
        ;   XREF to: 00580ac9 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX]             ; 00580ab9
    MOV dword ptr [EAX],EDI             ; 00580abb
    MOV EDI,dword ptr [EBX + 0x4]       ; 00580abd
    MOV dword ptr [EAX + 0x4],EDI       ; 00580ac0
    MOV EDI,dword ptr [EBX + 0x8]       ; 00580ac3
    MOV dword ptr [EAX + 0x8],EDI       ; 00580ac6
    MOV EAX,dword ptr [EDX + 0x18]      ; 00580ac9
        ;   Label: LAB_00580ac9
    MOV dword ptr [ECX + 0x18],EAX      ; 00580acc
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00580acf
    MOV dword ptr [ECX + 0x1c],EAX      ; 00580ad2
    MOV EAX,dword ptr [EDX + 0x20]      ; 00580ad5
    MOV dword ptr [ECX + 0x20],EAX      ; 00580ad8
    CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 ; 00580adb | void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0()
        ;   Label: LAB_00580adb
        ;   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00580ae0 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 00580ae5 | bool wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 00580aea
    JNZ 0x0058116b                      ; 00580aec | LAB_0058116b
        ;   XREF to: 0058116b (CONDITIONAL_JUMP)
    JMP 0x005807bc                      ; 00580af2 | LAB_005807bc
        ;   XREF to: 005807bc (UNCONDITIONAL_JUMP)
    ADD EAX,dword ptr [ESP + 0x5c0]     ; 00580af7
        ;   Label: LAB_00580af7
    LEA ESI,[EAX + 0x154]               ; 00580afe
    JMP 0x005807e1                      ; 00580b04 | LAB_005807e1
        ;   XREF to: 005807e1 (UNCONDITIONAL_JUMP)
    ADD EAX,dword ptr [ESP + 0x5c0]     ; 00580b09
        ;   Label: LAB_00580b09
    PUSH EAX                            ; 00580b10
    PUSH 0x648663                       ; 00580b11 | = "1.  Fog settings for camera %s" | s_s_1_Fog_settings_for_cam_00648663 = 1.  Fog settings for camera %s
    LEA EAX,[ESP + 0x3b0]               ; 00580b16
    PUSH EAX                            ; 00580b1d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00580b1e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580b23
    PUSH 0x16                           ; 00580b26
    PUSH 0x0                            ; 00580b28
    LEA EAX,[ESP + 0x3b0]               ; 00580b2a
    PUSH EAX                            ; 00580b31
    JMP 0x0058081e                      ; 00580b32 | LAB_0058081e
        ;   XREF to: 0058081e (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x17c]     ; 00580b37
        ;   Label: LAB_00580b37
    PUSH EDX                            ; 00580b3d
    MOV ECX,dword ptr [0x00681ef8]      ; 00580b3e | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH ECX                            ; 00580b44 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70 ; 00580b45 | char * core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70(CSound * this_ptr, int sound_mode_index)
        ;   XREF to: 005b3c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580b4a
    MOV EBX,dword ptr [EBX + 0x15aea4]  ; 00580b4d
    PUSH EAX                            ; 00580b53
    IMUL EAX,EBX,0x1a4                  ; 00580b54
    ADD EAX,dword ptr [ESP + 0x5c4]     ; 00580b5a
    PUSH EAX                            ; 00580b61
    PUSH 0x6487a3                       ; 00580b62 | = "R.  Reverb for camera %s : %s" | s_R_Reverb_for_camera_s_s_006487a3 = R.  Reverb for camera %s : %s
    LEA EAX,[ESP + 0x4b4]               ; 00580b67
    PUSH EAX                            ; 00580b6e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00580b6f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00580b74
    JMP 0x005809da                      ; 00580b77 | LAB_005809da
        ;   XREF to: 005809da (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDI + 0x15aea4],EAX  ; 00580b7c
        ;   Label: LAB_00580b7c
    JMP 0x00580adb                      ; 00580b82 | LAB_00580adb
        ;   XREF to: 00580adb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580b87
        ;   Label: LAB_00580b87
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 00580b8a
    MOV ECX,dword ptr [EBP + 0x14]      ; 00580b94
    ADD EAX,ECX                         ; 00580b97
    CMP dword ptr [EAX + 0x154],0x0     ; 00580b99
    SETZ AL                             ; 00580ba0
    MOV ESI,dword ptr [ECX + 0x15aea4]  ; 00580ba3
    MOV EDX,EAX                         ; 00580ba9
    IMUL EAX,ESI,0x1a4                  ; 00580bab
    ADD EAX,ECX                         ; 00580bb1
    AND EDX,0xff                        ; 00580bb3
    MOV dword ptr [EAX + 0x154],EDX     ; 00580bb9
    IMUL EAX,dword ptr [ECX + 0x15aea4],0x1a4 ; 00580bbf
    ADD EAX,dword ptr [ESP + 0x5c0]     ; 00580bc9
    MOV ECX,dword ptr [ESP + 0x5c4]     ; 00580bd0
    MOV EDX,dword ptr [ECX]             ; 00580bd7
    MOV dword ptr [EAX + 0x154],EDX     ; 00580bd9
    ADD EAX,0x154                       ; 00580bdf
    MOV EDX,dword ptr [ECX + 0x4]       ; 00580be4
    MOV EBX,EAX                         ; 00580be7
    MOV dword ptr [EAX + 0x4],EDX       ; 00580be9
    ADD EAX,0xc                         ; 00580bec
    MOV EDX,dword ptr [ECX + 0x8]       ; 00580bef
    MOV dword ptr [EAX + -0x4],EDX      ; 00580bf2
    MOV EDX,dword ptr [ESP + 0x5d0]     ; 00580bf5
    CMP EAX,EDX                         ; 00580bfc
    JZ 0x00580c10                       ; 00580bfe | LAB_00580c10
        ;   XREF to: 00580c10 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX]             ; 00580c00
    MOV dword ptr [EAX],ESI             ; 00580c02
    MOV ESI,dword ptr [EDX + 0x4]       ; 00580c04
    MOV dword ptr [EAX + 0x4],ESI       ; 00580c07
    MOV ESI,dword ptr [EDX + 0x8]       ; 00580c0a
    MOV dword ptr [EAX + 0x8],ESI       ; 00580c0d
    MOV EAX,dword ptr [ECX + 0x18]      ; 00580c10
        ;   Label: LAB_00580c10
    MOV dword ptr [EBX + 0x18],EAX      ; 00580c13
    MOV EAX,dword ptr [ECX + 0x1c]      ; 00580c16
    MOV dword ptr [EBX + 0x1c],EAX      ; 00580c19
    MOV EAX,dword ptr [ECX + 0x20]      ; 00580c1c
    MOV dword ptr [EBX + 0x20],EAX      ; 00580c1f
    CMP dword ptr [ESP + 0x5bc],0x1b    ; 00580c22
        ;   Label: LAB_00580c22
    JNZ 0x005807bc                      ; 00580c2a | LAB_005807bc
        ;   XREF to: 005807bc (CONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00580c30 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 00580c35
    POP EBP                             ; 00580c37
    POP EDI                             ; 00580c38
    POP ESI                             ; 00580c39
    POP EBX                             ; 00580c3a
    RET                                 ; 00580c3b
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00580c3c | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00580c3c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV EAX,0x6487f3                    ; 00580c41 | = "Enter fog velocity x,y,z : " | s_Enter_fog_velocity_x_y_z_006487f3 = Enter fog velocity x,y,z :
    PUSH EAX                            ; 00580c46 | = "Enter fog velocity x,y,z : " | s_Enter_fog_velocity_x_y_z_006487f3 = Enter fog velocity x,y,z :
    PUSH 0x0                            ; 00580c47
    PUSH 0x0                            ; 00580c49
    PUSH 0x1e                           ; 00580c4b
    LEA EAX,[ESP + 0x4b8]               ; 00580c4d
    PUSH EAX                            ; 00580c54
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00580c55 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580c5a
    LEA EDI,[ESP + 0x4a8]               ; 00580c5d
    SUB ECX,ECX                         ; 00580c64
    DEC ECX                             ; 00580c66
    XOR EAX,EAX                         ; 00580c67
    SCASB.REPNE ES:EDI                  ; 00580c69
    NOT ECX                             ; 00580c6b
    DEC ECX                             ; 00580c6d
    TEST ECX,ECX                        ; 00580c6e
    JZ 0x00580c22                       ; 00580c70 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x14]                ; 00580c72
    PUSH EAX                            ; 00580c75
    LEA EAX,[ESI + 0x10]                ; 00580c76
    PUSH EAX                            ; 00580c79
    ADD ESI,0xc                         ; 00580c7a
    PUSH ESI                            ; 00580c7d
    MOV EAX,0x64880f                    ; 00580c7e | = "%f,%f,%f" | s_f_f_f_0064880f = %f,%f,%f
    PUSH EAX                            ; 00580c83 | = "%f,%f,%f" | s_f_f_f_0064880f = %f,%f,%f
    LEA EAX,[ESP + 0x4b8]               ; 00580c84
    PUSH EAX                            ; 00580c8b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00580c8c | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580c91
    JMP 0x00580c22                      ; 00580c94 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00580c96 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00580c96
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x648818                       ; 00580c9b | = "Enter in fog taper : " | s_Enter_in_fog_taper_00648818 = Enter in fog taper :
    PUSH 0x0                            ; 00580ca0
    PUSH 0x0                            ; 00580ca2
    PUSH 0x1e                           ; 00580ca4
    LEA EAX,[ESP + 0x4b8]               ; 00580ca6
    PUSH EAX                            ; 00580cad
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00580cae | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580cb3
    LEA EDI,[ESP + 0x4a8]               ; 00580cb6
    SUB ECX,ECX                         ; 00580cbd
    DEC ECX                             ; 00580cbf
    XOR EAX,EAX                         ; 00580cc0
    SCASB.REPNE ES:EDI                  ; 00580cc2
    NOT ECX                             ; 00580cc4
    DEC ECX                             ; 00580cc6
    TEST ECX,ECX                        ; 00580cc7
    JZ 0x00580c22                       ; 00580cc9 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4a8]               ; 00580ccf
    PUSH EAX                            ; 00580cd6
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00580cd7 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x5ac],EAX     ; 00580cdc
    MOV dword ptr [ESP + 0x5b0],EDX     ; 00580ce3
    FLD double ptr [ESP + 0x5ac]        ; 00580cea
    FSTP float ptr [ESI + 0x18]         ; 00580cf1
    ADD ESP,0x4                         ; 00580cf4
    JMP 0x00580c22                      ; 00580cf7 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00580cfc | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00580cfc
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x64882e                       ; 00580d01 | = "Enter in fog density : " | s_Enter_in_fog_density_0064882e = Enter in fog density :
    PUSH 0x0                            ; 00580d06
    PUSH 0x0                            ; 00580d08
    PUSH 0x1e                           ; 00580d0a
    LEA EAX,[ESP + 0x4b8]               ; 00580d0c
    PUSH EAX                            ; 00580d13
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00580d14 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580d19
    LEA EDI,[ESP + 0x4a8]               ; 00580d1c
    SUB ECX,ECX                         ; 00580d23
    DEC ECX                             ; 00580d25
    XOR EAX,EAX                         ; 00580d26
    SCASB.REPNE ES:EDI                  ; 00580d28
    NOT ECX                             ; 00580d2a
    DEC ECX                             ; 00580d2c
    TEST ECX,ECX                        ; 00580d2d
    JZ 0x00580c22                       ; 00580d2f | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4a8]               ; 00580d35
    PUSH EAX                            ; 00580d3c
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00580d3d | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x5ac],EAX     ; 00580d42
    MOV dword ptr [ESP + 0x5b0],EDX     ; 00580d49
    FLD double ptr [ESP + 0x5ac]        ; 00580d50
    FSTP float ptr [ESI + 0x1c]         ; 00580d57
    ADD ESP,0x4                         ; 00580d5a
    JMP 0x00580c22                      ; 00580d5d | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00580d62 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00580d62
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x648846                       ; 00580d67 | = "Enter in temperature : " | s_Enter_in_temperature_00648846 = Enter in temperature :
    PUSH 0x0                            ; 00580d6c
    PUSH 0x0                            ; 00580d6e
    PUSH 0x14                           ; 00580d70
    LEA EAX,[ESP + 0x4b8]               ; 00580d72
    PUSH EAX                            ; 00580d79
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00580d7a | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580d7f
    LEA EDI,[ESP + 0x4a8]               ; 00580d82
    SUB ECX,ECX                         ; 00580d89
    DEC ECX                             ; 00580d8b
    XOR EAX,EAX                         ; 00580d8c
    SCASB.REPNE ES:EDI                  ; 00580d8e
    NOT ECX                             ; 00580d90
    DEC ECX                             ; 00580d92
    TEST ECX,ECX                        ; 00580d93
    JZ 0x00580c22                       ; 00580d95 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4a8]               ; 00580d9b
    PUSH EAX                            ; 00580da2
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00580da3 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x5ac],EAX     ; 00580da8
    MOV dword ptr [ESP + 0x5b0],EDX     ; 00580daf
    FLD double ptr [ESP + 0x5ac]        ; 00580db6
    FSTP float ptr [ESI + 0x20]         ; 00580dbd
    ADD ESP,0x4                         ; 00580dc0
    JMP 0x00580c22                      ; 00580dc3 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580dc8
        ;   Label: LAB_00580dc8
    MOV ECX,dword ptr [EAX + 0x15aea4]  ; 00580dcb
    PUSH ECX                            ; 00580dd1
    PUSH EAX                            ; 00580dd2
    CALL core_setedit.cpp_FUN_00581320  ; 00580dd3 | undefined core_setedit.cpp_FUN_00581320()
        ;   XREF to: 00581320 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580dd8
    JMP 0x00580c22                      ; 00580ddb | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00580de0
        ;   Label: LAB_00580de0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00580de2
    PUSH EDX                            ; 00580de5
    CALL core_setedit.cpp_FUN_00581320  ; 00580de6 | undefined core_setedit.cpp_FUN_00581320()
        ;   XREF to: 00581320 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580deb
    JMP 0x00580c22                      ; 00580dee | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580df3
        ;   Label: LAB_00580df3
    PUSH EAX                            ; 00580df6
    CALL core_setedit.cpp_BackdropMaybe_FUN_005805a0 ; 00580df7 | undefined core_setedit.cpp_BackdropMaybe_FUN_005805a0()
        ;   XREF to: 005805a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00580dfc
    JMP 0x00580c22                      ; 00580dff | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580e04
        ;   Label: LAB_00580e04
    MOV DL,byte ptr [EAX + 0x14d0f0]    ; 00580e07
    TEST DL,DL                          ; 00580e0d
    JNZ 0x00580e61                      ; 00580e0f | LAB_00580e61
        ;   XREF to: 00580e61 (CONDITIONAL_JUMP)
    MOV byte ptr [ESP + 0x4a8],DL       ; 00580e11
    PUSH 0x1                            ; 00580e18
        ;   Label: LAB_00580e18
    LEA EAX,[ESP + 0x4ac]               ; 00580e1a
    PUSH EAX                            ; 00580e21
    PUSH 0x64888c                       ; 00580e22 | = "set" | s_set_0064888c = set
    PUSH 0x648890                       ; 00580e27 | = "models" | s_models_00648890 = models
    PUSH 0x648897                       ; 00580e2c | = "Save set" | s_Save_set_00648897 = Save set
    MOV EDX,dword ptr [0x00678a60]      ; 00580e31 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00580e37 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 00580e38 | bool shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, ...)
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00580e3d
    TEST EAX,EAX                        ; 00580e40
    JZ 0x00580c22                       ; 00580e42 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4a8]               ; 00580e48
    PUSH EAX                            ; 00580e4f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00580e50
    PUSH ECX                            ; 00580e53
    CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 ; 00580e54 | void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)
        ;   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580e59
    JMP 0x00580c22                      ; 00580e5c | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00580e61
        ;   Label: LAB_00580e61
    LEA EAX,[ESP + 0x4ac]               ; 00580e63
    PUSH EAX                            ; 00580e6a
    PUSH 0x0                            ; 00580e6b
    PUSH 0x0                            ; 00580e6d
    MOV EAX,dword ptr [ESP + 0x5c4]     ; 00580e6f
    PUSH EAX                            ; 00580e76
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00580e77 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00580e7c
    MOV ESI,0x648887                    ; 00580e7f | = ".set" | s_set_00648887 = .set
    LEA EDI,[ESP + 0x4a8]               ; 00580e84
    PUSH EDI                            ; 00580e8b
    SUB ECX,ECX                         ; 00580e8c
    DEC ECX                             ; 00580e8e
    MOV AL,0x0                          ; 00580e8f
    SCASB.REPNE ES:EDI                  ; 00580e91
    DEC EDI                             ; 00580e93
    MOV AL,byte ptr [ESI]               ; 00580e94 | = ".set" | s_set_00648887 = .set
        ;   Label: LAB_00580e94
    MOV byte ptr [EDI],AL               ; 00580e96
    CMP AL,0x0                          ; 00580e98
    JZ 0x00580eac                       ; 00580e9a | LAB_00580eac
        ;   XREF to: 00580eac (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00580e9c | DAT_00648888
    ADD ESI,0x2                         ; 00580e9f
    MOV byte ptr [EDI + 0x1],AL         ; 00580ea2
    ADD EDI,0x2                         ; 00580ea5
    CMP AL,0x0                          ; 00580ea8
    JNZ 0x00580e94                      ; 00580eaa | LAB_00580e94
        ;   XREF to: 00580e94 (CONDITIONAL_JUMP)
    POP EDI                             ; 00580eac
        ;   Label: LAB_00580eac
    LEA EAX,[ESP + 0x4a8]               ; 00580ead
    PUSH EAX                            ; 00580eb4
    CALL crt_string.c_strupr_FUN_00600770 ; 00580eb5 | char * crt_string.c_strupr_FUN_00600770(char * string)
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00580eba
    JMP 0x00580e18                      ; 00580ebd | LAB_00580e18
        ;   XREF to: 00580e18 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580ec2
        ;   Label: LAB_00580ec2
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 00580ec5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00580ecf
    CMP dword ptr [EDX + EAX*0x1 + 0x154],0x0 ; 00580ed2
    JZ 0x00580efd                       ; 00580eda | LAB_00580efd
        ;   XREF to: 00580efd (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x5b0]     ; 00580edc
    PUSH ESI                            ; 00580ee3
    PUSH 0x6488a0                       ; 00580ee4 | = "Edit default set reverb" | s_Edit_default_set_reverb_006488a0 = Edit default set reverb
    MOV EDI,dword ptr [0x00681ef8]      ; 00580ee9 | CSound * g_CSoundPtr
    PUSH EDI                            ; 00580eef | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20 ; 00580ef0 | int core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound * this_ptr, char * title, int * selection_inout)
        ;   XREF to: 005b3d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580ef5
    JMP 0x00580c22                      ; 00580ef8 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x5c0]     ; 00580efd
        ;   Label: LAB_00580efd
    ADD EAX,EDI                         ; 00580f04
    PUSH EAX                            ; 00580f06
    PUSH 0x6488b8                       ; 00580f07 | = "Edit reverb for camera %s" | s_Edit_reverb_for_camera_s_006488b8 = Edit reverb for camera %s
    LEA EAX,[ESP + 0x4b0]               ; 00580f0c
    PUSH EAX                            ; 00580f13
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00580f14 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580f19
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580f1c
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 00580f1f
    ADD EAX,EDI                         ; 00580f29
    ADD EAX,0x178                       ; 00580f2b
    PUSH EAX                            ; 00580f30
    LEA EAX,[ESP + 0x4ac]               ; 00580f31
    PUSH EAX                            ; 00580f38
    MOV EBX,dword ptr [0x00681ef8]      ; 00580f39 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EBX                            ; 00580f3f | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20 ; 00580f40 | int core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound * this_ptr, char * title, int * selection_inout)
        ;   XREF to: 005b3d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00580f45
    JMP 0x00580c22                      ; 00580f48 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00580f4d
        ;   Label: LAB_00580f4d
    IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4 ; 00580f50
    ADD EAX,dword ptr [EBP + 0x14]      ; 00580f5a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00580f5d
    MOV EBX,dword ptr [EAX + 0x154]     ; 00580f60
    MOV ESI,dword ptr [ESI + 0x15ac7c]  ; 00580f66
    TEST EBX,EBX                        ; 00580f6c
    JNZ 0x00580f76                      ; 00580f6e | LAB_00580f76
        ;   XREF to: 00580f76 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x17c]     ; 00580f70
    PUSH ESI                            ; 00580f76
        ;   Label: LAB_00580f76
    MOV EDI,dword ptr [0x00681ef8]      ; 00580f77 | CSound * g_CSoundPtr
    PUSH EDI                            ; 00580f7d | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0 ; 00580f7e | void core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound * this_ptr, int index)
        ;   XREF to: 005b3cc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580f83
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 00580f86 | int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 00580f8b
    PUSH 0x0                            ; 00580f8d
    PUSH 0x0                            ; 00580f8f
    PUSH 0x0                            ; 00580f91
    PUSH 0x0                            ; 00580f93
    PUSH 0x0                            ; 00580f95
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020 ; 00580f97 | void sound_sndmain.cpp_set3DListenerPos_FUN_005aa020(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005aa020 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00580f9c
    PUSH 0x3ff00000                     ; 00580f9f
    PUSH 0x0                            ; 00580fa4
    PUSH 0x0                            ; 00580fa6
    PUSH 0x0                            ; 00580fa8
    PUSH 0x0                            ; 00580faa
    PUSH 0x0                            ; 00580fac
    PUSH 0x0                            ; 00580fae
    PUSH 0x0                            ; 00580fb0
    PUSH 0x3ff00000                     ; 00580fb2
    PUSH 0x0                            ; 00580fb7
    PUSH 0x0                            ; 00580fb9
    PUSH 0x0                            ; 00580fbb
    PUSH 0x0                            ; 00580fbd
    PUSH 0x0                            ; 00580fbf
    PUSH 0x0                            ; 00580fc1
    PUSH 0x0                            ; 00580fc3
    PUSH 0x3ff00000                     ; 00580fc5
    PUSH 0x0                            ; 00580fca
    XOR EDI,EDI                         ; 00580fcc
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0 ; 00580fce | void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, ...)
        ;   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x48                        ; 00580fd3
    MOV EAX,ESP                         ; 00580fd6
        ;   Label: LAB_00580fd6
    PUSH EAX                            ; 00580fd8
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00580fd9 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00580fde
    PUSH 0x6488d2                       ; 00580fe1 | = "45.wav" | s_s_45_wav_006488d2 = 45.wav
    LEA EAX,[ESP + 0x4]                 ; 00580fe6
    PUSH EAX                            ; 00580fea
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00580feb | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00580ff0
    PUSH 0x6488d9                       ; 00580ff3 | = "cre-fire.wav" | s_cre_fire_wav_006488d9 = cre-fire.wav
    LEA EAX,[ESP + 0x4]                 ; 00580ff8
    PUSH EAX                            ; 00580ffc
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00580ffd | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581002
    PUSH 0x6488e6                       ; 00581005 | = "shotgun.wav" | s_shotgun_wav_006488e6 = shotgun.wav
    LEA EAX,[ESP + 0x4]                 ; 0058100a
    PUSH EAX                            ; 0058100e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058100f | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581014
    PUSH 0x6488f2                       ; 00581017 | = "zom-s04.wav" | s_zom_s04_wav_006488f2 = zom-s04.wav
    LEA EAX,[ESP + 0x4]                 ; 0058101c
    PUSH EAX                            ; 00581020
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581021 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581026
    PUSH 0x6488fe                       ; 00581029 | = "stranger_hit01.wav" | s_stranger_hit01_wav_006488fe = stranger_hit01.wav
    LEA EAX,[ESP + 0x4]                 ; 0058102e
    PUSH EAX                            ; 00581032
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581033 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581038
    PUSH 0x648911                       ; 0058103b | = "xplode1.wav" | s_xplode1_wav_00648911 = xplode1.wav
    LEA EAX,[ESP + 0x4]                 ; 00581040
    PUSH EAX                            ; 00581044
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581045 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058104a
    PUSH 0x64891d                       ; 0058104d | = "limb1.wav" | s_limb1_wav_0064891d = limb1.wav
    LEA EAX,[ESP + 0x4]                 ; 00581052
    PUSH EAX                            ; 00581056
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581057 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058105c
    PUSH 0x648927                       ; 0058105f | = "footstep-str-0-ct-1.wav" | s_footstep_str_0_ct_1_wav_00648927 = footstep-str-0-ct-1.wav
    LEA EAX,[ESP + 0x4]                 ; 00581064
    PUSH EAX                            ; 00581068
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581069 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058106e
    PUSH 0x64893f                       ; 00581071 | = "footstep-str-0-wd-1.wav" | s_footstep_str_0_wd_1_wav_0064893f = footstep-str-0-wd-1.wav
    LEA EAX,[ESP + 0x4]                 ; 00581076
    PUSH EAX                            ; 0058107a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058107b | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581080
    PUSH 0x648957                       ; 00581083 | = "footstep-str-0-mt-1.wav" | s_footstep_str_0_mt_1_wav_00648957 = footstep-str-0-mt-1.wav
    LEA EAX,[ESP + 0x4]                 ; 00581088
    PUSH EAX                            ; 0058108c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058108d | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581092
    PUSH 0x64896f                       ; 00581095 | = "footstep-str-0-mb-1.wav" | s_footstep_str_0_mb_1_wav_0064896f = footstep-str-0-mb-1.wav
    LEA EAX,[ESP + 0x4]                 ; 0058109a
    PUSH EAX                            ; 0058109e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058109f | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005810a4
    PUSH 0x648987                       ; 005810a7 | = "footstep-str-0-gr-1.wav" | s_footstep_str_0_gr_1_wav_00648987 = footstep-str-0-gr-1.wav
    LEA EAX,[ESP + 0x4]                 ; 005810ac
    PUSH EAX                            ; 005810b0
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005810b1 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005810b6
    PUSH 0x64899f                       ; 005810b9 | = "ric-mt0a.wav" | s_ric_mt0a_wav_0064899f = ric-mt0a.wav
    LEA EAX,[ESP + 0x4]                 ; 005810be
    PUSH EAX                            ; 005810c2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005810c3 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005810c8
    PUSH 0x6489ac                       ; 005810cb | = "ric-ct0a.wav" | s_ric_ct0a_wav_006489ac = ric-ct0a.wav
    LEA EAX,[ESP + 0x4]                 ; 005810d0
    PUSH EAX                            ; 005810d4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005810d5 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005810da
    PUSH 0x0                            ; 005810dd
    PUSH EDI                            ; 005810df
    PUSH ESI                            ; 005810e0
    MOV EBX,dword ptr [0x00681ef8]      ; 005810e1 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EBX                            ; 005810e7 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70 ; 005810e8 | char * core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70(CSound * this_ptr, int sound_mode_index)
        ;   XREF to: 005b3c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005810ed
    PUSH EAX                            ; 005810f0
    LEA EAX,[ESP + 0xc]                 ; 005810f1
    PUSH EAX                            ; 005810f5
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005810f6 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 005810fb
    ADD ESP,0x10                        ; 005810fd
    MOV EDI,EAX                         ; 00581100
    TEST EAX,EAX                        ; 00581102
    JL 0x00581152                       ; 00581104 | LAB_00581152
        ;   XREF to: 00581152 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 00581106 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x40340000                     ; 0058110b
    PUSH 0x0                            ; 00581110
    PUSH 0x0                            ; 00581112
    PUSH 0x0                            ; 00581114
    PUSH 0x0                            ; 00581116
    PUSH 0x0                            ; 00581118
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 0058111a | void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0058111f
    PUSH EBX                            ; 00581122
    LEA EAX,[ESP + 0x4]                 ; 00581123
    PUSH EAX                            ; 00581127
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00581128 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058112d
    PUSH EAX                            ; 00581130
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00581131 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00581136
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 00581139 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0058113e
    LEA EAX,[ESP + 0x4]                 ; 00581140
    PUSH EAX                            ; 00581144
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00581145 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058114a
    JMP 0x00580fd6                      ; 0058114d | LAB_00580fd6
        ;   XREF to: 00580fd6 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00581152
        ;   Label: LAB_00581152
    LEA EAX,[ESP + 0x4]                 ; 00581154
    PUSH EAX                            ; 00581158
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00581159 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058115e
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00581161 | int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)
    JMP 0x00580c22                      ; 00581166 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x0067cf44]      ; 0058116b | CKeys * g_CKeysPtr
        ;   Label: LAB_0058116b
    PUSH EDI                            ; 00581171 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 00581172 | int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00581177
    MOV dword ptr [ESP + 0x5bc],EAX     ; 0058117a
    CMP EAX,0x37                        ; 00581181
    JNC 0x005811fc                      ; 00581184 | LAB_005811fc
        ;   XREF to: 005811fc (CONDITIONAL_JUMP)
    CMP EAX,0x33                        ; 00581186
    JNC 0x00581241                      ; 00581189 | LAB_00581241
        ;   XREF to: 00581241 (CONDITIONAL_JUMP)
    CMP EAX,0x31                        ; 0058118f
    JC 0x00580c22                       ; 00581192 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    JBE 0x00580b87                      ; 00581198 | LAB_00580b87
        ;   XREF to: 00580b87 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0058119e | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV EAX,0x6487d1                    ; 005811a3 | = "Enter fog color r,g,b : " | s_Enter_fog_color_r_g_b_006487d1 = Enter fog color r,g,b :
    PUSH EAX                            ; 005811a8 | = "Enter fog color r,g,b : " | s_Enter_fog_color_r_g_b_006487d1 = Enter fog color r,g,b :
    PUSH 0x0                            ; 005811a9
    PUSH 0x0                            ; 005811ab
    PUSH 0x1e                           ; 005811ad
    LEA EAX,[ESP + 0x4b8]               ; 005811af
    PUSH EAX                            ; 005811b6
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 005811b7 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005811bc
    LEA EDI,[ESP + 0x4a8]               ; 005811bf
    SUB ECX,ECX                         ; 005811c6
    DEC ECX                             ; 005811c8
    XOR EAX,EAX                         ; 005811c9
    SCASB.REPNE ES:EDI                  ; 005811cb
    NOT ECX                             ; 005811cd
    DEC ECX                             ; 005811cf
    TEST ECX,ECX                        ; 005811d0
    JZ 0x00580c22                       ; 005811d2 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x8]                 ; 005811d8
    PUSH EAX                            ; 005811db
    LEA EAX,[ESI + 0x4]                 ; 005811dc
    PUSH EAX                            ; 005811df
    PUSH ESI                            ; 005811e0
    MOV EAX,0x6487ea                    ; 005811e1 | = "%d,%d,%d" | s_d_d_d_006487ea = %d,%d,%d
    PUSH EAX                            ; 005811e6 | = "%d,%d,%d" | s_d_d_d_006487ea = %d,%d,%d
    LEA EAX,[ESP + 0x4b8]               ; 005811e7
    PUSH EAX                            ; 005811ee
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005811ef | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005811f4
    JMP 0x00580c22                      ; 005811f7 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    JBE 0x00580dc8                      ; 005811fc | LAB_00580dc8
        ;   Label: LAB_005811fc
        ;   XREF to: 00580dc8 (CONDITIONAL_JUMP)
    CMP EAX,0x52                        ; 00581202
    JNC 0x0058121e                      ; 00581205 | LAB_0058121e
        ;   XREF to: 0058121e (CONDITIONAL_JUMP)
    CMP EAX,0x38                        ; 00581207
    JBE 0x00580de0                      ; 0058120a | LAB_00580de0
        ;   XREF to: 00580de0 (CONDITIONAL_JUMP)
    CMP EAX,0x39                        ; 00581210
    JZ 0x00580df3                       ; 00581213 | LAB_00580df3
        ;   XREF to: 00580df3 (CONDITIONAL_JUMP)
    JMP 0x00580c22                      ; 00581219 | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    JBE 0x00580ec2                      ; 0058121e | LAB_00580ec2
        ;   Label: LAB_0058121e
        ;   XREF to: 00580ec2 (CONDITIONAL_JUMP)
    CMP EAX,0x54                        ; 00581224
    JC 0x00580e04                       ; 00581227 | LAB_00580e04
        ;   XREF to: 00580e04 (CONDITIONAL_JUMP)
    JBE 0x00580d62                      ; 0058122d | LAB_00580d62
        ;   XREF to: 00580d62 (CONDITIONAL_JUMP)
    CMP EAX,0x56                        ; 00581233
    JZ 0x00580f4d                       ; 00581236 | LAB_00580f4d
        ;   XREF to: 00580f4d (CONDITIONAL_JUMP)
    JMP 0x00580c22                      ; 0058123c | LAB_00580c22
        ;   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
    JBE 0x00580c3c                      ; 00581241 | LAB_00580c3c
        ;   Label: LAB_00581241
        ;   XREF to: 00580c3c (CONDITIONAL_JUMP)
    CMP EAX,0x35                        ; 00581247
    JC 0x00580c96                       ; 0058124a | LAB_00580c96
        ;   XREF to: 00580c96 (CONDITIONAL_JUMP)
    JBE 0x00580cfc                      ; 00581250 | LAB_00580cfc
        ;   XREF to: 00580cfc (CONDITIONAL_JUMP)
    PUSH 0x64885e                       ; 00581256 | = "Reset all cameras to master fog setting?" | s_Reset_all_cameras_to_mas_0064885e = Reset all cameras to master fog setting?
    MOV ESI,dword ptr [0x00678a60]      ; 0058125b | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 00581261 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00581262 | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00581267
    TEST EAX,EAX                        ; 0058126a
    JZ 0x00580c22                       ; 0058126c | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x5b8]     ; 00581272
    MOV EDI,dword ptr [EBP + 0x14]      ; 00581279
    MOV EAX,dword ptr [ESP + 0x5b8]     ; 0058127c
    ADD ECX,0x154                       ; 00581283
    LEA ESI,[EDI + 0x19a28]             ; 00581289
    ADD EAX,0x160                       ; 0058128f
    MOV EDX,dword ptr [ESP + 0x5cc]     ; 00581294
        ;   Label: LAB_00581294
    MOV dword ptr [EDI + 0x154],0x1     ; 0058129b
    MOV dword ptr [ESP + 0x5c8],EDX     ; 005812a5
    MOV EDX,dword ptr [EDX]             ; 005812ac
    MOV dword ptr [ECX],EDX             ; 005812ae
    MOV EDX,dword ptr [ESP + 0x5cc]     ; 005812b0
    MOV EDX,dword ptr [EDX + 0x4]       ; 005812b7
    MOV dword ptr [ECX + 0x4],EDX       ; 005812ba
    MOV EDX,dword ptr [ESP + 0x5cc]     ; 005812bd
    MOV EDX,dword ptr [EDX + 0x8]       ; 005812c4
    MOV dword ptr [ECX + 0x8],EDX       ; 005812c7
    MOV EDX,dword ptr [ESP + 0x5d0]     ; 005812ca
    MOV EBX,ECX                         ; 005812d1
    CMP EAX,EDX                         ; 005812d3
    JZ 0x005812e7                       ; 005812d5 | LAB_005812e7
        ;   XREF to: 005812e7 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 005812d7
    FSTP float ptr [EAX]                ; 005812d9
    FLD float ptr [EDX + 0x4]           ; 005812db
    FSTP float ptr [EAX + 0x4]          ; 005812de
    FLD float ptr [EDX + 0x8]           ; 005812e1
    FSTP float ptr [EAX + 0x8]          ; 005812e4
    MOV EDX,dword ptr [ESP + 0x5c8]     ; 005812e7
        ;   Label: LAB_005812e7
    ADD EAX,0x1a4                       ; 005812ee
    ADD ECX,0x1a4                       ; 005812f3
    ADD EDI,0x1a4                       ; 005812f9
    FLD float ptr [EDX + 0x18]          ; 005812ff
    FSTP float ptr [EBX + 0x18]         ; 00581302
    FLD float ptr [EDX + 0x1c]          ; 00581305
    FSTP float ptr [EBX + 0x1c]         ; 00581308
    FLD float ptr [EDX + 0x20]          ; 0058130b
    FSTP float ptr [EBX + 0x20]         ; 0058130e
    CMP EDI,ESI                         ; 00581311
    JZ 0x00580c22                       ; 00581313 | LAB_00580c22
        ;   XREF to: 00580c22 (CONDITIONAL_JUMP)
    JMP 0x00581294                      ; 00581319 | LAB_00581294
        ;   XREF to: 00581294 (UNCONDITIONAL_JUMP)

