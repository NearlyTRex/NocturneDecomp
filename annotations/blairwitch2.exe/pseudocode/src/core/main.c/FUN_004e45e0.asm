; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_004e45e0(void)
;
;
; XREF[1]:
;   core_menu.cpp_FUN_004ee3f0 at 004ee774
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_R_Debug_editor_005dc13d
;   TerminatedCString s_s_1_Play_a_mission_005dc15b
;   TerminatedCString s_Z_Display_memory_usage_i_005dc16d
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;
; Called Functions:
;   core_game.cpp_FUN_004bc840
;   crt_ctype.c_toupper_FUN_005b8e40
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0
;   wincore_wddvmem.cpp_FUN_00589560
;   wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e45e0
        ;   Label: core_main.c_FUN_004e45e0
    PUSH ESI                            ; 004e45e1
    PUSH EDI                            ; 004e45e2
    SUB ESP,0x100                       ; 004e45e3
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004e45e9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR ESI,ESI                         ; 004e45ee
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004e45f0
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_004e45f0
    PUSH ESI                            ; 004e45f5
    PUSH ESI                            ; 004e45f6
    PUSH 0x5dc13d                       ; 004e45f7 | = "Nocturne(R) Debug/editor Menu"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004e45fc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e4601
    PUSH 0x16                           ; 004e4604
    PUSH ESI                            ; 004e4606
    PUSH 0x5dc15b                       ; 004e4607 | = "1. Play a mission"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004e460c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e4611
    PUSH 0xbb                           ; 004e4614
    PUSH ESI                            ; 004e4619
    PUSH 0x5dc16d                       ; 004e461a | = "Z. Display memory usage info"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004e461f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e4624
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004e4627
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004e462c
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_0058ead0 ; 004e4631
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_0058ead0()
    AND EAX,0xff                        ; 004e4636
    PUSH EAX                            ; 004e463b
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004e463c
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004e4641
    MOV EBX,EAX                         ; 004e4644
    CMP EAX,0x34                        ; 004e4646
    JNC 0x004e469c                      ; 004e4649
        ;   XREF to: 004e469c (CONDITIONAL_JUMP)  ; LAB_004e469c
    CMP EAX,0x31                        ; 004e464b
    JNC 0x004e46ac                      ; 004e464e
        ;   XREF to: 004e46ac (CONDITIONAL_JUMP)  ; LAB_004e46ac
    CMP EBX,0x1b                        ; 004e4650
        ;   Label: LAB_004e4650
    JNZ 0x004e45f0                      ; 004e4653
        ;   XREF to: 004e45f0 (CONDITIONAL_JUMP)  ; LAB_004e45f0
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004e4655
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    ADD ESP,0x100                       ; 004e465a
    POP EDI                             ; 004e4660
    POP ESI                             ; 004e4661
    POP EBX                             ; 004e4662
    RET                                 ; 004e4663
    PUSH ESI                            ; 004e4664
        ;   Label: LAB_004e4664
    MOV EDI,dword ptr [0x00616494]      ; 004e4665 | g_CGamePtr
    PUSH EDI                            ; 004e466b | g_CGameInstance
    CALL core_game.cpp_FUN_004bc840     ; 004e466c
        ;   XREF to: 004bc840 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bc840()
    ADD ESP,0x8                         ; 004e4671
    JMP 0x004e4650                      ; 004e4674
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650
    MOV EAX,ESP                         ; 004e4676
        ;   Label: LAB_004e4676
    PUSH EAX                            ; 004e4678
    MOV EDX,dword ptr [0x006138e0]      ; 004e4679 | g_CEditorToolsPtr
    PUSH EDX                            ; 004e467f
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0 ; 004e4680
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 004e4685
    MOV EAX,ESP                         ; 004e4688
    PUSH EAX                            ; 004e468a
    MOV ECX,dword ptr [0x006138e0]      ; 004e468b | g_CEditorToolsPtr
    PUSH ECX                            ; 004e4691
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 004e4692
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e4697
    JMP 0x004e4650                      ; 004e469a
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650
    JBE 0x004e4650                      ; 004e469c
        ;   XREF to: 004e4650 (CONDITIONAL_JUMP)  ; LAB_004e4650
        ;   Label: LAB_004e469c
    CMP EAX,0x41                        ; 004e469e
    JC 0x004e4650                       ; 004e46a1
        ;   XREF to: 004e4650 (CONDITIONAL_JUMP)  ; LAB_004e4650
    JBE 0x004e4650                      ; 004e46a3
        ;   XREF to: 004e4650 (CONDITIONAL_JUMP)  ; LAB_004e4650
    CMP EAX,0x5a                        ; 004e46a5
    JZ 0x004e4676                       ; 004e46a8
        ;   XREF to: 004e4676 (CONDITIONAL_JUMP)  ; LAB_004e4676
    JMP 0x004e4650                      ; 004e46aa
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650
    JBE 0x004e4664                      ; 004e46ac
        ;   XREF to: 004e4664 (CONDITIONAL_JUMP)  ; LAB_004e4664
        ;   Label: LAB_004e46ac
    JMP 0x004e4650                      ; 004e46ae
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650

