; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_init_FUN_00503e20(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4bc6
;
; Referenced Globals:
;   TerminatedCString s_netlog_txt_005ca480
;   TerminatedCString s_USERNAME_005ca48b
;   TerminatedCString s_COMPUTERNAME_005ca494
;   TerminatedCString s_MyComputer_005ca4a1
;   undefined4 s_yComputer_005ca4a1+1
;   undefined4 s_Computer_005ca4a1+2
;   undefined4 s_omputer_005ca4a1+3
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da648c
;   undefined4 DAT_01dc2690
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
;   crt_env.c_getenv_FUN_005a5ec0
;   crt_unknown.c_FUN_005a54b0
;   support_trisock.cpp_FUN_00571ea0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00503e20
        ;   Label: core_netgame.cpp_CNetGame_init_FUN_00503e20
    PUSH EDI                            ; 00503e21
    PUSH 0x5ca480                       ; 00503e22 | = "netlog.txt"
    CALL crt_unknown.c_FUN_005a54b0     ; 00503e27
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a54b0(char * filename)
    MOV EDX,0x1                         ; 00503e2c
    ADD ESP,0x4                         ; 00503e31
    MOV dword ptr [0x01da6478],EDX      ; 00503e34 | DAT_01da6478
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00503e3a
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00503e3f
    MOV ESI,0x12                        ; 00503e41
    SAR EDX,0x1f                        ; 00503e46
    IDIV ESI                            ; 00503e49
    MOV [0x01da6474],EAX                ; 00503e4b | DAT_01da6474
    CALL support_trisock.cpp_FUN_00571ea0 ; 00503e50
        ;   XREF to: 00571ea0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00571ea0()
    PUSH 0x5ca48b                       ; 00503e55 | = "USERNAME"
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 00503e5a
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    ADD ESP,0x4                         ; 00503e5f
    MOV ESI,EAX                         ; 00503e62
    TEST EAX,EAX                        ; 00503e64
    JZ 0x00503eb1                       ; 00503e66
        ;   XREF to: 00503eb1 (CONDITIONAL_JUMP)  ; LAB_00503eb1
    TEST ESI,ESI                        ; 00503e68
        ;   Label: LAB_00503e68
    JNZ 0x00503e71                      ; 00503e6a
        ;   XREF to: 00503e71 (CONDITIONAL_JUMP)  ; LAB_00503e71
    MOV ESI,0x5ca4a1                    ; 00503e6c | = "MyComputer"
    MOV EDI,dword ptr [ESP + 0xc]       ; 00503e71
        ;   Label: LAB_00503e71
    ADD EDI,0x8                         ; 00503e75
    XOR ECX,ECX                         ; 00503e78
    PUSH EDI                            ; 00503e7a
    MOV AL,byte ptr [ESI]               ; 00503e7b | = "MyComputer" | s_Computer_005ca4a1+2
        ;   Label: LAB_00503e7b
    MOV byte ptr [EDI],AL               ; 00503e7d
    CMP AL,0x0                          ; 00503e7f
    JZ 0x00503e93                       ; 00503e81
        ;   XREF to: 00503e93 (CONDITIONAL_JUMP)  ; LAB_00503e93
    MOV AL,byte ptr [ESI + 0x1]         ; 00503e83 | s_yComputer_005ca4a1+1 | s_omputer_005ca4a1+3
    ADD ESI,0x2                         ; 00503e86
    MOV byte ptr [EDI + 0x1],AL         ; 00503e89
    ADD EDI,0x2                         ; 00503e8c
    CMP AL,0x0                          ; 00503e8f
    JNZ 0x00503e7b                      ; 00503e91
        ;   XREF to: 00503e7b (CONDITIONAL_JUMP)  ; LAB_00503e7b
    POP EDI                             ; 00503e93
        ;   Label: LAB_00503e93
    PUSH ECX                            ; 00503e94
    MOV ESI,dword ptr [ESP + 0x10]      ; 00503e95
    PUSH ESI                            ; 00503e99
    MOV dword ptr [0x01da648c],ECX      ; 00503e9a | DAT_01da648c
    MOV dword ptr [0x01dc2690],ECX      ; 00503ea0 | DAT_01dc2690
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 00503ea6
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 00503eab
    POP EDI                             ; 00503eae
    POP ESI                             ; 00503eaf
    RET                                 ; 00503eb0
    PUSH 0x5ca494                       ; 00503eb1 | = "COMPUTERNAME"
        ;   Label: LAB_00503eb1
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 00503eb6
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    ADD ESP,0x4                         ; 00503ebb
    MOV ESI,EAX                         ; 00503ebe
    JMP 0x00503e68                      ; 00503ec0
        ;   XREF to: 00503e68 (UNCONDITIONAL_JUMP)  ; LAB_00503e68

