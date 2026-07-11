; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7d90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d6570 at 004d657c
;
; Referenced Globals:
;   undefined4 DAT_005a08a0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a08a0                       ; 004d7d90 | DAT_005a08a0
        ;   Label: FUN_004d7d90
    PUSH 0x5                            ; 004d7d95
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d7d97
    PUSH EDX                            ; 004d7d9b
    CALL FUN_0056494f                   ; 004d7d9c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004d7da1
    RET                                 ; 004d7da4

