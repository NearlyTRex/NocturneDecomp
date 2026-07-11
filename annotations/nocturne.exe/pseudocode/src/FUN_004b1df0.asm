; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1df0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004b1e10 at 004b1f4c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_0045f3c0
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004b1df0
        ;   Label: FUN_004b1df0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1df5
    PUSH EDX                            ; 004b1df9
    MOV ECX,dword ptr [0x005ae704]      ; 004b1dfa | DAT_005ae704
    PUSH ECX                            ; 004b1e00 | DAT_01b4d738
    CALL FUN_0045f3c0                   ; 004b1e01
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3c0()
    ADD ESP,0xc                         ; 004b1e06
    RET                                 ; 004b1e09

