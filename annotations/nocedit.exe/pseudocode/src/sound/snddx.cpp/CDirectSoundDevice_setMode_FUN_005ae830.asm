; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_005ae830(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int *            Stack[0x14]:4   out_samples_per_block
; Local Variables:
; undefined2       Stack[-0x48]:2  local_48
; undefined2       Stack[-0x46]:2  local_46
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined2       Stack[-0x3c]:2  local_3c
; undefined2       Stack[-0x3a]:2  local_3a
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Create_temp_secondary_bu_00651b5a
;   TerminatedCString s_Set_Primary_buffer_forma_00651b91
;   TerminatedCString s_Get_Primary_buffer_forma_00651bab
;   TerminatedCString s_Create_the_secondary_buf_00651bc5
;   GUID g_IID_IKsPropertySet
;   GUID g_KSPROPSETID_DirectSound3DListener
;   GUID g_IID_IDirectSound3DBuffer
;   IDirectSound* g_DirectSound
;   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
;   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
;   IDirectSound3DListener* g_DirectSound3DListener
;   IKsPropertySet* g_DirectSoundPropertySet
;   int g_StreamBitsPerSample
;   int g_StreamSampleRate
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae830
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830
    PUSH ESI                            ; 005ae831
    PUSH EDI                            ; 005ae832
    PUSH EBP                            ; 005ae833
    SUB ESP,0x6a0                       ; 005ae834
    MOV EBX,dword ptr [ESP + 0x6b8]     ; 005ae83a
    MOV EDX,dword ptr [0x03f6a9c0]      ; 005ae841 | g_DirectSoundPropertySet
    TEST EDX,EDX                        ; 005ae847
    JNZ 0x005ae87b                      ; 005ae849
        ;   XREF to: 005ae87b (CONDITIONAL_JUMP)  ; LAB_005ae87b
    CMP dword ptr [0x03f6a9b4],0x0      ; 005ae84b | g_DirectSoundPrimaryBuffer
        ;   Label: LAB_005ae84b
    JNZ 0x005ae88d                      ; 005ae852
        ;   XREF to: 005ae88d (CONDITIONAL_JUMP)  ; LAB_005ae88d
    MOV EDX,dword ptr [0x03f6a9b8]      ; 005ae854 | g_DirectSoundSecondaryBuffer
        ;   Label: LAB_005ae854
    TEST EDX,EDX                        ; 005ae85a
    JZ 0x005ae86e                       ; 005ae85c
        ;   XREF to: 005ae86e (CONDITIONAL_JUMP)  ; LAB_005ae86e
    MOV EAX,EDX                         ; 005ae85e
    PUSH EAX                            ; 005ae860
    MOV EDX,dword ptr [EDX]             ; 005ae861
    CALL dword ptr [EDX + 0x8]          ; 005ae863
    XOR ECX,ECX                         ; 005ae866
    MOV dword ptr [0x03f6a9b8],ECX      ; 005ae868 | g_DirectSoundSecondaryBuffer
    XOR EAX,EAX                         ; 005ae86e
        ;   Label: LAB_005ae86e
    ADD ESP,0x6a0                       ; 005ae870
    POP EBP                             ; 005ae876
    POP EDI                             ; 005ae877
    POP ESI                             ; 005ae878
    POP EBX                             ; 005ae879
    RET                                 ; 005ae87a
    MOV EAX,EDX                         ; 005ae87b
        ;   Label: LAB_005ae87b
    PUSH EAX                            ; 005ae87d
    MOV EDX,dword ptr [EDX]             ; 005ae87e
    CALL dword ptr [EDX + 0x8]          ; 005ae880
    XOR ECX,ECX                         ; 005ae883
    MOV dword ptr [0x03f6a9c0],ECX      ; 005ae885 | g_DirectSoundPropertySet
    JMP 0x005ae84b                      ; 005ae88b
        ;   XREF to: 005ae84b (UNCONDITIONAL_JUMP)  ; LAB_005ae84b
    PUSH 0x12                           ; 005ae88d
        ;   Label: LAB_005ae88d
    PUSH 0x0                            ; 005ae88f
    LEA EAX,[ESP + 0x670]               ; 005ae891
    PUSH EAX                            ; 005ae898
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ae899
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ae89e
    MOV EDX,0x1                         ; 005ae8a1
    MOV EAX,dword ptr [ESP + 0x6bc]     ; 005ae8a6
    MOV word ptr [ESP + 0x668],DX       ; 005ae8ad
    MOV word ptr [ESP + 0x66a],AX       ; 005ae8b5
    MOV EDX,EBX                         ; 005ae8bd
    MOV EAX,dword ptr [ESP + 0x6c0]     ; 005ae8bf
    SAR EDX,0x1f                        ; 005ae8c6
    MOV dword ptr [ESP + 0x66c],EAX     ; 005ae8c9
    MOV EAX,EBX                         ; 005ae8d0
    SHL EDX,0x3                         ; 005ae8d2
    SBB EAX,EDX                         ; 005ae8d5
    SAR EAX,0x3                         ; 005ae8d7
    XOR ECX,ECX                         ; 005ae8da
    MOV CX,word ptr [ESP + 0x6bc]       ; 005ae8dc
    IMUL EAX,ECX                        ; 005ae8e4
    MOV word ptr [ESP + 0x674],AX       ; 005ae8e7
    XOR EAX,EAX                         ; 005ae8ef
    MOV EDX,dword ptr [ESP + 0x6c0]     ; 005ae8f1
    MOV AX,word ptr [ESP + 0x674]       ; 005ae8f8
    IMUL EDX,EAX                        ; 005ae900
    MOV EAX,[0x03f6a9b4]                ; 005ae903 | g_DirectSoundPrimaryBuffer
    MOV dword ptr [ESP + 0x670],EDX     ; 005ae908
    LEA EDX,[ESP + 0x668]               ; 005ae90f
    MOV word ptr [ESP + 0x676],BX       ; 005ae916
    PUSH EDX                            ; 005ae91e
    MOV ECX,dword ptr [EAX]             ; 005ae91f
    PUSH EAX                            ; 005ae921
    CALL dword ptr [ECX + 0x38]         ; 005ae922
    TEST EAX,EAX                        ; 005ae925
    JNZ 0x005aebfc                      ; 005ae927
        ;   XREF to: 005aebfc (CONDITIONAL_JUMP)  ; LAB_005aebfc
    PUSH 0x0                            ; 005ae92d
    PUSH 0x12                           ; 005ae92f
    LEA EDX,[ESP + 0x670]               ; 005ae931
    MOV EAX,[0x03f6a9b4]                ; 005ae938 | g_DirectSoundPrimaryBuffer
    PUSH EDX                            ; 005ae93d
    MOV EBX,dword ptr [EAX]             ; 005ae93e
    PUSH EAX                            ; 005ae940
    CALL dword ptr [EBX + 0x14]         ; 005ae941
    TEST EAX,EAX                        ; 005ae944
    JNZ 0x005aec35                      ; 005ae946
        ;   XREF to: 005aec35 (CONDITIONAL_JUMP)  ; LAB_005aec35
    MOV AX,word ptr [ESP + 0x676]       ; 005ae94c
    MOV [0x03f6a9c4],EAX                ; 005ae954 | g_StreamBitsPerSample
    MOV EAX,dword ptr [ESP + 0x66c]     ; 005ae959
    MOV [0x03f6a9c8],EAX                ; 005ae960 | g_StreamSampleRate
    XOR EAX,EAX                         ; 005ae965
    MOV AX,word ptr [ESP + 0x66a]       ; 005ae967
    MOV EDI,dword ptr [0x03f6a9c0]      ; 005ae96f | g_DirectSoundPropertySet
    MOV [0x03f6a9cc],EAX                ; 005ae975 | g_StreamChannelCount
    TEST EDI,EDI                        ; 005ae97a
    JZ 0x005ae98c                       ; 005ae97c
        ;   XREF to: 005ae98c (CONDITIONAL_JUMP)  ; LAB_005ae98c
    PUSH EDI                            ; 005ae97e
    MOV EDX,dword ptr [EDI]             ; 005ae97f
    XOR EBP,EBP                         ; 005ae981
    CALL dword ptr [EDX + 0x8]          ; 005ae983
    MOV dword ptr [0x03f6a9c0],EBP      ; 005ae986 | g_DirectSoundPropertySet
    PUSH 0x12                           ; 005ae98c
        ;   Label: LAB_005ae98c
    XOR EAX,EAX                         ; 005ae98e
    MOV EBX,0x1                         ; 005ae990
    MOV dword ptr [ESP + 0x694],EAX     ; 005ae995
    MOV dword ptr [ESP + 0x698],EAX     ; 005ae99c
    PUSH EAX                            ; 005ae9a3
    LEA EAX,[ESP + 0x684]               ; 005ae9a4
    MOV ESI,0x10                        ; 005ae9ab
    PUSH EAX                            ; 005ae9b0
    MOV EDI,0x2                         ; 005ae9b1
    MOV EBP,0x400                       ; 005ae9b6
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ae9bb
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ae9c0
    MOV ECX,0x5622                      ; 005ae9c3
    LEA EAX,[ESP + 0x654]               ; 005ae9c8
    PUSH 0x14                           ; 005ae9cf
    MOV word ptr [ESP + 0x680],BX       ; 005ae9d1
    MOV word ptr [ESP + 0x682],BX       ; 005ae9d9
    MOV dword ptr [ESP + 0x684],ECX     ; 005ae9e1
    MOV word ptr [ESP + 0x68e],SI       ; 005ae9e8
    MOV word ptr [ESP + 0x68c],DI       ; 005ae9f0
    PUSH 0x0                            ; 005ae9f8
    MOV EBX,0xac44                      ; 005ae9fa
    MOV ESI,0x14                        ; 005ae9ff
    PUSH EAX                            ; 005aea04
    MOV EDI,0x12                        ; 005aea05
    MOV dword ptr [ESP + 0x690],EBX     ; 005aea0a
    CALL crt_memory.c_memset_FUN_005fde40 ; 005aea11
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005aea16
    LEA EAX,[ESP + 0x67c]               ; 005aea19
    LEA EDX,[ESP + 0x690]               ; 005aea20
    PUSH 0x0                            ; 005aea27
    MOV dword ptr [ESP + 0x658],ESI     ; 005aea29
    MOV dword ptr [ESP + 0x65c],EDI     ; 005aea30
    MOV dword ptr [ESP + 0x668],EAX     ; 005aea37
    MOV EAX,[0x03f6a9b0]                ; 005aea3e | g_DirectSound
    PUSH EDX                            ; 005aea43
    LEA EDX,[ESP + 0x65c]               ; 005aea44
    MOV dword ptr [ESP + 0x664],EBP     ; 005aea4b
    PUSH EDX                            ; 005aea52
    MOV EBX,dword ptr [EAX]             ; 005aea53
    PUSH EAX                            ; 005aea55
    CALL dword ptr [EBX + 0xc]          ; 005aea56
    TEST EAX,EAX                        ; 005aea59
    JNZ 0x005aec6e                      ; 005aea5b
        ;   XREF to: 005aec6e (CONDITIONAL_JUMP)  ; LAB_005aec6e
    MOV EAX,dword ptr [ESP + 0x690]     ; 005aea61
    MOV EDX,dword ptr [EAX]             ; 005aea68
    LEA EAX,[ESP + 0x694]               ; 005aea6a
    PUSH EAX                            ; 005aea71
    PUSH 0x686d68                       ; 005aea72 | g_IID_IDirectSound3DBuffer
    MOV EAX,dword ptr [ESP + 0x698]     ; 005aea77
    PUSH EAX                            ; 005aea7e
    CALL dword ptr [EDX]                ; 005aea7f
    MOV EDX,dword ptr [ESP + 0x694]     ; 005aea81
    TEST EDX,EDX                        ; 005aea88
    JNZ 0x005aeca7                      ; 005aea8a
        ;   XREF to: 005aeca7 (CONDITIONAL_JUMP)  ; LAB_005aeca7
    MOV EBX,dword ptr [ESP + 0x690]     ; 005aea90
    TEST EBX,EBX                        ; 005aea97
    JZ 0x005aeaaa                       ; 005aea99
        ;   XREF to: 005aeaaa (CONDITIONAL_JUMP)  ; LAB_005aeaaa
    PUSH EBX                            ; 005aea9b
    MOV EAX,dword ptr [EBX]             ; 005aea9c
    XOR EDI,EDI                         ; 005aea9e
    CALL dword ptr [EAX + 0x8]          ; 005aeaa0
    MOV dword ptr [ESP + 0x690],EDI     ; 005aeaa3
    MOV EBP,dword ptr [0x03f6a9c0]      ; 005aeaaa | g_DirectSoundPropertySet
        ;   Label: LAB_005aeaaa
    TEST EBP,EBP                        ; 005aeab0
    JZ 0x005aeadc                       ; 005aeab2
        ;   XREF to: 005aeadc (CONDITIONAL_JUMP)  ; LAB_005aeadc
    PUSH 0x4                            ; 005aeab4
    LEA EBX,[ESP + 0x69c]               ; 005aeab6
    PUSH EBX                            ; 005aeabd
    PUSH 0x0                            ; 005aeabe
    PUSH 0x0                            ; 005aeac0
    MOV EAX,0x1                         ; 005aeac2
    PUSH 0x0                            ; 005aeac7
    MOV dword ptr [ESP + 0x6ac],EAX     ; 005aeac9
    PUSH 0x681de0                       ; 005aead0 | g_KSPROPSETID_DirectSound3DListener
    MOV EDX,dword ptr [EBP]             ; 005aead5
    PUSH EBP                            ; 005aead8
    CALL dword ptr [EDX + 0x10]         ; 005aead9
    CMP dword ptr [0x03f6a9bc],0x0      ; 005aeadc | g_DirectSound3DListener
        ;   Label: LAB_005aeadc
    JNZ 0x005aecf4                      ; 005aeae3
        ;   XREF to: 005aecf4 (CONDITIONAL_JUMP)  ; LAB_005aecf4
    MOV dword ptr [0x03f6a9d8],0x8      ; 005aeae9 | g_StreamBlockCount
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0 ; 005aeaf3
        ;   XREF to: 005abea0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0()
    MOV dword ptr [ESP + 0x69c],EAX     ; 005aeaf8
    FLD float ptr [ESP + 0x69c]         ; 005aeaff
    FILD dword ptr [0x03f6a9c8]         ; 005aeb06 | g_StreamSampleRate
    FMULP                               ; 005aeb0c
    FILD dword ptr [0x03f6a9d8]         ; 005aeb0e | g_StreamBlockCount
    FDIVP                               ; 005aeb14
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aeb16
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x03f6a9d0]        ; 005aeb1b | g_StreamSamplesPerBlock
    MOV EAX,[0x03f6a9d0]                ; 005aeb21 | g_StreamSamplesPerBlock
    ADD EAX,0xf                         ; 005aeb26
    AND AL,0xf0                         ; 005aeb29
    MOV [0x03f6a9d0],EAX                ; 005aeb2b | g_StreamSamplesPerBlock
    MOV EAX,[0x03f6a9c4]                ; 005aeb30 | g_StreamBitsPerSample
    MOV EDX,EAX                         ; 005aeb35
    SAR EDX,0x1f                        ; 005aeb37
    SHL EDX,0x3                         ; 005aeb3a
    SBB EAX,EDX                         ; 005aeb3d
    SAR EAX,0x3                         ; 005aeb3f
    MOV EDX,dword ptr [0x03f6a9d0]      ; 005aeb42 | g_StreamSamplesPerBlock
    IMUL EDX,EAX                        ; 005aeb48
    MOV EAX,[0x03f6a9cc]                ; 005aeb4b | g_StreamChannelCount
    IMUL EDX,EAX                        ; 005aeb50
    PUSH 0x14                           ; 005aeb53
    PUSH 0x0                            ; 005aeb55
    LEA EAX,[ESP + 0x648]               ; 005aeb57
    PUSH EAX                            ; 005aeb5e
    MOV dword ptr [0x03f6a9d4],EDX      ; 005aeb5f | g_StreamBlockSizeBytes
    CALL crt_memory.c_memset_FUN_005fde40 ; 005aeb65
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    LEA EAX,[ESP + 0x674]               ; 005aeb6a
    ADD ESP,0xc                         ; 005aeb71
    MOV EDI,dword ptr [0x03f6a9d8]      ; 005aeb74 | g_StreamBlockCount
    MOV dword ptr [ESP + 0x650],EAX     ; 005aeb7a
    MOV EAX,[0x03f6a9d4]                ; 005aeb81 | g_StreamBlockSizeBytes
    IMUL EAX,EDI                        ; 005aeb86
    MOV EBX,0x14                        ; 005aeb89
    XOR ESI,ESI                         ; 005aeb8e
    MOV EBP,dword ptr [0x03f6a9b8]      ; 005aeb90 | g_DirectSoundSecondaryBuffer
    MOV dword ptr [ESP + 0x640],EBX     ; 005aeb96
    MOV dword ptr [ESP + 0x644],ESI     ; 005aeb9d
    MOV dword ptr [ESP + 0x648],EAX     ; 005aeba4
    TEST EBP,EBP                        ; 005aebab
    JZ 0x005aebbc                       ; 005aebad
        ;   XREF to: 005aebbc (CONDITIONAL_JUMP)  ; LAB_005aebbc
    PUSH EBP                            ; 005aebaf
    MOV EDX,dword ptr [EBP]             ; 005aebb0
    CALL dword ptr [EDX + 0x8]          ; 005aebb3
    MOV dword ptr [0x03f6a9b8],ESI      ; 005aebb6 | g_DirectSoundSecondaryBuffer
    PUSH 0x0                            ; 005aebbc
        ;   Label: LAB_005aebbc
    PUSH 0x3f6a9b8                      ; 005aebbe | g_DirectSoundSecondaryBuffer
    LEA EBX,[ESP + 0x648]               ; 005aebc3
    MOV EAX,[0x03f6a9b0]                ; 005aebca | g_DirectSound
    PUSH EBX                            ; 005aebcf
    MOV EDX,dword ptr [EAX]             ; 005aebd0
    PUSH EAX                            ; 005aebd2
    CALL dword ptr [EDX + 0xc]          ; 005aebd3
    TEST EAX,EAX                        ; 005aebd6
    JNZ 0x005aed11                      ; 005aebd8
        ;   XREF to: 005aed11 (CONDITIONAL_JUMP)  ; LAB_005aed11
    MOV EDX,dword ptr [ESP + 0x6c4]     ; 005aebde
    MOV EAX,[0x03f6a9d0]                ; 005aebe5 | g_StreamSamplesPerBlock
    MOV dword ptr [EDX],EAX             ; 005aebea
    MOV EAX,0x1                         ; 005aebec
    ADD ESP,0x6a0                       ; 005aebf1
    POP EBP                             ; 005aebf7
    POP EDI                             ; 005aebf8
    POP ESI                             ; 005aebf9
    POP EBX                             ; 005aebfa
    RET                                 ; 005aebfb
    PUSH EAX                            ; 005aebfc
        ;   Label: LAB_005aebfc
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005aebfd
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005aec02
    PUSH EAX                            ; 005aec05
    PUSH 0x651b91                       ; 005aec06 | = "Set Primary buffer format"
    PUSH 0x651a6c                       ; 005aec0b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 005aec10
    PUSH EAX                            ; 005aec17
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005aec18
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005aec1d
    LEA EAX,[ESP + 0x190]               ; 005aec20
    PUSH EAX                            ; 005aec27
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005aec28
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005aec2d
    JMP 0x005ae854                      ; 005aec30
        ;   XREF to: 005ae854 (UNCONDITIONAL_JUMP)  ; LAB_005ae854
    PUSH EAX                            ; 005aec35
        ;   Label: LAB_005aec35
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005aec36
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005aec3b
    PUSH EAX                            ; 005aec3e
    PUSH 0x651bab                       ; 005aec3f | = "Get Primary buffer format"
    PUSH 0x651a6c                       ; 005aec44 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 005aec49
    PUSH EAX                            ; 005aec50
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005aec51
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005aec56
    LEA EAX,[ESP + 0x4b0]               ; 005aec59
    PUSH EAX                            ; 005aec60
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005aec61
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005aec66
    JMP 0x005ae854                      ; 005aec69
        ;   XREF to: 005ae854 (UNCONDITIONAL_JUMP)  ; LAB_005ae854
    PUSH EAX                            ; 005aec6e
        ;   Label: LAB_005aec6e
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005aec6f
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005aec74
    PUSH EAX                            ; 005aec77
    PUSH 0x651b5a                       ; 005aec78 | = "Create temp secondary buffer for prop..."
    PUSH 0x651a6c                       ; 005aec7d | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 005aec82
    PUSH EAX                            ; 005aec89
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005aec8a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005aec8f
    LEA EAX,[ESP + 0x320]               ; 005aec92
    PUSH EAX                            ; 005aec99
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005aec9a
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005aec9f
    JMP 0x005aeaaa                      ; 005aeca2
        ;   XREF to: 005aeaaa (UNCONDITIONAL_JUMP)  ; LAB_005aeaaa
    PUSH 0x3f6a9c0                      ; 005aeca7 | g_DirectSoundPropertySet
        ;   Label: LAB_005aeca7
    PUSH 0x681dd0                       ; 005aecac | g_IID_IKsPropertySet
    MOV EAX,dword ptr [EDX]             ; 005aecb1
    PUSH EDX                            ; 005aecb3
    CALL dword ptr [EAX]                ; 005aecb4
    MOV EBX,dword ptr [ESP + 0x690]     ; 005aecb6
    TEST EBX,EBX                        ; 005aecbd
    JZ 0x005aecd0                       ; 005aecbf
        ;   XREF to: 005aecd0 (CONDITIONAL_JUMP)  ; LAB_005aecd0
    PUSH EBX                            ; 005aecc1
    MOV EAX,dword ptr [EBX]             ; 005aecc2
    XOR EDI,EDI                         ; 005aecc4
    CALL dword ptr [EAX + 0x8]          ; 005aecc6
    MOV dword ptr [ESP + 0x690],EDI     ; 005aecc9
    MOV EBP,dword ptr [ESP + 0x694]     ; 005aecd0
        ;   Label: LAB_005aecd0
    TEST EBP,EBP                        ; 005aecd7
    JZ 0x005aeaaa                       ; 005aecd9
        ;   XREF to: 005aeaaa (CONDITIONAL_JUMP)  ; LAB_005aeaaa
    PUSH EBP                            ; 005aecdf
    MOV EAX,dword ptr [EBP]             ; 005aece0
    CALL dword ptr [EAX + 0x8]          ; 005aece3
    XOR ECX,ECX                         ; 005aece6
    MOV dword ptr [ESP + 0x694],ECX     ; 005aece8
    JMP 0x005aeaaa                      ; 005aecef
        ;   XREF to: 005aeaaa (UNCONDITIONAL_JUMP)  ; LAB_005aeaaa
    MOV EAX,dword ptr [ESP + 0x6c4]     ; 005aecf4
        ;   Label: LAB_005aecf4
    MOV dword ptr [EAX],0x0             ; 005aecfb
    MOV EAX,0x1                         ; 005aed01
    ADD ESP,0x6a0                       ; 005aed06
    POP EBP                             ; 005aed0c
    POP EDI                             ; 005aed0d
    POP ESI                             ; 005aed0e
    POP EBX                             ; 005aed0f
    RET                                 ; 005aed10
    PUSH EAX                            ; 005aed11
        ;   Label: LAB_005aed11
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005aed12
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005aed17
    PUSH EAX                            ; 005aed1a
    PUSH 0x651bc5                       ; 005aed1b | = "Create the secondary buffer"
    PUSH 0x651a6c                       ; 005aed20 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005aed25
    PUSH EAX                            ; 005aed29
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005aed2a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005aed2f
    MOV EAX,ESP                         ; 005aed32
    PUSH EAX                            ; 005aed34
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005aed35
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005aed3a
    JMP 0x005ae854                      ; 005aed3d
        ;   XREF to: 005ae854 (UNCONDITIONAL_JUMP)  ; LAB_005ae854

