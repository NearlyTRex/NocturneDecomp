; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045b310(int param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045b310
        ;   Label: FUN_0045b310
    PUSH 0x5993b0                       ; 0045b314 | DAT_005993b0
    PUSH 0x4                            ; 0045b319
    ADD EAX,0x20                        ; 0045b31b
    PUSH EAX                            ; 0045b31e
    CALL FUN_005644a7                   ; 0045b31f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 0045b324
    SUB EAX,0x20                        ; 0045b327
    RET                                 ; 0045b32a

