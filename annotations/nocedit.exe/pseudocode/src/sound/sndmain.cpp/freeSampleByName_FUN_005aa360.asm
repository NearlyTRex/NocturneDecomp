; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_freeSampleByName_FUN_005aa360(char * sample_name, int kill_active_slots)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; int              Stack[0x8]:4   kill_active_slots
;
; Referenced Globals:
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f62980
;   undefined4 DAT_03f629ac
;   undefined4 DAT_03f62b00
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_killSfxByName_FUN_005aa2f0
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa360
        ;   Label: sound_sndmain.cpp_freeSampleByName_FUN_005aa360
    PUSH ESI                            ; 005aa361
    PUSH EDI                            ; 005aa362
    MOV EDI,dword ptr [ESP + 0x10]      ; 005aa363
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005aa367 | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    CMP dword ptr [ESP + 0x14],0x0      ; 005aa36c
    JNZ 0x005aa3b3                      ; 005aa371 | LAB_005aa3b3
        ;   XREF to: 005aa3b3 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005aa373
        ;   Label: LAB_005aa373
    CMP dword ptr [EBX + 0x3f62980],0x0 ; 005aa375 | DAT_03f62980
        ;   Label: LAB_005aa375
    JNZ 0x005aa39c                      ; 005aa37c | LAB_005aa39c
        ;   XREF to: 005aa39c (CONDITIONAL_JUMP)
    MOV ESI,0x3f6282c                   ; 005aa37e | CSfxSample[64] g_SfxSamples
    PUSH EDI                            ; 005aa383
    ADD ESI,EBX                         ; 005aa384
    PUSH ESI                            ; 005aa386 | CSfxSample[64] g_SfxSamples
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005aa387 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005aa38c
    TEST EAX,EAX                        ; 005aa38f
    JNZ 0x005aa39c                      ; 005aa391 | LAB_005aa39c
        ;   XREF to: 005aa39c (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005aa393 | CSfxSample[64] g_SfxSamples
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005aa394 | void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005aa399
    ADD EBX,0x180                       ; 005aa39c
        ;   Label: LAB_005aa39c
    CMP EBX,0x6000                      ; 005aa3a2
    JNZ 0x005aa375                      ; 005aa3a8 | LAB_005aa375
        ;   XREF to: 005aa375 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aa3aa | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    POP EDI                             ; 005aa3af
    POP ESI                             ; 005aa3b0
    POP EBX                             ; 005aa3b1
    RET                                 ; 005aa3b2
    PUSH EDI                            ; 005aa3b3
        ;   Label: LAB_005aa3b3
    CALL sound_sndmain.cpp_killSfxByName_FUN_005aa2f0 ; 005aa3b4 | void sound_sndmain.cpp_killSfxByName_FUN_005aa2f0(char * sample_name)
        ;   XREF to: 005aa2f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005aa3b9
    JMP 0x005aa373                      ; 005aa3bc | LAB_005aa373
        ;   XREF to: 005aa373 (UNCONDITIONAL_JUMP)

