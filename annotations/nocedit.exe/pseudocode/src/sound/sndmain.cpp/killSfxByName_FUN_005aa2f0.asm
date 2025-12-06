; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_killSfxByName_FUN_005aa2f0(char * sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; XREF[1]:
;   sound_sndmain.cpp_freeSampleByName_FUN_005aa360 at 005aa3b4
;
; Referenced Globals:
;   CSfxSlot[64] g_SfxSlots
;   undefined4 DAT_03f5db1c
;   undefined4 g_SfxSlots[1].status
;   undefined4 DAT_03f5dc44
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa2f0
        ;   Label: sound_sndmain.cpp_killSfxByName_FUN_005aa2f0
    PUSH ESI                            ; 005aa2f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005aa2f2
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005aa2f6 | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 005aa2fb
    MOV EAX,dword ptr [EBX + 0x3f5db1c] ; 005aa2fd | DAT_03f5db1c
        ;   Label: LAB_005aa2fd
    TEST EAX,EAX                        ; 005aa303
    JNZ 0x005aa31d                      ; 005aa305 | LAB_005aa31d
        ;   XREF to: 005aa31d (CONDITIONAL_JUMP)
    ADD EBX,0x128                       ; 005aa307
        ;   Label: LAB_005aa307
    CMP EBX,0x4a00                      ; 005aa30d
    JNZ 0x005aa2fd                      ; 005aa313 | LAB_005aa2fd
        ;   XREF to: 005aa2fd (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aa315 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    POP ESI                             ; 005aa31a
    POP EBX                             ; 005aa31b
    RET                                 ; 005aa31c
    PUSH ESI                            ; 005aa31d
        ;   Label: LAB_005aa31d
    PUSH EAX                            ; 005aa31e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005aa31f | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005aa324
    TEST EAX,EAX                        ; 005aa327
    JNZ 0x005aa307                      ; 005aa329 | LAB_005aa307
        ;   XREF to: 005aa307 (CONDITIONAL_JUMP)
    MOV EAX,0x3f5daa4                   ; 005aa32b | CSfxSlot[64] g_SfxSlots
    ADD EAX,EBX                         ; 005aa330
    PUSH EAX                            ; 005aa332 | g_SfxSlots[1].status
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005aa333 | void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005aa338
    JMP 0x005aa307                      ; 005aa33b | LAB_005aa307
        ;   XREF to: 005aa307 (UNCONDITIONAL_JUMP)

