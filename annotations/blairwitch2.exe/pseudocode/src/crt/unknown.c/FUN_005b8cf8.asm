; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_005b8cf8(undefined4 *param_1,ulong param_2)
;
;
; XREF[1]:
;   crt_memory.c_realloc_FUN_005b8ce0 at 005b8ceb
;
; Called Functions:
;   crt_unknown.c_FUN_005b86b0
;   crt_unknown.c_FUN_005becf0
;   crt_unknown.c_FUN_005beed4
;   crt_unknown.c_InternalHeapAlloc_FUN_005b8590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8cf8
        ;   Label: crt_unknown.c_FUN_005b8cf8
    PUSH ESI                            ; 005b8cf9
    PUSH EDI                            ; 005b8cfa
    PUSH EBP                            ; 005b8cfb
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8cfc
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b8d00
    TEST EBX,EBX                        ; 005b8d04
    JNZ 0x005b8d16                      ; 005b8d06
        ;   XREF to: 005b8d16 (CONDITIONAL_JUMP)  ; LAB_005b8d16
    PUSH EDI                            ; 005b8d08
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005b8590 ; 005b8d09
        ;   XREF to: 005b8590 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005b8590(ulong size)
    ADD ESP,0x4                         ; 005b8d0e
    POP EBP                             ; 005b8d11
    POP EDI                             ; 005b8d12
    POP ESI                             ; 005b8d13
    POP EBX                             ; 005b8d14
    RET                                 ; 005b8d15
    TEST EDI,EDI                        ; 005b8d16
        ;   Label: LAB_005b8d16
    JNZ 0x005b8d2a                      ; 005b8d18
        ;   XREF to: 005b8d2a (CONDITIONAL_JUMP)  ; LAB_005b8d2a
    PUSH EBX                            ; 005b8d1a
    CALL crt_unknown.c_FUN_005b86b0     ; 005b8d1b
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86b0()
    ADD ESP,0x4                         ; 005b8d20
    XOR EAX,EAX                         ; 005b8d23
    POP EBP                             ; 005b8d25
    POP EDI                             ; 005b8d26
    POP ESI                             ; 005b8d27
    POP EBX                             ; 005b8d28
    RET                                 ; 005b8d29
    PUSH EBX                            ; 005b8d2a
        ;   Label: LAB_005b8d2a
    CALL crt_unknown.c_FUN_005becf0     ; 005b8d2b
        ;   XREF to: 005becf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005becf0()
    ADD ESP,0x4                         ; 005b8d30
    PUSH EDI                            ; 005b8d33
    PUSH EBX                            ; 005b8d34
    MOV ESI,EAX                         ; 005b8d35
    CALL crt_unknown.c_FUN_005beed4     ; 005b8d37
        ;   XREF to: 005beed4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005beed4()
    ADD ESP,0x8                         ; 005b8d3c
    MOV EBP,EAX                         ; 005b8d3f
    TEST EAX,EAX                        ; 005b8d41
    JNZ 0x005b8d85                      ; 005b8d43
        ;   XREF to: 005b8d85 (CONDITIONAL_JUMP)  ; LAB_005b8d85
    PUSH EDI                            ; 005b8d45
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005b8590 ; 005b8d46
        ;   XREF to: 005b8590 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005b8590(ulong size)
    ADD ESP,0x4                         ; 005b8d4b
    MOV EBP,EAX                         ; 005b8d4e
    TEST EAX,EAX                        ; 005b8d50
    JZ 0x005b8d7b                       ; 005b8d52
        ;   XREF to: 005b8d7b (CONDITIONAL_JUMP)  ; LAB_005b8d7b
    MOV ECX,ESI                         ; 005b8d54
    MOV EDI,EAX                         ; 005b8d56
    MOV ESI,EBX                         ; 005b8d58
    PUSH ES                             ; 005b8d5a
    MOV AX,DS                           ; 005b8d5b
    MOV ES,AX                           ; 005b8d5d
    PUSH EDI                            ; 005b8d5f
    MOV EAX,ECX                         ; 005b8d60
    SHR ECX,0x2                         ; 005b8d62
    MOVSD.REP ES:EDI,ESI                ; 005b8d65
    MOV CL,AL                           ; 005b8d67
    AND CL,0x3                          ; 005b8d69
    MOVSB.REP ES:EDI,ESI                ; 005b8d6c
    POP EDI                             ; 005b8d6e
    POP ES                              ; 005b8d6f
    PUSH EBX                            ; 005b8d70
    CALL crt_unknown.c_FUN_005b86b0     ; 005b8d71
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86b0()
    ADD ESP,0x4                         ; 005b8d76
    JMP 0x005b8d85                      ; 005b8d79
        ;   XREF to: 005b8d85 (UNCONDITIONAL_JUMP)  ; LAB_005b8d85
    PUSH ESI                            ; 005b8d7b
        ;   Label: LAB_005b8d7b
    PUSH EBX                            ; 005b8d7c
    CALL crt_unknown.c_FUN_005beed4     ; 005b8d7d
        ;   XREF to: 005beed4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005beed4()
    ADD ESP,0x8                         ; 005b8d82
    MOV EAX,EBP                         ; 005b8d85
        ;   Label: LAB_005b8d85
    POP EBP                             ; 005b8d87
    POP EDI                             ; 005b8d88
    POP ESI                             ; 005b8d89
    POP EBX                             ; 005b8d8a
    RET                                 ; 005b8d8b

