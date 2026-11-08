; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7100(void)
;
;
; XREF[1]:
;   FUN_005a28f0 at 005a2909
;
; Called Functions:
;   FUN_005a7137
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005a7100
        ;   Label: FUN_005a7100
    JZ 0x005a7130                       ; 005a7102
        ;   XREF to: 005a7130 (CONDITIONAL_JUMP)  ; LAB_005a7130
    CMP byte ptr [EAX],DL               ; 005a7104
    TEST AL,0x3                         ; 005a7106
        ;   Label: LAB_005a7106
    JZ 0x005a7113                       ; 005a7108
        ;   XREF to: 005a7113 (CONDITIONAL_JUMP)  ; LAB_005a7113
    MOV byte ptr [EAX],DL               ; 005a710a
    INC EAX                             ; 005a710c
    ROR EDX,0x8                         ; 005a710d
    DEC ECX                             ; 005a7110
    JNZ 0x005a7106                      ; 005a7111
        ;   XREF to: 005a7106 (CONDITIONAL_JUMP)  ; LAB_005a7106
    PUSH ECX                            ; 005a7113
        ;   Label: LAB_005a7113
    SHR ECX,0x2                         ; 005a7114
    CALL FUN_005a7137                   ; 005a7117
        ;   XREF to: 005a7137 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7137()
    POP ECX                             ; 005a711c
    AND ECX,0x3                         ; 005a711d
    JZ 0x005a7130                       ; 005a7120
        ;   XREF to: 005a7130 (CONDITIONAL_JUMP)  ; LAB_005a7130
    MOV byte ptr [EAX],DL               ; 005a7122
    DEC ECX                             ; 005a7124
    JZ 0x005a7130                       ; 005a7125
        ;   XREF to: 005a7130 (CONDITIONAL_JUMP)  ; LAB_005a7130
    MOV byte ptr [EAX + 0x1],DH         ; 005a7127
    DEC ECX                             ; 005a712a
    JZ 0x005a7130                       ; 005a712b
        ;   XREF to: 005a7130 (CONDITIONAL_JUMP)  ; LAB_005a7130
    MOV byte ptr [EAX + 0x2],DL         ; 005a712d
    RET                                 ; 005a7130
        ;   Label: LAB_005a7130

