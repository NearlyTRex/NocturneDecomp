; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004cf440(int param_1)
;
;
; XREF[8]:
;   core_colonel.cpp_CColonel_process_FUN_00435830 at 00435cd5
;   core_doc.cpp_FUN_00453250 at 00453b26
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004ae968
;   core_haystack.cpp_CHaystack_process_FUN_004cc990 at 004cce67
;   core_hero.cpp_CHero_doHeroAction_FUN_004d03b0 at 004d04b1
;   core_icepick.cpp_CIcePick_process_FUN_004d4c50 at 004d524c
;   core_stranger.cpp_FUN_005656f0 at 00565d97
;   core_svetlana.cpp_CSvetlana_process_FUN_00570510 at 00570ad1
;
; Referenced Globals:
;   undefined4 s_CHero_toggleLeverNow_005d9ca3+1
;   TerminatedCString s_current_motion_is_s_005d9cbb
;   TerminatedCString s_toggling_lever_s_005d9cd3
;   TerminatedCString s_but_no_lever_set_005d9ce8
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_lever.cpp_CLever_activate_FUN_004e20e0
;   core_motion.cpp_FUN_005035c0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf440
        ;   Label: core_hero.cpp_FUN_004cf440
    PUSH ESI                            ; 004cf441
    PUSH EDI                            ; 004cf442
    PUSH EBP                            ; 004cf443
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cf444
    PUSH 0x5d9ca4                       ; 004cf448 | s_CHero_toggleLeverNow_005d9ca3+1
    MOV EDX,dword ptr [0x00609ed0]      ; 004cf44d | g_CConsolePtr
    PUSH EDX                            ; 004cf453 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004cf454
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004cf459
    LEA EAX,[EBX + 0x2b4]               ; 004cf45c
    PUSH EAX                            ; 004cf462
    CALL core_motion.cpp_FUN_005035c0   ; 004cf463
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004cf468
    PUSH EAX                            ; 004cf46b
    PUSH 0x5d9cbb                       ; 004cf46c | = "  current motion is %s\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004cf471 | g_CConsolePtr
    PUSH ECX                            ; 004cf477 | g_CConsoleInstance
    XOR ESI,ESI                         ; 004cf478
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004cf47a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    MOV EDI,dword ptr [EBX + 0x25610]   ; 004cf47f
    ADD ESP,0xc                         ; 004cf485
    TEST EDI,EDI                        ; 004cf488
    JZ 0x004cf4c2                       ; 004cf48a
        ;   XREF to: 004cf4c2 (CONDITIONAL_JUMP)  ; LAB_004cf4c2
    PUSH EDI                            ; 004cf48c
    PUSH 0x5d9cd3                       ; 004cf48d | = "  toggling lever %s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 004cf492 | g_CConsolePtr
    PUSH EDX                            ; 004cf498 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004cf499
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004cf49e
    MOV ECX,dword ptr [EBX + 0x25610]   ; 004cf4a1
    PUSH ECX                            ; 004cf4a7
    CALL core_lever.cpp_CLever_activate_FUN_004e20e0 ; 004cf4a8
        ;   XREF to: 004e20e0 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_CLever_activate_FUN_004e20e0(CLever * this_ptr)
    ADD ESP,0x4                         ; 004cf4ad
    MOV dword ptr [EBX + 0x25610],ESI   ; 004cf4b0
    MOV ESI,0x1                         ; 004cf4b6
    MOV EAX,ESI                         ; 004cf4bb
    POP EBP                             ; 004cf4bd
    POP EDI                             ; 004cf4be
    POP ESI                             ; 004cf4bf
    POP EBX                             ; 004cf4c0
    RET                                 ; 004cf4c1
    PUSH 0x5d9ce8                       ; 004cf4c2 | = "  but no lever set!\n"
        ;   Label: LAB_004cf4c2
    MOV EBP,dword ptr [0x00609ed0]      ; 004cf4c7 | g_CConsolePtr
    PUSH EBP                            ; 004cf4cd | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004cf4ce
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004cf4d3
    MOV EAX,ESI                         ; 004cf4d6
    POP EBP                             ; 004cf4d8
    POP EDI                             ; 004cf4d9
    POP ESI                             ; 004cf4da
    POP EBX                             ; 004cf4db
    RET                                 ; 004cf4dc

