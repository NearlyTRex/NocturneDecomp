; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7500(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7500
        ;   Label: FUN_004b7500
    PUSH EDX                            ; 004b7504
    CALL FUN_00532130                   ; 004b7505
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b750a
    MOV dword ptr [EAX + 0x3c],0x5fffc4 ; 004b750d
    RET                                 ; 004b7514

