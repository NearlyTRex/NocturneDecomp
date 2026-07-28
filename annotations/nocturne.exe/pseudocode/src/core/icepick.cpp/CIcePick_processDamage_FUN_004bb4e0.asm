; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_CIcePick_processDamage_FUN_004bb4e0(CCharacter *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_icepick_die01_wav_00586255
;   TerminatedCString s_icepick_injured_wav_00586267
;   float FLOAT_0059f3d8 = 3
;   undefined4 DAT_005b9354
;   int INT_005b96c4 = 0x1c78c7c
;   undefined4 DAT_01c777bc
;   undefined4 DAT_01c77818
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb4e0
        ;   Label: core_icepick.cpp_CIcePick_processDamage_FUN_004bb4e0
    PUSH ESI                            ; 004bb4e1
    PUSH EDI                            ; 004bb4e2
    PUSH EBP                            ; 004bb4e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004bb4e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bb4e8
    MOV EDX,dword ptr [EBX + 0x1fa44]   ; 004bb4ec
    PUSH EDX                            ; 004bb4f2
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004bb4f3
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xbc8c]    ; 004bb4f8
    ADD ESP,0x4                         ; 004bb4fe
    TEST ECX,0x7fffffff                 ; 004bb501
    JNZ 0x004bb5aa                      ; 004bb507
        ;   XREF to: 004bb5aa (CONDITIONAL_JUMP)  ; LAB_004bb5aa
    MOV EAX,[0x005b9354]                ; 004bb50d | DAT_005b9354
        ;   Label: LAB_004bb50d
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004bb512 | DAT_01c777bc
    JZ 0x004bb522                       ; 004bb519
        ;   XREF to: 004bb522 (CONDITIONAL_JUMP)  ; LAB_004bb522
    MOV dword ptr [EDI + 0x4],0x0       ; 004bb51b
    MOV EAX,[0x005b9354]                ; 004bb522 | DAT_005b9354
        ;   Label: LAB_004bb522
    MOV EBP,dword ptr [EAX + 0x22c]     ; 004bb527 | DAT_01c77818
    TEST EBP,EBP                        ; 004bb52d
    JZ 0x004bb5b6                       ; 004bb52f
        ;   XREF to: 004bb5b6 (CONDITIONAL_JUMP)  ; LAB_004bb5b6
    MOV EAX,[0x0059f3d8]                ; 004bb535 | FLOAT_0059f3d8
        ;   Label: LAB_004bb535
    MOV dword ptr [EBX + 0xbc8c],EAX    ; 004bb53a
    FLD float ptr [EDI + 0x4]           ; 004bb540
    FSUBR float ptr [EBX + 0x2434]      ; 004bb543
    LEA ESI,[EBX + 0x150]               ; 004bb549
    FST float ptr [EBX + 0x2434]        ; 004bb54f
    FLDZ                                ; 004bb555
    FCOMPP                              ; 004bb557
    FNSTSW AX                           ; 004bb559
    SAHF                                ; 004bb55b
    JNC 0x004bb5be                      ; 004bb55c
        ;   XREF to: 004bb5be (CONDITIONAL_JUMP)  ; LAB_004bb5be
    FLD float ptr [EDI + 0x4]           ; 004bb55e
    FLDZ                                ; 004bb561
    FCOMPP                              ; 004bb563
    FNSTSW AX                           ; 004bb565
    SAHF                                ; 004bb567
    JNC 0x004bb59b                      ; 004bb568
        ;   XREF to: 004bb59b (CONDITIONAL_JUMP)  ; LAB_004bb59b
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004bb56a
    JNZ 0x004bb65e                      ; 004bb571
        ;   XREF to: 004bb65e (CONDITIONAL_JUMP)  ; LAB_004bb65e
    PUSH 0x1                            ; 004bb577
    PUSH 0x4                            ; 004bb579
    PUSH ESI                            ; 004bb57b
        ;   Label: LAB_004bb57b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bb57c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004bb581
    MOV EDX,dword ptr [EBX + 0x1fa48]   ; 004bb584
    PUSH EDX                            ; 004bb58a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bb58b
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004bb590
    TEST EAX,EAX                        ; 004bb593
    JZ 0x004bb667                       ; 004bb595
        ;   XREF to: 004bb667 (CONDITIONAL_JUMP)  ; LAB_004bb667
    PUSH EDI                            ; 004bb59b
        ;   Label: LAB_004bb59b
    PUSH EBX                            ; 004bb59c
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004bb59d
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00428510(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004bb5a2
    POP EBP                             ; 004bb5a5
    POP EDI                             ; 004bb5a6
    POP ESI                             ; 004bb5a7
    POP EBX                             ; 004bb5a8
    RET                                 ; 004bb5a9
    MOV dword ptr [EDI + 0x4],0x0       ; 004bb5aa
        ;   Label: LAB_004bb5aa
    JMP 0x004bb50d                      ; 004bb5b1
        ;   XREF to: 004bb50d (UNCONDITIONAL_JUMP)  ; LAB_004bb50d
    MOV dword ptr [EDI + 0x4],EBP       ; 004bb5b6
        ;   Label: LAB_004bb5b6
    JMP 0x004bb535                      ; 004bb5b9
        ;   XREF to: 004bb535 (UNCONDITIONAL_JUMP)  ; LAB_004bb535
    PUSH ESI                            ; 004bb5be
        ;   Label: LAB_004bb5be
    MOV dword ptr [EBX + 0x2434],0x0    ; 004bb5bf
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004bb5c9
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004bb5ce
    ADD ESP,0x4                         ; 004bb5d1
    CMP EAX,0x9                         ; 004bb5d4
    JZ 0x004bb59b                       ; 004bb5d7
        ;   XREF to: 004bb59b (CONDITIONAL_JUMP)  ; LAB_004bb59b
    PUSH ESI                            ; 004bb5d9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004bb5da
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004bb5df
    ADD ESP,0x4                         ; 004bb5e2
    CMP EAX,0x8                         ; 004bb5e5
    JZ 0x004bb59b                       ; 004bb5e8
        ;   XREF to: 004bb59b (CONDITIONAL_JUMP)  ; LAB_004bb59b
    PUSH 0x1                            ; 004bb5ea
    PUSH 0x8                            ; 004bb5ec
    PUSH ESI                            ; 004bb5ee
    MOV dword ptr [EBX + 0x2590],0x0    ; 004bb5ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bb5f9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004bb5fe
    PUSH 0x0                            ; 004bb601
    PUSH 0x1                            ; 004bb603
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bb605
    PUSH EBX                            ; 004bb60b
    CALL dword ptr [EAX + 0x120]        ; 004bb60c
    ADD ESP,0xc                         ; 004bb612
    PUSH 0x0                            ; 004bb615
    PUSH 0x42480000                     ; 004bb617
    PUSH 0x32                           ; 004bb61c
    PUSH EBX                            ; 004bb61e
    MOV ECX,dword ptr [0x005b96c4]      ; 004bb61f | INT_005b96c4
    PUSH ECX                            ; 004bb625
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 ; 004bb626
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 004bb62b
    MOV ESI,dword ptr [EBX + 0x1fa48]   ; 004bb62e
    PUSH ESI                            ; 004bb634
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004bb635
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 004bb63a
    PUSH 0x586255                       ; 004bb63d | = "icepick_die01.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bb642
    PUSH EBX                            ; 004bb648
    CALL dword ptr [EAX + 0x24]         ; 004bb649
    ADD ESP,0x8                         ; 004bb64c
    PUSH EDI                            ; 004bb64f
    PUSH EBX                            ; 004bb650
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004bb651
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00428510(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004bb656
    POP EBP                             ; 004bb659
    POP EDI                             ; 004bb65a
    POP ESI                             ; 004bb65b
    POP EBX                             ; 004bb65c
    RET                                 ; 004bb65d
    PUSH 0x1                            ; 004bb65e
        ;   Label: LAB_004bb65e
    PUSH 0xb                            ; 004bb660
    JMP 0x004bb57b                      ; 004bb662
        ;   XREF to: 004bb57b (UNCONDITIONAL_JUMP)  ; LAB_004bb57b
    PUSH 0x586267                       ; 004bb667 | = "icepick_injured??.wav"
        ;   Label: LAB_004bb667
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bb66c
    PUSH EBX                            ; 004bb672
    CALL dword ptr [EAX + 0x24]         ; 004bb673
    ADD ESP,0x8                         ; 004bb676
    MOV dword ptr [EBX + 0x1fa48],EAX   ; 004bb679
    PUSH EDI                            ; 004bb67f
    PUSH EBX                            ; 004bb680
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004bb681
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00428510(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004bb686
    POP EBP                             ; 004bb689
    POP EDI                             ; 004bb68a
    POP ESI                             ; 004bb68b
    POP EBX                             ; 004bb68c
    RET                                 ; 004bb68d

