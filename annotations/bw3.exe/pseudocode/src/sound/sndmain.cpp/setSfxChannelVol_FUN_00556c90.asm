; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(int channel_index,float volume)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
; float            Stack[0x8]:4   volume
;
; XREF[7]:
;   core_menu.cpp_FUN_004e94f0 at 004e9e2b
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 00560819
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 005601cf
;   core_sound.cpp_FUN_0055fd30 at 0055fdfd
;   core_sound.cpp_syncChannel3WithChannel0_FUN_0055fcd0 at 0055fd0d
;   sound_sndmain.cpp_readIni_FUN_00559220 at 005594f3
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00557f69
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d385b
;   TerminatedCString s_setSfxChannelVol_invalid_005d3870
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02ce7338
;   undefined4 DAT_02ce7398
;   undefined4 DAT_02ce739c
;   undefined4 DAT_02ce7450
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556c90
        ;   Label: sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
    PUSH ESI                            ; 00556c91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00556c92
    TEST EBX,EBX                        ; 00556c96
    JL 0x00556c9f                       ; 00556c98
        ;   XREF to: 00556c9f (CONDITIONAL_JUMP)  ; LAB_00556c9f
    CMP EBX,0x20                        ; 00556c9a
    JL 0x00556cc3                       ; 00556c9d
        ;   XREF to: 00556cc3 (CONDITIONAL_JUMP)  ; LAB_00556cc3
    PUSH EBX                            ; 00556c9f
        ;   Label: LAB_00556c9f
    MOV EDX,0x5d385b                    ; 00556ca0 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1116                      ; 00556ca5
    PUSH 0x5d3870                       ; 00556caa | = "setSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01d71de0],EDX      ; 00556caf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00556cb5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00556cbb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00556cc0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556cc3
        ;   Label: LAB_00556cc3
    MOV ESI,dword ptr [0x02cf3280]      ; 00556cc7 | DAT_02cf3280
    MOV dword ptr [EBX*0x4 + 0x2cf28c0],EDX ; 00556ccd
    TEST ESI,ESI                        ; 00556cd4
    JNZ 0x00556cdb                      ; 00556cd6
        ;   XREF to: 00556cdb (CONDITIONAL_JUMP)  ; LAB_00556cdb
    POP ESI                             ; 00556cd8
        ;   Label: LAB_00556cd8
    POP EBX                             ; 00556cd9
    RET                                 ; 00556cda
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 00556cdb
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
        ;   Label: LAB_00556cdb
    CMP EAX,0x1                         ; 00556ce0
    JL 0x00556cd8                       ; 00556ce3
        ;   XREF to: 00556cd8 (CONDITIONAL_JUMP)  ; LAB_00556cd8
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00556ce5
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    MOV EAX,0x2ce721c                   ; 00556cea
    LEA EDX,[EAX + 0x4700]              ; 00556cef
    XOR ECX,ECX                         ; 00556cf5
    CMP ECX,dword ptr [EAX + 0x64]      ; 00556cf7 | DAT_02ce7280 | DAT_02ce739c
        ;   Label: LAB_00556cf7
    JNZ 0x00556d0d                      ; 00556cfa
        ;   XREF to: 00556d0d (CONDITIONAL_JUMP)  ; LAB_00556d0d
    ADD EAX,0x11c                       ; 00556cfc
        ;   Label: LAB_00556cfc
    CMP EAX,EDX                         ; 00556d01
    JNZ 0x00556cf7                      ; 00556d03
        ;   XREF to: 00556cf7 (CONDITIONAL_JUMP)  ; LAB_00556cf7
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 00556d05
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    POP ESI                             ; 00556d0a
    POP EBX                             ; 00556d0b
    RET                                 ; 00556d0c
    CMP ECX,dword ptr [EAX + 0x60]      ; 00556d0d | DAT_02ce7398
        ;   Label: LAB_00556d0d
    JZ 0x00556cfc                       ; 00556d10
        ;   XREF to: 00556cfc (CONDITIONAL_JUMP)  ; LAB_00556cfc
    CMP EBX,dword ptr [EAX]             ; 00556d12 | DAT_02ce7338
    JNZ 0x00556cfc                      ; 00556d14
        ;   XREF to: 00556cfc (CONDITIONAL_JUMP)  ; LAB_00556cfc
    OR byte ptr [EAX + 0x118],0x8       ; 00556d16 | DAT_02ce7450
    JMP 0x00556cfc                      ; 00556d1d
        ;   XREF to: 00556cfc (UNCONDITIONAL_JUMP)  ; LAB_00556cfc

