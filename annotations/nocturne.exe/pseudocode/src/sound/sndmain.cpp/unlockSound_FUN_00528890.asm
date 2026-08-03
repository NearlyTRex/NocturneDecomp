; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void)
;
;
; XREF[32]:
;   core_tommygun.cpp_CTommyGun_process_FUN_005464a0 at 005466e4
;   sound_sndmain.cpp_FUN_00526dd0 at 00526dff
;   sound_sndmain.cpp_FUN_00526f00 at 00526f4f
;   sound_sndmain.cpp_FUN_00526f60 at 00526fe1
;   sound_sndmain.cpp_FUN_00527060 at 005270b7
;   sound_sndmain.cpp_FUN_00527190 at 005271e5
;   sound_sndmain.cpp_FUN_00527200 at 0052721e
;   sound_sndmain.cpp_FUN_00527570 at 00527596
;   sound_sndmain.cpp_FUN_00527950 at 0052799a
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410 at 0052747d
;   ... and 22 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593979
;   TerminatedCString s_unlockSound_sound_was_no_0059398e
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_02dc84b8
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   wincore_winrun.cpp_releaseMutex_FUN_00559c30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00528890
        ;   Label: sound_sndmain.cpp_unlockSound_FUN_00528890
    PUSH EDI                            ; 00528891
    CMP dword ptr [0x02dc84bc],0x1      ; 00528892 | DAT_02dc84bc
    JL 0x005288ba                       ; 00528899
        ;   XREF to: 005288ba (CONDITIONAL_JUMP)  ; LAB_005288ba
    MOV EDI,dword ptr [0x02dc84bc]      ; 0052889b | DAT_02dc84bc
        ;   Label: LAB_0052889b
    MOV ESI,dword ptr [0x02dc84b8]      ; 005288a1 | DAT_02dc84b8
    DEC EDI                             ; 005288a7
    PUSH ESI                            ; 005288a8
    MOV dword ptr [0x02dc84bc],EDI      ; 005288a9 | DAT_02dc84bc
    CALL wincore_winrun.cpp_releaseMutex_FUN_00559c30 ; 005288af
        ;   XREF to: 00559c30 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00559c30(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 005288b4
    POP EDI                             ; 005288b7
    POP ESI                             ; 005288b8
    RET                                 ; 005288b9
    PUSH EBX                            ; 005288ba
        ;   Label: LAB_005288ba
    MOV ECX,0x593979                    ; 005288bb | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x130d                      ; 005288c0
    PUSH 0x59398e                       ; 005288c5 | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 005288ca | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005288d0 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005288d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005288db
    POP EBX                             ; 005288de
    JMP 0x0052889b                      ; 005288df
        ;   XREF to: 0052889b (UNCONDITIONAL_JUMP)  ; LAB_0052889b

