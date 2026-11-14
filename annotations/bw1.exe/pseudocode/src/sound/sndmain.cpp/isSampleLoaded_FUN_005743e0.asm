; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005743e0(char *sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSample_FUN_0056e830
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005743e0
        ;   Label: sound_sndmain.cpp_isSampleLoaded_FUN_005743e0
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 005743e1
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV EDX,dword ptr [ESP + 0x8]       ; 005743e6
    PUSH EDX                            ; 005743ea
    XOR EBX,EBX                         ; 005743eb
    CALL sound_sndmain.cpp_getSfxSample_FUN_0056e830 ; 005743ed
        ;   XREF to: 0056e830 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_0056e830(char * filename)
    ADD ESP,0x4                         ; 005743f2
    TEST EAX,EAX                        ; 005743f5
    JZ 0x005743fe                       ; 005743f7
        ;   XREF to: 005743fe (CONDITIONAL_JUMP)  ; LAB_005743fe
    MOV EBX,0x1                         ; 005743f9
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 005743fe
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_005743fe
    MOV EAX,EBX                         ; 00574403
    POP EBX                             ; 00574405
    RET                                 ; 00574406

