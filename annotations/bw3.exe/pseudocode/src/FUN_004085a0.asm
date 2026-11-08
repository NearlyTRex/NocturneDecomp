; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004085a0(int param_1)
;
;
; XREF[3]:
;   FUN_004da880 at 004db88a
;   FUN_004dbaa0 at 004dbb2a
;   FUN_004f6ca0 at 004f6cc1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004085a0
        ;   Label: FUN_004085a0
    TEST EAX,EAX                        ; 004085a4
    JZ 0x004085aa                       ; 004085a6
        ;   XREF to: 004085aa (CONDITIONAL_JUMP)  ; LAB_004085aa
    JNZ 0x004085ab                      ; 004085a8
        ;   XREF to: 004085ab (CONDITIONAL_JUMP)  ; LAB_004085ab
    RET                                 ; 004085aa
        ;   Label: LAB_004085aa
    PUSH 0x2                            ; 004085ab
        ;   Label: LAB_004085ab
    MOV EDX,dword ptr [EAX + 0x154]     ; 004085ad
    PUSH EAX                            ; 004085b3
    CALL dword ptr [EDX + 0xd0]         ; 004085b4
    ADD ESP,0x8                         ; 004085ba
    RET                                 ; 004085bd

