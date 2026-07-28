; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00528500(void)
;
;
; XREF[2]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2141
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20 at 0052dd57
;
; Referenced Globals:
;   undefined4 DAT_005bea74
;   undefined4 DAT_02dc7a40
;   undefined4 DAT_02dc7a44
;   undefined4 DAT_02dc8318
;   undefined4 DAT_02dc8320
;
; Called Functions:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
;   sound_sndmain.cpp_closeSoundDevice_FUN_005285b0
;   sound_sndmain.cpp_selectSoundDevice_FUN_00528410
;   sound_sndwav.cpp_getWavOutDevice_FUN_0052c760
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00528500
        ;   Label: sound_sndmain.cpp_initializeSoundDevice_FUN_00528500
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005285b0 ; 00528501
        ;   XREF to: 005285b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005285b0()
    TEST EAX,EAX                        ; 00528506
    JNZ 0x0052850c                      ; 00528508
        ;   XREF to: 0052850c (CONDITIONAL_JUMP)  ; LAB_0052850c
    POP EBP                             ; 0052850a
    RET                                 ; 0052850b
    MOV EDX,dword ptr [0x005bea74]      ; 0052850c | DAT_005bea74
        ;   Label: LAB_0052850c
    PUSH EDX                            ; 00528512
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00528410 ; 00528513
        ;   XREF to: 00528410 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00528410(int device_id)
    MOV ECX,dword ptr [0x005bea74]      ; 00528518 | DAT_005bea74
    ADD ESP,0x4                         ; 0052851e
    TEST ECX,ECX                        ; 00528521
    JL 0x00528594                       ; 00528523
        ;   XREF to: 00528594 (CONDITIONAL_JUMP)  ; LAB_00528594
    LEA EAX,[ECX*0x8 + 0x0]             ; 00528525
    ADD EAX,ECX                         ; 0052852c
    SHL EAX,0x2                         ; 0052852e
    SUB EAX,ECX                         ; 00528531
    SHL EAX,0x3                         ; 00528533
    CMP dword ptr [EAX + 0x2dc7b58],0x0 ; 00528536 | DAT_02dc7a40
    JNZ 0x00528555                      ; 0052853d
        ;   XREF to: 00528555 (CONDITIONAL_JUMP)  ; LAB_00528555
    PUSH ESI                            ; 0052853f
    MOV ESI,dword ptr [EAX + 0x2dc7b5c] ; 00528540 | DAT_02dc7a44
    PUSH ESI                            ; 00528546
    CALL sound_sndwav.cpp_getWavOutDevice_FUN_0052c760 ; 00528547
        ;   XREF to: 0052c760 (UNCONDITIONAL_CALL)  ; CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_0052c760(UINT device_id)
    ADD ESP,0x4                         ; 0052854c
    MOV [0x02dc8318],EAX                ; 0052854f | DAT_02dc8318
    POP ESI                             ; 00528554
    MOV EDX,dword ptr [0x005bea74]      ; 00528555 | DAT_005bea74
        ;   Label: LAB_00528555
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052855b
    ADD EAX,EDX                         ; 00528562
    SHL EAX,0x2                         ; 00528564
    SUB EAX,EDX                         ; 00528567
    SHL EAX,0x3                         ; 00528569
    CMP dword ptr [EAX + 0x2dc7b58],0x1 ; 0052856c | DAT_02dc7a40
    JNZ 0x00528589                      ; 00528573
        ;   XREF to: 00528589 (CONDITIONAL_JUMP)  ; LAB_00528589
    MOV EBP,dword ptr [EAX + 0x2dc7b5c] ; 00528575 | DAT_02dc7a44
    PUSH EBP                            ; 0052857b
    CALL sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0 ; 0052857c
        ;   XREF to: 0052bef0 (UNCONDITIONAL_CALL)  ; CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id)
    ADD ESP,0x4                         ; 00528581
    MOV [0x02dc8318],EAX                ; 00528584 | DAT_02dc8318
    MOV EAX,[0x02dc8318]                ; 00528589 | DAT_02dc8318
        ;   Label: LAB_00528589
    TEST EAX,EAX                        ; 0052858e
    JNZ 0x00528598                      ; 00528590
        ;   XREF to: 00528598 (CONDITIONAL_JUMP)  ; LAB_00528598
    POP EBP                             ; 00528592
    RET                                 ; 00528593
    XOR EAX,EAX                         ; 00528594
        ;   Label: LAB_00528594
    POP EBP                             ; 00528596
    RET                                 ; 00528597
    PUSH EAX                            ; 00528598
        ;   Label: LAB_00528598
    MOV EDX,dword ptr [EAX]             ; 00528599
    CALL dword ptr [EDX + 0x14]         ; 0052859b
    ADD ESP,0x4                         ; 0052859e
    MOV [0x02dc8320],EAX                ; 005285a1 | DAT_02dc8320
    MOV EAX,0x1                         ; 005285a6
    POP EBP                             ; 005285ab
    RET                                 ; 005285ac

