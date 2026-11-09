; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c10a1(void)
;
;
; Referenced Globals:
;   TerminatedCString s_pure_virtual_function_ca_005fa9fc
;   undefined2 DAT_00626768
;
; Called Functions:
;   crt_unknown.c_FUN_005c32d4
;
; *****************************************************************************

section .text

    CMP word ptr [0x00626768],0x0       ; 005c10a1 | DAT_00626768
        ;   Label: crt_unknown.c_FUN_005c10a1
    JZ 0x005c10ac                       ; 005c10a9
        ;   XREF to: 005c10ac (CONDITIONAL_JUMP)  ; LAB_005c10ac
    RET                                 ; 005c10ab
    PUSH EBX                            ; 005c10ac
        ;   Label: LAB_005c10ac
    PUSH 0x1                            ; 005c10ad
    MOV EBX,0x1                         ; 005c10af
    PUSH 0x5fa9fc                       ; 005c10b4 | = "pure virtual function called!"
    MOV word ptr [0x00626768],BX        ; 005c10b9 | DAT_00626768
    CALL crt_unknown.c_FUN_005c32d4     ; 005c10c0
        ;   XREF to: 005c32d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c32d4()
    ADD ESP,0x8                         ; 005c10c5
    POP EBX                             ; 005c10c8
    RET                                 ; 005c10c9

