; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00558730(void)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_004e94f0 at 004e9d23
;   core_sound.cpp_FUN_0055fc60 at 0055fc97
;
; Referenced Globals:
;   undefined4 DAT_0060423c
;   undefined4 DAT_02cf29a8
;   undefined4 DAT_02cf29ac
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3288
;
; Called Functions:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470
;   sound_sndmain.cpp_closeSoundDevice_FUN_005587e0
;   sound_sndmain.cpp_selectSoundDevice_FUN_00558640
;   sound_sndwav.cpp_getWavOutDevice_FUN_0055e540
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00558730
        ;   Label: sound_sndmain.cpp_initializeSoundDevice_FUN_00558730
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005587e0 ; 00558731
        ;   XREF to: 005587e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005587e0()
    TEST EAX,EAX                        ; 00558736
    JNZ 0x0055873c                      ; 00558738
        ;   XREF to: 0055873c (CONDITIONAL_JUMP)  ; LAB_0055873c
    POP EBP                             ; 0055873a
    RET                                 ; 0055873b
    MOV EDX,dword ptr [0x0060423c]      ; 0055873c | DAT_0060423c
        ;   Label: LAB_0055873c
    PUSH EDX                            ; 00558742
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00558640 ; 00558743
        ;   XREF to: 00558640 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00558640(int device_id)
    MOV ECX,dword ptr [0x0060423c]      ; 00558748 | DAT_0060423c
    ADD ESP,0x4                         ; 0055874e
    TEST ECX,ECX                        ; 00558751
    JL 0x005587c4                       ; 00558753
        ;   XREF to: 005587c4 (CONDITIONAL_JUMP)  ; LAB_005587c4
    LEA EAX,[ECX*0x8 + 0x0]             ; 00558755
    ADD EAX,ECX                         ; 0055875c
    SHL EAX,0x2                         ; 0055875e
    SUB EAX,ECX                         ; 00558761
    SHL EAX,0x3                         ; 00558763
    CMP dword ptr [EAX + 0x2cf2ac0],0x0 ; 00558766 | DAT_02cf29a8
    JNZ 0x00558785                      ; 0055876d
        ;   XREF to: 00558785 (CONDITIONAL_JUMP)  ; LAB_00558785
    PUSH ESI                            ; 0055876f
    MOV ESI,dword ptr [EAX + 0x2cf2ac4] ; 00558770 | DAT_02cf29ac
    PUSH ESI                            ; 00558776
    CALL sound_sndwav.cpp_getWavOutDevice_FUN_0055e540 ; 00558777
        ;   XREF to: 0055e540 (UNCONDITIONAL_CALL)  ; CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_0055e540(UINT device_id)
    ADD ESP,0x4                         ; 0055877c
    MOV [0x02cf3280],EAX                ; 0055877f | DAT_02cf3280
    POP ESI                             ; 00558784
    MOV EDX,dword ptr [0x0060423c]      ; 00558785 | DAT_0060423c
        ;   Label: LAB_00558785
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055878b
    ADD EAX,EDX                         ; 00558792
    SHL EAX,0x2                         ; 00558794
    SUB EAX,EDX                         ; 00558797
    SHL EAX,0x3                         ; 00558799
    CMP dword ptr [EAX + 0x2cf2ac0],0x1 ; 0055879c | DAT_02cf29a8
    JNZ 0x005587b9                      ; 005587a3
        ;   XREF to: 005587b9 (CONDITIONAL_JUMP)  ; LAB_005587b9
    MOV EBP,dword ptr [EAX + 0x2cf2ac4] ; 005587a5 | DAT_02cf29ac
    PUSH EBP                            ; 005587ab
    CALL sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470 ; 005587ac
        ;   XREF to: 0055d470 (UNCONDITIONAL_CALL)  ; CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470(UINT device_id)
    ADD ESP,0x4                         ; 005587b1
    MOV [0x02cf3280],EAX                ; 005587b4 | DAT_02cf3280
    MOV EAX,[0x02cf3280]                ; 005587b9 | DAT_02cf3280
        ;   Label: LAB_005587b9
    TEST EAX,EAX                        ; 005587be
    JNZ 0x005587c8                      ; 005587c0
        ;   XREF to: 005587c8 (CONDITIONAL_JUMP)  ; LAB_005587c8
    POP EBP                             ; 005587c2
    RET                                 ; 005587c3
    XOR EAX,EAX                         ; 005587c4
        ;   Label: LAB_005587c4
    POP EBP                             ; 005587c6
    RET                                 ; 005587c7
    PUSH EAX                            ; 005587c8
        ;   Label: LAB_005587c8
    MOV EDX,dword ptr [EAX]             ; 005587c9
    CALL dword ptr [EDX + 0x14]         ; 005587cb
    ADD ESP,0x4                         ; 005587ce
    MOV [0x02cf3288],EAX                ; 005587d1 | DAT_02cf3288
    MOV EAX,0x1                         ; 005587d6
    POP EBP                             ; 005587db
    RET                                 ; 005587dc

