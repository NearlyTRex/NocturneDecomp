; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_logSoundError_FUN_005773f0(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[42]:
;   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_00578710 at 005789bb
;   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_00578cc0 at 00578ecf
;   sound_snddx.cpp_CDirectSoundDevice_applySfxChanges_FUN_00578f80 at 005791d8
;   sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a230 at 0057a277
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005799b0 at 00579aaa
;   sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_00578590 at 0057862c
;   sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_00579900 at 00579991
;   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_00579f30 at 00579f45
;   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_00578a80 at 00578bbd
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005784b0 at 0057855c
;   ... and 32 more
;
; Referenced Globals:
;   TerminatedCString s_SOUND_005f46b9
;   undefined4 DAT_005f46c1
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   wincore_winrun.cpp_FUN_005b3a90
;
; *****************************************************************************

section .text

    SUB ESP,0x404                       ; 005773f0
        ;   Label: sound_sndmain.cpp_logSoundError_FUN_005773f0
    LEA EAX,[ESP + 0x40c]               ; 005773f6
    MOV dword ptr [ESP + 0x400],EAX     ; 005773fd
    LEA EAX,[ESP + 0x400]               ; 00577404
    PUSH EAX                            ; 0057740b
    MOV EDX,dword ptr [ESP + 0x40c]     ; 0057740c
    PUSH EDX                            ; 00577413
    LEA EAX,[ESP + 0x8]                 ; 00577414
    PUSH EAX                            ; 00577418
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00577419
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0057741e
    XOR ECX,ECX                         ; 00577421
    PUSH 0x5f46b9                       ; 00577423 | = "SOUND: "
    MOV dword ptr [ESP + 0x404],ECX     ; 00577428
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0057742f
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 00577434
    MOV EAX,ESP                         ; 00577437
    PUSH EAX                            ; 00577439
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0057743a
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0057743f
    PUSH 0x5f46c1                       ; 00577442 | DAT_005f46c1
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 00577447
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0057744c
    ADD ESP,0x404                       ; 0057744f
    RET                                 ; 00577455

