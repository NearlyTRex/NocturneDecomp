; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_00495b50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495b50
        ;   Label: core_event.cpp_FUN_00495b50
    PUSH ESI                            ; 00495b51
    PUSH EDI                            ; 00495b52
    PUSH EBP                            ; 00495b53
    SUB ESP,0x8                         ; 00495b54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00495b57
    MOV ESI,dword ptr [ESP + 0x20]      ; 00495b5b
    TEST ESI,ESI                        ; 00495b5f
    JL 0x00495b67                       ; 00495b61
        ;   XREF to: 00495b67 (CONDITIONAL_JUMP)  ; LAB_00495b67
    CMP ESI,dword ptr [EBX]             ; 00495b63
    JLE 0x00495b8a                      ; 00495b65
        ;   XREF to: 00495b8a (CONDITIONAL_JUMP)  ; LAB_00495b8a
    MOV ECX,0x5c032b                    ; 00495b67
        ;   Label: LAB_00495b67
    MOV EDI,0x10e2                      ; 00495b6c
    PUSH 0x5c033d                       ; 00495b71
    MOV dword ptr [0x01d71de0],ECX      ; 00495b76 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00495b7c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00495b82
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00495b87
    CMP dword ptr [EBX],0x5             ; 00495b8a
        ;   Label: LAB_00495b8a
    JGE 0x00495c64                      ; 00495b8d
        ;   XREF to: 00495c64 (CONDITIONAL_JUMP)  ; LAB_00495c64
    MOV EDX,dword ptr [EBX]             ; 00495b93
        ;   Label: LAB_00495b93
    SUB EDX,ESI                         ; 00495b95
    LEA EAX,[EDX*0x4 + 0x0]             ; 00495b97
    SUB EAX,EDX                         ; 00495b9e
    SHL EAX,0x3                         ; 00495ba0
    ADD EAX,EDX                         ; 00495ba3
    SHL EAX,0x2                         ; 00495ba5
    PUSH EAX                            ; 00495ba8
    LEA EAX,[ESI*0x4 + 0x0]             ; 00495ba9
    SUB EAX,ESI                         ; 00495bb0
    SHL EAX,0x3                         ; 00495bb2
    ADD EAX,ESI                         ; 00495bb5
    LEA EBP,[EBX + 0x4]                 ; 00495bb7
    SHL EAX,0x2                         ; 00495bba
    LEA EDX,[ESI + 0x1]                 ; 00495bbd
    MOV dword ptr [ESP + 0x4],EAX       ; 00495bc0
    LEA EDI,[EAX + EBP*0x1]             ; 00495bc4
    LEA EAX,[EDX*0x4 + 0x0]             ; 00495bc7
    SUB EAX,EDX                         ; 00495bce
    SHL EAX,0x3                         ; 00495bd0
    ADD EAX,EDX                         ; 00495bd3
    SHL EAX,0x2                         ; 00495bd5
    PUSH EDI                            ; 00495bd8
    ADD EBP,EAX                         ; 00495bd9
    PUSH EBP                            ; 00495bdb
    MOV dword ptr [ESP + 0x10],EAX      ; 00495bdc
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00495be0
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 00495be5
    SUB EDX,ESI                         ; 00495be7
    LEA EAX,[EDX*0x4 + 0x0]             ; 00495be9
    SUB EAX,EDX                         ; 00495bf0
    SHL EAX,0x3                         ; 00495bf2
    ADD EAX,EDX                         ; 00495bf5
    ADD ESP,0xc                         ; 00495bf7
    SHL EAX,0x2                         ; 00495bfa
    MOV EBP,dword ptr [ESP]             ; 00495bfd
    PUSH EAX                            ; 00495c00
    LEA EAX,[EBX + 0x1f8]               ; 00495c01
    ADD EBP,EAX                         ; 00495c07
    MOV ESI,dword ptr [ESP + 0x8]       ; 00495c09
    PUSH EBP                            ; 00495c0d
    ADD EAX,ESI                         ; 00495c0e
    PUSH EAX                            ; 00495c10
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00495c11
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX]             ; 00495c16
    ADD ESP,0xc                         ; 00495c18
    INC EAX                             ; 00495c1b
    MOV ESI,dword ptr [ESP + 0x24]      ; 00495c1c
    MOV dword ptr [EBX],EAX             ; 00495c20
    PUSH EDI                            ; 00495c22
    MOV AL,byte ptr [ESI]               ; 00495c23
        ;   Label: LAB_00495c23
    MOV byte ptr [EDI],AL               ; 00495c25
    CMP AL,0x0                          ; 00495c27
    JZ 0x00495c3b                       ; 00495c29
        ;   XREF to: 00495c3b (CONDITIONAL_JUMP)  ; LAB_00495c3b
    MOV AL,byte ptr [ESI + 0x1]         ; 00495c2b
    ADD ESI,0x2                         ; 00495c2e
    MOV byte ptr [EDI + 0x1],AL         ; 00495c31
    ADD EDI,0x2                         ; 00495c34
    CMP AL,0x0                          ; 00495c37
    JNZ 0x00495c23                      ; 00495c39
        ;   XREF to: 00495c23 (CONDITIONAL_JUMP)  ; LAB_00495c23
    POP EDI                             ; 00495c3b
        ;   Label: LAB_00495c3b
    MOV ESI,dword ptr [ESP + 0x28]      ; 00495c3c
    MOV EDI,EBP                         ; 00495c40
    PUSH EDI                            ; 00495c42
    MOV AL,byte ptr [ESI]               ; 00495c43
        ;   Label: LAB_00495c43
    MOV byte ptr [EDI],AL               ; 00495c45
    CMP AL,0x0                          ; 00495c47
    JZ 0x00495c5b                       ; 00495c49
        ;   XREF to: 00495c5b (CONDITIONAL_JUMP)  ; LAB_00495c5b
    MOV AL,byte ptr [ESI + 0x1]         ; 00495c4b
    ADD ESI,0x2                         ; 00495c4e
    MOV byte ptr [EDI + 0x1],AL         ; 00495c51
    ADD EDI,0x2                         ; 00495c54
    CMP AL,0x0                          ; 00495c57
    JNZ 0x00495c43                      ; 00495c59
        ;   XREF to: 00495c43 (CONDITIONAL_JUMP)  ; LAB_00495c43
    POP EDI                             ; 00495c5b
        ;   Label: LAB_00495c5b
    ADD ESP,0x8                         ; 00495c5c
    POP EBP                             ; 00495c5f
    POP EDI                             ; 00495c60
    POP ESI                             ; 00495c61
    POP EBX                             ; 00495c62
    RET                                 ; 00495c63
    MOV EAX,0x5c035f                    ; 00495c64
        ;   Label: LAB_00495c64
    MOV EDX,0x10e3                      ; 00495c69
    PUSH 0x5c0371                       ; 00495c6e
    MOV [0x01d71de0],EAX                ; 00495c73 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00495c78 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00495c7e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00495c83
    JMP 0x00495b93                      ; 00495c86
        ;   XREF to: 00495b93 (UNCONDITIONAL_JUMP)  ; LAB_00495b93

