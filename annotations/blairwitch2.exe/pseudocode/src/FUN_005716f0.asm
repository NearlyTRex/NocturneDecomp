; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005716f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005716f0
        ;   Label: FUN_005716f0
    PUSH EDX                            ; 005716f4
    CALL FUN_004ce590                   ; 005716f5
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce590()
    ADD ESP,0x4                         ; 005716fa
    RET                                 ; 005716fd

