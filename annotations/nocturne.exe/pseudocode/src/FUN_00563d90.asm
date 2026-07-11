; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563d90(void)
;
;
; XREF[1]:
;   FUN_00563db8 at 00563ec6
;
; *****************************************************************************

section .text

    PUSH ES                             ; 00563d90
        ;   Label: FUN_00563d90
    PUSH DS                             ; 00563d91
    POP ES                              ; 00563d92
    MOVZX EDX,CL                        ; 00563d93
    SHR ECX,0x2                         ; 00563d96
    JZ 0x00563da6                       ; 00563d99
        ;   XREF to: 00563da6 (CONDITIONAL_JUMP)  ; LAB_00563da6
    MOV EAX,dword ptr [EDI]             ; 00563d9b
        ;   Label: LAB_00563d9b
    XCHG dword ptr [ESI],EAX            ; 00563d9d
    STOSD ES:EDI                        ; 00563d9f
    ADD ESI,0x4                         ; 00563da0
    DEC ECX                             ; 00563da3
    JNZ 0x00563d9b                      ; 00563da4
        ;   XREF to: 00563d9b (CONDITIONAL_JUMP)  ; LAB_00563d9b
    AND DL,0x3                          ; 00563da6
        ;   Label: LAB_00563da6
    JZ 0x00563db4                       ; 00563da9
        ;   XREF to: 00563db4 (CONDITIONAL_JUMP)  ; LAB_00563db4
    MOV AL,byte ptr [EDI]               ; 00563dab
        ;   Label: LAB_00563dab
    XCHG byte ptr [ESI],AL              ; 00563dad
    STOSB ES:EDI                        ; 00563daf
    INC ESI                             ; 00563db0
    DEC EDX                             ; 00563db1
    JNZ 0x00563dab                      ; 00563db2
        ;   XREF to: 00563dab (CONDITIONAL_JUMP)  ; LAB_00563dab
    POP ES                              ; 00563db4
        ;   Label: LAB_00563db4
    RET                                 ; 00563db5

