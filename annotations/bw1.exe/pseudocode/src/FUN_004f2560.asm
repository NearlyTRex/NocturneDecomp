; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2560(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2560
        ;   Label: FUN_004f2560
    PUSH EDX                            ; 004f2564
    CALL FUN_0042f240                   ; 004f2565
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 004f256a
    RET                                 ; 004f256d

