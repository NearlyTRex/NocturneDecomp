; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; code * FUN_0042d150(void)
;
;
; XREF[3]:
;   FUN_0042d130 at 0042d139
;   FUN_0042e220 at 0042e248
;   FUN_004f44d0 at 004f45b6
;
; Referenced Globals:
;   undefined4 DAT_01c03948
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c03948],0x0      ; 0042d150 | DAT_01c03948
        ;   Label: FUN_0042d150
    JZ 0x0042d15f                       ; 0042d157
        ;   XREF to: 0042d15f (CONDITIONAL_JUMP)  ; LAB_0042d15f
    MOV EAX,0x42cff2                    ; 0042d159
    RET                                 ; 0042d15e
    MOV EAX,0x42cef8                    ; 0042d15f
        ;   Label: LAB_0042d15f
    RET                                 ; 0042d164

