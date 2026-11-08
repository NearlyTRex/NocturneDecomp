; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046a3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_0046a450 at 0046a4bb
;   FUN_0046a640 at 0046a657
;
; Called Functions:
;   FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a3e0
        ;   Label: FUN_0046a3e0
    PUSH ESI                            ; 0046a3e1
    PUSH EDI                            ; 0046a3e2
    PUSH EBP                            ; 0046a3e3
    PUSH 0x7                            ; 0046a3e4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0046a3e6
    PUSH EDX                            ; 0046a3ea
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046a3eb
    PUSH ECX                            ; 0046a3ef
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046a3f0
    PUSH EBX                            ; 0046a3f4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0046a3f5
    PUSH ESI                            ; 0046a3f9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0046a3fa
    PUSH EDI                            ; 0046a3fe
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046a3ff
    PUSH EBP                            ; 0046a403
    CALL FUN_00469b40                   ; 0046a404
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00469b40()
    ADD ESP,0x1c                        ; 0046a409
    POP EBP                             ; 0046a40c
    POP EDI                             ; 0046a40d
    POP ESI                             ; 0046a40e
    POP EBX                             ; 0046a40f
    RET                                 ; 0046a410

