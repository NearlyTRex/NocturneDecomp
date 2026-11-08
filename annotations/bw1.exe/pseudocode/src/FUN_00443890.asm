; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443890(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00442ba0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443890
        ;   Label: FUN_00443890
    PUSH EDX                            ; 00443894
    CALL FUN_00442ba0                   ; 00443895
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442ba0()
    ADD ESP,0x4                         ; 0044389a
    MOV dword ptr [EAX],0x5fd9e4        ; 0044389d
    RET                                 ; 004438a3

