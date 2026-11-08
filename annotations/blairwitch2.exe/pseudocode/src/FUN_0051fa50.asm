; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051fa50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051fa50
        ;   Label: FUN_0051fa50
    PUSH EDX                            ; 0051fa54
    CALL FUN_004ce590                   ; 0051fa55
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce590()
    ADD ESP,0x4                         ; 0051fa5a
    RET                                 ; 0051fa5d

