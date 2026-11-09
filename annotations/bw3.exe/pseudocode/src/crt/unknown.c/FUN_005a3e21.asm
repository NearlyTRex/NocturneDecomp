; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a3e21(void)
;
;
; Referenced Globals:
;   TerminatedCString s_pure_virtual_function_ca_005da6b8
;   undefined2 DAT_00607b0c
;
; Called Functions:
;   crt_unknown.c_FUN_005a6144
;
; *****************************************************************************

section .text

    CMP word ptr [0x00607b0c],0x0       ; 005a3e21 | DAT_00607b0c
        ;   Label: crt_unknown.c_FUN_005a3e21
    JZ 0x005a3e2c                       ; 005a3e29
        ;   XREF to: 005a3e2c (CONDITIONAL_JUMP)  ; LAB_005a3e2c
    RET                                 ; 005a3e2b
    PUSH EBX                            ; 005a3e2c
        ;   Label: LAB_005a3e2c
    PUSH 0x1                            ; 005a3e2d
    MOV EBX,0x1                         ; 005a3e2f
    PUSH 0x5da6b8                       ; 005a3e34 | = "pure virtual function called!"
    MOV word ptr [0x00607b0c],BX        ; 005a3e39 | DAT_00607b0c
    CALL crt_unknown.c_FUN_005a6144     ; 005a3e40
        ;   XREF to: 005a6144 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6144()
    ADD ESP,0x8                         ; 005a3e45
    POP EBX                             ; 005a3e48
    RET                                 ; 005a3e49

