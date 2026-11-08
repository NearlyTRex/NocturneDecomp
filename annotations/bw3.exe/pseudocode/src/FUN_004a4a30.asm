; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4a30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfa90                       ; 004a4a30
        ;   Label: FUN_004a4a30
    PUSH 0x100                          ; 004a4a35
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4a3a
    PUSH EDX                            ; 004a4a3e
    CALL FUN_005a3de6                   ; 004a4a3f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4a44
    RET                                 ; 004a4a47

