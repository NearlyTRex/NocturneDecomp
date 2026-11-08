; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00598f00(int param_1)
;
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00598f00
        ;   Label: FUN_00598f00
    ADD EAX,0x158                       ; 00598f04
    PUSH EAX                            ; 00598f09
    CALL FUN_004fc070                   ; 00598f0a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00598f0f
    ADD ESP,0x4                         ; 00598f12
    CMP EAX,0x7                         ; 00598f15
    SETZ AL                             ; 00598f18
    AND EAX,0xff                        ; 00598f1b
    RET                                 ; 00598f20

