; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_005af320(CDirectSoundDevice *this_ptr,int buffer_id)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_id
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_sound_snddx_cpp_00651cf6
;   TerminatedCString s_DirectSoundDevice_unlock_00651d09
;   TerminatedCString s_Unlock_hw_sample_buffer_00651d4b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
;   undefined4 g_DirectSoundBufferMetadata[0].pvLockedAudio1
;   undefined4 g_DirectSoundBufferMetadata[0].pvLockedAudio2
;   undefined4 g_DirectSoundBufferMetadata[0].dwLockedBytes1
;   undefined4 g_DirectSoundBufferMetadata[0].dwLockedBytes2
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af320
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320
    PUSH ESI                            ; 005af321
    PUSH EDI                            ; 005af322
    PUSH EBP                            ; 005af323
    SUB ESP,0x190                       ; 005af324
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 005af32a
    TEST ESI,ESI                        ; 005af331
    JLE 0x005af33e                      ; 005af333
        ;   XREF to: 005af33e (CONDITIONAL_JUMP)  ; LAB_005af33e
    CMP ESI,0x19                        ; 005af335
    JL 0x005af3d8                       ; 005af338
        ;   XREF to: 005af3d8 (CONDITIONAL_JUMP)  ; LAB_005af3d8
    PUSH ESI                            ; 005af33e
        ;   Label: LAB_005af33e
    MOV EBX,0x651cf6                    ; 005af33f | = "..\\sound\\snddx.cpp"
    MOV EDI,0x2d7                       ; 005af344
    PUSH 0x651d09                       ; 005af349 | = "DirectSoundDevice::unlockSample - Can..."
    MOV dword ptr [0x02f0ca48],EBX      ; 005af34e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005af354 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af35a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005af35f
    LEA EAX,[ESI*0x4 + 0x0]             ; 005af362
        ;   Label: LAB_005af362
    ADD EAX,ESI                         ; 005af369
    MOV EBX,0x3f6ab3c                   ; 005af36b | g_DirectSoundBufferMetadata
    SHL EAX,0x2                         ; 005af370
    ADD EBX,EAX                         ; 005af373
    MOV EBP,dword ptr [EBX + 0x4]       ; 005af375 | g_DirectSoundBufferMetadata[0].pvLockedAudio1
    TEST EBP,EBP                        ; 005af378
    JZ 0x005af3cd                       ; 005af37a
        ;   XREF to: 005af3cd (CONDITIONAL_JUMP)  ; LAB_005af3cd
    MOV EDX,dword ptr [EBX + 0x10]      ; 005af37c | g_DirectSoundBufferMetadata[0].dwLockedBytes2
    PUSH EDX                            ; 005af37f
    MOV ECX,dword ptr [EBX + 0x8]       ; 005af380 | g_DirectSoundBufferMetadata[0].pvLockedAudio2
    PUSH ECX                            ; 005af383
    MOV EDI,dword ptr [EBX + 0xc]       ; 005af384 | g_DirectSoundBufferMetadata[0].dwLockedBytes1
    PUSH EDI                            ; 005af387
    MOV EAX,dword ptr [ESI*0x4 + 0x3f6a9e0] ; 005af388 | g_DirectSoundSampleBuffers
    PUSH EBP                            ; 005af38f
    MOV ESI,dword ptr [EAX]             ; 005af390
    PUSH EAX                            ; 005af392
    CALL dword ptr [ESI + 0x4c]         ; 005af393
    TEST EAX,EAX                        ; 005af396
    JZ 0x005af3c6                       ; 005af398
        ;   XREF to: 005af3c6 (CONDITIONAL_JUMP)  ; LAB_005af3c6
    PUSH EAX                            ; 005af39a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af39b
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005af3a0
    PUSH EAX                            ; 005af3a3
    PUSH 0x651d4b                       ; 005af3a4 | = "Unlock hw sample buffer"
    PUSH 0x651a6c                       ; 005af3a9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005af3ae
    PUSH EAX                            ; 005af3b2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005af3b3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005af3b8
    MOV EAX,ESP                         ; 005af3bb
    PUSH EAX                            ; 005af3bd
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af3be
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005af3c3
    MOV dword ptr [EBX + 0x4],0x0       ; 005af3c6 | g_DirectSoundBufferMetadata[0].pvLockedAudio1
        ;   Label: LAB_005af3c6
    ADD ESP,0x190                       ; 005af3cd
        ;   Label: LAB_005af3cd
    POP EBP                             ; 005af3d3
    POP EDI                             ; 005af3d4
    POP ESI                             ; 005af3d5
    POP EBX                             ; 005af3d6
    RET                                 ; 005af3d7
    CMP dword ptr [ESI*0x4 + 0x3f6a9e0],0x0 ; 005af3d8 | g_DirectSoundSampleBuffers
        ;   Label: LAB_005af3d8
    JZ 0x005af33e                       ; 005af3e0
        ;   XREF to: 005af33e (CONDITIONAL_JUMP)  ; LAB_005af33e
    LEA EAX,[ESI*0x4 + 0x0]             ; 005af3e6
    ADD EAX,ESI                         ; 005af3ed
    CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1 ; 005af3ef | g_DirectSoundBufferMetadata
    JL 0x005af33e                       ; 005af3f7
        ;   XREF to: 005af33e (CONDITIONAL_JUMP)  ; LAB_005af33e
    JMP 0x005af362                      ; 005af3fd
        ;   XREF to: 005af362 (UNCONDITIONAL_JUMP)  ; LAB_005af362

