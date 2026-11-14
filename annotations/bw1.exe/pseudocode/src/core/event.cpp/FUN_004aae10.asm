; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004aae10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aae10
        ;   Label: core_event.cpp_FUN_004aae10
    PUSH ESI                            ; 004aae11
    PUSH EDI                            ; 004aae12
    PUSH EBP                            ; 004aae13
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aae14
    MOV ESI,dword ptr [ESP + 0x18]      ; 004aae18
    TEST ESI,ESI                        ; 004aae1c
    JL 0x004aaead                       ; 004aae1e
        ;   XREF to: 004aaead (CONDITIONAL_JUMP)  ; LAB_004aaead
    CMP ESI,dword ptr [EBX]             ; 004aae24
    JGE 0x004aaead                      ; 004aae26
        ;   XREF to: 004aaead (CONDITIONAL_JUMP)  ; LAB_004aaead
    MOV EBP,dword ptr [EBX]             ; 004aae2c
        ;   Label: LAB_004aae2c
    DEC EBP                             ; 004aae2e
    MOV EDX,EBP                         ; 004aae2f
    SUB EDX,ESI                         ; 004aae31
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aae33
    SUB EAX,EDX                         ; 004aae3a
    LEA ECX,[EBX + 0x4]                 ; 004aae3c
    SHL EAX,0x3                         ; 004aae3f
    MOV dword ptr [EBX],EBP             ; 004aae42
    ADD EAX,EDX                         ; 004aae44
    LEA EDX,[ESI + 0x1]                 ; 004aae46
    SHL EAX,0x2                         ; 004aae49
    LEA EDI,[EDX*0x4 + 0x0]             ; 004aae4c
    PUSH EAX                            ; 004aae53
    SUB EDI,EDX                         ; 004aae54
    LEA EBP,[ESI*0x4 + 0x0]             ; 004aae56
    SHL EDI,0x3                         ; 004aae5d
    SUB EBP,ESI                         ; 004aae60
    ADD EDI,EDX                         ; 004aae62
    SHL EBP,0x3                         ; 004aae64
    SHL EDI,0x2                         ; 004aae67
    ADD EBP,ESI                         ; 004aae6a
    LEA EAX,[ECX + EDI*0x1]             ; 004aae6c
    SHL EBP,0x2                         ; 004aae6f
    PUSH EAX                            ; 004aae72
    ADD ECX,EBP                         ; 004aae73
    PUSH ECX                            ; 004aae75
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004aae76
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 004aae7b
    SUB EDX,ESI                         ; 004aae7d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aae7f
    SUB EAX,EDX                         ; 004aae86
    SHL EAX,0x3                         ; 004aae88
    ADD EAX,EDX                         ; 004aae8b
    ADD ESP,0xc                         ; 004aae8d
    SHL EAX,0x2                         ; 004aae90
    ADD EBX,0x1f8                       ; 004aae93
    PUSH EAX                            ; 004aae99
    ADD EDI,EBX                         ; 004aae9a
    PUSH EDI                            ; 004aae9c
    ADD EBX,EBP                         ; 004aae9d
    PUSH EBX                            ; 004aae9f
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004aaea0
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aaea5
    POP EBP                             ; 004aaea8
    POP EDI                             ; 004aaea9
    POP ESI                             ; 004aaeaa
    POP EBX                             ; 004aaeab
    RET                                 ; 004aaeac
    MOV ECX,0x5df053                    ; 004aaead
        ;   Label: LAB_004aaead
    MOV EDI,0x1046                      ; 004aaeb2
    PUSH 0x5df065                       ; 004aaeb7
    MOV dword ptr [0x01d1d400],ECX      ; 004aaebc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004aaec2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004aaec8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004aaecd
    JMP 0x004aae2c                      ; 004aaed0
        ;   XREF to: 004aae2c (UNCONDITIONAL_JUMP)  ; LAB_004aae2c

