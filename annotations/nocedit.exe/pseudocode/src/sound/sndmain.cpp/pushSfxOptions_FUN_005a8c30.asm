; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void)
;
;
; XREF[32]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c58e
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421bf4
;   core_charactr.cpp_CCharacter_processFire_FUN_0042a830 at 0042abaa
;   core_drone.cpp_CDrone_process_FUN_0048ec70 at 0048f28b
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac559
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00 at 004b0f31
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c170a
;   core_frankgen.cpp_CFrankenstienMachine_FUN_004d1f20 at 004d1f43
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e438a
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 00506613
;   ... and 22 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0065089b
;   TerminatedCString s_pushSfxOptions_stack_ful_006508b0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SfxLastSlot
;   CSfxOptions[8] g_SfxOptions
;   undefined4 g_SfxLastSlot.volume
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a8c30
        ;   Label: sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
    PUSH EDI                            ; 005a8c31
    MOV EDX,dword ptr [0x03f624a4]      ; 005a8c32 | g_SfxLastSlot
    INC EDX                             ; 005a8c38
    MOV dword ptr [0x03f624a4],EDX      ; 005a8c39 | g_SfxLastSlot
    CMP EDX,0x8                         ; 005a8c3f
    JGE 0x005a8c7b                      ; 005a8c42
        ;   XREF to: 005a8c7b (CONDITIONAL_JUMP)  ; LAB_005a8c7b
    MOV ECX,dword ptr [0x03f624a4]      ; 005a8c44 | g_SfxLastSlot
        ;   Label: LAB_005a8c44
    LEA EAX,[ECX + -0x1]                ; 005a8c4a
    SHL EAX,0x4                         ; 005a8c4d
    LEA ESI,[EAX*0x8 + 0x0]             ; 005a8c50
    SUB ESI,EAX                         ; 005a8c57
    MOV EAX,ECX                         ; 005a8c59
    SHL EAX,0x4                         ; 005a8c5b
    MOV EDX,EAX                         ; 005a8c5e
    SHL EAX,0x3                         ; 005a8c60
    SUB EAX,EDX                         ; 005a8c63
    LEA ESI,[ESI + 0x3f624a8]           ; 005a8c65 | g_SfxOptions
    MOV ECX,0x1c                        ; 005a8c6b
    LEA EDI,[EAX + 0x3f624a8]           ; 005a8c70 | g_SfxOptions
    MOVSD.REP ES:EDI,ESI                ; 005a8c76 | g_SfxOptions | g_SfxLastSlot.volume
    POP EDI                             ; 005a8c78
    POP ESI                             ; 005a8c79
    RET                                 ; 005a8c7a
    PUSH EBX                            ; 005a8c7b
        ;   Label: LAB_005a8c7b
    MOV EBX,0x65089b                    ; 005a8c7c | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd20                       ; 005a8c81
    PUSH 0x6508b0                       ; 005a8c86 | = "pushSfxOptions - stack full"
    MOV dword ptr [0x02f0ca48],EBX      ; 005a8c8b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a8c91 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8c97
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a8c9c
    POP EBX                             ; 005a8c9f
    JMP 0x005a8c44                      ; 005a8ca0
        ;   XREF to: 005a8c44 (UNCONDITIONAL_JUMP)  ; LAB_005a8c44

