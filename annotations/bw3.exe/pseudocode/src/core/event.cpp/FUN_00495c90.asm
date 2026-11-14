; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_00495c90(void)
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

    PUSH EBX                            ; 00495c90
        ;   Label: core_event.cpp_FUN_00495c90
    PUSH ESI                            ; 00495c91
    PUSH EDI                            ; 00495c92
    PUSH EBP                            ; 00495c93
    MOV EBX,dword ptr [ESP + 0x14]      ; 00495c94
    MOV ESI,dword ptr [ESP + 0x18]      ; 00495c98
    TEST ESI,ESI                        ; 00495c9c
    JL 0x00495d2d                       ; 00495c9e
        ;   XREF to: 00495d2d (CONDITIONAL_JUMP)  ; LAB_00495d2d
    CMP ESI,dword ptr [EBX]             ; 00495ca4
    JGE 0x00495d2d                      ; 00495ca6
        ;   XREF to: 00495d2d (CONDITIONAL_JUMP)  ; LAB_00495d2d
    MOV EBP,dword ptr [EBX]             ; 00495cac
        ;   Label: LAB_00495cac
    DEC EBP                             ; 00495cae
    MOV EDX,EBP                         ; 00495caf
    SUB EDX,ESI                         ; 00495cb1
    LEA EAX,[EDX*0x4 + 0x0]             ; 00495cb3
    SUB EAX,EDX                         ; 00495cba
    LEA ECX,[EBX + 0x4]                 ; 00495cbc
    SHL EAX,0x3                         ; 00495cbf
    MOV dword ptr [EBX],EBP             ; 00495cc2
    ADD EAX,EDX                         ; 00495cc4
    LEA EDX,[ESI + 0x1]                 ; 00495cc6
    SHL EAX,0x2                         ; 00495cc9
    LEA EDI,[EDX*0x4 + 0x0]             ; 00495ccc
    PUSH EAX                            ; 00495cd3
    SUB EDI,EDX                         ; 00495cd4
    LEA EBP,[ESI*0x4 + 0x0]             ; 00495cd6
    SHL EDI,0x3                         ; 00495cdd
    SUB EBP,ESI                         ; 00495ce0
    ADD EDI,EDX                         ; 00495ce2
    SHL EBP,0x3                         ; 00495ce4
    SHL EDI,0x2                         ; 00495ce7
    ADD EBP,ESI                         ; 00495cea
    LEA EAX,[ECX + EDI*0x1]             ; 00495cec
    SHL EBP,0x2                         ; 00495cef
    PUSH EAX                            ; 00495cf2
    ADD ECX,EBP                         ; 00495cf3
    PUSH ECX                            ; 00495cf5
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00495cf6
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 00495cfb
    SUB EDX,ESI                         ; 00495cfd
    LEA EAX,[EDX*0x4 + 0x0]             ; 00495cff
    SUB EAX,EDX                         ; 00495d06
    SHL EAX,0x3                         ; 00495d08
    ADD EAX,EDX                         ; 00495d0b
    ADD ESP,0xc                         ; 00495d0d
    SHL EAX,0x2                         ; 00495d10
    ADD EBX,0x1f8                       ; 00495d13
    PUSH EAX                            ; 00495d19
    ADD EDI,EBX                         ; 00495d1a
    PUSH EDI                            ; 00495d1c
    ADD EBX,EBP                         ; 00495d1d
    PUSH EBX                            ; 00495d1f
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00495d20
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00495d25
    POP EBP                             ; 00495d28
    POP EDI                             ; 00495d29
    POP ESI                             ; 00495d2a
    POP EBX                             ; 00495d2b
    RET                                 ; 00495d2c
    MOV ECX,0x5c038f                    ; 00495d2d
        ;   Label: LAB_00495d2d
    MOV EDI,0x10f8                      ; 00495d32
    PUSH 0x5c03a1                       ; 00495d37
    MOV dword ptr [0x01d71de0],ECX      ; 00495d3c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00495d42 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00495d48
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00495d4d
    JMP 0x00495cac                      ; 00495d50
        ;   XREF to: 00495cac (UNCONDITIONAL_JUMP)  ; LAB_00495cac

