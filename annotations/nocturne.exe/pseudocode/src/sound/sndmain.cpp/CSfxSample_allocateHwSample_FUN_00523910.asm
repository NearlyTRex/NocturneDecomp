; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00522480 at 005226a2
;   sound_sndmain.cpp_FUN_005229f0 at 00522bc4
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526ac0
;
; Referenced Globals:
;   TerminatedCString s_allocateHwSample_failed_005927ce
;   undefined4 DAT_02dc1ed8
;   undefined4 DAT_02dc216c
;   undefined4 DAT_02dc2170
;   undefined4 DAT_02dc2174
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523910
        ;   Label: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
    PUSH ESI                            ; 00523911
    PUSH EDI                            ; 00523912
    PUSH EBP                            ; 00523913
    SUB ESP,0x4                         ; 00523914
    MOV EDX,dword ptr [ESP + 0x18]      ; 00523917
    PUSH EDX                            ; 0052391b
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20 ; 0052391c
        ;   XREF to: 00523b20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20()
    ADD ESP,0x4                         ; 00523921
    MOV ECX,dword ptr [ESP + 0x18]      ; 00523924
    PUSH ECX                            ; 00523928
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70 ; 00523929
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70()
    ADD ESP,0x4                         ; 0052392e
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 00523931
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
    TEST EAX,EAX                        ; 00523936
    JZ 0x00523a02                       ; 00523938
        ;   XREF to: 00523a02 (CONDITIONAL_JUMP)  ; LAB_00523a02
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052393e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00523942
    MOV EBP,dword ptr [ESP + 0x18]      ; 00523946
    MOV EDI,dword ptr [ESP + 0x18]      ; 0052394a
    MOV ECX,dword ptr [0x02dc8318]      ; 0052394e | DAT_02dc8318
    MOV EAX,dword ptr [EAX + 0x108]     ; 00523954
    MOV ESI,dword ptr [ESI + 0x10c]     ; 0052395a
    MOV EBP,dword ptr [EBP + 0x138]     ; 00523960
    MOV EDI,dword ptr [EDI + 0x104]     ; 00523966
    MOV dword ptr [ESP],EAX             ; 0052396c
    TEST ECX,ECX                        ; 0052396f
    JZ 0x005239c3                       ; 00523971
        ;   XREF to: 005239c3 (CONDITIONAL_JUMP)  ; LAB_005239c3
    PUSH EBP                            ; 00523973
        ;   Label: LAB_00523973
    PUSH ESI                            ; 00523974
    MOV EBX,dword ptr [ESP + 0x8]       ; 00523975
    PUSH EBX                            ; 00523979
    MOV EAX,[0x02dc8318]                ; 0052397a | DAT_02dc8318
    PUSH EDI                            ; 0052397f
    MOV EDX,dword ptr [EAX]             ; 00523980
    PUSH EAX                            ; 00523982
    CALL dword ptr [EDX + 0x2c]         ; 00523983
    ADD ESP,0x14                        ; 00523986
    TEST EAX,EAX                        ; 00523989
    JNZ 0x005239c5                      ; 0052398b
        ;   XREF to: 005239c5 (CONDITIONAL_JUMP)  ; LAB_005239c5
    MOV EAX,[0x02dc1ed8]                ; 0052398d | DAT_02dc1ed8
    XOR EBX,EBX                         ; 00523992
    INC EAX                             ; 00523994
        ;   Label: LAB_00523994
    CMP EAX,0x40                        ; 00523995
    JL 0x0052399c                       ; 00523998
        ;   XREF to: 0052399c (CONDITIONAL_JUMP)  ; LAB_0052399c
    XOR EAX,EAX                         ; 0052399a
    IMUL EDX,EAX,0x168                  ; 0052399c
        ;   Label: LAB_0052399c
    CMP dword ptr [EDX + 0x2dc2008],0x0 ; 005239a2 | DAT_02dc2170
    JZ 0x005239df                       ; 005239a9
        ;   XREF to: 005239df (CONDITIONAL_JUMP)  ; LAB_005239df
    INC EBX                             ; 005239ab
        ;   Label: LAB_005239ab
    CMP EBX,0x40                        ; 005239ac
    JL 0x00523994                       ; 005239af
        ;   XREF to: 00523994 (CONDITIONAL_JUMP)  ; LAB_00523994
    CMP EBX,0x40                        ; 005239b1
        ;   Label: LAB_005239b1
    JL 0x00523973                       ; 005239b4
        ;   XREF to: 00523973 (CONDITIONAL_JUMP)  ; LAB_00523973
    PUSH 0x5927ce                       ; 005239b6 | = "allocateHwSample - failed\n"
    CALL sound_sndmain.cpp_FUN_00529980 ; 005239bb
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 005239c0
    XOR EAX,EAX                         ; 005239c3
        ;   Label: LAB_005239c3
    MOV EDX,dword ptr [ESP + 0x18]      ; 005239c5
        ;   Label: LAB_005239c5
    MOV dword ptr [EDX + 0x130],EAX     ; 005239c9
    TEST EAX,EAX                        ; 005239cf
    JNZ 0x00523a49                      ; 005239d1
        ;   XREF to: 00523a49 (CONDITIONAL_JUMP)  ; LAB_00523a49
    ADD ESP,0x4                         ; 005239d7
        ;   Label: LAB_005239d7
    POP EBP                             ; 005239da
    POP EDI                             ; 005239db
    POP ESI                             ; 005239dc
    POP EBX                             ; 005239dd
    RET                                 ; 005239de
    CMP dword ptr [EDX + 0x2dc200c],0x0 ; 005239df | DAT_02dc2174
        ;   Label: LAB_005239df
    JZ 0x005239ab                       ; 005239e6
        ;   XREF to: 005239ab (CONDITIONAL_JUMP)  ; LAB_005239ab
    CMP dword ptr [EDX + 0x2dc2004],0x0 ; 005239e8 | DAT_02dc216c
    JNZ 0x005239ab                      ; 005239ef
        ;   XREF to: 005239ab (CONDITIONAL_JUMP)  ; LAB_005239ab
    ADD EDX,0x2dc1edc                   ; 005239f1
    PUSH EDX                            ; 005239f7
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 005239f8
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60()
    ADD ESP,0x4                         ; 005239fd
    JMP 0x005239b1                      ; 00523a00
        ;   XREF to: 005239b1 (UNCONDITIONAL_JUMP)  ; LAB_005239b1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00523a02
        ;   Label: LAB_00523a02
    PUSH EBX                            ; 00523a06
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00523a07
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    IMUL EAX,dword ptr [EBX + 0x138]    ; 00523a0c
    ADD ESP,0x4                         ; 00523a13
    PUSH EAX                            ; 00523a16
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0 ; 00523a17
        ;   XREF to: 00521ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0()
    ADD ESP,0x4                         ; 00523a1c
    PUSH EBX                            ; 00523a1f
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00523a20
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    IMUL EAX,dword ptr [EBX + 0x138]    ; 00523a25
    ADD ESP,0x4                         ; 00523a2c
    PUSH EAX                            ; 00523a2f
    MOV EDX,dword ptr [EBX + 0x120]     ; 00523a30
    PUSH EDX                            ; 00523a36
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00523a37
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 00523a3c
    TEST EAX,EAX                        ; 00523a3f
    JZ 0x005239d7                       ; 00523a41
        ;   XREF to: 005239d7 (CONDITIONAL_JUMP)  ; LAB_005239d7
    MOV dword ptr [EBX + 0x120],EAX     ; 00523a43
    MOV EAX,0x1                         ; 00523a49
        ;   Label: LAB_00523a49
    ADD ESP,0x4                         ; 00523a4e
    POP EBP                             ; 00523a51
    POP EDI                             ; 00523a52
    POP ESI                             ; 00523a53
    POP EBX                             ; 00523a54
    RET                                 ; 00523a55

