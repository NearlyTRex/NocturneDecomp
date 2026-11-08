; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ec60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ec60
        ;   Label: FUN_0049ec60
    PUSH EDX                            ; 0049ec64
    CALL FUN_00510dd0                   ; 0049ec65
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049ec6a
    MOV dword ptr [EAX + 0x3c],0x5f6534 ; 0049ec6d
    RET                                 ; 0049ec74

