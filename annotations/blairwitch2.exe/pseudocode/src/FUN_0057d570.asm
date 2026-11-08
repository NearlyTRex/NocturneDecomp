; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d570(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057d570
        ;   Label: FUN_0057d570
    PUSH EDX                            ; 0057d574
    CALL FUN_0057b9c0                   ; 0057d575
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b9c0()
    ADD ESP,0x4                         ; 0057d57a
    MOV dword ptr [EAX],0x5fd424        ; 0057d57d
    RET                                 ; 0057d583

