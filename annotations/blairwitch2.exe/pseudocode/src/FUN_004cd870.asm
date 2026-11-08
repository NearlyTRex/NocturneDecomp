; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cd870(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd870
        ;   Label: FUN_004cd870
    PUSH EDX                            ; 004cd874
    CALL FUN_004254b0                   ; 004cd875
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254b0()
    ADD ESP,0x4                         ; 004cd87a
    RET                                 ; 004cd87d

