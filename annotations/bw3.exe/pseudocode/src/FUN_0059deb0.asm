; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059deb0(int param_1)
;
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059deb0
        ;   Label: FUN_0059deb0
    ADD EAX,0x158                       ; 0059deb4
    PUSH EAX                            ; 0059deb9
    CALL FUN_004fc070                   ; 0059deba
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059debf
    ADD ESP,0x4                         ; 0059dec2
    CMP EAX,0x9a                        ; 0059dec5
    SETZ AL                             ; 0059deca
    AND EAX,0xff                        ; 0059decd
    RET                                 ; 0059ded2

