; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005289f0 at 00528b02
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2198
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0059388e
;   TerminatedCString s_enableHwSoundMixing_Can_005938a3
;   undefined4 DAT_005bea78
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_00528480 ; 005284a0
        ;   XREF to: 00528480 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundSystemActive_FUN_00528480()
        ;   Label: sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0
    TEST EAX,EAX                        ; 005284a5
    JNZ 0x005284b3                      ; 005284a7
        ;   XREF to: 005284b3 (CONDITIONAL_JUMP)  ; LAB_005284b3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005284a9
    MOV [0x005bea78],EAX                ; 005284ad | DAT_005bea78
    RET                                 ; 005284b2
    MOV EDX,0x59388e                    ; 005284b3 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005284b3
    MOV ECX,0x1237                      ; 005284b8
    PUSH 0x5938a3                       ; 005284bd | = "enableHwSoundMixing - Can't do this w..."
    MOV dword ptr [0x01cc4800],EDX      ; 005284c2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005284c8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005284ce
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005284d3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005284d6
    MOV [0x005bea78],EAX                ; 005284da | DAT_005bea78
    RET                                 ; 005284df

