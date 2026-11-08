; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049ed50(int param_1)
;
;
; Called Functions:
;   FUN_005b1c70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ed50
        ;   Label: FUN_0049ed50
    PUSH 0x0                            ; 0049ed54
    ADD EAX,0x180                       ; 0049ed56
    PUSH EAX                            ; 0049ed5b
    CALL FUN_005b1c70                   ; 0049ed5c
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 0049ed61
    SUB EAX,0x180                       ; 0049ed64
    RET                                 ; 0049ed69

