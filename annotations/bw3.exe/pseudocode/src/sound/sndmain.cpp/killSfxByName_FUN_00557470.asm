; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00557470(char *sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; XREF[1]:
;   sound_sndmain.cpp_freeSampleByName_FUN_005574e0 at 00557534
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557470
        ;   Label: sound_sndmain.cpp_killSfxByName_FUN_00557470
    PUSH ESI                            ; 00557471
    MOV ESI,dword ptr [ESP + 0xc]       ; 00557472
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557476
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    XOR EBX,EBX                         ; 0055747b
    MOV EAX,dword ptr [EBX + 0x2ce7284] ; 0055747d
        ;   Label: LAB_0055747d
    TEST EAX,EAX                        ; 00557483
    JNZ 0x0055749d                      ; 00557485
        ;   XREF to: 0055749d (CONDITIONAL_JUMP)  ; LAB_0055749d
    ADD EBX,0x11c                       ; 00557487
        ;   Label: LAB_00557487
    CMP EBX,0x4700                      ; 0055748d
    JNZ 0x0055747d                      ; 00557493
        ;   XREF to: 0055747d (CONDITIONAL_JUMP)  ; LAB_0055747d
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 00557495
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    POP ESI                             ; 0055749a
    POP EBX                             ; 0055749b
    RET                                 ; 0055749c
    PUSH ESI                            ; 0055749d
        ;   Label: LAB_0055749d
    PUSH EAX                            ; 0055749e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0055749f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005574a4
    TEST EAX,EAX                        ; 005574a7
    JNZ 0x00557487                      ; 005574a9
        ;   XREF to: 00557487 (CONDITIONAL_JUMP)  ; LAB_00557487
    MOV EAX,0x2ce721c                   ; 005574ab
    ADD EAX,EBX                         ; 005574b0
    PUSH EAX                            ; 005574b2
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 005574b3
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005574b8
    JMP 0x00557487                      ; 005574bb
        ;   XREF to: 00557487 (UNCONDITIONAL_JUMP)  ; LAB_00557487

