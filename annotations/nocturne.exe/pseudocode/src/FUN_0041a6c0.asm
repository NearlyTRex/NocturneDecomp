; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041a6c0(int param_1)
;
;
; XREF[1]:
;   FUN_00553ea0 at 00553ebf
;
; Called Functions:
;   FUN_0041cbe0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a6c0
        ;   Label: FUN_0041a6c0
    PUSH 0x0                            ; 0041a6c4
    ADD EAX,0xb4                        ; 0041a6c6
    PUSH EAX                            ; 0041a6cb
    CALL FUN_0041cbe0                   ; 0041a6cc
        ;   XREF to: 0041cbe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cbe0()
    ADD ESP,0x8                         ; 0041a6d1
    SUB EAX,0xb4                        ; 0041a6d4
    RET                                 ; 0041a6d9

