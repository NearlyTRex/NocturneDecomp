; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059a910(int param_1)
;
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a910
        ;   Label: FUN_0059a910
    ADD EAX,0x158                       ; 0059a914
    PUSH EAX                            ; 0059a919
    CALL FUN_004fc070                   ; 0059a91a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059a91f
    ADD ESP,0x4                         ; 0059a922
    CMP EAX,0x92                        ; 0059a925
    SETZ AL                             ; 0059a92a
    AND EAX,0xff                        ; 0059a92d
    RET                                 ; 0059a932

