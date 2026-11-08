; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049eee0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049eee0
        ;   Label: FUN_0049eee0
    PUSH EDX                            ; 0049eee4
    CALL FUN_00510dd0                   ; 0049eee5
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049eeea
    MOV dword ptr [EAX + 0x3c],0x5f6614 ; 0049eeed
    RET                                 ; 0049eef4

