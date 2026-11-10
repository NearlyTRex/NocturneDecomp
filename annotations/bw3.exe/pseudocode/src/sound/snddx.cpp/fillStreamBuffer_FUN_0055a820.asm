; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_0055a820(void)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   sound_snddx.cpp_FUN_0055acd0 at 0055ad3a
;   sound_snddx.cpp_FUN_0055b620 at 0055b6e2
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_Lock_secondary_buffer_005d454e
;   TerminatedCString s_Unlock_secondary_buffer_005d4564
;   undefined4 DAT_02cf49cc
;   undefined4 DAT_02cf49d8
;   undefined4 DAT_02cf49dc
;   undefined4 DAT_02cf49e0
;   undefined4 DAT_02cf49e4
;   undefined4 DAT_02cf49e8
;   undefined4 DAT_02cf49ec
;   undefined4 DAT_02cf49f0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a820
        ;   Label: sound_snddx.cpp_fillStreamBuffer_FUN_0055a820
    PUSH ESI                            ; 0055a821
    PUSH EDI                            ; 0055a822
    PUSH EBP                            ; 0055a823
    SUB ESP,0x350                       ; 0055a824
    MOV EDX,dword ptr [0x02cf49cc]      ; 0055a82a | DAT_02cf49cc
    TEST EDX,EDX                        ; 0055a830
    JNZ 0x0055a841                      ; 0055a832
        ;   XREF to: 0055a841 (CONDITIONAL_JUMP)  ; LAB_0055a841
    XOR EAX,EAX                         ; 0055a834
        ;   Label: LAB_0055a834
    ADD ESP,0x350                       ; 0055a836
        ;   Label: LAB_0055a836
    POP EBP                             ; 0055a83c
    POP EDI                             ; 0055a83d
    POP ESI                             ; 0055a83e
    POP EBX                             ; 0055a83f
    RET                                 ; 0055a840
    PUSH 0x0                            ; 0055a841
        ;   Label: LAB_0055a841
    LEA EAX,[ESP + 0x350]               ; 0055a843
    PUSH EAX                            ; 0055a84a
    LEA EAX,[ESP + 0x348]               ; 0055a84b
    PUSH EAX                            ; 0055a852
    LEA EAX,[ESP + 0x354]               ; 0055a853
    PUSH EAX                            ; 0055a85a
    LEA EAX,[ESP + 0x354]               ; 0055a85b
    MOV EBX,dword ptr [0x02cf49e8]      ; 0055a862 | DAT_02cf49e8
    PUSH EAX                            ; 0055a868
    MOV EAX,[0x02cf49f0]                ; 0055a869 | DAT_02cf49f0
    IMUL EAX,EBX                        ; 0055a86e
    PUSH EBX                            ; 0055a871
    PUSH EAX                            ; 0055a872
    MOV ECX,dword ptr [EDX]             ; 0055a873
    PUSH EDX                            ; 0055a875
    CALL dword ptr [ECX + 0x2c]         ; 0055a876
    TEST EAX,EAX                        ; 0055a879
    JNZ 0x0055a96d                      ; 0055a87b
        ;   XREF to: 0055a96d (CONDITIONAL_JUMP)  ; LAB_0055a96d
    CMP dword ptr [ESP + 0x340],0x0     ; 0055a881
    JNZ 0x0055a836                      ; 0055a889
        ;   XREF to: 0055a836 (CONDITIONAL_JUMP)  ; LAB_0055a836
    MOV EAX,dword ptr [ESP + 0x348]     ; 0055a88b
    CMP EAX,dword ptr [0x02cf49e8]      ; 0055a892 | DAT_02cf49e8
    JNZ 0x0055a834                      ; 0055a898
        ;   XREF to: 0055a834 (CONDITIONAL_JUMP)  ; LAB_0055a834
    MOV EAX,[0x02cf49d8]                ; 0055a89a | DAT_02cf49d8
    MOV EDX,EAX                         ; 0055a89f
    SAR EDX,0x1f                        ; 0055a8a1
    SHL EDX,0x3                         ; 0055a8a4
    SBB EAX,EDX                         ; 0055a8a7
    SAR EAX,0x3                         ; 0055a8a9
    MOV ESI,EAX                         ; 0055a8ac
    MOV EBX,ESI                         ; 0055a8ae
    IMUL EDX,ESI,0x0                    ; 0055a8b0
    ADD EDX,dword ptr [ESP + 0x344]     ; 0055a8b3
    MOV ECX,dword ptr [0x02cf49e0]      ; 0055a8ba | DAT_02cf49e0
    SHL ECX,0x2                         ; 0055a8c0
    XOR EAX,EAX                         ; 0055a8c3
    TEST ECX,ECX                        ; 0055a8c5
    JLE 0x0055a8e0                      ; 0055a8c7
        ;   XREF to: 0055a8e0 (CONDITIONAL_JUMP)  ; LAB_0055a8e0
    MOV dword ptr [ESP + EAX*0x1 + 0x320],EDX ; 0055a8c9
        ;   Label: LAB_0055a8c9
    ADD EAX,0x4                         ; 0055a8d0
    ADD EDX,EBX                         ; 0055a8d3
    CMP EAX,ECX                         ; 0055a8d5
    JL 0x0055a8c9                       ; 0055a8d7
        ;   XREF to: 0055a8c9 (CONDITIONAL_JUMP)  ; LAB_0055a8c9
    LEA EAX,[EAX]                       ; 0055a8d9
    NOP                                 ; 0055a8df
    MOV EBX,dword ptr [0x02cf49e0]      ; 0055a8e0 | DAT_02cf49e0
        ;   Label: LAB_0055a8e0
    IMUL ESI,EBX                        ; 0055a8e6
    PUSH ESI                            ; 0055a8e9
    MOV ESI,dword ptr [0x02cf49e4]      ; 0055a8ea | DAT_02cf49e4
    PUSH ESI                            ; 0055a8f0
    MOV EDI,dword ptr [0x02cf49dc]      ; 0055a8f1 | DAT_02cf49dc
    PUSH EDI                            ; 0055a8f7
    PUSH EBX                            ; 0055a8f8
    MOV EAX,[0x02cf49d8]                ; 0055a8f9 | DAT_02cf49d8
    PUSH EAX                            ; 0055a8fe
    LEA EAX,[ESP + 0x334]               ; 0055a8ff
    PUSH EAX                            ; 0055a906
    CALL sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90 ; 0055a907
        ;   XREF to: 00559d90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, ...)
    MOV EDX,dword ptr [0x02cf49f0]      ; 0055a90c | DAT_02cf49f0
    MOV ECX,dword ptr [0x02cf49ec]      ; 0055a912 | DAT_02cf49ec
    INC EDX                             ; 0055a918
    ADD ESP,0x18                        ; 0055a919
    MOV dword ptr [0x02cf49f0],EDX      ; 0055a91c | DAT_02cf49f0
    CMP EDX,ECX                         ; 0055a922
    JL 0x0055a92e                       ; 0055a924
        ;   XREF to: 0055a92e (CONDITIONAL_JUMP)  ; LAB_0055a92e
    XOR EBX,EBX                         ; 0055a926
    MOV dword ptr [0x02cf49f0],EBX      ; 0055a928 | DAT_02cf49f0
    MOV ESI,dword ptr [ESP + 0x34c]     ; 0055a92e
        ;   Label: LAB_0055a92e
    PUSH ESI                            ; 0055a935
    MOV EDI,dword ptr [ESP + 0x344]     ; 0055a936
    PUSH EDI                            ; 0055a93d
    MOV EBP,dword ptr [ESP + 0x350]     ; 0055a93e
    PUSH EBP                            ; 0055a945
    MOV ECX,dword ptr [ESP + 0x350]     ; 0055a946
    MOV EAX,[0x02cf49cc]                ; 0055a94d | DAT_02cf49cc
    PUSH ECX                            ; 0055a952
    MOV EDX,dword ptr [EAX]             ; 0055a953
    PUSH EAX                            ; 0055a955
    CALL dword ptr [EDX + 0x4c]         ; 0055a956
    TEST EAX,EAX                        ; 0055a959
    JNZ 0x0055a9a6                      ; 0055a95b
        ;   XREF to: 0055a9a6 (CONDITIONAL_JUMP)  ; LAB_0055a9a6
    MOV EAX,0x1                         ; 0055a95d
    ADD ESP,0x350                       ; 0055a962
    POP EBP                             ; 0055a968
    POP EDI                             ; 0055a969
    POP ESI                             ; 0055a96a
    POP EBX                             ; 0055a96b
    RET                                 ; 0055a96c
    PUSH EAX                            ; 0055a96d
        ;   Label: LAB_0055a96d
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055a96e
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055a973
    PUSH EAX                            ; 0055a976
    PUSH 0x5d454e                       ; 0055a977 | = "Lock secondary buffer"
    PUSH 0x5d452f                       ; 0055a97c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055a981
    PUSH EAX                            ; 0055a985
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055a986
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055a98b
    MOV EAX,ESP                         ; 0055a98e
    PUSH EAX                            ; 0055a990
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055a991
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055a996
    XOR EAX,EAX                         ; 0055a999
    ADD ESP,0x350                       ; 0055a99b
    POP EBP                             ; 0055a9a1
    POP EDI                             ; 0055a9a2
    POP ESI                             ; 0055a9a3
    POP EBX                             ; 0055a9a4
    RET                                 ; 0055a9a5
    PUSH EAX                            ; 0055a9a6
        ;   Label: LAB_0055a9a6
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055a9a7
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055a9ac
    PUSH EAX                            ; 0055a9af
    PUSH 0x5d4564                       ; 0055a9b0 | = "Unlock secondary buffer"
    PUSH 0x5d452f                       ; 0055a9b5 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055a9ba
    PUSH EAX                            ; 0055a9c1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055a9c2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055a9c7
    LEA EAX,[ESP + 0x190]               ; 0055a9ca
    PUSH EAX                            ; 0055a9d1
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055a9d2
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055a9d7
    XOR EAX,EAX                         ; 0055a9da
    ADD ESP,0x350                       ; 0055a9dc
    POP EBP                             ; 0055a9e2
    POP EDI                             ; 0055a9e3
    POP ESI                             ; 0055a9e4
    POP EBX                             ; 0055a9e5
    RET                                 ; 0055a9e6

