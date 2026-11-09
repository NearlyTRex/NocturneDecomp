; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005accf0(int param_1)
;
;
; XREF[1]:
;   crt_stdio.c_ftell_FUN_005a5d00 at 005a5d15
;
; Called Functions:
;   crt_unknown.c_FUN_005a93b0
;   crt_unknown.c_FUN_005a9bc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005accf0
        ;   Label: crt_unknown.c_FUN_005accf0
    TEST EAX,EAX                        ; 005accf4
    JNZ 0x005acd00                      ; 005accf6
        ;   XREF to: 005acd00 (CONDITIONAL_JUMP)  ; LAB_005acd00
    CALL crt_unknown.c_FUN_005a93b0     ; 005accf8
        ;   XREF to: 005a93b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a93b0()
    XOR EAX,EAX                         ; 005accfd
    RET                                 ; 005accff
    PUSH EAX                            ; 005acd00
        ;   Label: LAB_005acd00
    CALL crt_unknown.c_FUN_005a9bc0     ; 005acd01
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005acd06
    RET                                 ; 005acd09

