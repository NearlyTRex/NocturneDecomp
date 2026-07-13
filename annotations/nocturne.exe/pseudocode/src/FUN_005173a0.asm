; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005173a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005174e0
;   FUN_005670b1
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 005173a0
        ;   Label: FUN_005173a0
    CALL FUN_005670b1                   ; 005173a5
        ;   XREF to: 005670b1 (UNCONDITIONAL_CALL)  ; undefined FUN_005670b1()
    PUSH EBX                            ; 005173aa
    MOV EBX,dword ptr [ESP + 0x8]       ; 005173ab
    PUSH EBX                            ; 005173af
    CALL FUN_005174e0                   ; 005173b0
        ;   XREF to: 005174e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005174e0()
    ADD ESP,0x4                         ; 005173b5
    MOV EAX,EBX                         ; 005173b8
    POP EBX                             ; 005173ba
    RET                                 ; 005173bb

