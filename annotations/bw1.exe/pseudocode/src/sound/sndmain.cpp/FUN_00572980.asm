; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00572980(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[7]:
;   core_event.cpp_FUN_004a1d00 at 004a4a70
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d91bb
;   core_script.cpp_CScript_startDialogLine_FUN_0054aa60 at 0054abc6
;   core_sound.cpp_CSound_configure_FUN_0057d6a0 at 0057d797
;   core_sound.cpp_CSound_process_FUN_0057ce10 at 0057d101
;   core_sound.cpp_FUN_0057c57e at 0057c9b5
;   core_sound.cpp_FUN_0057cc00 at 0057ccdc
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3dd9
;   TerminatedCString s_setNextSfxChannel_invali_005f3dee
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c78cec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572980
        ;   Label: sound_sndmain.cpp_FUN_00572980
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572981
    TEST EBX,EBX                        ; 00572985
    JL 0x005729a8                       ; 00572987
        ;   XREF to: 005729a8 (CONDITIONAL_JUMP)  ; LAB_005729a8
    CMP EBX,0x20                        ; 00572989
    JGE 0x005729a8                      ; 0057298c
        ;   XREF to: 005729a8 (CONDITIONAL_JUMP)  ; LAB_005729a8
    MOV EDX,dword ptr [0x02c78cec]      ; 0057298e | DAT_02c78cec
        ;   Label: LAB_0057298e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572994
    SUB EAX,EDX                         ; 0057299b
    SHL EAX,0x5                         ; 0057299d
    MOV dword ptr [EAX + 0x2c78cf0],EBX ; 005729a0
    POP EBX                             ; 005729a6
    RET                                 ; 005729a7
    PUSH EBX                            ; 005729a8
        ;   Label: LAB_005729a8
    MOV EDX,0x5f3dd9                    ; 005729a9 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xe70                       ; 005729ae
    PUSH 0x5f3dee                       ; 005729b3 | = "setNextSfxChannel - invalid channel i..."
    MOV dword ptr [0x01d1d400],EDX      ; 005729b8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005729be | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005729c4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005729c9
    JMP 0x0057298e                      ; 005729cc
        ;   XREF to: 0057298e (UNCONDITIONAL_JUMP)  ; LAB_0057298e

