; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417d10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00415800 at 0041583c
;
; Referenced Globals:
;   undefined4 DAT_005f37d0
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f37d0                       ; 00417d10 | DAT_005f37d0
        ;   Label: FUN_00417d10
    PUSH 0x2                            ; 00417d15
    MOV EDX,dword ptr [ESP + 0xc]       ; 00417d17
    PUSH EDX                            ; 00417d1b
    CALL FUN_005b854f                   ; 00417d1c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 00417d21
    RET                                 ; 00417d24

