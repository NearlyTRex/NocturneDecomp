; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00550290(float base_frequency)
;
; Parameters:
; float            Stack[0x4]:4   base_frequency
;
; XREF[2]:
;   core_lightgun.cpp_FUN_004e38d0 at 004e3a9f
;   core_sound.cpp_FUN_005594c0 at 005596e7
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550290 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_FUN_00550290
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550296
    SUB EAX,EDX                         ; 0055029d
    SHL EAX,0x5                         ; 0055029f
    MOV EDX,dword ptr [ESP + 0x4]       ; 005502a2
    MOV dword ptr [EAX + 0x264165c],EDX ; 005502a6
    RET                                 ; 005502ac

