; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f0230(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00510070 at 0051009c
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004f0230
        ;   Label: FUN_004f0230
    PUSH 0x8                            ; 004f0235
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f0237
    PUSH EDX                            ; 004f023b
    CALL FUN_005b854f                   ; 004f023c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 004f0241
    RET                                 ; 004f0244

