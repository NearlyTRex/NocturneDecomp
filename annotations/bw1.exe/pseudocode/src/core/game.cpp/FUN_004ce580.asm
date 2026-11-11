; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004ce580(CGame *param_1)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfb60
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_005e1330
;   TerminatedCString s_Movie_recording_active_m_005e133c
;   undefined4 DAT_005e135d
;   TerminatedCString s_movie_005e1360
;   TerminatedCString s_screen_paint_3_2f_ms_005e15a7
;   TerminatedCString s_SPOOKHOUSE_005e15c0
;   TerminatedCString s_demon_d_pcx_005e15cb
;   TerminatedCString s_Set_s_Camera_s_group_d_005e15d7
;   TerminatedCString s_FR_f_AVG_f_PC_d_005e15f5
;   TerminatedCString s_Hero_4_2f_4_2f_4_2f_xyz_005e160d
;   TerminatedCString s_Slew_s_Virtual_Director_005e1644
;   TerminatedCString s_Fudge_g_g_g_005e1665
;   TerminatedCString s_SFX_d_Samples_Active_d_1_005e1675
;   TerminatedCString s_s_32_d_64_d_128_d_256_d_005e16c6
;   TerminatedCString s_You_re_dead_Game_over_005e16ef
;   ... and 58 more
;
; Called Functions:
;   core_dcamera.cpp_FUN_0044dd70
;   core_dcamera.cpp_FUN_0044de40
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_event.cpp_CEventList_render_FUN_004a6d80
;   core_fldnotes.cpp_FUN_004be0f0
;   core_game.cpp_CGame_drawScreenBorder_FUN_004cc0c0
;   core_game.cpp_CGame_process_FUN_004d8060
;   core_game.cpp_CGame_renderIrisFade_FUN_004d61e0
;   core_game.cpp_CGame_renderOverlay_FUN_004cc2b0
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40
;   core_game.cpp_CGame_slamDT_FUN_004d7f50
;   core_game.cpp_FUN_004cbf20
;   core_game.cpp_FUN_004dc1a0
;   core_inv.cpp_FUN_004fae10
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340
;   ... and 42 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce580
        ;   Label: core_game.cpp_FUN_004ce580
    PUSH ESI                            ; 004ce581
    PUSH EDI                            ; 004ce582
    PUSH EBP                            ; 004ce583
    MOV EBP,ESP                         ; 004ce584
    SUB ESP,0x71c                       ; 004ce586
    AND ESP,0xfffffff8                  ; 004ce58c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce58f
    XOR EDX,EDX                         ; 004ce592
    MOV ECX,dword ptr [EAX + 0x228]     ; 004ce594
    MOV dword ptr [ESP + 0x6ec],EDX     ; 004ce59a
    TEST ECX,ECX                        ; 004ce5a1
    JNZ 0x004ce624                      ; 004ce5a3
        ;   XREF to: 004ce624 (CONDITIONAL_JUMP)  ; LAB_004ce624
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce5a9
        ;   Label: LAB_004ce5a9
    XOR EBX,EBX                         ; 004ce5ac
    MOV ESI,dword ptr [EAX + 0xe0]      ; 004ce5ae
    MOV dword ptr [0x01e7dac8],EBX      ; 004ce5b4 | DAT_01e7dac8
    TEST ESI,ESI                        ; 004ce5ba
    JNZ 0x004ce5cc                      ; 004ce5bc
        ;   XREF to: 004ce5cc (CONDITIONAL_JUMP)  ; LAB_004ce5cc
    MOV EAX,[0x00622580]                ; 004ce5be | g_CNetGamePtr
    CMP dword ptr [EAX + 0x170],0x0     ; 004ce5c3 | g_CNetGameInstance.has_pending_sim_frame
    JZ 0x004ce640                       ; 004ce5ca
        ;   XREF to: 004ce640 (CONDITIONAL_JUMP)  ; LAB_004ce640
    MOV EDI,dword ptr [0x00622580]      ; 004ce5cc | g_CNetGamePtr
        ;   Label: LAB_004ce5cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce5d2
    PUSH EDI                            ; 004ce5d5 | g_CNetGameInstance
    MOV dword ptr [EAX + 0x218],0x0     ; 004ce5d6
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340 ; 004ce5e0
        ;   XREF to: 00530340 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ce5e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce5e8
    PUSH EAX                            ; 004ce5eb
    CALL core_game.cpp_CGame_process_FUN_004d8060 ; 004ce5ec
        ;   XREF to: 004d8060 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004d8060(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ce5f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce5f4
    CMP dword ptr [EAX + 0xe0],0x0      ; 004ce5f7
    JZ 0x004ce635                       ; 004ce5fe
        ;   XREF to: 004ce635 (CONDITIONAL_JUMP)  ; LAB_004ce635
    PUSH 0x3e800000                     ; 004ce600
    PUSH EAX                            ; 004ce605
    CALL core_game.cpp_CGame_slamDT_FUN_004d7f50 ; 004ce606
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004d7f50(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ce60b
    MOV ESI,dword ptr [0x00622580]      ; 004ce60e | g_CNetGamePtr
        ;   Label: LAB_004ce60e
    PUSH ESI                            ; 004ce614 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0 ; 004ce615
        ;   XREF to: 0052fee0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ce61a
    MOV ESP,EBP                         ; 004ce61d
        ;   Label: LAB_004ce61d
    POP EBP                             ; 004ce61f
    POP EDI                             ; 004ce620
    POP ESI                             ; 004ce621
    POP EBX                             ; 004ce622
    RET                                 ; 004ce623
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004ce624
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_004ce624
    MOV dword ptr [ESP + 0x6e8],EAX     ; 004ce629
    JMP 0x004ce5a9                      ; 004ce630
        ;   XREF to: 004ce5a9 (UNCONDITIONAL_JUMP)  ; LAB_004ce5a9
    PUSH EAX                            ; 004ce635
        ;   Label: LAB_004ce635
    CALL core_game.cpp_FUN_004cbf20     ; 004ce636
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004cbf20()
    ADD ESP,0x4                         ; 004ce63b
    JMP 0x004ce60e                      ; 004ce63e
        ;   XREF to: 004ce60e (UNCONDITIONAL_JUMP)  ; LAB_004ce60e
    CMP dword ptr [0x01c50948],0x0      ; 004ce640 | DAT_01c50948
        ;   Label: LAB_004ce640
    JZ 0x004ce659                       ; 004ce647
        ;   XREF to: 004ce659 (CONDITIONAL_JUMP)  ; LAB_004ce659
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10 ; 004ce649
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10()
    MOV dword ptr [ESP + 0x6ec],0x1     ; 004ce64e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce659
        ;   Label: LAB_004ce659
    CMP dword ptr [EAX + 0x2a8],0x0     ; 004ce65c
    JZ 0x004cf048                       ; 004ce663
        ;   XREF to: 004cf048 (CONDITIONAL_JUMP)  ; LAB_004cf048
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004ce669
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_004ce669
    MOV EAX,[0x0061d418]                ; 004ce66e | g_CFieldNotesPtr
        ;   Label: LAB_004ce66e
    CMP dword ptr [EAX + 0x40],0x0      ; 004ce673 | g_CFieldNotesInstance.is_displayed
    JZ 0x004cf05a                       ; 004ce677
        ;   XREF to: 004cf05a (CONDITIONAL_JUMP)  ; LAB_004cf05a
    MOV ECX,dword ptr [0x007c3978]      ; 004ce67d | DAT_007c3978
        ;   Label: LAB_004ce67d
    TEST ECX,ECX                        ; 004ce683
    JZ 0x004ce690                       ; 004ce685
        ;   XREF to: 004ce690 (CONDITIONAL_JUMP)  ; LAB_004ce690
    PUSH ECX                            ; 004ce687
    MOV EDX,dword ptr [ECX]             ; 004ce688
    CALL dword ptr [EDX + 0x1c]         ; 004ce68a
    ADD ESP,0x4                         ; 004ce68d
    MOV EBX,dword ptr [0x00622580]      ; 004ce690 | g_CNetGamePtr
        ;   Label: LAB_004ce690
    PUSH EBX                            ; 004ce696 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340 ; 004ce697
        ;   XREF to: 00530340 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ce69c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce69f
    CMP dword ptr [EAX + 0x218],0x0     ; 004ce6a2
    JZ 0x004cf08d                       ; 004ce6a9
        ;   XREF to: 004cf08d (CONDITIONAL_JUMP)  ; LAB_004cf08d
    LEA EAX,[ESP + 0x688]               ; 004ce6af
    PUSH EAX                            ; 004ce6b6
    CALL core_slew.cpp_FUN_0056ba00     ; 004ce6b7
        ;   XREF to: 0056ba00 (UNCONDITIONAL_CALL)  ; undefined core_slew.cpp_FUN_0056ba00()
    MOV EAX,[0x01d06ab4]                ; 004ce6bc | DAT_01d06ab4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ce6c1
    LEA EAX,[ESP + 0x68c]               ; 004ce6c8
    ADD EDX,0x20                        ; 004ce6cf
    ADD ESP,0x4                         ; 004ce6d2
    CMP EAX,EDX                         ; 004ce6d5
    JZ 0x004ce6f6                       ; 004ce6d7
        ;   XREF to: 004ce6f6 (CONDITIONAL_JUMP)  ; LAB_004ce6f6
    MOV EAX,dword ptr [EDX]             ; 004ce6d9
    MOV dword ptr [ESP + 0x688],EAX     ; 004ce6db
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ce6e2
    MOV dword ptr [ESP + 0x68c],EAX     ; 004ce6e5
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ce6ec
    MOV dword ptr [ESP + 0x690],EAX     ; 004ce6ef
    MOV EAX,[0x01d06ab4]                ; 004ce6f6 | DAT_01d06ab4
        ;   Label: LAB_004ce6f6
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ce6fb
    LEA EAX,[ESP + 0x694]               ; 004ce702
    ADD EDX,0x30                        ; 004ce709
    CMP EAX,EDX                         ; 004ce70c
    JZ 0x004ce72d                       ; 004ce70e
        ;   XREF to: 004ce72d (CONDITIONAL_JUMP)  ; LAB_004ce72d
    MOV EAX,dword ptr [EDX]             ; 004ce710
    MOV dword ptr [ESP + 0x694],EAX     ; 004ce712
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ce719
    MOV dword ptr [ESP + 0x698],EAX     ; 004ce71c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ce723
    MOV dword ptr [ESP + 0x69c],EAX     ; 004ce726
    LEA EAX,[ESP + 0x688]               ; 004ce72d
        ;   Label: LAB_004ce72d
    PUSH EAX                            ; 004ce734
    CALL core_slew.cpp_FUN_0056ba50     ; 004ce735
        ;   XREF to: 0056ba50 (UNCONDITIONAL_CALL)  ; undefined core_slew.cpp_FUN_0056ba50()
    ADD ESP,0x4                         ; 004ce73a
    LEA EDX,[ESP + 0x694]               ; 004ce73d
    MOV EAX,[0x01d06ab4]                ; 004ce744 | DAT_01d06ab4
    PUSH EDX                            ; 004ce749
    LEA EDX,[ESP + 0x68c]               ; 004ce74a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ce751
    PUSH EDX                            ; 004ce758
    MOV ECX,dword ptr [EAX + 0x154]     ; 004ce759
    PUSH EAX                            ; 004ce75f
    CALL dword ptr [ECX + 0x68]         ; 004ce760
    MOV AH,byte ptr [0x01c43544]        ; 004ce763 | DAT_01c43544
    ADD ESP,0xc                         ; 004ce769
    TEST AH,0x1                         ; 004ce76c
    JZ 0x004ce839                       ; 004ce76f
        ;   XREF to: 004ce839 (CONDITIONAL_JUMP)  ; LAB_004ce839
    MOV EDX,dword ptr [0x01c43540]      ; 004ce775 | DAT_01c43540
    PUSH EDX                            ; 004ce77b
    MOV ECX,dword ptr [0x01c4353c]      ; 004ce77c | DAT_01c4353c
    PUSH ECX                            ; 004ce782
    PUSH 0x1fe37ec                      ; 004ce783
    LEA ESI,[ESP + 0x6d4]               ; 004ce788
    LEA EDI,[ESP + 0x6b0]               ; 004ce78f
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004ce796
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x6d4]               ; 004ce79b
    ADD ESP,0xc                         ; 004ce7a2
    LEA EAX,[ESP + 0x6a4]               ; 004ce7a5
    LEA EBX,[ESP + 0x6bc]               ; 004ce7ac
    PUSH EAX                            ; 004ce7b3
    MOVSD ES:EDI,ESI                    ; 004ce7b4
    MOVSD ES:EDI,ESI                    ; 004ce7b5
    MOVSD ES:EDI,ESI                    ; 004ce7b6
    PUSH 0x1fe37ec                      ; 004ce7b7
    LEA ESI,[ESP + 0x6b8]               ; 004ce7bc
    LEA EDI,[ESP + 0x6ac]               ; 004ce7c3
    CALL core_dcamera.cpp_FUN_0044de40  ; 004ce7ca
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044de40()
    LEA ESI,[ESP + 0x6b8]               ; 004ce7cf
    ADD ESP,0x8                         ; 004ce7d6
    LEA EAX,[ESP + 0x6a4]               ; 004ce7d9
    MOVSD ES:EDI,ESI                    ; 004ce7e0
    MOVSD ES:EDI,ESI                    ; 004ce7e1
    MOVSD ES:EDI,ESI                    ; 004ce7e2
    FILD dword ptr [EAX]                ; 004ce7e3
    FMUL float ptr [0x00600f74]         ; 004ce7e5 | DAT_00600f74
    FSTP float ptr [EBX]                ; 004ce7eb
    FILD dword ptr [EAX + 0x4]          ; 004ce7ed
    FMUL float ptr [0x00600f74]         ; 004ce7f0 | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004ce7f6
    FILD dword ptr [EAX + 0x8]          ; 004ce7f9
    FMUL float ptr [0x00600f74]         ; 004ce7fc | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004ce802
    MOV EAX,[0x01d06ab4]                ; 004ce805 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ce80a
    LEA EDX,[EAX + 0x30]                ; 004ce811
    PUSH EDX                            ; 004ce814
    LEA EDX,[ESP + 0x6c0]               ; 004ce815
    PUSH EDX                            ; 004ce81c
    MOV ECX,dword ptr [EAX + 0x154]     ; 004ce81d
    PUSH EAX                            ; 004ce823
    CALL dword ptr [ECX + 0x68]         ; 004ce824
    MOV DL,byte ptr [0x01c43544]        ; 004ce827 | DAT_01c43544
    AND DL,0xfe                         ; 004ce82d
    ADD ESP,0xc                         ; 004ce830
    MOV byte ptr [0x01c43544],DL        ; 004ce833 | DAT_01c43544
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ce839
        ;   Label: LAB_004ce839
    PUSH EBX                            ; 004ce83c
    CALL core_game.cpp_FUN_004cbf20     ; 004ce83d
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004cbf20()
    ADD ESP,0x4                         ; 004ce842
    MOV ESI,dword ptr [0x00622580]      ; 004ce845 | g_CNetGamePtr
    PUSH ESI                            ; 004ce84b | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0 ; 004ce84c
        ;   XREF to: 0052fee0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame * this_ptr)
    MOV EAX,[0x0061d418]                ; 004ce851 | g_CFieldNotesPtr
    MOV EDI,dword ptr [EAX + 0x40]      ; 004ce856 | g_CFieldNotesInstance.is_displayed
    ADD ESP,0x4                         ; 004ce859
    TEST EDI,EDI                        ; 004ce85c
    JZ 0x004cf0a9                       ; 004ce85e
        ;   XREF to: 004cf0a9 (CONDITIONAL_JUMP)  ; LAB_004cf0a9
    PUSH 0xffff                         ; 004ce864
        ;   Label: LAB_004ce864
    MOV ESI,dword ptr [0x00612560]      ; 004ce869 | DAT_00612560
    PUSH ESI                            ; 004ce86f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004ce870
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ce875
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce878
    CMP dword ptr [EAX + 0x228],0x0     ; 004ce87b
    JZ 0x004ce8db                       ; 004ce882
        ;   XREF to: 004ce8db (CONDITIONAL_JUMP)  ; LAB_004ce8db
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004ce884
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDX,dword ptr [ESP + 0x6e8]     ; 004ce889
    SUB EAX,EDX                         ; 004ce890
    MOV dword ptr [ESP + 0x718],EAX     ; 004ce892
    FILD dword ptr [ESP + 0x718]        ; 004ce899
    FMUL double ptr [0x005e171c]        ; 004ce8a0 | DAT_005e171c
    MOV EAX,[0x0061d95c]                ; 004ce8a6 | g_CGamePtr
    FMUL double ptr [0x005e1724]        ; 004ce8ab | DAT_005e1724
    FLD float ptr [EAX + 0x294]         ; 004ce8b1 | g_CGameInstance.delta_time_float
    FXCH                                ; 004ce8b7
    FMUL double ptr [0x005e172c]        ; 004ce8b9 | DAT_005e172c
    FDIVRP                              ; 004ce8bf
    SUB ESP,0x8                         ; 004ce8c1
    FSTP double ptr [ESP]               ; 004ce8c4
    PUSH 0x5e15a7                       ; 004ce8c7 | = "screen paint : %3.2f ms\n"
    MOV ECX,dword ptr [0x00611100]      ; 004ce8cc | g_CConsolePtr
    PUSH ECX                            ; 004ce8d2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004ce8d3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 004ce8d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce8db
        ;   Label: LAB_004ce8db
    CMP dword ptr [EAX + 0x224],0x0     ; 004ce8de
    JNZ 0x004cf02e                      ; 004ce8e5
        ;   XREF to: 004cf02e (CONDITIONAL_JUMP)  ; LAB_004cf02e
    CALL engine_special.cpp_FUN_00581f50 ; 004ce8eb
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00581f50()
    MOV EAX,[0x0061d418]                ; 004ce8f0 | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004ce8f5 | g_CFieldNotesInstance.is_displayed
    JZ 0x004cf0d7                       ; 004ce8f9
        ;   XREF to: 004cf0d7 (CONDITIONAL_JUMP)  ; LAB_004cf0d7
    PUSH EAX                            ; 004ce8ff | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004be0f0 ; 004ce900
        ;   XREF to: 004be0f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004be0f0()
    ADD ESP,0x4                         ; 004ce905
        ;   Label: LAB_004ce905
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce908
        ;   Label: LAB_004ce908
    CMP dword ptr [EAX + 0x22c],0x0     ; 004ce90b
    JZ 0x004cf127                       ; 004ce912
        ;   XREF to: 004cf127 (CONDITIONAL_JUMP)  ; LAB_004cf127
    PUSH 0x3e                           ; 004ce918
        ;   Label: LAB_004ce918
    MOV EAX,[0x0061f2a4]                ; 004ce91a | DAT_0061f2a4
    PUSH EAX                            ; 004ce91f | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004ce920 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004ce922
    ADD ESP,0x8                         ; 004ce925
    TEST EAX,EAX                        ; 004ce928
    JZ 0x004ce957                       ; 004ce92a
        ;   XREF to: 004ce957 (CONDITIONAL_JUMP)  ; LAB_004ce957
    MOV EAX,[0x01ccfe94]                ; 004ce92c | DAT_01ccfe94
    INC EAX                             ; 004ce931
    PUSH EAX                            ; 004ce932
    PUSH 0x5e15cb                       ; 004ce933 | = "demon%d.pcx"
    PUSH 0x1ccfe98                      ; 004ce938
    MOV [0x01ccfe94],EAX                ; 004ce93d | DAT_01ccfe94
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ce942
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ce947
    PUSH 0x1ccfe98                      ; 004ce94a
    CALL engine_pcx.c_saveScreenshotGeneral_FUN_00535d80 ; 004ce94f
        ;   XREF to: 00535d80 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenshotGeneral_FUN_00535d80(char * filename)
    ADD ESP,0x4                         ; 004ce954
    MOV EAX,[0x01d06ab4]                ; 004ce957 | DAT_01d06ab4
        ;   Label: LAB_004ce957
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ce95c
    ADD EAX,0x1fae8                     ; 004ce963
    PUSH EAX                            ; 004ce968
    CALL core_inv.cpp_FUN_004fae10      ; 004ce969
        ;   XREF to: 004fae10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004fae10()
    ADD ESP,0x4                         ; 004ce96e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce971
    CMP dword ptr [EAX + 0x2a8],0x0     ; 004ce974
    JZ 0x004ce98c                       ; 004ce97b
        ;   XREF to: 004ce98c (CONDITIONAL_JUMP)  ; LAB_004ce98c
    MOV EBX,dword ptr [0x00622c18]      ; 004ce97d | g_CDemonSetPtr
    PUSH EBX                            ; 004ce983 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderLightDebugView_FUN_00551a50 ; 004ce984
        ;   XREF to: 00551a50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderLightDebugView_FUN_00551a50(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004ce989
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ce98c
        ;   Label: LAB_004ce98c
    PUSH ESI                            ; 004ce98f
    CALL core_game.cpp_CGame_drawScreenBorder_FUN_004cc0c0 ; 004ce990
        ;   XREF to: 004cc0c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_drawScreenBorder_FUN_004cc0c0(CGame * this_ptr)
    MOV EDI,dword ptr [0x01cd0c38]      ; 004ce995 | DAT_01cd0c38
    ADD ESP,0x4                         ; 004ce99b
    TEST EDI,EDI                        ; 004ce99e
    JZ 0x004cea00                       ; 004ce9a0
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    PUSH 0x1d                           ; 004ce9a2
    MOV EAX,[0x0061f2a4]                ; 004ce9a4 | DAT_0061f2a4
    PUSH EAX                            ; 004ce9a9 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004ce9aa | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004ce9ac
    ADD ESP,0x8                         ; 004ce9ae
    TEST EAX,EAX                        ; 004ce9b1
    JZ 0x004ce9de                       ; 004ce9b3
        ;   XREF to: 004ce9de (CONDITIONAL_JUMP)  ; LAB_004ce9de
    PUSH 0x2f                           ; 004ce9b5
    MOV EAX,[0x0061f2a4]                ; 004ce9b7 | DAT_0061f2a4
    PUSH EAX                            ; 004ce9bc | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004ce9bd | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004ce9bf
    ADD ESP,0x8                         ; 004ce9c2
    TEST EAX,EAX                        ; 004ce9c5
    JZ 0x004ce9de                       ; 004ce9c7
        ;   XREF to: 004ce9de (CONDITIONAL_JUMP)  ; LAB_004ce9de
    MOV EAX,[0x01cd0c3c]                ; 004ce9c9 | DAT_01cd0c3c
    TEST EAX,EAX                        ; 004ce9ce
    JZ 0x004cf141                       ; 004ce9d0
        ;   XREF to: 004cf141 (CONDITIONAL_JUMP)  ; LAB_004cf141
    XOR EBX,EBX                         ; 004ce9d6
    MOV dword ptr [0x01cd0c3c],EBX      ; 004ce9d8 | DAT_01cd0c3c
    MOV ESI,dword ptr [0x01cd0c40]      ; 004ce9de | DAT_01cd0c40
        ;   Label: LAB_004ce9de
    TEST ESI,ESI                        ; 004ce9e4
    JLE 0x004cf156                      ; 004ce9e6
        ;   XREF to: 004cf156 (CONDITIONAL_JUMP)  ; LAB_004cf156
    CMP ESI,dword ptr [0x01cd0c44]      ; 004ce9ec | DAT_01cd0c44
    JG 0x004cf156                       ; 004ce9f2
        ;   XREF to: 004cf156 (CONDITIONAL_JUMP)  ; LAB_004cf156
    XOR ESI,ESI                         ; 004ce9f8
    MOV dword ptr [0x01cd0c3c],ESI      ; 004ce9fa | DAT_01cd0c3c
    MOV EAX,[0x00622ad0]                ; 004cea00 | g_CScriptPtr
        ;   Label: LAB_004cea00
    PUSH EAX                            ; 004cea05 | g_CScriptInstance
    CALL core_script.cpp_CScript_renderSubtitles_FUN_005439b0 ; 004cea06
        ;   XREF to: 005439b0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_renderSubtitles_FUN_005439b0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004cea0b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cea0e
    PUSH EDX                            ; 004cea11
    CALL core_game.cpp_CGame_renderOverlay_FUN_004cc2b0 ; 004cea12
        ;   XREF to: 004cc2b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderOverlay_FUN_004cc2b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cea17
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cea1a
    PUSH ECX                            ; 004cea1d
    CALL core_game.cpp_CGame_renderIrisFade_FUN_004d61e0 ; 004cea1e
        ;   XREF to: 004d61e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderIrisFade_FUN_004d61e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cea23
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cea26
    MOV EBX,dword ptr [EAX + 0x200]     ; 004cea29
    TEST EBX,EBX                        ; 004cea2f
    JZ 0x004cf413                       ; 004cea31
        ;   XREF to: 004cf413 (CONDITIONAL_JUMP)  ; LAB_004cf413
    PUSH 0x0                            ; 004cea37
    LEA EAX,[ESP + 0x160]               ; 004cea39
    PUSH EAX                            ; 004cea40
    PUSH 0x0                            ; 004cea41
    MOV EAX,[0x00622c18]                ; 004cea43 | g_CDemonSetPtr
    PUSH 0x0                            ; 004cea48
    ADD EAX,0x14d0f0                    ; 004cea4a
    PUSH EAX                            ; 004cea4f
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004cea50
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV EAX,[0x00622c18]                ; 004cea55 | g_CDemonSetPtr
    ADD ESP,0x14                        ; 004cea5a
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004cea5d | g_CDemonSetInstance.selected_camera_index
    IMUL EDX,EDX,0x1a4                  ; 004cea63
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x150] ; 004cea69 | g_CDemonSetInstance.cameras[0].camera_group
    PUSH ECX                            ; 004cea70
    PUSH 0x1fe382c                      ; 004cea71
    LEA EAX,[ESP + 0x164]               ; 004cea76
    PUSH EAX                            ; 004cea7d
    PUSH 0x5e15d7                       ; 004cea7e | = "Set: %s Camera: \"%s\" group %d"
    LEA EAX,[ESP + 0x46c]               ; 004cea83
    PUSH EAX                            ; 004cea8a
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cea8b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,[0x0061b49c]                ; 004cea90 | DAT_0061b49c
    ADD ESP,0x14                        ; 004cea95
    SUB EAX,0x16                        ; 004cea98
    PUSH EAX                            ; 004cea9b
    PUSH 0x0                            ; 004cea9c
    LEA EAX,[ESP + 0x464]               ; 004cea9e
    PUSH EAX                            ; 004ceaa5
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ceaa6
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004ceaab
    MOV EBX,dword ptr [0x01cc9ba8]      ; 004ceaae | DAT_01cc9ba8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ceab4
    FLD double ptr [0x01cc9ba0]         ; 004ceab7 | DAT_01cc9ba0
    INC EBX                             ; 004ceabd
    FLD float ptr [EAX + 0x294]         ; 004ceabe
    MOV dword ptr [0x01cc9ba8],EBX      ; 004ceac4 | DAT_01cc9ba8
    FXCH                                ; 004ceaca
    FADD ST0,ST1                        ; 004ceacc
    FILD dword ptr [0x01cc9ba8]         ; 004ceace | DAT_01cc9ba8
    FXCH                                ; 004cead4
    FSTP double ptr [0x01cc9ba0]        ; 004cead6 | DAT_01cc9ba0
    FDIV double ptr [0x01cc9ba0]        ; 004ceadc | DAT_01cc9ba0
    MOV ESI,dword ptr [0x01e7dac8]      ; 004ceae2 | DAT_01e7dac8
    PUSH ESI                            ; 004ceae8
    FLD1                                ; 004ceae9
    SUB ESP,0x8                         ; 004ceaeb
    FDIVRP ST2,ST0                      ; 004ceaee
    FSTP double ptr [ESP]               ; 004ceaf0
    SUB ESP,0x8                         ; 004ceaf3
    FSTP double ptr [ESP]               ; 004ceaf6
    PUSH 0x5e15f5                       ; 004ceaf9 | = "FR: %f, AVG: %f, PC: %d"
    LEA EAX,[ESP + 0x474]               ; 004ceafe
    PUSH EAX                            ; 004ceb05
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ceb06
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,[0x0061b49c]                ; 004ceb0b | DAT_0061b49c
    ADD ESP,0x1c                        ; 004ceb10
    SUB EAX,0xb                         ; 004ceb13
    PUSH EAX                            ; 004ceb16
    PUSH 0x0                            ; 004ceb17
    LEA EAX,[ESP + 0x464]               ; 004ceb19
    PUSH EAX                            ; 004ceb20
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ceb21
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x01d06ab4]                ; 004ceb26 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ceb2b
    FLD float ptr [0x005e1734]          ; 004ceb32 | DAT_005e1734
    FLD float ptr [EAX + 0x34]          ; 004ceb38
    FMUL ST1                            ; 004ceb3b
    ADD ESP,0xc                         ; 004ceb3d
    FLD double ptr [0x005e173c]         ; 004ceb40 | DAT_005e173c
    FXCH                                ; 004ceb46
    FMUL ST1                            ; 004ceb48
    SUB ESP,0x8                         ; 004ceb4a
    FSTP double ptr [ESP]               ; 004ceb4d
    FLD float ptr [EAX + 0x38]          ; 004ceb50
    FMUL ST2                            ; 004ceb53
    FMUL ST1                            ; 004ceb55
    SUB ESP,0x8                         ; 004ceb57
    FSTP double ptr [ESP]               ; 004ceb5a
    FLD float ptr [EAX + 0x30]          ; 004ceb5d
    FMULP ST2                           ; 004ceb60
    FMULP                               ; 004ceb62
    SUB ESP,0x8                         ; 004ceb64
    FSTP double ptr [ESP]               ; 004ceb67
    SUB ESP,0x8                         ; 004ceb6a
    FLD float ptr [EAX + 0x28]          ; 004ceb6d
    FSTP double ptr [ESP]               ; 004ceb70
    SUB ESP,0x8                         ; 004ceb73
    FLD float ptr [EAX + 0x24]          ; 004ceb76
    FSTP double ptr [ESP]               ; 004ceb79
    SUB ESP,0x8                         ; 004ceb7c
    FLD float ptr [EAX + 0x20]          ; 004ceb7f
    FSTP double ptr [ESP]               ; 004ceb82
    PUSH 0x5e160d                       ; 004ceb85 | = "Hero : %4.2f,%4.2f,%4.2f xyz and %3.2..."
    LEA EAX,[ESP + 0x490]               ; 004ceb8a
    PUSH EAX                            ; 004ceb91
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ceb92
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x38                        ; 004ceb97
    PUSH 0x0                            ; 004ceb9a
    PUSH 0x0                            ; 004ceb9c
    LEA EAX,[ESP + 0x464]               ; 004ceb9e
    PUSH EAX                            ; 004ceba5
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ceba6
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004cebab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cebae
    MOV EAX,dword ptr [EAX + 0x2a4]     ; 004cebb1
    MOV EDI,dword ptr [EAX*0x4 + 0x61d960] ; 004cebb7 | PTR_DAT_0061d960
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cebbe
    MOV EAX,dword ptr [EAX + 0x218]     ; 004cebc1
    PUSH EDI                            ; 004cebc7
    MOV EDX,dword ptr [EAX*0x4 + 0x61d960] ; 004cebc8 | PTR_DAT_0061d960
    PUSH EDX                            ; 004cebcf
    PUSH 0x5e1644                       ; 004cebd0 | = "Slew : %s, Virtual Director : %s"
    LEA EAX,[ESP + 0x468]               ; 004cebd5
    PUSH EAX                            ; 004cebdc
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cebdd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004cebe2
    PUSH 0xb                            ; 004cebe5
    PUSH 0x0                            ; 004cebe7
    LEA EAX,[ESP + 0x464]               ; 004cebe9
    PUSH EAX                            ; 004cebf0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004cebf1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004cebf6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cebf9
    MOV ECX,dword ptr [EAX + 0x9f0]     ; 004cebfc
    TEST ECX,ECX                        ; 004cec02
    JZ 0x004cec50                       ; 004cec04
        ;   XREF to: 004cec50 (CONDITIONAL_JUMP)  ; LAB_004cec50
    SUB ESP,0x8                         ; 004cec06
    FLD float ptr [ECX + 0x8]           ; 004cec09
    FSTP double ptr [ESP]               ; 004cec0c
    SUB ESP,0x8                         ; 004cec0f
    FLD float ptr [ECX + 0x4]           ; 004cec12
    FSTP double ptr [ESP]               ; 004cec15
    SUB ESP,0x8                         ; 004cec18
    FLD float ptr [ECX]                 ; 004cec1b
    FSTP double ptr [ESP]               ; 004cec1d
    PUSH 0x5e1665                       ; 004cec20 | = "Fudge: %g,%g,%g"
    LEA EAX,[ESP + 0x478]               ; 004cec25
    PUSH EAX                            ; 004cec2c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cec2d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,[0x0061b49c]                ; 004cec32 | DAT_0061b49c
    ADD ESP,0x20                        ; 004cec37
    SUB EAX,0x4d                        ; 004cec3a
    PUSH EAX                            ; 004cec3d
    PUSH 0x0                            ; 004cec3e
    LEA EAX,[ESP + 0x464]               ; 004cec40
    PUSH EAX                            ; 004cec47
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004cec48
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004cec4d
    MOV EAX,ESP                         ; 004cec50
        ;   Label: LAB_004cec50
    PUSH EAX                            ; 004cec52
    LEA EAX,[ESP + 0x6e8]               ; 004cec53
    PUSH EAX                            ; 004cec5a
    LEA EAX,[ESP + 0xc]                 ; 004cec5b
    PUSH EAX                            ; 004cec5f
    LEA EAX,[ESP + 0x6ec]               ; 004cec60
    PUSH EAX                            ; 004cec67
    LEA EAX,[ESP + 0x18]                ; 004cec68
    PUSH EAX                            ; 004cec6c
    LEA EAX,[ESP + 0x6f0]               ; 004cec6d
    PUSH EAX                            ; 004cec74
    CALL sound_sndmain.cpp_getSoundMemoryStats_FUN_005746e0 ; 004cec75
        ;   XREF to: 005746e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundMemoryStats_FUN_005746e0(int * out_referenced_count, int * out_total_bytes_referenced, int * out_unreferenced_count, int * out_total_bytes_unreferenced, ...)
    ADD ESP,0x18                        ; 004cec7a
    MOV EAX,dword ptr [ESP]             ; 004cec7d
    MOV dword ptr [ESP + 0x718],EAX     ; 004cec80
    FLD double ptr [0x005e1744]         ; 004cec87 | DAT_005e1744
    FILD dword ptr [ESP + 0x718]        ; 004cec8d
    FMUL ST1                            ; 004cec94
    SUB ESP,0x8                         ; 004cec96
    FSTP double ptr [ESP]               ; 004cec99
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cec9c
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ceca0
    ADD EAX,EBX                         ; 004ceca4
    MOV dword ptr [ESP + 0x720],EAX     ; 004ceca6
    FILD dword ptr [ESP + 0x720]        ; 004cecad
    SUB ESP,0x8                         ; 004cecb4
    MOV dword ptr [ESP + 0x728],EBX     ; 004cecb7
    FMUL ST1                            ; 004cecbe
    FILD dword ptr [ESP + 0x728]        ; 004cecc0
    FMUL ST2                            ; 004cecc7
    FXCH                                ; 004cecc9
    FSTP double ptr [ESP]               ; 004ceccb
    SUB ESP,0x8                         ; 004cecce
    FSTP double ptr [ESP]               ; 004cecd1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cecd4
    MOV ESI,dword ptr [ESP + 0x6f8]     ; 004cecd8
    MOV dword ptr [ESP + 0x730],EAX     ; 004cecdf
    PUSH ESI                            ; 004cece6
    FILD dword ptr [ESP + 0x734]        ; 004cece7
    FMULP                               ; 004cecee
    SUB ESP,0x8                         ; 004cecf0
    FSTP double ptr [ESP]               ; 004cecf3
    MOV EDI,dword ptr [ESP + 0x700]     ; 004cecf6
    PUSH EDI                            ; 004cecfd
    CALL sound_sndmain.cpp_countActiveSfx_FUN_00573e20 ; 004cecfe
        ;   XREF to: 00573e20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_countActiveSfx_FUN_00573e20()
    PUSH EAX                            ; 004ced03
    PUSH 0x5e1675                       ; 004ced04 | = "SFX: %d Samples: Active: %d/%.1fk Ava..."
    LEA EAX,[ESP + 0x48c]               ; 004ced09
    PUSH EAX                            ; 004ced10
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ced11
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,[0x0061b49c]                ; 004ced16 | DAT_0061b49c
    ADD ESP,0x34                        ; 004ced1b
    SUB EAX,0x42                        ; 004ced1e
    PUSH EAX                            ; 004ced21
    PUSH 0x0                            ; 004ced22
    LEA EAX,[ESP + 0x464]               ; 004ced24
    PUSH EAX                            ; 004ced2b
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ced2c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004ced31
    LEA EAX,[ESP + 0x45c]               ; 004ced34
    PUSH EAX                            ; 004ced3b
    CALL engine_texture.cpp_getTextureCacheStats_FUN_00597cd0 ; 004ced3c
        ;   XREF to: 00597cd0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_getTextureCacheStats_FUN_00597cd0(char * output_buffer)
    MOV EAX,[0x0061b49c]                ; 004ced41 | DAT_0061b49c
    ADD ESP,0x4                         ; 004ced46
    SUB EAX,0x37                        ; 004ced49
    PUSH EAX                            ; 004ced4c
    PUSH 0x0                            ; 004ced4d
    LEA EAX,[ESP + 0x464]               ; 004ced4f
    PUSH EAX                            ; 004ced56
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ced57
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004ced5c
    LEA EAX,[ESP + 0x45c]               ; 004ced5f
    PUSH EAX                            ; 004ced66
    CALL core_skeleton.cpp_FUN_0056b780 ; 004ced67
        ;   XREF to: 0056b780 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056b780(char * output_buffer)
    MOV EAX,[0x0061b49c]                ; 004ced6c | DAT_0061b49c
    ADD ESP,0x4                         ; 004ced71
    SUB EAX,0x2c                        ; 004ced74
    PUSH EAX                            ; 004ced77
    PUSH 0x0                            ; 004ced78
    LEA EAX,[ESP + 0x464]               ; 004ced7a
    PUSH EAX                            ; 004ced81
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ced82
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x0061b49c]                ; 004ced87 | DAT_0061b49c
    ADD ESP,0xc                         ; 004ced8c
    SUB EAX,0x21                        ; 004ced8f
    PUSH EAX                            ; 004ced92
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ced93
    PUSH 0x0                            ; 004ced96
    ADD EAX,0xec                        ; 004ced98
    PUSH EAX                            ; 004ced9d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004ced9e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x02c83370]                ; 004ceda3 | DAT_02c83370
    ADD ESP,0xc                         ; 004ceda8
    TEST EAX,EAX                        ; 004cedab
    JZ 0x004cee26                       ; 004cedad
        ;   XREF to: 004cee26 (CONDITIONAL_JUMP)  ; LAB_004cee26
    PUSH 0x400                          ; 004cedaf
    CALL engine_special.cpp_FUN_00582bf0 ; 004cedb4
        ;   XREF to: 00582bf0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00582bf0()
    ADD ESP,0x4                         ; 004cedb9
    PUSH EAX                            ; 004cedbc
    PUSH 0x200                          ; 004cedbd
    CALL engine_special.cpp_FUN_00582bf0 ; 004cedc2
        ;   XREF to: 00582bf0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00582bf0()
    ADD ESP,0x4                         ; 004cedc7
    PUSH EAX                            ; 004cedca
    PUSH 0x100                          ; 004cedcb
    CALL engine_special.cpp_FUN_00582bf0 ; 004cedd0
        ;   XREF to: 00582bf0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00582bf0()
    ADD ESP,0x4                         ; 004cedd5
    PUSH EAX                            ; 004cedd8
    PUSH 0x80                           ; 004cedd9
    CALL engine_special.cpp_FUN_00582bf0 ; 004cedde
        ;   XREF to: 00582bf0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00582bf0()
    ADD ESP,0x4                         ; 004cede3
    PUSH EAX                            ; 004cede6
    PUSH 0x40                           ; 004cede7
    CALL engine_special.cpp_FUN_00582bf0 ; 004cede9
        ;   XREF to: 00582bf0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00582bf0()
    ADD ESP,0x4                         ; 004cedee
    PUSH EAX                            ; 004cedf1
    PUSH 0x20                           ; 004cedf2
    CALL engine_special.cpp_FUN_00582bf0 ; 004cedf4
        ;   XREF to: 00582bf0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00582bf0()
    ADD ESP,0x4                         ; 004cedf9
    PUSH EAX                            ; 004cedfc
    PUSH 0x5e16c6                       ; 004cedfd | = "32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d"
    LEA EAX,[ESP + 0x478]               ; 004cee02
    PUSH EAX                            ; 004cee09
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cee0a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x20                        ; 004cee0f
    PUSH 0x2c                           ; 004cee12
    PUSH 0x0                            ; 004cee14
    LEA EAX,[ESP + 0x464]               ; 004cee16
    PUSH EAX                            ; 004cee1d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004cee1e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004cee23
    CMP dword ptr [0x01cd0c48],0x0      ; 004cee26 | DAT_01cd0c48
        ;   Label: LAB_004cee26
    JZ 0x004cee80                       ; 004cee2d
        ;   XREF to: 004cee80 (CONDITIONAL_JUMP)  ; LAB_004cee80
    CALL sound_sndmain.cpp_getFirstActiveSfx_FUN_00573d20 ; 004cee2f
        ;   XREF to: 00573d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_getFirstActiveSfx_FUN_00573d20()
    MOV ESI,0x37                        ; 004cee34
    MOV EBX,EAX                         ; 004cee39
    TEST EAX,EAX                        ; 004cee3b
    JZ 0x004cee80                       ; 004cee3d
        ;   XREF to: 004cee80 (CONDITIONAL_JUMP)  ; LAB_004cee80
    LEA EAX,[ESP + 0xc]                 ; 004cee3f
        ;   Label: LAB_004cee3f
    PUSH EAX                            ; 004cee43
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00572340 ; 004cee44
        ;   XREF to: 00572340 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00572340(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 004cee49
    LEA EAX,[ESP + 0xc]                 ; 004cee4c
    PUSH EAX                            ; 004cee50
    PUSH EBX                            ; 004cee51
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620 ; 004cee52
        ;   XREF to: 00573620 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 004cee57
    TEST EAX,EAX                        ; 004cee5a
    JZ 0x004cee71                       ; 004cee5c
        ;   XREF to: 004cee71 (CONDITIONAL_JUMP)  ; LAB_004cee71
    LEA EAX,[ESP + 0xc]                 ; 004cee5e
    PUSH EAX                            ; 004cee62
    PUSH ESI                            ; 004cee63
    PUSH 0x0                            ; 004cee64
    CALL engine_2d.c_drawTextXY_FUN_00402140 ; 004cee66
        ;   XREF to: 00402140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402140(int x, int y, char * text)
    ADD ESI,0xb                         ; 004cee6b
    ADD ESP,0xc                         ; 004cee6e
    PUSH EBX                            ; 004cee71
        ;   Label: LAB_004cee71
    CALL sound_sndmain.cpp_FUN_00573d60 ; 004cee72
        ;   XREF to: 00573d60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573d60()
    ADD ESP,0x4                         ; 004cee77
    MOV EBX,EAX                         ; 004cee7a
    TEST EAX,EAX                        ; 004cee7c
    JNZ 0x004cee3f                      ; 004cee7e
        ;   XREF to: 004cee3f (CONDITIONAL_JUMP)  ; LAB_004cee3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cee80
        ;   Label: LAB_004cee80
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004cee83
    JZ 0x004cee9b                       ; 004cee8a
        ;   XREF to: 004cee9b (CONDITIONAL_JUMP)  ; LAB_004cee9b
    MOV EBX,dword ptr [0x0061b4d0]      ; 004cee8c | DAT_0061b4d0
    PUSH EBX                            ; 004cee92
    CALL core_event.cpp_CEventList_render_FUN_004a6d80 ; 004cee93
        ;   XREF to: 004a6d80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_render_FUN_004a6d80(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004cee98
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cee9b
        ;   Label: LAB_004cee9b
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004cee9e
    JZ 0x004ceed3                       ; 004ceea5
        ;   XREF to: 004ceed3 (CONDITIONAL_JUMP)  ; LAB_004ceed3
    CMP dword ptr [EAX + 0x2a8],0x0     ; 004ceea7
    JZ 0x004ceed3                       ; 004ceeae
        ;   XREF to: 004ceed3 (CONDITIONAL_JUMP)  ; LAB_004ceed3
    MOV EAX,[0x0061b49c]                ; 004ceeb0 | DAT_0061b49c
    DEC EAX                             ; 004ceeb5
    PUSH EAX                            ; 004ceeb6
    MOV EAX,[0x0061b498]                ; 004ceeb7 | DAT_0061b498
    DEC EAX                             ; 004ceebc
    PUSH EAX                            ; 004ceebd
    PUSH 0xf0                           ; 004ceebe
    PUSH 0x0                            ; 004ceec3
    MOV EAX,[0x00622ad0]                ; 004ceec5 | g_CScriptPtr
    PUSH EAX                            ; 004ceeca | g_CScriptInstance
    CALL core_script.cpp_CScript_renderEditor_FUN_00543c00 ; 004ceecb
        ;   XREF to: 00543c00 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_renderEditor_FUN_00543c00(CScript * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004ceed0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ceed3
        ;   Label: LAB_004ceed3
    CMP dword ptr [EAX + 0x214],0x0     ; 004ceed6
    JZ 0x004cef11                       ; 004ceedd
        ;   XREF to: 004cef11 (CONDITIONAL_JUMP)  ; LAB_004cef11
    LEA EAX,[ESP + 0x25c]               ; 004ceedf
    PUSH EAX                            ; 004ceee6
    MOV ECX,dword ptr [0x0061abc0]      ; 004ceee7 | g_CEditorToolsPtr
    PUSH ECX                            ; 004ceeed
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40 ; 004ceeee
        ;   XREF to: 00498e40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40(CEditorTools * this_ptr, char * output_buffer)
    MOV EAX,[0x0061b49c]                ; 004ceef3 | DAT_0061b49c
    ADD ESP,0x8                         ; 004ceef8
    SUB EAX,0x42                        ; 004ceefb
    PUSH EAX                            ; 004ceefe
    PUSH 0x0                            ; 004ceeff
    LEA EAX,[ESP + 0x264]               ; 004cef01
    PUSH EAX                            ; 004cef08
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004cef09
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004cef0e
    MOV EAX,[0x01d06ab4]                ; 004cef11 | DAT_01d06ab4
        ;   Label: LAB_004cef11
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004cef16
    PUSH EAX                            ; 004cef1d
    MOV EDX,dword ptr [EAX + 0x154]     ; 004cef1e
    CALL dword ptr [EDX + 0x10c]        ; 004cef24
    ADD ESP,0x4                         ; 004cef2a
    CMP EAX,0x2                         ; 004cef2d
    JNZ 0x004cef62                      ; 004cef30
        ;   XREF to: 004cef62 (CONDITIONAL_JUMP)  ; LAB_004cef62
    PUSH 0x5e16ef                       ; 004cef32 | = "You're dead.  Game over."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cef37
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cef3c
    LEA EDI,[ESP + 0x35c]               ; 004cef3f
    MOV ESI,EAX                         ; 004cef46
    PUSH EDI                            ; 004cef48
    MOV AL,byte ptr [ESI]               ; 004cef49
        ;   Label: LAB_004cef49
    MOV byte ptr [EDI],AL               ; 004cef4b
    CMP AL,0x0                          ; 004cef4d
    JZ 0x004cef61                       ; 004cef4f
        ;   XREF to: 004cef61 (CONDITIONAL_JUMP)  ; LAB_004cef61
    MOV AL,byte ptr [ESI + 0x1]         ; 004cef51
    ADD ESI,0x2                         ; 004cef54
    MOV byte ptr [EDI + 0x1],AL         ; 004cef57
    ADD EDI,0x2                         ; 004cef5a
    CMP AL,0x0                          ; 004cef5d
    JNZ 0x004cef49                      ; 004cef5f
        ;   XREF to: 004cef49 (CONDITIONAL_JUMP)  ; LAB_004cef49
    POP EDI                             ; 004cef61
        ;   Label: LAB_004cef61
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cef62
        ;   Label: LAB_004cef62
    CMP dword ptr [EAX + 0xafc],0x0     ; 004cef65
    JZ 0x004cef77                       ; 004cef6c
        ;   XREF to: 004cef77 (CONDITIONAL_JUMP)  ; LAB_004cef77
    PUSH EAX                            ; 004cef6e
    CALL core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40 ; 004cef6f
        ;   XREF to: 004ccc40 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cef74
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cef77
        ;   Label: LAB_004cef77
    CMP dword ptr [EAX + 0x2b0],0x0     ; 004cef7a
    JZ 0x004cef91                       ; 004cef81
        ;   XREF to: 004cef91 (CONDITIONAL_JUMP)  ; LAB_004cef91
    MOV EAX,[0x00611100]                ; 004cef83 | g_CConsolePtr
    PUSH EAX                            ; 004cef88 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_render_FUN_00445690 ; 004cef89
        ;   XREF to: 00445690 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_render_FUN_00445690(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004cef8e
    MOV EAX,[0x01cd01fc]                ; 004cef91 | g_CPickList
        ;   Label: LAB_004cef91
    TEST EAX,EAX                        ; 004cef96
    JLE 0x004cefa7                      ; 004cef98
        ;   XREF to: 004cefa7 (CONDITIONAL_JUMP)  ; LAB_004cefa7
    PUSH 0x1cd01fc                      ; 004cef9a | g_CPickList
    CALL shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 ; 004cef9f
        ;   XREF to: 0049b830 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cefa4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cefa7
        ;   Label: LAB_004cefa7
    CMP dword ptr [EAX + 0x218],0x0     ; 004cefaa
    JZ 0x004cefc4                       ; 004cefb1
        ;   XREF to: 004cefc4 (CONDITIONAL_JUMP)  ; LAB_004cefc4
    PUSH 0x0                            ; 004cefb3
    MOV ECX,dword ptr [0x0061abc0]      ; 004cefb5 | g_CEditorToolsPtr
    PUSH ECX                            ; 004cefbb
    CALL shape_edittool.cpp_FUN_00497870 ; 004cefbc
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497870()
    ADD ESP,0x8                         ; 004cefc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cefc4
        ;   Label: LAB_004cefc4
    CMP dword ptr [EAX + 0xd0],0x3      ; 004cefc7
    JNZ 0x004ceffa                      ; 004cefce
        ;   XREF to: 004ceffa (CONDITIONAL_JUMP)  ; LAB_004ceffa
    PUSH 0x5e1708                       ; 004cefd0 | = "MouseControlMode"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004cefd5 | DAT_0061b4d0
    PUSH ESI                            ; 004cefdb
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004cefdc
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    MOV EDI,dword ptr [0x01cd0b40]      ; 004cefe1 | DAT_01cd0b40
    ADD ESP,0x8                         ; 004cefe7
    TEST EDI,EDI                        ; 004cefea
    JL 0x004ceffa                       ; 004cefec
        ;   XREF to: 004ceffa (CONDITIONAL_JUMP)  ; LAB_004ceffa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cefee
    PUSH EAX                            ; 004ceff1
    CALL core_game.cpp_FUN_004dc1a0     ; 004ceff2
        ;   XREF to: 004dc1a0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004dc1a0()
    ADD ESP,0x4                         ; 004ceff7
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ceffa
        ;   Label: LAB_004ceffa
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ceffd
    MOV ECX,dword ptr [EDX + 0x260]     ; 004cf000
    MOV ESI,dword ptr [ESI + 0x25c]     ; 004cf006
    OR ESI,ECX                          ; 004cf00c
    JNZ 0x004cf01e                      ; 004cf00e
        ;   XREF to: 004cf01e (CONDITIONAL_JUMP)  ; LAB_004cf01e
    CMP dword ptr [0x01cd0c5c],0x0      ; 004cf010 | DAT_01cd0c5c
    JZ 0x004cf01e                       ; 004cf017
        ;   XREF to: 004cf01e (CONDITIONAL_JUMP)  ; LAB_004cf01e
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004cf019
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0x0                            ; 004cf01e
        ;   Label: LAB_004cf01e
    MOV dword ptr [0x01cd0c5c],ESI      ; 004cf020 | DAT_01cd0c5c
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 004cf026
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 004cf02b
    CMP dword ptr [ESP + 0x6ec],0x0     ; 004cf02e
        ;   Label: LAB_004cf02e
    JZ 0x004ce61d                       ; 004cf036
        ;   XREF to: 004ce61d (CONDITIONAL_JUMP)  ; LAB_004ce61d
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00 ; 004cf03c
        ;   XREF to: 005acc00 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00()
    MOV ESP,EBP                         ; 004cf041
    POP EBP                             ; 004cf043
    POP EDI                             ; 004cf044
    POP ESI                             ; 004cf045
    POP EBX                             ; 004cf046
    RET                                 ; 004cf047
    CMP dword ptr [EAX + 0x2ac],0x0     ; 004cf048
        ;   Label: LAB_004cf048
    JNZ 0x004ce669                      ; 004cf04f
        ;   XREF to: 004ce669 (CONDITIONAL_JUMP)  ; LAB_004ce669
    JMP 0x004ce66e                      ; 004cf055
        ;   XREF to: 004ce66e (UNCONDITIONAL_JUMP)  ; LAB_004ce66e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf05a
        ;   Label: LAB_004cf05a
    CMP dword ptr [EAX + 0x25c],0x0     ; 004cf05d
    JNZ 0x004ce67d                      ; 004cf064
        ;   XREF to: 004ce67d (CONDITIONAL_JUMP)  ; LAB_004ce67d
    CMP dword ptr [0x007c3978],0x0      ; 004cf06a | DAT_007c3978
    JNZ 0x004ce67d                      ; 004cf071
        ;   XREF to: 004ce67d (CONDITIONAL_JUMP)  ; LAB_004ce67d
    PUSH 0x1                            ; 004cf077
    MOV EDX,dword ptr [0x00622c18]      ; 004cf079 | g_CDemonSetPtr
    PUSH EDX                            ; 004cf07f | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00550580      ; 004cf080
        ;   XREF to: 00550580 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00550580(CDemonSet * this_ptr, int skip_prerender)
    ADD ESP,0x8                         ; 004cf085
    JMP 0x004ce67d                      ; 004cf088
        ;   XREF to: 004ce67d (UNCONDITIONAL_JUMP)  ; LAB_004ce67d
    PUSH EAX                            ; 004cf08d
        ;   Label: LAB_004cf08d
    CALL core_game.cpp_CGame_process_FUN_004d8060 ; 004cf08e
        ;   XREF to: 004d8060 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004d8060(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cf093
    MOV EAX,[0x006236b8]                ; 004cf096 | DAT_006236b8
    PUSH EAX                            ; 004cf09b
    CALL core_sound.cpp_CSound_process_FUN_0057ce10 ; 004cf09c
        ;   XREF to: 0057ce10 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_process_FUN_0057ce10(CSound * this_ptr)
    ADD ESP,0x4                         ; 004cf0a1
    JMP 0x004ce839                      ; 004cf0a4
        ;   XREF to: 004ce839 (UNCONDITIONAL_JUMP)  ; LAB_004ce839
    CMP dword ptr [EBX + 0x25c],0x0     ; 004cf0a9
        ;   Label: LAB_004cf0a9
    JNZ 0x004ce864                      ; 004cf0b0
        ;   XREF to: 004ce864 (CONDITIONAL_JUMP)  ; LAB_004ce864
    CMP dword ptr [0x007c3978],0x0      ; 004cf0b6 | DAT_007c3978
    JNZ 0x004ce864                      ; 004cf0bd
        ;   XREF to: 004ce864 (CONDITIONAL_JUMP)  ; LAB_004ce864
    MOV EBX,dword ptr [0x00622c18]      ; 004cf0c3 | g_CDemonSetPtr
    PUSH EBX                            ; 004cf0c9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 ; 004cf0ca
        ;   XREF to: 00550260 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cf0cf
    JMP 0x004ce864                      ; 004cf0d2
        ;   XREF to: 004ce864 (UNCONDITIONAL_JUMP)  ; LAB_004ce864
    MOV EDI,dword ptr [0x007c3978]      ; 004cf0d7 | DAT_007c3978
        ;   Label: LAB_004cf0d7
    TEST EDI,EDI                        ; 004cf0dd
    JNZ 0x004cf10b                      ; 004cf0df
        ;   XREF to: 004cf10b (CONDITIONAL_JUMP)  ; LAB_004cf10b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf0e1
    CMP dword ptr [EAX + 0x25c],0x0     ; 004cf0e4
    JNZ 0x004cf116                      ; 004cf0eb
        ;   XREF to: 004cf116 (CONDITIONAL_JUMP)  ; LAB_004cf116
    CMP dword ptr [EAX + 0x260],0x0     ; 004cf0ed
    JZ 0x004ce908                       ; 004cf0f4
        ;   XREF to: 004ce908 (CONDITIONAL_JUMP)  ; LAB_004ce908
    MOV EBX,dword ptr [0x00622c18]      ; 004cf0fa | g_CDemonSetPtr
    PUSH EBX                            ; 004cf100 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00551170      ; 004cf101
        ;   XREF to: 00551170 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00551170()
    JMP 0x004ce905                      ; 004cf106
        ;   XREF to: 004ce905 (UNCONDITIONAL_JUMP)  ; LAB_004ce905
    PUSH EDI                            ; 004cf10b
        ;   Label: LAB_004cf10b
    MOV EDX,dword ptr [EDI]             ; 004cf10c
    CALL dword ptr [EDX + 0x18]         ; 004cf10e
    JMP 0x004ce905                      ; 004cf111
        ;   XREF to: 004ce905 (UNCONDITIONAL_JUMP)  ; LAB_004ce905
    MOV ESI,dword ptr [0x00622c18]      ; 004cf116 | g_CDemonSetPtr
        ;   Label: LAB_004cf116
    PUSH ESI                            ; 004cf11c | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00550da0      ; 004cf11d
        ;   XREF to: 00550da0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00550da0(CDemonSet * this_ptr)
    JMP 0x004ce905                      ; 004cf122
        ;   XREF to: 004ce905 (UNCONDITIONAL_JUMP)  ; LAB_004ce905
    PUSH 0x5e15c0                       ; 004cf127 | = "SPOOKHOUSE"
        ;   Label: LAB_004cf127
    CALL crt_env.c_getenv_FUN_005c3050  ; 004cf12c
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 004cf131
    TEST EAX,EAX                        ; 004cf134
    JNZ 0x004ce918                      ; 004cf136
        ;   XREF to: 004ce918 (CONDITIONAL_JUMP)  ; LAB_004ce918
    JMP 0x004ce957                      ; 004cf13c
        ;   XREF to: 004ce957 (UNCONDITIONAL_JUMP)  ; LAB_004ce957
    MOV ECX,0x1                         ; 004cf141
        ;   Label: LAB_004cf141
    MOV [0x01cd0c44],EAX                ; 004cf146 | DAT_01cd0c44
    MOV dword ptr [0x01cd0c3c],ECX      ; 004cf14b | DAT_01cd0c3c
    JMP 0x004ce9de                      ; 004cf151
        ;   XREF to: 004ce9de (UNCONDITIONAL_JUMP)  ; LAB_004ce9de
    CMP dword ptr [0x01cd0c3c],0x0      ; 004cf156 | DAT_01cd0c3c
        ;   Label: LAB_004cf156
    JZ 0x004cea00                       ; 004cf15d
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    MOV EDX,dword ptr [0x01cd0c44]      ; 004cf163 | DAT_01cd0c44
    PUSH EDX                            ; 004cf169
    PUSH 0x5e1330                       ; 004cf16a | = "noc%05d.raw"
    LEA EAX,[ESP + 0x62c]               ; 004cf16f
    PUSH EAX                            ; 004cf176
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cf177
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004cf17c
    LEA EAX,[ESP + 0x624]               ; 004cf17f
    PUSH EAX                            ; 004cf186
    PUSH 0x5e133c                       ; 004cf187 | = "Movie recording active: movie\\%s"
    LEA EAX,[ESP + 0x564]               ; 004cf18c
    PUSH EAX                            ; 004cf193
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cf194
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004cf199
    PUSH 0x5e135d                       ; 004cf19c | DAT_005e135d
    LEA EAX,[ESP + 0x628]               ; 004cf1a1
    PUSH EAX                            ; 004cf1a8
    PUSH 0x5e1360                       ; 004cf1a9 | = "movie"
    CALL engine_dosio.cpp_FUN_00479180  ; 004cf1ae
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004cf1b3
    MOV dword ptr [ESP + 0x6f8],EAX     ; 004cf1b6
    TEST EAX,EAX                        ; 004cf1bd
    JZ 0x004cea00                       ; 004cf1bf
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    XOR ECX,ECX                         ; 004cf1c5
    MOV EBX,dword ptr [0x0061d970]      ; 004cf1c7 | DAT_0061d970
    MOV dword ptr [ESP + 0x6f4],ECX     ; 004cf1cd
    TEST EBX,EBX                        ; 004cf1d4
    JLE 0x004cf3dd                      ; 004cf1d6
        ;   XREF to: 004cf3dd (CONDITIONAL_JUMP)  ; LAB_004cf3dd
    XOR ESI,ESI                         ; 004cf1dc
        ;   Label: LAB_004cf1dc
    MOV EDI,dword ptr [0x0061d96c]      ; 004cf1de | DAT_0061d96c
    MOV dword ptr [ESP + 0x6fc],ESI     ; 004cf1e4
    TEST EDI,EDI                        ; 004cf1eb
    JLE 0x004cf3c0                      ; 004cf1ed
        ;   XREF to: 004cf3c0 (CONDITIONAL_JUMP)  ; LAB_004cf3c0
    MOV EAX,dword ptr [ESP + 0x6f4]     ; 004cf1f3
    INC EAX                             ; 004cf1fa
    MOV dword ptr [ESP + 0x6f0],EAX     ; 004cf1fb
    MOV EDX,dword ptr [ESP + 0x6fc]     ; 004cf202
        ;   Label: LAB_004cf202
    MOV ECX,dword ptr [0x0061b498]      ; 004cf209 | DAT_0061b498
    IMUL EDX,ECX                        ; 004cf20f
    MOV EBX,dword ptr [0x0061d96c]      ; 004cf212 | DAT_0061d96c
    MOV EAX,EDX                         ; 004cf218
    SAR EDX,0x1f                        ; 004cf21a
    IDIV EBX                            ; 004cf21d
    MOV EDX,dword ptr [ESP + 0x6fc]     ; 004cf21f
    INC EDX                             ; 004cf226
    IMUL EDX,ECX                        ; 004cf227
    MOV dword ptr [ESP + 0x704],EAX     ; 004cf22a
    MOV EAX,EDX                         ; 004cf231
    SAR EDX,0x1f                        ; 004cf233
    IDIV EBX                            ; 004cf236
    MOV EDX,dword ptr [ESP + 0x6f4]     ; 004cf238
    MOV dword ptr [ESP + 0x70c],EAX     ; 004cf23f
    IMUL EDX,dword ptr [0x0061b49c]     ; 004cf246 | DAT_0061b49c
    MOV ECX,dword ptr [0x0061d970]      ; 004cf24d | DAT_0061d970
    MOV EAX,EDX                         ; 004cf253
    SAR EDX,0x1f                        ; 004cf255
    IDIV ECX                            ; 004cf258
    MOV EBX,dword ptr [0x0061b49c]      ; 004cf25a | DAT_0061b49c
    MOV EDX,dword ptr [ESP + 0x6f0]     ; 004cf260
    IMUL EDX,EBX                        ; 004cf267
    MOV ESI,dword ptr [0x0061d970]      ; 004cf26a | DAT_0061d970
    MOV ECX,EAX                         ; 004cf270
    MOV EAX,EDX                         ; 004cf272
    SAR EDX,0x1f                        ; 004cf274
    IDIV ESI                            ; 004cf277
    XOR EDI,EDI                         ; 004cf279
    MOV dword ptr [ESP + 0x714],EDI     ; 004cf27b
    MOV dword ptr [ESP + 0x710],EDI     ; 004cf282
    XOR EBX,EBX                         ; 004cf289
    XOR ESI,ESI                         ; 004cf28b
    CMP ECX,EAX                         ; 004cf28d
    JGE 0x004cf337                      ; 004cf28f
        ;   XREF to: 004cf337 (CONDITIONAL_JUMP)  ; LAB_004cf337
    SHL ECX,0x2                         ; 004cf295
    SHL EAX,0x2                         ; 004cf298
    MOV dword ptr [ESP + 0x708],ECX     ; 004cf29b
    MOV dword ptr [ESP + 0x700],EAX     ; 004cf2a2
    MOV EDX,dword ptr [ESP + 0x70c]     ; 004cf2a9
        ;   Label: LAB_004cf2a9
    MOV ECX,dword ptr [ESP + 0x704]     ; 004cf2b0
    CMP ECX,EDX                         ; 004cf2b7
    JGE 0x004cf317                      ; 004cf2b9
        ;   XREF to: 004cf317 (CONDITIONAL_JUMP)  ; LAB_004cf317
    MOV EAX,dword ptr [ESP + 0x708]     ; 004cf2bb
    LEA EDX,[ECX*0x4 + 0x0]             ; 004cf2c2
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 004cf2c9 | DAT_01c4354c | DAT_01c43550
    ADD EDX,EAX                         ; 004cf2cf
    MOV EAX,dword ptr [EDX]             ; 004cf2d1
        ;   Label: LAB_004cf2d1
    MOV EDI,EAX                         ; 004cf2d3
    SHR EDI,0x10                        ; 004cf2d5
    AND EDI,0xff                        ; 004cf2d8
    ADD EDX,0x4                         ; 004cf2de
    ADD dword ptr [ESP + 0x710],EDI     ; 004cf2e1
    MOV EDI,EAX                         ; 004cf2e8
    INC ECX                             ; 004cf2ea
    SHR EDI,0x8                         ; 004cf2eb
    AND EAX,0xff                        ; 004cf2ee
    ADD EBX,EAX                         ; 004cf2f3
    AND EDI,0xff                        ; 004cf2f5
    MOV EAX,dword ptr [ESP + 0x714]     ; 004cf2fb
    INC EAX                             ; 004cf302
    ADD ESI,EDI                         ; 004cf303
    MOV EDI,dword ptr [ESP + 0x70c]     ; 004cf305
    MOV dword ptr [ESP + 0x714],EAX     ; 004cf30c
    CMP ECX,EDI                         ; 004cf313
    JL 0x004cf2d1                       ; 004cf315
        ;   XREF to: 004cf2d1 (CONDITIONAL_JUMP)  ; LAB_004cf2d1
    MOV ECX,dword ptr [ESP + 0x708]     ; 004cf317
        ;   Label: LAB_004cf317
    ADD ECX,0x4                         ; 004cf31e
    MOV EDI,dword ptr [ESP + 0x700]     ; 004cf321
    MOV dword ptr [ESP + 0x708],ECX     ; 004cf328
    CMP ECX,EDI                         ; 004cf32f
    JL 0x004cf2a9                       ; 004cf331
        ;   XREF to: 004cf2a9 (CONDITIONAL_JUMP)  ; LAB_004cf2a9
    MOV EAX,dword ptr [ESP + 0x710]     ; 004cf337
        ;   Label: LAB_004cf337
    MOV EDX,EAX                         ; 004cf33e
    MOV ECX,dword ptr [ESP + 0x714]     ; 004cf340
    SAR EDX,0x1f                        ; 004cf347
    IDIV ECX                            ; 004cf34a
    MOV dword ptr [ESP + 0x710],EAX     ; 004cf34c
    MOV EDX,ESI                         ; 004cf353
    MOV EAX,ESI                         ; 004cf355
    SAR EDX,0x1f                        ; 004cf357
    IDIV ECX                            ; 004cf35a
    MOV ESI,EAX                         ; 004cf35c
    MOV EDX,EBX                         ; 004cf35e
    MOV EAX,EBX                         ; 004cf360
    SAR EDX,0x1f                        ; 004cf362
    IDIV ECX                            ; 004cf365
    MOV EBX,EAX                         ; 004cf367
    MOV EAX,dword ptr [ESP + 0x6f8]     ; 004cf369
    PUSH EAX                            ; 004cf370
    MOV EDX,dword ptr [ESP + 0x714]     ; 004cf371
    PUSH EDX                            ; 004cf378
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 004cf379
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 004cf37e
    MOV ECX,dword ptr [ESP + 0x6f8]     ; 004cf381
    PUSH ECX                            ; 004cf388
    PUSH ESI                            ; 004cf389
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 004cf38a
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 004cf38f
    MOV ESI,dword ptr [ESP + 0x6f8]     ; 004cf392
    PUSH ESI                            ; 004cf399
    PUSH EBX                            ; 004cf39a
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 004cf39b
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 004cf3a0
    MOV EDI,dword ptr [ESP + 0x6fc]     ; 004cf3a3
    INC EDI                             ; 004cf3aa
    MOV EDX,dword ptr [0x0061d96c]      ; 004cf3ab | DAT_0061d96c
    MOV dword ptr [ESP + 0x6fc],EDI     ; 004cf3b1
    CMP EDI,EDX                         ; 004cf3b8
    JL 0x004cf202                       ; 004cf3ba
        ;   XREF to: 004cf202 (CONDITIONAL_JUMP)  ; LAB_004cf202
    MOV EDI,dword ptr [ESP + 0x6f4]     ; 004cf3c0
        ;   Label: LAB_004cf3c0
    INC EDI                             ; 004cf3c7
    MOV EDX,dword ptr [0x0061d970]      ; 004cf3c8 | DAT_0061d970
    MOV dword ptr [ESP + 0x6f4],EDI     ; 004cf3ce
    CMP EDI,EDX                         ; 004cf3d5
    JL 0x004cf1dc                       ; 004cf3d7
        ;   XREF to: 004cf1dc (CONDITIONAL_JUMP)  ; LAB_004cf1dc
    MOV ECX,dword ptr [ESP + 0x6f8]     ; 004cf3dd
        ;   Label: LAB_004cf3dd
    PUSH ECX                            ; 004cf3e4
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004cf3e5
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004cf3ea
    PUSH 0x0                            ; 004cf3ed
    PUSH 0x0                            ; 004cf3ef
    LEA EAX,[ESP + 0x564]               ; 004cf3f1
    PUSH EAX                            ; 004cf3f8
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004cf3f9
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EBX,dword ptr [0x01cd0c44]      ; 004cf3fe | DAT_01cd0c44
    INC EBX                             ; 004cf404
    ADD ESP,0xc                         ; 004cf405
    MOV dword ptr [0x01cd0c44],EBX      ; 004cf408 | DAT_01cd0c44
    JMP 0x004cea00                      ; 004cf40e
        ;   XREF to: 004cea00 (UNCONDITIONAL_JUMP)  ; LAB_004cea00
    MOV dword ptr [0x01cc9ba8],EBX      ; 004cf413 | DAT_01cc9ba8
        ;   Label: LAB_004cf413
    MOV dword ptr [0x01cc9ba0],EBX      ; 004cf419 | DAT_01cc9ba0
    MOV dword ptr [0x01cc9ba4],EBX      ; 004cf41f | DAT_01cc9ba4
    JMP 0x004cee26                      ; 004cf425
        ;   XREF to: 004cee26 (UNCONDITIONAL_JUMP)  ; LAB_004cee26

