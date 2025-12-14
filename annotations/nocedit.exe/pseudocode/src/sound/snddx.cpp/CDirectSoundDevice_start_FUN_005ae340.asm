; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340(CDirectSoundDevice * this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x338]:8  local_338
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Position_secondary_buffe_00651adc
;   TerminatedCString s_Play_the_secondary_buffe_00651afb
;   double DOUBLE_00651b1c = 0.5
;   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
;   int g_StreamBitsPerSample
;   int g_StreamSampleRate
;   int g_StreamChannelCount
;   int g_StreamSamplesPerBlock
;   int g_StreamBlockSizeBytes
;   int g_StreamBlockCount
;   int g_StreamCurrentBlock
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae340
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340
    PUSH ESI                            ; 005ae341
    PUSH EDI                            ; 005ae342
    PUSH EBP                            ; 005ae343
    MOV EBP,ESP                         ; 005ae344
    SUB ESP,0x328                       ; 005ae346
    AND ESP,0xfffffff8                  ; 005ae34c
    CMP dword ptr [0x03f6a9b8],0x0      ; 005ae34f | g_DirectSoundSecondaryBuffer
    JZ 0x005ae453                       ; 005ae356
        ;   XREF to: 005ae453 (CONDITIONAL_JUMP)  ; LAB_005ae453
    FILD dword ptr [0x03f6a9d0]         ; 005ae35c | g_StreamSamplesPerBlock
    FILD dword ptr [0x03f6a9c8]         ; 005ae362 | g_StreamSampleRate
    FDIVP                               ; 005ae368
    MOV EAX,[0x03f6a9c4]                ; 005ae36a | g_StreamBitsPerSample
    MOV EDX,EAX                         ; 005ae36f
    SAR EDX,0x1f                        ; 005ae371
    SHL EDX,0x3                         ; 005ae374
    SBB EAX,EDX                         ; 005ae377
    SAR EAX,0x3                         ; 005ae379
    IMUL EAX,dword ptr [0x03f6a9d0]     ; 005ae37c | g_StreamSamplesPerBlock
    MOV EBX,dword ptr [0x03f6a9cc]      ; 005ae383 | g_StreamChannelCount
    IMUL EAX,EBX                        ; 005ae389
    FMUL double ptr [0x00651b1c]        ; 005ae38c | DOUBLE_00651b1c
    MOV ESI,dword ptr [0x03f6a9d8]      ; 005ae392 | g_StreamBlockCount
    FSTP double ptr [ESP]               ; 005ae398
    XOR EBX,EBX                         ; 005ae39b
    MOV [0x03f6a9d4],EAX                ; 005ae39d | g_StreamBlockSizeBytes
    MOV dword ptr [0x03f6a9dc],EBX      ; 005ae3a2 | g_StreamCurrentBlock
    TEST ESI,ESI                        ; 005ae3a8
    JLE 0x005ae3c4                      ; 005ae3aa
        ;   XREF to: 005ae3c4 (CONDITIONAL_JUMP)  ; LAB_005ae3c4
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_005adff0 ; 005ae3ac
        ;   XREF to: 005adff0 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_005adff0()
        ;   Label: LAB_005ae3ac
    TEST EAX,EAX                        ; 005ae3b1
    JZ 0x005ae43b                       ; 005ae3b3
        ;   XREF to: 005ae43b (CONDITIONAL_JUMP)  ; LAB_005ae43b
    MOV EDX,dword ptr [0x03f6a9d8]      ; 005ae3b9 | g_StreamBlockCount
    INC EBX                             ; 005ae3bf
    CMP EBX,EDX                         ; 005ae3c0
    JL 0x005ae3ac                       ; 005ae3c2
        ;   XREF to: 005ae3ac (CONDITIONAL_JUMP)  ; LAB_005ae3ac
    MOV ECX,dword ptr [ESP + 0x4]       ; 005ae3c4
        ;   Label: LAB_005ae3c4
    PUSH ECX                            ; 005ae3c8
    MOV EBX,dword ptr [ESP + 0x4]       ; 005ae3c9
    PUSH EBX                            ; 005ae3cd
    CALL sound_sndmain.cpp_startSoundThread_FUN_005abc00 ; 005ae3ce
        ;   XREF to: 005abc00 (UNCONDITIONAL_CALL)  ; HANDLE sound_sndmain.cpp_startSoundThread_FUN_005abc00(double latency_seconds)
    ADD ESP,0x8                         ; 005ae3d3
    TEST EAX,EAX                        ; 005ae3d6
    JZ 0x005ae43b                       ; 005ae3d8
        ;   XREF to: 005ae43b (CONDITIONAL_JUMP)  ; LAB_005ae43b
    MOV ESI,dword ptr [0x03f6a9b8]      ; 005ae3da | g_DirectSoundSecondaryBuffer
    TEST ESI,ESI                        ; 005ae3e0
    JZ 0x005ae496                       ; 005ae3e2
        ;   XREF to: 005ae496 (CONDITIONAL_JUMP)  ; LAB_005ae496
    PUSH 0x0                            ; 005ae3e8
    MOV EBX,dword ptr [ESI]             ; 005ae3ea
    PUSH ESI                            ; 005ae3ec
    CALL dword ptr [EBX + 0x34]         ; 005ae3ed
    TEST EAX,EAX                        ; 005ae3f0
    JNZ 0x005ae469                      ; 005ae3f2
        ;   XREF to: 005ae469 (CONDITIONAL_JUMP)  ; LAB_005ae469
    PUSH 0x1                            ; 005ae3f4
    PUSH 0x0                            ; 005ae3f6
    MOV EAX,[0x03f6a9b8]                ; 005ae3f8 | g_DirectSoundSecondaryBuffer
    PUSH 0x0                            ; 005ae3fd
    MOV EBX,dword ptr [EAX]             ; 005ae3ff
    PUSH EAX                            ; 005ae401
    CALL dword ptr [EBX + 0x30]         ; 005ae402
    TEST EAX,EAX                        ; 005ae405
    JZ 0x005ae496                       ; 005ae407
        ;   XREF to: 005ae496 (CONDITIONAL_JUMP)  ; LAB_005ae496
    PUSH EAX                            ; 005ae40d
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae40e
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005ae413
    PUSH EAX                            ; 005ae416
    PUSH 0x651afb                       ; 005ae417 | = "Play the secondary buffer"
    PUSH 0x651a6c                       ; 005ae41c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 005ae421
    PUSH EAX                            ; 005ae425
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae426
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ae42b
    LEA EAX,[ESP + 0x8]                 ; 005ae42e
    PUSH EAX                            ; 005ae432
        ;   Label: LAB_005ae432
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae433
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005ae438
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ae43b
        ;   Label: LAB_005ae43b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae43e
    PUSH EDI                            ; 005ae441
    MOV EAX,dword ptr [EAX]             ; 005ae442
    CALL dword ptr [EAX + 0x8]          ; 005ae444
    ADD ESP,0x4                         ; 005ae447
    XOR EAX,EAX                         ; 005ae44a
    MOV ESP,EBP                         ; 005ae44c
    POP EBP                             ; 005ae44e
    POP EDI                             ; 005ae44f
    POP ESI                             ; 005ae450
    POP EBX                             ; 005ae451
    RET                                 ; 005ae452
    MOV EDI,0x9999999a                  ; 005ae453
        ;   Label: LAB_005ae453
    MOV EAX,0x3fa99999                  ; 005ae458
    MOV dword ptr [ESP],EDI             ; 005ae45d
    MOV dword ptr [ESP + 0x4],EAX       ; 005ae460
    JMP 0x005ae3c4                      ; 005ae464
        ;   XREF to: 005ae3c4 (UNCONDITIONAL_JUMP)  ; LAB_005ae3c4
    PUSH EAX                            ; 005ae469
        ;   Label: LAB_005ae469
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae46a
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005ae46f
    PUSH EAX                            ; 005ae472
    PUSH 0x651adc                       ; 005ae473 | = "Position secondary buffer to 0"
    PUSH 0x651a6c                       ; 005ae478 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a4]               ; 005ae47d
    PUSH EAX                            ; 005ae484
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae485
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ae48a
    LEA EAX,[ESP + 0x198]               ; 005ae48d
    JMP 0x005ae432                      ; 005ae494
        ;   XREF to: 005ae432 (UNCONDITIONAL_JUMP)  ; LAB_005ae432
    MOV EAX,0x1                         ; 005ae496
        ;   Label: LAB_005ae496
    MOV ESP,EBP                         ; 005ae49b
    POP EBP                             ; 005ae49d
    POP EDI                             ; 005ae49e
    POP ESI                             ; 005ae49f
    POP EBX                             ; 005ae4a0
    RET                                 ; 005ae4a1

