; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00526120(undefined4 param_1)
;
;
; XREF[2]:
;   core_lightgun.cpp_FUN_004c79a0 at 004c7c29
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d347
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526120 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_FUN_00526120
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526126
    SUB EAX,EDX                         ; 0052612d
    SHL EAX,0x2                         ; 0052612f
    MOV EDX,EAX                         ; 00526132
    SHL EAX,0x3                         ; 00526134
    ADD EAX,EDX                         ; 00526137
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526139
    MOV dword ptr [EAX + 0x2dc1bc0],EDX ; 0052613d
    RET                                 ; 00526143

