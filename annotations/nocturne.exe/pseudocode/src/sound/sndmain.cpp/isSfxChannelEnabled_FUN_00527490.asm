; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[9]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047c4d9
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6f7f
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d13db
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de82
;   core_sound.cpp_FUN_0052dff0 at 0052e23d
;   core_sound.cpp_syncChannel3WithChannel0_FUN_0052dd90 at 0052dd95
;   sound_sndmain.cpp_FUN_005289f0 at 00528bc2
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526639
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528dda
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005936cd
;   TerminatedCString s_isSfxChannelEnabled_inva_005936e2
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527490
        ;   Label: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527491
    TEST EBX,EBX                        ; 00527495
    JL 0x005274a7                       ; 00527497
        ;   XREF to: 005274a7 (CONDITIONAL_JUMP)  ; LAB_005274a7
    CMP EBX,0x20                        ; 00527499
    JGE 0x005274a7                      ; 0052749c
        ;   XREF to: 005274a7 (CONDITIONAL_JUMP)  ; LAB_005274a7
    MOV EAX,dword ptr [EBX*0x4 + 0x2dc79d8] ; 0052749e
    POP EBX                             ; 005274a5
    RET                                 ; 005274a6
    PUSH EBX                            ; 005274a7
        ;   Label: LAB_005274a7
    MOV EDX,0x5936cd                    ; 005274a8 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf61                       ; 005274ad
    PUSH 0x5936e2                       ; 005274b2 | = "isSfxChannelEnabled - invalid channel..."
    MOV dword ptr [0x01cc4800],EDX      ; 005274b7 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005274bd | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005274c3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 005274c8
    MOV EAX,dword ptr [EBX*0x4 + 0x2dc79d8] ; 005274cb
    POP EBX                             ; 005274d2
    RET                                 ; 005274d3

