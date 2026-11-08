; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040cf60(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00409c40 at 00409c59
;
; Called Functions:
;   FUN_0040cf00
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040cf60
        ;   Label: FUN_0040cf60
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040cf62
    PUSH EDX                            ; 0040cf66
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040cf67
    PUSH ECX                            ; 0040cf6b
    CALL FUN_0040cf00                   ; 0040cf6c
        ;   XREF to: 0040cf00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf00()
    ADD ESP,0xc                         ; 0040cf71
    RET                                 ; 0040cf74

