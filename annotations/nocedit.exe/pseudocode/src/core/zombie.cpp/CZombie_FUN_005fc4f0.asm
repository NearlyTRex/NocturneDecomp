; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_CZombie_FUN_005fc4f0()
;
;
; Referenced Globals:
;   undefined4 s_lookForHead_006589dd
;   TerminatedCString s_f_zombie_die_wav_006589e9
;   TerminatedCString s_zom_d0_wav_006589fb
;   TerminatedCString s_f_zombie_hit_wav_00658a07
;   TerminatedCString s_zom_s0_wav_00658a19
;
; Called Functions:
;   core_enemy.cpp_FUN_004a9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_zombie.cpp_CZombie_FUN_005fbde0
;   core_zombie.cpp_CZombie_FUN_005fc220
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fc4f0
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc4f0
    PUSH EDI                            ; 005fc4f1
    PUSH EBP                            ; 005fc4f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005fc4f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005fc4f7
    PUSH EDI                            ; 005fc4fb
    PUSH EBX                            ; 005fc4fc
    CALL core_zombie.cpp_CZombie_FUN_005fc220 ; 005fc4fd
        ;   XREF to: 005fc220 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_FUN_005fc220()
    ADD ESP,0x8                         ; 005fc502
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fc505
    PUSH EBX                            ; 005fc50b
    CALL dword ptr [EAX + 0x10c]        ; 005fc50c
    FLD float ptr [EDI + 0x4]           ; 005fc512
    FSUBR float ptr [EBX + 0x243c]      ; 005fc515
    MOV EAX,dword ptr [EBX + 0xbf90]    ; 005fc51b
    FSTP float ptr [EBX + 0x243c]       ; 005fc521
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005fc527
    ADD ESP,0x4                         ; 005fc52e
    TEST EDX,EDX                        ; 005fc531
    JZ 0x005fc607                       ; 005fc533
        ;   XREF to: 005fc607 (CONDITIONAL_JUMP)  ; LAB_005fc607
    FLD float ptr [EBX + 0x243c]        ; 005fc539
        ;   Label: LAB_005fc539
    FLDZ                                ; 005fc53f
    LEA EDX,[EBX + 0x158]               ; 005fc541
    MOV dword ptr [EBX + 0xbe38],0x3f99999a ; 005fc547
    FCOMPP                              ; 005fc551
    FNSTSW AX                           ; 005fc553
    SAHF                                ; 005fc555
    JC 0x005fc671                       ; 005fc556
        ;   XREF to: 005fc671 (CONDITIONAL_JUMP)  ; LAB_005fc671
    PUSH EDX                            ; 005fc55c
    MOV dword ptr [EBX + 0x243c],0x0    ; 005fc55d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005fc567
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005fc56c
    ADD ESP,0x4                         ; 005fc56f
    CMP EAX,0x8                         ; 005fc572
    JZ 0x005fc5f9                       ; 005fc575
        ;   XREF to: 005fc5f9 (CONDITIONAL_JUMP)  ; LAB_005fc5f9
    CMP EAX,0x7                         ; 005fc57b
    JZ 0x005fc5f9                       ; 005fc57e
        ;   XREF to: 005fc5f9 (CONDITIONAL_JUMP)  ; LAB_005fc5f9
    PUSH ESI                            ; 005fc580
    PUSH EBX                            ; 005fc581
    CALL core_zombie.cpp_CZombie_FUN_005fbde0 ; 005fc582
        ;   XREF to: 005fbde0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_FUN_005fbde0()
    MOV EAX,dword ptr [EBX + 0xbf90]    ; 005fc587
    MOV ESI,0x6                         ; 005fc58d
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005fc592
    ADD ESP,0x4                         ; 005fc599
    TEST EBP,EBP                        ; 005fc59c
    JZ 0x005fc612                       ; 005fc59e
        ;   XREF to: 005fc612 (CONDITIONAL_JUMP)  ; LAB_005fc612
    PUSH 0x1                            ; 005fc5a0
        ;   Label: LAB_005fc5a0
    PUSH ESI                            ; 005fc5a2
    LEA EAX,[EBX + 0x158]               ; 005fc5a3
    PUSH EAX                            ; 005fc5a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fc5aa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fc5af
    MOV ESI,dword ptr [EBX + 0xbf9c]    ; 005fc5b2
    PUSH ESI                            ; 005fc5b8
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005fc5b9
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV EBP,dword ptr [EBX + 0xbf48]    ; 005fc5be
    ADD ESP,0x4                         ; 005fc5c4
    TEST EBP,EBP                        ; 005fc5c7
    JZ 0x005fc667                       ; 005fc5c9
        ;   XREF to: 005fc667 (CONDITIONAL_JUMP)  ; LAB_005fc667
    PUSH 0x6589e9                       ; 005fc5cf | = "f-zombie-die?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fc5d4
        ;   Label: LAB_005fc5d4
    PUSH EBX                            ; 005fc5da
    CALL dword ptr [EAX + 0x24]         ; 005fc5db
    ADD ESP,0x8                         ; 005fc5de
    PUSH 0x41c80000                     ; 005fc5e1
    PUSH 0x32                           ; 005fc5e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fc5e8
    PUSH EBX                            ; 005fc5ee
    CALL dword ptr [EAX + 0xa0]         ; 005fc5ef
    ADD ESP,0xc                         ; 005fc5f5
    POP ESI                             ; 005fc5f8
    PUSH EDI                            ; 005fc5f9
        ;   Label: LAB_005fc5f9
    PUSH EBX                            ; 005fc5fa
    CALL core_enemy.cpp_FUN_004a9f10    ; 005fc5fb
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 005fc600
    POP EBP                             ; 005fc603
    POP EDI                             ; 005fc604
    POP EBX                             ; 005fc605
    RET                                 ; 005fc606
    MOV dword ptr [EBX + 0x243c],EDX    ; 005fc607
        ;   Label: LAB_005fc607
    JMP 0x005fc539                      ; 005fc60d
        ;   XREF to: 005fc539 (UNCONDITIONAL_JUMP)  ; LAB_005fc539
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 005fc612
        ;   Label: LAB_005fc612
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fc618
    JNZ 0x005fc636                      ; 005fc620
        ;   XREF to: 005fc636 (CONDITIONAL_JUMP)  ; LAB_005fc636
    MOV EAX,dword ptr [EBX + 0xbf78]    ; 005fc622
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fc628
    JZ 0x005fc5a0                       ; 005fc630
        ;   XREF to: 005fc5a0 (CONDITIONAL_JUMP)  ; LAB_005fc5a0
    PUSH 0x0                            ; 005fc636
        ;   Label: LAB_005fc636
    PUSH 0x6589dd                       ; 005fc638 | s_lookForHead_006589dd
    LEA EAX,[EBX + 0x158]               ; 005fc63d
    PUSH EAX                            ; 005fc643
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005fc644
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005fc649
    PUSH EAX                            ; 005fc64c
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005fc64d
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 005fc652
    TEST EAX,EAX                        ; 005fc655
    JL 0x005fc5a0                       ; 005fc657
        ;   XREF to: 005fc5a0 (CONDITIONAL_JUMP)  ; LAB_005fc5a0
    MOV ESI,0x9                         ; 005fc65d
    JMP 0x005fc5a0                      ; 005fc662
        ;   XREF to: 005fc5a0 (UNCONDITIONAL_JUMP)  ; LAB_005fc5a0
    PUSH 0x6589fb                       ; 005fc667 | = "zom-d0?.wav"
        ;   Label: LAB_005fc667
    JMP 0x005fc5d4                      ; 005fc66c
        ;   XREF to: 005fc5d4 (UNCONDITIONAL_JUMP)  ; LAB_005fc5d4
    PUSH 0x1                            ; 005fc671
        ;   Label: LAB_005fc671
    PUSH 0x4                            ; 005fc673
    PUSH EDX                            ; 005fc675
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fc676
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0xbf94]        ; 005fc67b
    FLDZ                                ; 005fc681
    ADD ESP,0xc                         ; 005fc683
    FCOMPP                              ; 005fc686
    FNSTSW AX                           ; 005fc688
    SAHF                                ; 005fc68a
    JC 0x005fc5f9                       ; 005fc68b
        ;   XREF to: 005fc5f9 (CONDITIONAL_JUMP)  ; LAB_005fc5f9
    MOV ECX,dword ptr [EBX + 0xbf9c]    ; 005fc691
    PUSH ECX                            ; 005fc697
    MOV dword ptr [EBX + 0xbf94],0x40000000 ; 005fc698
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005fc6a2
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005fc6a7
    TEST EAX,EAX                        ; 005fc6aa
    JNZ 0x005fc5f9                      ; 005fc6ac
        ;   XREF to: 005fc5f9 (CONDITIONAL_JUMP)  ; LAB_005fc5f9
    CMP dword ptr [EBX + 0xbf48],0x0    ; 005fc6b2
    JZ 0x005fc6e1                       ; 005fc6b9
        ;   XREF to: 005fc6e1 (CONDITIONAL_JUMP)  ; LAB_005fc6e1
    PUSH 0x658a07                       ; 005fc6bb | = "f-zombie-hit?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fc6c0
    PUSH EBX                            ; 005fc6c6
    CALL dword ptr [EAX + 0x24]         ; 005fc6c7
    ADD ESP,0x8                         ; 005fc6ca
    MOV dword ptr [EBX + 0xbf9c],EAX    ; 005fc6cd
    PUSH EDI                            ; 005fc6d3
    PUSH EBX                            ; 005fc6d4
    CALL core_enemy.cpp_FUN_004a9f10    ; 005fc6d5
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 005fc6da
    POP EBP                             ; 005fc6dd
    POP EDI                             ; 005fc6de
    POP EBX                             ; 005fc6df
    RET                                 ; 005fc6e0
    PUSH 0x658a19                       ; 005fc6e1 | = "zom-s0?.wav"
        ;   Label: LAB_005fc6e1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fc6e6
    PUSH EBX                            ; 005fc6ec
    CALL dword ptr [EAX + 0x24]         ; 005fc6ed
    ADD ESP,0x8                         ; 005fc6f0
    MOV dword ptr [EBX + 0xbf9c],EAX    ; 005fc6f3
    PUSH EDI                            ; 005fc6f9
    PUSH EBX                            ; 005fc6fa
    CALL core_enemy.cpp_FUN_004a9f10    ; 005fc6fb
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 005fc700
    POP EBP                             ; 005fc703
    POP EDI                             ; 005fc704
    POP EBX                             ; 005fc705
    RET                                 ; 005fc706

