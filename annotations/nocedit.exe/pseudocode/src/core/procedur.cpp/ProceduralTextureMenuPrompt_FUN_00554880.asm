; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_procedur_cpp_ProceduralTextureMenuPrompt_FUN_00554880(void)
;
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507a26
;
; Referenced Globals:
;   TerminatedCString s_Procedural_texture_menu_00640a38
;   TerminatedCString s_s_1_Water_00640a50
;   TerminatedCString s_Well_what_s_it_gonna_be_00640a59
;
; Called Functions:
;   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554880
        ;   Label: core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880
    PUSH ESI                            ; 00554881
    PUSH EDI                            ; 00554882
    MOV ESI,dword ptr [ESP + 0x10]      ; 00554883
    XOR EDI,EDI                         ; 00554887
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00554889
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00554889
    PUSH EDI                            ; 0055488e
    PUSH EDI                            ; 0055488f
    PUSH 0x640a38                       ; 00554890 | = "Procedural texture menu"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00554895
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0055489a
    PUSH 0x16                           ; 0055489d
    PUSH EDI                            ; 0055489f
    PUSH 0x640a50                       ; 005548a0 | = "1. Water"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005548a5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 005548aa
    PUSH 0x2c                           ; 005548ad
    PUSH EDI                            ; 005548af
    PUSH 0x640a59                       ; 005548b0 | = "Well, what's it gonna be?"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005548b5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 005548ba
    XOR EBX,EBX                         ; 005548bd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005548bf
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005548c4
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 005548c9
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV BL,AL                           ; 005548ce
    CMP EBX,0x31                        ; 005548d0
    JZ 0x005548e3                       ; 005548d3
        ;   XREF to: 005548e3 (CONDITIONAL_JUMP)  ; LAB_005548e3
    CMP EBX,0x1b                        ; 005548d5
    JNZ 0x00554889                      ; 005548d8
        ;   XREF to: 00554889 (CONDITIONAL_JUMP)  ; LAB_00554889
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005548da
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    POP EDI                             ; 005548df
    POP ESI                             ; 005548e0
    POP EBX                             ; 005548e1
    RET                                 ; 005548e2
    PUSH ESI                            ; 005548e3
        ;   Label: LAB_005548e3
    CALL core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 ; 005548e4
        ;   XREF to: 005542b0 (UNCONDITIONAL_CALL)  ; undefined core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0()
    ADD ESP,0x4                         ; 005548e9
    CMP EBX,0x1b                        ; 005548ec
    JNZ 0x00554889                      ; 005548ef
        ;   XREF to: 00554889 (CONDITIONAL_JUMP)  ; LAB_00554889
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005548f1
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    POP EDI                             ; 005548f6
    POP ESI                             ; 005548f7
    POP EBX                             ; 005548f8
    RET                                 ; 005548f9

