; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_0057ad20(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveInStart_005d0474 = 001d09a8
;   TerminatedCString s_waveInStart_failed_005f5836
;   undefined4 DAT_02c828d8
;   undefined4 DAT_02c82a1c
;   undefined4 DAT_02c82a20
;   undefined4 DAT_02c82a2c
;   undefined4 DAT_02c82a30
;   undefined4 DAT_02c82a44
;   undefined4 DAT_02c82a48
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   sound_sndmain.cpp_FUN_005773f0
;   sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0
;   waveInStart
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ad20
        ;   Label: sound_sndwav.cpp_CWavInDevice_start_FUN_0057ad20
    PUSH ESI                            ; 0057ad21
    PUSH EDI                            ; 0057ad22
    PUSH EBP                            ; 0057ad23
    MOV EDI,dword ptr [ESP + 0x14]      ; 0057ad24
    MOV EDX,dword ptr [0x02c82a30]      ; 0057ad28 | DAT_02c82a30
    XOR ESI,ESI                         ; 0057ad2e
    TEST EDX,EDX                        ; 0057ad30
    JLE 0x0057ada4                      ; 0057ad32
        ;   XREF to: 0057ada4 (CONDITIONAL_JUMP)  ; LAB_0057ada4
    XOR EBX,EBX                         ; 0057ad34
    PUSH 0x20                           ; 0057ad36
        ;   Label: LAB_0057ad36
    PUSH 0x0                            ; 0057ad38
    MOV EBP,dword ptr [EBX + 0x2c8292c] ; 0057ad3a
    PUSH EBP                            ; 0057ad40
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057ad41
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x2c8292c] ; 0057ad46
    MOV EAX,dword ptr [EBX + 0x2c829cc] ; 0057ad4c
    MOV dword ptr [EDX],EAX             ; 0057ad52
    MOV EAX,dword ptr [EBX + 0x2c8292c] ; 0057ad54
    MOV dword ptr [EAX + 0xc],ESI       ; 0057ad5a
    MOV EAX,[0x02c82a1c]                ; 0057ad5d | DAT_02c82a1c
    MOV EDX,EAX                         ; 0057ad62
    SAR EDX,0x1f                        ; 0057ad64
    SHL EDX,0x3                         ; 0057ad67
    SBB EAX,EDX                         ; 0057ad6a
    SAR EAX,0x3                         ; 0057ad6c
    IMUL EAX,dword ptr [0x02c82a2c]     ; 0057ad6f | DAT_02c82a2c
    IMUL EAX,dword ptr [0x02c82a20]     ; 0057ad76 | DAT_02c82a20
    ADD ESP,0xc                         ; 0057ad7d
    MOV EDX,dword ptr [EBX + 0x2c8292c] ; 0057ad80
    PUSH ESI                            ; 0057ad86
    MOV dword ptr [EDX + 0x4],EAX       ; 0057ad87
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0 ; 0057ad8a
        ;   XREF to: 0057abc0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0(int buffer_index)
    ADD ESP,0x4                         ; 0057ad8f
    TEST EAX,EAX                        ; 0057ad92
    JZ 0x0057add5                       ; 0057ad94
        ;   XREF to: 0057add5 (CONDITIONAL_JUMP)  ; LAB_0057add5
    MOV ECX,dword ptr [0x02c82a30]      ; 0057ad96 | DAT_02c82a30
    INC ESI                             ; 0057ad9c
    ADD EBX,0x4                         ; 0057ad9d
    CMP ESI,ECX                         ; 0057ada0
    JL 0x0057ad36                       ; 0057ada2
        ;   XREF to: 0057ad36 (CONDITIONAL_JUMP)  ; LAB_0057ad36
    MOV EAX,[0x02c82a30]                ; 0057ada4 | DAT_02c82a30
        ;   Label: LAB_0057ada4
    DEC EAX                             ; 0057ada9
    MOV EBX,dword ptr [0x02c828d8]      ; 0057adaa | DAT_02c828d8
    MOV [0x02c82a44],EAX                ; 0057adb0 | DAT_02c82a44
    MOV EAX,[0x02c82a2c]                ; 0057adb5 | DAT_02c82a2c
    PUSH EBX                            ; 0057adba
    MOV [0x02c82a48],EAX                ; 0057adbb | DAT_02c82a48
    CALL dword ptr CS:[0x5d0474]        ; 0057adc0 | PTR_waveInStart_005d0474
    TEST EAX,EAX                        ; 0057adc7
    JNZ 0x0057ade5                      ; 0057adc9
        ;   XREF to: 0057ade5 (CONDITIONAL_JUMP)  ; LAB_0057ade5
    MOV EAX,0x1                         ; 0057adcb
    POP EBP                             ; 0057add0
    POP EDI                             ; 0057add1
    POP ESI                             ; 0057add2
    POP EBX                             ; 0057add3
    RET                                 ; 0057add4
    PUSH EDI                            ; 0057add5
        ;   Label: LAB_0057add5
    MOV EAX,dword ptr [EDI]             ; 0057add6
    CALL dword ptr [EAX + 0x8]          ; 0057add8
    ADD ESP,0x4                         ; 0057addb
    XOR EAX,EAX                         ; 0057adde
    POP EBP                             ; 0057ade0
    POP EDI                             ; 0057ade1
    POP ESI                             ; 0057ade2
    POP EBX                             ; 0057ade3
    RET                                 ; 0057ade4
    PUSH 0x5f5836                       ; 0057ade5 | = "waveInStart failed!"
        ;   Label: LAB_0057ade5
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057adea
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057adef
    MOV EAX,dword ptr [EDI]             ; 0057adf2
    PUSH EDI                            ; 0057adf4
    CALL dword ptr [EAX + 0x8]          ; 0057adf5
    ADD ESP,0x4                         ; 0057adf8
    XOR EAX,EAX                         ; 0057adfb
    POP EBP                             ; 0057adfd
    POP EDI                             ; 0057adfe
    POP ESI                             ; 0057adff
    POP EBX                             ; 0057ae00
    RET                                 ; 0057ae01

