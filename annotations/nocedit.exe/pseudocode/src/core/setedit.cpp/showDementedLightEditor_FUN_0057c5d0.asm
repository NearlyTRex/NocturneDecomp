; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xfd8]:4  local_fd8
; undefined1       Stack[-0xfd4]:1  local_fd4
; undefined1       Stack[-0xc2c]:1  local_c2c
; undefined1       Stack[-0x884]:1  local_884
; undefined1       Stack[-0x4dc]:1  local_4dc
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
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
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584b82
;
; Referenced Globals:
;   TerminatedCString s_Demented_Light_Editor_00647b43
;   TerminatedCString s_s_2d_s_00647b59
;   TerminatedCString s_s_1_Add_spot_light_00647b61
;   TerminatedCString s_s_2_Position_spot_light_00647b74
;   TerminatedCString s_s_3_Delete_light_00647b8c
;   TerminatedCString s_s_4_Precompute_visiblity_00647b9d
;   TerminatedCString s_s_5_Set_ambient_light_00647bb6
;   TerminatedCString s_s_6_Edit_properties_00647bcc
;   TerminatedCString s_s_7_Clone_a_light_00647be0
;   TerminatedCString s_S_Save_set_00647bf2
;   TerminatedCString s_Position_spot_light_00647bff
;   TerminatedCString s_Delete_spot_light_00647c13
;   TerminatedCString s_Precompute_light_visibil_00647c25
;   TerminatedCString s_Set_ambient_level_0_100_00647c42
;   TerminatedCString s_Edit_spot_light_properti_00647c5d
;   ... and 26 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
;   core_game.cpp_CGame_setGameRes_FUN_004dade0
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
;   core_set.cpp_CDemonSet_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
;   core_setedit.cpp_FUN_0057b410
;   core_setedit.cpp_FUN_0057b500
;   core_setedit.cpp_FUN_0057b600
;   core_setedit.cpp_FUN_0057b910
;   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
;   core_setedit.cpp_ResolveMasterLights_FUN_0057c550
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057c5d0
        ;   Label: core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
    PUSH ESI                            ; 0057c5d1
    PUSH EDI                            ; 0057c5d2
    PUSH EBP                            ; 0057c5d3
    MOV EBP,ESP                         ; 0057c5d4
    SUB ESP,0xfc4                       ; 0057c5d6
    AND ESP,0xfffffff8                  ; 0057c5dc
    PUSH 0x0                            ; 0057c5df
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c5e1
    PUSH EDX                            ; 0057c5e4
    CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 ; 0057c5e5 | void core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet * this_ptr)
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057c5ea
    MOV ECX,dword ptr [0x0067b654]      ; 0057c5ed | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH ECX                            ; 0057c5f3 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 0057c5f4 | void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057c5f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057c5fc
    PUSH EBX                            ; 0057c5ff
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057c600 | void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057c605
    LEA EAX,[EBX + 0x14d0f0]            ; 0057c608
    MOV dword ptr [ESP + 0xfac],EAX     ; 0057c60e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057c615 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0057c615
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ESI,0xffffffff                  ; 0057c61a
    MOV EDI,dword ptr [0x00679398]      ; 0057c61f | int g_WindowHeight
    MOV dword ptr [ESP + 0xfb4],ESI     ; 0057c625
    CMP EDI,0x1e0                       ; 0057c62c
    JL 0x0057c79b                       ; 0057c632 | LAB_0057c79b
        ;   XREF to: 0057c79b (CONDITIONAL_JUMP)
    MOV ESI,0x120                       ; 0057c638
    MOV EDI,0x40                        ; 0057c63d
    MOV EAX,[0x03276dac]                ; 0057c642 | int g_MasterLightCount
    XOR EBX,EBX                         ; 0057c647
    CMP EAX,0x1e                        ; 0057c649
    JLE 0x0057c658                      ; 0057c64c | LAB_0057c658
        ;   XREF to: 0057c658 (CONDITIONAL_JUMP)
    MOV ESI,0xc0                        ; 0057c64e
    MOV EDI,0x30                        ; 0057c653
    XOR EDX,EDX                         ; 0057c658
        ;   Label: LAB_0057c658
    MOV ECX,dword ptr [0x03276dac]      ; 0057c65a | int g_MasterLightCount
    MOV dword ptr [ESP + 0xfbc],EDX     ; 0057c660
    TEST ECX,ECX                        ; 0057c667
    JLE 0x0057c79b                      ; 0057c669 | LAB_0057c79b
        ;   XREF to: 0057c79b (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xfc0],EDX     ; 0057c66f
    PUSH EDI                            ; 0057c676
        ;   Label: LAB_0057c676
    PUSH ESI                            ; 0057c677
    MOV EAX,dword ptr [ESP + 0xfc8]     ; 0057c678
    PUSH EBX                            ; 0057c67f
    MOV EDX,dword ptr [EAX + 0x3276db0] ; 0057c680 | CDemonLight *[96] g_MasterLightList
    PUSH EDX                            ; 0057c686
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 ; 0057c687 | void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
        ;   XREF to: 00473390 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02cf6a8c]      ; 0057c68c | int g_MouseX
    ADD ESP,0x10                        ; 0057c692
    CMP EBX,ECX                         ; 0057c695
    JG 0x0057c73f                       ; 0057c697 | LAB_0057c73f
        ;   XREF to: 0057c73f (CONDITIONAL_JUMP)
    LEA EAX,[EBX + EDI*0x1]             ; 0057c69d
    CMP EAX,ECX                         ; 0057c6a0
    JLE 0x0057c73f                      ; 0057c6a2 | LAB_0057c73f
        ;   XREF to: 0057c73f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02cf6a90]      ; 0057c6a8 | int g_MouseY
    CMP ESI,ECX                         ; 0057c6ae
    JG 0x0057c73f                       ; 0057c6b0 | LAB_0057c73f
        ;   XREF to: 0057c73f (CONDITIONAL_JUMP)
    LEA EDX,[ESI + EDI*0x1]             ; 0057c6b6
    CMP EDX,ECX                         ; 0057c6b9
    JLE 0x0057c73f                      ; 0057c6bb | LAB_0057c73f
        ;   XREF to: 0057c73f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0xfbc]     ; 0057c6c1
    MOV dword ptr [ESP + 0xfb4],ECX     ; 0057c6c8
    MOV ECX,0x1                         ; 0057c6cf
    PUSH ESI                            ; 0057c6d4
    SUB EAX,ECX                         ; 0057c6d5
    PUSH EAX                            ; 0057c6d7
    PUSH ESI                            ; 0057c6d8
    MOV dword ptr [0x02d02570],ECX      ; 0057c6d9 | int g_ActiveRenderColor
    SUB EDX,ECX                         ; 0057c6df
    PUSH EBX                            ; 0057c6e1
    MOV dword ptr [ESP + 0xfb4],EAX     ; 0057c6e2
    MOV dword ptr [ESP + 0xfb8],EDX     ; 0057c6e9
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0057c6f0 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057c6f5
    MOV EDX,dword ptr [ESP + 0xfa8]     ; 0057c6f8
    PUSH EDX                            ; 0057c6ff
    MOV ECX,dword ptr [ESP + 0xfa8]     ; 0057c700
    PUSH ECX                            ; 0057c707
    PUSH EDX                            ; 0057c708
    PUSH EBX                            ; 0057c709
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0057c70a | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057c70f
    MOV EDX,dword ptr [ESP + 0xfa8]     ; 0057c712
    PUSH EDX                            ; 0057c719
    PUSH EBX                            ; 0057c71a
    PUSH ESI                            ; 0057c71b
    PUSH EBX                            ; 0057c71c
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0057c71d | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057c722
    MOV ECX,dword ptr [ESP + 0xfa8]     ; 0057c725
    PUSH ECX                            ; 0057c72c
    MOV EAX,dword ptr [ESP + 0xfa8]     ; 0057c72d
    PUSH EAX                            ; 0057c734
    PUSH ESI                            ; 0057c735
    PUSH EAX                            ; 0057c736
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0057c737 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057c73c
    MOV EAX,dword ptr [ESP + 0xfc0]     ; 0057c73f
        ;   Label: LAB_0057c73f
    PUSH ESI                            ; 0057c746
    MOV EAX,dword ptr [EAX + 0x3276db0] ; 0057c747 | CDemonLight *[96] g_MasterLightList
    PUSH EBX                            ; 0057c74d
    ADD EAX,0x40                        ; 0057c74e
    PUSH EAX                            ; 0057c751
    ADD EBX,EDI                         ; 0057c752
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c754 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x00679394]      ; 0057c759 | int g_WindowWidth
    LEA EAX,[EBX + EDI*0x1]             ; 0057c75f
    ADD ESP,0xc                         ; 0057c762
    CMP EAX,ECX                         ; 0057c765
    JLE 0x0057c76d                      ; 0057c767 | LAB_0057c76d
        ;   XREF to: 0057c76d (CONDITIONAL_JUMP)
    ADD ESI,EDI                         ; 0057c769
    XOR EBX,EBX                         ; 0057c76b
    MOV EAX,dword ptr [ESP + 0xfc0]     ; 0057c76d
        ;   Label: LAB_0057c76d
    MOV EDX,dword ptr [ESP + 0xfbc]     ; 0057c774
    MOV ECX,dword ptr [0x03276dac]      ; 0057c77b | int g_MasterLightCount
    ADD EAX,0x4                         ; 0057c781
    INC EDX                             ; 0057c784
    MOV dword ptr [ESP + 0xfc0],EAX     ; 0057c785
    MOV dword ptr [ESP + 0xfbc],EDX     ; 0057c78c
    CMP EDX,ECX                         ; 0057c793
    JL 0x0057c676                       ; 0057c795 | LAB_0057c676
        ;   XREF to: 0057c676 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057c79b
        ;   Label: LAB_0057c79b
    PUSH 0x0                            ; 0057c79d
    MOV ESI,0x16                        ; 0057c79f
    PUSH 0x647b43                       ; 0057c7a4 | = "Demented Light Editor" | s_Demented_Light_Editor_00647b43 = Demented Light Editor
    XOR EBX,EBX                         ; 0057c7a9
    XOR EDI,EDI                         ; 0057c7ab
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c7ad | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03276dac]                ; 0057c7b2 | int g_MasterLightCount
    ADD ESP,0xc                         ; 0057c7b7
    TEST EAX,EAX                        ; 0057c7ba
    JLE 0x0057c855                      ; 0057c7bc | LAB_0057c855
        ;   XREF to: 0057c855 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xfb8],EBX     ; 0057c7c2
    MOV EAX,dword ptr [ESP + 0xfb8]     ; 0057c7c9
        ;   Label: LAB_0057c7c9
    MOV EAX,dword ptr [EAX + 0x3276db0] ; 0057c7d0 | CDemonLight *[96] g_MasterLightList
    ADD EAX,0x40                        ; 0057c7d6
    PUSH EAX                            ; 0057c7d9
    PUSH EDI                            ; 0057c7da
    PUSH 0x647b59                       ; 0057c7db | = "%2d. %s" | s_s_2d_s_00647b59 = %2d. %s
    LEA EAX,[ESP + 0xeb0]               ; 0057c7e0
    PUSH EAX                            ; 0057c7e7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057c7e8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057c7ed
    PUSH ESI                            ; 0057c7f0
    PUSH EBX                            ; 0057c7f1
    LEA EAX,[ESP + 0xeac]               ; 0057c7f2
    PUSH EAX                            ; 0057c7f9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c7fa | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 0057c7ff | int g_WindowHeight
    MOV EDX,EAX                         ; 0057c804
    MOV ECX,0x3                         ; 0057c806
    SAR EDX,0x1f                        ; 0057c80b
    IDIV ECX                            ; 0057c80e
    ADD ESI,0xb                         ; 0057c810
    SUB EAX,0x16                        ; 0057c813
    ADD ESP,0xc                         ; 0057c816
    CMP ESI,EAX                         ; 0057c819
    JL 0x0057c835                       ; 0057c81b | LAB_0057c835
        ;   XREF to: 0057c835 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679394]                ; 0057c81d | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c822
    MOV ECX,0x6                         ; 0057c824
    SAR EDX,0x1f                        ; 0057c829
    IDIV ECX                            ; 0057c82c
    MOV ESI,0x16                        ; 0057c82e
    ADD EBX,EAX                         ; 0057c833
    MOV EDX,dword ptr [ESP + 0xfb8]     ; 0057c835
        ;   Label: LAB_0057c835
    MOV ECX,dword ptr [0x03276dac]      ; 0057c83c | int g_MasterLightCount
    ADD EDX,0x4                         ; 0057c842
    INC EDI                             ; 0057c845
    MOV dword ptr [ESP + 0xfb8],EDX     ; 0057c846
    CMP EDI,ECX                         ; 0057c84d
    JL 0x0057c7c9                       ; 0057c84f | LAB_0057c7c9
        ;   XREF to: 0057c7c9 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0057c855 | int g_WindowHeight
        ;   Label: LAB_0057c855
    MOV EDX,EAX                         ; 0057c85a
    MOV ECX,0x3                         ; 0057c85c
    SAR EDX,0x1f                        ; 0057c861
    IDIV ECX                            ; 0057c864
    LEA EBX,[EAX + -0xb]                ; 0057c866
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c869
    CMP dword ptr [EAX + 0x19a2c],0xc8  ; 0057c86c
    JGE 0x0057c88b                      ; 0057c876 | LAB_0057c88b
        ;   XREF to: 0057c88b (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0xb]                 ; 0057c878
    PUSH EAX                            ; 0057c87b
    PUSH 0x0                            ; 0057c87c
    PUSH 0x647b61                       ; 0057c87e | = "1.  Add spot light" | s_s_1_Add_spot_light_00647b61 = 1.  Add spot light
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c883 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057c888
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c88b
        ;   Label: LAB_0057c88b
    CMP dword ptr [EAX + 0x19a2c],0x0   ; 0057c88e
    JLE 0x0057c8aa                      ; 0057c895 | LAB_0057c8aa
        ;   XREF to: 0057c8aa (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x16]                ; 0057c897
    PUSH EAX                            ; 0057c89a
    PUSH 0x0                            ; 0057c89b
    PUSH 0x647b74                       ; 0057c89d | = "2.  Position spot light" | s_s_2_Position_spot_light_00647b74 = 2.  Position spot light
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c8a2 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057c8a7
    MOV EAX,[0x00679394]                ; 0057c8aa | int g_WindowWidth
        ;   Label: LAB_0057c8aa
    MOV EDX,EAX                         ; 0057c8af
    SAR EDX,0x1f                        ; 0057c8b1
    SHL EDX,0x2                         ; 0057c8b4
    SBB EAX,EDX                         ; 0057c8b7
    SAR EAX,0x2                         ; 0057c8b9
    LEA ESI,[EBX + 0xb]                 ; 0057c8bc
    PUSH ESI                            ; 0057c8bf
    PUSH EAX                            ; 0057c8c0
    PUSH 0x647b8c                       ; 0057c8c1 | = "3.  Delete light" | s_s_3_Delete_light_00647b8c = 3.  Delete light
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c8c6 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 0057c8cb | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c8d0
    SAR EDX,0x1f                        ; 0057c8d2
    SHL EDX,0x2                         ; 0057c8d5
    SBB EAX,EDX                         ; 0057c8d8
    SAR EAX,0x2                         ; 0057c8da
    ADD ESP,0xc                         ; 0057c8dd
    ADD EBX,0x16                        ; 0057c8e0
    PUSH EBX                            ; 0057c8e3
    PUSH EAX                            ; 0057c8e4
    PUSH 0x647b9d                       ; 0057c8e5 | = "4.  Precompute visiblity" | s_s_4_Precompute_visiblity_00647b9d = 4.  Precompute visiblity
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c8ea | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 0057c8ef | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c8f4
    SAR EDX,0x1f                        ; 0057c8f6
    SUB EAX,EDX                         ; 0057c8f9
    SAR EAX,0x1                         ; 0057c8fb
    ADD ESP,0xc                         ; 0057c8fd
    PUSH ESI                            ; 0057c900
    PUSH EAX                            ; 0057c901
    PUSH 0x647bb6                       ; 0057c902 | = "5.  Set ambient light" | s_s_5_Set_ambient_light_00647bb6 = 5.  Set ambient light
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c907 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 0057c90c | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c911
    SAR EDX,0x1f                        ; 0057c913
    SUB EAX,EDX                         ; 0057c916
    SAR EAX,0x1                         ; 0057c918
    ADD ESP,0xc                         ; 0057c91a
    PUSH EBX                            ; 0057c91d
    PUSH EAX                            ; 0057c91e
    PUSH 0x647bcc                       ; 0057c91f | = "6.  Edit properties" | s_s_6_Edit_properties_00647bcc = 6.  Edit properties
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c924 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 0057c929 | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c92e
    SAR EDX,0x1f                        ; 0057c930
    SUB EAX,EDX                         ; 0057c933
    SAR EAX,0x1                         ; 0057c935
    ADD ESP,0xc                         ; 0057c937
    PUSH ESI                            ; 0057c93a
    MOV ESI,EAX                         ; 0057c93b
    MOV EAX,[0x00679394]                ; 0057c93d | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c942
    SAR EDX,0x1f                        ; 0057c944
    SHL EDX,0x2                         ; 0057c947
    SBB EAX,EDX                         ; 0057c94a
    SAR EAX,0x2                         ; 0057c94c
    ADD EAX,ESI                         ; 0057c94f
    PUSH EAX                            ; 0057c951
    PUSH 0x647be0                       ; 0057c952 | = "7.  Clone a light" | s_s_7_Clone_a_light_00647be0 = 7.  Clone a light
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c957 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 0057c95c | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c961
    SAR EDX,0x1f                        ; 0057c963
    SUB EAX,EDX                         ; 0057c966
    SAR EAX,0x1                         ; 0057c968
    ADD ESP,0xc                         ; 0057c96a
    PUSH EBX                            ; 0057c96d
    MOV EBX,EAX                         ; 0057c96e
    MOV EAX,[0x00679394]                ; 0057c970 | int g_WindowWidth
    MOV EDX,EAX                         ; 0057c975
    SAR EDX,0x1f                        ; 0057c977
    SHL EDX,0x2                         ; 0057c97a
    SBB EAX,EDX                         ; 0057c97d
    SAR EAX,0x2                         ; 0057c97f
    ADD EAX,EBX                         ; 0057c982
    PUSH EAX                            ; 0057c984
    PUSH 0x647bf2                       ; 0057c985 | = "S.  Save set" | s_S_Save_set_00647bf2 = S.  Save set
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057c98a | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057c98f
    CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 ; 0057c992 | void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0()
        ;   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057c997 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0057c99c | bool wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 0057c9a1
    JZ 0x0057ca4e                       ; 0057c9a3 | LAB_0057ca4e
        ;   XREF to: 0057ca4e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067cf44]      ; 0057c9a9 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EDX                            ; 0057c9af | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0057c9b0 | int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057c9b5
    MOV dword ptr [ESP + 0xfb0],EAX     ; 0057c9b8
    CMP EAX,0x34                        ; 0057c9bf
    JNC 0x0057cd85                      ; 0057c9c2 | LAB_0057cd85
        ;   XREF to: 0057cd85 (CONDITIONAL_JUMP)
    CMP EAX,0x32                        ; 0057c9c8
    JNC 0x0057cdb1                      ; 0057c9cb | LAB_0057cdb1
        ;   XREF to: 0057cdb1 (CONDITIONAL_JUMP)
    CMP EAX,0x31                        ; 0057c9d1
    JNZ 0x0057c9e2                      ; 0057c9d4 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057c9d6
    PUSH EBX                            ; 0057c9d9
    CALL core_setedit.cpp_FUN_0057b410  ; 0057c9da | undefined core_setedit.cpp_FUN_0057b410()
        ;   XREF to: 0057b410 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057c9df
        ;   Label: LAB_0057c9df
    TEST byte ptr [0x02cf6a94],0x1      ; 0057c9e2 | int g_MouseButtonFlags
        ;   Label: LAB_0057c9e2
    JZ 0x0057ca11                       ; 0057c9e9 | LAB_0057ca11
        ;   XREF to: 0057ca11 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0xfb4]     ; 0057c9eb
    CMP ESI,-0x1                        ; 0057c9f2
    JZ 0x0057ca11                       ; 0057c9f5 | LAB_0057ca11
        ;   XREF to: 0057ca11 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0057c9f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c9f8
    PUSH EAX                            ; 0057c9fb
    CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550 ; 0057c9fc | undefined core_setedit.cpp_ResolveMasterLights_FUN_0057c550()
        ;   XREF to: 0057c550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057ca01
    PUSH EAX                            ; 0057ca04
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057ca05
    PUSH EDX                            ; 0057ca08
    CALL core_setedit.cpp_FUN_0057b500  ; 0057ca09 | undefined core_setedit.cpp_FUN_0057b500()
        ;   XREF to: 0057b500 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057ca0e
    CMP dword ptr [ESP + 0xfb0],0x1b    ; 0057ca11
        ;   Label: LAB_0057ca11
    JNZ 0x0057c615                      ; 0057ca19 | LAB_0057c615
        ;   XREF to: 0057c615 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057ca1f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057ca22 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0057ca27
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0057ca28 | void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057ca2d
    MOV ESI,dword ptr [0x0067b654]      ; 0057ca30 | CGame * g_CGamePtr
    PUSH ESI                            ; 0057ca36 | CGame g_CGameInstance
    XOR EDI,EDI                         ; 0057ca37
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 0057ca39 | void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057ca3e
    MOV dword ptr [0x02d807a4],EDI      ; 0057ca41 | g_CDemonLightInstance.light_enabled_flag
    MOV ESP,EBP                         ; 0057ca47
    POP EBP                             ; 0057ca49
    POP EDI                             ; 0057ca4a
    POP ESI                             ; 0057ca4b
    POP EBX                             ; 0057ca4c
    RET                                 ; 0057ca4d
    MOV dword ptr [ESP + 0xfb0],EAX     ; 0057ca4e
        ;   Label: LAB_0057ca4e
    JMP 0x0057c9e2                      ; 0057ca55 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xafc]               ; 0057ca57
        ;   Label: LAB_0057ca57
    PUSH EAX                            ; 0057ca5e
    XOR EBX,EBX                         ; 0057ca5f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057ca61 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x03276dac]      ; 0057ca66 | int g_MasterLightCount
    ADD ESP,0x4                         ; 0057ca6c
    TEST ECX,ECX                        ; 0057ca6f
    JLE 0x0057ca9d                      ; 0057ca71 | LAB_0057ca9d
        ;   XREF to: 0057ca9d (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0057ca73
    MOV EAX,dword ptr [ESI + 0x3276db0] ; 0057ca75 | CDemonLight *[96] g_MasterLightList
        ;   Label: LAB_0057ca75
    ADD EAX,0x40                        ; 0057ca7b
    PUSH EAX                            ; 0057ca7e
    LEA EAX,[ESP + 0xb00]               ; 0057ca7f
    PUSH EAX                            ; 0057ca86
    ADD ESI,0x4                         ; 0057ca87
    INC EBX                             ; 0057ca8a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057ca8b | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x03276dac]      ; 0057ca90 | int g_MasterLightCount
    ADD ESP,0x8                         ; 0057ca96
    CMP EBX,EDX                         ; 0057ca99
    JL 0x0057ca75                       ; 0057ca9b | LAB_0057ca75
        ;   XREF to: 0057ca75 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057ca9d
        ;   Label: LAB_0057ca9d
    PUSH -0x1                           ; 0057ca9f
    PUSH 0x647bff                       ; 0057caa1 | = "Position spot light" | s_Position_spot_light_00647bff = Position spot light
    LEA EAX,[ESP + 0xb08]               ; 0057caa6
    PUSH EAX                            ; 0057caad
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057caae | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057cab3
    TEST EAX,EAX                        ; 0057cab6
    JL 0x0057cad4                       ; 0057cab8 | LAB_0057cad4
        ;   XREF to: 0057cad4 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0057caba
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057cabb
    PUSH ECX                            ; 0057cabe
    CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550 ; 0057cabf | undefined core_setedit.cpp_ResolveMasterLights_FUN_0057c550()
        ;   XREF to: 0057c550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cac4
    PUSH EAX                            ; 0057cac7
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057cac8
    PUSH EBX                            ; 0057cacb
    CALL core_setedit.cpp_FUN_0057b500  ; 0057cacc | undefined core_setedit.cpp_FUN_0057b500()
        ;   XREF to: 0057b500 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cad1
    PUSH 0x0                            ; 0057cad4
        ;   Label: LAB_0057cad4
    LEA EAX,[ESP + 0xb00]               ; 0057cad6
    PUSH EAX                            ; 0057cadd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057cade | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cae3
    JMP 0x0057c9e2                      ; 0057cae6 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057caeb
        ;   Label: LAB_0057caeb
    PUSH EBX                            ; 0057caee
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0057caef | void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057caf4
    PUSH 0x647c25                       ; 0057caf7 | = "Precompute light visibility?" | s_Precompute_light_visibil_00647c25 = Precompute light visibility?
    MOV ESI,dword ptr [0x00678a60]      ; 0057cafc | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 0057cb02 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0057cb03 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cb08
    TEST EAX,EAX                        ; 0057cb0b
    JZ 0x0057cb1a                       ; 0057cb0d | LAB_0057cb1a
        ;   XREF to: 0057cb1a (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 0057cb0f
    PUSH EBX                            ; 0057cb11
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 0057cb12 | void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr)
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cb17
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057cb1a
        ;   Label: LAB_0057cb1a
    PUSH EAX                            ; 0057cb1d
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057cb1e | void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
    JMP 0x0057c9df                      ; 0057cb23 | LAB_0057c9df
        ;   XREF to: 0057c9df (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 0057cb28
        ;   Label: LAB_0057cb28
    PUSH 0x42c80000                     ; 0057cb2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057cb2f
    PUSH 0x0                            ; 0057cb32
    PUSH 0x1                            ; 0057cb34
    FLD float ptr [EAX + 0x14d150]      ; 0057cb36
    LEA EAX,[ESP + 0x10]                ; 0057cb3c
    PUSH EAX                            ; 0057cb40
    MOV EDX,dword ptr [0x00678a60]      ; 0057cb41 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH 0x647c42                       ; 0057cb47 | = "Set ambient level (0..100)" | s_Set_ambient_level_0_100_00647c42 = Set ambient level (0..100)
    FMUL float ptr [0x00647ca5]         ; 0057cb4c | float FLOAT_00647ca5
    PUSH EDX                            ; 0057cb52 | CEditorTools g_CEditorToolsPtr
    FSTP float ptr [ESP + 0x1c]         ; 0057cb53
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057cb57 | int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 0057cb5c
    TEST EAX,EAX                        ; 0057cb5f
    JZ 0x0057c9e2                       ; 0057cb61 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 0057cb67
    FMUL double ptr [0x00647cad]        ; 0057cb6a | double DOUBLE_00647cad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057cb70
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057cb73
    FSTP float ptr [EAX + 0x14d150]     ; 0057cb76
    MOV ECX,dword ptr [EDX]             ; 0057cb7c
    XOR EAX,EAX                         ; 0057cb7e
    TEST ECX,ECX                        ; 0057cb80
    JLE 0x0057c9e2                      ; 0057cb82 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
    MOV EBX,EDX                         ; 0057cb88
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057cb8a
    FLD float ptr [EDX + 0x14d150]      ; 0057cb8d
        ;   Label: LAB_0057cb8d
    INC EAX                             ; 0057cb93
    FSTP float ptr [EBX + 0x14c]        ; 0057cb94
    MOV ECX,dword ptr [EDX]             ; 0057cb9a
    ADD EBX,0x1a4                       ; 0057cb9c
    CMP EAX,ECX                         ; 0057cba2
    JL 0x0057cb8d                       ; 0057cba4 | LAB_0057cb8d
        ;   XREF to: 0057cb8d (CONDITIONAL_JUMP)
    JMP 0x0057c9e2                      ; 0057cba6 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x3ac]               ; 0057cbab
        ;   Label: LAB_0057cbab
    PUSH EAX                            ; 0057cbb2
    XOR ESI,ESI                         ; 0057cbb3
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057cbb5 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03276dac]                ; 0057cbba | int g_MasterLightCount
    ADD ESP,0x4                         ; 0057cbbf
    TEST EAX,EAX                        ; 0057cbc2
    JLE 0x0057cbf0                      ; 0057cbc4 | LAB_0057cbf0
        ;   XREF to: 0057cbf0 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0057cbc6
    MOV EAX,dword ptr [EBX + 0x3276db0] ; 0057cbc8 | CDemonLight *[96] g_MasterLightList
        ;   Label: LAB_0057cbc8
    ADD EAX,0x40                        ; 0057cbce
    PUSH EAX                            ; 0057cbd1
    LEA EAX,[ESP + 0x3b0]               ; 0057cbd2
    PUSH EAX                            ; 0057cbd9
    ADD EBX,0x4                         ; 0057cbda
    INC ESI                             ; 0057cbdd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057cbde | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x03276dac]      ; 0057cbe3 | int g_MasterLightCount
    ADD ESP,0x8                         ; 0057cbe9
    CMP ESI,EDI                         ; 0057cbec
    JL 0x0057cbc8                       ; 0057cbee | LAB_0057cbc8
        ;   XREF to: 0057cbc8 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057cbf0
        ;   Label: LAB_0057cbf0
    PUSH -0x1                           ; 0057cbf2
    PUSH 0x647c5d                       ; 0057cbf4 | = "Edit spot light properties" | s_Edit_spot_light_properti_00647c5d = Edit spot light properties
    LEA EAX,[ESP + 0x3b8]               ; 0057cbf9
    PUSH EAX                            ; 0057cc00
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057cc01 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057cc06
    TEST EAX,EAX                        ; 0057cc09
    JL 0x0057cc27                       ; 0057cc0b | LAB_0057cc27
        ;   XREF to: 0057cc27 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0057cc0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057cc0e
    PUSH EAX                            ; 0057cc11
    CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550 ; 0057cc12 | undefined core_setedit.cpp_ResolveMasterLights_FUN_0057c550()
        ;   XREF to: 0057c550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cc17
    PUSH EAX                            ; 0057cc1a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057cc1b
    PUSH EDX                            ; 0057cc1e
    CALL core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 ; 0057cc1f | undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()
        ;   XREF to: 0057bbe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cc24
    PUSH 0x0                            ; 0057cc27
        ;   Label: LAB_0057cc27
    LEA EAX,[ESP + 0x3b0]               ; 0057cc29
    PUSH EAX                            ; 0057cc30
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057cc31 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cc36
    JMP 0x0057c9e2                      ; 0057cc39 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4]                 ; 0057cc3e
        ;   Label: LAB_0057cc3e
    PUSH EAX                            ; 0057cc42
    XOR ESI,ESI                         ; 0057cc43
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057cc45 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x03276dac]      ; 0057cc4a | int g_MasterLightCount
    ADD ESP,0x4                         ; 0057cc50
    TEST EDI,EDI                        ; 0057cc53
    JLE 0x0057cc7e                      ; 0057cc55 | LAB_0057cc7e
        ;   XREF to: 0057cc7e (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0057cc57
    MOV EAX,dword ptr [EBX + 0x3276db0] ; 0057cc59 | CDemonLight *[96] g_MasterLightList
        ;   Label: LAB_0057cc59
    ADD EAX,0x40                        ; 0057cc5f
    PUSH EAX                            ; 0057cc62
    LEA EAX,[ESP + 0x8]                 ; 0057cc63
    PUSH EAX                            ; 0057cc67
    ADD EBX,0x4                         ; 0057cc68
    INC ESI                             ; 0057cc6b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057cc6c | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x03276dac]      ; 0057cc71 | int g_MasterLightCount
    ADD ESP,0x8                         ; 0057cc77
    CMP ESI,EDX                         ; 0057cc7a
    JL 0x0057cc59                       ; 0057cc7c | LAB_0057cc59
        ;   XREF to: 0057cc59 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057cc7e
        ;   Label: LAB_0057cc7e
    PUSH -0x1                           ; 0057cc80
    PUSH 0x647c78                       ; 0057cc82 | = "Clone which light" | s_Clone_which_light_00647c78 = Clone which light
    LEA EAX,[ESP + 0x10]                ; 0057cc87
    PUSH EAX                            ; 0057cc8b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057cc8c | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057cc91
    TEST EAX,EAX                        ; 0057cc94
    JL 0x0057ccb2                       ; 0057cc96 | LAB_0057ccb2
        ;   XREF to: 0057ccb2 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0057cc98
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057cc99
    PUSH ECX                            ; 0057cc9c
    CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550 ; 0057cc9d | undefined core_setedit.cpp_ResolveMasterLights_FUN_0057c550()
        ;   XREF to: 0057c550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cca2
    PUSH EAX                            ; 0057cca5
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057cca6
    PUSH EBX                            ; 0057cca9
    CALL core_setedit.cpp_FUN_0057b600  ; 0057ccaa | undefined core_setedit.cpp_FUN_0057b600()
        ;   XREF to: 0057b600 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057ccaf
    PUSH 0x0                            ; 0057ccb2
        ;   Label: LAB_0057ccb2
    LEA EAX,[ESP + 0x8]                 ; 0057ccb4
    PUSH EAX                            ; 0057ccb8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057ccb9 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057ccbe
    JMP 0x0057c9e2                      ; 0057ccc1 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ccc6
        ;   Label: LAB_0057ccc6
    MOV DL,byte ptr [EAX + 0x14d0f0]    ; 0057ccc9
    TEST DL,DL                          ; 0057cccf
    JZ 0x0057cd7c                       ; 0057ccd1 | LAB_0057cd7c
        ;   XREF to: 0057cd7c (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057ccd7
    LEA EAX,[ESP + 0xea8]               ; 0057ccd9
    PUSH EAX                            ; 0057cce0
    PUSH 0x0                            ; 0057cce1
    PUSH 0x0                            ; 0057cce3
    MOV ECX,dword ptr [ESP + 0xfbc]     ; 0057cce5
    PUSH ECX                            ; 0057ccec
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0057cced | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0057ccf2
    MOV ESI,0x647c8a                    ; 0057ccf5 | = ".set" | s_set_00647c8a = .set
    LEA EDI,[ESP + 0xea4]               ; 0057ccfa
    PUSH EDI                            ; 0057cd01
    SUB ECX,ECX                         ; 0057cd02
    DEC ECX                             ; 0057cd04
    MOV AL,0x0                          ; 0057cd05
    SCASB.REPNE ES:EDI                  ; 0057cd07
    DEC EDI                             ; 0057cd09
    MOV AL,byte ptr [ESI]               ; 0057cd0a | = ".set" | s_set_00647c8a = .set
        ;   Label: LAB_0057cd0a
    MOV byte ptr [EDI],AL               ; 0057cd0c
    CMP AL,0x0                          ; 0057cd0e
    JZ 0x0057cd22                       ; 0057cd10 | LAB_0057cd22
        ;   XREF to: 0057cd22 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0057cd12 | DAT_00647c8b
    ADD ESI,0x2                         ; 0057cd15
    MOV byte ptr [EDI + 0x1],AL         ; 0057cd18
    ADD EDI,0x2                         ; 0057cd1b
    CMP AL,0x0                          ; 0057cd1e
    JNZ 0x0057cd0a                      ; 0057cd20 | LAB_0057cd0a
        ;   XREF to: 0057cd0a (CONDITIONAL_JUMP)
    POP EDI                             ; 0057cd22
        ;   Label: LAB_0057cd22
    LEA EAX,[ESP + 0xea4]               ; 0057cd23
    PUSH EAX                            ; 0057cd2a
    CALL crt_string.c_strupr_FUN_00600770 ; 0057cd2b | char * crt_string.c_strupr_FUN_00600770(char * string)
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057cd30
    PUSH 0x1                            ; 0057cd33
        ;   Label: LAB_0057cd33
    LEA EAX,[ESP + 0xea8]               ; 0057cd35
    PUSH EAX                            ; 0057cd3c
    PUSH 0x647c8f                       ; 0057cd3d | = "set" | s_set_00647c8f = set
    PUSH 0x647c93                       ; 0057cd42 | = "models" | s_models_00647c93 = models
    PUSH 0x647c9a                       ; 0057cd47 | = "Save set" | s_Save_set_00647c9a = Save set
    MOV EBX,dword ptr [0x00678a60]      ; 0057cd4c | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 0057cd52 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 0057cd53 | bool shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, ...)
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0057cd58
    TEST EAX,EAX                        ; 0057cd5b
    JZ 0x0057c9e2                       ; 0057cd5d | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xea4]               ; 0057cd63
    PUSH EAX                            ; 0057cd6a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057cd6b
    PUSH ESI                            ; 0057cd6e
    CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 ; 0057cd6f | void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)
        ;   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057cd74
    JMP 0x0057c9e2                      ; 0057cd77 | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    MOV byte ptr [ESP + 0xea4],DL       ; 0057cd7c
        ;   Label: LAB_0057cd7c
    JMP 0x0057cd33                      ; 0057cd83 | LAB_0057cd33
        ;   XREF to: 0057cd33 (UNCONDITIONAL_JUMP)
    JBE 0x0057caeb                      ; 0057cd85 | LAB_0057caeb
        ;   Label: LAB_0057cd85
        ;   XREF to: 0057caeb (CONDITIONAL_JUMP)
    CMP EAX,0x36                        ; 0057cd8b
    JC 0x0057cb28                       ; 0057cd8e | LAB_0057cb28
        ;   XREF to: 0057cb28 (CONDITIONAL_JUMP)
    JBE 0x0057cbab                      ; 0057cd94 | LAB_0057cbab
        ;   XREF to: 0057cbab (CONDITIONAL_JUMP)
    CMP EAX,0x37                        ; 0057cd9a
    JBE 0x0057cc3e                      ; 0057cd9d | LAB_0057cc3e
        ;   XREF to: 0057cc3e (CONDITIONAL_JUMP)
    CMP EAX,0x53                        ; 0057cda3
    JZ 0x0057ccc6                       ; 0057cda6 | LAB_0057ccc6
        ;   XREF to: 0057ccc6 (CONDITIONAL_JUMP)
    JMP 0x0057c9e2                      ; 0057cdac | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
    JBE 0x0057ca57                      ; 0057cdb1 | LAB_0057ca57
        ;   Label: LAB_0057cdb1
        ;   XREF to: 0057ca57 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x754]               ; 0057cdb7
    PUSH EAX                            ; 0057cdbe
    XOR ESI,ESI                         ; 0057cdbf
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057cdc1 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x03276dac]      ; 0057cdc6 | int g_MasterLightCount
    ADD ESP,0x4                         ; 0057cdcc
    TEST EDX,EDX                        ; 0057cdcf
    JLE 0x0057cdfd                      ; 0057cdd1 | LAB_0057cdfd
        ;   XREF to: 0057cdfd (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0057cdd3
    MOV EAX,dword ptr [EBX + 0x3276db0] ; 0057cdd5 | CDemonLight *[96] g_MasterLightList
        ;   Label: LAB_0057cdd5
    ADD EAX,0x40                        ; 0057cddb
    PUSH EAX                            ; 0057cdde
    LEA EAX,[ESP + 0x758]               ; 0057cddf
    PUSH EAX                            ; 0057cde6
    ADD EBX,0x4                         ; 0057cde7
    INC ESI                             ; 0057cdea
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057cdeb | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x03276dac]      ; 0057cdf0 | int g_MasterLightCount
    ADD ESP,0x8                         ; 0057cdf6
    CMP ESI,EDI                         ; 0057cdf9
    JL 0x0057cdd5                       ; 0057cdfb | LAB_0057cdd5
        ;   XREF to: 0057cdd5 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057cdfd
        ;   Label: LAB_0057cdfd
    PUSH -0x1                           ; 0057cdff
    PUSH 0x647c13                       ; 0057ce01 | = "Delete spot light" | s_Delete_spot_light_00647c13 = Delete spot light
    LEA EAX,[ESP + 0x760]               ; 0057ce06
    PUSH EAX                            ; 0057ce0d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057ce0e | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0057ce13
    TEST EAX,EAX                        ; 0057ce16
    JL 0x0057ce5b                       ; 0057ce18 | LAB_0057ce5b
        ;   XREF to: 0057ce5b (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0057ce1a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ce1b
    PUSH EAX                            ; 0057ce1e
    CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550 ; 0057ce1f | undefined core_setedit.cpp_ResolveMasterLights_FUN_0057c550()
        ;   XREF to: 0057c550 (UNCONDITIONAL_CALL)
    IMUL EDX,EAX,0x1898                 ; 0057ce24
    ADD ESP,0x8                         ; 0057ce2a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057ce2d
    PUSH EAX                            ; 0057ce30
    ADD EDX,ECX                         ; 0057ce31
    PUSH ECX                            ; 0057ce33
    MOV EBX,dword ptr [EDX + 0x19a30]   ; 0057ce34
    CALL core_setedit.cpp_FUN_0057b910  ; 0057ce3a | undefined core_setedit.cpp_FUN_0057b910()
        ;   XREF to: 0057b910 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057ce3f
    TEST EBX,EBX                        ; 0057ce42
    JNZ 0x0057ce5b                      ; 0057ce44 | LAB_0057ce5b
        ;   XREF to: 0057ce5b (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057ce46
    PUSH EDI                            ; 0057ce49
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0057ce4a | void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057ce4f
    PUSH EDI                            ; 0057ce52
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057ce53 | void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057ce58
    PUSH 0x0                            ; 0057ce5b
        ;   Label: LAB_0057ce5b
    LEA EAX,[ESP + 0x758]               ; 0057ce5d
    PUSH EAX                            ; 0057ce64
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057ce65 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057ce6a
    JMP 0x0057c9e2                      ; 0057ce6d | LAB_0057c9e2
        ;   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)

