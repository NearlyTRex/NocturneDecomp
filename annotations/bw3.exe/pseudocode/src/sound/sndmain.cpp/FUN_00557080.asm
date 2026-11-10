; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00557080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 005608a5
;   core_sound.cpp_updateListeners_FUN_0055e8b0 at 0055eb18
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00557fda
;
; Referenced Globals:
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf3427
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557080
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
        ;   Label: sound_sndmain.cpp_FUN_00557080
    MOV EAX,[0x02cf28b8]                ; 00557085 | DAT_02cf28b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055708a
    MOV dword ptr [EAX*0x4 + 0x2cf2870],EDX ; 0055708e
    MOV EDX,dword ptr [ESP + 0x8]       ; 00557095
    MOV dword ptr [EAX*0x4 + 0x2cf2878],EDX ; 00557099
    MOV EDX,dword ptr [ESP + 0xc]       ; 005570a0
    MOV dword ptr [EAX*0x4 + 0x2cf2880],EDX ; 005570a4
    MOV EDX,dword ptr [ESP + 0x10]      ; 005570ab
    MOV dword ptr [EAX*0x4 + 0x2cf2888],EDX ; 005570af
    MOV EDX,dword ptr [ESP + 0x14]      ; 005570b6
    MOV dword ptr [EAX*0x4 + 0x2cf2890],EDX ; 005570ba
    MOV EDX,dword ptr [ESP + 0x18]      ; 005570c1
    MOV dword ptr [EAX*0x4 + 0x2cf2898],EDX ; 005570c5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005570cc
    MOV dword ptr [EAX*0x4 + 0x2cf28a0],EDX ; 005570d0
    MOV EDX,dword ptr [ESP + 0x20]      ; 005570d7
    MOV dword ptr [EAX*0x4 + 0x2cf28a8],EDX ; 005570db
    MOV EDX,dword ptr [ESP + 0x24]      ; 005570e2
    MOV dword ptr [EAX*0x4 + 0x2cf28b0],EDX ; 005570e6
    OR byte ptr [0x02cf3427],0x20       ; 005570ed | DAT_02cf3427
    JMP 0x00556fd0                      ; 005570f4
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)

