; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005582f0(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveInStart_005c8468 = 001c8990
;   TerminatedCString s_waveInStart_failed_005ea63c
;   undefined4 DAT_0264b108
;   undefined4 DAT_0264b24c
;   undefined4 DAT_0264b250
;   undefined4 DAT_0264b25c
;   undefined4 DAT_0264b260
;   undefined4 DAT_0264b274
;   undefined4 DAT_0264b278
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;   sound_sndwav.cpp_writeWavInBuffer_FUN_00558190
;   waveInStart
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005582f0
        ;   Label: sound_sndwav.cpp_CWavInDevice_start_FUN_005582f0
    PUSH ESI                            ; 005582f1
    PUSH EDI                            ; 005582f2
    PUSH EBP                            ; 005582f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005582f4
    MOV EDX,dword ptr [0x0264b260]      ; 005582f8 | DAT_0264b260
    XOR ESI,ESI                         ; 005582fe
    TEST EDX,EDX                        ; 00558300
    JLE 0x00558374                      ; 00558302
        ;   XREF to: 00558374 (CONDITIONAL_JUMP)  ; LAB_00558374
    XOR EBX,EBX                         ; 00558304
    PUSH 0x20                           ; 00558306
        ;   Label: LAB_00558306
    PUSH 0x0                            ; 00558308
    MOV EBP,dword ptr [EBX + 0x264b15c] ; 0055830a
    PUSH EBP                            ; 00558310
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00558311
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x264b15c] ; 00558316
    MOV EAX,dword ptr [EBX + 0x264b1fc] ; 0055831c
    MOV dword ptr [EDX],EAX             ; 00558322
    MOV EAX,dword ptr [EBX + 0x264b15c] ; 00558324
    MOV dword ptr [EAX + 0xc],ESI       ; 0055832a
    MOV EAX,[0x0264b24c]                ; 0055832d | DAT_0264b24c
    MOV EDX,EAX                         ; 00558332
    SAR EDX,0x1f                        ; 00558334
    SHL EDX,0x3                         ; 00558337
    SBB EAX,EDX                         ; 0055833a
    SAR EAX,0x3                         ; 0055833c
    IMUL EAX,dword ptr [0x0264b25c]     ; 0055833f | DAT_0264b25c
    IMUL EAX,dword ptr [0x0264b250]     ; 00558346 | DAT_0264b250
    ADD ESP,0xc                         ; 0055834d
    MOV EDX,dword ptr [EBX + 0x264b15c] ; 00558350
    PUSH ESI                            ; 00558356
    MOV dword ptr [EDX + 0x4],EAX       ; 00558357
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_00558190 ; 0055835a
        ;   XREF to: 00558190 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_00558190(int buffer_index)
    ADD ESP,0x4                         ; 0055835f
    TEST EAX,EAX                        ; 00558362
    JZ 0x005583a5                       ; 00558364
        ;   XREF to: 005583a5 (CONDITIONAL_JUMP)  ; LAB_005583a5
    MOV ECX,dword ptr [0x0264b260]      ; 00558366 | DAT_0264b260
    INC ESI                             ; 0055836c
    ADD EBX,0x4                         ; 0055836d
    CMP ESI,ECX                         ; 00558370
    JL 0x00558306                       ; 00558372
        ;   XREF to: 00558306 (CONDITIONAL_JUMP)  ; LAB_00558306
    MOV EAX,[0x0264b260]                ; 00558374 | DAT_0264b260
        ;   Label: LAB_00558374
    DEC EAX                             ; 00558379
    MOV EBX,dword ptr [0x0264b108]      ; 0055837a | DAT_0264b108
    MOV [0x0264b274],EAX                ; 00558380 | DAT_0264b274
    MOV EAX,[0x0264b25c]                ; 00558385 | DAT_0264b25c
    PUSH EBX                            ; 0055838a
    MOV [0x0264b278],EAX                ; 0055838b | DAT_0264b278
    CALL dword ptr CS:[0x5c8468]        ; 00558390 | PTR_waveInStart_005c8468
    TEST EAX,EAX                        ; 00558397
    JNZ 0x005583b5                      ; 00558399
        ;   XREF to: 005583b5 (CONDITIONAL_JUMP)  ; LAB_005583b5
    MOV EAX,0x1                         ; 0055839b
    POP EBP                             ; 005583a0
    POP EDI                             ; 005583a1
    POP ESI                             ; 005583a2
    POP EBX                             ; 005583a3
    RET                                 ; 005583a4
    PUSH EDI                            ; 005583a5
        ;   Label: LAB_005583a5
    MOV EAX,dword ptr [EDI]             ; 005583a6
    CALL dword ptr [EAX + 0x8]          ; 005583a8
    ADD ESP,0x4                         ; 005583ab
    XOR EAX,EAX                         ; 005583ae
    POP EBP                             ; 005583b0
    POP EDI                             ; 005583b1
    POP ESI                             ; 005583b2
    POP EBX                             ; 005583b3
    RET                                 ; 005583b4
    PUSH 0x5ea63c                       ; 005583b5 | = "waveInStart failed!"
        ;   Label: LAB_005583b5
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 005583ba
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 005583bf
    MOV EAX,dword ptr [EDI]             ; 005583c2
    PUSH EDI                            ; 005583c4
    CALL dword ptr [EAX + 0x8]          ; 005583c5
    ADD ESP,0x4                         ; 005583c8
    XOR EAX,EAX                         ; 005583cb
    POP EBP                             ; 005583cd
    POP EDI                             ; 005583ce
    POP ESI                             ; 005583cf
    POP EBX                             ; 005583d0
    RET                                 ; 005583d1

