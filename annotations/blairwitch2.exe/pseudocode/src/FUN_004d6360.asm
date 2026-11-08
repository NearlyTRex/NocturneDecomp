; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6360(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6360
        ;   Label: FUN_004d6360
    PUSH EDX                            ; 004d6364
    CALL FUN_004254b0                   ; 004d6365
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254b0()
    ADD ESP,0x4                         ; 004d636a
    RET                                 ; 004d636d

