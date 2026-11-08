; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ee20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ee20
        ;   Label: FUN_0049ee20
    PUSH EDX                            ; 0049ee24
    CALL FUN_00510dd0                   ; 0049ee25
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049ee2a
    MOV dword ptr [EAX + 0x3c],0x5f6594 ; 0049ee2d
    RET                                 ; 0049ee34

