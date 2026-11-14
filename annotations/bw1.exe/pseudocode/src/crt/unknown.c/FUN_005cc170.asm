; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cc170(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8094 at 005c80ba
;
; Called Functions:
;   crt_unknown.c_FUN_005c9080
;   crt_unknown.c_FUN_005c90c0
;   crt_unknown.c_FUN_005cc560
;   crt_unknown.c_FUN_005cdb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc170
        ;   Label: crt_unknown.c_FUN_005cc170
    PUSH ESI                            ; 005cc171
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cc172
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cc176
    PUSH EBX                            ; 005cc17a
        ;   Label: LAB_005cc17a
    CALL crt_unknown.c_FUN_005cc560     ; 005cc17b
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc560()
    ADD ESP,0x4                         ; 005cc180
    TEST EAX,EAX                        ; 005cc183
    JNZ 0x005cc1b0                      ; 005cc185
        ;   XREF to: 005cc1b0 (CONDITIONAL_JUMP)  ; LAB_005cc1b0
    PUSH EBX                            ; 005cc187
    CALL crt_unknown.c_FUN_005c9080     ; 005cc188
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9080()
    ADD ESP,0x4                         ; 005cc18d
    PUSH EAX                            ; 005cc190
    PUSH ESI                            ; 005cc191
    CALL crt_unknown.c_FUN_005cdb10     ; 005cc192
        ;   XREF to: 005cdb10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cdb10()
    ADD ESP,0x8                         ; 005cc197
    TEST EAX,EAX                        ; 005cc19a
    JZ 0x005cc1a3                       ; 005cc19c
        ;   XREF to: 005cc1a3 (CONDITIONAL_JUMP)  ; LAB_005cc1a3
    MOV EAX,EBX                         ; 005cc19e
    POP ESI                             ; 005cc1a0
    POP EBX                             ; 005cc1a1
    RET                                 ; 005cc1a2
    PUSH EBX                            ; 005cc1a3
        ;   Label: LAB_005cc1a3
    CALL crt_unknown.c_FUN_005c90c0     ; 005cc1a4
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    ADD ESP,0x4                         ; 005cc1a9
    MOV EBX,EAX                         ; 005cc1ac
    JMP 0x005cc17a                      ; 005cc1ae
        ;   XREF to: 005cc17a (UNCONDITIONAL_JUMP)  ; LAB_005cc17a
    XOR EAX,EAX                         ; 005cc1b0
        ;   Label: LAB_005cc1b0
    POP ESI                             ; 005cc1b2
    POP EBX                             ; 005cc1b3
    RET                                 ; 005cc1b4

