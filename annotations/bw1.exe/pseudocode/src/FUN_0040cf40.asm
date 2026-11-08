; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040cf40(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00409c40 at 00409c73
;   FUN_00433c60 at 00433c88
;
; Called Functions:
;   FUN_0040cf00
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040cf40
        ;   Label: FUN_0040cf40
    LEA EAX,[ESP + 0xc]                 ; 0040cf42
    PUSH EAX                            ; 0040cf46
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040cf47
    PUSH EDX                            ; 0040cf4b
    CALL FUN_0040cf00                   ; 0040cf4c
        ;   XREF to: 0040cf00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf00()
    ADD ESP,0xc                         ; 0040cf51
    RET                                 ; 0040cf54

