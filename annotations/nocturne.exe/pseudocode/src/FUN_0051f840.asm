; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051f840(int param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051f840
        ;   Label: FUN_0051f840
    PUSH 0x5993b0                       ; 0051f844 | DAT_005993b0
    PUSH 0x3                            ; 0051f849
    ADD EAX,0x10                        ; 0051f84b
    PUSH EAX                            ; 0051f84e
    CALL FUN_005644a7                   ; 0051f84f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 0051f854
    SUB EAX,0x10                        ; 0051f857
    RET                                 ; 0051f85a

