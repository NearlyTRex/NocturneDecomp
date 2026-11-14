; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_unlockSample_FUN_00557420(char *sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557420
        ;   Label: sound_sndmain.cpp_unlockSample_FUN_00557420
    PUSH ESI                            ; 00557421
    PUSH EDI                            ; 00557422
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557423
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    MOV EDI,dword ptr [ESP + 0x10]      ; 00557428
    MOV EBX,0x2cebc24                   ; 0055742c
    XOR ESI,ESI                         ; 00557431
    PUSH EDI                            ; 00557433
        ;   Label: LAB_00557433
    PUSH EBX                            ; 00557434
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00557435
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055743a
    TEST EAX,EAX                        ; 0055743d
    JNZ 0x0055744e                      ; 0055743f
        ;   XREF to: 0055744e (CONDITIONAL_JUMP)  ; LAB_0055744e
    TEST EBX,EBX                        ; 00557441
    JNZ 0x0055745c                      ; 00557443
        ;   XREF to: 0055745c (CONDITIONAL_JUMP)  ; LAB_0055745c
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 00557445
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
        ;   Label: LAB_00557445
    POP EDI                             ; 0055744a
    POP ESI                             ; 0055744b
    POP EBX                             ; 0055744c
    RET                                 ; 0055744d
    INC ESI                             ; 0055744e
        ;   Label: LAB_0055744e
    ADD EBX,0x1b0                       ; 0055744f
    CMP ESI,0x40                        ; 00557455
    JL 0x00557433                       ; 00557458
        ;   XREF to: 00557433 (CONDITIONAL_JUMP)  ; LAB_00557433
    JMP 0x00557445                      ; 0055745a
        ;   XREF to: 00557445 (UNCONDITIONAL_JUMP)  ; LAB_00557445
    PUSH EBX                            ; 0055745c
        ;   Label: LAB_0055745c
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760 ; 0055745d
        ;   XREF to: 00553760 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00557462
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 00557465
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    POP EDI                             ; 0055746a
    POP ESI                             ; 0055746b
    POP EBX                             ; 0055746c
    RET                                 ; 0055746d

