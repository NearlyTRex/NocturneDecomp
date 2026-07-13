; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041a6c0(int param_1)
;
;
; XREF[8]:
;   FUN_00415e40 at 00415e6c
;   FUN_0041fa10 at 0041fa35
;   FUN_0041fa90 at 0041faa5
;   FUN_0048ca90 at 0048ca9c
;   FUN_0048cc30 at 0048cc3a
;   FUN_005170d0 at 005170e5
;   FUN_00534dc0 at 00534dd5
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

