; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndwav.cpp_CWavOutDevice_poll_FUN_0057ab10 at 0057ab67
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_0057a7f0 at 0057a857
;
; Referenced Globals:
;   void* PTR_waveOutPrepareHeader_005d0488 = 001d0a02
;   void* PTR_waveOutUnprepareHeader_005d0490 = 001d0a2a
;   void* PTR_waveOutWrite_005d0494 = 001d0a44
;   TerminatedCString s_waveOutUnprepareHeader_f_005f5707
;   TerminatedCString s_waveOutPrepareHeader_fai_005f5726
;   TerminatedCString s_waveOutWrite_failed_005f5743
;   undefined4 DAT_02c82840
;   undefined4 DAT_02c828c4
;   undefined4 DAT_02c828c8
;   undefined4 DAT_02c828cc
;   undefined4 DAT_02c828d0
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00576c20
;   sound_sndmain.cpp_FUN_005773f0
;   waveOutPrepareHeader
;   waveOutUnprepareHeader
;   waveOutWrite
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a5c0
        ;   Label: sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0
    PUSH ESI                            ; 0057a5c1
    PUSH EDI                            ; 0057a5c2
    PUSH EBP                            ; 0057a5c3
    SUB ESP,0x24                        ; 0057a5c4
    MOV EDI,dword ptr [ESP + 0x38]      ; 0057a5c7
    SHL EDI,0x2                         ; 0057a5cb
    CMP dword ptr [EDI + 0x2c828a4],0x0 ; 0057a5ce
    JZ 0x0057a5e1                       ; 0057a5d5
        ;   XREF to: 0057a5e1 (CONDITIONAL_JUMP)  ; LAB_0057a5e1
    MOV ECX,dword ptr [EDI + 0x2c82864] ; 0057a5d7
    TEST ECX,ECX                        ; 0057a5dd
    JNZ 0x0057a5eb                      ; 0057a5df
        ;   XREF to: 0057a5eb (CONDITIONAL_JUMP)  ; LAB_0057a5eb
    XOR EAX,EAX                         ; 0057a5e1
        ;   Label: LAB_0057a5e1
    ADD ESP,0x24                        ; 0057a5e3
    POP EBP                             ; 0057a5e6
    POP EDI                             ; 0057a5e7
    POP ESI                             ; 0057a5e8
    POP EBX                             ; 0057a5e9
    RET                                 ; 0057a5ea
    PUSH 0x20                           ; 0057a5eb
        ;   Label: LAB_0057a5eb
    PUSH ECX                            ; 0057a5ed
    MOV ESI,dword ptr [0x02c82840]      ; 0057a5ee | DAT_02c82840
    PUSH ESI                            ; 0057a5f4
    CALL dword ptr CS:[0x5d0490]        ; 0057a5f5 | PTR_waveOutUnprepareHeader_005d0490
    TEST EAX,EAX                        ; 0057a5fc
    JNZ 0x0057a6f4                      ; 0057a5fe
        ;   XREF to: 0057a6f4 (CONDITIONAL_JUMP)  ; LAB_0057a6f4
    MOV EAX,[0x02c828c4]                ; 0057a604 | DAT_02c828c4
    MOV EDX,EAX                         ; 0057a609
    SAR EDX,0x1f                        ; 0057a60b
    SHL EDX,0x3                         ; 0057a60e
    SBB EAX,EDX                         ; 0057a611
    SAR EAX,0x3                         ; 0057a613
    MOV EBP,EAX                         ; 0057a616
    MOV ESI,EBP                         ; 0057a618
    IMUL EDX,EBP,0x0                    ; 0057a61a
    MOV EBX,dword ptr [0x02c828c8]      ; 0057a61d | DAT_02c828c8
    MOV dword ptr [ESP + 0x20],EDI      ; 0057a623
    SHL EBX,0x2                         ; 0057a627
    XOR EAX,EAX                         ; 0057a62a
    TEST EBX,EBX                        ; 0057a62c
    JLE 0x0057a650                      ; 0057a62e
        ;   XREF to: 0057a650 (CONDITIONAL_JUMP)  ; LAB_0057a650
    MOV EDI,dword ptr [EDI + 0x2c828a4] ; 0057a630
    ADD EAX,0x4                         ; 0057a636
        ;   Label: LAB_0057a636
    LEA ECX,[EDI + EDX*0x1]             ; 0057a639
    ADD EDX,ESI                         ; 0057a63c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 0057a63e
    CMP EAX,EBX                         ; 0057a642
    JL 0x0057a636                       ; 0057a644
        ;   XREF to: 0057a636 (CONDITIONAL_JUMP)  ; LAB_0057a636
    LEA EAX,[EAX]                       ; 0057a646
    LEA EDX,[EDX]                       ; 0057a64c
    MOV EDI,dword ptr [0x02c828c8]      ; 0057a650 | DAT_02c828c8
        ;   Label: LAB_0057a650
    IMUL EBP,EDI                        ; 0057a656
    PUSH EBP                            ; 0057a659
    MOV EBP,dword ptr [0x02c828d0]      ; 0057a65a | DAT_02c828d0
    PUSH EBP                            ; 0057a660
    MOV EAX,[0x02c828cc]                ; 0057a661 | DAT_02c828cc
    PUSH EAX                            ; 0057a666
    PUSH EDI                            ; 0057a667
    MOV ECX,dword ptr [0x02c828c4]      ; 0057a668 | DAT_02c828c4
    PUSH ECX                            ; 0057a66e
    LEA EAX,[ESP + 0x14]                ; 0057a66f
    PUSH EAX                            ; 0057a673
    CALL sound_sndmain.cpp_FUN_00576c20 ; 0057a674
        ;   XREF to: 00576c20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00576c20()
    MOV EAX,[0x02c828c4]                ; 0057a679 | DAT_02c828c4
    MOV EDX,EAX                         ; 0057a67e
    SAR EDX,0x1f                        ; 0057a680
    SHL EDX,0x3                         ; 0057a683
    SBB EAX,EDX                         ; 0057a686
    SAR EAX,0x3                         ; 0057a688
    IMUL EAX,dword ptr [0x02c828d0]     ; 0057a68b | DAT_02c828d0
    IMUL EAX,dword ptr [0x02c828c8]     ; 0057a692 | DAT_02c828c8
    ADD ESP,0x18                        ; 0057a699
    MOV EDX,dword ptr [ESP + 0x20]      ; 0057a69c
    MOV EDX,dword ptr [EDX + 0x2c82864] ; 0057a6a0
    MOV dword ptr [EDX + 0x4],EAX       ; 0057a6a6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057a6a9
    PUSH 0x20                           ; 0057a6ad
    MOV EDI,dword ptr [EAX + 0x2c82864] ; 0057a6af
    PUSH EDI                            ; 0057a6b5
    MOV EBP,dword ptr [0x02c82840]      ; 0057a6b6 | DAT_02c82840
    PUSH EBP                            ; 0057a6bc
    CALL dword ptr CS:[0x5d0488]        ; 0057a6bd | PTR_waveOutPrepareHeader_005d0488
    TEST EAX,EAX                        ; 0057a6c4
    JNZ 0x0057a70b                      ; 0057a6c6
        ;   XREF to: 0057a70b (CONDITIONAL_JUMP)  ; LAB_0057a70b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057a6c8
    PUSH 0x20                           ; 0057a6cc
    MOV EDX,dword ptr [EAX + 0x2c82864] ; 0057a6ce
    PUSH EDX                            ; 0057a6d4
    MOV ECX,dword ptr [0x02c82840]      ; 0057a6d5 | DAT_02c82840
    PUSH ECX                            ; 0057a6db
    CALL dword ptr CS:[0x5d0494]        ; 0057a6dc | PTR_waveOutWrite_005d0494
    TEST EAX,EAX                        ; 0057a6e3
    JNZ 0x0057a722                      ; 0057a6e5
        ;   XREF to: 0057a722 (CONDITIONAL_JUMP)  ; LAB_0057a722
    MOV EAX,0x1                         ; 0057a6e7
    ADD ESP,0x24                        ; 0057a6ec
    POP EBP                             ; 0057a6ef
    POP EDI                             ; 0057a6f0
    POP ESI                             ; 0057a6f1
    POP EBX                             ; 0057a6f2
    RET                                 ; 0057a6f3
    PUSH 0x5f5707                       ; 0057a6f4 | = "waveOutUnprepareHeader failed!"
        ;   Label: LAB_0057a6f4
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057a6f9
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057a6fe
    XOR EAX,EAX                         ; 0057a701
    ADD ESP,0x24                        ; 0057a703
    POP EBP                             ; 0057a706
    POP EDI                             ; 0057a707
    POP ESI                             ; 0057a708
    POP EBX                             ; 0057a709
    RET                                 ; 0057a70a
    PUSH 0x5f5726                       ; 0057a70b | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_0057a70b
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057a710
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057a715
    XOR EAX,EAX                         ; 0057a718
    ADD ESP,0x24                        ; 0057a71a
    POP EBP                             ; 0057a71d
    POP EDI                             ; 0057a71e
    POP ESI                             ; 0057a71f
    POP EBX                             ; 0057a720
    RET                                 ; 0057a721
    PUSH 0x5f5743                       ; 0057a722 | = "waveOutWrite failed!"
        ;   Label: LAB_0057a722
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057a727
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057a72c
    XOR EAX,EAX                         ; 0057a72f
    ADD ESP,0x24                        ; 0057a731
    POP EBP                             ; 0057a734
    POP EDI                             ; 0057a735
    POP ESI                             ; 0057a736
    POP EBX                             ; 0057a737
    RET                                 ; 0057a738

