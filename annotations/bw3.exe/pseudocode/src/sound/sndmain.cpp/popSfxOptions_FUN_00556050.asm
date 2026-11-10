; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)
;
;
; XREF[19]:
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a212
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004180c0
;   core_boxactor.cpp_CBoxActor_process_FUN_0041f360 at 0041f8c3
;   core_charactr.cpp_FUN_0042e8c0 at 0042ed1f
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0 at 00495434
;   core_event.cpp_FUN_0048c2e0 at 0048f26b
;   core_fire.cpp_CFireball_onCollision_FUN_00499eb0 at 00499f5e
;   core_flame.cpp_CFlame_process_FUN_004a5b10 at 004a5ee5
;   core_game.cpp_FUN_004c4a60 at 004c4b7e
;   core_menu.cpp_FUN_004e94f0 at 004e9e4f
;   ... and 9 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3737
;   TerminatedCString s_popSfxOptions_stack_empt_005d374c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ceb91c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00556050 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_popSfxOptions_FUN_00556050
    DEC EDX                             ; 00556056
    MOV dword ptr [0x02ceb91c],EDX      ; 00556057 | DAT_02ceb91c
    TEST EDX,EDX                        ; 0055605d
    JL 0x00556062                       ; 0055605f
        ;   XREF to: 00556062 (CONDITIONAL_JUMP)  ; LAB_00556062
    RET                                 ; 00556061
    PUSH ESI                            ; 00556062
        ;   Label: LAB_00556062
    PUSH EBX                            ; 00556063
    MOV EBX,0x5d3737                    ; 00556064 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xeaa                       ; 00556069
    PUSH 0x5d374c                       ; 0055606e | = "popSfxOptions - stack empty"
    MOV dword ptr [0x01d71de0],EBX      ; 00556073 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00556079 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055607f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00556084
    POP EBX                             ; 00556087
    POP ESI                             ; 00556088
    RET                                 ; 00556089

