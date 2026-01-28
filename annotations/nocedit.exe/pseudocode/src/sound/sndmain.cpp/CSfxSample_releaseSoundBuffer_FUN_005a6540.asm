; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample *sample)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   sample
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 at 005a62d5
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a6c97
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4fae
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6540
        ;   Label: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
    PUSH EBP                            ; 005a6541
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a6542
    CMP dword ptr [EBX + 0x17c],0x0     ; 005a6546
    JZ 0x005a6579                       ; 005a654d
        ;   XREF to: 005a6579 (CONDITIONAL_JUMP)  ; LAB_005a6579
    PUSH ESI                            ; 005a654f
    MOV ECX,dword ptr [EBX + 0x158]     ; 005a6550
    TEST ECX,ECX                        ; 005a6556
    JZ 0x005a6564                       ; 005a6558
        ;   XREF to: 005a6564 (CONDITIONAL_JUMP)  ; LAB_005a6564
    MOV ESI,dword ptr [0x03f69268]      ; 005a655a | g_CSoundDevicePtr
    TEST ESI,ESI                        ; 005a6560
    JNZ 0x005a657c                      ; 005a6562
        ;   XREF to: 005a657c (CONDITIONAL_JUMP)  ; LAB_005a657c
    MOV dword ptr [EBX + 0x17c],0x0     ; 005a6564
        ;   Label: LAB_005a6564
    MOV dword ptr [EBX + 0x178],0x0     ; 005a656e
    POP ESI                             ; 005a6578
    POP EBP                             ; 005a6579
        ;   Label: LAB_005a6579
    POP EBX                             ; 005a657a
    RET                                 ; 005a657b
    PUSH EDI                            ; 005a657c
        ;   Label: LAB_005a657c
    MOV EDI,dword ptr [EBX + 0x17c]     ; 005a657d
    PUSH EDI                            ; 005a6583
    MOV EBP,dword ptr [EBX + 0x178]     ; 005a6584
    PUSH EBP                            ; 005a658a
    PUSH ECX                            ; 005a658b
    MOV EDX,dword ptr [ESI]             ; 005a658c
    PUSH ESI                            ; 005a658e
    CALL dword ptr [EDX + 0x38]         ; 005a658f
    ADD ESP,0x10                        ; 005a6592
    POP EDI                             ; 005a6595
    JMP 0x005a6564                      ; 005a6596
        ;   XREF to: 005a6564 (UNCONDITIONAL_JUMP)  ; LAB_005a6564

