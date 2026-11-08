; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7750(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7750
        ;   Label: FUN_004b7750
    PUSH EDX                            ; 004b7754
    CALL FUN_00532130                   ; 004b7755
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b775a
    MOV dword ptr [EAX + 0x3c],0x600084 ; 004b775d
    RET                                 ; 004b7764

