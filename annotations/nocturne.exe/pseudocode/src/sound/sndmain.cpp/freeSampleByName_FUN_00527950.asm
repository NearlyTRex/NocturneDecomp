; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00527950(char *sample_name,int kill_active_slots)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; int              Stack[0x8]:4   kill_active_slots
;
; Referenced Globals:
;   undefined4 g_CSfxSample_ARRAY_02dc1edc[1].ref_count
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_killSfxByName_FUN_005278e0
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527950
        ;   Label: sound_sndmain.cpp_freeSampleByName_FUN_00527950
    PUSH ESI                            ; 00527951
    PUSH EDI                            ; 00527952
    MOV EDI,dword ptr [ESP + 0x10]      ; 00527953
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00527957
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    CMP dword ptr [ESP + 0x14],0x0      ; 0052795c
    JNZ 0x005279a3                      ; 00527961
        ;   XREF to: 005279a3 (CONDITIONAL_JUMP)  ; LAB_005279a3
    XOR EBX,EBX                         ; 00527963
        ;   Label: LAB_00527963
    CMP dword ptr [EBX + 0x2dc2008],0x0 ; 00527965 | g_CSfxSample_ARRAY_02dc1edc[1].ref_count
        ;   Label: LAB_00527965
    JNZ 0x0052798c                      ; 0052796c
        ;   XREF to: 0052798c (CONDITIONAL_JUMP)  ; LAB_0052798c
    MOV ESI,0x2dc1edc                   ; 0052796e
    PUSH EDI                            ; 00527973
    ADD ESI,EBX                         ; 00527974
    PUSH ESI                            ; 00527976
    CALL crt_string.c__stricmp_FUN_00564520 ; 00527977
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052797c
    TEST EAX,EAX                        ; 0052797f
    JNZ 0x0052798c                      ; 00527981
        ;   XREF to: 0052798c (CONDITIONAL_JUMP)  ; LAB_0052798c
    PUSH ESI                            ; 00527983
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00527984
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00527989
    ADD EBX,0x168                       ; 0052798c
        ;   Label: LAB_0052798c
    CMP EBX,0x5a00                      ; 00527992
    JNZ 0x00527965                      ; 00527998
        ;   XREF to: 00527965 (CONDITIONAL_JUMP)  ; LAB_00527965
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052799a
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    POP EDI                             ; 0052799f
    POP ESI                             ; 005279a0
    POP EBX                             ; 005279a1
    RET                                 ; 005279a2
    PUSH EDI                            ; 005279a3
        ;   Label: LAB_005279a3
    CALL sound_sndmain.cpp_killSfxByName_FUN_005278e0 ; 005279a4
        ;   XREF to: 005278e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killSfxByName_FUN_005278e0(char * sample_name)
    ADD ESP,0x4                         ; 005279a9
    JMP 0x00527963                      ; 005279ac
        ;   XREF to: 00527963 (UNCONDITIONAL_JUMP)  ; LAB_00527963

