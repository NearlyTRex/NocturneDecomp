; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0 at 0056ffcb
;   sound_sndmain.cpp_CSfxSample_dtor_FUN_0056fe80 at 0056fe86
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 at 00571e88
;   sound_sndmain.cpp_FUN_0056dfd0 at 0056e07a
;   sound_sndmain.cpp_FUN_0056e830 at 0056e8a7
;   sound_sndmain.cpp_FUN_00570460 at 00570721
;   sound_sndmain.cpp_FUN_005740fe at 0057420f
;   sound_sndmain.cpp_allocateHwSample_FUN_0056f360 at 0056f3eb
;   sound_sndmain.cpp_closeSoundDevice_FUN_00575670 at 00575687
;   sound_sndmain.cpp_freeAllSamples_FUN_005746a0 at 005746b8
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f32d4
;   TerminatedCString s_SfxSample_freeMemory_fre_005f32e9
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0344
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_0052ae80
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005700e0
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260
;   unkaddr_0059f520.cpp_FUN_005a0dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570020
        ;   Label: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570021
    CMP dword ptr [EBX + 0x154],0x0     ; 00570025
    JZ 0x00570053                       ; 0057002c
        ;   XREF to: 00570053 (CONDITIONAL_JUMP)  ; LAB_00570053
    PUSH ESI                            ; 0057002e
    MOV ECX,0x5f32d4                    ; 0057002f | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x858                       ; 00570034
    PUSH 0x5f32e9                       ; 00570039 | = "SfxSample::freeMemory - freeing sampl..."
    MOV dword ptr [0x01d1d400],ECX      ; 0057003e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00570044 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057004a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0057004f
    POP ESI                             ; 00570052
    PUSH EBX                            ; 00570053
        ;   Label: LAB_00570053
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260 ; 00570054
        ;   XREF to: 00570260 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00570059
    PUSH EBX                            ; 0057005c
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130 ; 0057005d
        ;   XREF to: 00570130 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00570062
    PUSH EBX                            ; 00570065
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005700e0 ; 00570066
        ;   XREF to: 005700e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005700e0(CSfxSample * this_ptr)
    MOV EAX,dword ptr [EBX + 0x174]     ; 0057006b
    ADD ESP,0x4                         ; 00570071
    TEST EAX,EAX                        ; 00570074
    JNZ 0x005700c8                      ; 00570076
        ;   XREF to: 005700c8 (CONDITIONAL_JUMP)  ; LAB_005700c8
    LEA EAX,[EBX + 0x17c]               ; 00570078
        ;   Label: LAB_00570078
    PUSH EAX                            ; 0057007e
    MOV dword ptr [EBX + 0x174],0x0     ; 0057007f
    CALL unkaddr_0059f520.cpp_FUN_005a0dc0 ; 00570089
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0dc0()
    MOV byte ptr [EBX],0x0              ; 0057008e
    MOV dword ptr [EBX + 0x150],0x0     ; 00570091
    MOV dword ptr [EBX + 0x15c],0x0     ; 0057009b
    MOV dword ptr [EBX + 0x164],0x0     ; 005700a5
    MOV dword ptr [EBX + 0x168],0x0     ; 005700af
    ADD ESP,0x4                         ; 005700b9
    MOV dword ptr [EBX + 0x160],0xffffffff ; 005700bc
    POP EBX                             ; 005700c6
    RET                                 ; 005700c7
    PUSH 0x0                            ; 005700c8
        ;   Label: LAB_005700c8
    PUSH EAX                            ; 005700ca
    CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_0052ae80 ; 005700cb
        ;   XREF to: 0052ae80 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_0052ae80(CMP3Decoder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005700d0
    PUSH EAX                            ; 005700d3
    CALL crt_unknown.c_FUN_005c0344     ; 005700d4
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005700d9
    JMP 0x00570078                      ; 005700dc
        ;   XREF to: 00570078 (UNCONDITIONAL_JUMP)  ; LAB_00570078

