; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004eb7f0(int param_1)
;
;
; XREF[7]:
;   core_doc.cpp_FUN_0046bde0 at 0046c83f
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c7901
;   core_haystack.cpp_CHaystack_process_FUN_004e9250 at 004e9727
;   core_hero.cpp_CHero_doHeroAction_FUN_004ec640 at 004ec741
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f144c
;   core_stranger.cpp_FUN_005881d0 at 00588877
;   core_svetlana.cpp_CSvetlana_process_FUN_00593150 at 00593711
;
; Referenced Globals:
;   TerminatedCString s_CHero_toggleLeverNow_005e486d
;   TerminatedCString s_current_motion_is_s_005e4884
;   TerminatedCString s_toggling_lever_s_005e489c
;   TerminatedCString s_but_no_lever_set_005e48b1
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_lever.cpp_CLever_activate_FUN_004ff570
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb7f0
        ;   Label: core_hero.cpp_FUN_004eb7f0
    PUSH ESI                            ; 004eb7f1
    PUSH EDI                            ; 004eb7f2
    PUSH EBP                            ; 004eb7f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004eb7f4
    PUSH 0x5e486d                       ; 004eb7f8 | = "CHero::toggleLeverNow\n"
    MOV EDX,dword ptr [0x00611100]      ; 004eb7fd | g_CConsolePtr
    PUSH EDX                            ; 004eb803 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004eb804
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 004eb809
    LEA EAX,[EBX + 0x158]               ; 004eb80c
    PUSH EAX                            ; 004eb812
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004eb813
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eb818
    PUSH EAX                            ; 004eb81b
    PUSH 0x5e4884                       ; 004eb81c | = "  current motion is %s\n"
    MOV ECX,dword ptr [0x00611100]      ; 004eb821 | g_CConsolePtr
    PUSH ECX                            ; 004eb827 | g_CConsoleInstance
    XOR ESI,ESI                         ; 004eb828
    CALL engine_console.cpp_FUN_00445430 ; 004eb82a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EDI,dword ptr [EBX + 0x1ff80]   ; 004eb82f
    ADD ESP,0xc                         ; 004eb835
    TEST EDI,EDI                        ; 004eb838
    JZ 0x004eb872                       ; 004eb83a
        ;   XREF to: 004eb872 (CONDITIONAL_JUMP)  ; LAB_004eb872
    PUSH EDI                            ; 004eb83c
    PUSH 0x5e489c                       ; 004eb83d | = "  toggling lever %s\n"
    MOV EDX,dword ptr [0x00611100]      ; 004eb842 | g_CConsolePtr
    PUSH EDX                            ; 004eb848 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004eb849
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004eb84e
    MOV ECX,dword ptr [EBX + 0x1ff80]   ; 004eb851
    PUSH ECX                            ; 004eb857
    CALL core_lever.cpp_CLever_activate_FUN_004ff570 ; 004eb858
        ;   XREF to: 004ff570 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_CLever_activate_FUN_004ff570(CLever * this_ptr)
    ADD ESP,0x4                         ; 004eb85d
    MOV dword ptr [EBX + 0x1ff80],ESI   ; 004eb860
    MOV ESI,0x1                         ; 004eb866
    MOV EAX,ESI                         ; 004eb86b
    POP EBP                             ; 004eb86d
    POP EDI                             ; 004eb86e
    POP ESI                             ; 004eb86f
    POP EBX                             ; 004eb870
    RET                                 ; 004eb871
    PUSH 0x5e48b1                       ; 004eb872 | = "  but no lever set!\n"
        ;   Label: LAB_004eb872
    MOV EBP,dword ptr [0x00611100]      ; 004eb877 | g_CConsolePtr
    PUSH EBP                            ; 004eb87d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004eb87e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 004eb883
    MOV EAX,ESI                         ; 004eb886
    POP EBP                             ; 004eb888
    POP EDI                             ; 004eb889
    POP ESI                             ; 004eb88a
    POP EBX                             ; 004eb88b
    RET                                 ; 004eb88c

