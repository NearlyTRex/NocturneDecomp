; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_00557e90(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveOutReset_005c8480 = 001c8a02
;   void* PTR_waveOutUnprepareHeader_005c8484 = 001c8a12
;   undefined4 s_waveOutReset_failed_005ea57c+1
;   undefined4 DAT_0264b070
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005549c0
;   sound_sndmain.cpp_killSoundThread_FUN_00553270
;   waveOutReset
;   waveOutUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557e90
        ;   Label: sound_sndwav.cpp_CWavOutDevice_reset_FUN_00557e90
    PUSH ESI                            ; 00557e91
    PUSH EDI                            ; 00557e92
    MOV EDX,dword ptr [0x0264b070]      ; 00557e93 | DAT_0264b070
    MOV ESI,0x1                         ; 00557e99
    TEST EDX,EDX                        ; 00557e9e
    JNZ 0x00557ed5                      ; 00557ea0
        ;   XREF to: 00557ed5 (CONDITIONAL_JUMP)  ; LAB_00557ed5
    XOR EBX,EBX                         ; 00557ea2
        ;   Label: LAB_00557ea2
    MOV EDI,dword ptr [EBX + 0x264b094] ; 00557ea4
        ;   Label: LAB_00557ea4
    TEST EDI,EDI                        ; 00557eaa
    JZ 0x00557ebe                       ; 00557eac
        ;   XREF to: 00557ebe (CONDITIONAL_JUMP)  ; LAB_00557ebe
    PUSH 0x20                           ; 00557eae
    PUSH EDI                            ; 00557eb0
    MOV EAX,[0x0264b070]                ; 00557eb1 | DAT_0264b070
    PUSH EAX                            ; 00557eb6
    CALL dword ptr CS:[0x5c8484]        ; 00557eb7 | PTR_waveOutUnprepareHeader_005c8484
    ADD EBX,0x4                         ; 00557ebe
        ;   Label: LAB_00557ebe
    CMP EBX,0x20                        ; 00557ec1
    JNZ 0x00557ea4                      ; 00557ec4
        ;   XREF to: 00557ea4 (CONDITIONAL_JUMP)  ; LAB_00557ea4
    CALL sound_sndmain.cpp_killSoundThread_FUN_00553270 ; 00557ec6
        ;   XREF to: 00553270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00553270()
    TEST EAX,EAX                        ; 00557ecb
    JZ 0x00557ef2                       ; 00557ecd
        ;   XREF to: 00557ef2 (CONDITIONAL_JUMP)  ; LAB_00557ef2
    MOV EAX,ESI                         ; 00557ecf
    POP EDI                             ; 00557ed1
    POP ESI                             ; 00557ed2
    POP EBX                             ; 00557ed3
    RET                                 ; 00557ed4
    PUSH EDX                            ; 00557ed5
        ;   Label: LAB_00557ed5
    CALL dword ptr CS:[0x5c8480]        ; 00557ed6 | PTR_waveOutReset_005c8480
    TEST EAX,EAX                        ; 00557edd
    JZ 0x00557ea2                       ; 00557edf
        ;   XREF to: 00557ea2 (CONDITIONAL_JUMP)  ; LAB_00557ea2
    PUSH 0x5ea57d                       ; 00557ee1 | s_waveOutReset_failed_005ea57c+1
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557ee6
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    XOR ESI,ESI                         ; 00557eeb
    ADD ESP,0x4                         ; 00557eed
    JMP 0x00557ea2                      ; 00557ef0
        ;   XREF to: 00557ea2 (UNCONDITIONAL_JUMP)  ; LAB_00557ea2
    XOR ESI,ESI                         ; 00557ef2
        ;   Label: LAB_00557ef2
    MOV EAX,ESI                         ; 00557ef4
    POP EDI                             ; 00557ef6
    POP ESI                             ; 00557ef7
    POP EBX                             ; 00557ef8
    RET                                 ; 00557ef9

