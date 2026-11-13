; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00551950(char *sample_name,int kill_active_slots)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; int              Stack[0x8]:4   kill_active_slots
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_005516d0 at 005516e6
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_killSfxByName_FUN_005518e0
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551950
        ;   Label: sound_sndmain.cpp_freeSampleByName_FUN_00551950
    PUSH ESI                            ; 00551951
    PUSH EDI                            ; 00551952
    MOV EDI,dword ptr [ESP + 0x10]      ; 00551953
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551957
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    CMP dword ptr [ESP + 0x14],0x0      ; 0055195c
    JNZ 0x005519a3                      ; 00551961
        ;   XREF to: 005519a3 (CONDITIONAL_JUMP)  ; LAB_005519a3
    XOR EBX,EBX                         ; 00551963
        ;   Label: LAB_00551963
    CMP dword ptr [EBX + 0x2641a78],0x0 ; 00551965
        ;   Label: LAB_00551965
    JNZ 0x0055198c                      ; 0055196c
        ;   XREF to: 0055198c (CONDITIONAL_JUMP)  ; LAB_0055198c
    MOV ESI,0x2641924                   ; 0055196e
    PUSH EDI                            ; 00551973
    ADD ESI,EBX                         ; 00551974
    PUSH ESI                            ; 00551976
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00551977
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055197c
    TEST EAX,EAX                        ; 0055197f
    JNZ 0x0055198c                      ; 00551981
        ;   XREF to: 0055198c (CONDITIONAL_JUMP)  ; LAB_0055198c
    PUSH ESI                            ; 00551983
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 00551984
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00551989
    ADD EBX,0x1ac                       ; 0055198c
        ;   Label: LAB_0055198c
    CMP EBX,0x6b00                      ; 00551992
    JNZ 0x00551965                      ; 00551998
        ;   XREF to: 00551965 (CONDITIONAL_JUMP)  ; LAB_00551965
    CALL sound_sndmain.cpp_FUN_00551440 ; 0055199a
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    POP EDI                             ; 0055199f
    POP ESI                             ; 005519a0
    POP EBX                             ; 005519a1
    RET                                 ; 005519a2
    PUSH EDI                            ; 005519a3
        ;   Label: LAB_005519a3
    CALL sound_sndmain.cpp_killSfxByName_FUN_005518e0 ; 005519a4
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killSfxByName_FUN_005518e0(char * sample_name)
    ADD ESP,0x4                         ; 005519a9
    JMP 0x00551963                      ; 005519ac
        ;   XREF to: 00551963 (UNCONDITIONAL_JUMP)  ; LAB_00551963

