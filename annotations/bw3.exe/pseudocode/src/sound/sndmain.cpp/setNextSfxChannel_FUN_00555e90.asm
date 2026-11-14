; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[7]:
;   core_event.cpp_FUN_0048c2e0 at 0048f244
;   core_game.cpp_FUN_004c4a60 at 004c4b09
;   core_script.cpp_CScript_startDialogLine_FUN_00530150 at 005302b6
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 005608c7
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 00560231
;   core_sound.cpp_FUN_0055f6b0 at 0055f7bf
;   core_sound.cpp_FUN_0055fd30 at 0055fe0c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d36c3
;   TerminatedCString s_setNextSfxChannel_invali_005d36d8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ceb91c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555e90
        ;   Label: sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00555e91
    TEST EBX,EBX                        ; 00555e95
    JL 0x00555eb8                       ; 00555e97
        ;   XREF to: 00555eb8 (CONDITIONAL_JUMP)  ; LAB_00555eb8
    CMP EBX,0x20                        ; 00555e99
    JGE 0x00555eb8                      ; 00555e9c
        ;   XREF to: 00555eb8 (CONDITIONAL_JUMP)  ; LAB_00555eb8
    MOV EDX,dword ptr [0x02ceb91c]      ; 00555e9e | DAT_02ceb91c
        ;   Label: LAB_00555e9e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555ea4
    SUB EAX,EDX                         ; 00555eab
    SHL EAX,0x5                         ; 00555ead
    MOV dword ptr [EAX + 0x2ceb920],EBX ; 00555eb0
    POP EBX                             ; 00555eb6
    RET                                 ; 00555eb7
    PUSH EBX                            ; 00555eb8
        ;   Label: LAB_00555eb8
    MOV EDX,0x5d36c3                    ; 00555eb9 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xe73                       ; 00555ebe
    PUSH 0x5d36d8                       ; 00555ec3 | = "setNextSfxChannel - invalid channel i..."
    MOV dword ptr [0x01d71de0],EDX      ; 00555ec8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00555ece | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00555ed4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00555ed9
    JMP 0x00555e9e                      ; 00555edc
        ;   XREF to: 00555e9e (UNCONDITIONAL_JUMP)  ; LAB_00555e9e

