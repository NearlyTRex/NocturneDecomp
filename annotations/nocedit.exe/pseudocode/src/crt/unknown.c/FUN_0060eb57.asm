; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060eb57()
;
;
; XREF[3]:
;   crt_math.c_dadd_FUN_0060defc at 0060e0b4
;   crt_math.c_dmul_FUN_0060e0b9 at 0060e16b
;   crt_unknown.c_FUN_0060dcf6 at 0060ddcb
;
; Called Functions:
;   crt_math.c_set_range_error_errno_FUN_006027ac
;   crt_unknown.c_FUN_0060fa80
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0060eb57
        ;   Label: crt_unknown.c_FUN_0060eb57
    CALL crt_math.c_set_range_error_errno_FUN_006027ac ; 0060eb58 | void crt_math.c_set_range_error_errno_FUN_006027ac()
        ;   XREF to: 006027ac (UNCONDITIONAL_CALL)
    MOV EAX,0x84                        ; 0060eb5d
    CALL crt_unknown.c_FUN_0060fa80     ; 0060eb62 | undefined crt_unknown.c_FUN_0060fa80()
        ;   XREF to: 0060fa80 (UNCONDITIONAL_CALL)
    POP EAX                             ; 0060eb67
    AND EAX,0x80000000                  ; 0060eb68
        ;   Label: LAB_0060eb68
    OR EAX,0x7ff00000                   ; 0060eb6d
    MOV EDX,EAX                         ; 0060eb72
    SUB EAX,EAX                         ; 0060eb74
    RET                                 ; 0060eb76

