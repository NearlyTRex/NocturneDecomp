; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005adc04(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005add3c at 005addc2
;
; Referenced Globals:
;   void* PTR_TlsFree_005b3664 = 001b4262
;   undefined4 DAT_0060799c
;
; Called Functions:
;   TlsFree
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060799c]      ; 005adc04 | DAT_0060799c
        ;   Label: crt_unknown.c_FUN_005adc04
    CMP EDX,-0x1                        ; 005adc0a
    JZ 0x005adc21                       ; 005adc0d
        ;   XREF to: 005adc21 (CONDITIONAL_JUMP)  ; LAB_005adc21
    PUSH EDX                            ; 005adc0f
    CALL dword ptr CS:[0x5b3664]        ; 005adc10 | PTR_TlsFree_005b3664
    MOV dword ptr [0x0060799c],0xffffffff ; 005adc17 | DAT_0060799c
    RET                                 ; 005adc21
        ;   Label: LAB_005adc21

