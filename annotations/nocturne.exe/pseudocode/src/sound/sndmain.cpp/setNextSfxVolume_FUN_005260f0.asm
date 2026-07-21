; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(undefined4 param_1)
;
;
; XREF[9]:
;   FUN_0045ab40 at 0045afce
;   FUN_004c79a0 at 004c7c1d
;   FUN_0052d790 at 0052da8f
;   FUN_0052dff0 at 0052e625
;   FUN_00535900 at 00537c8c
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426d33
;   core_fire.cpp_CFireball_onCollision_FUN_00484b60 at 00484c76
;   core_manpuz.cpp_updateGemHumChannel_FUN_004caef0 at 004cafb5
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d33b
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 005260f0 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005260f6
    SUB EAX,EDX                         ; 005260fd
    SHL EAX,0x2                         ; 005260ff
    MOV EDX,EAX                         ; 00526102
    SHL EAX,0x3                         ; 00526104
    ADD EAX,EDX                         ; 00526107
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526109
    MOV dword ptr [EAX + 0x2dc1bbc],EDX ; 0052610d
    RET                                 ; 00526113

