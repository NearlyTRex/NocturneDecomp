; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005a02b0(int param_1)
;
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a02b0
        ;   Label: FUN_005a02b0
    ADD EAX,0x158                       ; 005a02b4
    PUSH EAX                            ; 005a02b9
    CALL FUN_004fc070                   ; 005a02ba
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a02bf
    ADD ESP,0x4                         ; 005a02c2
    CMP EAX,0x1b                        ; 005a02c5
    SETZ AL                             ; 005a02c8
    AND EAX,0xff                        ; 005a02cb
    RET                                 ; 005a02d0

