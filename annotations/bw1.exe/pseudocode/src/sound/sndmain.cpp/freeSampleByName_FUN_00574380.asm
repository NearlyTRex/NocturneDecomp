; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00574380(char *sample_name,int kill_active_slots)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; int              Stack[0x8]:4   kill_active_slots
;
; XREF[1]:
;   sound_sndmain.cpp_createUserSample_FUN_00574100 at 00574116
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_killSfxByName_FUN_00574310
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574380
        ;   Label: sound_sndmain.cpp_freeSampleByName_FUN_00574380
    PUSH ESI                            ; 00574381
    PUSH EDI                            ; 00574382
    MOV EDI,dword ptr [ESP + 0x10]      ; 00574383
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00574387
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    CMP dword ptr [ESP + 0x14],0x0      ; 0057438c
    JNZ 0x005743d3                      ; 00574391
        ;   XREF to: 005743d3 (CONDITIONAL_JUMP)  ; LAB_005743d3
    XOR EBX,EBX                         ; 00574393
        ;   Label: LAB_00574393
    CMP dword ptr [EBX + 0x2c79148],0x0 ; 00574395
        ;   Label: LAB_00574395
    JNZ 0x005743bc                      ; 0057439c
        ;   XREF to: 005743bc (CONDITIONAL_JUMP)  ; LAB_005743bc
    MOV ESI,0x2c78ff4                   ; 0057439e
    PUSH EDI                            ; 005743a3
    ADD ESI,EBX                         ; 005743a4
    PUSH ESI                            ; 005743a6
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005743a7
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005743ac
    TEST EAX,EAX                        ; 005743af
    JNZ 0x005743bc                      ; 005743b1
        ;   XREF to: 005743bc (CONDITIONAL_JUMP)  ; LAB_005743bc
    PUSH ESI                            ; 005743b3
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 005743b4
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005743b9
    ADD EBX,0x1b0                       ; 005743bc
        ;   Label: LAB_005743bc
    CMP EBX,0x6c00                      ; 005743c2
    JNZ 0x00574395                      ; 005743c8
        ;   XREF to: 00574395 (CONDITIONAL_JUMP)  ; LAB_00574395
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 005743ca
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    POP EDI                             ; 005743cf
    POP ESI                             ; 005743d0
    POP EBX                             ; 005743d1
    RET                                 ; 005743d2
    PUSH EDI                            ; 005743d3
        ;   Label: LAB_005743d3
    CALL sound_sndmain.cpp_killSfxByName_FUN_00574310 ; 005743d4
        ;   XREF to: 00574310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killSfxByName_FUN_00574310(char * sample_name)
    ADD ESP,0x4                         ; 005743d9
    JMP 0x00574393                      ; 005743dc
        ;   XREF to: 00574393 (UNCONDITIONAL_JUMP)  ; LAB_00574393

