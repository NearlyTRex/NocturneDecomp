; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_005af220 (CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_id
; int              Stack[0xc]:4   offset
; int              Stack[0x10]:4   size
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_sound_snddx_cpp_00651c9d
;   TerminatedCString s_DirectSoundDevice_lockSa_00651cb0
;   TerminatedCString s_Lock_hw_sample_buffer_00651ce0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
;   undefined4 DAT_03f6ab40
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af220
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220
    PUSH ESI                            ; 005af221
    PUSH EBP                            ; 005af222
    SUB ESP,0x190                       ; 005af223
    MOV ESI,dword ptr [ESP + 0x1a4]     ; 005af229
    TEST ESI,ESI                        ; 005af230
    JLE 0x005af239                      ; 005af232
        ;   XREF to: 005af239 (CONDITIONAL_JUMP)  ; LAB_005af239
    CMP ESI,0x19                        ; 005af234
    JL 0x005af245                       ; 005af237
        ;   XREF to: 005af245 (CONDITIONAL_JUMP)  ; LAB_005af245
    XOR EAX,EAX                         ; 005af239
        ;   Label: LAB_005af239
    ADD ESP,0x190                       ; 005af23b
    POP EBP                             ; 005af241
    POP ESI                             ; 005af242
    POP EBX                             ; 005af243
    RET                                 ; 005af244
    CMP dword ptr [ESI*0x4 + 0x3f6a9e0],0x0 ; 005af245 | g_DirectSoundSampleBuffers
        ;   Label: LAB_005af245
    JZ 0x005af239                       ; 005af24d
        ;   XREF to: 005af239 (CONDITIONAL_JUMP)  ; LAB_005af239
    LEA EBX,[ESI*0x4 + 0x0]             ; 005af24f
    ADD EBX,ESI                         ; 005af256
    CMP dword ptr [EBX*0x4 + 0x3f6ab3c],0x1 ; 005af258 | g_DirectSoundBufferMetadata
    JL 0x005af239                       ; 005af260
        ;   XREF to: 005af239 (CONDITIONAL_JUMP)  ; LAB_005af239
    LEA EBX,[ESI*0x4 + 0x0]             ; 005af262
    ADD EBX,ESI                         ; 005af269
    SHL EBX,0x2                         ; 005af26b
    ADD EBX,0x3f6ab3c                   ; 005af26e | g_DirectSoundBufferMetadata
    CMP dword ptr [EBX + 0x4],0x0       ; 005af274 | DAT_03f6ab40
    JZ 0x005af29c                       ; 005af278
        ;   XREF to: 005af29c (CONDITIONAL_JUMP)  ; LAB_005af29c
    MOV EBP,0x651c9d                    ; 005af27a | = "..\\sound\\snddx.cpp"
    MOV EAX,0x2c4                       ; 005af27f
    PUSH 0x651cb0                       ; 005af284 | = "DirectSoundDevice::lockSample - alrea..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005af289 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005af28f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af294
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005af299
    PUSH 0x0                            ; 005af29c
        ;   Label: LAB_005af29c
    MOV EAX,dword ptr [ESI*0x4 + 0x3f6a9e0] ; 005af29e | g_DirectSoundSampleBuffers
    LEA ESI,[EBX + 0x10]                ; 005af2a5
    PUSH ESI                            ; 005af2a8
    LEA ESI,[EBX + 0x8]                 ; 005af2a9
    PUSH ESI                            ; 005af2ac
    LEA ESI,[EBX + 0xc]                 ; 005af2ad
    PUSH ESI                            ; 005af2b0
    LEA ESI,[EBX + 0x4]                 ; 005af2b1
    MOV ECX,dword ptr [EBX]             ; 005af2b4 | g_DirectSoundBufferMetadata
    PUSH ESI                            ; 005af2b6
    MOV ESI,dword ptr [ESP + 0x1c0]     ; 005af2b7
    IMUL ESI,ECX                        ; 005af2be
    PUSH ESI                            ; 005af2c1
    MOV ESI,dword ptr [ESP + 0x1c0]     ; 005af2c2
    IMUL ESI,ECX                        ; 005af2c9
    PUSH ESI                            ; 005af2cc
    MOV EDX,dword ptr [EAX]             ; 005af2cd
    PUSH EAX                            ; 005af2cf
    CALL dword ptr [EDX + 0x2c]         ; 005af2d0
    TEST EAX,EAX                        ; 005af2d3
    JNZ 0x005af2e4                      ; 005af2d5
        ;   XREF to: 005af2e4 (CONDITIONAL_JUMP)  ; LAB_005af2e4
    MOV EAX,dword ptr [EBX + 0x4]       ; 005af2d7 | DAT_03f6ab40
    ADD ESP,0x190                       ; 005af2da
    POP EBP                             ; 005af2e0
    POP ESI                             ; 005af2e1
    POP EBX                             ; 005af2e2
    RET                                 ; 005af2e3
    PUSH EAX                            ; 005af2e4
        ;   Label: LAB_005af2e4
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af2e5
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005af2ea
    PUSH EAX                            ; 005af2ed
    PUSH 0x651ce0                       ; 005af2ee | = "Lock hw sample buffer"
    PUSH 0x651a6c                       ; 005af2f3 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005af2f8
    PUSH EAX                            ; 005af2fc
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005af2fd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005af302
    MOV EAX,ESP                         ; 005af305
    PUSH EAX                            ; 005af307
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af308
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005af30d
    XOR EAX,EAX                         ; 005af310
    ADD ESP,0x190                       ; 005af312
    POP EBP                             ; 005af318
    POP ESI                             ; 005af319
    POP EBX                             ; 005af31a
    RET                                 ; 005af31b

