; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca1b0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca1b0
        ;   Label: FUN_004ca1b0
    ADD EAX,0x2b4                       ; 004ca1b4
    PUSH EAX                            ; 004ca1b9
    CALL FUN_0044fd00                   ; 004ca1ba
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004ca1bf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ca1c2
    PUSH EDX                            ; 004ca1c6
    CALL FUN_00408a80                   ; 004ca1c7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004ca1cc
    RET                                 ; 004ca1cf

