; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0030(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004e0240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0030
        ;   Label: FUN_004e0030
    PUSH EDX                            ; 004e0034
    CALL FUN_004e0240                   ; 004e0035
        ;   XREF to: 004e0240 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0240()
    ADD ESP,0x4                         ; 004e003a
    RET                                 ; 004e003d

