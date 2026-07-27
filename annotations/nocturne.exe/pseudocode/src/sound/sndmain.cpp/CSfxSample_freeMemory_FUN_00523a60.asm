; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(undefined1 *param_1)
;
;
; XREF[12]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 at 005239f8
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 at 00524108
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 at 00525688
;   sound_sndmain.cpp_FUN_00522480 at 005224f9
;   sound_sndmain.cpp_FUN_005229f0 at 00522cec
;   sound_sndmain.cpp_FUN_00522e00 at 00522e89
;   sound_sndmain.cpp_FUN_005238f0 at 005238f6
;   sound_sndmain.cpp_FUN_00527950 at 00527984
;   sound_sndmain.cpp_closeSoundDevice_FUN_005285b0 at 005285c7
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0 at 00521d54
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592956
;   TerminatedCString s_SfxSample_freeMemory_fre_0059296b
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_unknown.c_FUN_00564494
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523a60
        ;   Label: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
    PUSH EDI                            ; 00523a61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00523a62
    CMP dword ptr [EBX + 0x12c],0x0     ; 00523a66
    JNZ 0x00523ae0                      ; 00523a6d
        ;   XREF to: 00523ae0 (CONDITIONAL_JUMP)  ; LAB_00523ae0
    PUSH EBX                            ; 00523a6f
        ;   Label: LAB_00523a6f
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0 ; 00523a70
        ;   XREF to: 00523cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0()
    ADD ESP,0x4                         ; 00523a75
    PUSH EBX                            ; 00523a78
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70 ; 00523a79
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70()
    ADD ESP,0x4                         ; 00523a7e
    PUSH EBX                            ; 00523a81
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20 ; 00523a82
        ;   XREF to: 00523b20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20()
    MOV EAX,dword ptr [EBX + 0x144]     ; 00523a87
    ADD ESP,0x4                         ; 00523a8d
    TEST EAX,EAX                        ; 00523a90
    JZ 0x00523aa8                       ; 00523a92
        ;   XREF to: 00523aa8 (CONDITIONAL_JUMP)  ; LAB_00523aa8
    PUSH 0x0                            ; 00523a94
    PUSH EAX                            ; 00523a96
    CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0 ; 00523a97
        ;   XREF to: 004e7dd0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0()
    ADD ESP,0x8                         ; 00523a9c
    PUSH EAX                            ; 00523a9f
    CALL crt_unknown.c_FUN_00564494     ; 00523aa0
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00523aa5
    MOV EDI,dword ptr [EBX + 0x14c]     ; 00523aa8
        ;   Label: LAB_00523aa8
    MOV dword ptr [EBX + 0x144],0x0     ; 00523aae
    TEST EDI,EDI                        ; 00523ab8
    JNZ 0x00523b0a                      ; 00523aba
        ;   XREF to: 00523b0a (CONDITIONAL_JUMP)  ; LAB_00523b0a
    MOV dword ptr [EBX + 0x128],0x0     ; 00523abc
        ;   Label: LAB_00523abc
    MOV dword ptr [EBX + 0x138],0x0     ; 00523ac6
    MOV dword ptr [EBX + 0x134],0xffffffff ; 00523ad0
    MOV byte ptr [EBX],0x0              ; 00523ada
    POP EDI                             ; 00523add
    POP EBX                             ; 00523ade
    RET                                 ; 00523adf
    PUSH ESI                            ; 00523ae0
        ;   Label: LAB_00523ae0
    MOV ECX,0x592956                    ; 00523ae1 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x70a                       ; 00523ae6
    PUSH 0x59296b                       ; 00523aeb | = "SfxSample::freeMemory - freeing sampl..."
    MOV dword ptr [0x01cc4800],ECX      ; 00523af0 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00523af6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00523afc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00523b01
    POP ESI                             ; 00523b04
    JMP 0x00523a6f                      ; 00523b05
        ;   XREF to: 00523a6f (UNCONDITIONAL_JUMP)  ; LAB_00523a6f
    PUSH EDI                            ; 00523b0a
        ;   Label: LAB_00523b0a
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00523b0b
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00523b10
    MOV dword ptr [EBX + 0x14c],0x0     ; 00523b13
    JMP 0x00523abc                      ; 00523b1d
        ;   XREF to: 00523abc (UNCONDITIONAL_JUMP)  ; LAB_00523abc

