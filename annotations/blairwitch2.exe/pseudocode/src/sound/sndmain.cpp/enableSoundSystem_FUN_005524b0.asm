; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005524b0(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be528
;   core_sound.cpp_CSound_configure_FUN_0055ac50 at 0055ad3b
;   core_sound.cpp_FUN_0055a1d0 at 0055a234
;
; Referenced Globals:
;   undefined4 DAT_0061bc98
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bca0
;   undefined4 DAT_0061bcb4
;   undefined4 DAT_02648428
;   undefined4 DAT_02648438
;   undefined4 DAT_02648448
;   undefined4 DAT_026484b8
;   undefined4 DAT_02648e80
;   undefined4 DAT_02648e84
;   undefined4 DAT_02648e90
;   undefined4 DAT_02648e94
;   undefined4 DAT_02648e98
;   undefined4 DAT_02648e9c
;   undefined4 DAT_02649000
;   ... and 3 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_isSoundBusy_FUN_00552b20
;   sound_sndmain.cpp_isSoundMuted_FUN_00550bc0
;   sound_sndmain.cpp_isSoundSystemActive_FUN_00552b10
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005524b0
        ;   Label: sound_sndmain.cpp_enableSoundSystem_FUN_005524b0
    PUSH ESI                            ; 005524b1
    PUSH EDI                            ; 005524b2
    PUSH EBP                            ; 005524b3
    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_00552b10 ; 005524b4
        ;   XREF to: 00552b10 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_00552b10()
    TEST EAX,EAX                        ; 005524b9
    JNZ 0x005524c2                      ; 005524bb
        ;   XREF to: 005524c2 (CONDITIONAL_JUMP)  ; LAB_005524c2
    POP EBP                             ; 005524bd
    POP EDI                             ; 005524be
    POP ESI                             ; 005524bf
    POP EBX                             ; 005524c0
    RET                                 ; 005524c1
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 005524c2
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
        ;   Label: LAB_005524c2
    TEST EAX,EAX                        ; 005524c7
    JNZ 0x005524de                      ; 005524c9
        ;   XREF to: 005524de (CONDITIONAL_JUMP)  ; LAB_005524de
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00552b20 ; 005524cb
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00552b20()
    TEST EAX,EAX                        ; 005524d0
    JZ 0x005524e8                       ; 005524d2
        ;   XREF to: 005524e8 (CONDITIONAL_JUMP)  ; LAB_005524e8
    MOV EAX,0x1                         ; 005524d4
    POP EBP                             ; 005524d9
    POP EDI                             ; 005524da
    POP ESI                             ; 005524db
    POP EBX                             ; 005524dc
    RET                                 ; 005524dd
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 005524de
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
        ;   Label: LAB_005524de
    POP EBP                             ; 005524e3
    POP EDI                             ; 005524e4
    POP ESI                             ; 005524e5
    POP EBX                             ; 005524e6
    RET                                 ; 005524e7
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 005524e8
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
        ;   Label: LAB_005524e8
    MOV EDX,dword ptr [0x0061bca0]      ; 005524ed | DAT_0061bca0
    PUSH EDX                            ; 005524f3
    MOV ECX,dword ptr [0x0061bc9c]      ; 005524f4 | DAT_0061bc9c
    PUSH ECX                            ; 005524fa
    MOV EBX,dword ptr [0x0061bc98]      ; 005524fb | DAT_0061bc98
    PUSH EBX                            ; 00552501
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0 ; 00552502
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00552507
    TEST EAX,EAX                        ; 0055250a
    JZ 0x00552697                       ; 0055250c
        ;   XREF to: 00552697 (CONDITIONAL_JUMP)  ; LAB_00552697
    CMP dword ptr [0x02648e9c],0x0      ; 00552512 | DAT_02648e9c
    JLE 0x00552560                      ; 00552519
        ;   XREF to: 00552560 (CONDITIONAL_JUMP)  ; LAB_00552560
    MOV EDI,dword ptr [0x0061bc9c]      ; 0055251b | DAT_0061bc9c
    XOR ESI,ESI                         ; 00552521
    TEST EDI,EDI                        ; 00552523
    JLE 0x00552560                      ; 00552525
        ;   XREF to: 00552560 (CONDITIONAL_JUMP)  ; LAB_00552560
    XOR EBX,EBX                         ; 00552527
    MOV EAX,[0x02648e98]                ; 00552529 | DAT_02648e98
        ;   Label: LAB_00552529
    IMUL EAX,dword ptr [0x02648e9c]     ; 0055252e | DAT_02648e9c
    SHL EAX,0x2                         ; 00552535
    PUSH EAX                            ; 00552538
    PUSH 0x0                            ; 00552539
    MOV EAX,dword ptr [EBX + 0x2648ec8] ; 0055253b
    PUSH EAX                            ; 00552541
    ADD EBX,0x4                         ; 00552542
    INC ESI                             ; 00552545
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00552546
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x0061bc9c]      ; 0055254b | DAT_0061bc9c
    ADD ESP,0xc                         ; 00552551
    CMP ESI,EDX                         ; 00552554
    JL 0x00552529                       ; 00552556
        ;   XREF to: 00552529 (CONDITIONAL_JUMP)  ; LAB_00552529
    LEA EAX,[EAX]                       ; 00552558
    MOV EDX,EDX                         ; 0055255e
    MOV EAX,[0x026484b8]                ; 00552560 | DAT_026484b8
        ;   Label: LAB_00552560
    MOV EDI,dword ptr [EAX*0x8 + 0x264844c] ; 00552565
    PUSH EDI                            ; 0055256c
    MOV EBP,dword ptr [EAX*0x8 + 0x2648448] ; 0055256d | DAT_02648448
    XOR ECX,ECX                         ; 00552574
    PUSH EBP                            ; 00552576
    MOV EDX,dword ptr [EAX*0x8 + 0x264843c] ; 00552577
    MOV dword ptr [0x02648e90],ECX      ; 0055257e | DAT_02648e90
    PUSH EDX                            ; 00552584
    MOV dword ptr [0x02648e94],ECX      ; 00552585 | DAT_02648e94
    MOV ECX,dword ptr [EAX*0x8 + 0x2648438] ; 0055258b | DAT_02648438
    PUSH ECX                            ; 00552592
    MOV EDI,dword ptr [EAX*0x8 + 0x264842c] ; 00552593
    PUSH EDI                            ; 0055259a
    MOV EBP,dword ptr [EAX*0x8 + 0x2648428] ; 0055259b | DAT_02648428
    MOV EBX,dword ptr [0x02648e80]      ; 005525a2 | DAT_02648e80
    PUSH EBP                            ; 005525a8
    MOV ESI,dword ptr [EBX]             ; 005525a9
    PUSH EBX                            ; 005525ab
    CALL dword ptr [ESI + 0x1c]         ; 005525ac
    MOV EAX,[0x026484b8]                ; 005525af | DAT_026484b8
    ADD ESP,0x1c                        ; 005525b4
    PUSH dword ptr [EAX*0x4 + 0x26484b0] ; 005525b7
    PUSH dword ptr [EAX*0x4 + 0x26484a8] ; 005525be
    PUSH dword ptr [EAX*0x4 + 0x26484a0] ; 005525c5
    PUSH dword ptr [EAX*0x4 + 0x2648498] ; 005525cc
    PUSH dword ptr [EAX*0x4 + 0x2648490] ; 005525d3
    PUSH dword ptr [EAX*0x4 + 0x2648488] ; 005525da
    PUSH dword ptr [EAX*0x4 + 0x2648480] ; 005525e1
    MOV EBX,dword ptr [0x02648e80]      ; 005525e8 | DAT_02648e80
    PUSH dword ptr [EAX*0x4 + 0x2648478] ; 005525ee
    MOV ESI,dword ptr [EBX]             ; 005525f5
    PUSH dword ptr [EAX*0x4 + 0x2648470] ; 005525f7
    PUSH EBX                            ; 005525fe
    CALL dword ptr [ESI + 0x20]         ; 005525ff
    MOV EAX,[0x026484b8]                ; 00552602 | DAT_026484b8
    ADD ESP,0x28                        ; 00552607
    PUSH dword ptr [EAX*0x4 + 0x2648468] ; 0055260a
    MOV EBX,dword ptr [0x02648e80]      ; 00552611 | DAT_02648e80
    PUSH dword ptr [EAX*0x4 + 0x2648460] ; 00552617
    MOV ESI,dword ptr [EBX]             ; 0055261e
    PUSH dword ptr [EAX*0x4 + 0x2648458] ; 00552620
    PUSH EBX                            ; 00552627
    CALL dword ptr [ESI + 0x24]         ; 00552628
    ADD ESP,0x10                        ; 0055262b
    MOV EAX,[0x02648e80]                ; 0055262e | DAT_02648e80
    PUSH dword ptr [0x0061bcb4]         ; 00552633 | DAT_0061bcb4
    MOV EBX,dword ptr [EAX]             ; 00552639
    PUSH EAX                            ; 0055263b
    CALL dword ptr [EBX + 0x28]         ; 0055263c
    ADD ESP,0x8                         ; 0055263f
    PUSH dword ptr [0x02649008]         ; 00552642 | DAT_02649008
    MOV EAX,[0x02648e80]                ; 00552648 | DAT_02648e80
    PUSH dword ptr [0x02649004]         ; 0055264d | DAT_02649004
    MOV EBX,dword ptr [EAX]             ; 00552653
    PUSH dword ptr [0x02649000]         ; 00552655 | DAT_02649000
    PUSH EAX                            ; 0055265b
    CALL dword ptr [EBX + 0x2c]         ; 0055265c
    ADD ESP,0x10                        ; 0055265f
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 00552662
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x02649020],EAX                ; 00552667 | DAT_02649020
    MOV EAX,[0x02648e80]                ; 0055266c | DAT_02648e80
    PUSH EAX                            ; 00552671
    MOV EBX,dword ptr [EAX]             ; 00552672
    CALL dword ptr [EBX + 0x4]          ; 00552674
    ADD ESP,0x4                         ; 00552677
    TEST EAX,EAX                        ; 0055267a
    JZ 0x00552697                       ; 0055267c
        ;   XREF to: 00552697 (CONDITIONAL_JUMP)  ; LAB_00552697
    MOV dword ptr [0x02648e84],0x1      ; 0055267e | DAT_02648e84
    CALL sound_sndmain.cpp_FUN_00551440 ; 00552688
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV EAX,0x1                         ; 0055268d
    POP EBP                             ; 00552692
    POP EDI                             ; 00552693
    POP ESI                             ; 00552694
    POP EBX                             ; 00552695
    RET                                 ; 00552696
    CALL sound_sndmain.cpp_FUN_00551440 ; 00552697
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_00552697
    XOR EAX,EAX                         ; 0055269c
    POP EBP                             ; 0055269e
    POP EDI                             ; 0055269f
    POP ESI                             ; 005526a0
    POP EBX                             ; 005526a1
    RET                                 ; 005526a2

