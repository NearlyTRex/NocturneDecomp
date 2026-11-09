; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0b20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061f4d8]      ; 005c0b20 | DAT_0061f4d8
        ;   Label: crt_unknown.c_FUN_005c0b20
    TEST EDX,EDX                        ; 005c0b26
    JZ 0x005c0b3b                       ; 005c0b28
        ;   XREF to: 005c0b3b (CONDITIONAL_JUMP)  ; LAB_005c0b3b
    PUSH EDX                            ; 005c0b2a
    CALL crt_unknown.c_FUN_005b86a0     ; 005c0b2b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR ECX,ECX                         ; 005c0b30
    ADD ESP,0x4                         ; 005c0b32
    MOV dword ptr [0x0061f4d8],ECX      ; 005c0b35 | DAT_0061f4d8
    RET                                 ; 005c0b3b
        ;   Label: LAB_005c0b3b

