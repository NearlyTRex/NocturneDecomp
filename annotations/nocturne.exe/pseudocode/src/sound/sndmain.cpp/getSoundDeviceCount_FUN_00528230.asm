; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(void)
;
;
; XREF[6]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d18a1
;   sound_sndmain.cpp_findBestSoundDevice_FUN_00528320 at 00528328
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 at 005282c7
;   sound_sndmain.cpp_readIni_FUN_005289f0 at 00528a3c
;   sound_sndmain.cpp_selectSoundDevice_FUN_00528410 at 00528428
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528cae
;
; Referenced Globals:
;   undefined4 DAT_005bea70
;
; Called Functions:
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;   sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528230
        ;   Label: sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
    MOV EBX,dword ptr [0x005bea70]      ; 00528231 | DAT_005bea70
    TEST EBX,EBX                        ; 00528237
    JL 0x00528245                       ; 00528239
        ;   XREF to: 00528245 (CONDITIONAL_JUMP)  ; LAB_00528245
    MOV EAX,EBX                         ; 0052823b
    MOV dword ptr [0x005bea70],EBX      ; 0052823d | DAT_005bea70
    POP EBX                             ; 00528243
    RET                                 ; 00528244
    PUSH ESI                            ; 00528245
        ;   Label: LAB_00528245
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00528246
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052824b
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    XOR EBX,EBX                         ; 00528250
    XOR ESI,ESI                         ; 00528252
    IMUL EAX,EBX,0x118                  ; 00528254
        ;   Label: LAB_00528254
    ADD EAX,0x2dc7a58                   ; 0052825a
    PUSH EAX                            ; 0052825f
    PUSH ESI                            ; 00528260
    MOV dword ptr [0x005bea70],EBX      ; 00528261 | DAT_005bea70
    CALL sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0 ; 00528267
        ;   XREF to: 0052c6c0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x005bea70]      ; 0052826c | DAT_005bea70
    ADD ESP,0x8                         ; 00528272
    TEST EAX,EAX                        ; 00528275
    JZ 0x00528280                       ; 00528277
        ;   XREF to: 00528280 (CONDITIONAL_JUMP)  ; LAB_00528280
    INC EBX                             ; 00528279
    INC ESI                             ; 0052827a
    CMP EBX,0x8                         ; 0052827b
    JL 0x00528254                       ; 0052827e
        ;   XREF to: 00528254 (CONDITIONAL_JUMP)  ; LAB_00528254
    XOR ESI,ESI                         ; 00528280
        ;   Label: LAB_00528280
    CMP EBX,0x8                         ; 00528282
    JGE 0x005282b3                      ; 00528285
        ;   XREF to: 005282b3 (CONDITIONAL_JUMP)  ; LAB_005282b3
    IMUL EAX,EBX,0x118                  ; 00528287
        ;   Label: LAB_00528287
    ADD EAX,0x2dc7a58                   ; 0052828d
    PUSH EAX                            ; 00528292
    PUSH ESI                            ; 00528293
    MOV dword ptr [0x005bea70],EBX      ; 00528294 | DAT_005bea70
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40 ; 0052829a
        ;   XREF to: 0052be40 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x005bea70]      ; 0052829f | DAT_005bea70
    ADD ESP,0x8                         ; 005282a5
    TEST EAX,EAX                        ; 005282a8
    JZ 0x005282b3                       ; 005282aa
        ;   XREF to: 005282b3 (CONDITIONAL_JUMP)  ; LAB_005282b3
    INC EBX                             ; 005282ac
    INC ESI                             ; 005282ad
    CMP EBX,0x8                         ; 005282ae
    JL 0x00528287                       ; 005282b1
        ;   XREF to: 00528287 (CONDITIONAL_JUMP)  ; LAB_00528287
    MOV EAX,EBX                         ; 005282b3
        ;   Label: LAB_005282b3
    POP ESI                             ; 005282b5
    MOV dword ptr [0x005bea70],EBX      ; 005282b6 | DAT_005bea70
    POP EBX                             ; 005282bc
    RET                                 ; 005282bd

