; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndwav.cpp_CWavOutDevice_poll_FUN_005580e0 at 00558137
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_00557dc0 at 00557e27
;
; Referenced Globals:
;   void* PTR_waveOutPrepareHeader_005c847c = 001c89ea
;   void* PTR_waveOutUnprepareHeader_005c8484 = 001c8a12
;   void* PTR_waveOutWrite_005c8488 = 001c8a2c
;   TerminatedCString s_waveOutUnprepareHeader_f_005ea50d
;   TerminatedCString s_waveOutPrepareHeader_fai_005ea52c
;   TerminatedCString s_waveOutWrite_failed_005ea549
;   undefined4 DAT_0264b070
;   undefined4 DAT_0264b0f4
;   undefined4 DAT_0264b0f8
;   undefined4 DAT_0264b0fc
;   undefined4 DAT_0264b100
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005541f0
;   sound_sndmain.cpp_FUN_005549c0
;   waveOutPrepareHeader
;   waveOutUnprepareHeader
;   waveOutWrite
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557b90
        ;   Label: sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90
    PUSH ESI                            ; 00557b91
    PUSH EDI                            ; 00557b92
    PUSH EBP                            ; 00557b93
    SUB ESP,0x24                        ; 00557b94
    MOV EDI,dword ptr [ESP + 0x38]      ; 00557b97
    SHL EDI,0x2                         ; 00557b9b
    CMP dword ptr [EDI + 0x264b0d4],0x0 ; 00557b9e
    JZ 0x00557bb1                       ; 00557ba5
        ;   XREF to: 00557bb1 (CONDITIONAL_JUMP)  ; LAB_00557bb1
    MOV ECX,dword ptr [EDI + 0x264b094] ; 00557ba7
    TEST ECX,ECX                        ; 00557bad
    JNZ 0x00557bbb                      ; 00557baf
        ;   XREF to: 00557bbb (CONDITIONAL_JUMP)  ; LAB_00557bbb
    XOR EAX,EAX                         ; 00557bb1
        ;   Label: LAB_00557bb1
    ADD ESP,0x24                        ; 00557bb3
    POP EBP                             ; 00557bb6
    POP EDI                             ; 00557bb7
    POP ESI                             ; 00557bb8
    POP EBX                             ; 00557bb9
    RET                                 ; 00557bba
    PUSH 0x20                           ; 00557bbb
        ;   Label: LAB_00557bbb
    PUSH ECX                            ; 00557bbd
    MOV ESI,dword ptr [0x0264b070]      ; 00557bbe | DAT_0264b070
    PUSH ESI                            ; 00557bc4
    CALL dword ptr CS:[0x5c8484]        ; 00557bc5 | PTR_waveOutUnprepareHeader_005c8484
    TEST EAX,EAX                        ; 00557bcc
    JNZ 0x00557cc4                      ; 00557bce
        ;   XREF to: 00557cc4 (CONDITIONAL_JUMP)  ; LAB_00557cc4
    MOV EAX,[0x0264b0f4]                ; 00557bd4 | DAT_0264b0f4
    MOV EDX,EAX                         ; 00557bd9
    SAR EDX,0x1f                        ; 00557bdb
    SHL EDX,0x3                         ; 00557bde
    SBB EAX,EDX                         ; 00557be1
    SAR EAX,0x3                         ; 00557be3
    MOV EBP,EAX                         ; 00557be6
    MOV ESI,EBP                         ; 00557be8
    IMUL EDX,EBP,0x0                    ; 00557bea
    MOV EBX,dword ptr [0x0264b0f8]      ; 00557bed | DAT_0264b0f8
    MOV dword ptr [ESP + 0x20],EDI      ; 00557bf3
    SHL EBX,0x2                         ; 00557bf7
    XOR EAX,EAX                         ; 00557bfa
    TEST EBX,EBX                        ; 00557bfc
    JLE 0x00557c20                      ; 00557bfe
        ;   XREF to: 00557c20 (CONDITIONAL_JUMP)  ; LAB_00557c20
    MOV EDI,dword ptr [EDI + 0x264b0d4] ; 00557c00
    ADD EAX,0x4                         ; 00557c06
        ;   Label: LAB_00557c06
    LEA ECX,[EDI + EDX*0x1]             ; 00557c09
    ADD EDX,ESI                         ; 00557c0c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 00557c0e
    CMP EAX,EBX                         ; 00557c12
    JL 0x00557c06                       ; 00557c14
        ;   XREF to: 00557c06 (CONDITIONAL_JUMP)  ; LAB_00557c06
    LEA EAX,[EAX]                       ; 00557c16
    LEA EDX,[EDX]                       ; 00557c1c
    MOV EDI,dword ptr [0x0264b0f8]      ; 00557c20 | DAT_0264b0f8
        ;   Label: LAB_00557c20
    IMUL EBP,EDI                        ; 00557c26
    PUSH EBP                            ; 00557c29
    MOV EBP,dword ptr [0x0264b100]      ; 00557c2a | DAT_0264b100
    PUSH EBP                            ; 00557c30
    MOV EAX,[0x0264b0fc]                ; 00557c31 | DAT_0264b0fc
    PUSH EAX                            ; 00557c36
    PUSH EDI                            ; 00557c37
    MOV ECX,dword ptr [0x0264b0f4]      ; 00557c38 | DAT_0264b0f4
    PUSH ECX                            ; 00557c3e
    LEA EAX,[ESP + 0x14]                ; 00557c3f
    PUSH EAX                            ; 00557c43
    CALL sound_sndmain.cpp_FUN_005541f0 ; 00557c44
        ;   XREF to: 005541f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005541f0()
    MOV EAX,[0x0264b0f4]                ; 00557c49 | DAT_0264b0f4
    MOV EDX,EAX                         ; 00557c4e
    SAR EDX,0x1f                        ; 00557c50
    SHL EDX,0x3                         ; 00557c53
    SBB EAX,EDX                         ; 00557c56
    SAR EAX,0x3                         ; 00557c58
    IMUL EAX,dword ptr [0x0264b100]     ; 00557c5b | DAT_0264b100
    IMUL EAX,dword ptr [0x0264b0f8]     ; 00557c62 | DAT_0264b0f8
    ADD ESP,0x18                        ; 00557c69
    MOV EDX,dword ptr [ESP + 0x20]      ; 00557c6c
    MOV EDX,dword ptr [EDX + 0x264b094] ; 00557c70
    MOV dword ptr [EDX + 0x4],EAX       ; 00557c76
    MOV EAX,dword ptr [ESP + 0x20]      ; 00557c79
    PUSH 0x20                           ; 00557c7d
    MOV EDI,dword ptr [EAX + 0x264b094] ; 00557c7f
    PUSH EDI                            ; 00557c85
    MOV EBP,dword ptr [0x0264b070]      ; 00557c86 | DAT_0264b070
    PUSH EBP                            ; 00557c8c
    CALL dword ptr CS:[0x5c847c]        ; 00557c8d | PTR_waveOutPrepareHeader_005c847c
    TEST EAX,EAX                        ; 00557c94
    JNZ 0x00557cdb                      ; 00557c96
        ;   XREF to: 00557cdb (CONDITIONAL_JUMP)  ; LAB_00557cdb
    MOV EAX,dword ptr [ESP + 0x20]      ; 00557c98
    PUSH 0x20                           ; 00557c9c
    MOV EDX,dword ptr [EAX + 0x264b094] ; 00557c9e
    PUSH EDX                            ; 00557ca4
    MOV ECX,dword ptr [0x0264b070]      ; 00557ca5 | DAT_0264b070
    PUSH ECX                            ; 00557cab
    CALL dword ptr CS:[0x5c8488]        ; 00557cac | PTR_waveOutWrite_005c8488
    TEST EAX,EAX                        ; 00557cb3
    JNZ 0x00557cf2                      ; 00557cb5
        ;   XREF to: 00557cf2 (CONDITIONAL_JUMP)  ; LAB_00557cf2
    MOV EAX,0x1                         ; 00557cb7
    ADD ESP,0x24                        ; 00557cbc
    POP EBP                             ; 00557cbf
    POP EDI                             ; 00557cc0
    POP ESI                             ; 00557cc1
    POP EBX                             ; 00557cc2
    RET                                 ; 00557cc3
    PUSH 0x5ea50d                       ; 00557cc4 | = "waveOutUnprepareHeader failed!"
        ;   Label: LAB_00557cc4
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557cc9
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557cce
    XOR EAX,EAX                         ; 00557cd1
    ADD ESP,0x24                        ; 00557cd3
    POP EBP                             ; 00557cd6
    POP EDI                             ; 00557cd7
    POP ESI                             ; 00557cd8
    POP EBX                             ; 00557cd9
    RET                                 ; 00557cda
    PUSH 0x5ea52c                       ; 00557cdb | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_00557cdb
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557ce0
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557ce5
    XOR EAX,EAX                         ; 00557ce8
    ADD ESP,0x24                        ; 00557cea
    POP EBP                             ; 00557ced
    POP EDI                             ; 00557cee
    POP ESI                             ; 00557cef
    POP EBX                             ; 00557cf0
    RET                                 ; 00557cf1
    PUSH 0x5ea549                       ; 00557cf2 | = "waveOutWrite failed!"
        ;   Label: LAB_00557cf2
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557cf7
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557cfc
    XOR EAX,EAX                         ; 00557cff
    ADD ESP,0x24                        ; 00557d01
    POP EBP                             ; 00557d04
    POP EDI                             ; 00557d05
    POP ESI                             ; 00557d06
    POP EBX                             ; 00557d07
    RET                                 ; 00557d08

