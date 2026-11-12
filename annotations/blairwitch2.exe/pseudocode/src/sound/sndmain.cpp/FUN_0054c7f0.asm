; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c7f0(int slot_index,char *filename)
;
; Parameters:
; int              Stack[0x4]:4   slot_index
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_005506b0 at 0055080c
;
; Referenced Globals:
;   undefined4 DAT_005e7ef2
;   undefined4 DAT_005e7ef6
;   TerminatedCString s_sound_005e7efb
;   TerminatedCString s_sound_sndmain_cpp_005e7f01
;   TerminatedCString s_Out_of_memory_005e7f16
;   TerminatedCString s_sound_005e7f25
;   undefined4 DAT_005fbc30
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02641920
;   undefined4 g_SfxSamples[1].taken
;   undefined4 g_SfxSamples[1].ref_count
;   undefined4 g_SfxSamples[1].is_user_sample
;   undefined4 g_SfxSamples[1].locked_length
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_operator_new_FUN_005b8be2
;   crt_string.c__stricmp_FUN_005b8130
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_00509c70
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50
;   sound_sndmain.cpp_FUN_0054b4a0
;   sound_sndmain.cpp_FUN_0054bac0
;   sound_sndmain.cpp_FUN_0054fd90
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c7f0
        ;   Label: sound_sndmain.cpp_FUN_0054c7f0
    PUSH ESI                            ; 0054c7f1
    PUSH EDI                            ; 0054c7f2
    PUSH EBP                            ; 0054c7f3
    SUB ESP,0x108                       ; 0054c7f4
    MOV EBX,dword ptr [0x02641920]      ; 0054c7fa | DAT_02641920
    MOV ESI,dword ptr [ESP + 0x120]     ; 0054c800
    XOR EDX,EDX                         ; 0054c807
    XOR EBP,EBP                         ; 0054c809
    INC EBX                             ; 0054c80b
        ;   Label: LAB_0054c80b
    CMP EBX,0x40                        ; 0054c80c
    JL 0x0054c813                       ; 0054c80f
        ;   XREF to: 0054c813 (CONDITIONAL_JUMP)  ; LAB_0054c813
    MOV EBX,EBP                         ; 0054c811
    IMUL EAX,EBX,0x1ac                  ; 0054c813
        ;   Label: LAB_0054c813
    MOV ECX,dword ptr [EAX + 0x2641a74] ; 0054c819 | g_SfxSamples[1].taken
    CMP EBP,ECX                         ; 0054c81f
    JZ 0x0054c856                       ; 0054c821
        ;   XREF to: 0054c856 (CONDITIONAL_JUMP)  ; LAB_0054c856
    INC EDX                             ; 0054c823
        ;   Label: LAB_0054c823
    CMP EDX,0x40                        ; 0054c824
    JL 0x0054c80b                       ; 0054c827
        ;   XREF to: 0054c80b (CONDITIONAL_JUMP)  ; LAB_0054c80b
    XOR EBP,EBP                         ; 0054c829
    MOV dword ptr [ESP + 0x104],EBP     ; 0054c82b
    MOV EBP,dword ptr [ESP + 0x104]     ; 0054c832
        ;   Label: LAB_0054c832
    MOV dword ptr [0x02641920],EBX      ; 0054c839 | DAT_02641920
    TEST EBP,EBP                        ; 0054c83f
    JNZ 0x0054c882                      ; 0054c841
        ;   XREF to: 0054c882 (CONDITIONAL_JUMP)  ; LAB_0054c882
    XOR EAX,EAX                         ; 0054c843
    MOV EBX,dword ptr [0x02641920]      ; 0054c845 | DAT_02641920
    ADD ESP,0x108                       ; 0054c84b
    POP EBP                             ; 0054c851
    POP EDI                             ; 0054c852
    POP ESI                             ; 0054c853
    POP EBX                             ; 0054c854
    RET                                 ; 0054c855
    MOV EDI,dword ptr [EAX + 0x2641a78] ; 0054c856 | g_SfxSamples[1].ref_count
        ;   Label: LAB_0054c856
    CMP ECX,EDI                         ; 0054c85c
    JNZ 0x0054c823                      ; 0054c85e
        ;   XREF to: 0054c823 (CONDITIONAL_JUMP)  ; LAB_0054c823
    MOV ECX,dword ptr [EAX + 0x2641a80] ; 0054c860 | g_SfxSamples[1].is_user_sample
    CMP EDI,ECX                         ; 0054c866
    JNZ 0x0054c823                      ; 0054c868
        ;   XREF to: 0054c823 (CONDITIONAL_JUMP)  ; LAB_0054c823
    CMP ECX,dword ptr [EAX + 0x2641acc] ; 0054c86a | g_SfxSamples[1].locked_length
    JNZ 0x0054c823                      ; 0054c870
        ;   XREF to: 0054c823 (CONDITIONAL_JUMP)  ; LAB_0054c823
    MOV EDX,0x2641924                   ; 0054c872
    ADD EDX,EAX                         ; 0054c877
    MOV dword ptr [ESP + 0x104],EDX     ; 0054c879
    JMP 0x0054c832                      ; 0054c880
        ;   XREF to: 0054c832 (UNCONDITIONAL_JUMP)  ; LAB_0054c832
    MOV EAX,ESP                         ; 0054c882
        ;   Label: LAB_0054c882
    PUSH EAX                            ; 0054c884
    PUSH 0x0                            ; 0054c885
    PUSH 0x0                            ; 0054c887
    PUSH 0x0                            ; 0054c889
    PUSH ESI                            ; 0054c88b
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0054c88c
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054c891
    PUSH 0x5e7ef2                       ; 0054c894 | DAT_005e7ef2
    LEA EAX,[ESP + 0x4]                 ; 0054c899
    PUSH EAX                            ; 0054c89d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c89e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c8a3
    TEST EAX,EAX                        ; 0054c8a6
    JNZ 0x0054ca28                      ; 0054c8a8
        ;   XREF to: 0054ca28 (CONDITIONAL_JUMP)  ; LAB_0054ca28
    PUSH ESI                            ; 0054c8ae
        ;   Label: LAB_0054c8ae
    PUSH 0x5e7efb                       ; 0054c8af | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0054c8b4
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054c8b9
    TEST EAX,EAX                        ; 0054c8bc
    JLE 0x0054cb48                      ; 0054c8be
        ;   XREF to: 0054cb48 (CONDITIONAL_JUMP)  ; LAB_0054cb48
    PUSH 0x8630                         ; 0054c8c4
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0054c8c9
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0054c8ce
    TEST EAX,EAX                        ; 0054c8d1
    JZ 0x0054c8de                       ; 0054c8d3
        ;   XREF to: 0054c8de (CONDITIONAL_JUMP)  ; LAB_0054c8de
    PUSH EAX                            ; 0054c8d5
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_00509c70 ; 0054c8d6
        ;   XREF to: 00509c70 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_00509c70(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0054c8db
    MOV dword ptr [EBP + 0x174],EAX     ; 0054c8de
        ;   Label: LAB_0054c8de
    TEST EAX,EAX                        ; 0054c8e4
    JNZ 0x0054c90a                      ; 0054c8e6
        ;   XREF to: 0054c90a (CONDITIONAL_JUMP)  ; LAB_0054c90a
    MOV EAX,0x5e7f01                    ; 0054c8e8 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x461                       ; 0054c8ed
    PUSH 0x5e7f16                       ; 0054c8f2 | = "Out of memory."
    MOV [0x01d046a0],EAX                ; 0054c8f7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054c8fc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c902
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054c907
    PUSH ESI                            ; 0054c90a
        ;   Label: LAB_0054c90a
    MOV ECX,dword ptr [EBP + 0x174]     ; 0054c90b
    PUSH ECX                            ; 0054c911
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0 ; 0054c912
        ;   XREF to: 00509cd0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0(CMP3Decoder * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054c917
    MOV EDI,EBP                         ; 0054c91a
    PUSH EDI                            ; 0054c91c
    MOV AL,byte ptr [ESI]               ; 0054c91d
        ;   Label: LAB_0054c91d
    MOV byte ptr [EDI],AL               ; 0054c91f
    CMP AL,0x0                          ; 0054c921
    JZ 0x0054c935                       ; 0054c923
        ;   XREF to: 0054c935 (CONDITIONAL_JUMP)  ; LAB_0054c935
    MOV AL,byte ptr [ESI + 0x1]         ; 0054c925
    ADD ESI,0x2                         ; 0054c928
    MOV byte ptr [EDI + 0x1],AL         ; 0054c92b
    ADD EDI,0x2                         ; 0054c92e
    CMP AL,0x0                          ; 0054c931
    JNZ 0x0054c91d                      ; 0054c933
        ;   XREF to: 0054c91d (CONDITIONAL_JUMP)  ; LAB_0054c91d
    POP EDI                             ; 0054c935
        ;   Label: LAB_0054c935
    MOV dword ptr [EBP + 0x100],0x1     ; 0054c936
    MOV EAX,dword ptr [EBP + 0x174]     ; 0054c940
    MOV dword ptr [EBP + 0x104],0x10    ; 0054c946
    MOV EAX,dword ptr [EAX + 0x104]     ; 0054c950
    MOV dword ptr [EBP + 0x108],EAX     ; 0054c956
    MOV EAX,dword ptr [EBP + 0x174]     ; 0054c95c
    MOV EAX,dword ptr [EAX + 0x100]     ; 0054c962
    MOV dword ptr [EBP + 0x110],0xffffffff ; 0054c968
    PUSH EBP                            ; 0054c972
    MOV dword ptr [EBP + 0x10c],EAX     ; 0054c973
    CALL sound_sndmain.cpp_FUN_0054bac0 ; 0054c979
        ;   XREF to: 0054bac0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054bac0()
    MOV dword ptr [EBP + 0x150],0x0     ; 0054c97e
    FILD dword ptr [EBP + 0x10c]        ; 0054c988
    MOV dword ptr [EBP + 0x154],0x0     ; 0054c98e
    FMUL float ptr [0x005fbc30]         ; 0054c998 | DAT_005fbc30
    MOV dword ptr [EBP + 0x158],0x0     ; 0054c99e
    ADD ESP,0x4                         ; 0054c9a8
    MOV dword ptr [EBP + 0x15c],0x0     ; 0054c9ab
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054c9b5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x164]       ; 0054c9ba
    MOV ESI,dword ptr [EBP + 0x164]     ; 0054c9c0
    MOV dword ptr [EBP + 0x16c],0x0     ; 0054c9c6
    PUSH ESI                            ; 0054c9d0
    MOV dword ptr [EBP + 0x170],0x0     ; 0054c9d1
    MOV EAX,dword ptr [ESP + 0x120]     ; 0054c9db
    PUSH EBP                            ; 0054c9e2
    MOV dword ptr [EBP + 0x160],EAX     ; 0054c9e3
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054c9e9
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054c9ee
    PUSH EBP                            ; 0054c9f1
    MOV dword ptr [EBP + 0x168],EAX     ; 0054c9f2
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840 ; 0054c9f8
        ;   XREF to: 0054d840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054c9fd
    TEST EAX,EAX                        ; 0054ca00
    JZ 0x0054cb48                       ; 0054ca02
        ;   XREF to: 0054cb48 (CONDITIONAL_JUMP)  ; LAB_0054cb48
    PUSH 0x0                            ; 0054ca08
        ;   Label: LAB_0054ca08
    PUSH 0x0                            ; 0054ca0a
    PUSH EBP                            ; 0054ca0c
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 ; 0054ca0d
        ;   XREF to: 0054dc50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 0054ca12
    MOV EAX,EBP                         ; 0054ca15
    MOV EBX,dword ptr [0x02641920]      ; 0054ca17 | DAT_02641920
    ADD ESP,0x108                       ; 0054ca1d
    POP EBP                             ; 0054ca23
    POP EDI                             ; 0054ca24
    POP ESI                             ; 0054ca25
    POP EBX                             ; 0054ca26
    RET                                 ; 0054ca27
    PUSH 0x5e7ef6                       ; 0054ca28 | DAT_005e7ef6
        ;   Label: LAB_0054ca28
    LEA EAX,[ESP + 0x4]                 ; 0054ca2d
    PUSH EAX                            ; 0054ca31
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054ca32
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054ca37
    TEST EAX,EAX                        ; 0054ca3a
    JZ 0x0054c8ae                       ; 0054ca3c
        ;   XREF to: 0054c8ae (CONDITIONAL_JUMP)  ; LAB_0054c8ae
    PUSH ESI                            ; 0054ca42
    PUSH 0x5e7f25                       ; 0054ca43 | = "sound"
    LEA EAX,[EBP + 0x17c]               ; 0054ca48
    PUSH EAX                            ; 0054ca4e
    MOV dword ptr [ESP + 0x10c],EAX     ; 0054ca4f
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 0054ca56
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0054ca5b
    TEST EAX,EAX                        ; 0054ca5e
    JZ 0x0054cb48                       ; 0054ca60
        ;   XREF to: 0054cb48 (CONDITIONAL_JUMP)  ; LAB_0054cb48
    MOV EDI,EBP                         ; 0054ca66
    MOV ECX,dword ptr [ESP + 0x100]     ; 0054ca68
    PUSH EDI                            ; 0054ca6f
    MOV AL,byte ptr [ESI]               ; 0054ca70
        ;   Label: LAB_0054ca70
    MOV byte ptr [EDI],AL               ; 0054ca72
    CMP AL,0x0                          ; 0054ca74
    JZ 0x0054ca88                       ; 0054ca76
        ;   XREF to: 0054ca88 (CONDITIONAL_JUMP)  ; LAB_0054ca88
    MOV AL,byte ptr [ESI + 0x1]         ; 0054ca78
    ADD ESI,0x2                         ; 0054ca7b
    MOV byte ptr [EDI + 0x1],AL         ; 0054ca7e
    ADD EDI,0x2                         ; 0054ca81
    CMP AL,0x0                          ; 0054ca84
    JNZ 0x0054ca70                      ; 0054ca86
        ;   XREF to: 0054ca70 (CONDITIONAL_JUMP)  ; LAB_0054ca70
    POP EDI                             ; 0054ca88
        ;   Label: LAB_0054ca88
    PUSH ECX                            ; 0054ca89
    CALL support_trstream.cpp_CInStreamFile_tell_FUN_0057d110 ; 0054ca8a
        ;   XREF to: 0057d110 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_tell_FUN_0057d110(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0054ca8f
    PUSH EBP                            ; 0054ca92
    MOV dword ptr [EBP + 0x178],EAX     ; 0054ca93
    LEA EAX,[EBP + 0x178]               ; 0054ca99
    PUSH EAX                            ; 0054ca9f
    MOV EDI,dword ptr [ESP + 0x108]     ; 0054caa0
    PUSH EDI                            ; 0054caa7
    CALL sound_sndmain.cpp_FUN_0054b4a0 ; 0054caa8
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054b4a0()
    ADD ESP,0xc                         ; 0054caad
    TEST EAX,EAX                        ; 0054cab0
    JZ 0x0054cb48                       ; 0054cab2
        ;   XREF to: 0054cb48 (CONDITIONAL_JUMP)  ; LAB_0054cb48
    PUSH EBP                            ; 0054cab8
    CALL sound_sndmain.cpp_FUN_0054bac0 ; 0054cab9
        ;   XREF to: 0054bac0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054bac0()
    MOV dword ptr [EBP + 0x150],0x0     ; 0054cabe
    FILD dword ptr [EBP + 0x10c]        ; 0054cac8
    MOV dword ptr [EBP + 0x154],0x0     ; 0054cace
    FMUL float ptr [0x005fbc30]         ; 0054cad8 | DAT_005fbc30
    MOV dword ptr [EBP + 0x158],0x0     ; 0054cade
    ADD ESP,0x4                         ; 0054cae8
    MOV dword ptr [EBP + 0x15c],0x0     ; 0054caeb
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054caf5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x164]       ; 0054cafa
    MOV EDX,dword ptr [EBP + 0x164]     ; 0054cb00
    MOV dword ptr [EBP + 0x16c],0x0     ; 0054cb06
    PUSH EDX                            ; 0054cb10
    MOV dword ptr [EBP + 0x170],0x0     ; 0054cb11
    MOV EAX,dword ptr [ESP + 0x120]     ; 0054cb1b
    PUSH EBP                            ; 0054cb22
    MOV dword ptr [EBP + 0x160],EAX     ; 0054cb23
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054cb29
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054cb2e
    PUSH EBP                            ; 0054cb31
    MOV dword ptr [EBP + 0x168],EAX     ; 0054cb32
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840 ; 0054cb38
        ;   XREF to: 0054d840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054cb3d
    TEST EAX,EAX                        ; 0054cb40
    JNZ 0x0054ca08                      ; 0054cb42
        ;   XREF to: 0054ca08 (CONDITIONAL_JUMP)  ; LAB_0054ca08
    PUSH EBP                            ; 0054cb48
        ;   Label: LAB_0054cb48
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054cb49
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054cb4e
    XOR EAX,EAX                         ; 0054cb51
    MOV EBX,dword ptr [0x02641920]      ; 0054cb53 | DAT_02641920
    ADD ESP,0x108                       ; 0054cb59
    POP EBP                             ; 0054cb5f
    POP EDI                             ; 0054cb60
    POP ESI                             ; 0054cb61
    POP EBX                             ; 0054cb62
    RET                                 ; 0054cb63

