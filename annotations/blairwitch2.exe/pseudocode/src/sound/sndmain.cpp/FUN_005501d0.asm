; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_005501d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005501d0 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_FUN_005501d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005501d6
    SUB EAX,EDX                         ; 005501dd
    SHL EAX,0x5                         ; 005501df
    MOV EDX,dword ptr [ESP + 0x4]       ; 005501e2
    MOV dword ptr [EAX + 0x2641644],EDX ; 005501e6
    MOV EDX,dword ptr [ESP + 0x8]       ; 005501ec
    MOV dword ptr [EAX + 0x2641648],EDX ; 005501f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005501f6
    MOV dword ptr [EAX + 0x264164c],EDX ; 005501fa
    XOR EDX,EDX                         ; 00550200
    MOV dword ptr [EAX + 0x2641650],EDX ; 00550202
    MOV dword ptr [EAX + 0x2641654],EDX ; 00550208
    RET                                 ; 0055020e

