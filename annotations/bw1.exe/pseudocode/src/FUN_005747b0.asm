; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005747b0(byte *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005747f0 at 005748a8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005747b0
        ;   Label: FUN_005747b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005747b4
    TEST EDX,EDX                        ; 005747b8
    JLE 0x005747cc                      ; 005747ba
        ;   XREF to: 005747cc (CONDITIONAL_JUMP)  ; LAB_005747cc
    PUSH EBX                            ; 005747bc
    MOV BL,byte ptr [EAX]               ; 005747bd
        ;   Label: LAB_005747bd
    INC EAX                             ; 005747bf
    XOR BL,0x80                         ; 005747c0
    DEC EDX                             ; 005747c3
    MOV byte ptr [EAX + -0x1],BL        ; 005747c4
    TEST EDX,EDX                        ; 005747c7
    JG 0x005747bd                       ; 005747c9
        ;   XREF to: 005747bd (CONDITIONAL_JUMP)  ; LAB_005747bd
    POP EBX                             ; 005747cb
    RET                                 ; 005747cc
        ;   Label: LAB_005747cc

