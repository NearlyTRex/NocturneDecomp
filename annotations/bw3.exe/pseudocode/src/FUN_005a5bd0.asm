; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5bd0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004819e0 at 004819ff
;
; Called Functions:
;   FUN_005a5c84
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5bd0
        ;   Label: FUN_005a5bd0
    PUSH EDX                            ; 005a5bd4
    CALL FUN_005a5c84                   ; 005a5bd5
        ;   XREF to: 005a5c84 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5c84()
    ADD ESP,0x4                         ; 005a5bda
    RET                                 ; 005a5bdd

