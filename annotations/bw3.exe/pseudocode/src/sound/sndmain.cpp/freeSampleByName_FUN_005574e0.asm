; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005574e0(char *sample_name,int kill_active_slots)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; int              Stack[0x8]:4   kill_active_slots
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_0055725e at 00557276
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_killSfxByName_FUN_00557470
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005574e0
        ;   Label: sound_sndmain.cpp_freeSampleByName_FUN_005574e0
    PUSH ESI                            ; 005574e1
    PUSH EDI                            ; 005574e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005574e3
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 005574e7
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    CMP dword ptr [ESP + 0x14],0x0      ; 005574ec
    JNZ 0x00557533                      ; 005574f1
        ;   XREF to: 00557533 (CONDITIONAL_JUMP)  ; LAB_00557533
    XOR EBX,EBX                         ; 005574f3
        ;   Label: LAB_005574f3
    CMP dword ptr [EBX + 0x2cebd78],0x0 ; 005574f5
        ;   Label: LAB_005574f5
    JNZ 0x0055751c                      ; 005574fc
        ;   XREF to: 0055751c (CONDITIONAL_JUMP)  ; LAB_0055751c
    MOV ESI,0x2cebc24                   ; 005574fe
    PUSH EDI                            ; 00557503
    ADD ESI,EBX                         ; 00557504
    PUSH ESI                            ; 00557506
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00557507
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055750c
    TEST EAX,EAX                        ; 0055750f
    JNZ 0x0055751c                      ; 00557511
        ;   XREF to: 0055751c (CONDITIONAL_JUMP)  ; LAB_0055751c
    PUSH ESI                            ; 00557513
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 00557514
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00557519
    ADD EBX,0x1b0                       ; 0055751c
        ;   Label: LAB_0055751c
    CMP EBX,0x6c00                      ; 00557522
    JNZ 0x005574f5                      ; 00557528
        ;   XREF to: 005574f5 (CONDITIONAL_JUMP)  ; LAB_005574f5
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 0055752a
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    POP EDI                             ; 0055752f
    POP ESI                             ; 00557530
    POP EBX                             ; 00557531
    RET                                 ; 00557532
    PUSH EDI                            ; 00557533
        ;   Label: LAB_00557533
    CALL sound_sndmain.cpp_killSfxByName_FUN_00557470 ; 00557534
        ;   XREF to: 00557470 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killSfxByName_FUN_00557470(char * sample_name)
    ADD ESP,0x4                         ; 00557539
    JMP 0x005574f3                      ; 0055753c
        ;   XREF to: 005574f3 (UNCONDITIONAL_JUMP)  ; LAB_005574f3

