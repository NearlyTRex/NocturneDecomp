; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043f9a0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00517c80 at 00517ca7
;   FUN_0051b6e0 at 0051b702
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0043f9a0 | DAT_005993b0
        ;   Label: FUN_0043f9a0
    PUSH 0x64                           ; 0043f9a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043f9a7
    PUSH EDX                            ; 0043f9ab
    CALL FUN_0056494f                   ; 0043f9ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0043f9b1
    RET                                 ; 0043f9b4

