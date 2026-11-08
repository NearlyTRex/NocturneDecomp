; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005afd50(short *param_1)
;
;
; XREF[2]:
;   FUN_005addd0 at 005ade67
;   FUN_005aded0 at 005aded7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afd50
        ;   Label: FUN_005afd50
    MOV EDX,dword ptr [ESP + 0x8]       ; 005afd51
    MOV BX,word ptr [EDX]               ; 005afd55
    MOV EAX,EDX                         ; 005afd58
    TEST BX,BX                          ; 005afd5a
    JZ 0x005afd6b                       ; 005afd5d
        ;   XREF to: 005afd6b (CONDITIONAL_JUMP)  ; LAB_005afd6b
    MOV CX,word ptr [EAX + 0x2]         ; 005afd5f
        ;   Label: LAB_005afd5f
    ADD EAX,0x2                         ; 005afd63
    TEST CX,CX                          ; 005afd66
    JNZ 0x005afd5f                      ; 005afd69
        ;   XREF to: 005afd5f (CONDITIONAL_JUMP)  ; LAB_005afd5f
    SUB EAX,EDX                         ; 005afd6b
        ;   Label: LAB_005afd6b
    SAR EAX,0x1                         ; 005afd6d
    POP EBX                             ; 005afd6f
    RET                                 ; 005afd70

