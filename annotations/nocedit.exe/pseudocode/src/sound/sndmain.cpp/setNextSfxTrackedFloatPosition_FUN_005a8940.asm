; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f *position_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position_source_ptr
;
; XREF[7]:
;   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20 at 004d1f52
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 0050661c
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 at 0050acf7
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 at 0050adad
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b21cb
;   core_vehicle.cpp_FUN_005e8b50 at 005e8b5f
;   sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0 at 005a95f5
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[12]
;   undefined4 g_SfxLastSlot.field_20[16]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8940 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
    SHL EAX,0x4                         ; 005a8945
    MOV EDX,EAX                         ; 005a8948
    SHL EAX,0x3                         ; 005a894a
    SUB EAX,EDX                         ; 005a894d
    MOV dword ptr [EAX + 0x3f624c8],0x1 ; 005a894f | g_SfxLastSlot.field_20[16]
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8959
    MOV dword ptr [EAX + 0x3f624c4],EDX ; 005a895d | g_SfxLastSlot.field_20[12]
    RET                                 ; 005a8963

