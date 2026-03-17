; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void)
;
;
; XREF[65]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044314c
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be3bf
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3fea
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dbb71
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508786
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005074f2
;   core_main.c_showPromoScreen_FUN_00508340 at 00508514
;   core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 at 00510b86
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 005132ac
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 005245ed
;   ... and 55 more
;
; Referenced Globals:
;   int[20] g_InputBuffer
;   int g_InputReadIndex
;   int g_InputWriteIndex
;   int g_InputDisabled
;
; Called Functions:
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2e90
        ;   Label: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
    PUSH EDI                            ; 005f2e91
    PUSH EBP                            ; 005f2e92
    MOV EAX,[0x03f96c18]                ; 005f2e93 | g_InputReadIndex
    MOV EDX,dword ptr [0x03f96c1c]      ; 005f2e98 | g_InputWriteIndex
    XOR EBX,EBX                         ; 005f2e9e
    CMP EAX,EDX                         ; 005f2ea0
    JNZ 0x005f2ebf                      ; 005f2ea2
        ;   XREF to: 005f2ebf (CONDITIONAL_JUMP)  ; LAB_005f2ebf
    CMP dword ptr [0x03f9846c],0x0      ; 005f2ea4 | g_InputDisabled
        ;   Label: LAB_005f2ea4
    JNZ 0x005f2ebf                      ; 005f2eab
        ;   XREF to: 005f2ebf (CONDITIONAL_JUMP)  ; LAB_005f2ebf
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005f2ead
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,[0x03f96c18]                ; 005f2eb2 | g_InputReadIndex
    CMP EAX,dword ptr [0x03f96c1c]      ; 005f2eb7 | g_InputWriteIndex
    JZ 0x005f2ea4                       ; 005f2ebd
        ;   XREF to: 005f2ea4 (CONDITIONAL_JUMP)  ; LAB_005f2ea4
    MOV EDI,dword ptr [0x03f96c1c]      ; 005f2ebf | g_InputWriteIndex
        ;   Label: LAB_005f2ebf
    MOV EAX,[0x03f96c18]                ; 005f2ec5 | g_InputReadIndex
    CMP EAX,EDI                         ; 005f2eca
    JZ 0x005f2ee3                       ; 005f2ecc
        ;   XREF to: 005f2ee3 (CONDITIONAL_JUMP)  ; LAB_005f2ee3
    LEA EBP,[EAX + 0x1]                 ; 005f2ece
    MOV EBX,dword ptr [EAX*0x4 + 0x3f96bc8] ; 005f2ed1 | g_InputBuffer
    MOV dword ptr [0x03f96c18],EBP      ; 005f2ed8 | g_InputReadIndex
    CMP EBP,0x14                        ; 005f2ede
    JGE 0x005f2ee9                      ; 005f2ee1
        ;   XREF to: 005f2ee9 (CONDITIONAL_JUMP)  ; LAB_005f2ee9
    MOV EAX,EBX                         ; 005f2ee3
        ;   Label: LAB_005f2ee3
    POP EBP                             ; 005f2ee5
    POP EDI                             ; 005f2ee6
    POP EBX                             ; 005f2ee7
    RET                                 ; 005f2ee8
    XOR EDX,EDX                         ; 005f2ee9
        ;   Label: LAB_005f2ee9
    MOV dword ptr [0x03f96c18],EDX      ; 005f2eeb | g_InputReadIndex
    MOV EAX,EBX                         ; 005f2ef1
    POP EBP                             ; 005f2ef3
    POP EDI                             ; 005f2ef4
    POP EBX                             ; 005f2ef5
    RET                                 ; 005f2ef6

