; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6350(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6350
        ;   Label: FUN_004d6350
    PUSH EDX                            ; 004d6354
    CALL FUN_004ce590                   ; 004d6355
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce590()
    ADD ESP,0x4                         ; 004d635a
    RET                                 ; 004d635d

