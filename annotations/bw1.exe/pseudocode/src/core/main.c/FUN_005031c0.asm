; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_005031c0(void)
;
;
; XREF[1]:
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050d01e
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_R_Debug_editor_005e7085
;   TerminatedCString s_s_1_Play_a_mission_005e70a3
;   TerminatedCString s_Z_Display_memory_usage_i_005e70b5
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;
; Called Functions:
;   core_game.cpp_FUN_004d7250
;   crt_ctype.c_toupper_FUN_005c12b0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;   wincore_winrun.cpp_getNextKeypress_FUN_005b2510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005031c0
        ;   Label: core_main.c_FUN_005031c0
    PUSH ESI                            ; 005031c1
    PUSH EDI                            ; 005031c2
    SUB ESP,0x100                       ; 005031c3
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 005031c9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR ESI,ESI                         ; 005031ce
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 005031d0
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_005031d0
    PUSH ESI                            ; 005031d5
    PUSH ESI                            ; 005031d6
    PUSH 0x5e7085                       ; 005031d7 | = "Nocturne(R) Debug/editor Menu"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005031dc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005031e1
    PUSH 0x16                           ; 005031e4
    PUSH ESI                            ; 005031e6
    PUSH 0x5e70a3                       ; 005031e7 | = "1. Play a mission"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005031ec
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005031f1
    PUSH 0xbb                           ; 005031f4
    PUSH ESI                            ; 005031f9
    PUSH 0x5e70b5                       ; 005031fa | = "Z. Display memory usage info"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005031ff
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00503204
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00503207
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050320c
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 00503211
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
    AND EAX,0xff                        ; 00503216
    PUSH EAX                            ; 0050321b
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0050321c
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 00503221
    MOV EBX,EAX                         ; 00503224
    CMP EAX,0x34                        ; 00503226
    JNC 0x0050327c                      ; 00503229
        ;   XREF to: 0050327c (CONDITIONAL_JUMP)  ; LAB_0050327c
    CMP EAX,0x31                        ; 0050322b
    JNC 0x0050328c                      ; 0050322e
        ;   XREF to: 0050328c (CONDITIONAL_JUMP)  ; LAB_0050328c
    CMP EBX,0x1b                        ; 00503230
        ;   Label: LAB_00503230
    JNZ 0x005031d0                      ; 00503233
        ;   XREF to: 005031d0 (CONDITIONAL_JUMP)  ; LAB_005031d0
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00503235
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    ADD ESP,0x100                       ; 0050323a
    POP EDI                             ; 00503240
    POP ESI                             ; 00503241
    POP EBX                             ; 00503242
    RET                                 ; 00503243
    PUSH ESI                            ; 00503244
        ;   Label: LAB_00503244
    MOV EDI,dword ptr [0x0061d95c]      ; 00503245 | g_CGamePtr
    PUSH EDI                            ; 0050324b | g_CGameInstance
    CALL core_game.cpp_FUN_004d7250     ; 0050324c
        ;   XREF to: 004d7250 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d7250()
    ADD ESP,0x8                         ; 00503251
    JMP 0x00503230                      ; 00503254
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230
    MOV EAX,ESP                         ; 00503256
        ;   Label: LAB_00503256
    PUSH EAX                            ; 00503258
    MOV EDX,dword ptr [0x0061abc0]      ; 00503259 | g_CEditorToolsPtr
    PUSH EDX                            ; 0050325f
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40 ; 00503260
        ;   XREF to: 00498e40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 00503265
    MOV EAX,ESP                         ; 00503268
    PUSH EAX                            ; 0050326a
    MOV ECX,dword ptr [0x0061abc0]      ; 0050326b | g_CEditorToolsPtr
    PUSH ECX                            ; 00503271
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 00503272
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00503277
    JMP 0x00503230                      ; 0050327a
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230
    JBE 0x00503230                      ; 0050327c
        ;   XREF to: 00503230 (CONDITIONAL_JUMP)  ; LAB_00503230
        ;   Label: LAB_0050327c
    CMP EAX,0x41                        ; 0050327e
    JC 0x00503230                       ; 00503281
        ;   XREF to: 00503230 (CONDITIONAL_JUMP)  ; LAB_00503230
    JBE 0x00503230                      ; 00503283
        ;   XREF to: 00503230 (CONDITIONAL_JUMP)  ; LAB_00503230
    CMP EAX,0x5a                        ; 00503285
    JZ 0x00503256                       ; 00503288
        ;   XREF to: 00503256 (CONDITIONAL_JUMP)  ; LAB_00503256
    JMP 0x00503230                      ; 0050328a
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230
    JBE 0x00503244                      ; 0050328c
        ;   XREF to: 00503244 (CONDITIONAL_JUMP)  ; LAB_00503244
        ;   Label: LAB_0050328c
    JMP 0x00503230                      ; 0050328e
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230

