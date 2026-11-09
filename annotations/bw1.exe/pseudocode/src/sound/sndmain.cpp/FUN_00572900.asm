; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00572900(float base_frequency)
;
; Parameters:
; float            Stack[0x4]:4   base_frequency
;
; XREF[3]:
;   core_lightgun.cpp_FUN_00500d20 at 00500eef
;   core_lightpis.cpp_FUN_00502480 at 0050264f
;   core_sound.cpp_FUN_0057bef0 at 0057c117
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572900 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572900
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572906
    SUB EAX,EDX                         ; 0057290d
    SHL EAX,0x5                         ; 0057290f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572912
    MOV dword ptr [EAX + 0x2c78d2c],EDX ; 00572916
    RET                                 ; 0057291c

