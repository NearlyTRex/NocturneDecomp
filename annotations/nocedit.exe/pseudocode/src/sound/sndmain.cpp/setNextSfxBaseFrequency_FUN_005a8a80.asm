; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency)
;
; Parameters:
; float            Stack[0x4]:4   base_frequency
;
; XREF[3]:
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 00506634
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b21fc
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad474
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[56]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8a80 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
    SHL EAX,0x4                         ; 005a8a85
    MOV EDX,EAX                         ; 005a8a88
    SHL EAX,0x3                         ; 005a8a8a
    SUB EAX,EDX                         ; 005a8a8d
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8a8f
    MOV dword ptr [EAX + 0x3f624f0],EDX ; 005a8a93 | g_SfxLastSlot.field_20[56]
    RET                                 ; 005a8a99

