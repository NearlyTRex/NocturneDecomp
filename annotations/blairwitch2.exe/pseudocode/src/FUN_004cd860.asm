; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cd860(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd860
        ;   Label: FUN_004cd860
    PUSH EDX                            ; 004cd864
    CALL FUN_004ce590                   ; 004cd865
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce590()
    ADD ESP,0x4                         ; 004cd86a
    RET                                 ; 004cd86d

