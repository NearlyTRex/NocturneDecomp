; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_0042d130(void)
;
;
; XREF[1]:
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520 at 0042e52b
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c03948
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005b7624]      ; 0042d130 | DAT_005b7624
        ;   Label: FUN_0042d130
    CMP EDX,0x8                         ; 0042d136
    JZ 0x0042d150                       ; 0042d139
        ;   XREF to: 0042d150 (CONDITIONAL_JUMP)  ; LAB_0042d150
    CMP EDX,0x10                        ; 0042d13b
    JZ 0x0042d170                       ; 0042d13e
        ;   XREF to: 0042d170 (CONDITIONAL_JUMP)  ; LAB_0042d170
    MOV EAX,0x42ceca                    ; 0042d140
    RET                                 ; 0042d145
    CMP dword ptr [0x01c03948],0x0      ; 0042d150 | DAT_01c03948
        ;   Label: LAB_0042d150
    JZ 0x0042d15f                       ; 0042d157
        ;   XREF to: 0042d15f (CONDITIONAL_JUMP)  ; LAB_0042d15f
    MOV EAX,0x42cff2                    ; 0042d159
    RET                                 ; 0042d15e
    MOV EAX,0x42cef8                    ; 0042d15f
        ;   Label: LAB_0042d15f
    RET                                 ; 0042d164
    MOV EAX,0x42d100                    ; 0042d170
        ;   Label: LAB_0042d170
    RET                                 ; 0042d175

