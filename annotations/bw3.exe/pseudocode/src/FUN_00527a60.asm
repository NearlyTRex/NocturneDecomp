; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00527a60(int param_1)
;
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00527a60
        ;   Label: FUN_00527a60
    ADD EAX,0x158                       ; 00527a64
    PUSH EAX                            ; 00527a69
    CALL FUN_004fc070                   ; 00527a6a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00527a6f
    ADD ESP,0x4                         ; 00527a72
    CMP EAX,0x92                        ; 00527a75
    SETZ AL                             ; 00527a7a
    AND EAX,0xff                        ; 00527a7d
    RET                                 ; 00527a82

