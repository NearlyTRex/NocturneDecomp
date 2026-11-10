; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cd1b0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cd274 at 005cd27f
;
; Called Functions:
;   crt_unknown.c_FUN_005cd144
;   crt_unknown.c_processSignal_FUN_005cd3b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd1b0
        ;   Label: crt_unknown.c_FUN_005cd1b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cd1b1
    TEST EAX,EAX                        ; 005cd1b5
    JBE 0x005cd1c0                      ; 005cd1b7
        ;   XREF to: 005cd1c0 (CONDITIONAL_JUMP)  ; LAB_005cd1c0
    CMP EAX,0x1                         ; 005cd1b9
    JZ 0x005cd1dc                       ; 005cd1bc
        ;   XREF to: 005cd1dc (CONDITIONAL_JUMP)  ; LAB_005cd1dc
    JMP 0x005cd200                      ; 005cd1be
        ;   XREF to: 005cd200 (UNCONDITIONAL_JUMP)  ; LAB_005cd200
    PUSH 0x4                            ; 005cd1c0
        ;   Label: LAB_005cd1c0
    CALL crt_unknown.c_FUN_005cd144     ; 005cd1c2
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd144()
    ADD ESP,0x4                         ; 005cd1c7
    MOV EBX,EAX                         ; 005cd1ca
    TEST EAX,EAX                        ; 005cd1cc
    JZ 0x005cd20b                       ; 005cd1ce
        ;   XREF to: 005cd20b (CONDITIONAL_JUMP)  ; LAB_005cd20b
    PUSH 0x4                            ; 005cd1d0
    CALL crt_unknown.c_processSignal_FUN_005cd3b8 ; 005cd1d2
        ;   XREF to: 005cd3b8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005cd3b8(int signal_number)
    ADD ESP,0x4                         ; 005cd1d7
    JMP 0x005cd1f6                      ; 005cd1da
        ;   XREF to: 005cd1f6 (UNCONDITIONAL_JUMP)  ; LAB_005cd1f6
    PUSH 0x7                            ; 005cd1dc
        ;   Label: LAB_005cd1dc
    CALL crt_unknown.c_FUN_005cd144     ; 005cd1de
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd144()
    ADD ESP,0x4                         ; 005cd1e3
    MOV EBX,EAX                         ; 005cd1e6
    TEST EAX,EAX                        ; 005cd1e8
    JZ 0x005cd20b                       ; 005cd1ea
        ;   XREF to: 005cd20b (CONDITIONAL_JUMP)  ; LAB_005cd20b
    PUSH 0x7                            ; 005cd1ec
    CALL crt_unknown.c_processSignal_FUN_005cd3b8 ; 005cd1ee
        ;   XREF to: 005cd3b8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005cd3b8(int signal_number)
    ADD ESP,0x4                         ; 005cd1f3
    CMP EBX,0x2                         ; 005cd1f6
        ;   Label: LAB_005cd1f6
    JZ 0x005cd200                       ; 005cd1f9
        ;   XREF to: 005cd200 (CONDITIONAL_JUMP)  ; LAB_005cd200
    CMP EBX,0x3                         ; 005cd1fb
    JNZ 0x005cd206                      ; 005cd1fe
        ;   XREF to: 005cd206 (CONDITIONAL_JUMP)  ; LAB_005cd206
    XOR EAX,EAX                         ; 005cd200
        ;   Label: LAB_005cd200
    POP EBX                             ; 005cd202
    RET 0x4                             ; 005cd203
    MOV EAX,0x1                         ; 005cd206
        ;   Label: LAB_005cd206
    POP EBX                             ; 005cd20b
        ;   Label: LAB_005cd20b
    RET 0x4                             ; 005cd20c

