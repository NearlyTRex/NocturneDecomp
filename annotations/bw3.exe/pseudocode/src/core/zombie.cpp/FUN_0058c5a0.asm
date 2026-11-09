; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058c5a0(CZombie *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   undefined4 s_lookForHead_005d890e+1
;   TerminatedCString s_f_zombie_die_wav_005d891b
;   TerminatedCString s_zom_d0_wav_005d892d
;   TerminatedCString s_f_zombie_hit_wav_005d8939
;   TerminatedCString s_zom_s0_wav_005d894b
;
; Called Functions:
;   core_enemy.cpp_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_motion.cpp_FUN_004fb9c0
;   core_motion.cpp_FUN_004fc310
;   core_zombie.cpp_FUN_0058be30
;   core_zombie.cpp_FUN_0058c330
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058c5a0
        ;   Label: core_zombie.cpp_FUN_0058c5a0
    PUSH ESI                            ; 0058c5a1
    PUSH EDI                            ; 0058c5a2
    PUSH EBP                            ; 0058c5a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058c5a4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058c5a8
    PUSH EDI                            ; 0058c5ac
    PUSH EBX                            ; 0058c5ad
    CALL core_zombie.cpp_FUN_0058c330   ; 0058c5ae
        ;   XREF to: 0058c330 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058c330(CZombie * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0058c5b3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c5b6
    PUSH EBX                            ; 0058c5bc
    CALL dword ptr [EAX + 0xf8]         ; 0058c5bd
    FLD float ptr [EDI + 0x4]           ; 0058c5c3
    FSUBR float ptr [EBX + 0x2538]      ; 0058c5c6
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 0058c5cc
    FSTP float ptr [EBX + 0x2538]       ; 0058c5d2
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058c5d8
    ADD ESP,0x4                         ; 0058c5df
    TEST EDX,EDX                        ; 0058c5e2
    JZ 0x0058c644                       ; 0058c5e4
        ;   XREF to: 0058c644 (CONDITIONAL_JUMP)  ; LAB_0058c644
    FLD float ptr [EBX + 0x2538]        ; 0058c5e6
        ;   Label: LAB_0058c5e6
    FLDZ                                ; 0058c5ec
    LEA ESI,[EBX + 0x158]               ; 0058c5ee
    MOV dword ptr [EBX + 0xcde0],0x3f99999a ; 0058c5f4
    FCOMPP                              ; 0058c5fe
    FNSTSW AX                           ; 0058c600
    SAHF                                ; 0058c602
    JNC 0x0058c64c                      ; 0058c603
        ;   XREF to: 0058c64c (CONDITIONAL_JUMP)  ; LAB_0058c64c
    PUSH dword ptr [EDI + 0x4]          ; 0058c605
    PUSH EBX                            ; 0058c608
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 0058c609
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 0058c60e
    TEST EAX,EAX                        ; 0058c611
    JZ 0x0058c622                       ; 0058c613
        ;   XREF to: 0058c622 (CONDITIONAL_JUMP)  ; LAB_0058c622
    PUSH 0x1                            ; 0058c615
    PUSH 0x6                            ; 0058c617
    PUSH ESI                            ; 0058c619
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058c61a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c61f
    FLD float ptr [EBX + 0xd130]        ; 0058c622
        ;   Label: LAB_0058c622
    FLDZ                                ; 0058c628
    FCOMPP                              ; 0058c62a
    FNSTSW AX                           ; 0058c62c
    SAHF                                ; 0058c62e
    JNC 0x0058c74c                      ; 0058c62f
        ;   XREF to: 0058c74c (CONDITIONAL_JUMP)  ; LAB_0058c74c
    PUSH EDI                            ; 0058c635
        ;   Label: LAB_0058c635
    PUSH EBX                            ; 0058c636
    CALL core_enemy.cpp_FUN_00489b80    ; 0058c637
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058c63c
    POP EBP                             ; 0058c63f
    POP EDI                             ; 0058c640
    POP ESI                             ; 0058c641
    POP EBX                             ; 0058c642
    RET                                 ; 0058c643
    MOV dword ptr [EBX + 0x2538],EDX    ; 0058c644
        ;   Label: LAB_0058c644
    JMP 0x0058c5e6                      ; 0058c64a
        ;   XREF to: 0058c5e6 (UNCONDITIONAL_JUMP)  ; LAB_0058c5e6
    PUSH ESI                            ; 0058c64c
        ;   Label: LAB_0058c64c
    MOV dword ptr [EBX + 0x2538],0x0    ; 0058c64d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058c657
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058c65c
    ADD ESP,0x4                         ; 0058c65f
    CMP EAX,0x9                         ; 0058c662
    JZ 0x0058c635                       ; 0058c665
        ;   XREF to: 0058c635 (CONDITIONAL_JUMP)  ; LAB_0058c635
    CMP EAX,0x8                         ; 0058c667
    JZ 0x0058c635                       ; 0058c66a
        ;   XREF to: 0058c635 (CONDITIONAL_JUMP)  ; LAB_0058c635
    CMP EAX,0x15                        ; 0058c66c
    JZ 0x0058c635                       ; 0058c66f
        ;   XREF to: 0058c635 (CONDITIONAL_JUMP)  ; LAB_0058c635
    PUSH EBX                            ; 0058c671
    CALL core_zombie.cpp_FUN_0058be30   ; 0058c672
        ;   XREF to: 0058be30 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058be30(CZombie * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 0058c677
    MOV ESI,0x7                         ; 0058c67d
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058c682
    ADD ESP,0x4                         ; 0058c689
    TEST EBP,EBP                        ; 0058c68c
    JNZ 0x0058c6cc                      ; 0058c68e
        ;   XREF to: 0058c6cc (CONDITIONAL_JUMP)  ; LAB_0058c6cc
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 0058c690
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058c696
    JZ 0x0058c72f                       ; 0058c69e
        ;   XREF to: 0058c72f (CONDITIONAL_JUMP)  ; LAB_0058c72f
    PUSH 0x0                            ; 0058c6a4
        ;   Label: LAB_0058c6a4
    PUSH 0x5d890f                       ; 0058c6a6 | s_lookForHead_005d890e+1
    LEA EAX,[EBX + 0x158]               ; 0058c6ab
    PUSH EAX                            ; 0058c6b1
    CALL core_motion.cpp_FUN_004fc310   ; 0058c6b2
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0058c6b7
    PUSH EAX                            ; 0058c6ba
    CALL core_motion.cpp_FUN_004fb9c0   ; 0058c6bb
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0058c6c0
    TEST EAX,EAX                        ; 0058c6c3
    JL 0x0058c6cc                       ; 0058c6c5
        ;   XREF to: 0058c6cc (CONDITIONAL_JUMP)  ; LAB_0058c6cc
    MOV ESI,0xa                         ; 0058c6c7
    PUSH 0x1                            ; 0058c6cc
        ;   Label: LAB_0058c6cc
    PUSH ESI                            ; 0058c6ce
    LEA EAX,[EBX + 0x158]               ; 0058c6cf
    PUSH EAX                            ; 0058c6d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058c6d6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c6db
    MOV ESI,dword ptr [EBX + 0xd138]    ; 0058c6de
    PUSH ESI                            ; 0058c6e4
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0058c6e5
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV EBP,dword ptr [EBX + 0xd0e0]    ; 0058c6ea
    ADD ESP,0x4                         ; 0058c6f0
    TEST EBP,EBP                        ; 0058c6f3
    JZ 0x0058c745                       ; 0058c6f5
        ;   XREF to: 0058c745 (CONDITIONAL_JUMP)  ; LAB_0058c745
    PUSH 0x5d891b                       ; 0058c6f7 | = "f-zombie-die?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c6fc
        ;   Label: LAB_0058c6fc
    PUSH EBX                            ; 0058c702
    CALL dword ptr [EAX + 0x2c]         ; 0058c703
    ADD ESP,0x8                         ; 0058c706
    PUSH 0x41c80000                     ; 0058c709
    PUSH 0x32                           ; 0058c70e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c710
    PUSH EBX                            ; 0058c716
    CALL dword ptr [EAX + 0xa8]         ; 0058c717
    ADD ESP,0xc                         ; 0058c71d
    PUSH EDI                            ; 0058c720
    PUSH EBX                            ; 0058c721
    CALL core_enemy.cpp_FUN_00489b80    ; 0058c722
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058c727
    POP EBP                             ; 0058c72a
    POP EDI                             ; 0058c72b
    POP ESI                             ; 0058c72c
    POP EBX                             ; 0058c72d
    RET                                 ; 0058c72e
    MOV EAX,dword ptr [EBX + 0xd114]    ; 0058c72f
        ;   Label: LAB_0058c72f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058c735
    JNZ 0x0058c6a4                      ; 0058c73d
        ;   XREF to: 0058c6a4 (CONDITIONAL_JUMP)  ; LAB_0058c6a4
    JMP 0x0058c6cc                      ; 0058c743
        ;   XREF to: 0058c6cc (UNCONDITIONAL_JUMP)  ; LAB_0058c6cc
    PUSH 0x5d892d                       ; 0058c745 | = "zom-d0?.wav"
        ;   Label: LAB_0058c745
    JMP 0x0058c6fc                      ; 0058c74a
        ;   XREF to: 0058c6fc (UNCONDITIONAL_JUMP)  ; LAB_0058c6fc
    MOV ECX,dword ptr [EBX + 0xd138]    ; 0058c74c
        ;   Label: LAB_0058c74c
    PUSH ECX                            ; 0058c752
    MOV dword ptr [EBX + 0xd130],0x40000000 ; 0058c753
    CALL sound_sndmain.cpp_FUN_00556700 ; 0058c75d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0058c762
    TEST EAX,EAX                        ; 0058c765
    JNZ 0x0058c635                      ; 0058c767
        ;   XREF to: 0058c635 (CONDITIONAL_JUMP)  ; LAB_0058c635
    CMP dword ptr [EBX + 0xd0e0],0x0    ; 0058c76d
    JZ 0x0058c79d                       ; 0058c774
        ;   XREF to: 0058c79d (CONDITIONAL_JUMP)  ; LAB_0058c79d
    PUSH 0x5d8939                       ; 0058c776 | = "f-zombie-hit?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c77b
    PUSH EBX                            ; 0058c781
    CALL dword ptr [EAX + 0x2c]         ; 0058c782
    ADD ESP,0x8                         ; 0058c785
    MOV dword ptr [EBX + 0xd138],EAX    ; 0058c788
    PUSH EDI                            ; 0058c78e
    PUSH EBX                            ; 0058c78f
    CALL core_enemy.cpp_FUN_00489b80    ; 0058c790
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058c795
    POP EBP                             ; 0058c798
    POP EDI                             ; 0058c799
    POP ESI                             ; 0058c79a
    POP EBX                             ; 0058c79b
    RET                                 ; 0058c79c
    PUSH 0x5d894b                       ; 0058c79d | = "zom-s0?.wav"
        ;   Label: LAB_0058c79d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c7a2
    PUSH EBX                            ; 0058c7a8
    CALL dword ptr [EAX + 0x2c]         ; 0058c7a9
    ADD ESP,0x8                         ; 0058c7ac
    MOV dword ptr [EBX + 0xd138],EAX    ; 0058c7af
    PUSH EDI                            ; 0058c7b5
    PUSH EBX                            ; 0058c7b6
    CALL core_enemy.cpp_FUN_00489b80    ; 0058c7b7
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058c7bc
    POP EBP                             ; 0058c7bf
    POP EDI                             ; 0058c7c0
    POP ESI                             ; 0058c7c1
    POP EBX                             ; 0058c7c2
    RET                                 ; 0058c7c3

