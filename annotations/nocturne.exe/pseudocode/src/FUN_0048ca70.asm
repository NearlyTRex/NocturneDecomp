; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0048ca70(int param_1)
;
;
; Called Functions:
;   FUN_004389e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ca70
        ;   Label: FUN_0048ca70
    PUSH 0x0                            ; 0048ca74
    ADD EAX,0x1c                        ; 0048ca76
    PUSH EAX                            ; 0048ca79
    CALL FUN_004389e0                   ; 0048ca7a
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004389e0()
    ADD ESP,0x8                         ; 0048ca7f
    SUB EAX,0x1c                        ; 0048ca82
    RET                                 ; 0048ca85

