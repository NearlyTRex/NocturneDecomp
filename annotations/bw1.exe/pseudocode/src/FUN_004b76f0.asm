; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b76f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b76f0
        ;   Label: FUN_004b76f0
    PUSH EDX                            ; 004b76f4
    CALL FUN_00532130                   ; 004b76f5
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b76fa
    MOV dword ptr [EAX + 0x3c],0x600044 ; 004b76fd
    RET                                 ; 004b7704

