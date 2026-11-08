; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c0b0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c0b0
        ;   Label: FUN_0059c0b0
    PUSH EDX                            ; 0059c0b4
    CALL FUN_00408a80                   ; 0059c0b5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 0059c0ba
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c0bd
    ADD EAX,0x2b4                       ; 0059c0c1
    PUSH EAX                            ; 0059c0c6
    CALL FUN_0044fd00                   ; 0059c0c7
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0059c0cc
    RET                                 ; 0059c0cf

