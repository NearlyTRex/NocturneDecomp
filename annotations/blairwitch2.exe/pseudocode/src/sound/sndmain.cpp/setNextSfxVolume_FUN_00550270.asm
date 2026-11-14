; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(float volume)
;
; Parameters:
; float            Stack[0x4]:4   volume
;
; XREF[10]:
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 at 00426386
;   core_doc.cpp_FUN_00450c60 at 004531d0
;   core_dracbrid.cpp_FUN_00465400 at 00465888
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 004965d6
;   core_lightgun.cpp_CLightGun_process_FUN_004e38d0 at 004e3a93
;   core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20 at 004e6be5
;   core_sound.cpp_CSound_process_FUN_0055a3c0 at 0055aa1e
;   core_sound.cpp_FUN_00559b50 at 00559e77
;   core_sound.cpp_playSfxInternal_FUN_005594c0 at 005596db
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 005656a8
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550270 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550276
    SUB EAX,EDX                         ; 0055027d
    SHL EAX,0x5                         ; 0055027f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550282
    MOV dword ptr [EAX + 0x2641658],EDX ; 00550286
    RET                                 ; 0055028c

