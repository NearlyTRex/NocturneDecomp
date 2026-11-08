; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8a2c(int param_1)
;
;
; XREF[1]:
;   FUN_005b8a3c at 005b8a98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b8a2c
        ;   Label: FUN_005b8a2c
    ADD EAX,0x30                        ; 005b8a30
    CMP EAX,0x39                        ; 005b8a33
    JLE 0x005b8a3b                      ; 005b8a36
        ;   XREF to: 005b8a3b (CONDITIONAL_JUMP)  ; LAB_005b8a3b
    ADD EAX,0x27                        ; 005b8a38
    RET                                 ; 005b8a3b
        ;   Label: LAB_005b8a3b

