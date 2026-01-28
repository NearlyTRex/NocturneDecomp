; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_DementedMissionEditorSomething_FUN_00537680(void)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a733
;
; Referenced Globals:
;   void* switchdataD_00537658 = 0053789c
;   TerminatedCString s_ON_0063b2f0
;   TerminatedCString s_OFF_0063b2f3
;   TerminatedCString s_Demented_R_Mission_edito_0063b8bf
;   TerminatedCString s_Current_mission_s_msn_0063b8e7
;   TerminatedCString s_No_mission_loaded_0063b8ff
;   undefined4 s_o_mission_loaded_0063b900
;   undefined4 s_mission_loaded_0063b901
;   undefined4 s_mission_loaded_0063b902
;   TerminatedCString s_s_1_Draw_sky_in_dynamic__0063b911
;   TerminatedCString s_s_2_Draw_water_in_dynami_0063b932
;   TerminatedCString s_s_3_Force_full_lighting__0063b955
;   TerminatedCString s_s_4_Disable_mouse_select_0063b97f
;   TerminatedCString s_s_5_Dynamic_render_mode__0063b9ab
;   TerminatedCString s_s_5_Dynamic_render_mode__0063b9ce
;   ... and 10 more
;
; Called Functions:
;   core_inivar.cpp_readIniData_FUN_004fbd90
;   core_inivar.cpp_writeIniData_FUN_004fc510
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537680
        ;   Label: core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680
    PUSH ESI                            ; 00537681
    PUSH EDI                            ; 00537682
    PUSH EBP                            ; 00537683
    SUB ESP,0x104                       ; 00537684
    MOV EBP,dword ptr [ESP + 0x118]     ; 0053768a
    CALL core_inivar.cpp_readIniData_FUN_004fbd90 ; 00537691
        ;   XREF to: 004fbd90 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_readIniData_FUN_004fbd90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00537696
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    LEA EAX,[EBP + 0x44]                ; 0053769b
    MOV dword ptr [ESP + 0x100],EAX     ; 0053769e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005376a5
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_005376a5
    PUSH 0x0                            ; 005376aa
    PUSH 0x0                            ; 005376ac
    PUSH 0x63b8bf                       ; 005376ae | = "Demented(R) Mission editor options menu"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005376b3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV AH,byte ptr [EBP + 0x44]        ; 005376b8
    ADD ESP,0xc                         ; 005376bb
    TEST AH,AH                          ; 005376be
    JNZ 0x005378c9                      ; 005376c0
        ;   XREF to: 005378c9 (CONDITIONAL_JUMP)  ; LAB_005378c9
    MOV ESI,0x63b8ff                    ; 005376c6 | = "No mission loaded"
    MOV EDI,ESP                         ; 005376cb
    PUSH EDI                            ; 005376cd
    MOV AL,byte ptr [ESI]               ; 005376ce | = "No mission loaded" | s_mission_loaded_0063b901
        ;   Label: LAB_005376ce
    MOV byte ptr [EDI],AL               ; 005376d0
    CMP AL,0x0                          ; 005376d2
    JZ 0x005376e6                       ; 005376d4
        ;   XREF to: 005376e6 (CONDITIONAL_JUMP)  ; LAB_005376e6
    MOV AL,byte ptr [ESI + 0x1]         ; 005376d6 | s_o_mission_loaded_0063b900 | s_mission_loaded_0063b902
    ADD ESI,0x2                         ; 005376d9
    MOV byte ptr [EDI + 0x1],AL         ; 005376dc
    ADD EDI,0x2                         ; 005376df
    CMP AL,0x0                          ; 005376e2
    JNZ 0x005376ce                      ; 005376e4
        ;   XREF to: 005376ce (CONDITIONAL_JUMP)  ; LAB_005376ce
    POP EDI                             ; 005376e6
        ;   Label: LAB_005376e6
    PUSH 0x16                           ; 005376e7
        ;   Label: LAB_005376e7
    PUSH 0x0                            ; 005376e9
    LEA EAX,[ESP + 0x8]                 ; 005376eb
    PUSH EAX                            ; 005376ef
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005376f0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x30]      ; 005376f5
    ADD ESP,0xc                         ; 005376f8
    TEST EAX,EAX                        ; 005376fb
    JZ 0x005378e8                       ; 005376fd
        ;   XREF to: 005378e8 (CONDITIONAL_JUMP)  ; LAB_005378e8
    MOV EAX,0x63b2f0                    ; 00537703 | = "ON"
    PUSH EAX                            ; 00537708 | = "ON" | s_OFF_0063b2f3
        ;   Label: LAB_00537708
    PUSH 0x63b911                       ; 00537709 | = "1. Draw sky in dynamic views: %s"
    LEA EAX,[ESP + 0x8]                 ; 0053770e
    PUSH EAX                            ; 00537712
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00537713
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00537718
    PUSH 0x2c                           ; 0053771b
    PUSH 0x0                            ; 0053771d
    LEA EAX,[ESP + 0x8]                 ; 0053771f
    PUSH EAX                            ; 00537723
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00537724
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x34]      ; 00537729
    ADD ESP,0xc                         ; 0053772c
    TEST EAX,EAX                        ; 0053772f
    JZ 0x005378f2                       ; 00537731
        ;   XREF to: 005378f2 (CONDITIONAL_JUMP)  ; LAB_005378f2
    MOV EAX,0x63b2f0                    ; 00537737 | = "ON"
    PUSH EAX                            ; 0053773c | = "ON" | s_OFF_0063b2f3
        ;   Label: LAB_0053773c
    PUSH 0x63b932                       ; 0053773d | = "2. Draw water in dynamic views: %s"
    LEA EAX,[ESP + 0x8]                 ; 00537742
    PUSH EAX                            ; 00537746
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00537747
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053774c
    PUSH 0x37                           ; 0053774f
    PUSH 0x0                            ; 00537751
    LEA EAX,[ESP + 0x8]                 ; 00537753
    PUSH EAX                            ; 00537757
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00537758
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x38]      ; 0053775d
    ADD ESP,0xc                         ; 00537760
    TEST EAX,EAX                        ; 00537763
    JZ 0x005378fc                       ; 00537765
        ;   XREF to: 005378fc (CONDITIONAL_JUMP)  ; LAB_005378fc
    MOV EAX,0x63b2f0                    ; 0053776b | = "ON"
    PUSH EAX                            ; 00537770 | = "ON" | s_OFF_0063b2f3
        ;   Label: LAB_00537770
    PUSH 0x63b955                       ; 00537771 | = "3. Force full lighting in static view..."
    LEA EAX,[ESP + 0x8]                 ; 00537776
    PUSH EAX                            ; 0053777a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053777b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00537780
    PUSH 0x42                           ; 00537783
    PUSH 0x0                            ; 00537785
    LEA EAX,[ESP + 0x8]                 ; 00537787
    PUSH EAX                            ; 0053778b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053778c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x02f7a020]                ; 00537791 | g_DisableMouseHitOnBarrier
    ADD ESP,0xc                         ; 00537796
    TEST EAX,EAX                        ; 00537799
    JZ 0x00537906                       ; 0053779b
        ;   XREF to: 00537906 (CONDITIONAL_JUMP)  ; LAB_00537906
    MOV EAX,0x63b2f0                    ; 005377a1 | = "ON"
    PUSH EAX                            ; 005377a6 | = "ON" | s_OFF_0063b2f3
        ;   Label: LAB_005377a6
    PUSH 0x63b97f                       ; 005377a7 | = "4. Disable mouse selection of CBarrie..."
    LEA EAX,[ESP + 0x8]                 ; 005377ac
    PUSH EAX                            ; 005377b0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005377b1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005377b6
    PUSH 0x4d                           ; 005377b9
    PUSH 0x0                            ; 005377bb
    LEA EAX,[ESP + 0x8]                 ; 005377bd
    PUSH EAX                            ; 005377c1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005377c2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x00680810]                ; 005377c7 | g_DynamicRenderMode
    ADD ESP,0xc                         ; 005377cc
    CMP EAX,0x2                         ; 005377cf
    JNC 0x0053792e                      ; 005377d2
        ;   XREF to: 0053792e (CONDITIONAL_JUMP)  ; LAB_0053792e
    PUSH 0x63b9ab                       ; 005377d8 | = "5. Dynamic render mode: flat shade"
        ;   Label: LAB_005377d8
    LEA EAX,[ESP + 0x4]                 ; 005377dd
    MOV ECX,0x1                         ; 005377e1
    PUSH EAX                            ; 005377e6
    MOV dword ptr [0x00680810],ECX      ; 005377e7 | g_DynamicRenderMode
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005377ed
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   Label: LAB_005377ed
    ADD ESP,0x8                         ; 005377f2
    PUSH 0x58                           ; 005377f5
    PUSH 0x0                            ; 005377f7
    LEA EAX,[ESP + 0x8]                 ; 005377f9
    PUSH EAX                            ; 005377fd
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005377fe
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x00680814]                ; 00537803 | g_ConfirmNewActorNames
    ADD ESP,0xc                         ; 00537808
    TEST EAX,EAX                        ; 0053780b
    JZ 0x0053793a                       ; 0053780d
        ;   XREF to: 0053793a (CONDITIONAL_JUMP)  ; LAB_0053793a
    MOV EAX,0x63b2f0                    ; 00537813 | = "ON"
    PUSH EAX                            ; 00537818 | = "ON" | s_OFF_0063b2f3
        ;   Label: LAB_00537818
    PUSH 0x63ba17                       ; 00537819 | = "6. Confirm new actor names: %s"
    LEA EAX,[ESP + 0x8]                 ; 0053781e
    PUSH EAX                            ; 00537822
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00537823
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00537828
    PUSH 0x63                           ; 0053782b
    PUSH 0x0                            ; 0053782d
    LEA EAX,[ESP + 0x8]                 ; 0053782f
    PUSH EAX                            ; 00537833
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00537834
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x40]      ; 00537839
    ADD ESP,0xc                         ; 0053783c
    CMP EAX,0x1                         ; 0053783f
    JNC 0x00537962                      ; 00537842
        ;   XREF to: 00537962 (CONDITIONAL_JUMP)  ; LAB_00537962
    PUSH 0x63ba36                       ; 00537848 | = "7. Show waypoint coverage: off"
        ;   Label: LAB_00537848
    LEA EAX,[ESP + 0x4]                 ; 0053784d
    PUSH EAX                            ; 00537851
    MOV dword ptr [EBP + 0x40],0x0      ; 00537852
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00537859
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   Label: LAB_00537859
    ADD ESP,0x8                         ; 0053785e
    PUSH 0x6e                           ; 00537861
    PUSH 0x0                            ; 00537863
    LEA EAX,[ESP + 0x8]                 ; 00537865
    PUSH EAX                            ; 00537869
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053786a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053786f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00537872
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00537877
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EBX,dword ptr [0x0067cf44]      ; 0053787c | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 00537882 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 00537883
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    MOV EDI,EAX                         ; 00537888
    SUB EAX,0x31                        ; 0053788a
    ADD ESP,0x4                         ; 0053788d
    CMP EAX,0x6                         ; 00537890
    JA 0x005378ab                       ; 00537893
        ;   XREF to: 005378ab (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x537658]  ; 00537895 | caseD_31 | caseD_32 | caseD_33
        ;   Label: switchD
    CMP dword ptr [EBP + 0x30],0x0      ; 0053789c
        ;   Label: caseD_31
    SETZ AL                             ; 005378a0
    AND EAX,0xff                        ; 005378a3
    MOV dword ptr [EBP + 0x30],EAX      ; 005378a8
    CMP EDI,0x1b                        ; 005378ab
        ;   Label: default
    JNZ 0x005376a5                      ; 005378ae
        ;   XREF to: 005376a5 (CONDITIONAL_JUMP)  ; LAB_005376a5
    CALL core_inivar.cpp_writeIniData_FUN_004fc510 ; 005378b4
        ;   XREF to: 004fc510 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_writeIniData_FUN_004fc510()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005378b9
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    ADD ESP,0x104                       ; 005378be
    POP EBP                             ; 005378c4
    POP EDI                             ; 005378c5
    POP ESI                             ; 005378c6
    POP EBX                             ; 005378c7
    RET                                 ; 005378c8
    MOV EDX,dword ptr [ESP + 0x100]     ; 005378c9
        ;   Label: LAB_005378c9
    PUSH EDX                            ; 005378d0
    PUSH 0x63b8e7                       ; 005378d1 | = "Current mission: %s.msn"
    LEA EAX,[ESP + 0x8]                 ; 005378d6
    PUSH EAX                            ; 005378da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005378db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005378e0
    JMP 0x005376e7                      ; 005378e3
        ;   XREF to: 005376e7 (UNCONDITIONAL_JUMP)  ; LAB_005376e7
    MOV EAX,0x63b2f3                    ; 005378e8 | = "OFF"
        ;   Label: LAB_005378e8
    JMP 0x00537708                      ; 005378ed
        ;   XREF to: 00537708 (UNCONDITIONAL_JUMP)  ; LAB_00537708
    MOV EAX,0x63b2f3                    ; 005378f2 | = "OFF"
        ;   Label: LAB_005378f2
    JMP 0x0053773c                      ; 005378f7
        ;   XREF to: 0053773c (UNCONDITIONAL_JUMP)  ; LAB_0053773c
    MOV EAX,0x63b2f3                    ; 005378fc | = "OFF"
        ;   Label: LAB_005378fc
    JMP 0x00537770                      ; 00537901
        ;   XREF to: 00537770 (UNCONDITIONAL_JUMP)  ; LAB_00537770
    MOV EAX,0x63b2f3                    ; 00537906 | = "OFF"
        ;   Label: LAB_00537906
    JMP 0x005377a6                      ; 0053790b
        ;   XREF to: 005377a6 (UNCONDITIONAL_JUMP)  ; LAB_005377a6
    PUSH 0x63b9ce                       ; 00537910 | = "5. Dynamic render mode: multi-color"
        ;   Label: LAB_00537910
    LEA EAX,[ESP + 0x4]                 ; 00537915
    PUSH EAX                            ; 00537919
    JMP 0x005377ed                      ; 0053791a
        ;   XREF to: 005377ed (UNCONDITIONAL_JUMP)  ; LAB_005377ed
    PUSH 0x63b9f2                       ; 0053791f | = "5. Dynamic render mode: ground types"
        ;   Label: LAB_0053791f
    LEA EAX,[ESP + 0x4]                 ; 00537924
    PUSH EAX                            ; 00537928
    JMP 0x005377ed                      ; 00537929
        ;   XREF to: 005377ed (UNCONDITIONAL_JUMP)  ; LAB_005377ed
    JBE 0x00537910                      ; 0053792e
        ;   XREF to: 00537910 (CONDITIONAL_JUMP)  ; LAB_00537910
        ;   Label: LAB_0053792e
    CMP EAX,0x3                         ; 00537930
    JZ 0x0053791f                       ; 00537933
        ;   XREF to: 0053791f (CONDITIONAL_JUMP)  ; LAB_0053791f
    JMP 0x005377d8                      ; 00537935
        ;   XREF to: 005377d8 (UNCONDITIONAL_JUMP)  ; LAB_005377d8
    MOV EAX,0x63b2f3                    ; 0053793a | = "OFF"
        ;   Label: LAB_0053793a
    JMP 0x00537818                      ; 0053793f
        ;   XREF to: 00537818 (UNCONDITIONAL_JUMP)  ; LAB_00537818
    PUSH 0x63ba55                       ; 00537944 | = "7. Show waypoint coverage: selected only"
        ;   Label: LAB_00537944
    LEA EAX,[ESP + 0x4]                 ; 00537949
    PUSH EAX                            ; 0053794d
    JMP 0x00537859                      ; 0053794e
        ;   XREF to: 00537859 (UNCONDITIONAL_JUMP)  ; LAB_00537859
    PUSH 0x63ba7e                       ; 00537953 | = "7. Show waypoint coverage: all"
        ;   Label: LAB_00537953
    LEA EAX,[ESP + 0x4]                 ; 00537958
    PUSH EAX                            ; 0053795c
    JMP 0x00537859                      ; 0053795d
        ;   XREF to: 00537859 (UNCONDITIONAL_JUMP)  ; LAB_00537859
    JBE 0x00537944                      ; 00537962
        ;   XREF to: 00537944 (CONDITIONAL_JUMP)  ; LAB_00537944
        ;   Label: LAB_00537962
    CMP EAX,0x2                         ; 00537964
    JZ 0x00537953                       ; 00537967
        ;   XREF to: 00537953 (CONDITIONAL_JUMP)  ; LAB_00537953
    JMP 0x00537848                      ; 00537969
        ;   XREF to: 00537848 (UNCONDITIONAL_JUMP)  ; LAB_00537848
    CMP dword ptr [EBP + 0x34],0x0      ; 0053796e
        ;   Label: caseD_32
    SETZ AL                             ; 00537972
    AND EAX,0xff                        ; 00537975
    MOV dword ptr [EBP + 0x34],EAX      ; 0053797a
    JMP 0x005378ab                      ; 0053797d
        ;   XREF to: 005378ab (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x38],0x0      ; 00537982
        ;   Label: caseD_33
    SETZ AL                             ; 00537986
    AND EAX,0xff                        ; 00537989
    MOV dword ptr [EBP + 0x38],EAX      ; 0053798e
    JMP 0x005378ab                      ; 00537991
        ;   XREF to: 005378ab (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [0x02f7a020],0x0      ; 00537996 | g_DisableMouseHitOnBarrier
        ;   Label: caseD_34
    SETZ AL                             ; 0053799d
    AND EAX,0xff                        ; 005379a0
    MOV [0x02f7a020],EAX                ; 005379a5 | g_DisableMouseHitOnBarrier
    JMP 0x005378ab                      ; 005379aa
        ;   XREF to: 005378ab (UNCONDITIONAL_JUMP)  ; default
    INC dword ptr [0x00680810]          ; 005379af | g_DynamicRenderMode
        ;   Label: caseD_35
    JMP 0x005378ab                      ; 005379b5
        ;   XREF to: 005378ab (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [0x00680814],0x0      ; 005379ba | g_ConfirmNewActorNames
        ;   Label: caseD_36
    SETZ AL                             ; 005379c1
    AND EAX,0xff                        ; 005379c4
    MOV [0x00680814],EAX                ; 005379c9 | g_ConfirmNewActorNames
    JMP 0x005378ab                      ; 005379ce
        ;   XREF to: 005378ab (UNCONDITIONAL_JUMP)  ; default
    INC dword ptr [EBP + 0x40]          ; 005379d3
        ;   Label: caseD_37
    JMP 0x005378ab                      ; 005379d6
        ;   XREF to: 005378ab (UNCONDITIONAL_JUMP)  ; default

