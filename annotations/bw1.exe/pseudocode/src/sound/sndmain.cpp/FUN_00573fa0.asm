; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00573fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_sound.cpp_FUN_0057cc00 at 0057cc35
;   core_sound.cpp_FUN_0057d6a0 at 0057d783
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e6c
;
; Referenced Globals:
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c807f4
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00573fa0
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: sound_sndmain.cpp_FUN_00573fa0
    MOV EAX,[0x02c7fc88]                ; 00573fa5 | DAT_02c7fc88
    MOV EDX,dword ptr [ESP + 0x4]       ; 00573faa
    MOV dword ptr [EAX*0x4 + 0x2c7fc28],EDX ; 00573fae
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573fb5
    MOV dword ptr [EAX*0x4 + 0x2c7fc30],EDX ; 00573fb9
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573fc0
    MOV dword ptr [EAX*0x4 + 0x2c7fc38],EDX ; 00573fc4
    OR byte ptr [0x02c807f4],0x4        ; 00573fcb | DAT_02c807f4
    JMP 0x00573e70                      ; 00573fd2
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)

