; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00557100(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 005608b3
;   core_sound.cpp_FUN_0055fd30 at 0055fd65
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00557fe8
;
; Referenced Globals:
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf3424
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557100
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
        ;   Label: sound_sndmain.cpp_FUN_00557100
    MOV EAX,[0x02cf28b8]                ; 00557105 | DAT_02cf28b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055710a
    MOV dword ptr [EAX*0x4 + 0x2cf2858],EDX ; 0055710e
    MOV EDX,dword ptr [ESP + 0x8]       ; 00557115
    MOV dword ptr [EAX*0x4 + 0x2cf2860],EDX ; 00557119
    MOV EDX,dword ptr [ESP + 0xc]       ; 00557120
    MOV dword ptr [EAX*0x4 + 0x2cf2868],EDX ; 00557124
    OR byte ptr [0x02cf3424],0x4        ; 0055712b | DAT_02cf3424
    JMP 0x00556fd0                      ; 00557132
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)

