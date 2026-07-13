; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cbef0(int param_1)
;
;
; Called Functions:
;   FUN_004cc000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbef0
        ;   Label: FUN_004cbef0
    PUSH 0x0                            ; 004cbef4
    ADD EAX,0x3c                        ; 004cbef6
    PUSH EAX                            ; 004cbef9
    CALL FUN_004cc000                   ; 004cbefa
        ;   XREF to: 004cc000 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc000()
    ADD ESP,0x8                         ; 004cbeff
    SUB EAX,0x3c                        ; 004cbf02
    RET                                 ; 004cbf05

