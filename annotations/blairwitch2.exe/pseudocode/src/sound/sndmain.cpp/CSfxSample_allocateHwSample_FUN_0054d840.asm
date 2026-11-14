; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined        Stack[-0x160]:1  local_160
;
; XREF[3]:
;   sound_sndmain.cpp_createUserSample_FUN_005516d0 at 005517bd
;   sound_sndmain.cpp_getSfxSample_FUN_0054c1c0 at 0054c3ca
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_0054c7f0 at 0054c9f8
;
; Referenced Globals:
;   TerminatedCString s_allocateHwSample_failed_005e7f32
;   undefined4 s_Atried_to_use_Yamaha_WAV_005e80ad+1
;   undefined4 DAT_02641920
;   undefined4 g_SfxSamples[1].taken
;   undefined4 g_SfxSamples[1].ref_count
;   undefined4 g_SfxSamples[1].buffer_id
;   undefined4 g_SfxSamples[1].is_user_sample
;   undefined4 DAT_02648e80
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_0054dac0
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_0054da70
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0054b960
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d840
        ;   Label: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840
    PUSH ESI                            ; 0054d841
    PUSH EDI                            ; 0054d842
    PUSH EBP                            ; 0054d843
    SUB ESP,0x2a0                       ; 0054d844
    MOV EBP,dword ptr [ESP + 0x2b4]     ; 0054d84a
    PUSH EBP                            ; 0054d851
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_0054da70 ; 0054d852
        ;   XREF to: 0054da70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_0054da70(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054d857
    PUSH EBP                            ; 0054d85a
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_0054dac0 ; 0054d85b
        ;   XREF to: 0054dac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_0054dac0(CSfxSample * this_ptr)
    MOV EDX,dword ptr [EBP + 0x100]     ; 0054d860
    ADD ESP,0x4                         ; 0054d866
    CMP EDX,0x2                         ; 0054d869
    JZ 0x0054d923                       ; 0054d86c
        ;   XREF to: 0054d923 (CONDITIONAL_JUMP)  ; LAB_0054d923
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30 ; 0054d872
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30()
    CMP EAX,0x1                         ; 0054d877
    JL 0x0054d965                       ; 0054d87a
        ;   XREF to: 0054d965 (CONDITIONAL_JUMP)  ; LAB_0054d965
    MOV ECX,0x54                        ; 0054d880
    MOV EDI,ESP                         ; 0054d885
    MOV ESI,EBP                         ; 0054d887
    MOVSD.REP ES:EDI,ESI                ; 0054d889
    MOV ECX,0x54                        ; 0054d88b
    LEA EDI,[ESP + 0x150]               ; 0054d890
    MOV EAX,dword ptr [EBP + 0x164]     ; 0054d897
    MOV ESI,ESP                         ; 0054d89d
    MOV dword ptr [ESP + 0x110],EAX     ; 0054d89f
    MOVSD.REP ES:EDI,ESI                ; 0054d8a6
    CMP dword ptr [0x02648e80],0x0      ; 0054d8a8 | DAT_02648e80
    JZ 0x0054d908                       ; 0054d8af
        ;   XREF to: 0054d908 (CONDITIONAL_JUMP)  ; LAB_0054d908
    XOR ESI,ESI                         ; 0054d8b1
    LEA EDX,[ESP + 0x150]               ; 0054d8b3
        ;   Label: LAB_0054d8b3
    MOV EAX,[0x02648e80]                ; 0054d8ba | DAT_02648e80
    PUSH EDX                            ; 0054d8bf
    MOV ECX,dword ptr [EAX]             ; 0054d8c0
    PUSH EAX                            ; 0054d8c2
    CALL dword ptr [ECX + 0x30]         ; 0054d8c3
    ADD ESP,0x8                         ; 0054d8c6
    TEST EAX,EAX                        ; 0054d8c9
    JNZ 0x0054d90a                      ; 0054d8cb
        ;   XREF to: 0054d90a (CONDITIONAL_JUMP)  ; LAB_0054d90a
    MOV EAX,[0x02641920]                ; 0054d8cd | DAT_02641920
    MOV EBX,ESI                         ; 0054d8d2
    IMUL ECX,EAX,0x1ac                  ; 0054d8d4
    INC EAX                             ; 0054d8da
        ;   Label: LAB_0054d8da
    CMP EAX,0x40                        ; 0054d8db
    JL 0x0054d8e2                       ; 0054d8de
        ;   XREF to: 0054d8e2 (CONDITIONAL_JUMP)  ; LAB_0054d8e2
    MOV EAX,ESI                         ; 0054d8e0
    IMUL EDX,EAX,0x1ac                  ; 0054d8e2
        ;   Label: LAB_0054d8e2
    CMP ESI,dword ptr [EDX + 0x2641a78] ; 0054d8e8 | g_SfxSamples[1].ref_count
    JZ 0x0054d934                       ; 0054d8ee
        ;   XREF to: 0054d934 (CONDITIONAL_JUMP)  ; LAB_0054d934
    INC EBX                             ; 0054d8f0
        ;   Label: LAB_0054d8f0
    CMP EBX,0x40                        ; 0054d8f1
    JL 0x0054d8da                       ; 0054d8f4
        ;   XREF to: 0054d8da (CONDITIONAL_JUMP)  ; LAB_0054d8da
    CMP EBX,0x40                        ; 0054d8f6
        ;   Label: LAB_0054d8f6
    JL 0x0054d8b3                       ; 0054d8f9
        ;   XREF to: 0054d8b3 (CONDITIONAL_JUMP)  ; LAB_0054d8b3
    PUSH 0x5e7f32                       ; 0054d8fb | = "allocateHwSample - failed\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0054d900
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 0054d905
    XOR EAX,EAX                         ; 0054d908
        ;   Label: LAB_0054d908
    MOV dword ptr [EBP + 0x158],EAX     ; 0054d90a
        ;   Label: LAB_0054d90a
    TEST EAX,EAX                        ; 0054d910
    JNZ 0x0054d994                      ; 0054d912
        ;   XREF to: 0054d994 (CONDITIONAL_JUMP)  ; LAB_0054d994
    ADD ESP,0x2a0                       ; 0054d918
        ;   Label: LAB_0054d918
    POP EBP                             ; 0054d91e
    POP EDI                             ; 0054d91f
    POP ESI                             ; 0054d920
    POP EBX                             ; 0054d921
    RET                                 ; 0054d922
    PUSH 0x5e80ae                       ; 0054d923 | s_Atried_to_use_Yamaha_WAV_005e80ad+1
        ;   Label: LAB_0054d923
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0054d928
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 0054d92d
    XOR EAX,EAX                         ; 0054d930
    JMP 0x0054d918                      ; 0054d932
        ;   XREF to: 0054d918 (UNCONDITIONAL_JUMP)  ; LAB_0054d918
    CMP ESI,dword ptr [EDX + 0x2641a7c] ; 0054d934 | g_SfxSamples[1].buffer_id
        ;   Label: LAB_0054d934
    JZ 0x0054d8f0                       ; 0054d93a
        ;   XREF to: 0054d8f0 (CONDITIONAL_JUMP)  ; LAB_0054d8f0
    CMP ESI,dword ptr [EDX + 0x2641a74] ; 0054d93c | g_SfxSamples[1].taken
    JNZ 0x0054d8f0                      ; 0054d942
        ;   XREF to: 0054d8f0 (CONDITIONAL_JUMP)  ; LAB_0054d8f0
    CMP ESI,dword ptr [EDX + 0x2641a80] ; 0054d944 | g_SfxSamples[1].is_user_sample
    JNZ 0x0054d8f0                      ; 0054d94a
        ;   XREF to: 0054d8f0 (CONDITIONAL_JUMP)  ; LAB_0054d8f0
    CMP ESI,dword ptr [ECX + 0x2641acc] ; 0054d94c
    JNZ 0x0054d8f0                      ; 0054d952
        ;   XREF to: 0054d8f0 (CONDITIONAL_JUMP)  ; LAB_0054d8f0
    ADD EDX,0x2641924                   ; 0054d954
    PUSH EDX                            ; 0054d95a
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054d95b
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054d960
    JMP 0x0054d8f6                      ; 0054d963
        ;   XREF to: 0054d8f6 (UNCONDITIONAL_JUMP)  ; LAB_0054d8f6
    MOV ECX,dword ptr [EBP + 0x168]     ; 0054d965
        ;   Label: LAB_0054d965
    PUSH ECX                            ; 0054d96b
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0054b960 ; 0054d96c
        ;   XREF to: 0054b960 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0054b960(int requested_bytes)
    ADD ESP,0x4                         ; 0054d971
    MOV EBX,dword ptr [EBP + 0x168]     ; 0054d974
    PUSH EBX                            ; 0054d97a
    MOV ESI,dword ptr [EBP + 0x120]     ; 0054d97b
    PUSH ESI                            ; 0054d981
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0054d982
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0054d987
    TEST EAX,EAX                        ; 0054d98a
    JZ 0x0054d918                       ; 0054d98c
        ;   XREF to: 0054d918 (CONDITIONAL_JUMP)  ; LAB_0054d918
    MOV dword ptr [EBP + 0x120],EAX     ; 0054d98e
    MOV EAX,0x1                         ; 0054d994
        ;   Label: LAB_0054d994
    ADD ESP,0x2a0                       ; 0054d999
    POP EBP                             ; 0054d99f
    POP EDI                             ; 0054d9a0
    POP ESI                             ; 0054d9a1
    POP EBX                             ; 0054d9a2
    RET                                 ; 0054d9a3

