; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1e10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0059f520 at 0059f525
;
; Called Functions:
;   FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1e10
        ;   Label: FUN_005a1e10
    PUSH EDX                            ; 005a1e14
    CALL FUN_005a14b0                   ; 005a1e15
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    ADD ESP,0x4                         ; 005a1e1a
    MOV dword ptr [EAX],0x607474        ; 005a1e1d
    RET                                 ; 005a1e23

