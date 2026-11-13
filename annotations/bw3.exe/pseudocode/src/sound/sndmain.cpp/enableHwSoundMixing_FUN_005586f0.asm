; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005586f0(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[2]:
;   core_menu.cpp_FUN_004e94f0 at 004ea247
;   sound_sndmain.cpp_readIni_FUN_00559220 at 00559344
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3b6c
;   TerminatedCString s_enableHwSoundMixing_Can_005d3b81
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf328c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_isSoundSystemActive_FUN_005586b0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005586b0 ; 005586f0
        ;   XREF to: 005586b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_005586b0()
        ;   Label: sound_sndmain.cpp_enableHwSoundMixing_FUN_005586f0
    TEST EAX,EAX                        ; 005586f5
    JNZ 0x00558703                      ; 005586f7
        ;   XREF to: 00558703 (CONDITIONAL_JUMP)  ; LAB_00558703
    MOV EAX,dword ptr [ESP + 0x4]       ; 005586f9
    MOV [0x02cf328c],EAX                ; 005586fd | DAT_02cf328c
    RET                                 ; 00558702
    MOV EDX,0x5d3b6c                    ; 00558703 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00558703
    MOV ECX,0x15a2                      ; 00558708
    PUSH 0x5d3b81                       ; 0055870d | = "enableHwSoundMixing - Can't do this w..."
    MOV dword ptr [0x01d71de0],EDX      ; 00558712 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00558718 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055871e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00558723
    MOV EAX,dword ptr [ESP + 0x4]       ; 00558726
    MOV [0x02cf328c],EAX                ; 0055872a | DAT_02cf328c
    RET                                 ; 0055872f

