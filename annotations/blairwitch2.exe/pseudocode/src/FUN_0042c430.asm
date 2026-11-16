; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; code * FUN_0042c430(void)
;
;
; XREF[3]:
;   FUN_00516750 at 00516797
;   cockpit_ckptutil.c_FUN_0042d550 at 0042d578
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410 at 0042c419
;
; Referenced Globals:
;   undefined4 DAT_01c38b40
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c38b40],0x0      ; 0042c430 | DAT_01c38b40
        ;   Label: FUN_0042c430
    JZ 0x0042c43f                       ; 0042c437
        ;   XREF to: 0042c43f (CONDITIONAL_JUMP)  ; LAB_0042c43f
    MOV EAX,0x42c2d2                    ; 0042c439
    RET                                 ; 0042c43e
    MOV EAX,0x42c1d8                    ; 0042c43f
        ;   Label: LAB_0042c43f
    RET                                 ; 0042c444

