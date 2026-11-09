; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00573f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; XREF[3]:
;   core_sound.cpp_FUN_0057d6a0 at 0057d775
;   core_sound.cpp_updateListeners_FUN_0057b780 at 0057b9e8
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e5e
;
; Referenced Globals:
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c807f7
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00573f20
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: sound_sndmain.cpp_FUN_00573f20
    MOV EAX,[0x02c7fc88]                ; 00573f25 | DAT_02c7fc88
    MOV EDX,dword ptr [ESP + 0x4]       ; 00573f2a
    MOV dword ptr [EAX*0x4 + 0x2c7fc40],EDX ; 00573f2e
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573f35
    MOV dword ptr [EAX*0x4 + 0x2c7fc48],EDX ; 00573f39
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573f40
    MOV dword ptr [EAX*0x4 + 0x2c7fc50],EDX ; 00573f44
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573f4b
    MOV dword ptr [EAX*0x4 + 0x2c7fc58],EDX ; 00573f4f
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573f56
    MOV dword ptr [EAX*0x4 + 0x2c7fc60],EDX ; 00573f5a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00573f61
    MOV dword ptr [EAX*0x4 + 0x2c7fc68],EDX ; 00573f65
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00573f6c
    MOV dword ptr [EAX*0x4 + 0x2c7fc70],EDX ; 00573f70
    MOV EDX,dword ptr [ESP + 0x20]      ; 00573f77
    MOV dword ptr [EAX*0x4 + 0x2c7fc78],EDX ; 00573f7b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00573f82
    MOV dword ptr [EAX*0x4 + 0x2c7fc80],EDX ; 00573f86
    OR byte ptr [0x02c807f7],0x20       ; 00573f8d | DAT_02c807f7
    JMP 0x00573e70                      ; 00573f94
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)

