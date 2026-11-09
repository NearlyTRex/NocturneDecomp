; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_modf_FUN_005bada6(double value,double *integer_part)
;
; Parameters:
; double           Stack[0x4]:8   value
; double *         Stack[0xc]:4   integer_part
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[3]:
;   crt_math.c_floor_FUN_005b84d0 at 005b84e3
;   sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0 at 005062de
;   sound_mp3.cpp_FUN_00505fbe at 00506031
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005bada6
        ;   Label: crt_math.c_modf_FUN_005bada6
    FLD double ptr [ESP + 0x8]          ; 005bada7
    FLD ST0                             ; 005badab
    CALL crt_math.c_round_FUN_005b7ff0  ; 005badad
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FSUB ST1,ST0                        ; 005badb2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005badb4
    FSTP double ptr [EAX]               ; 005badb8
    POP EAX                             ; 005badba
    SUB ESP,0x8                         ; 005badbb
    FSTP double ptr [ESP]               ; 005badbe
    WAIT                                ; 005badc1
    POP EAX                             ; 005badc2
    POP EDX                             ; 005badc3
    WAIT                                ; 005badc4
    RET                                 ; 005badc5

