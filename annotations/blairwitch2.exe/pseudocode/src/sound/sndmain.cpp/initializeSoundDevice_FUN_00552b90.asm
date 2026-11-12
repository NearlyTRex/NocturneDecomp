; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90(void)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_004ed260 at 004ee109
;   core_sound.cpp_FUN_0055a100 at 0055a137
;
; Referenced Globals:
;   undefined4 DAT_0061bcac
;   undefined4 DAT_026485a8
;   undefined4 DAT_026485ac
;   undefined4 DAT_02648e80
;   undefined4 DAT_02648e88
;
; Called Functions:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_00557910
;   sound_sndmain.cpp_closeSoundDevice_FUN_00552c40
;   sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0
;   sound_sndwav.cpp_getWavOutDevice_FUN_005589e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00552b90
        ;   Label: sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_00552c40 ; 00552b91
        ;   XREF to: 00552c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_00552c40()
    TEST EAX,EAX                        ; 00552b96
    JNZ 0x00552b9c                      ; 00552b98
        ;   XREF to: 00552b9c (CONDITIONAL_JUMP)  ; LAB_00552b9c
    POP EBP                             ; 00552b9a
    RET                                 ; 00552b9b
    MOV EDX,dword ptr [0x0061bcac]      ; 00552b9c | DAT_0061bcac
        ;   Label: LAB_00552b9c
    PUSH EDX                            ; 00552ba2
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0 ; 00552ba3
        ;   XREF to: 00552aa0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0(int device_id)
    MOV ECX,dword ptr [0x0061bcac]      ; 00552ba8 | DAT_0061bcac
    ADD ESP,0x4                         ; 00552bae
    TEST ECX,ECX                        ; 00552bb1
    JL 0x00552c24                       ; 00552bb3
        ;   XREF to: 00552c24 (CONDITIONAL_JUMP)  ; LAB_00552c24
    LEA EAX,[ECX*0x8 + 0x0]             ; 00552bb5
    ADD EAX,ECX                         ; 00552bbc
    SHL EAX,0x2                         ; 00552bbe
    SUB EAX,ECX                         ; 00552bc1
    SHL EAX,0x3                         ; 00552bc3
    CMP dword ptr [EAX + 0x26486c0],0x0 ; 00552bc6 | DAT_026485a8
    JNZ 0x00552be5                      ; 00552bcd
        ;   XREF to: 00552be5 (CONDITIONAL_JUMP)  ; LAB_00552be5
    PUSH ESI                            ; 00552bcf
    MOV ESI,dword ptr [EAX + 0x26486c4] ; 00552bd0 | DAT_026485ac
    PUSH ESI                            ; 00552bd6
    CALL sound_sndwav.cpp_getWavOutDevice_FUN_005589e0 ; 00552bd7
        ;   XREF to: 005589e0 (UNCONDITIONAL_CALL)  ; CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_005589e0(UINT device_id)
    ADD ESP,0x4                         ; 00552bdc
    MOV [0x02648e80],EAX                ; 00552bdf | DAT_02648e80
    POP ESI                             ; 00552be4
    MOV EDX,dword ptr [0x0061bcac]      ; 00552be5 | DAT_0061bcac
        ;   Label: LAB_00552be5
    LEA EAX,[EDX*0x8 + 0x0]             ; 00552beb
    ADD EAX,EDX                         ; 00552bf2
    SHL EAX,0x2                         ; 00552bf4
    SUB EAX,EDX                         ; 00552bf7
    SHL EAX,0x3                         ; 00552bf9
    CMP dword ptr [EAX + 0x26486c0],0x1 ; 00552bfc | DAT_026485a8
    JNZ 0x00552c19                      ; 00552c03
        ;   XREF to: 00552c19 (CONDITIONAL_JUMP)  ; LAB_00552c19
    MOV EBP,dword ptr [EAX + 0x26486c4] ; 00552c05 | DAT_026485ac
    PUSH EBP                            ; 00552c0b
    CALL sound_snddx.cpp_getDirectSoundDevice_FUN_00557910 ; 00552c0c
        ;   XREF to: 00557910 (UNCONDITIONAL_CALL)  ; CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_00557910(UINT device_id)
    ADD ESP,0x4                         ; 00552c11
    MOV [0x02648e80],EAX                ; 00552c14 | DAT_02648e80
    MOV EAX,[0x02648e80]                ; 00552c19 | DAT_02648e80
        ;   Label: LAB_00552c19
    TEST EAX,EAX                        ; 00552c1e
    JNZ 0x00552c28                      ; 00552c20
        ;   XREF to: 00552c28 (CONDITIONAL_JUMP)  ; LAB_00552c28
    POP EBP                             ; 00552c22
    RET                                 ; 00552c23
    XOR EAX,EAX                         ; 00552c24
        ;   Label: LAB_00552c24
    POP EBP                             ; 00552c26
    RET                                 ; 00552c27
    PUSH EAX                            ; 00552c28
        ;   Label: LAB_00552c28
    MOV EDX,dword ptr [EAX]             ; 00552c29
    CALL dword ptr [EDX + 0x14]         ; 00552c2b
    ADD ESP,0x4                         ; 00552c2e
    MOV [0x02648e88],EAX                ; 00552c31 | DAT_02648e88
    MOV EAX,0x1                         ; 00552c36
    POP EBP                             ; 00552c3b
    RET                                 ; 00552c3c

