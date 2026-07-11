; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ef50(int *param_1)
;
;
; XREF[2]:
;   FUN_0056ef60 at 0056efa2
;   FUN_0056efb8 at 0056f007
;
; *****************************************************************************

section .text

    PUSH ES                             ; 0056ef50
        ;   Label: FUN_0056ef50
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056ef51
    CMP dword ptr [EAX],0x0             ; 0056ef55
    JZ 0x0056ef5e                       ; 0056ef58
        ;   XREF to: 0056ef5e (CONDITIONAL_JUMP)  ; LAB_0056ef5e
    PUSH DS                             ; 0056ef5a
    POP ES                              ; 0056ef5b
    CALL dword ptr [EAX]                ; 0056ef5c
    POP ES                              ; 0056ef5e
        ;   Label: LAB_0056ef5e
    RET                                 ; 0056ef5f

