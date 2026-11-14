; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_lockSound_FUN_005532f0(void)
;
;
; XREF[27]:
;   core_tommygun.cpp_CTommyGun_process_FUN_00576130 at 0057623d
;   sound_sndmain.cpp_createUserSample_FUN_005516d0 at 005516de
;   sound_sndmain.cpp_enableSfxChannel_FUN_00551220 at 00551262
;   sound_sndmain.cpp_enableSoundSystem_FUN_005524b0 at 005524e8
;   sound_sndmain.cpp_freeAllSamples_FUN_00551c70 at 00551c72
;   sound_sndmain.cpp_freeSampleByName_FUN_00551950 at 00551957
;   sound_sndmain.cpp_getChannelLevels_FUN_005540f0 at 00554137
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00552d00 at 00552d16
;   sound_sndmain.cpp_getSampleInfo_FUN_005519e0 at 005519f1
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0 at 0054d3f2
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e91c1
;   TerminatedCString s_lockSound_unable_to_crea_005e91d6
;   TerminatedCString s_sound_sndmain_cpp_005e9200
;   TerminatedCString s_lockSound_lock_imbalance_005e9215
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02649018
;   undefined4 DAT_0264901c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   wincore_winrun.cpp_createMutex_FUN_0058fc90
;   wincore_winrun.cpp_waitForMutex_FUN_0058fca0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005532f0
        ;   Label: sound_sndmain.cpp_lockSound_FUN_005532f0
    PUSH EDI                            ; 005532f1
    CMP dword ptr [0x02649018],0x0      ; 005532f2 | DAT_02649018
    JNZ 0x0055332e                      ; 005532f9
        ;   XREF to: 0055332e (CONDITIONAL_JUMP)  ; LAB_0055332e
    CALL wincore_winrun.cpp_createMutex_FUN_0058fc90 ; 005532fb
        ;   XREF to: 0058fc90 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_0058fc90()
    MOV [0x02649018],EAX                ; 00553300 | DAT_02649018
    TEST EAX,EAX                        ; 00553305
    JNZ 0x0055332e                      ; 00553307
        ;   XREF to: 0055332e (CONDITIONAL_JUMP)  ; LAB_0055332e
    PUSH EBX                            ; 00553309
    MOV ECX,0x5e91c1                    ; 0055330a | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x17dd                      ; 0055330f
    PUSH 0x5e91d6                       ; 00553314 | = "lockSound - unable to create mutex ob..."
    MOV dword ptr [0x01d046a0],ECX      ; 00553319 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0055331f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00553325
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0055332a
    POP EBX                             ; 0055332d
    MOV ESI,dword ptr [0x02649018]      ; 0055332e | DAT_02649018
        ;   Label: LAB_0055332e
    PUSH ESI                            ; 00553334
    CALL wincore_winrun.cpp_waitForMutex_FUN_0058fca0 ; 00553335
        ;   XREF to: 0058fca0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_0058fca0(HANDLE mutex_handle)
    MOV EDI,dword ptr [0x0264901c]      ; 0055333a | DAT_0264901c
    INC EDI                             ; 00553340
    ADD ESP,0x4                         ; 00553341
    MOV dword ptr [0x0264901c],EDI      ; 00553344 | DAT_0264901c
    CMP EDI,0x63                        ; 0055334a
    JG 0x00553352                       ; 0055334d
        ;   XREF to: 00553352 (CONDITIONAL_JUMP)  ; LAB_00553352
    POP EDI                             ; 0055334f
    POP ESI                             ; 00553350
    RET                                 ; 00553351
    MOV EAX,0x5e9200                    ; 00553352 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00553352
    MOV EDX,0x17e8                      ; 00553357
    PUSH 0x5e9215                       ; 0055335c | = "lockSound - lock imbalance?"
    MOV [0x01d046a0],EAX                ; 00553361 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00553366 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055336c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00553371
    POP EDI                             ; 00553374
    POP ESI                             ; 00553375
    RET                                 ; 00553376

