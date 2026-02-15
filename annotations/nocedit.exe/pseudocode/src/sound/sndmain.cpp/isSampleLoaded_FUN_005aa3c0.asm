; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005aa3c0(char *sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa3c0
        ;   Label: sound_sndmain.cpp_isSampleLoaded_FUN_005aa3c0
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005aa3c1
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    MOV EDX,dword ptr [ESP + 0x8]       ; 005aa3c6
    PUSH EDX                            ; 005aa3ca
    XOR EBX,EBX                         ; 005aa3cb
    CALL sound_sndmain.cpp_getSfxSample_FUN_005a4c80 ; 005aa3cd
        ;   XREF to: 005a4c80 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_005a4c80(char * filename)
    ADD ESP,0x4                         ; 005aa3d2
    TEST EAX,EAX                        ; 005aa3d5
    JZ 0x005aa3de                       ; 005aa3d7
        ;   XREF to: 005aa3de (CONDITIONAL_JUMP)  ; LAB_005aa3de
    MOV EBX,0x1                         ; 005aa3d9
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aa3de
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005aa3de
    MOV EAX,EBX                         ; 005aa3e3
    POP EBX                             ; 005aa3e5
    RET                                 ; 005aa3e6

