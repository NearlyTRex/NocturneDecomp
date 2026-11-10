; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005501a0 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005501a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005501a6
    SUB EAX,EDX                         ; 005501ad
    SHL EAX,0x5                         ; 005501af
    MOV dword ptr [EAX + 0x2641640],0x2 ; 005501b2
    MOV EDX,dword ptr [ESP + 0x4]       ; 005501bc
    MOV dword ptr [EAX + 0x264163c],EDX ; 005501c0
    RET                                 ; 005501c6

