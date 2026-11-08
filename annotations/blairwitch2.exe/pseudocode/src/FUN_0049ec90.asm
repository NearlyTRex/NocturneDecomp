; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ec90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ec90
        ;   Label: FUN_0049ec90
    PUSH EDX                            ; 0049ec94
    CALL FUN_00510dd0                   ; 0049ec95
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049ec9a
    MOV dword ptr [EAX + 0x3c],0x5f6554 ; 0049ec9d
    RET                                 ; 0049eca4

