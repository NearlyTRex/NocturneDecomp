; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4ea2
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 at 005a53de
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a94ec
;
; Referenced Globals:
;   TerminatedCString s_allocateHwSample_failed_0064fabf
;   TerminatedCString s_sound_sndmain_cpp_0064fcbf
;   int g_LastSampleAccessIndex
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f62980
;   undefined4 DAT_03f629ac
;   undefined4 DAT_03f62afc
;   undefined4 DAT_03f62b00
;   undefined4 DAT_03f62b04
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6170
        ;   Label: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
    PUSH ESI                            ; 005a6171
    PUSH EDI                            ; 005a6172
    PUSH EBP                            ; 005a6173
    SUB ESP,0x4                         ; 005a6174
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a6177
    PUSH EDX                            ; 005a617b
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0 ; 005a617c
        ;   XREF to: 005a63b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a6181
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a6184
    PUSH ECX                            ; 005a6188
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400 ; 005a6189
        ;   XREF to: 005a6400 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a618e
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 005a6191
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
    TEST EAX,EAX                        ; 005a6196
    JZ 0x005a6262                       ; 005a6198
        ;   XREF to: 005a6262 (CONDITIONAL_JUMP)  ; LAB_005a6262
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a619e
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a61a2
    MOV EBP,dword ptr [ESP + 0x18]      ; 005a61a6
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a61aa
    MOV ECX,dword ptr [0x03f69268]      ; 005a61ae | g_CSoundDevicePtr
    MOV EAX,dword ptr [EAX + 0x108]     ; 005a61b4
    MOV ESI,dword ptr [ESI + 0x10c]     ; 005a61ba
    MOV EBP,dword ptr [EBP + 0x160]     ; 005a61c0
    MOV EDI,dword ptr [EDI + 0x104]     ; 005a61c6
    MOV dword ptr [ESP],EAX             ; 005a61cc
    TEST ECX,ECX                        ; 005a61cf
    JZ 0x005a6223                       ; 005a61d1
        ;   XREF to: 005a6223 (CONDITIONAL_JUMP)  ; LAB_005a6223
    PUSH EBP                            ; 005a61d3
        ;   Label: LAB_005a61d3
    PUSH ESI                            ; 005a61d4
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a61d5
    PUSH EBX                            ; 005a61d9
    MOV EAX,[0x03f69268]                ; 005a61da | g_CSoundDevicePtr
    PUSH EDI                            ; 005a61df
    MOV EDX,dword ptr [EAX]             ; 005a61e0
    PUSH EAX                            ; 005a61e2
    CALL dword ptr [EDX + 0x2c]         ; 005a61e3
    ADD ESP,0x14                        ; 005a61e6
    TEST EAX,EAX                        ; 005a61e9
    JNZ 0x005a6225                      ; 005a61eb
        ;   XREF to: 005a6225 (CONDITIONAL_JUMP)  ; LAB_005a6225
    MOV EAX,[0x03f62828]                ; 005a61ed | g_LastSampleAccessIndex
    XOR EBX,EBX                         ; 005a61f2
    INC EAX                             ; 005a61f4
        ;   Label: LAB_005a61f4
    CMP EAX,0x40                        ; 005a61f5
    JL 0x005a61fc                       ; 005a61f8
        ;   XREF to: 005a61fc (CONDITIONAL_JUMP)  ; LAB_005a61fc
    XOR EAX,EAX                         ; 005a61fa
    IMUL EDX,EAX,0x180                  ; 005a61fc
        ;   Label: LAB_005a61fc
    CMP dword ptr [EDX + 0x3f62980],0x0 ; 005a6202 | DAT_03f62980 | DAT_03f62b00
    JZ 0x005a623f                       ; 005a6209
        ;   XREF to: 005a623f (CONDITIONAL_JUMP)  ; LAB_005a623f
    INC EBX                             ; 005a620b
        ;   Label: LAB_005a620b
    CMP EBX,0x40                        ; 005a620c
    JL 0x005a61f4                       ; 005a620f
        ;   XREF to: 005a61f4 (CONDITIONAL_JUMP)  ; LAB_005a61f4
    CMP EBX,0x40                        ; 005a6211
        ;   Label: LAB_005a6211
    JL 0x005a61d3                       ; 005a6214
        ;   XREF to: 005a61d3 (CONDITIONAL_JUMP)  ; LAB_005a61d3
    PUSH 0x64fabf                       ; 005a6216 | = "allocateHwSample - failed\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a621b
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005a6220
    XOR EAX,EAX                         ; 005a6223
        ;   Label: LAB_005a6223
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a6225
        ;   Label: LAB_005a6225
    MOV dword ptr [EDX + 0x158],EAX     ; 005a6229
    TEST EAX,EAX                        ; 005a622f
    JNZ 0x005a62b3                      ; 005a6231
        ;   XREF to: 005a62b3 (CONDITIONAL_JUMP)  ; LAB_005a62b3
    ADD ESP,0x4                         ; 005a6237
        ;   Label: LAB_005a6237
    POP EBP                             ; 005a623a
    POP EDI                             ; 005a623b
    POP ESI                             ; 005a623c
    POP EBX                             ; 005a623d
    RET                                 ; 005a623e
    CMP dword ptr [EDX + 0x3f62984],0x0 ; 005a623f | DAT_03f62b04
        ;   Label: LAB_005a623f
    JZ 0x005a620b                       ; 005a6246
        ;   XREF to: 005a620b (CONDITIONAL_JUMP)  ; LAB_005a620b
    CMP dword ptr [EDX + 0x3f6297c],0x0 ; 005a6248 | DAT_03f62afc
    JNZ 0x005a620b                      ; 005a624f
        ;   XREF to: 005a620b (CONDITIONAL_JUMP)  ; LAB_005a620b
    ADD EDX,0x3f6282c                   ; 005a6251 | g_SfxSamples
    PUSH EDX                            ; 005a6257 | DAT_03f629ac
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a6258
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a625d
    JMP 0x005a6211                      ; 005a6260
        ;   XREF to: 005a6211 (UNCONDITIONAL_JUMP)  ; LAB_005a6211
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a6262
        ;   Label: LAB_005a6262
    PUSH EBX                            ; 005a6266
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a6267
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EBX + 0x160]    ; 005a626c
    ADD ESP,0x4                         ; 005a6273
    PUSH EAX                            ; 005a6276
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450 ; 005a6277
        ;   XREF to: 005a4450 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)
    ADD ESP,0x4                         ; 005a627c
    PUSH 0x6fb                          ; 005a627f
    PUSH 0x64fcbf                       ; 005a6284 | = "..\\sound\\sndmain.cpp"
    PUSH EBX                            ; 005a6289
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a628a
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EBX + 0x160]    ; 005a628f
    ADD ESP,0x4                         ; 005a6296
    PUSH EAX                            ; 005a6299
    MOV EDX,dword ptr [EBX + 0x120]     ; 005a629a
    PUSH EDX                            ; 005a62a0
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005a62a1
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 005a62a6
    TEST EAX,EAX                        ; 005a62a9
    JZ 0x005a6237                       ; 005a62ab
        ;   XREF to: 005a6237 (CONDITIONAL_JUMP)  ; LAB_005a6237
    MOV dword ptr [EBX + 0x120],EAX     ; 005a62ad
    MOV EAX,0x1                         ; 005a62b3
        ;   Label: LAB_005a62b3
    ADD ESP,0x4                         ; 005a62b8
    POP EBP                             ; 005a62bb
    POP EDI                             ; 005a62bc
    POP ESI                             ; 005a62bd
    POP EBX                             ; 005a62be
    RET                                 ; 005a62bf

