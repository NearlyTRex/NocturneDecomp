; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d60b0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a0784 = 004d6020
;
; Called Functions:
;   FUN_004f5d90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d60b0
        ;   Label: FUN_004d60b0
    PUSH EDX                            ; 004d60b4
    CALL FUN_004f5d90                   ; 004d60b5
        ;   XREF to: 004f5d90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5d90()
    ADD ESP,0x4                         ; 004d60ba
    MOV dword ptr [EAX + 0x14c],0x5a0784 ; 004d60bd | PTR_FUN_005a0784
    RET                                 ; 004d60c7

