; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_modf_FUN_005c3166(double value,double *integer_part)
;
; Parameters:
; double           Stack[0x4]:8   value
; double *         Stack[0xc]:4   integer_part
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[3]:
;   crt_math.c_floor_FUN_005c0880 at 005c0893
;   sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280 at 005274ae
;   sound_mp3.cpp_initializeSynthesisDctTable_FUN_0052718e at 00527201
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c3166
        ;   Label: crt_math.c_modf_FUN_005c3166
    FLD double ptr [ESP + 0x8]          ; 005c3167
    FLD ST0                             ; 005c316b
    CALL crt_math.c_round_FUN_005c03a0  ; 005c316d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FSUB ST1,ST0                        ; 005c3172
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3174
    FSTP double ptr [EAX]               ; 005c3178
    POP EAX                             ; 005c317a
    SUB ESP,0x8                         ; 005c317b
    FSTP double ptr [ESP]               ; 005c317e
    WAIT                                ; 005c3181
    POP EAX                             ; 005c3182
    POP EDX                             ; 005c3183
    WAIT                                ; 005c3184
    RET                                 ; 005c3185

