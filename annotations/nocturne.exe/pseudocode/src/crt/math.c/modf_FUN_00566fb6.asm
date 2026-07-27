; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_math_c_modf_FUN_00566fb6(undefined4 param_1,double *param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[3]:
;   crt_math.c_floor_FUN_005648c0 at 005648d3
;   sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070 at 004e429e
;   sound_mp3.cpp_FUN_004e3f80 at 004e3ff1
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00566fb6
        ;   Label: crt_math.c_modf_FUN_00566fb6
    FLD double ptr [ESP + 0x8]          ; 00566fb7
    FLD ST0                             ; 00566fbb
    CALL crt_math.c_round_FUN_00563a30  ; 00566fbd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FSUB ST1,ST0                        ; 00566fc2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00566fc4
    FSTP double ptr [EAX]               ; 00566fc8
    POP EAX                             ; 00566fca
    SUB ESP,0x8                         ; 00566fcb
    FSTP double ptr [ESP]               ; 00566fce
    WAIT                                ; 00566fd1
    POP EAX                             ; 00566fd2
    POP EDX                             ; 00566fd3
    WAIT                                ; 00566fd4
    RET                                 ; 00566fd5

