; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574820(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574820
        ;   Label: FUN_00574820
    PUSH EDX                            ; 00574824
    CALL FUN_005744a0                   ; 00574825
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x4                         ; 0057482a
    MOV dword ptr [EAX],0x5e5b24        ; 0057482d
    RET                                 ; 00574833

