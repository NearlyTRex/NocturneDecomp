; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a66f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004a2470 at 004a249e
;
; Referenced Globals:
;   undefined4 DAT_005f6f60
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004a66f0 | DAT_005f6f60
        ;   Label: FUN_004a66f0
    PUSH 0x3                            ; 004a66f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a66f7
    PUSH EDX                            ; 004a66fb
    CALL FUN_005b854f                   ; 004a66fc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 004a6701
    RET                                 ; 004a6704

