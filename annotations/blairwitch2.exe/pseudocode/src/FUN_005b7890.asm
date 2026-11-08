; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7890(void)
;
;
; XREF[1]:
;   FUN_005b78b8 at 005b79c6
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005b7890
        ;   Label: FUN_005b7890
    PUSH DS                             ; 005b7891
    POP ES                              ; 005b7892
    MOVZX EDX,CL                        ; 005b7893
    SHR ECX,0x2                         ; 005b7896
    JZ 0x005b78a6                       ; 005b7899
        ;   XREF to: 005b78a6 (CONDITIONAL_JUMP)  ; LAB_005b78a6
    MOV EAX,dword ptr [EDI]             ; 005b789b
        ;   Label: LAB_005b789b
    XCHG dword ptr [ESI],EAX            ; 005b789d
    STOSD ES:EDI                        ; 005b789f
    ADD ESI,0x4                         ; 005b78a0
    DEC ECX                             ; 005b78a3
    JNZ 0x005b789b                      ; 005b78a4
        ;   XREF to: 005b789b (CONDITIONAL_JUMP)  ; LAB_005b789b
    AND DL,0x3                          ; 005b78a6
        ;   Label: LAB_005b78a6
    JZ 0x005b78b4                       ; 005b78a9
        ;   XREF to: 005b78b4 (CONDITIONAL_JUMP)  ; LAB_005b78b4
    MOV AL,byte ptr [EDI]               ; 005b78ab
        ;   Label: LAB_005b78ab
    XCHG byte ptr [ESI],AL              ; 005b78ad
    STOSB ES:EDI                        ; 005b78af
    INC ESI                             ; 005b78b0
    DEC EDX                             ; 005b78b1
    JNZ 0x005b78ab                      ; 005b78b2
        ;   XREF to: 005b78ab (CONDITIONAL_JUMP)  ; LAB_005b78ab
    POP ES                              ; 005b78b4
        ;   Label: LAB_005b78b4
    RET                                 ; 005b78b5

