; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40(CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channel_count
; int              Stack[0x10]:4   sample_rate
; int              Stack[0x14]:4   sample_count
; Local Variables:
; char[400]        Stack[-0x1c8]:400  acStack_1c8
; DSBUFFERDESC     Stack[-0x38]:20  local_38
; tWAVEFORMATEX    Stack[-0x24]:20  local_24
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Create_secondary_buffer_00651c0c
;   TerminatedCString s_DirectSoundDevice_alloca_00651c24
;   IDirectSound* g_DirectSound
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   undefined4 g_DirectSoundSampleBuffers[1]
;   undefined4 g_DirectSoundSampleBuffers[2]
;   undefined4 g_DirectSoundSampleBuffers[3]
;   undefined4 g_DirectSoundBufferMetadata[2].field0_0x0
;   undefined4 g_DirectSoundBufferMetadata[2].field1_0x4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aef40
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
    PUSH ESI                            ; 005aef41
    PUSH EDI                            ; 005aef42
    PUSH EBP                            ; 005aef43
    SUB ESP,0x1b8                       ; 005aef44
    MOV EDI,dword ptr [ESP + 0x1d0]     ; 005aef4a
    CMP dword ptr [0x03f6a9b0],0x0      ; 005aef51 | g_DirectSound
    JZ 0x005aef85                       ; 005aef58
        ;   XREF to: 005aef85 (CONDITIONAL_JUMP)  ; LAB_005aef85
    MOV EAX,0x4                         ; 005aef5a
    MOV ECX,dword ptr [0x03f6a9e4]      ; 005aef5f | g_DirectSoundSampleBuffers[1]
    MOV EBX,0x1                         ; 005aef65
    TEST ECX,ECX                        ; 005aef6a
    JZ 0x005aef80                       ; 005aef6c
        ;   XREF to: 005aef80 (CONDITIONAL_JUMP)  ; LAB_005aef80
    ADD EAX,0x4                         ; 005aef6e
        ;   Label: LAB_005aef6e
    INC EBX                             ; 005aef71
    CMP EAX,0x64                        ; 005aef72
    JGE 0x005aef80                      ; 005aef75
        ;   XREF to: 005aef80 (CONDITIONAL_JUMP)  ; LAB_005aef80
    CMP dword ptr [EAX + 0x3f6a9e0],0x0 ; 005aef77 | g_DirectSoundSampleBuffers[2] | g_DirectSoundSampleBuffers[3]
    JNZ 0x005aef6e                      ; 005aef7e
        ;   XREF to: 005aef6e (CONDITIONAL_JUMP)  ; LAB_005aef6e
    CMP EBX,0x19                        ; 005aef80
        ;   Label: LAB_005aef80
    JL 0x005aef92                       ; 005aef83
        ;   XREF to: 005aef92 (CONDITIONAL_JUMP)  ; LAB_005aef92
    XOR EAX,EAX                         ; 005aef85
        ;   Label: LAB_005aef85
    ADD ESP,0x1b8                       ; 005aef87
    POP EBP                             ; 005aef8d
    POP EDI                             ; 005aef8e
    POP ESI                             ; 005aef8f
    POP EBX                             ; 005aef90
    RET                                 ; 005aef91
    PUSH 0x12                           ; 005aef92
        ;   Label: LAB_005aef92
    PUSH 0x0                            ; 005aef94
    LEA EAX,[ESP + 0x1ac]               ; 005aef96
    PUSH EAX                            ; 005aef9d
    CALL crt_memory.c_memset_FUN_005fde40 ; 005aef9e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005aefa3
    MOV EDX,0x1                         ; 005aefa6
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005aefab
    MOV word ptr [ESP + 0x1a4],DX       ; 005aefb2
    MOV word ptr [ESP + 0x1a6],AX       ; 005aefba
    MOV EDX,EDI                         ; 005aefc2
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 005aefc4
    SAR EDX,0x1f                        ; 005aefcb
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005aefce
    MOV EAX,EDI                         ; 005aefd5
    SHL EDX,0x3                         ; 005aefd7
    SBB EAX,EDX                         ; 005aefda
    SAR EAX,0x3                         ; 005aefdc
    XOR ECX,ECX                         ; 005aefdf
    MOV CX,word ptr [ESP + 0x1d4]       ; 005aefe1
    MOV ESI,EAX                         ; 005aefe9
    IMUL EAX,ECX                        ; 005aefeb
    MOV word ptr [ESP + 0x1b0],AX       ; 005aefee
    XOR EAX,EAX                         ; 005aeff6
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 005aeff8
    MOV AX,word ptr [ESP + 0x1b0]       ; 005aefff
    IMUL EDX,EAX                        ; 005af007
    PUSH 0x14                           ; 005af00a
    PUSH 0x0                            ; 005af00c
    LEA EAX,[ESP + 0x198]               ; 005af00e
    PUSH EAX                            ; 005af015
    MOV word ptr [ESP + 0x1be],DI       ; 005af016
    MOV dword ptr [ESP + 0x1b8],EDX     ; 005af01e
    CALL crt_memory.c_memset_FUN_005fde40 ; 005af025
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    LEA EAX,[ESP + 0x1b0]               ; 005af02a
    ADD ESP,0xc                         ; 005af031
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005af034
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 005af03b
    IMUL EAX,ESI                        ; 005af042
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 005af045
    IMUL EDX,EAX                        ; 005af04c
    MOV EDI,0x14                        ; 005af04f
    MOV EBP,0xb0                        ; 005af054
    MOV dword ptr [ESP + 0x190],EDI     ; 005af059
    LEA EDI,[EBX*0x4 + 0x0]             ; 005af060
    MOV dword ptr [ESP + 0x198],EDX     ; 005af067
    MOV EDX,0x3f6a9e0                   ; 005af06e | g_DirectSoundSampleBuffers
    PUSH 0x0                            ; 005af073
    ADD EDX,EDI                         ; 005af075
    MOV EAX,[0x03f6a9b0]                ; 005af077 | g_DirectSound
    PUSH EDX                            ; 005af07c | g_DirectSoundSampleBuffers[2]
    LEA EDX,[ESP + 0x198]               ; 005af07d
    MOV dword ptr [ESP + 0x19c],EBP     ; 005af084
    PUSH EDX                            ; 005af08b
    MOV ECX,dword ptr [EAX]             ; 005af08c
    PUSH EAX                            ; 005af08e
    CALL dword ptr [ECX + 0xc]          ; 005af08f
    TEST EAX,EAX                        ; 005af092
    JNZ 0x005af0ee                      ; 005af094
        ;   XREF to: 005af0ee (CONDITIONAL_JUMP)  ; LAB_005af0ee
    CMP dword ptr [EDI + 0x3f6a9e0],0x0 ; 005af096 | g_DirectSoundSampleBuffers[2]
    JNZ 0x005af11c                      ; 005af09d
        ;   XREF to: 005af11c (CONDITIONAL_JUMP)  ; LAB_005af11c
    LEA ESI,[EBX*0x4 + 0x0]             ; 005af0a3
        ;   Label: LAB_005af0a3
    PUSH 0x651c24                       ; 005af0aa | = "DirectSoundDevice::allocateSample - a..."
    ADD ESI,0x3f6a9e0                   ; 005af0af | g_DirectSoundSampleBuffers
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af0b5
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    MOV ECX,dword ptr [ESI]             ; 005af0ba | g_DirectSoundSampleBuffers[2]
    ADD ESP,0x4                         ; 005af0bc
    TEST ECX,ECX                        ; 005af0bf
    JZ 0x005af0cf                       ; 005af0c1
        ;   XREF to: 005af0cf (CONDITIONAL_JUMP)  ; LAB_005af0cf
    PUSH ECX                            ; 005af0c3
    MOV EDI,dword ptr [ECX]             ; 005af0c4
    CALL dword ptr [EDI + 0x8]          ; 005af0c6
    MOV dword ptr [ESI],0x0             ; 005af0c9 | g_DirectSoundSampleBuffers[2]
    LEA EAX,[EBX*0x4 + 0x0]             ; 005af0cf
        ;   Label: LAB_005af0cf
    ADD EAX,EBX                         ; 005af0d6
    XOR EBX,EBX                         ; 005af0d8
    MOV dword ptr [EAX*0x4 + 0x3f6ab3c],EBX ; 005af0da | g_DirectSoundBufferMetadata[2].field0_0x0
    XOR EAX,EAX                         ; 005af0e1
    ADD ESP,0x1b8                       ; 005af0e3
    POP EBP                             ; 005af0e9
    POP EDI                             ; 005af0ea
    POP ESI                             ; 005af0eb
    POP EBX                             ; 005af0ec
    RET                                 ; 005af0ed
    PUSH EAX                            ; 005af0ee
        ;   Label: LAB_005af0ee
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af0ef
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005af0f4
    PUSH EAX                            ; 005af0f7
    PUSH 0x651c0c                       ; 005af0f8 | = "Create secondary buffer"
    PUSH 0x651a6c                       ; 005af0fd | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005af102
    PUSH EAX                            ; 005af106
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005af107
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005af10c
    MOV EAX,ESP                         ; 005af10f
    PUSH EAX                            ; 005af111
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af112
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005af117
    JMP 0x005af0a3                      ; 005af11a
        ;   XREF to: 005af0a3 (UNCONDITIONAL_JUMP)  ; LAB_005af0a3
    MOV EDI,dword ptr [ESP + 0x1d4]     ; 005af11c
        ;   Label: LAB_005af11c
    IMUL EDI,ESI                        ; 005af123
    LEA EAX,[EBX*0x4 + 0x0]             ; 005af126
    ADD EAX,EBX                         ; 005af12d
    XOR EDX,EDX                         ; 005af12f
    MOV dword ptr [EAX*0x4 + 0x3f6ab40],EDX ; 005af131 | g_DirectSoundBufferMetadata[2].field1_0x4
    MOV dword ptr [EAX*0x4 + 0x3f6ab3c],EDI ; 005af138 | g_DirectSoundBufferMetadata[2].field0_0x0
    MOV EAX,EBX                         ; 005af13f
    ADD ESP,0x1b8                       ; 005af141
    POP EBP                             ; 005af147
    POP EDI                             ; 005af148
    POP ESI                             ; 005af149
    POP EBX                             ; 005af14a
    RET                                 ; 005af14b

