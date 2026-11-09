; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00572810(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572810 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572810
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572816
    SUB EAX,EDX                         ; 0057281d
    SHL EAX,0x5                         ; 0057281f
    MOV dword ptr [EAX + 0x2c78d10],0x2 ; 00572822
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057282c
    MOV dword ptr [EAX + 0x2c78d0c],EDX ; 00572830
    RET                                 ; 00572836

