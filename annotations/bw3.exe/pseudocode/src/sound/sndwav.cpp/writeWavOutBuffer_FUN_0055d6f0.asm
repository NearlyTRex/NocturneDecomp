; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndwav.cpp_CWavOutDevice_poll_FUN_0055dc40 at 0055dc97
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_0055d920 at 0055d987
;
; Referenced Globals:
;   void* PTR_waveOutPrepareHeader_005b3488 = 001b3a02
;   void* PTR_waveOutUnprepareHeader_005b3490 = 001b3a2a
;   void* PTR_waveOutWrite_005b3494 = 001b3a44
;   TerminatedCString s_waveOutUnprepareHeader_f_005d4f60
;   TerminatedCString s_waveOutPrepareHeader_fai_005d4f7f
;   TerminatedCString s_waveOutWrite_failed_005d4f9c
;   undefined4 DAT_02cf546c
;   undefined4 DAT_02cf54f0
;   undefined4 DAT_02cf54f4
;   undefined4 DAT_02cf54f8
;   undefined4 DAT_02cf54fc
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90
;   waveOutPrepareHeader
;   waveOutUnprepareHeader
;   waveOutWrite
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d6f0
        ;   Label: sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0
    PUSH ESI                            ; 0055d6f1
    PUSH EDI                            ; 0055d6f2
    PUSH EBP                            ; 0055d6f3
    SUB ESP,0x24                        ; 0055d6f4
    MOV EDI,dword ptr [ESP + 0x38]      ; 0055d6f7
    SHL EDI,0x2                         ; 0055d6fb
    CMP dword ptr [EDI + 0x2cf54d0],0x0 ; 0055d6fe
    JZ 0x0055d711                       ; 0055d705
        ;   XREF to: 0055d711 (CONDITIONAL_JUMP)  ; LAB_0055d711
    MOV ECX,dword ptr [EDI + 0x2cf5490] ; 0055d707
    TEST ECX,ECX                        ; 0055d70d
    JNZ 0x0055d71b                      ; 0055d70f
        ;   XREF to: 0055d71b (CONDITIONAL_JUMP)  ; LAB_0055d71b
    XOR EAX,EAX                         ; 0055d711
        ;   Label: LAB_0055d711
    ADD ESP,0x24                        ; 0055d713
    POP EBP                             ; 0055d716
    POP EDI                             ; 0055d717
    POP ESI                             ; 0055d718
    POP EBX                             ; 0055d719
    RET                                 ; 0055d71a
    PUSH 0x20                           ; 0055d71b
        ;   Label: LAB_0055d71b
    PUSH ECX                            ; 0055d71d
    MOV ESI,dword ptr [0x02cf546c]      ; 0055d71e | DAT_02cf546c
    PUSH ESI                            ; 0055d724
    CALL dword ptr CS:[0x5b3490]        ; 0055d725 | PTR_waveOutUnprepareHeader_005b3490
    TEST EAX,EAX                        ; 0055d72c
    JNZ 0x0055d824                      ; 0055d72e
        ;   XREF to: 0055d824 (CONDITIONAL_JUMP)  ; LAB_0055d824
    MOV EAX,[0x02cf54f0]                ; 0055d734 | DAT_02cf54f0
    MOV EDX,EAX                         ; 0055d739
    SAR EDX,0x1f                        ; 0055d73b
    SHL EDX,0x3                         ; 0055d73e
    SBB EAX,EDX                         ; 0055d741
    SAR EAX,0x3                         ; 0055d743
    MOV EBP,EAX                         ; 0055d746
    MOV ESI,EBP                         ; 0055d748
    IMUL EDX,EBP,0x0                    ; 0055d74a
    MOV EBX,dword ptr [0x02cf54f4]      ; 0055d74d | DAT_02cf54f4
    MOV dword ptr [ESP + 0x20],EDI      ; 0055d753
    SHL EBX,0x2                         ; 0055d757
    XOR EAX,EAX                         ; 0055d75a
    TEST EBX,EBX                        ; 0055d75c
    JLE 0x0055d780                      ; 0055d75e
        ;   XREF to: 0055d780 (CONDITIONAL_JUMP)  ; LAB_0055d780
    MOV EDI,dword ptr [EDI + 0x2cf54d0] ; 0055d760
    ADD EAX,0x4                         ; 0055d766
        ;   Label: LAB_0055d766
    LEA ECX,[EDI + EDX*0x1]             ; 0055d769
    ADD EDX,ESI                         ; 0055d76c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 0055d76e
    CMP EAX,EBX                         ; 0055d772
    JL 0x0055d766                       ; 0055d774
        ;   XREF to: 0055d766 (CONDITIONAL_JUMP)  ; LAB_0055d766
    LEA EAX,[EAX]                       ; 0055d776
    LEA EDX,[EDX]                       ; 0055d77c
    MOV EDI,dword ptr [0x02cf54f4]      ; 0055d780 | DAT_02cf54f4
        ;   Label: LAB_0055d780
    IMUL EBP,EDI                        ; 0055d786
    PUSH EBP                            ; 0055d789
    MOV EBP,dword ptr [0x02cf54fc]      ; 0055d78a | DAT_02cf54fc
    PUSH EBP                            ; 0055d790
    MOV EAX,[0x02cf54f8]                ; 0055d791 | DAT_02cf54f8
    PUSH EAX                            ; 0055d796
    PUSH EDI                            ; 0055d797
    MOV ECX,dword ptr [0x02cf54f0]      ; 0055d798 | DAT_02cf54f0
    PUSH ECX                            ; 0055d79e
    LEA EAX,[ESP + 0x14]                ; 0055d79f
    PUSH EAX                            ; 0055d7a3
    CALL sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90 ; 0055d7a4
        ;   XREF to: 00559d90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, ...)
    MOV EAX,[0x02cf54f0]                ; 0055d7a9 | DAT_02cf54f0
    MOV EDX,EAX                         ; 0055d7ae
    SAR EDX,0x1f                        ; 0055d7b0
    SHL EDX,0x3                         ; 0055d7b3
    SBB EAX,EDX                         ; 0055d7b6
    SAR EAX,0x3                         ; 0055d7b8
    IMUL EAX,dword ptr [0x02cf54fc]     ; 0055d7bb | DAT_02cf54fc
    IMUL EAX,dword ptr [0x02cf54f4]     ; 0055d7c2 | DAT_02cf54f4
    ADD ESP,0x18                        ; 0055d7c9
    MOV EDX,dword ptr [ESP + 0x20]      ; 0055d7cc
    MOV EDX,dword ptr [EDX + 0x2cf5490] ; 0055d7d0
    MOV dword ptr [EDX + 0x4],EAX       ; 0055d7d6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0055d7d9
    PUSH 0x20                           ; 0055d7dd
    MOV EDI,dword ptr [EAX + 0x2cf5490] ; 0055d7df
    PUSH EDI                            ; 0055d7e5
    MOV EBP,dword ptr [0x02cf546c]      ; 0055d7e6 | DAT_02cf546c
    PUSH EBP                            ; 0055d7ec
    CALL dword ptr CS:[0x5b3488]        ; 0055d7ed | PTR_waveOutPrepareHeader_005b3488
    TEST EAX,EAX                        ; 0055d7f4
    JNZ 0x0055d83b                      ; 0055d7f6
        ;   XREF to: 0055d83b (CONDITIONAL_JUMP)  ; LAB_0055d83b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0055d7f8
    PUSH 0x20                           ; 0055d7fc
    MOV EDX,dword ptr [EAX + 0x2cf5490] ; 0055d7fe
    PUSH EDX                            ; 0055d804
    MOV ECX,dword ptr [0x02cf546c]      ; 0055d805 | DAT_02cf546c
    PUSH ECX                            ; 0055d80b
    CALL dword ptr CS:[0x5b3494]        ; 0055d80c | PTR_waveOutWrite_005b3494
    TEST EAX,EAX                        ; 0055d813
    JNZ 0x0055d852                      ; 0055d815
        ;   XREF to: 0055d852 (CONDITIONAL_JUMP)  ; LAB_0055d852
    MOV EAX,0x1                         ; 0055d817
    ADD ESP,0x24                        ; 0055d81c
    POP EBP                             ; 0055d81f
    POP EDI                             ; 0055d820
    POP ESI                             ; 0055d821
    POP EBX                             ; 0055d822
    RET                                 ; 0055d823
    PUSH 0x5d4f60                       ; 0055d824 | = "waveOutUnprepareHeader failed!"
        ;   Label: LAB_0055d824
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055d829
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055d82e
    XOR EAX,EAX                         ; 0055d831
    ADD ESP,0x24                        ; 0055d833
    POP EBP                             ; 0055d836
    POP EDI                             ; 0055d837
    POP ESI                             ; 0055d838
    POP EBX                             ; 0055d839
    RET                                 ; 0055d83a
    PUSH 0x5d4f7f                       ; 0055d83b | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_0055d83b
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055d840
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055d845
    XOR EAX,EAX                         ; 0055d848
    ADD ESP,0x24                        ; 0055d84a
    POP EBP                             ; 0055d84d
    POP EDI                             ; 0055d84e
    POP ESI                             ; 0055d84f
    POP EBX                             ; 0055d850
    RET                                 ; 0055d851
    PUSH 0x5d4f9c                       ; 0055d852 | = "waveOutWrite failed!"
        ;   Label: LAB_0055d852
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055d857
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055d85c
    XOR EAX,EAX                         ; 0055d85f
    ADD ESP,0x24                        ; 0055d861
    POP EBP                             ; 0055d864
    POP EDI                             ; 0055d865
    POP ESI                             ; 0055d866
    POP EBX                             ; 0055d867
    RET                                 ; 0055d868

