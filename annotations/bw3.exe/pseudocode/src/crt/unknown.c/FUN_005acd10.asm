; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005acd10(byte *param_1,byte *param_2,int param_3)
;
;
; XREF[1]:
;   crt_env.c_getenv_FUN_005a5ec0 at 005a5eef
;
; Called Functions:
;   crt_unknown.c_FUN_005aca00
;   unkafter_asgaya.cpp_FUN_005af2a0
;   unkafter_asgaya.cpp_FUN_005af6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acd10
        ;   Label: crt_unknown.c_FUN_005acd10
    PUSH ESI                            ; 005acd11
    PUSH EDI                            ; 005acd12
    PUSH EBP                            ; 005acd13
    MOV ESI,dword ptr [ESP + 0x14]      ; 005acd14
    MOV EBX,dword ptr [ESP + 0x18]      ; 005acd18
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005acd1c
    XOR EBP,EBP                         ; 005acd20
    TEST EDI,EDI                        ; 005acd22
    JBE 0x005acd6b                      ; 005acd24
        ;   XREF to: 005acd6b (CONDITIONAL_JUMP)  ; LAB_005acd6b
    PUSH ESI                            ; 005acd26
        ;   Label: LAB_005acd26
    CALL unkafter_asgaya.cpp_FUN_005af2a0 ; 005acd27
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005af2a0()
    ADD ESP,0x4                         ; 005acd2c
    TEST EAX,EAX                        ; 005acd2f
    JNZ 0x005acd6b                      ; 005acd31
        ;   XREF to: 005acd6b (CONDITIONAL_JUMP)  ; LAB_005acd6b
    PUSH EBX                            ; 005acd33
    CALL unkafter_asgaya.cpp_FUN_005af2a0 ; 005acd34
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005af2a0()
    ADD ESP,0x4                         ; 005acd39
    TEST EAX,EAX                        ; 005acd3c
    JNZ 0x005acd6b                      ; 005acd3e
        ;   XREF to: 005acd6b (CONDITIONAL_JUMP)  ; LAB_005acd6b
    PUSH EBX                            ; 005acd40
    PUSH ESI                            ; 005acd41
    CALL unkafter_asgaya.cpp_FUN_005af6a0 ; 005acd42
        ;   XREF to: 005af6a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005af6a0()
    ADD ESP,0x8                         ; 005acd47
    MOV EBP,EAX                         ; 005acd4a
    TEST EAX,EAX                        ; 005acd4c
    JNZ 0x005acd9b                      ; 005acd4e
        ;   XREF to: 005acd9b (CONDITIONAL_JUMP)  ; LAB_005acd9b
    PUSH ESI                            ; 005acd50
    CALL crt_unknown.c_FUN_005aca00     ; 005acd51
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005acd56
    PUSH EBX                            ; 005acd59
    DEC EDI                             ; 005acd5a
    MOV ESI,EAX                         ; 005acd5b
    CALL crt_unknown.c_FUN_005aca00     ; 005acd5d
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005acd62
    MOV EBX,EAX                         ; 005acd65
    TEST EDI,EDI                        ; 005acd67
    JA 0x005acd26                       ; 005acd69
        ;   XREF to: 005acd26 (CONDITIONAL_JUMP)  ; LAB_005acd26
    TEST EDI,EDI                        ; 005acd6b
        ;   Label: LAB_005acd6b
    JBE 0x005acd99                      ; 005acd6d
        ;   XREF to: 005acd99 (CONDITIONAL_JUMP)  ; LAB_005acd99
    PUSH ESI                            ; 005acd6f
    CALL unkafter_asgaya.cpp_FUN_005af2a0 ; 005acd70
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005af2a0()
    ADD ESP,0x4                         ; 005acd75
    TEST EAX,EAX                        ; 005acd78
    JNZ 0x005acd89                      ; 005acd7a
        ;   XREF to: 005acd89 (CONDITIONAL_JUMP)  ; LAB_005acd89
    PUSH EBX                            ; 005acd7c
    CALL unkafter_asgaya.cpp_FUN_005af2a0 ; 005acd7d
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005af2a0()
    ADD ESP,0x4                         ; 005acd82
    TEST EAX,EAX                        ; 005acd85
    JZ 0x005acd99                       ; 005acd87
        ;   XREF to: 005acd99 (CONDITIONAL_JUMP)  ; LAB_005acd99
    XOR EAX,EAX                         ; 005acd89
        ;   Label: LAB_005acd89
    MOVZX ESI,byte ptr [ESI]            ; 005acd8b
    MOV AL,byte ptr [EBX]               ; 005acd8e
    SUB ESI,EAX                         ; 005acd90
    MOV EAX,ESI                         ; 005acd92
    POP EBP                             ; 005acd94
    POP EDI                             ; 005acd95
    POP ESI                             ; 005acd96
    POP EBX                             ; 005acd97
    RET                                 ; 005acd98
    MOV EAX,EBP                         ; 005acd99
        ;   Label: LAB_005acd99
    POP EBP                             ; 005acd9b
        ;   Label: LAB_005acd9b
    POP EDI                             ; 005acd9c
    POP ESI                             ; 005acd9d
    POP EBX                             ; 005acd9e
    RET                                 ; 005acd9f

