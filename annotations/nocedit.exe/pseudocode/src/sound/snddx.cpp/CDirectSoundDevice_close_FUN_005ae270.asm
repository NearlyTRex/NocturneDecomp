; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440 at 005b04ef
;
; Referenced Globals:
;   IDirectSound* g_DirectSound
;   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
;   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
;   IDirectSound3DListener* g_DirectSound3DListener
;   IKsPropertySet* g_DirectSoundPropertySet
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   undefined4 g_DirectSoundSampleBuffers[1]
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae270
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
    PUSH ESI                            ; 005ae271
    PUSH EDI                            ; 005ae272
    PUSH EBP                            ; 005ae273
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ae274
    PUSH EDX                            ; 005ae278
    MOV EAX,dword ptr [EDX]             ; 005ae279
    MOV EDI,0x1                         ; 005ae27b
    CALL dword ptr [EAX + 0x8]          ; 005ae280
    ADD ESP,0x4                         ; 005ae283
    TEST EAX,EAX                        ; 005ae286
    JZ 0x005ae321                       ; 005ae288
        ;   XREF to: 005ae321 (CONDITIONAL_JUMP)  ; LAB_005ae321
    MOV EBX,0x3f6a9e0                   ; 005ae28e | g_DirectSoundSampleBuffers
        ;   Label: LAB_005ae28e
    LEA ESI,[EBX + 0x64]                ; 005ae293 | g_DirectSoundHardwareSfxBuffers
    MOV EDX,dword ptr [EBX]             ; 005ae296 | g_DirectSoundSampleBuffers | g_DirectSoundSampleBuffers[1]
        ;   Label: LAB_005ae296
    TEST EDX,EDX                        ; 005ae298
    JZ 0x005ae2aa                       ; 005ae29a
        ;   XREF to: 005ae2aa (CONDITIONAL_JUMP)  ; LAB_005ae2aa
    MOV EAX,EDX                         ; 005ae29c
    PUSH EAX                            ; 005ae29e
    MOV EDX,dword ptr [EDX]             ; 005ae29f
    CALL dword ptr [EDX + 0x8]          ; 005ae2a1
    MOV dword ptr [EBX],0x0             ; 005ae2a4 | g_DirectSoundSampleBuffers
    ADD EBX,0x4                         ; 005ae2aa
        ;   Label: LAB_005ae2aa
    CMP EBX,ESI                         ; 005ae2ad
    JNZ 0x005ae296                      ; 005ae2af
        ;   XREF to: 005ae296 (CONDITIONAL_JUMP)  ; LAB_005ae296
    MOV ECX,dword ptr [0x03f6a9bc]      ; 005ae2b1 | g_DirectSound3DListener
    TEST ECX,ECX                        ; 005ae2b7
    JZ 0x005ae2c9                       ; 005ae2b9
        ;   XREF to: 005ae2c9 (CONDITIONAL_JUMP)  ; LAB_005ae2c9
    PUSH ECX                            ; 005ae2bb
    MOV EDX,dword ptr [ECX]             ; 005ae2bc
    XOR EBX,ESI                         ; 005ae2be
    CALL dword ptr [EDX + 0x8]          ; 005ae2c0
    MOV dword ptr [0x03f6a9bc],EBX      ; 005ae2c3 | g_DirectSound3DListener
    MOV ESI,dword ptr [0x03f6a9b8]      ; 005ae2c9 | g_DirectSoundSecondaryBuffer
        ;   Label: LAB_005ae2c9
    TEST ESI,ESI                        ; 005ae2cf
    JZ 0x005ae2e1                       ; 005ae2d1
        ;   XREF to: 005ae2e1 (CONDITIONAL_JUMP)  ; LAB_005ae2e1
    PUSH ESI                            ; 005ae2d3
    MOV EDX,dword ptr [ESI]             ; 005ae2d4
    XOR EBP,EBP                         ; 005ae2d6
    CALL dword ptr [EDX + 0x8]          ; 005ae2d8
    MOV dword ptr [0x03f6a9b8],EBP      ; 005ae2db | g_DirectSoundSecondaryBuffer
    MOV EAX,[0x03f6a9c0]                ; 005ae2e1 | g_DirectSoundPropertySet
        ;   Label: LAB_005ae2e1
    TEST EAX,EAX                        ; 005ae2e6
    JZ 0x005ae2f8                       ; 005ae2e8
        ;   XREF to: 005ae2f8 (CONDITIONAL_JUMP)  ; LAB_005ae2f8
    PUSH EAX                            ; 005ae2ea
    MOV EDX,dword ptr [EAX]             ; 005ae2eb
    CALL dword ptr [EDX + 0x8]          ; 005ae2ed
    XOR EDX,EDX                         ; 005ae2f0
    MOV dword ptr [0x03f6a9c0],EDX      ; 005ae2f2 | g_DirectSoundPropertySet
    MOV ECX,dword ptr [0x03f6a9b4]      ; 005ae2f8 | g_DirectSoundPrimaryBuffer
        ;   Label: LAB_005ae2f8
    TEST ECX,ECX                        ; 005ae2fe
    JZ 0x005ae310                       ; 005ae300
        ;   XREF to: 005ae310 (CONDITIONAL_JUMP)  ; LAB_005ae310
    PUSH ECX                            ; 005ae302
    MOV EDX,dword ptr [ECX]             ; 005ae303
    XOR EBX,EBX                         ; 005ae305
    CALL dword ptr [EDX + 0x8]          ; 005ae307
    MOV dword ptr [0x03f6a9b4],EBX      ; 005ae30a | g_DirectSoundPrimaryBuffer
    MOV ESI,dword ptr [0x03f6a9b0]      ; 005ae310 | g_DirectSound
        ;   Label: LAB_005ae310
    TEST ESI,ESI                        ; 005ae316
    JNZ 0x005ae328                      ; 005ae318
        ;   XREF to: 005ae328 (CONDITIONAL_JUMP)  ; LAB_005ae328
    MOV EAX,EDI                         ; 005ae31a
    POP EBP                             ; 005ae31c
    POP EDI                             ; 005ae31d
    POP ESI                             ; 005ae31e
    POP EBX                             ; 005ae31f
    RET                                 ; 005ae320
    XOR EDI,EDI                         ; 005ae321
        ;   Label: LAB_005ae321
    JMP 0x005ae28e                      ; 005ae323
        ;   XREF to: 005ae28e (UNCONDITIONAL_JUMP)  ; LAB_005ae28e
    PUSH ESI                            ; 005ae328
        ;   Label: LAB_005ae328
    MOV EDX,dword ptr [ESI]             ; 005ae329
    XOR EBP,EBP                         ; 005ae32b
    CALL dword ptr [EDX + 0x8]          ; 005ae32d
    MOV dword ptr [0x03f6a9b0],EBP      ; 005ae330 | g_DirectSound
    MOV EAX,EDI                         ; 005ae336
    POP EBP                             ; 005ae338
    POP EDI                             ; 005ae339
    POP ESI                             ; 005ae33a
    POP EBX                             ; 005ae33b
    RET                                 ; 005ae33c

