; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(float volume)
;
; Parameters:
; float            Stack[0x4]:4   volume
;
; XREF[6]:
;   core_charactr.cpp_FUN_0042e8c0 at 0042ecff
;   core_fire.cpp_CFireball_onCollision_FUN_00499eb0 at 00499fc6
;   core_game.cpp_FUN_004c4a60 at 004c4b35
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 005606f3
;   core_sound.cpp_FUN_0055f6b0 at 0055f9d7
;   core_sound.cpp_playSfxInternal_FUN_0055f020 at 0055f23b
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555df0 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_setNextSfxVolume_FUN_00555df0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555df6
    SUB EAX,EDX                         ; 00555dfd
    SHL EAX,0x5                         ; 00555dff
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555e02
    MOV dword ptr [EAX + 0x2ceb958],EDX ; 00555e06
    RET                                 ; 00555e0c

