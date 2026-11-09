; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_00558a50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00604258
;   undefined4 DAT_02cf3c68
;
; Called Functions:
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0
;   sound_sndwav.cpp_getWavInDevice_FUN_0055e630
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0 ; 00558a50
        ;   XREF to: 00558ab0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0()
        ;   Label: sound_sndmain.cpp_initializeRecordingDevice_FUN_00558a50
    TEST EAX,EAX                        ; 00558a55
    JNZ 0x00558a5a                      ; 00558a57
        ;   XREF to: 00558a5a (CONDITIONAL_JUMP)  ; LAB_00558a5a
    RET                                 ; 00558a59
    MOV EDX,dword ptr [0x00604258]      ; 00558a5a | DAT_00604258
        ;   Label: LAB_00558a5a
    PUSH EDX                            ; 00558a60
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0 ; 00558a61
        ;   XREF to: 005589e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0(int device_id)
    MOV ECX,dword ptr [0x00604258]      ; 00558a66 | DAT_00604258
    ADD ESP,0x4                         ; 00558a6c
    TEST ECX,ECX                        ; 00558a6f
    JL 0x00558aa9                       ; 00558a71
        ;   XREF to: 00558aa9 (CONDITIONAL_JUMP)  ; LAB_00558aa9
    MOV EAX,ECX                         ; 00558a73
    SHL EAX,0x5                         ; 00558a75
    ADD EAX,ECX                         ; 00558a78
    SHL EAX,0x3                         ; 00558a7a
    CMP dword ptr [EAX + 0x2cf3528],0x0 ; 00558a7d
    JNZ 0x00558a9c                      ; 00558a84
        ;   XREF to: 00558a9c (CONDITIONAL_JUMP)  ; LAB_00558a9c
    PUSH ESI                            ; 00558a86
    MOV ESI,dword ptr [EAX + 0x2cf352c] ; 00558a87
    PUSH ESI                            ; 00558a8d
    CALL sound_sndwav.cpp_getWavInDevice_FUN_0055e630 ; 00558a8e
        ;   XREF to: 0055e630 (UNCONDITIONAL_CALL)  ; CWavInDevice * sound_sndwav.cpp_getWavInDevice_FUN_0055e630(UINT device_id)
    ADD ESP,0x4                         ; 00558a93
    MOV [0x02cf3c68],EAX                ; 00558a96 | DAT_02cf3c68
    POP ESI                             ; 00558a9b
    CMP dword ptr [0x02cf3c68],0x0      ; 00558a9c | DAT_02cf3c68
        ;   Label: LAB_00558a9c
    JNZ 0x0055827c                      ; 00558aa3
        ;   XREF to: 0055827c (CONDITIONAL_JUMP)  ; LAB_0055827c
    XOR EAX,EAX                         ; 00558aa9
        ;   Label: LAB_00558aa9
    RET                                 ; 00558aab

