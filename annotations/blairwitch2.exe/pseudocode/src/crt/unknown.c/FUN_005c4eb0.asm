; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4eb0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c4f74 at 005c4f7f
;
; Called Functions:
;   crt_unknown.c_FUN_005c4e44
;   crt_unknown.c_processSignal_FUN_005c50b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4eb0
        ;   Label: crt_unknown.c_FUN_005c4eb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c4eb1
    TEST EAX,EAX                        ; 005c4eb5
    JBE 0x005c4ec0                      ; 005c4eb7
        ;   XREF to: 005c4ec0 (CONDITIONAL_JUMP)  ; LAB_005c4ec0
    CMP EAX,0x1                         ; 005c4eb9
    JZ 0x005c4edc                       ; 005c4ebc
        ;   XREF to: 005c4edc (CONDITIONAL_JUMP)  ; LAB_005c4edc
    JMP 0x005c4f00                      ; 005c4ebe
        ;   XREF to: 005c4f00 (UNCONDITIONAL_JUMP)  ; LAB_005c4f00
    PUSH 0x4                            ; 005c4ec0
        ;   Label: LAB_005c4ec0
    CALL crt_unknown.c_FUN_005c4e44     ; 005c4ec2
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4e44()
    ADD ESP,0x4                         ; 005c4ec7
    MOV EBX,EAX                         ; 005c4eca
    TEST EAX,EAX                        ; 005c4ecc
    JZ 0x005c4f0b                       ; 005c4ece
        ;   XREF to: 005c4f0b (CONDITIONAL_JUMP)  ; LAB_005c4f0b
    PUSH 0x4                            ; 005c4ed0
    CALL crt_unknown.c_processSignal_FUN_005c50b8 ; 005c4ed2
        ;   XREF to: 005c50b8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005c50b8(int signal_number)
    ADD ESP,0x4                         ; 005c4ed7
    JMP 0x005c4ef6                      ; 005c4eda
        ;   XREF to: 005c4ef6 (UNCONDITIONAL_JUMP)  ; LAB_005c4ef6
    PUSH 0x7                            ; 005c4edc
        ;   Label: LAB_005c4edc
    CALL crt_unknown.c_FUN_005c4e44     ; 005c4ede
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4e44()
    ADD ESP,0x4                         ; 005c4ee3
    MOV EBX,EAX                         ; 005c4ee6
    TEST EAX,EAX                        ; 005c4ee8
    JZ 0x005c4f0b                       ; 005c4eea
        ;   XREF to: 005c4f0b (CONDITIONAL_JUMP)  ; LAB_005c4f0b
    PUSH 0x7                            ; 005c4eec
    CALL crt_unknown.c_processSignal_FUN_005c50b8 ; 005c4eee
        ;   XREF to: 005c50b8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005c50b8(int signal_number)
    ADD ESP,0x4                         ; 005c4ef3
    CMP EBX,0x2                         ; 005c4ef6
        ;   Label: LAB_005c4ef6
    JZ 0x005c4f00                       ; 005c4ef9
        ;   XREF to: 005c4f00 (CONDITIONAL_JUMP)  ; LAB_005c4f00
    CMP EBX,0x3                         ; 005c4efb
    JNZ 0x005c4f06                      ; 005c4efe
        ;   XREF to: 005c4f06 (CONDITIONAL_JUMP)  ; LAB_005c4f06
    XOR EAX,EAX                         ; 005c4f00
        ;   Label: LAB_005c4f00
    POP EBX                             ; 005c4f02
    RET 0x4                             ; 005c4f03
    MOV EAX,0x1                         ; 005c4f06
        ;   Label: LAB_005c4f06
    POP EBX                             ; 005c4f0b
        ;   Label: LAB_005c4f0b
    RET 0x4                             ; 005c4f0c

