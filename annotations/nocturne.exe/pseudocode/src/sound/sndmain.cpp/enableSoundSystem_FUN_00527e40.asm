; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00527e40(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6f6f
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e953
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de53
;
; Referenced Globals:
;   undefined4 DAT_005bea64
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea6c
;   undefined4 DAT_005bea80
;   undefined4 DAT_005bea84
;   undefined4 DAT_02dc78e0
;   undefined4 DAT_02dc78e4
;   undefined4 DAT_02dc78e8
;   undefined4 DAT_02dc78ec
;   undefined4 DAT_02dc78f0
;   undefined4 DAT_02dc78f4
;   undefined4 DAT_02dc78f8
;   undefined4 DAT_02dc78fc
;   undefined4 DAT_02dc7900
;   undefined4 DAT_02dc7904
;   ... and 30 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   sound_sndmain.cpp_isSoundBusy_FUN_00528490
;   sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0
;   sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_resetSoundDevice_FUN_00528080
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527e40
        ;   Label: sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
    PUSH ESI                            ; 00527e41
    PUSH EDI                            ; 00527e42
    PUSH EBP                            ; 00527e43
    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_00528480 ; 00527e44
        ;   XREF to: 00528480 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_00528480()
    TEST EAX,EAX                        ; 00527e49
    JNZ 0x00527e52                      ; 00527e4b
        ;   XREF to: 00527e52 (CONDITIONAL_JUMP)  ; LAB_00527e52
    POP EBP                             ; 00527e4d
    POP EDI                             ; 00527e4e
    POP ESI                             ; 00527e4f
    POP EBX                             ; 00527e50
    RET                                 ; 00527e51
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 00527e52
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
        ;   Label: LAB_00527e52
    TEST EAX,EAX                        ; 00527e57
    JNZ 0x00527e6e                      ; 00527e59
        ;   XREF to: 00527e6e (CONDITIONAL_JUMP)  ; LAB_00527e6e
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00528490 ; 00527e5b
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00528490()
    TEST EAX,EAX                        ; 00527e60
    JZ 0x00527e78                       ; 00527e62
        ;   XREF to: 00527e78 (CONDITIONAL_JUMP)  ; LAB_00527e78
    MOV EAX,0x1                         ; 00527e64
    POP EBP                             ; 00527e69
    POP EDI                             ; 00527e6a
    POP ESI                             ; 00527e6b
    POP EBX                             ; 00527e6c
    RET                                 ; 00527e6d
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 00527e6e
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
        ;   Label: LAB_00527e6e
    POP EBP                             ; 00527e73
    POP EDI                             ; 00527e74
    POP ESI                             ; 00527e75
    POP EBX                             ; 00527e76
    RET                                 ; 00527e77
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00527e78
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
        ;   Label: LAB_00527e78
    MOV EDX,dword ptr [0x005bea6c]      ; 00527e7d | DAT_005bea6c
    PUSH EDX                            ; 00527e83
    MOV ECX,dword ptr [0x005bea68]      ; 00527e84 | DAT_005bea68
    PUSH ECX                            ; 00527e8a
    MOV EBX,dword ptr [0x005bea64]      ; 00527e8b | DAT_005bea64
    PUSH EBX                            ; 00527e91
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 00527e92
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00527e97
    TEST EAX,EAX                        ; 00527e9a
    JZ 0x00528069                       ; 00527e9c
        ;   XREF to: 00528069 (CONDITIONAL_JUMP)  ; LAB_00528069
    CMP dword ptr [0x02dc8334],0x0      ; 00527ea2 | DAT_02dc8334
    JLE 0x00527ef0                      ; 00527ea9
        ;   XREF to: 00527ef0 (CONDITIONAL_JUMP)  ; LAB_00527ef0
    MOV EDI,dword ptr [0x005bea68]      ; 00527eab | DAT_005bea68
    XOR EBX,EBX                         ; 00527eb1
    TEST EDI,EDI                        ; 00527eb3
    JLE 0x00527ef0                      ; 00527eb5
        ;   XREF to: 00527ef0 (CONDITIONAL_JUMP)  ; LAB_00527ef0
    XOR ESI,ESI                         ; 00527eb7
    MOV EAX,[0x02dc8330]                ; 00527eb9 | DAT_02dc8330
        ;   Label: LAB_00527eb9
    IMUL EAX,dword ptr [0x02dc8334]     ; 00527ebe | DAT_02dc8334
    SHL EAX,0x2                         ; 00527ec5
    PUSH EAX                            ; 00527ec8
    PUSH 0x0                            ; 00527ec9
    MOV EAX,dword ptr [ESI + 0x2dc8360] ; 00527ecb
    PUSH EAX                            ; 00527ed1
    ADD ESI,0x4                         ; 00527ed2
    INC EBX                             ; 00527ed5
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00527ed6
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x005bea68]      ; 00527edb | DAT_005bea68
    ADD ESP,0xc                         ; 00527ee1
    CMP EBX,EDX                         ; 00527ee4
    JL 0x00527eb9                       ; 00527ee6
        ;   XREF to: 00527eb9 (CONDITIONAL_JUMP)  ; LAB_00527eb9
    LEA EAX,[EAX]                       ; 00527ee8
    MOV EDX,EDX                         ; 00527eee
    MOV ESI,dword ptr [0x02dc78f4]      ; 00527ef0 | DAT_02dc78f4
        ;   Label: LAB_00527ef0
    PUSH ESI                            ; 00527ef6
    MOV EDI,dword ptr [0x02dc78f0]      ; 00527ef7 | DAT_02dc78f0
    PUSH EDI                            ; 00527efd
    MOV EBP,dword ptr [0x02dc78ec]      ; 00527efe | DAT_02dc78ec
    XOR ECX,ECX                         ; 00527f04
    PUSH EBP                            ; 00527f06
    MOV EDX,dword ptr [0x02dc78e8]      ; 00527f07 | DAT_02dc78e8
    MOV dword ptr [0x02dc8328],ECX      ; 00527f0d | DAT_02dc8328
    PUSH EDX                            ; 00527f13
    MOV dword ptr [0x02dc832c],ECX      ; 00527f14 | DAT_02dc832c
    MOV ECX,dword ptr [0x02dc78e4]      ; 00527f1a | DAT_02dc78e4
    PUSH ECX                            ; 00527f20
    MOV ESI,dword ptr [0x02dc78e0]      ; 00527f21 | DAT_02dc78e0
    MOV EAX,[0x02dc8318]                ; 00527f27 | DAT_02dc8318
    PUSH ESI                            ; 00527f2c
    MOV EBX,dword ptr [EAX]             ; 00527f2d
    PUSH EAX                            ; 00527f2f
    CALL dword ptr [EBX + 0x18]         ; 00527f30
    ADD ESP,0x1c                        ; 00527f33
    MOV EDI,dword ptr [0x02dc7954]      ; 00527f36 | DAT_02dc7954
    PUSH EDI                            ; 00527f3c
    MOV EBP,dword ptr [0x02dc7950]      ; 00527f3d | DAT_02dc7950
    PUSH EBP                            ; 00527f43
    MOV EDX,dword ptr [0x02dc794c]      ; 00527f44 | DAT_02dc794c
    PUSH EDX                            ; 00527f4a
    MOV ECX,dword ptr [0x02dc7948]      ; 00527f4b | DAT_02dc7948
    PUSH ECX                            ; 00527f51
    MOV ESI,dword ptr [0x02dc7944]      ; 00527f52 | DAT_02dc7944
    PUSH ESI                            ; 00527f58
    MOV EDI,dword ptr [0x02dc7940]      ; 00527f59 | DAT_02dc7940
    PUSH EDI                            ; 00527f5f
    MOV EBP,dword ptr [0x02dc793c]      ; 00527f60 | DAT_02dc793c
    PUSH EBP                            ; 00527f66
    MOV EDX,dword ptr [0x02dc7938]      ; 00527f67 | DAT_02dc7938
    PUSH EDX                            ; 00527f6d
    MOV ECX,dword ptr [0x02dc7934]      ; 00527f6e | DAT_02dc7934
    PUSH ECX                            ; 00527f74
    MOV ESI,dword ptr [0x02dc7930]      ; 00527f75 | DAT_02dc7930
    PUSH ESI                            ; 00527f7b
    MOV EDI,dword ptr [0x02dc792c]      ; 00527f7c | DAT_02dc792c
    PUSH EDI                            ; 00527f82
    MOV EBP,dword ptr [0x02dc7928]      ; 00527f83 | DAT_02dc7928
    PUSH EBP                            ; 00527f89
    MOV EDX,dword ptr [0x02dc7924]      ; 00527f8a | DAT_02dc7924
    PUSH EDX                            ; 00527f90
    MOV ECX,dword ptr [0x02dc7920]      ; 00527f91 | DAT_02dc7920
    PUSH ECX                            ; 00527f97
    MOV ESI,dword ptr [0x02dc791c]      ; 00527f98 | DAT_02dc791c
    PUSH ESI                            ; 00527f9e
    MOV EDI,dword ptr [0x02dc7918]      ; 00527f9f | DAT_02dc7918
    PUSH EDI                            ; 00527fa5
    MOV EBP,dword ptr [0x02dc7914]      ; 00527fa6 | DAT_02dc7914
    PUSH EBP                            ; 00527fac
    MOV EDX,dword ptr [0x02dc7910]      ; 00527fad | DAT_02dc7910
    MOV EAX,[0x02dc8318]                ; 00527fb3 | DAT_02dc8318
    PUSH EDX                            ; 00527fb8
    MOV EBX,dword ptr [EAX]             ; 00527fb9
    PUSH EAX                            ; 00527fbb
    CALL dword ptr [EBX + 0x1c]         ; 00527fbc
    ADD ESP,0x4c                        ; 00527fbf
    MOV ECX,dword ptr [0x02dc790c]      ; 00527fc2 | DAT_02dc790c
    PUSH ECX                            ; 00527fc8
    MOV ESI,dword ptr [0x02dc7908]      ; 00527fc9 | DAT_02dc7908
    PUSH ESI                            ; 00527fcf
    MOV EDI,dword ptr [0x02dc7904]      ; 00527fd0 | DAT_02dc7904
    PUSH EDI                            ; 00527fd6
    MOV EBP,dword ptr [0x02dc7900]      ; 00527fd7 | DAT_02dc7900
    PUSH EBP                            ; 00527fdd
    MOV EDX,dword ptr [0x02dc78fc]      ; 00527fde | DAT_02dc78fc
    PUSH EDX                            ; 00527fe4
    MOV ECX,dword ptr [0x02dc78f8]      ; 00527fe5 | DAT_02dc78f8
    MOV EAX,[0x02dc8318]                ; 00527feb | DAT_02dc8318
    PUSH ECX                            ; 00527ff0
    MOV EBX,dword ptr [EAX]             ; 00527ff1
    PUSH EAX                            ; 00527ff3
    CALL dword ptr [EBX + 0x20]         ; 00527ff4
    ADD ESP,0x1c                        ; 00527ff7
    MOV ESI,dword ptr [0x005bea84]      ; 00527ffa | DAT_005bea84
    PUSH ESI                            ; 00528000
    MOV EDI,dword ptr [0x005bea80]      ; 00528001 | DAT_005bea80
    MOV EAX,[0x02dc8318]                ; 00528007 | DAT_02dc8318
    PUSH EDI                            ; 0052800c
    MOV EBX,dword ptr [EAX]             ; 0052800d
    PUSH EAX                            ; 0052800f
    CALL dword ptr [EBX + 0x24]         ; 00528010
    ADD ESP,0xc                         ; 00528013
    PUSH dword ptr [0x02dc84a0]         ; 00528016 | DAT_02dc84a0
    MOV EAX,[0x02dc8318]                ; 0052801c | DAT_02dc8318
    PUSH dword ptr [0x02dc849c]         ; 00528021 | DAT_02dc849c
    MOV EBX,dword ptr [EAX]             ; 00528027
    PUSH dword ptr [0x02dc8498]         ; 00528029 | DAT_02dc8498
    PUSH EAX                            ; 0052802f
    CALL dword ptr [EBX + 0x28]         ; 00528030
    ADD ESP,0x10                        ; 00528033
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00528036
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x02dc84c0],EAX                ; 0052803b | DAT_02dc84c0
    MOV EAX,[0x02dc8318]                ; 00528040 | DAT_02dc8318
    PUSH EAX                            ; 00528045
    MOV EBX,dword ptr [EAX]             ; 00528046
    CALL dword ptr [EBX + 0x4]          ; 00528048
    ADD ESP,0x4                         ; 0052804b
    TEST EAX,EAX                        ; 0052804e
    JZ 0x00528069                       ; 00528050
        ;   XREF to: 00528069 (CONDITIONAL_JUMP)  ; LAB_00528069
    MOV EBP,0x1                         ; 00528052
    MOV dword ptr [0x02dc831c],EBP      ; 00528057 | DAT_02dc831c
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052805d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,EBP                         ; 00528062
    POP EBP                             ; 00528064
    POP EDI                             ; 00528065
    POP ESI                             ; 00528066
    POP EBX                             ; 00528067
    RET                                 ; 00528068
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00528069
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00528069
    XOR EAX,EAX                         ; 0052806e
    POP EBP                             ; 00528070
    POP EDI                             ; 00528071
    POP ESI                             ; 00528072
    POP EBX                             ; 00528073
    RET                                 ; 00528074

