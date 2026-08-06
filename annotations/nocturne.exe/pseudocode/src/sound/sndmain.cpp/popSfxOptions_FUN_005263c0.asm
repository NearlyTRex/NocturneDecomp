; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void)
;
;
; XREF[28]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00419040
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e840
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426d53
;   core_dracbrid.cpp_CDraculaBride_FUN_0045ab40 at 0045afff
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 004630bd
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047c517
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0 at 00480f14
;   core_fire.cpp_CFireball_onCollision_FUN_00484b60 at 00484c0e
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d44e
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 at 00494e77
;   ... and 18 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005934ab
;   TerminatedCString s_popSfxOptions_stack_empt_005934c0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02dc1b74
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 005263c0 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_popSfxOptions_FUN_005263c0
    DEC EDX                             ; 005263c6
    MOV dword ptr [0x02dc1b74],EDX      ; 005263c7 | DAT_02dc1b74
    TEST EDX,EDX                        ; 005263cd
    JL 0x005263d2                       ; 005263cf
        ;   XREF to: 005263d2 (CONDITIONAL_JUMP)  ; LAB_005263d2
    RET                                 ; 005263d1
    PUSH ESI                            ; 005263d2
        ;   Label: LAB_005263d2
    PUSH EBX                            ; 005263d3
    MOV EBX,0x5934ab                    ; 005263d4 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd03                       ; 005263d9
    PUSH 0x5934c0                       ; 005263de | = "popSfxOptions - stack empty"
    MOV dword ptr [0x01cc4800],EBX      ; 005263e3 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 005263e9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005263ef
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005263f4
    POP EBX                             ; 005263f7
    POP ESI                             ; 005263f8
    RET                                 ; 005263f9

