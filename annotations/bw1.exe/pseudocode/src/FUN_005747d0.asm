; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005747d0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005747f0 at 00574ded
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005747d0
        ;   Label: FUN_005747d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005747d4
    TEST EDX,EDX                        ; 005747d8
    JLE 0x005747ef                      ; 005747da
        ;   XREF to: 005747ef (CONDITIONAL_JUMP)  ; LAB_005747ef
    PUSH EBX                            ; 005747dc
    MOV BL,byte ptr [EAX + 0x1]         ; 005747dd
        ;   Label: LAB_005747dd
    ADD EAX,0x2                         ; 005747e0
    XOR BL,0x80                         ; 005747e3
    DEC EDX                             ; 005747e6
    MOV byte ptr [EAX + -0x1],BL        ; 005747e7
    TEST EDX,EDX                        ; 005747ea
    JG 0x005747dd                       ; 005747ec
        ;   XREF to: 005747dd (CONDITIONAL_JUMP)  ; LAB_005747dd
    POP EBX                             ; 005747ee
    RET                                 ; 005747ef
        ;   Label: LAB_005747ef

