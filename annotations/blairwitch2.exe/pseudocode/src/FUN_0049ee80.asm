; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ee80(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ee80
        ;   Label: FUN_0049ee80
    PUSH EDX                            ; 0049ee84
    CALL FUN_00510dd0                   ; 0049ee85
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049ee8a
    MOV dword ptr [EAX + 0x3c],0x5f65d4 ; 0049ee8d
    RET                                 ; 0049ee94

