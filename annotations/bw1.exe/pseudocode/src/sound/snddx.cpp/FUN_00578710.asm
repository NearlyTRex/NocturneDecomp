; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_00578710(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   undefined4 s_Create_secondary_buffer_005f4df6+1
;   TerminatedCString s_DirectSoundDevice_alloca_005f4e0f
;   undefined4 DAT_02c81d94
;   undefined4 DAT_02c81da0
;   undefined4 DAT_02c81ddc
;   undefined4 DAT_02c81df4
;   undefined4 DAT_02c81dfc
;   undefined4 DAT_02c81e00
;   undefined4 DAT_02c81e04
;   undefined4 DAT_02c81e0c
;   undefined4 DAT_02c823dc
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578710
        ;   Label: sound_snddx.cpp_FUN_00578710
    PUSH ESI                            ; 00578711
    PUSH EDI                            ; 00578712
    PUSH EBP                            ; 00578713
    SUB ESP,0x1c8                       ; 00578714
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 0057871a
    CMP dword ptr [0x02c81d94],0x0      ; 00578721 | DAT_02c81d94
    JZ 0x005788fd                       ; 00578728
        ;   XREF to: 005788fd (CONDITIONAL_JUMP)  ; LAB_005788fd
    MOV EAX,0x18                        ; 0057872e
    MOV ECX,dword ptr [0x02c81ddc]      ; 00578733 | DAT_02c81ddc
    MOV EBX,0x1                         ; 00578739
    TEST ECX,ECX                        ; 0057873e
    JZ 0x00578756                       ; 00578740
        ;   XREF to: 00578756 (CONDITIONAL_JUMP)  ; LAB_00578756
    ADD EAX,0x18                        ; 00578742
        ;   Label: LAB_00578742
    INC EBX                             ; 00578745
    CMP EAX,0x618                       ; 00578746
    JGE 0x00578756                      ; 0057874b
        ;   XREF to: 00578756 (CONDITIONAL_JUMP)  ; LAB_00578756
    CMP dword ptr [EAX + 0x2c81dc4],0x0 ; 0057874d | DAT_02c81df4 | DAT_02c81e0c
    JNZ 0x00578742                      ; 00578754
        ;   XREF to: 00578742 (CONDITIONAL_JUMP)  ; LAB_00578742
    CMP EBX,0x41                        ; 00578756
        ;   Label: LAB_00578756
    JGE 0x005788fd                      ; 00578759
        ;   XREF to: 005788fd (CONDITIONAL_JUMP)  ; LAB_005788fd
    PUSH 0x12                           ; 0057875f
    PUSH 0x0                            ; 00578761
    LEA EAX,[ESP + 0x1bc]               ; 00578763
    PUSH EAX                            ; 0057876a
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057876b
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00578770
    PUSH 0x24                           ; 00578773
    PUSH 0x0                            ; 00578775
    LEA EAX,[ESP + 0x198]               ; 00578777
    PUSH EAX                            ; 0057877e
    MOV EBP,0x24                        ; 0057877f
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00578784
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EAX,0xa0                        ; 00578789
    ADD ESP,0xc                         ; 0057878e
    MOV EDX,dword ptr [0x02c823dc]      ; 00578791 | DAT_02c823dc
    MOV dword ptr [ESP + 0x190],EBP     ; 00578797
    MOV dword ptr [ESP + 0x194],EAX     ; 0057879e
    TEST EDX,EDX                        ; 005787a5
    JZ 0x005787b4                       ; 005787a7
        ;   XREF to: 005787b4 (CONDITIONAL_JUMP)  ; LAB_005787b4
    MOV dword ptr [ESP + 0x194],0xa8    ; 005787a9
    CMP dword ptr [0x02c81da0],0x0      ; 005787b4 | DAT_02c81da0
        ;   Label: LAB_005787b4
    JNZ 0x0057890a                      ; 005787bb
        ;   XREF to: 0057890a (CONDITIONAL_JUMP)  ; LAB_0057890a
    OR byte ptr [ESP + 0x194],0x40      ; 005787c1
    MOV EAX,dword ptr [ESI + 0x100]     ; 005787c9
        ;   Label: LAB_005787c9
    CMP EAX,0x2                         ; 005787cf
    JNZ 0x00578917                      ; 005787d2
        ;   XREF to: 00578917 (CONDITIONAL_JUMP)  ; LAB_00578917
    MOV word ptr [ESP + 0x1b4],0x20     ; 005787d8
    MOV AX,word ptr [ESI + 0x108]       ; 005787e2
    MOV word ptr [ESP + 0x1b6],AX       ; 005787e9
    MOV EAX,dword ptr [ESI + 0x10c]     ; 005787f1
    XOR EDX,EDX                         ; 005787f7
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005787f9
    MOV DX,word ptr [ESP + 0x1b6]       ; 00578800
    MOV EAX,dword ptr [ESI + 0x104]     ; 00578808
    IMUL EDX,EAX                        ; 0057880e
    MOV EAX,EDX                         ; 00578811
    SAR EDX,0x1f                        ; 00578813
    SHL EDX,0x4                         ; 00578816
    SBB EAX,EDX                         ; 00578819
    SAR EAX,0x4                         ; 0057881b
    MOV word ptr [ESP + 0x1c0],AX       ; 0057881e
    XOR EAX,EAX                         ; 00578826
    MOV EDX,dword ptr [ESI + 0x10c]     ; 00578828
    MOV AX,word ptr [ESP + 0x1c0]       ; 0057882e
    IMUL EDX,EAX                        ; 00578836
    MOV word ptr [ESP + 0x1c2],0x4      ; 00578839
    MOV dword ptr [ESP + 0x1bc],EDX     ; 00578843
    MOV EDX,dword ptr [ESI + 0x110]     ; 0057884a
    MOV ECX,dword ptr [ESI + 0x108]     ; 00578850
    IMUL EDX,ECX                        ; 00578856
    MOV EAX,EDX                         ; 00578859
    SAR EDX,0x1f                        ; 0057885b
    SUB EAX,EDX                         ; 0057885e
    SAR EAX,0x1                         ; 00578860
    MOV dword ptr [ESP + 0x198],EAX     ; 00578862
        ;   Label: LAB_00578862
    LEA EAX,[ESP + 0x1b4]               ; 00578869
    LEA EDI,[EBX*0x4 + 0x0]             ; 00578870
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00578877
    SUB EDI,EBX                         ; 0057887e
    MOV EAX,0x2c81dc4                   ; 00578880
    SHL EDI,0x3                         ; 00578885
    PUSH 0x0                            ; 00578888
    ADD EAX,EDI                         ; 0057888a
    PUSH EAX                            ; 0057888c | DAT_02c81df4
    LEA EAX,[ESP + 0x198]               ; 0057888d
    MOV ECX,dword ptr [0x02c81d94]      ; 00578894 | DAT_02c81d94
    PUSH EAX                            ; 0057889a
    MOV EBP,dword ptr [ECX]             ; 0057889b
    PUSH ECX                            ; 0057889d
    CALL dword ptr [EBP + 0xc]          ; 0057889e
    TEST EAX,EAX                        ; 005788a1
    JNZ 0x00578997                      ; 005788a3
        ;   XREF to: 00578997 (CONDITIONAL_JUMP)  ; LAB_00578997
    CMP dword ptr [EDI + 0x2c81dc4],0x0 ; 005788a9 | DAT_02c81df4
    JZ 0x005789c3                       ; 005788b0
        ;   XREF to: 005789c3 (CONDITIONAL_JUMP)  ; LAB_005789c3
    MOV EDX,dword ptr [ESI + 0x104]     ; 005788b6
    MOV EAX,dword ptr [ESI + 0x108]     ; 005788bc
    SHL EDX,0x8                         ; 005788c2
    IMUL EDX,EAX                        ; 005788c5
    MOV EAX,EDX                         ; 005788c8
    SAR EDX,0x1f                        ; 005788ca
    SHL EDX,0x3                         ; 005788cd
    SBB EAX,EDX                         ; 005788d0
    SAR EAX,0x3                         ; 005788d2
    XOR EDX,EDX                         ; 005788d5
    MOV dword ptr [EDI + 0x2c81dcc],EAX ; 005788d7 | DAT_02c81dfc
    MOV EAX,dword ptr [ESP + 0x198]     ; 005788dd
    MOV dword ptr [EDI + 0x2c81dd4],EDX ; 005788e4 | DAT_02c81e04
    MOV dword ptr [EDI + 0x2c81dd0],EAX ; 005788ea | DAT_02c81e00
    MOV EAX,EBX                         ; 005788f0
    ADD ESP,0x1c8                       ; 005788f2
    POP EBP                             ; 005788f8
    POP EDI                             ; 005788f9
    POP ESI                             ; 005788fa
    POP EBX                             ; 005788fb
    RET                                 ; 005788fc
    XOR EAX,EAX                         ; 005788fd
        ;   Label: LAB_005788fd
    ADD ESP,0x1c8                       ; 005788ff
    POP EBP                             ; 00578905
    POP EDI                             ; 00578906
    POP ESI                             ; 00578907
    POP EBX                             ; 00578908
    RET                                 ; 00578909
    OR byte ptr [ESP + 0x194],0x10      ; 0057890a
        ;   Label: LAB_0057890a
    JMP 0x005787c9                      ; 00578912
        ;   XREF to: 005787c9 (UNCONDITIONAL_JUMP)  ; LAB_005787c9
    MOV word ptr [ESP + 0x1b4],0x1      ; 00578917
        ;   Label: LAB_00578917
    MOV AX,word ptr [ESI + 0x108]       ; 00578921
    MOV word ptr [ESP + 0x1b6],AX       ; 00578928
    MOV EAX,dword ptr [ESI + 0x10c]     ; 00578930
    XOR EDX,EDX                         ; 00578936
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00578938
    MOV DX,word ptr [ESP + 0x1b6]       ; 0057893f
    MOV EBP,dword ptr [ESI + 0x104]     ; 00578947
    IMUL EDX,EBP                        ; 0057894d
    MOV EAX,EDX                         ; 00578950
    SAR EDX,0x1f                        ; 00578952
    SHL EDX,0x3                         ; 00578955
    SBB EAX,EDX                         ; 00578958
    SAR EAX,0x3                         ; 0057895a
    XOR EDX,EDX                         ; 0057895d
    MOV word ptr [ESP + 0x1c0],AX       ; 0057895f
    MOV DX,AX                           ; 00578967
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0057896a
    IMUL EAX,EDX                        ; 00578970
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00578973
    MOV AX,word ptr [ESI + 0x104]       ; 0057897a
    MOV word ptr [ESP + 0x1c2],AX       ; 00578981
    MOV EAX,dword ptr [ESI + 0x110]     ; 00578989
    IMUL EAX,EDX                        ; 0057898f
    JMP 0x00578862                      ; 00578992
        ;   XREF to: 00578862 (UNCONDITIONAL_JUMP)  ; LAB_00578862
    PUSH EAX                            ; 00578997
        ;   Label: LAB_00578997
    CALL sound_snddx.cpp_FUN_00577500   ; 00578998
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057899d
    PUSH EAX                            ; 005789a0
    PUSH 0x5f4df7                       ; 005789a1 | s_Create_secondary_buffer_005f4df6+1
    PUSH 0x5f4c35                       ; 005789a6 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005789ab
    PUSH EAX                            ; 005789af
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005789b0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005789b5
    MOV EAX,ESP                         ; 005789b8
    PUSH EAX                            ; 005789ba
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 005789bb
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 005789c0
    PUSH 0x5f4e0f                       ; 005789c3 | = "DirectSoundDevice::allocateSample - a..."
        ;   Label: LAB_005789c3
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 005789c8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 005789cd
    XOR EAX,EAX                         ; 005789d0
    ADD ESP,0x1c8                       ; 005789d2
    POP EBP                             ; 005789d8
    POP EDI                             ; 005789d9
    POP ESI                             ; 005789da
    POP EBX                             ; 005789db
    RET                                 ; 005789dc

