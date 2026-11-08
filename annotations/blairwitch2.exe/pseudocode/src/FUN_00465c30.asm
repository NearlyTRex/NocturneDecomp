; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00465c30(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465c30
        ;   Label: FUN_00465c30
    PUSH 0x5f22b0                       ; 00465c34
    PUSH 0x4                            ; 00465c39
    ADD EAX,0x20                        ; 00465c3b
    PUSH EAX                            ; 00465c3e
    CALL FUN_005b7f5f                   ; 00465c3f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00465c44
    SUB EAX,0x20                        ; 00465c47
    RET                                 ; 00465c4a

