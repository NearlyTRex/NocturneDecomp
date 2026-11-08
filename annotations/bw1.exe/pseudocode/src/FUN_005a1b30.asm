; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1b30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1b30
        ;   Label: FUN_005a1b30
    PUSH EDX                            ; 005a1b34
    CALL FUN_005a14b0                   ; 005a1b35
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    ADD ESP,0x4                         ; 005a1b3a
    MOV dword ptr [EAX],0x607454        ; 005a1b3d
    RET                                 ; 005a1b43

