; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b77b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b77b0
        ;   Label: FUN_004b77b0
    PUSH EDX                            ; 004b77b4
    CALL FUN_00532130                   ; 004b77b5
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b77ba
    MOV dword ptr [EAX + 0x3c],0x6000c4 ; 004b77bd
    RET                                 ; 004b77c4

