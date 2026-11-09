; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[7]:
;   core_event.cpp_FUN_00489670 at 0048c22e
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be816
;   core_script.cpp_FUN_00529750 at 005298b6
;   core_sound.cpp_FUN_00559b4e at 00559f85
;   core_sound.cpp_FUN_0055a1d0 at 0055a2ad
;   core_sound.cpp_FUN_0055a3c0 at 0055a765
;   core_sound.cpp_FUN_0055ac50 at 0055ad47
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8bdf
;   TerminatedCString s_setNextSfxChannel_invali_005e8bf4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264161c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550310
        ;   Label: sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
    MOV EBX,dword ptr [ESP + 0x8]       ; 00550311
    TEST EBX,EBX                        ; 00550315
    JL 0x00550338                       ; 00550317
        ;   XREF to: 00550338 (CONDITIONAL_JUMP)  ; LAB_00550338
    CMP EBX,0x20                        ; 00550319
    JGE 0x00550338                      ; 0055031c
        ;   XREF to: 00550338 (CONDITIONAL_JUMP)  ; LAB_00550338
    MOV EDX,dword ptr [0x0264161c]      ; 0055031e | DAT_0264161c
        ;   Label: LAB_0055031e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550324
    SUB EAX,EDX                         ; 0055032b
    SHL EAX,0x5                         ; 0055032d
    MOV dword ptr [EAX + 0x2641620],EBX ; 00550330
    POP EBX                             ; 00550336
    RET                                 ; 00550337
    PUSH EBX                            ; 00550338
        ;   Label: LAB_00550338
    MOV EDX,0x5e8bdf                    ; 00550339 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xe70                       ; 0055033e
    PUSH 0x5e8bf4                       ; 00550343 | = "setNextSfxChannel - invalid channel i..."
    MOV dword ptr [0x01d046a0],EDX      ; 00550348 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0055034e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00550354
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00550359
    JMP 0x0055031e                      ; 0055035c
        ;   XREF to: 0055031e (UNCONDITIONAL_JUMP)  ; LAB_0055031e

