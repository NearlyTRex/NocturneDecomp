; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0(void)
;
;
; XREF[4]:
;   sound_sndmain.cpp_FUN_00559220 at 005592a2
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_00558960 at 00558968
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900 at 00558907
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0 at 005589f8
;
; Referenced Globals:
;   undefined4 DAT_00604238
;   undefined4 DAT_00604254
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_FUN_00558e90
;   sound_sndwav.cpp_enumerateWavInDevice_FUN_0055e590
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005588a0
        ;   Label: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
    MOV ESI,dword ptr [0x00604254]      ; 005588a1 | DAT_00604254
    TEST ESI,ESI                        ; 005588a7
    JL 0x005588b5                       ; 005588a9
        ;   XREF to: 005588b5 (CONDITIONAL_JUMP)  ; LAB_005588b5
    MOV EAX,ESI                         ; 005588ab
    MOV dword ptr [0x00604254],ESI      ; 005588ad | DAT_00604254
    POP ESI                             ; 005588b3
    RET                                 ; 005588b4
    PUSH EBX                            ; 005588b5
        ;   Label: LAB_005588b5
    CALL sound_sndmain.cpp_FUN_00558e90 ; 005588b6
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00558e90()
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 005588bb
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    XOR ESI,ESI                         ; 005588c0
    XOR EBX,EBX                         ; 005588c2
    IMUL EAX,ESI,0x108                  ; 005588c4
        ;   Label: LAB_005588c4
    ADD EAX,0x2cf3428                   ; 005588ca
    PUSH EAX                            ; 005588cf
    PUSH EBX                            ; 005588d0
    MOV dword ptr [0x00604254],ESI      ; 005588d1 | DAT_00604254
    CALL sound_sndwav.cpp_enumerateWavInDevice_FUN_0055e590 ; 005588d7
        ;   XREF to: 0055e590 (UNCONDITIONAL_CALL)  ; undefined sound_sndwav.cpp_enumerateWavInDevice_FUN_0055e590()
    MOV ESI,dword ptr [0x00604254]      ; 005588dc | DAT_00604254
    ADD ESP,0x8                         ; 005588e2
    TEST EAX,EAX                        ; 005588e5
    JZ 0x005588f0                       ; 005588e7
        ;   XREF to: 005588f0 (CONDITIONAL_JUMP)  ; LAB_005588f0
    INC ESI                             ; 005588e9
    INC EBX                             ; 005588ea
    CMP ESI,0x8                         ; 005588eb
    JL 0x005588c4                       ; 005588ee
        ;   XREF to: 005588c4 (CONDITIONAL_JUMP)  ; LAB_005588c4
    MOV EAX,[0x00604238]                ; 005588f0 | DAT_00604238
        ;   Label: LAB_005588f0
    POP EBX                             ; 005588f5
    MOV dword ptr [0x00604254],ESI      ; 005588f6 | DAT_00604254
    POP ESI                             ; 005588fc
    RET                                 ; 005588fd

