; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7580(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7580
        ;   Label: FUN_004b7580
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7582
    PUSH EDX                            ; 004b7586
    CALL FUN_00532150                   ; 004b7587
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b758c
    RET                                 ; 004b758f

