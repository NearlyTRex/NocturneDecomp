; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_modf_FUN_005a5fd6(double value,double *integer_part)
;
; Parameters:
; double           Stack[0x4]:8   value
; double *         Stack[0xc]:4   integer_part
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[3]:
;   crt_math.c_floor_FUN_005a3600 at 005a3613
;   sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90 at 004fedbe
;   sound_mp3.cpp_initializeSynthesisDctTable_FUN_004feaa0 at 004feb11
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a5fd6
        ;   Label: crt_math.c_modf_FUN_005a5fd6
    FLD double ptr [ESP + 0x8]          ; 005a5fd7
    FLD ST0                             ; 005a5fdb
    CALL crt_math.c_round_FUN_005a3120  ; 005a5fdd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FSUB ST1,ST0                        ; 005a5fe2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a5fe4
    FSTP double ptr [EAX]               ; 005a5fe8
    POP EAX                             ; 005a5fea
    SUB ESP,0x8                         ; 005a5feb
    FSTP double ptr [ESP]               ; 005a5fee
    WAIT                                ; 005a5ff1
    POP EAX                             ; 005a5ff2
    POP EDX                             ; 005a5ff3
    WAIT                                ; 005a5ff4
    RET                                 ; 005a5ff5

