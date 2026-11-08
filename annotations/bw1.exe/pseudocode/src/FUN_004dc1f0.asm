; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc1f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00531280 at 005312ac
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004dc1f0
        ;   Label: FUN_004dc1f0
    PUSH 0x8                            ; 004dc1f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dc1f7
    PUSH EDX                            ; 004dc1fb
    CALL FUN_005c1066                   ; 004dc1fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004dc201
    RET                                 ; 004dc204

