; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[7]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ac560
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4391
;   core_script.cpp_FUN_0055ff00 at 00560066
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b393f
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2eac
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3395
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b289f
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650858
;   TerminatedCString s_setNextSfxChannel_invali_0065086d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SfxLastSlot
;   CSfxOptions[8] g_SfxOptions
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8af0
        ;   Label: sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8af1
    TEST EBX,EBX                        ; 005a8af5
    JL 0x005a8b15                       ; 005a8af7
        ;   XREF to: 005a8b15 (CONDITIONAL_JUMP)  ; LAB_005a8b15
    CMP EBX,0x20                        ; 005a8af9
    JGE 0x005a8b15                      ; 005a8afc
        ;   XREF to: 005a8b15 (CONDITIONAL_JUMP)  ; LAB_005a8b15
    MOV EAX,[0x03f624a4]                ; 005a8afe | g_SfxLastSlot
        ;   Label: LAB_005a8afe
    SHL EAX,0x4                         ; 005a8b03
    MOV EDX,EAX                         ; 005a8b06
    SHL EAX,0x3                         ; 005a8b08
    SUB EAX,EDX                         ; 005a8b0b
    MOV dword ptr [EAX + 0x3f624a8],EBX ; 005a8b0d | g_SfxOptions
    POP EBX                             ; 005a8b13
    RET                                 ; 005a8b14
    PUSH EBX                            ; 005a8b15
        ;   Label: LAB_005a8b15
    MOV EDX,0x650858                    ; 005a8b16 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xcf8                       ; 005a8b1b
    PUSH 0x65086d                       ; 005a8b20 | = "setNextSfxChannel - invalid channel i..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005a8b25 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a8b2b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8b31
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a8b36
    JMP 0x005a8afe                      ; 005a8b39
        ;   XREF to: 005a8afe (UNCONDITIONAL_JUMP)  ; LAB_005a8afe

