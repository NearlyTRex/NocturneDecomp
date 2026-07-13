; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0048ca50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ca50
        ;   Label: FUN_0048ca50
    PUSH 0x5993b0                       ; 0048ca54 | DAT_005993b0
    PUSH 0x3                            ; 0048ca59
    ADD EAX,0x1c                        ; 0048ca5b
    PUSH EAX                            ; 0048ca5e
    CALL FUN_005644a7                   ; 0048ca5f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 0048ca64
    SUB EAX,0x1c                        ; 0048ca67
    RET                                 ; 0048ca6a

