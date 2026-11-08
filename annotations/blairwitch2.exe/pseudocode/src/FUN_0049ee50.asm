; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ee50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ee50
        ;   Label: FUN_0049ee50
    PUSH EDX                            ; 0049ee54
    CALL FUN_00510dd0                   ; 0049ee55
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049ee5a
    MOV dword ptr [EAX + 0x3c],0x5f65b4 ; 0049ee5d
    RET                                 ; 0049ee64

