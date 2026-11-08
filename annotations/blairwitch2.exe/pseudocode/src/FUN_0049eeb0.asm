; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049eeb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049eeb0
        ;   Label: FUN_0049eeb0
    PUSH EDX                            ; 0049eeb4
    CALL FUN_00510dd0                   ; 0049eeb5
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 0049eeba
    MOV dword ptr [EAX + 0x3c],0x5f65f4 ; 0049eebd
    RET                                 ; 0049eec4

