; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00550360(undefined4 param_1)
;
;
; XREF[2]:
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30 at 0055af3a
;   core_sound.cpp_FUN_0055aef0 at 0055aefe
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550360 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_FUN_00550360
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550366
    SUB EAX,EDX                         ; 0055036d
    SHL EAX,0x5                         ; 0055036f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550372
    MOV dword ptr [EAX + 0x2641660],EDX ; 00550376
    RET                                 ; 0055037c

