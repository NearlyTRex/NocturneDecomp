; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c9e80(int param_1)
;
;
; XREF[1]:
;   crt_stdio.c_ftell_FUN_005c2e90 at 005c2ea5
;
; Called Functions:
;   crt_unknown.c_FUN_005c6540
;   crt_unknown.c_FUN_005c6d50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c9e80
        ;   Label: crt_unknown.c_FUN_005c9e80
    TEST EAX,EAX                        ; 005c9e84
    JNZ 0x005c9e90                      ; 005c9e86
        ;   XREF to: 005c9e90 (CONDITIONAL_JUMP)  ; LAB_005c9e90
    CALL crt_unknown.c_FUN_005c6540     ; 005c9e88
        ;   XREF to: 005c6540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6540()
    XOR EAX,EAX                         ; 005c9e8d
    RET                                 ; 005c9e8f
    PUSH EAX                            ; 005c9e90
        ;   Label: LAB_005c9e90
    CALL crt_unknown.c_FUN_005c6d50     ; 005c9e91
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c9e96
    RET                                 ; 005c9e99

