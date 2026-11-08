; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e7b20(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7b20
        ;   Label: FUN_004e7b20
    PUSH 0x5f5b70                       ; 004e7b24
    PUSH 0x2                            ; 004e7b29
    ADD EAX,0x3c                        ; 004e7b2b
    PUSH EAX                            ; 004e7b2e
    CALL FUN_005b7f5f                   ; 004e7b2f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004e7b34
    SUB EAX,0x3c                        ; 004e7b37
    RET                                 ; 004e7b3a

