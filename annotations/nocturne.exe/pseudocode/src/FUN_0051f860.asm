; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051f860(int param_1)
;
;
; Called Functions:
;   FUN_004389e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051f860
        ;   Label: FUN_0051f860
    PUSH 0x0                            ; 0051f864
    ADD EAX,0x10                        ; 0051f866
    PUSH EAX                            ; 0051f869
    CALL FUN_004389e0                   ; 0051f86a
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004389e0()
    ADD ESP,0x8                         ; 0051f86f
    SUB EAX,0x10                        ; 0051f872
    RET                                 ; 0051f875

