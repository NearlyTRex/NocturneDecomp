; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cbed0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c080
;
; Called Functions:
;   FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbed0
        ;   Label: FUN_004cbed0
    PUSH 0x59c080                       ; 004cbed4 | DAT_0059c080
    PUSH 0x2                            ; 004cbed9
    ADD EAX,0x3c                        ; 004cbedb
    PUSH EAX                            ; 004cbede
    CALL FUN_005644a7                   ; 004cbedf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 004cbee4
    SUB EAX,0x3c                        ; 004cbee7
    RET                                 ; 004cbeea

