; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3afc(int param_1)
;
;
; XREF[1]:
;   FUN_005a3b0c at 005a3b68
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a3afc
        ;   Label: FUN_005a3afc
    ADD EAX,0x30                        ; 005a3b00
    CMP EAX,0x39                        ; 005a3b03
    JLE 0x005a3b0b                      ; 005a3b06
        ;   XREF to: 005a3b0b (CONDITIONAL_JUMP)  ; LAB_005a3b0b
    ADD EAX,0x27                        ; 005a3b08
    RET                                 ; 005a3b0b
        ;   Label: LAB_005a3b0b

