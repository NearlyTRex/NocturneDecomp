; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_005516ce(char *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02641920
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_freeSampleByName_FUN_00551950
;   sound_sndmain.cpp_FUN_0054fd90
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 005516ce
        ;   Label: sound_sndmain.cpp_FUN_005516ce
    PUSH EBX                            ; 005516d0
    PUSH ESI                            ; 005516d1
    PUSH EDI                            ; 005516d2
    PUSH EBP                            ; 005516d3
    MOV EBX,dword ptr [0x02641920]      ; 005516d4 | DAT_02641920
    MOV ESI,dword ptr [ESP + 0x14]      ; 005516da
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 005516de
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    PUSH 0x1                            ; 005516e3
    PUSH ESI                            ; 005516e5
    CALL sound_sndmain.cpp_freeSampleByName_FUN_00551950 ; 005516e6
        ;   XREF to: 00551950 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeSampleByName_FUN_00551950(char * sample_name, int kill_active_slots)
    ADD ESP,0x8                         ; 005516eb
    XOR ECX,ECX                         ; 005516ee
    XOR EBP,EBP                         ; 005516f0
    MOV EBX,dword ptr [0x02641920]      ; 005516f2 | DAT_02641920
        ;   Label: LAB_005516f2
    INC EBX                             ; 005516f8
    CMP EBX,0x40                        ; 005516f9
    JL 0x00551700                       ; 005516fc
        ;   XREF to: 00551700 (CONDITIONAL_JUMP)  ; LAB_00551700
    MOV EBX,EBP                         ; 005516fe
    IMUL EAX,EBX,0x1ac                  ; 00551700
        ;   Label: LAB_00551700
    MOV EDX,dword ptr [EAX + 0x2641a74] ; 00551706
    CMP EBP,EDX                         ; 0055170c
    JZ 0x0055172e                       ; 0055170e
        ;   XREF to: 0055172e (CONDITIONAL_JUMP)  ; LAB_0055172e
    INC ECX                             ; 00551710
        ;   Label: LAB_00551710
    MOV dword ptr [0x02641920],EBX      ; 00551711 | DAT_02641920
    CMP ECX,0x40                        ; 00551717
    JL 0x005516f2                       ; 0055171a
        ;   XREF to: 005516f2 (CONDITIONAL_JUMP)  ; LAB_005516f2
    CALL sound_sndmain.cpp_FUN_00551440 ; 0055171c
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_0055171c
    XOR EAX,EAX                         ; 00551721
    MOV EBX,dword ptr [0x02641920]      ; 00551723 | DAT_02641920
    POP EBP                             ; 00551729
    POP EDI                             ; 0055172a
    POP ESI                             ; 0055172b
    POP EBX                             ; 0055172c
    RET                                 ; 0055172d
    MOV EDI,dword ptr [EAX + 0x2641a78] ; 0055172e
        ;   Label: LAB_0055172e
    CMP EDX,EDI                         ; 00551734
    JNZ 0x00551710                      ; 00551736
        ;   XREF to: 00551710 (CONDITIONAL_JUMP)  ; LAB_00551710
    MOV EDX,dword ptr [EAX + 0x2641a80] ; 00551738
    CMP EDI,EDX                         ; 0055173e
    JNZ 0x00551710                      ; 00551740
        ;   XREF to: 00551710 (CONDITIONAL_JUMP)  ; LAB_00551710
    CMP EDX,dword ptr [EAX + 0x2641acc] ; 00551742
    JNZ 0x00551710                      ; 00551748
        ;   XREF to: 00551710 (CONDITIONAL_JUMP)  ; LAB_00551710
    MOV EBP,0x2641924                   ; 0055174a
    MOV dword ptr [0x02641920],EBX      ; 0055174f | DAT_02641920
    ADD EBP,EAX                         ; 00551755
    JZ 0x0055171c                       ; 00551757
        ;   XREF to: 0055171c (CONDITIONAL_JUMP)  ; LAB_0055171c
    MOV ECX,0x54                        ; 00551759
    MOV EDI,EBP                         ; 0055175e
    MOVSD.REP ES:EDI,ESI                ; 00551760
    MOV dword ptr [EBP + 0x150],0x0     ; 00551762
    MOV dword ptr [EBP + 0x154],0x0     ; 0055176c
    MOV dword ptr [EBP + 0x158],0x0     ; 00551776
    MOV dword ptr [EBP + 0x15c],0x1     ; 00551780
    MOV dword ptr [EBP + 0x160],0xffffffff ; 0055178a
    MOV EAX,dword ptr [EBP + 0x110]     ; 00551794
    MOV dword ptr [EBP + 0x164],EAX     ; 0055179a
    PUSH EAX                            ; 005517a0
    MOV dword ptr [EBP + 0x16c],EAX     ; 005517a1
    PUSH EBP                            ; 005517a7
    MOV dword ptr [EBP + 0x170],EAX     ; 005517a8
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 005517ae
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 005517b3
    PUSH EBP                            ; 005517b6
    MOV dword ptr [EBP + 0x168],EAX     ; 005517b7
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840 ; 005517bd
        ;   XREF to: 0054d840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005517c2
    TEST EAX,EAX                        ; 005517c5
    JZ 0x005517de                       ; 005517c7
        ;   XREF to: 005517de (CONDITIONAL_JUMP)  ; LAB_005517de
    CALL sound_sndmain.cpp_FUN_00551440 ; 005517c9
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV EAX,0x1                         ; 005517ce
    MOV EBX,dword ptr [0x02641920]      ; 005517d3 | DAT_02641920
    POP EBP                             ; 005517d9
    POP EDI                             ; 005517da
    POP ESI                             ; 005517db
    POP EBX                             ; 005517dc
    RET                                 ; 005517dd
    PUSH EBP                            ; 005517de
        ;   Label: LAB_005517de
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 005517df
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005517e4
    XOR EAX,EAX                         ; 005517e7
    MOV EBX,dword ptr [0x02641920]      ; 005517e9 | DAT_02641920
    POP EBP                             ; 005517ef
    POP EDI                             ; 005517f0
    POP ESI                             ; 005517f1
    POP EBX                             ; 005517f2
    RET                                 ; 005517f3

