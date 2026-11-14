; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(float volume)
;
; Parameters:
; float            Stack[0x4]:4   volume
;
; XREF[11]:
;   core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0 at 0042fcb7
;   core_doc.cpp_FUN_00469550 at 0046bd60
;   core_dracbrid.cpp_FUN_0047d920 at 0047dda8
;   core_fire.cpp_CFireball_onCollision_FUN_004aee60 at 004aef76
;   core_lightgun.cpp_CLightGun_process_FUN_00500d20 at 00500ee3
;   core_lightpis.cpp_CLightPis_process_FUN_00502480 at 00502643
;   core_manpuz.cpp_updateGemHumChannel_FUN_005057c0 at 00505885
;   core_sound.cpp_CSound_process_FUN_0057ce10 at 0057d5c3
;   core_sound.cpp_FUN_0057c580 at 0057c8a7
;   core_sound.cpp_playSfxInternal_FUN_0057bef0 at 0057c10b
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005728e0 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005728e6
    SUB EAX,EDX                         ; 005728ed
    SHL EAX,0x5                         ; 005728ef
    MOV EDX,dword ptr [ESP + 0x4]       ; 005728f2
    MOV dword ptr [EAX + 0x2c78d28],EDX ; 005728f6
    RET                                 ; 005728fc

