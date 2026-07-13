; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b09b0(int param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b09b0
        ;   Label: FUN_004b09b0
    PUSH 0x5993b0                       ; 004b09b4 | DAT_005993b0
    PUSH 0x4                            ; 004b09b9
    ADD EAX,0x8                         ; 004b09bb
    PUSH EAX                            ; 004b09be
    CALL FUN_005644a7                   ; 004b09bf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 004b09c4
    SUB EAX,0x8                         ; 004b09c7
    RET                                 ; 004b09ca

