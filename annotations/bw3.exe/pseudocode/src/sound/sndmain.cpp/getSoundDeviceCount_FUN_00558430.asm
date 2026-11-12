; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(void)
;
;
; XREF[6]:
;   core_menu.cpp_FUN_004e94f0 at 004e9c40
;   sound_sndmain.cpp_findBestSoundDevice_FUN_00558520 at 00558528
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 at 005584c7
;   sound_sndmain.cpp_readIni_FUN_00559220 at 0055926a
;   sound_sndmain.cpp_selectSoundDevice_FUN_00558640 at 00558658
;   sound_sndmain.cpp_writeIni_FUN_00559520 at 0055954e
;
; Referenced Globals:
;   undefined4 DAT_00604238
;
; Called Functions:
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndwav.cpp_enumerateWavOutDevice_FUN_0055e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558430
        ;   Label: sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430
    MOV EBX,dword ptr [0x00604238]      ; 00558431 | DAT_00604238
    TEST EBX,EBX                        ; 00558437
    JL 0x00558445                       ; 00558439
        ;   XREF to: 00558445 (CONDITIONAL_JUMP)  ; LAB_00558445
    MOV EAX,EBX                         ; 0055843b
    MOV dword ptr [0x00604238],EBX      ; 0055843d | DAT_00604238
    POP EBX                             ; 00558443
    RET                                 ; 00558444
    PUSH ESI                            ; 00558445
        ;   Label: LAB_00558445
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00558446
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 0055844b
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    XOR EBX,EBX                         ; 00558450
    XOR ESI,ESI                         ; 00558452
    IMUL EAX,EBX,0x118                  ; 00558454
        ;   Label: LAB_00558454
    ADD EAX,0x2cf29c0                   ; 0055845a
    PUSH EAX                            ; 0055845f
    PUSH ESI                            ; 00558460
    MOV dword ptr [0x00604238],EBX      ; 00558461 | DAT_00604238
    CALL sound_sndwav.cpp_enumerateWavOutDevice_FUN_0055e4a0 ; 00558467
        ;   XREF to: 0055e4a0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_enumerateWavOutDevice_FUN_0055e4a0(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x00604238]      ; 0055846c | DAT_00604238
    ADD ESP,0x8                         ; 00558472
    TEST EAX,EAX                        ; 00558475
    JZ 0x00558480                       ; 00558477
        ;   XREF to: 00558480 (CONDITIONAL_JUMP)  ; LAB_00558480
    INC EBX                             ; 00558479
    INC ESI                             ; 0055847a
    CMP EBX,0x8                         ; 0055847b
    JL 0x00558454                       ; 0055847e
        ;   XREF to: 00558454 (CONDITIONAL_JUMP)  ; LAB_00558454
    XOR ESI,ESI                         ; 00558480
        ;   Label: LAB_00558480
    CMP EBX,0x8                         ; 00558482
    JGE 0x005584b3                      ; 00558485
        ;   XREF to: 005584b3 (CONDITIONAL_JUMP)  ; LAB_005584b3
    IMUL EAX,EBX,0x118                  ; 00558487
        ;   Label: LAB_00558487
    ADD EAX,0x2cf29c0                   ; 0055848d
    PUSH EAX                            ; 00558492
    PUSH ESI                            ; 00558493
    MOV dword ptr [0x00604238],EBX      ; 00558494 | DAT_00604238
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0 ; 0055849a
        ;   XREF to: 0055d3c0 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x00604238]      ; 0055849f | DAT_00604238
    ADD ESP,0x8                         ; 005584a5
    TEST EAX,EAX                        ; 005584a8
    JZ 0x005584b3                       ; 005584aa
        ;   XREF to: 005584b3 (CONDITIONAL_JUMP)  ; LAB_005584b3
    INC EBX                             ; 005584ac
    INC ESI                             ; 005584ad
    CMP EBX,0x8                         ; 005584ae
    JL 0x00558487                       ; 005584b1
        ;   XREF to: 00558487 (CONDITIONAL_JUMP)  ; LAB_00558487
    MOV EAX,EBX                         ; 005584b3
        ;   Label: LAB_005584b3
    POP ESI                             ; 005584b5
    MOV dword ptr [0x00604238],EBX      ; 005584b6 | DAT_00604238
    POP EBX                             ; 005584bc
    RET                                 ; 005584bd

