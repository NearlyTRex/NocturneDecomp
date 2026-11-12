; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(void)
;
;
; XREF[6]:
;   core_menu.cpp_FUN_0050ba70 at 0050c058
;   sound_sndmain.cpp_findBestSoundDevice_FUN_005753b0 at 005753b8
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 at 00575357
;   sound_sndmain.cpp_readIni_FUN_005760b0 at 005760fa
;   sound_sndmain.cpp_selectSoundDevice_FUN_005754d0 at 005754e8
;   sound_sndmain.cpp_writeIni_FUN_005763b0 at 005763de
;
; Referenced Globals:
;   undefined4 DAT_006232f8
;
; Called Functions:
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0057a290
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndwav.cpp_enumerateWavOutDevice_FUN_0057b370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005752c0
        ;   Label: sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0
    MOV EBX,dword ptr [0x006232f8]      ; 005752c1 | DAT_006232f8
    TEST EBX,EBX                        ; 005752c7
    JL 0x005752d5                       ; 005752c9
        ;   XREF to: 005752d5 (CONDITIONAL_JUMP)  ; LAB_005752d5
    MOV EAX,EBX                         ; 005752cb
    MOV dword ptr [0x006232f8],EBX      ; 005752cd | DAT_006232f8
    POP EBX                             ; 005752d3
    RET                                 ; 005752d4
    PUSH ESI                            ; 005752d5
        ;   Label: LAB_005752d5
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 005752d6
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005752db
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    XOR EBX,EBX                         ; 005752e0
    XOR ESI,ESI                         ; 005752e2
    IMUL EAX,EBX,0x118                  ; 005752e4
        ;   Label: LAB_005752e4
    ADD EAX,0x2c7fd90                   ; 005752ea
    PUSH EAX                            ; 005752ef
    PUSH ESI                            ; 005752f0
    MOV dword ptr [0x006232f8],EBX      ; 005752f1 | DAT_006232f8
    CALL sound_sndwav.cpp_enumerateWavOutDevice_FUN_0057b370 ; 005752f7
        ;   XREF to: 0057b370 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_enumerateWavOutDevice_FUN_0057b370(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x006232f8]      ; 005752fc | DAT_006232f8
    ADD ESP,0x8                         ; 00575302
    TEST EAX,EAX                        ; 00575305
    JZ 0x00575310                       ; 00575307
        ;   XREF to: 00575310 (CONDITIONAL_JUMP)  ; LAB_00575310
    INC EBX                             ; 00575309
    INC ESI                             ; 0057530a
    CMP EBX,0x8                         ; 0057530b
    JL 0x005752e4                       ; 0057530e
        ;   XREF to: 005752e4 (CONDITIONAL_JUMP)  ; LAB_005752e4
    XOR ESI,ESI                         ; 00575310
        ;   Label: LAB_00575310
    CMP EBX,0x8                         ; 00575312
    JGE 0x00575343                      ; 00575315
        ;   XREF to: 00575343 (CONDITIONAL_JUMP)  ; LAB_00575343
    IMUL EAX,EBX,0x118                  ; 00575317
        ;   Label: LAB_00575317
    ADD EAX,0x2c7fd90                   ; 0057531d
    PUSH EAX                            ; 00575322
    PUSH ESI                            ; 00575323
    MOV dword ptr [0x006232f8],EBX      ; 00575324 | DAT_006232f8
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0057a290 ; 0057532a
        ;   XREF to: 0057a290 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0057a290(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x006232f8]      ; 0057532f | DAT_006232f8
    ADD ESP,0x8                         ; 00575335
    TEST EAX,EAX                        ; 00575338
    JZ 0x00575343                       ; 0057533a
        ;   XREF to: 00575343 (CONDITIONAL_JUMP)  ; LAB_00575343
    INC EBX                             ; 0057533c
    INC ESI                             ; 0057533d
    CMP EBX,0x8                         ; 0057533e
    JL 0x00575317                       ; 00575341
        ;   XREF to: 00575317 (CONDITIONAL_JUMP)  ; LAB_00575317
    MOV EAX,EBX                         ; 00575343
        ;   Label: LAB_00575343
    POP ESI                             ; 00575345
    MOV dword ptr [0x006232f8],EBX      ; 00575346 | DAT_006232f8
    POP EBX                             ; 0057534c
    RET                                 ; 0057534d

