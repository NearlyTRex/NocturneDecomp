; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8f2f
;   core_sound.cpp_FUN_0057cc00 at 0057cc63
;   core_sound.cpp_FUN_0057d6a0 at 0057d78b
;
; Referenced Globals:
;   undefined4 DAT_006232e8
;   undefined4 DAT_006232ec
;   undefined4 DAT_006232f0
;   undefined4 DAT_00623304
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c80654
;   undefined4 DAT_02c80660
;   undefined4 DAT_02c80664
;   undefined4 DAT_02c80668
;   undefined4 DAT_02c8066c
;   undefined4 DAT_02c807d0
;   ... and 3 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_FUN_00575540
;   sound_sndmain.cpp_FUN_00575550
;   sound_sndmain.cpp_isSoundMuted_FUN_005735f0
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_resetSoundDevice_FUN_005750e0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00575120
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574ee0
        ;   Label: sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0
    PUSH ESI                            ; 00574ee1
    PUSH EDI                            ; 00574ee2
    PUSH EBP                            ; 00574ee3
    CALL sound_sndmain.cpp_FUN_00575540 ; 00574ee4
        ;   XREF to: 00575540 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_FUN_00575540()
    TEST EAX,EAX                        ; 00574ee9
    JNZ 0x00574ef2                      ; 00574eeb
        ;   XREF to: 00574ef2 (CONDITIONAL_JUMP)  ; LAB_00574ef2
    POP EBP                             ; 00574eed
    POP EDI                             ; 00574eee
    POP ESI                             ; 00574eef
    POP EBX                             ; 00574ef0
    RET                                 ; 00574ef1
    CALL sound_sndmain.cpp_isSoundMuted_FUN_005735f0 ; 00574ef2
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_005735f0()
        ;   Label: LAB_00574ef2
    TEST EAX,EAX                        ; 00574ef7
    JNZ 0x00574f0e                      ; 00574ef9
        ;   XREF to: 00574f0e (CONDITIONAL_JUMP)  ; LAB_00574f0e
    CALL sound_sndmain.cpp_FUN_00575550 ; 00574efb
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00575550()
    TEST EAX,EAX                        ; 00574f00
    JZ 0x00574f18                       ; 00574f02
        ;   XREF to: 00574f18 (CONDITIONAL_JUMP)  ; LAB_00574f18
    MOV EAX,0x1                         ; 00574f04
    POP EBP                             ; 00574f09
    POP EDI                             ; 00574f0a
    POP ESI                             ; 00574f0b
    POP EBX                             ; 00574f0c
    RET                                 ; 00574f0d
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 ; 00574f0e
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005750e0()
        ;   Label: LAB_00574f0e
    POP EBP                             ; 00574f13
    POP EDI                             ; 00574f14
    POP ESI                             ; 00574f15
    POP EBX                             ; 00574f16
    RET                                 ; 00574f17
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00574f18
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: LAB_00574f18
    MOV EDX,dword ptr [0x006232f0]      ; 00574f1d | DAT_006232f0
    PUSH EDX                            ; 00574f23
    MOV ECX,dword ptr [0x006232ec]      ; 00574f24 | DAT_006232ec
    PUSH ECX                            ; 00574f2a
    MOV EBX,dword ptr [0x006232e8]      ; 00574f2b | DAT_006232e8
    PUSH EBX                            ; 00574f31
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 ; 00574f32
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00574f37
    TEST EAX,EAX                        ; 00574f3a
    JZ 0x005750c7                       ; 00574f3c
        ;   XREF to: 005750c7 (CONDITIONAL_JUMP)  ; LAB_005750c7
    CMP dword ptr [0x02c8066c],0x0      ; 00574f42 | DAT_02c8066c
    JLE 0x00574f90                      ; 00574f49
        ;   XREF to: 00574f90 (CONDITIONAL_JUMP)  ; LAB_00574f90
    MOV EDI,dword ptr [0x006232ec]      ; 00574f4b | DAT_006232ec
    XOR ESI,ESI                         ; 00574f51
    TEST EDI,EDI                        ; 00574f53
    JLE 0x00574f90                      ; 00574f55
        ;   XREF to: 00574f90 (CONDITIONAL_JUMP)  ; LAB_00574f90
    XOR EBX,EBX                         ; 00574f57
    MOV EAX,[0x02c80668]                ; 00574f59 | DAT_02c80668
        ;   Label: LAB_00574f59
    IMUL EAX,dword ptr [0x02c8066c]     ; 00574f5e | DAT_02c8066c
    SHL EAX,0x2                         ; 00574f65
    PUSH EAX                            ; 00574f68
    PUSH 0x0                            ; 00574f69
    MOV EAX,dword ptr [EBX + 0x2c80698] ; 00574f6b
    PUSH EAX                            ; 00574f71
    ADD EBX,0x4                         ; 00574f72
    INC ESI                             ; 00574f75
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00574f76
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x006232ec]      ; 00574f7b | DAT_006232ec
    ADD ESP,0xc                         ; 00574f81
    CMP ESI,EDX                         ; 00574f84
    JL 0x00574f59                       ; 00574f86
        ;   XREF to: 00574f59 (CONDITIONAL_JUMP)  ; LAB_00574f59
    LEA EAX,[EAX]                       ; 00574f88
    MOV EDX,EDX                         ; 00574f8e
    MOV EAX,[0x02c7fc88]                ; 00574f90 | DAT_02c7fc88
        ;   Label: LAB_00574f90
    MOV EDI,dword ptr [EAX*0x8 + 0x2c7fc1c] ; 00574f95
    PUSH EDI                            ; 00574f9c
    MOV EBP,dword ptr [EAX*0x8 + 0x2c7fc18] ; 00574f9d | DAT_02c7fc18
    XOR ECX,ECX                         ; 00574fa4
    PUSH EBP                            ; 00574fa6
    MOV EDX,dword ptr [EAX*0x8 + 0x2c7fc0c] ; 00574fa7
    MOV dword ptr [0x02c80660],ECX      ; 00574fae | DAT_02c80660
    PUSH EDX                            ; 00574fb4
    MOV dword ptr [0x02c80664],ECX      ; 00574fb5 | DAT_02c80664
    MOV ECX,dword ptr [EAX*0x8 + 0x2c7fc08] ; 00574fbb | DAT_02c7fc08
    PUSH ECX                            ; 00574fc2
    MOV EDI,dword ptr [EAX*0x8 + 0x2c7fbfc] ; 00574fc3
    PUSH EDI                            ; 00574fca
    MOV EBP,dword ptr [EAX*0x8 + 0x2c7fbf8] ; 00574fcb | DAT_02c7fbf8
    MOV EBX,dword ptr [0x02c80650]      ; 00574fd2 | DAT_02c80650
    PUSH EBP                            ; 00574fd8
    MOV ESI,dword ptr [EBX]             ; 00574fd9
    PUSH EBX                            ; 00574fdb
    CALL dword ptr [ESI + 0x1c]         ; 00574fdc
    MOV EAX,[0x02c7fc88]                ; 00574fdf | DAT_02c7fc88
    ADD ESP,0x1c                        ; 00574fe4
    PUSH dword ptr [EAX*0x4 + 0x2c7fc80] ; 00574fe7
    PUSH dword ptr [EAX*0x4 + 0x2c7fc78] ; 00574fee
    PUSH dword ptr [EAX*0x4 + 0x2c7fc70] ; 00574ff5
    PUSH dword ptr [EAX*0x4 + 0x2c7fc68] ; 00574ffc
    PUSH dword ptr [EAX*0x4 + 0x2c7fc60] ; 00575003
    PUSH dword ptr [EAX*0x4 + 0x2c7fc58] ; 0057500a
    PUSH dword ptr [EAX*0x4 + 0x2c7fc50] ; 00575011
    MOV EBX,dword ptr [0x02c80650]      ; 00575018 | DAT_02c80650
    PUSH dword ptr [EAX*0x4 + 0x2c7fc48] ; 0057501e
    MOV ESI,dword ptr [EBX]             ; 00575025
    PUSH dword ptr [EAX*0x4 + 0x2c7fc40] ; 00575027
    PUSH EBX                            ; 0057502e
    CALL dword ptr [ESI + 0x20]         ; 0057502f
    MOV EAX,[0x02c7fc88]                ; 00575032 | DAT_02c7fc88
    ADD ESP,0x28                        ; 00575037
    PUSH dword ptr [EAX*0x4 + 0x2c7fc38] ; 0057503a
    MOV EBX,dword ptr [0x02c80650]      ; 00575041 | DAT_02c80650
    PUSH dword ptr [EAX*0x4 + 0x2c7fc30] ; 00575047
    MOV ESI,dword ptr [EBX]             ; 0057504e
    PUSH dword ptr [EAX*0x4 + 0x2c7fc28] ; 00575050
    PUSH EBX                            ; 00575057
    CALL dword ptr [ESI + 0x24]         ; 00575058
    ADD ESP,0x10                        ; 0057505b
    MOV EAX,[0x02c80650]                ; 0057505e | DAT_02c80650
    PUSH dword ptr [0x00623304]         ; 00575063 | DAT_00623304
    MOV EBX,dword ptr [EAX]             ; 00575069
    PUSH EAX                            ; 0057506b
    CALL dword ptr [EBX + 0x28]         ; 0057506c
    ADD ESP,0x8                         ; 0057506f
    PUSH dword ptr [0x02c807d8]         ; 00575072 | DAT_02c807d8
    MOV EAX,[0x02c80650]                ; 00575078 | DAT_02c80650
    PUSH dword ptr [0x02c807d4]         ; 0057507d | DAT_02c807d4
    MOV EBX,dword ptr [EAX]             ; 00575083
    PUSH dword ptr [0x02c807d0]         ; 00575085 | DAT_02c807d0
    PUSH EAX                            ; 0057508b
    CALL dword ptr [EBX + 0x2c]         ; 0057508c
    ADD ESP,0x10                        ; 0057508f
    CALL wincore_winrun.cpp_FUN_005b2420 ; 00575092
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV [0x02c807f0],EAX                ; 00575097 | DAT_02c807f0
    MOV EAX,[0x02c80650]                ; 0057509c | DAT_02c80650
    PUSH EAX                            ; 005750a1
    MOV EBX,dword ptr [EAX]             ; 005750a2
    CALL dword ptr [EBX + 0x4]          ; 005750a4
    ADD ESP,0x4                         ; 005750a7
    TEST EAX,EAX                        ; 005750aa
    JZ 0x005750c7                       ; 005750ac
        ;   XREF to: 005750c7 (CONDITIONAL_JUMP)  ; LAB_005750c7
    MOV dword ptr [0x02c80654],0x1      ; 005750ae | DAT_02c80654
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005750b8
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 005750bd
    POP EBP                             ; 005750c2
    POP EDI                             ; 005750c3
    POP ESI                             ; 005750c4
    POP EBX                             ; 005750c5
    RET                                 ; 005750c6
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005750c7
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_005750c7
    XOR EAX,EAX                         ; 005750cc
    POP EBP                             ; 005750ce
    POP EDI                             ; 005750cf
    POP ESI                             ; 005750d0
    POP EBX                             ; 005750d1
    RET                                 ; 005750d2

