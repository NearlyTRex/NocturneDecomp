; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __softfp_double crt_math_c_modf_FUN_00602102(double value,double *integer_part)
;
; Parameters:
; double           Stack[0x4]:8   value
; double *         Stack[0xc]:4   integer_part
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[3]:
;   crt_math.c_floor_FUN_005feb90 at 005feba3
;   sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0 at 00530788
;   sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400 at 00530471
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00602102
        ;   Label: crt_math.c_modf_FUN_00602102
    FLD double ptr [ESP + 0x8]          ; 00602103
    FLD ST0                             ; 00602107
    CALL crt_math.c_round_FUN_005fe6b0  ; 00602109
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FSUB ST1,ST0                        ; 0060210e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602110
    FSTP double ptr [EAX]               ; 00602114
    POP EAX                             ; 00602116
    SUB ESP,0x8                         ; 00602117
    FSTP double ptr [ESP]               ; 0060211a
    WAIT                                ; 0060211d
    POP EAX                             ; 0060211e
    POP EDX                             ; 0060211f
    WAIT                                ; 00602120
    RET                                 ; 00602121

