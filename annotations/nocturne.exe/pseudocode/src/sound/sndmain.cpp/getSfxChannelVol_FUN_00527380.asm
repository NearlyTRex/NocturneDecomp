; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[9]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1420
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e855
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de9f
;   core_sound.cpp_FUN_0052dff0 at 0052e25b
;   core_sound.cpp_syncChannel3WithChannel0_FUN_0052dd90 at 0052ddaf
;   sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270 at 0052b30a
;   sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630 at 00524672
;   sound_sndmain.cpp_FUN_005289f0 at 00528c12
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528e0b
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593611
;   TerminatedCString s_getSfxChannelVol_invalid_00593626
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527380
        ;   Label: sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527381
    TEST EBX,EBX                        ; 00527385
    JL 0x00527399                       ; 00527387
        ;   XREF to: 00527399 (CONDITIONAL_JUMP)  ; LAB_00527399
    CMP EBX,0x20                        ; 00527389
    JGE 0x00527399                      ; 0052738c
        ;   XREF to: 00527399 (CONDITIONAL_JUMP)  ; LAB_00527399
    MOV EBX,dword ptr [EBX*0x4 + 0x2dc7958] ; 0052738e
    MOV EAX,EBX                         ; 00527395
    POP EBX                             ; 00527397
    RET                                 ; 00527398
    PUSH EBX                            ; 00527399
        ;   Label: LAB_00527399
    MOV EDX,0x593611                    ; 0052739a | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf47                       ; 0052739f
    PUSH 0x593626                       ; 005273a4 | = "getSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01cc4800],EDX      ; 005273a9 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005273af | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005273b5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 005273ba
    MOV EBX,dword ptr [EBX*0x4 + 0x2dc7958] ; 005273bd
    MOV EAX,EBX                         ; 005273c4
    POP EBX                             ; 005273c6
    RET                                 ; 005273c7

