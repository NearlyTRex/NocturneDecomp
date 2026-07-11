; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e100(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0040b0d0 at 0040b0e9
;
; Called Functions:
;   FUN_0040e0a0
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040e100
        ;   Label: FUN_0040e100
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e102
    PUSH EDX                            ; 0040e106
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040e107
    PUSH ECX                            ; 0040e10b
    CALL FUN_0040e0a0                   ; 0040e10c
        ;   XREF to: 0040e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e0a0()
    ADD ESP,0xc                         ; 0040e111
    RET                                 ; 0040e114

