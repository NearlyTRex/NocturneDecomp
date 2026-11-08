; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ec30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ec30
        ;   Label: FUN_0049ec30
    PUSH EDX                            ; 0049ec34
    CALL FUN_00510dd0                   ; 0049ec35
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049ec3a
    MOV dword ptr [EAX + 0x3c],0x5f6514 ; 0049ec3d
    RET                                 ; 0049ec44

