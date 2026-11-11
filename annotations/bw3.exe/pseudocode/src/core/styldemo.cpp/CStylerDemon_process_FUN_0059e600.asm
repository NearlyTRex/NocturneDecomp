; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0059e58c = 0059ff12
;   TerminatedCString s_CExorcism_005da20e
;   TerminatedCString s_Bible_005da218
;   undefined4 s_ible_005da218+1
;   undefined4 s_ble_005da218+2
;   undefined4 s_le_005da218+3
;   TerminatedCString s_CZombie_005da21e
;   undefined1 DAT_005da226
;   undefined1 DAT_005da227
;   undefined1 DAT_005da228
;   undefined1 DAT_005da229
;   TerminatedCString s_newzomb1_dfm_005da22e
;   TerminatedCString s_stand_005da23b
;   TerminatedCString s_CZombie_005da241
;   undefined1 DAT_005da249
;   ... and 63 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e600
        ;   Label: core_styldemo.cpp_CStylerDemon_process_FUN_0059e600
    PUSH ESI                            ; 0059e601
    PUSH EDI                            ; 0059e602
    PUSH EBP                            ; 0059e603
    MOV EBP,ESP                         ; 0059e604
    SUB ESP,0x35c                       ; 0059e606
    SUB EBP,0x7a                        ; 0059e60c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0059e60f
    PUSH dword ptr [EBP + 0x92]         ; 0059e615
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059e61b
    PUSH EBX                            ; 0059e621
    CALL dword ptr [EAX + 0x148]        ; 0059e622
    ADD ESP,0x8                         ; 0059e628
    TEST EAX,EAX                        ; 0059e62b
    JZ 0x0059e90c                       ; 0059e62d
        ;   XREF to: 0059e90c (CONDITIONAL_JUMP)  ; LAB_0059e90c
    CMP dword ptr [EBX + 0xdca0],0x0    ; 0059e633
    JNZ 0x0059e778                      ; 0059e63a
        ;   XREF to: 0059e778 (CONDITIONAL_JUMP)  ; LAB_0059e778
    PUSH 0x5da20e                       ; 0059e640 | = "CExorcism"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059e645
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0059e64a
    MOV dword ptr [EBX + 0xdd14],EAX    ; 0059e64d
    PUSH EAX                            ; 0059e653
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059e654
    CALL dword ptr [EDX]                ; 0059e65a
    ADD ESP,0x4                         ; 0059e65c
    MOV ESI,0x5da218                    ; 0059e65f | = "Bible"
    MOV EDI,dword ptr [EBX + 0xdd14]    ; 0059e664
    PUSH EDI                            ; 0059e66a
    MOV AL,byte ptr [ESI]               ; 0059e66b | = "Bible" | s_ble_005da218+2
        ;   Label: LAB_0059e66b
    MOV byte ptr [EDI],AL               ; 0059e66d
    CMP AL,0x0                          ; 0059e66f
    JZ 0x0059e683                       ; 0059e671
        ;   XREF to: 0059e683 (CONDITIONAL_JUMP)  ; LAB_0059e683
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e673 | s_ible_005da218+1 | s_le_005da218+3
    ADD ESI,0x2                         ; 0059e676
    MOV byte ptr [EDI + 0x1],AL         ; 0059e679
    ADD EDI,0x2                         ; 0059e67c
    CMP AL,0x0                          ; 0059e67f
    JNZ 0x0059e66b                      ; 0059e681
        ;   XREF to: 0059e66b (CONDITIONAL_JUMP)  ; LAB_0059e66b
    POP EDI                             ; 0059e683
        ;   Label: LAB_0059e683
    MOV ECX,dword ptr [EBX + 0xdd14]    ; 0059e684
    PUSH ECX                            ; 0059e68a
    MOV ESI,dword ptr [0x00600530]      ; 0059e68b | DAT_00600530
    PUSH ESI                            ; 0059e691 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059e692
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    MOV EDI,dword ptr [EBX + 0xdd14]    ; 0059e697
    ADD ESP,0x8                         ; 0059e69d
    TEST EDI,EDI                        ; 0059e6a0
    JZ 0x0059e6be                       ; 0059e6a2
        ;   XREF to: 0059e6be (CONDITIONAL_JUMP)  ; LAB_0059e6be
    MOV dword ptr [EDI + 0xfc],0x1      ; 0059e6a4
    MOV EAX,dword ptr [EBX + 0xdd14]    ; 0059e6ae
    MOV dword ptr [EAX + 0xf8],0x0      ; 0059e6b4
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 0059e6be
        ;   Label: LAB_0059e6be
    PUSH EAX                            ; 0059e6c4
    LEA EAX,[EBX + 0x158]               ; 0059e6c5
    PUSH EAX                            ; 0059e6cb
    LEA ESI,[EBP + 0xfffffec2]          ; 0059e6cc
    LEA EDI,[EBP + -0x12]               ; 0059e6d2
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0059e6d5
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0059e6da
    LEA EAX,[EBP + -0x12]               ; 0059e6dd
    LEA ESI,[EBP + 0xfffffec2]          ; 0059e6e0
    PUSH EAX                            ; 0059e6e6
    MOVSD ES:EDI,ESI                    ; 0059e6e7
    MOVSD ES:EDI,ESI                    ; 0059e6e8
    MOVSD ES:EDI,ESI                    ; 0059e6e9
    PUSH EBX                            ; 0059e6ea
    LEA ESI,[EBP + 0xfffffece]          ; 0059e6eb
    LEA EDI,[EBP + 0xffffff3a]          ; 0059e6f1
    CALL core_actor.cpp_FUN_00408b80    ; 0059e6f7
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffece]          ; 0059e6fc
    MOVSD ES:EDI,ESI                    ; 0059e702
    MOVSD ES:EDI,ESI                    ; 0059e703
    MOVSD ES:EDI,ESI                    ; 0059e704
    MOV EDX,dword ptr [EBX + 0xdd14]    ; 0059e705
    MOV EAX,dword ptr [EBP + 0xffffff3a] ; 0059e70b
    MOV dword ptr [EDX + 0x20],EAX      ; 0059e711
    MOV EAX,dword ptr [EBP + 0xffffff3e] ; 0059e714
    MOV dword ptr [EDX + 0x24],EAX      ; 0059e71a
    MOV EAX,dword ptr [EBP + 0xffffff42] ; 0059e71d
    MOV dword ptr [EDX + 0x28],EAX      ; 0059e723
    MOV EAX,dword ptr [EBX + 0xdd14]    ; 0059e726
    LEA EDX,[EBX + 0x30]                ; 0059e72c
    ADD EAX,0x30                        ; 0059e72f
    ADD ESP,0x8                         ; 0059e732
    CMP EAX,EDX                         ; 0059e735
    JZ 0x0059e749                       ; 0059e737
        ;   XREF to: 0059e749 (CONDITIONAL_JUMP)  ; LAB_0059e749
    MOV ECX,dword ptr [EDX]             ; 0059e739
    MOV dword ptr [EAX],ECX             ; 0059e73b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059e73d
    MOV dword ptr [EAX + 0x4],ECX       ; 0059e740
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059e743
    MOV dword ptr [EAX + 0x8],ECX       ; 0059e746
    MOV EDX,dword ptr [EBX + 0xdd14]    ; 0059e749
        ;   Label: LAB_0059e749
    PUSH EDX                            ; 0059e74f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0059e750
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059e755
    PUSH 0x0                            ; 0059e758
    MOV ECX,dword ptr [EBX + 0xdd14]    ; 0059e75a
    PUSH 0x0                            ; 0059e760
    PUSH ECX                            ; 0059e762
    PUSH 0x0                            ; 0059e763
    PUSH EBX                            ; 0059e765
    CALL core_charactr.cpp_FUN_004319d0 ; 0059e766
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 0059e76b
    MOV dword ptr [EBX + 0xdca0],0x1    ; 0059e76e
    PUSH dword ptr [EBP + 0x92]         ; 0059e778
        ;   Label: LAB_0059e778
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059e77e
    PUSH EBX                            ; 0059e784
    CALL dword ptr [EAX + 0x144]        ; 0059e785
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0059e78b
    ADD ESP,0x8                         ; 0059e791
    TEST ESI,ESI                        ; 0059e794
    JZ 0x0059e8b4                       ; 0059e796
        ;   XREF to: 0059e8b4 (CONDITIONAL_JUMP)  ; LAB_0059e8b4
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0059e79c
        ;   Label: LAB_0059e79c
    TEST EDI,EDI                        ; 0059e7a2
    JZ 0x0059e90c                       ; 0059e7a4
        ;   XREF to: 0059e90c (CONDITIONAL_JUMP)  ; LAB_0059e90c
    LEA EAX,[EBX + 0x20]                ; 0059e7aa
    LEA ESI,[EBP + 0xfffffe02]          ; 0059e7ad
    LEA EDX,[EBP + -0x4e]               ; 0059e7b3
    FLD float ptr [EAX + 0x4]           ; 0059e7b6
    FLD float ptr [EAX + 0x8]           ; 0059e7b9
    FLD float ptr [EAX]                 ; 0059e7bc
    LEA EAX,[EBP + 0xfffffdde]          ; 0059e7be
    FSUB float ptr [EDI + 0x20]         ; 0059e7c4
    FXCH ST2                            ; 0059e7c7
    FSUB float ptr [EDI + 0x24]         ; 0059e7c9
    FXCH                                ; 0059e7cc
    FSUB float ptr [EDI + 0x28]         ; 0059e7ce
    FXCH ST2                            ; 0059e7d1
    FSTP float ptr [EBP + 0xfffffe02]   ; 0059e7d3
    FSTP float ptr [EBP + 0xfffffe06]   ; 0059e7d9
    LEA EDI,[EBP + -0x4e]               ; 0059e7df
    FSTP float ptr [EBP + 0xfffffe0a]   ; 0059e7e2
    MOVSD ES:EDI,ESI                    ; 0059e7e8
    MOVSD ES:EDI,ESI                    ; 0059e7e9
    MOVSD ES:EDI,ESI                    ; 0059e7ea
    CMP EAX,EDX                         ; 0059e7eb
    JNZ 0x0059e914                      ; 0059e7ed
        ;   XREF to: 0059e914 (CONDITIONAL_JUMP)  ; LAB_0059e914
    FLD float ptr [EBP + 0xfffffde2]    ; 0059e7f3
        ;   Label: LAB_0059e7f3
    FMUL ST0                            ; 0059e7f9
    FLD float ptr [EBP + 0xfffffdde]    ; 0059e7fb
    FMUL ST0                            ; 0059e801
    FADDP                               ; 0059e803
    FLD float ptr [EBP + 0xfffffde6]    ; 0059e805
    FMUL ST0                            ; 0059e80b
    FADDP                               ; 0059e80d
    FSTP float ptr [EBP + 0x26]         ; 0059e80f
    MOV EAX,dword ptr [EBP + 0x26]      ; 0059e812
    MOV EDX,dword ptr [0x01d1a0a4]      ; 0059e815 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059e81b
    ADD EAX,EDX                         ; 0059e81d
    MOV dword ptr [EBP + 0x66],EAX      ; 0059e81f
    LEA EAX,[EBX + 0x249c]              ; 0059e822
    MOV dword ptr [EAX + 0x8],0x0       ; 0059e828
    FLD float ptr [EBP + 0x92]          ; 0059e82f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059e835
    MOV dword ptr [EAX + 0x4],EDX       ; 0059e838
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059e83b
    MOV dword ptr [EAX],EDX             ; 0059e83e
    LEA EAX,[EBX + 0x30]                ; 0059e840
    FMUL float ptr [EBX + 0xcdcc]       ; 0059e843
    MOV dword ptr [EBP + 0x6e],EAX      ; 0059e849
    LEA EAX,[EBX + 0x158]               ; 0059e84c
    FSTP float ptr [EBP + 0x22]         ; 0059e852
    MOV dword ptr [EBP + 0x6a],EAX      ; 0059e855
    FLD float ptr [EBP + 0x22]          ; 0059e858
        ;   Label: LAB_0059e858
    FLDZ                                ; 0059e85b
    FCOMPP                              ; 0059e85d
    FNSTSW AX                           ; 0059e85f
    SAHF                                ; 0059e861
    JNC 0x0059f3e8                      ; 0059e862
        ;   XREF to: 0059f3e8 (CONDITIONAL_JUMP)  ; LAB_0059f3e8
    LEA EAX,[EBP + 0x22]                ; 0059e868
    PUSH EAX                            ; 0059e86b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0059e86c
    PUSH EAX                            ; 0059e86f
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0059e870
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 0059e875
    ADD ESP,0x8                         ; 0059e877
    MOV ESI,EAX                         ; 0059e87a
    CMP EAX,0x583                       ; 0059e87c
    JNC 0x0059f193                      ; 0059e881
        ;   XREF to: 0059f193 (CONDITIONAL_JUMP)  ; LAB_0059f193
    CMP EAX,0x57b                       ; 0059e887
    JNC 0x0059f2c1                      ; 0059e88c
        ;   XREF to: 0059f2c1 (CONDITIONAL_JUMP)  ; LAB_0059f2c1
    CMP EAX,0x4b5                       ; 0059e892
    JNC 0x0059f364                      ; 0059e897
        ;   XREF to: 0059f364 (CONDITIONAL_JUMP)  ; LAB_0059f364
    CMP EAX,0x4b2                       ; 0059e89d
    JNC 0x0059f3c8                      ; 0059e8a2
        ;   XREF to: 0059f3c8 (CONDITIONAL_JUMP)  ; LAB_0059f3c8
    PUSH ESI                            ; 0059e8a8
    PUSH EBX                            ; 0059e8a9
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059e8aa
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059e8af
    JMP 0x0059e858                      ; 0059e8b2
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EAX,[0x01d5ba14]                ; 0059e8b4 | DAT_01d5ba14
        ;   Label: LAB_0059e8b4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059e8b9
    PUSH EAX                            ; 0059e8c0
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059e8c1
    CALL dword ptr [EDX + 0x10c]        ; 0059e8c7
    ADD ESP,0x4                         ; 0059e8cd
    TEST EAX,EAX                        ; 0059e8d0
    JZ 0x0059e8fa                       ; 0059e8d2
        ;   XREF to: 0059e8fa (CONDITIONAL_JUMP)  ; LAB_0059e8fa
    MOV EAX,[0x005fe9dc]                ; 0059e8d4 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 0059e8d9 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d5ba14]                ; 0059e8e3 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059e8e8
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0059e8ef
    JMP 0x0059e79c                      ; 0059e8f5
        ;   XREF to: 0059e79c (UNCONDITIONAL_JUMP)  ; LAB_0059e79c
    PUSH 0x1                            ; 0059e8fa
        ;   Label: LAB_0059e8fa
    PUSH ESI                            ; 0059e8fc
    ADD EBX,0x158                       ; 0059e8fd
    PUSH EBX                            ; 0059e903
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059e904
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059e909
    LEA ESP,[EBP + 0x7a]                ; 0059e90c
        ;   Label: LAB_0059e90c
    POP EBP                             ; 0059e90f
    POP EDI                             ; 0059e910
    POP ESI                             ; 0059e911
    POP EBX                             ; 0059e912
    RET                                 ; 0059e913
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0059e914
        ;   Label: LAB_0059e914
    MOV dword ptr [EBP + 0xfffffdde],EAX ; 0059e917
    MOV EAX,dword ptr [EBP + -0x4a]     ; 0059e91d
    MOV dword ptr [EBP + 0xfffffde2],EAX ; 0059e920
    MOV EAX,dword ptr [EBP + -0x46]     ; 0059e926
    MOV dword ptr [EBP + 0xfffffde6],EAX ; 0059e929
    JMP 0x0059e7f3                      ; 0059e92f
        ;   XREF to: 0059e7f3 (UNCONDITIONAL_JUMP)  ; LAB_0059e7f3
    LEA EDI,[EBP + 0xffffff2e]          ; 0059e934
        ;   Label: LAB_0059e934
    PUSH 0x2                            ; 0059e93a
    LEA EAX,[EBP + 0xffffff2e]          ; 0059e93c
    MOV ESI,dword ptr [0x01d5ba14]      ; 0059e942 | DAT_01d5ba14
    PUSH 0x0                            ; 0059e948
    MOV ESI,dword ptr [ESI*0x4 + 0x1d5ba04] ; 0059e94a
    PUSH 0x0                            ; 0059e951
    LEA ESI,[ESI + 0x20]                ; 0059e953
    PUSH 0x40800000                     ; 0059e956
    MOVSD ES:EDI,ESI                    ; 0059e95b
    MOVSD ES:EDI,ESI                    ; 0059e95c
    MOVSD ES:EDI,ESI                    ; 0059e95d
    PUSH EAX                            ; 0059e95e
    FLD float ptr [EBP + 0xffffff32]    ; 0059e95f
    MOV ESI,dword ptr [0x005fc5a0]      ; 0059e965 | DAT_005fc5a0
    FADD float ptr [0x005da4f6]         ; 0059e96b | DAT_005da4f6
    PUSH ESI                            ; 0059e971
    FSTP float ptr [EBP + 0xffffff32]   ; 0059e972
    CALL core_fire.cpp_FUN_004a36e0     ; 0059e978
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a36e0()
    MOV EAX,[0x01d5ba14]                ; 0059e97d | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059e982
    MOV dword ptr [EAX + 0x3254],0x40a00000 ; 0059e989
    MOV EAX,[0x01d5ba14]                ; 0059e993 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059e998
    ADD ESP,0x18                        ; 0059e99f
    MOV dword ptr [EAX + 0x3258],0x3    ; 0059e9a2
    JMP 0x0059e858                      ; 0059e9ac
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EAX,0x5da21e                    ; 0059e9b1 | = "CZombie"
        ;   Label: LAB_0059e9b1
    PUSH EAX                            ; 0059e9b6 | = "CZombie"
    MOV ESI,0x5da226                    ; 0059e9b7 | DAT_005da226
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059e9bc
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    MOV EDX,0x40400000                  ; 0059e9c1
    ADD ESP,0x4                         ; 0059e9c6
    MOV EDI,EAX                         ; 0059e9c9
    MOV dword ptr [EBP + 0x72],EAX      ; 0059e9cb
    PUSH EDI                            ; 0059e9ce
    MOV AL,byte ptr [ESI]               ; 0059e9cf | DAT_005da226 | DAT_005da228
        ;   Label: LAB_0059e9cf
    MOV byte ptr [EDI],AL               ; 0059e9d1
    CMP AL,0x0                          ; 0059e9d3
    JZ 0x0059e9e7                       ; 0059e9d5
        ;   XREF to: 0059e9e7 (CONDITIONAL_JUMP)  ; LAB_0059e9e7
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e9d7 | DAT_005da227 | DAT_005da229
    ADD ESI,0x2                         ; 0059e9da
    MOV byte ptr [EDI + 0x1],AL         ; 0059e9dd
    ADD EDI,0x2                         ; 0059e9e0
    CMP AL,0x0                          ; 0059e9e3
    JNZ 0x0059e9cf                      ; 0059e9e5
        ;   XREF to: 0059e9cf (CONDITIONAL_JUMP)  ; LAB_0059e9cf
    POP EDI                             ; 0059e9e7
        ;   Label: LAB_0059e9e7
    LEA EAX,[EBP + 0xfffffe9e]          ; 0059e9e8
    LEA ESI,[EBP + 0xfffffda2]          ; 0059e9ee
    XOR EDI,EDI                         ; 0059e9f4
    MOV dword ptr [EBP + 0xfffffea6],EDX ; 0059e9f6
    PUSH EAX                            ; 0059e9fc
    MOV dword ptr [EBP + 0xfffffe9e],EDI ; 0059e9fd
    PUSH EBX                            ; 0059ea03
    MOV dword ptr [EBP + 0xfffffea2],EDI ; 0059ea04
    LEA EDI,[EBP + 0xfffffe1a]          ; 0059ea0a
    CALL core_actor.cpp_FUN_00408b80    ; 0059ea10
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffda2]          ; 0059ea15
    MOV EDX,dword ptr [EBP + 0x72]      ; 0059ea1b
    LEA EAX,[EBP + 0xfffffe1a]          ; 0059ea1e
    ADD ESP,0x8                         ; 0059ea24
    MOVSD ES:EDI,ESI                    ; 0059ea27
    MOVSD ES:EDI,ESI                    ; 0059ea28
    MOVSD ES:EDI,ESI                    ; 0059ea29
    ADD EDX,0x30                        ; 0059ea2a
    MOV ECX,dword ptr [EAX]             ; 0059ea2d
    MOV dword ptr [EDX + -0x10],ECX     ; 0059ea2f
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059ea32
    MOV dword ptr [EDX + -0xc],ECX      ; 0059ea35
    FLD float ptr [EAX + 0x8]           ; 0059ea38
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0059ea3b
    FSTP float ptr [EDX + -0x8]         ; 0059ea3e
    CMP EDX,EAX                         ; 0059ea41
    JZ 0x0059ea55                       ; 0059ea43
        ;   XREF to: 0059ea55 (CONDITIONAL_JUMP)  ; LAB_0059ea55
    MOV ECX,dword ptr [EAX]             ; 0059ea45
    MOV dword ptr [EDX],ECX             ; 0059ea47
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059ea49
    MOV dword ptr [EDX + 0x4],ECX       ; 0059ea4c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059ea4f
    MOV dword ptr [EDX + 0x8],ECX       ; 0059ea52
    MOV ESI,dword ptr [EBP + 0x72]      ; 0059ea55
        ;   Label: LAB_0059ea55
    PUSH 0x5da22e                       ; 0059ea58 | = "newzomb1.dfm"
    ADD ESI,0x158                       ; 0059ea5d
    PUSH ESI                            ; 0059ea63
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059ea64
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059ea69
    ADD ESP,0x8                         ; 0059ea6c
    MOV ECX,dword ptr [EBP + 0x72]      ; 0059ea6f
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059ea72
    PUSH ECX                            ; 0059ea7c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059ea7d
    CALL dword ptr [EAX]                ; 0059ea83
    ADD ESP,0x4                         ; 0059ea85
    PUSH 0x1                            ; 0059ea88
    PUSH 0x5da23b                       ; 0059ea8a | = "stand"
    PUSH ESI                            ; 0059ea8f
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059ea90
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059ea95
    PUSH EAX                            ; 0059ea98
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0059ea99
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059ea9e
    PUSH 0x0                            ; 0059eaa1
    PUSH EAX                            ; 0059eaa3
    PUSH ESI                            ; 0059eaa4
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059eaa5
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0059eaaa
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059eaad
    PUSH EAX                            ; 0059eab0
    MOV EDI,dword ptr [0x00600530]      ; 0059eab1 | DAT_00600530
    PUSH EDI                            ; 0059eab7 | DAT_01d81080
    MOV dword ptr [EAX + 0x2538],0x41200000 ; 0059eab8
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059eac2
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059eac7
    PUSH 0x5da241                       ; 0059eaca | = "CZombie"
    MOV ESI,0x5da249                    ; 0059eacf | DAT_005da249
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059ead4
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    MOV dword ptr [EBP + 0x1a],EAX      ; 0059ead9
    ADD ESP,0x4                         ; 0059eadc
    MOV EDI,EAX                         ; 0059eadf
    MOV dword ptr [EBP + 0x72],EAX      ; 0059eae1
    PUSH EDI                            ; 0059eae4
    MOV AL,byte ptr [ESI]               ; 0059eae5 | DAT_005da249 | DAT_005da24b
        ;   Label: LAB_0059eae5
    MOV byte ptr [EDI],AL               ; 0059eae7
    CMP AL,0x0                          ; 0059eae9
    JZ 0x0059eafd                       ; 0059eaeb
        ;   XREF to: 0059eafd (CONDITIONAL_JUMP)  ; LAB_0059eafd
    MOV AL,byte ptr [ESI + 0x1]         ; 0059eaed | DAT_005da24a | DAT_005da24c
    ADD ESI,0x2                         ; 0059eaf0
    MOV byte ptr [EDI + 0x1],AL         ; 0059eaf3
    ADD EDI,0x2                         ; 0059eaf6
    CMP AL,0x0                          ; 0059eaf9
    JNZ 0x0059eae5                      ; 0059eafb
        ;   XREF to: 0059eae5 (CONDITIONAL_JUMP)  ; LAB_0059eae5
    POP EDI                             ; 0059eafd
        ;   Label: LAB_0059eafd
    MOV EAX,0x40400000                  ; 0059eafe
    MOV dword ptr [EBP + 0xfffffe3e],EAX ; 0059eb03
    MOV dword ptr [EBP + 0xfffffe46],EAX ; 0059eb09
    LEA EAX,[EBP + 0xfffffe3e]          ; 0059eb0f
    PUSH EAX                            ; 0059eb15
    XOR EDX,EDX                         ; 0059eb16
    LEA ESI,[EBP + 0xfffffeda]          ; 0059eb18
    PUSH EBX                            ; 0059eb1e
    LEA EDI,[EBP + 0xfffffe6e]          ; 0059eb1f
    MOV dword ptr [EBP + 0xfffffe42],EDX ; 0059eb25
    CALL core_actor.cpp_FUN_00408b80    ; 0059eb2b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffeda]          ; 0059eb30
    MOVSD ES:EDI,ESI                    ; 0059eb36
    MOVSD ES:EDI,ESI                    ; 0059eb37
    MOVSD ES:EDI,ESI                    ; 0059eb38
    MOV EDX,dword ptr [EBP + 0x1a]      ; 0059eb39
    MOV EAX,dword ptr [EBP + 0xfffffe6e] ; 0059eb3c
    MOV dword ptr [EDX + 0x20],EAX      ; 0059eb42
    MOV EAX,dword ptr [EBP + 0xfffffe72] ; 0059eb45
    MOV dword ptr [EDX + 0x24],EAX      ; 0059eb4b
    MOV EAX,dword ptr [EBP + 0xfffffe76] ; 0059eb4e
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0059eb54
    MOV dword ptr [EDX + 0x28],EAX      ; 0059eb57
    LEA EAX,[EDX + 0x30]                ; 0059eb5a
    ADD ESP,0x8                         ; 0059eb5d
    CMP EAX,ESI                         ; 0059eb60
    JZ 0x0059eb76                       ; 0059eb62
        ;   XREF to: 0059eb76 (CONDITIONAL_JUMP)  ; LAB_0059eb76
    MOV EDX,ESI                         ; 0059eb64
    MOV ECX,dword ptr [EDX]             ; 0059eb66
    MOV dword ptr [EAX],ECX             ; 0059eb68
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059eb6a
    MOV dword ptr [EAX + 0x4],ECX       ; 0059eb6d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059eb70
    MOV dword ptr [EAX + 0x8],ECX       ; 0059eb73
    MOV ESI,dword ptr [EBP + 0x72]      ; 0059eb76
        ;   Label: LAB_0059eb76
    PUSH 0x5da251                       ; 0059eb79 | = "newzomb1.dfm"
    ADD ESI,0x158                       ; 0059eb7e
    PUSH ESI                            ; 0059eb84
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059eb85
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059eb8a
    ADD ESP,0x8                         ; 0059eb8d
    MOV EDI,dword ptr [EBP + 0x72]      ; 0059eb90
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059eb93
    PUSH EDI                            ; 0059eb9d
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059eb9e
    CALL dword ptr [EAX]                ; 0059eba4
    ADD ESP,0x4                         ; 0059eba6
    PUSH 0x1                            ; 0059eba9
    PUSH 0x5da25e                       ; 0059ebab | = "stand"
    PUSH ESI                            ; 0059ebb0
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059ebb1
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059ebb6
    PUSH EAX                            ; 0059ebb9
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0059ebba
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059ebbf
    PUSH 0x0                            ; 0059ebc2
    PUSH EAX                            ; 0059ebc4
    PUSH ESI                            ; 0059ebc5
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059ebc6
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0059ebcb
    PUSH EDI                            ; 0059ebce
    MOV EDX,dword ptr [0x00600530]      ; 0059ebcf | DAT_00600530
    PUSH EDX                            ; 0059ebd5 | DAT_01d81080
    MOV dword ptr [EDI + 0x2538],0x41200000 ; 0059ebd6
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059ebe0
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059ebe5
    PUSH 0x5da264                       ; 0059ebe8 | = "CZombie"
    MOV ESI,0x5da26c                    ; 0059ebed | DAT_005da26c
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059ebf2
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    MOV ECX,0xc0400000                  ; 0059ebf7
    MOV dword ptr [EBP + 0x1e],EAX      ; 0059ebfc
    ADD ESP,0x4                         ; 0059ebff
    MOV EDI,EAX                         ; 0059ec02
    MOV dword ptr [EBP + 0x72],EAX      ; 0059ec04
    PUSH EDI                            ; 0059ec07
    MOV AL,byte ptr [ESI]               ; 0059ec08 | DAT_005da26c | DAT_005da26e
        ;   Label: LAB_0059ec08
    MOV byte ptr [EDI],AL               ; 0059ec0a
    CMP AL,0x0                          ; 0059ec0c
    JZ 0x0059ec20                       ; 0059ec0e
        ;   XREF to: 0059ec20 (CONDITIONAL_JUMP)  ; LAB_0059ec20
    MOV AL,byte ptr [ESI + 0x1]         ; 0059ec10 | DAT_005da26d | DAT_005da26f
    ADD ESI,0x2                         ; 0059ec13
    MOV byte ptr [EDI + 0x1],AL         ; 0059ec16
    ADD EDI,0x2                         ; 0059ec19
    CMP AL,0x0                          ; 0059ec1c
    JNZ 0x0059ec08                      ; 0059ec1e
        ;   XREF to: 0059ec08 (CONDITIONAL_JUMP)  ; LAB_0059ec08
    POP EDI                             ; 0059ec20
        ;   Label: LAB_0059ec20
    MOV EDI,0x40400000                  ; 0059ec21
    LEA EAX,[EBP + 0xfffffe56]          ; 0059ec26
    MOV dword ptr [EBP + 0xfffffe56],ECX ; 0059ec2c
    XOR ESI,ESI                         ; 0059ec32
    PUSH EAX                            ; 0059ec34
    MOV dword ptr [EBP + 0xfffffe5a],ESI ; 0059ec35
    MOV dword ptr [EBP + 0xfffffe5e],EDI ; 0059ec3b
    PUSH EBX                            ; 0059ec41
    LEA ESI,[EBP + 0xffffff16]          ; 0059ec42
    LEA EDI,[EBP + 0xffffff22]          ; 0059ec48
    CALL core_actor.cpp_FUN_00408b80    ; 0059ec4e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff16]          ; 0059ec53
    MOVSD ES:EDI,ESI                    ; 0059ec59
    MOVSD ES:EDI,ESI                    ; 0059ec5a
    MOVSD ES:EDI,ESI                    ; 0059ec5b
    MOV EDX,dword ptr [EBP + 0x1e]      ; 0059ec5c
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 0059ec5f
    MOV dword ptr [EDX + 0x20],EAX      ; 0059ec65
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 0059ec68
    MOV dword ptr [EDX + 0x24],EAX      ; 0059ec6e
    MOV EAX,dword ptr [EBP + 0xffffff2a] ; 0059ec71
    MOV dword ptr [EDX + 0x28],EAX      ; 0059ec77
    LEA EAX,[EDX + 0x30]                ; 0059ec7a
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0059ec7d
    ADD ESP,0x8                         ; 0059ec80
    CMP EAX,EDX                         ; 0059ec83
    JNZ 0x0059ed01                      ; 0059ec85
        ;   XREF to: 0059ed01 (CONDITIONAL_JUMP)  ; LAB_0059ed01
    MOV ESI,dword ptr [EBP + 0x72]      ; 0059ec87
        ;   Label: LAB_0059ec87
    PUSH 0x5da274                       ; 0059ec8a | = "newzomb1.dfm"
    ADD ESI,0x158                       ; 0059ec8f
    PUSH ESI                            ; 0059ec95
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059ec96
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059ec9b
    ADD ESP,0x8                         ; 0059ec9e
    MOV ECX,dword ptr [EBP + 0x72]      ; 0059eca1
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059eca4
    PUSH ECX                            ; 0059ecae
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059ecaf
    CALL dword ptr [EAX]                ; 0059ecb5
    ADD ESP,0x4                         ; 0059ecb7
    PUSH 0x1                            ; 0059ecba
    PUSH 0x5da281                       ; 0059ecbc | = "stand"
    PUSH ESI                            ; 0059ecc1
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059ecc2
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059ecc7
    PUSH EAX                            ; 0059ecca
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0059eccb
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059ecd0
    PUSH 0x0                            ; 0059ecd3
    PUSH EAX                            ; 0059ecd5
    PUSH ESI                            ; 0059ecd6
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059ecd7
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0059ecdc
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059ecdf
    PUSH EAX                            ; 0059ece2
    MOV EDI,dword ptr [0x00600530]      ; 0059ece3 | DAT_00600530
    PUSH EDI                            ; 0059ece9 | DAT_01d81080
    MOV dword ptr [EAX + 0x2538],0x41200000 ; 0059ecea
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059ecf4
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059ecf9
    JMP 0x0059e858                      ; 0059ecfc
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EDX]             ; 0059ed01
        ;   Label: LAB_0059ed01
    MOV dword ptr [EAX],ECX             ; 0059ed03
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059ed05
    MOV dword ptr [EAX + 0x4],ECX       ; 0059ed08
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059ed0b
    MOV dword ptr [EAX + 0x8],ECX       ; 0059ed0e
    JMP 0x0059ec87                      ; 0059ed11
        ;   XREF to: 0059ec87 (UNCONDITIONAL_JUMP)  ; LAB_0059ec87
    MOV EAX,[0x01d5ba14]                ; 0059ed16 | DAT_01d5ba14
        ;   Label: LAB_0059ed16
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059ed1b
    MOV dword ptr [EAX + 0x3254],0x41700000 ; 0059ed22
    MOV EAX,[0x01d5ba14]                ; 0059ed2c | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059ed31
    MOV dword ptr [EAX + 0x3258],0x4    ; 0059ed38
    JMP 0x0059e858                      ; 0059ed42
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ed47
        ;   Label: LAB_0059ed47
    PUSH ECX                            ; 0059ed4e
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ed4f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ed54
    TEST EAX,EAX                        ; 0059ed57
    JNZ 0x0059e858                      ; 0059ed59
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da287                    ; 0059ed5f | = "stydem_stand.wav"
    PUSH EDX                            ; 0059ed64 | = "stydem_stand.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059ed65
    PUSH EBX                            ; 0059ed6b
    CALL dword ptr [EDI + 0x2c]         ; 0059ed6c
    ADD ESP,0x8                         ; 0059ed6f
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ed72
    JMP 0x0059e858                      ; 0059ed79
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ed7e
        ;   Label: LAB_0059ed7e
    PUSH EDX                            ; 0059ed85
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ed86
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ed8b
    TEST EAX,EAX                        ; 0059ed8e
    JNZ 0x0059e858                      ; 0059ed90
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da298                    ; 0059ed96 | = "stydem_walk.wav"
    PUSH EDI                            ; 0059ed9b | = "stydem_walk.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059ed9c
    PUSH EBX                            ; 0059eda2
    CALL dword ptr [EDX + 0x2c]         ; 0059eda3
    ADD ESP,0x8                         ; 0059eda6
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059eda9
    JMP 0x0059e858                      ; 0059edb0
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059edb5
        ;   Label: LAB_0059edb5
    PUSH EDI                            ; 0059edbc
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059edbd
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059edc2
    TEST EAX,EAX                        ; 0059edc5
    JNZ 0x0059e858                      ; 0059edc7
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da2b7                    ; 0059edcd | = "stydem_attack.wav"
    PUSH EDI                            ; 0059edd2 | = "stydem_attack.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059edd3
    PUSH EBX                            ; 0059edd9
    CALL dword ptr [EDX + 0x2c]         ; 0059edda
    ADD ESP,0x8                         ; 0059eddd
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ede0
    JMP 0x0059e858                      ; 0059ede7
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059edec
        ;   Label: LAB_0059edec
    PUSH ECX                            ; 0059edf3
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059edf4
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059edf9
    TEST EAX,EAX                        ; 0059edfc
    JNZ 0x0059e858                      ; 0059edfe
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da2c9                    ; 0059ee04 | = "stydem_damage.wav"
    PUSH EDI                            ; 0059ee09 | = "stydem_damage.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059ee0a
    PUSH EBX                            ; 0059ee10
    CALL dword ptr [EDX + 0x2c]         ; 0059ee11
    ADD ESP,0x8                         ; 0059ee14
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ee17
    JMP 0x0059e858                      ; 0059ee1e
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ee23
        ;   Label: LAB_0059ee23
    PUSH EDX                            ; 0059ee2a
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ee2b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ee30
    TEST EAX,EAX                        ; 0059ee33
    JNZ 0x0059e858                      ; 0059ee35
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da2db                    ; 0059ee3b | = "stydem_die.wav"
    PUSH EDI                            ; 0059ee40 | = "stydem_die.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059ee41
    PUSH EBX                            ; 0059ee47
    CALL dword ptr [EDX + 0x2c]         ; 0059ee48
    ADD ESP,0x8                         ; 0059ee4b
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ee4e
    JMP 0x0059e858                      ; 0059ee55
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ee5a
        ;   Label: LAB_0059ee5a
    PUSH EDI                            ; 0059ee61
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ee62
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ee67
    TEST EAX,EAX                        ; 0059ee6a
    JNZ 0x0059e858                      ; 0059ee6c
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da2ff                    ; 0059ee72 | = "stydem_walk_fly.wav"
    PUSH EDX                            ; 0059ee77 | = "stydem_walk_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059ee78
    PUSH EBX                            ; 0059ee7e
    CALL dword ptr [EDI + 0x2c]         ; 0059ee7f
    ADD ESP,0x8                         ; 0059ee82
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ee85
    JMP 0x0059e858                      ; 0059ee8c
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ee91
        ;   Label: LAB_0059ee91
    PUSH ECX                            ; 0059ee98
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ee99
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ee9e
    TEST EAX,EAX                        ; 0059eea1
    JNZ 0x0059e858                      ; 0059eea3
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da313                    ; 0059eea9 | = "stydem_run_fly.wav"
    PUSH EDX                            ; 0059eeae | = "stydem_run_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059eeaf
    PUSH EBX                            ; 0059eeb5
    CALL dword ptr [EDI + 0x2c]         ; 0059eeb6
    ADD ESP,0x8                         ; 0059eeb9
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059eebc
    JMP 0x0059e858                      ; 0059eec3
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059eec8
        ;   Label: LAB_0059eec8
    PUSH EDX                            ; 0059eecf
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059eed0
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059eed5
    TEST EAX,EAX                        ; 0059eed8
    JNZ 0x0059e858                      ; 0059eeda
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da326                    ; 0059eee0 | = "stydem_attack_fly.wav"
    PUSH EDI                            ; 0059eee5 | = "stydem_attack_fly.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059eee6
    PUSH EBX                            ; 0059eeec
    CALL dword ptr [EDX + 0x2c]         ; 0059eeed
    ADD ESP,0x8                         ; 0059eef0
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059eef3
    JMP 0x0059e858                      ; 0059eefa
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059eeff
        ;   Label: LAB_0059eeff
    PUSH EDI                            ; 0059ef06
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ef07
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ef0c
    TEST EAX,EAX                        ; 0059ef0f
    JNZ 0x0059e858                      ; 0059ef11
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da359                    ; 0059ef17 | = "stydem_fly_spell.wav"
    PUSH EDI                            ; 0059ef1c | = "stydem_fly_spell.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059ef1d
    PUSH EBX                            ; 0059ef23
    CALL dword ptr [EDX + 0x2c]         ; 0059ef24
    ADD ESP,0x8                         ; 0059ef27
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ef2a
    JMP 0x0059e858                      ; 0059ef31
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ef36
        ;   Label: LAB_0059ef36
    PUSH ECX                            ; 0059ef3d
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ef3e
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ef43
    TEST EAX,EAX                        ; 0059ef46
    JNZ 0x0059e858                      ; 0059ef48
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da36e                    ; 0059ef4e | = "stydem_damage_fly.wav"
    PUSH EDI                            ; 0059ef53 | = "stydem_damage_fly.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059ef54
    PUSH EBX                            ; 0059ef5a
    CALL dword ptr [EDX + 0x2c]         ; 0059ef5b
    ADD ESP,0x8                         ; 0059ef5e
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ef61
    JMP 0x0059e858                      ; 0059ef68
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059ef6d
        ;   Label: LAB_0059ef6d
    PUSH EAX                            ; 0059ef74
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059ef75
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059ef7a
    TEST EAX,EAX                        ; 0059ef7d
    JNZ 0x0059e858                      ; 0059ef7f
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da397                    ; 0059ef85 | = "stydem_takeoff.wav"
    PUSH EDI                            ; 0059ef8a | = "stydem_takeoff.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059ef8b
    PUSH EBX                            ; 0059ef91
    CALL dword ptr [EDX + 0x2c]         ; 0059ef92
    ADD ESP,0x8                         ; 0059ef95
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059ef98
    JMP 0x0059e858                      ; 0059ef9f
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059efa4
        ;   Label: LAB_0059efa4
    PUSH EDI                            ; 0059efab
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059efac
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059efb1
    TEST EAX,EAX                        ; 0059efb4
    JNZ 0x0059e858                      ; 0059efb6
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da3aa                    ; 0059efbc | = "stydem_land.wav"
    PUSH EDI                            ; 0059efc1 | = "stydem_land.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059efc2
    PUSH EBX                            ; 0059efc8
    CALL dword ptr [EDX + 0x2c]         ; 0059efc9
    ADD ESP,0x8                         ; 0059efcc
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059efcf
    JMP 0x0059e858                      ; 0059efd6
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059efdb
        ;   Label: LAB_0059efdb
    PUSH ECX                            ; 0059efe2
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059efe3
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059efe8
    TEST EAX,EAX                        ; 0059efeb
    JNZ 0x0059e858                      ; 0059efed
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da3ba                    ; 0059eff3 | = "stydem_warning_spell_1.wav"
    PUSH EDI                            ; 0059eff8 | = "stydem_warning_spell_1.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059eff9
    PUSH EBX                            ; 0059efff
    CALL dword ptr [EDX + 0x2c]         ; 0059f000
    ADD ESP,0x8                         ; 0059f003
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f006
    JMP 0x0059e858                      ; 0059f00d
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f012
        ;   Label: LAB_0059f012
    PUSH EAX                            ; 0059f019
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f01a
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f01f
    TEST EAX,EAX                        ; 0059f022
    JNZ 0x0059e858                      ; 0059f024
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da3e8                    ; 0059f02a | = "stydem_warning_spell_2.wav"
    PUSH EDX                            ; 0059f02f | = "stydem_warning_spell_2.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f030
    PUSH EBX                            ; 0059f036
    CALL dword ptr [EDI + 0x2c]         ; 0059f037
    ADD ESP,0x8                         ; 0059f03a
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f03d
    JMP 0x0059e858                      ; 0059f044
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f049
        ;   Label: LAB_0059f049
    PUSH EDI                            ; 0059f050
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f051
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f056
    TEST EAX,EAX                        ; 0059f059
    JNZ 0x0059e858                      ; 0059f05b
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da403                    ; 0059f061 | = "stydem_spell_2.wav"
    PUSH EDX                            ; 0059f066 | = "stydem_spell_2.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f067
    PUSH EBX                            ; 0059f06d
    CALL dword ptr [EDI + 0x2c]         ; 0059f06e
    ADD ESP,0x8                         ; 0059f071
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f074
    JMP 0x0059e858                      ; 0059f07b
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f080
        ;   Label: LAB_0059f080
    PUSH ECX                            ; 0059f087
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f088
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f08d
    TEST EAX,EAX                        ; 0059f090
    JNZ 0x0059e858                      ; 0059f092
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da416                    ; 0059f098 | = "stydem_warning_spell_3.wav"
    PUSH EDX                            ; 0059f09d | = "stydem_warning_spell_3.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f09e
    PUSH EBX                            ; 0059f0a4
    CALL dword ptr [EDI + 0x2c]         ; 0059f0a5
    ADD ESP,0x8                         ; 0059f0a8
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f0ab
    JMP 0x0059e858                      ; 0059f0b2
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f0b7
        ;   Label: LAB_0059f0b7
    PUSH EAX                            ; 0059f0be
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f0bf
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f0c4
    TEST EAX,EAX                        ; 0059f0c7
    JNZ 0x0059e858                      ; 0059f0c9
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da444                    ; 0059f0cf | = "stydem_raise_zombie.wav"
    PUSH EDX                            ; 0059f0d4 | = "stydem_raise_zombie.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f0d5
    PUSH EBX                            ; 0059f0db
    CALL dword ptr [EDI + 0x2c]         ; 0059f0dc
    ADD ESP,0x8                         ; 0059f0df
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f0e2
    JMP 0x0059e858                      ; 0059f0e9
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f0ee
        ;   Label: LAB_0059f0ee
    PUSH EDI                            ; 0059f0f5
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f0f6
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f0fb
    TEST EAX,EAX                        ; 0059f0fe
    JNZ 0x0059e858                      ; 0059f100
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da45c                    ; 0059f106 | = "stydem_transforming.wav"
    PUSH EDI                            ; 0059f10b | = "stydem_transforming.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059f10c
    PUSH EBX                            ; 0059f112
    CALL dword ptr [EDX + 0x2c]         ; 0059f113
    ADD ESP,0x8                         ; 0059f116
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f119
    JMP 0x0059e858                      ; 0059f120
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f125
        ;   Label: LAB_0059f125
    PUSH ECX                            ; 0059f12c
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f12d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f132
    TEST EAX,EAX                        ; 0059f135
    JNZ 0x0059e858                      ; 0059f137
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da474                    ; 0059f13d | = "stydem_taunt1.wav"
    PUSH EDX                            ; 0059f142 | = "stydem_taunt1.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f143
    PUSH EBX                            ; 0059f149
    CALL dword ptr [EDI + 0x2c]         ; 0059f14a
    ADD ESP,0x8                         ; 0059f14d
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f150
    JMP 0x0059e858                      ; 0059f157
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f15c
        ;   Label: LAB_0059f15c
    PUSH EDX                            ; 0059f163
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f164
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f169
    TEST EAX,EAX                        ; 0059f16c
    JNZ 0x0059e858                      ; 0059f16e
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da486                    ; 0059f174 | = "stydem_taunt2.wav"
    PUSH EDX                            ; 0059f179 | = "stydem_taunt2.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f17a
    PUSH EBX                            ; 0059f180
    CALL dword ptr [EDI + 0x2c]         ; 0059f181
    ADD ESP,0x8                         ; 0059f184
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f187
    JMP 0x0059e858                      ; 0059f18e
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059eeff                      ; 0059f193
        ;   XREF to: 0059eeff (CONDITIONAL_JUMP)  ; LAB_0059eeff
        ;   Label: LAB_0059f193
    CMP EAX,0x58a                       ; 0059f199
    JNC 0x0059f1ed                      ; 0059f19e
        ;   XREF to: 0059f1ed (CONDITIONAL_JUMP)  ; LAB_0059f1ed
    CMP EAX,0x586                       ; 0059f1a0
    JNC 0x0059f273                      ; 0059f1a5
        ;   XREF to: 0059f273 (CONDITIONAL_JUMP)  ; LAB_0059f273
    CMP EAX,0x584                       ; 0059f1ab
    JBE 0x0059ef36                      ; 0059f1b0
        ;   XREF to: 0059ef36 (CONDITIONAL_JUMP)  ; LAB_0059ef36
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f1b6
    PUSH EDX                            ; 0059f1bd
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f1be
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f1c3
    TEST EAX,EAX                        ; 0059f1c6
    JNZ 0x0059e858                      ; 0059f1c8
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da384                    ; 0059f1ce | = "stydem_die_fly.wav"
    PUSH EDI                            ; 0059f1d3 | = "stydem_die_fly.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059f1d4
    PUSH EBX                            ; 0059f1da
    CALL dword ptr [EDX + 0x2c]         ; 0059f1db
    ADD ESP,0x8                         ; 0059f1de
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f1e1
    JMP 0x0059e858                      ; 0059f1e8
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059f012                      ; 0059f1ed
        ;   XREF to: 0059f012 (CONDITIONAL_JUMP)  ; LAB_0059f012
        ;   Label: LAB_0059f1ed
    CMP EAX,0x58e                       ; 0059f1f3
    JNC 0x0059f242                      ; 0059f1f8
        ;   XREF to: 0059f242 (CONDITIONAL_JUMP)  ; LAB_0059f242
    CMP EAX,0x58c                       ; 0059f1fa
    JC 0x0059f049                       ; 0059f1ff
        ;   XREF to: 0059f049 (CONDITIONAL_JUMP)  ; LAB_0059f049
    JBE 0x0059f080                      ; 0059f205
        ;   XREF to: 0059f080 (CONDITIONAL_JUMP)  ; LAB_0059f080
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f20b
    PUSH EDX                            ; 0059f212
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f213
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f218
    TEST EAX,EAX                        ; 0059f21b
    JNZ 0x0059e858                      ; 0059f21d
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da431                    ; 0059f223 | = "stydem_spell_3.wav"
    PUSH EDX                            ; 0059f228 | = "stydem_spell_3.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f229
    PUSH EBX                            ; 0059f22f
    CALL dword ptr [EDI + 0x2c]         ; 0059f230
    ADD ESP,0x8                         ; 0059f233
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f236
    JMP 0x0059e858                      ; 0059f23d
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059f0b7                      ; 0059f242
        ;   XREF to: 0059f0b7 (CONDITIONAL_JUMP)  ; LAB_0059f0b7
        ;   Label: LAB_0059f242
    CMP EAX,0x590                       ; 0059f248
    JC 0x0059f0ee                       ; 0059f24d
        ;   XREF to: 0059f0ee (CONDITIONAL_JUMP)  ; LAB_0059f0ee
    JBE 0x0059f125                      ; 0059f253
        ;   XREF to: 0059f125 (CONDITIONAL_JUMP)  ; LAB_0059f125
    CMP EAX,0x591                       ; 0059f259
    JZ 0x0059f15c                       ; 0059f25e
        ;   XREF to: 0059f15c (CONDITIONAL_JUMP)  ; LAB_0059f15c
    PUSH ESI                            ; 0059f264
    PUSH EBX                            ; 0059f265
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059f266
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059f26b
    JMP 0x0059e858                      ; 0059f26e
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059ef6d                      ; 0059f273
        ;   XREF to: 0059ef6d (CONDITIONAL_JUMP)  ; LAB_0059ef6d
        ;   Label: LAB_0059f273
    CMP EAX,0x588                       ; 0059f279
    JC 0x0059efa4                       ; 0059f27e
        ;   XREF to: 0059efa4 (CONDITIONAL_JUMP)  ; LAB_0059efa4
    JBE 0x0059efdb                      ; 0059f284
        ;   XREF to: 0059efdb (CONDITIONAL_JUMP)  ; LAB_0059efdb
    MOV EDX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f28a
    PUSH EDX                            ; 0059f291
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f292
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f297
    TEST EAX,EAX                        ; 0059f29a
    JNZ 0x0059e858                      ; 0059f29c
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da3d5                    ; 0059f2a2 | = "stydem_spell_1.wav"
    PUSH EDX                            ; 0059f2a7 | = "stydem_spell_1.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f2a8
    PUSH EBX                            ; 0059f2ae
    CALL dword ptr [EDI + 0x2c]         ; 0059f2af
    ADD ESP,0x8                         ; 0059f2b2
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f2b5
    JMP 0x0059e858                      ; 0059f2bc
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059edb5                      ; 0059f2c1
        ;   XREF to: 0059edb5 (CONDITIONAL_JUMP)  ; LAB_0059edb5
        ;   Label: LAB_0059f2c1
    CMP EAX,0x57f                       ; 0059f2c7
    JNC 0x0059f316                      ; 0059f2cc
        ;   XREF to: 0059f316 (CONDITIONAL_JUMP)  ; LAB_0059f316
    CMP EAX,0x57d                       ; 0059f2ce
    JC 0x0059edec                       ; 0059f2d3
        ;   XREF to: 0059edec (CONDITIONAL_JUMP)  ; LAB_0059edec
    JBE 0x0059ee23                      ; 0059f2d9
        ;   XREF to: 0059ee23 (CONDITIONAL_JUMP)  ; LAB_0059ee23
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f2df
    PUSH EAX                            ; 0059f2e6
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f2e7
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f2ec
    TEST EAX,EAX                        ; 0059f2ef
    JNZ 0x0059e858                      ; 0059f2f1
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDX,0x5da2ea                    ; 0059f2f7 | = "stydem_stand_fly.wav"
    PUSH EDX                            ; 0059f2fc | = "stydem_stand_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059f2fd
    PUSH EBX                            ; 0059f303
    CALL dword ptr [EDI + 0x2c]         ; 0059f304
    ADD ESP,0x8                         ; 0059f307
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f30a
    JMP 0x0059e858                      ; 0059f311
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059ee5a                      ; 0059f316
        ;   XREF to: 0059ee5a (CONDITIONAL_JUMP)  ; LAB_0059ee5a
        ;   Label: LAB_0059f316
    CMP EAX,0x581                       ; 0059f31c
    JC 0x0059ee91                       ; 0059f321
        ;   XREF to: 0059ee91 (CONDITIONAL_JUMP)  ; LAB_0059ee91
    JBE 0x0059eec8                      ; 0059f327
        ;   XREF to: 0059eec8 (CONDITIONAL_JUMP)  ; LAB_0059eec8
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f32d
    PUSH EAX                            ; 0059f334
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f335
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f33a
    TEST EAX,EAX                        ; 0059f33d
    JNZ 0x0059e858                      ; 0059f33f
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da33c                    ; 0059f345 | = "stydem_warning_fly_spell.wav"
    PUSH EDI                            ; 0059f34a | = "stydem_warning_fly_spell.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059f34b
    PUSH EBX                            ; 0059f351
    CALL dword ptr [EDX + 0x2c]         ; 0059f352
    ADD ESP,0x8                         ; 0059f355
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f358
    JMP 0x0059e858                      ; 0059f35f
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059e934                      ; 0059f364
        ;   XREF to: 0059e934 (CONDITIONAL_JUMP)  ; LAB_0059e934
        ;   Label: LAB_0059f364
    CMP EAX,0x579                       ; 0059f36a
    JNC 0x0059f38b                      ; 0059f36f
        ;   XREF to: 0059f38b (CONDITIONAL_JUMP)  ; LAB_0059f38b
    CMP EAX,0x578                       ; 0059f371
    JZ 0x0059ed47                       ; 0059f376
        ;   XREF to: 0059ed47 (CONDITIONAL_JUMP)  ; LAB_0059ed47
    PUSH ESI                            ; 0059f37c
    PUSH EBX                            ; 0059f37d
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059f37e
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059f383
    JMP 0x0059e858                      ; 0059f386
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059ed7e                      ; 0059f38b
        ;   XREF to: 0059ed7e (CONDITIONAL_JUMP)  ; LAB_0059ed7e
        ;   Label: LAB_0059f38b
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0xc6c4] ; 0059f391
    PUSH EAX                            ; 0059f398
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059f399
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059f39e
    TEST EAX,EAX                        ; 0059f3a1
    JNZ 0x0059e858                      ; 0059f3a3
        ;   XREF to: 0059e858 (CONDITIONAL_JUMP)  ; LAB_0059e858
    MOV EDI,0x5da2a8                    ; 0059f3a9 | = "stydem_run.wav"
    PUSH EDI                            ; 0059f3ae | = "stydem_run.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059f3af
    PUSH EBX                            ; 0059f3b5
    CALL dword ptr [EDX + 0x2c]         ; 0059f3b6
    ADD ESP,0x8                         ; 0059f3b9
    MOV dword ptr [EBX + ESI*0x4 + 0xc6c4],EAX ; 0059f3bc
    JMP 0x0059e858                      ; 0059f3c3
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    JBE 0x0059ed16                      ; 0059f3c8
        ;   XREF to: 0059ed16 (CONDITIONAL_JUMP)  ; LAB_0059ed16
        ;   Label: LAB_0059f3c8
    CMP EAX,0x4b3                       ; 0059f3ce
    JZ 0x0059e9b1                       ; 0059f3d3
        ;   XREF to: 0059e9b1 (CONDITIONAL_JUMP)  ; LAB_0059e9b1
    PUSH ESI                            ; 0059f3d9
    PUSH EBX                            ; 0059f3da
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059f3db
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059f3e0
    JMP 0x0059e858                      ; 0059f3e3
        ;   XREF to: 0059e858 (UNCONDITIONAL_JUMP)  ; LAB_0059e858
    FLD float ptr [EBP + 0x92]          ; 0059f3e8
        ;   Label: LAB_0059f3e8
    FMUL float ptr [EBX + 0xcdcc]       ; 0059f3ee
    FMUL double ptr [0x005da4c6]        ; 0059f3f4 | DAT_005da4c6
    SUB ESP,0x4                         ; 0059f3fa
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0059f3fd
    MOV dword ptr [EBX + 0x2524],EAX    ; 0059f403
    FSTP float ptr [ESP]                ; 0059f409
    PUSH EBX                            ; 0059f40c
    CALL core_charactr.cpp_FUN_00434850 ; 0059f40d
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0059f412
    LEA EAX,[EBX + 0x158]               ; 0059f415
    PUSH EAX                            ; 0059f41b
    MOV dword ptr [EBP + 0x62],EAX      ; 0059f41c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059f41f
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059f424
    PUSH dword ptr [EBP + 0x92]         ; 0059f427
    MOV ESI,dword ptr [EAX + 0x24]      ; 0059f42d
    PUSH EBX                            ; 0059f430
    MOV EDI,ESI                         ; 0059f431
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0059f433
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059f438
    TEST EAX,EAX                        ; 0059f43b
    JZ 0x005a013e                       ; 0059f43d
        ;   XREF to: 005a013e (CONDITIONAL_JUMP)  ; LAB_005a013e
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059f443
    CMP EAX,0x2                         ; 0059f449
    JNC 0x0059f637                      ; 0059f44c
        ;   XREF to: 0059f637 (CONDITIONAL_JUMP)  ; LAB_0059f637
    CMP EAX,0x1                         ; 0059f452
    JNZ 0x0059f642                      ; 0059f455
        ;   XREF to: 0059f642 (CONDITIONAL_JUMP)  ; LAB_0059f642
    PUSH 0x1                            ; 0059f45b
        ;   Label: LAB_0059f45b
    PUSH 0x1                            ; 0059f45d
    LEA EAX,[EBX + 0x158]               ; 0059f45f
        ;   Label: LAB_0059f45f
    PUSH EAX                            ; 0059f465
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059f466
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059f46b
        ;   Label: LAB_0059f46b
    LEA EAX,[EBX + 0x249c]              ; 0059f46e
    MOV dword ptr [EAX + 0x8],0x0       ; 0059f474
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059f47b
    MOV dword ptr [EAX + 0x4],EDX       ; 0059f47e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059f481
    MOV dword ptr [EAX],EDX             ; 0059f484
    FLD float ptr [EBX + 0xcde0]        ; 0059f486
        ;   Label: caseD_4
    FLDZ                                ; 0059f48c
    FCOMPP                              ; 0059f48e
    FNSTSW AX                           ; 0059f490
    SAHF                                ; 0059f492
    JNC 0x0059f4a7                      ; 0059f493
        ;   XREF to: 0059f4a7 (CONDITIONAL_JUMP)  ; LAB_0059f4a7
    FLD float ptr [EBX + 0xcde0]        ; 0059f495
    FSUB float ptr [EBP + 0x92]         ; 0059f49b
    FSTP float ptr [EBX + 0xcde0]       ; 0059f4a1
    FLD float ptr [EBX + 0xdc94]        ; 0059f4a7
        ;   Label: LAB_0059f4a7
    FLDZ                                ; 0059f4ad
    FCOMPP                              ; 0059f4af
    FNSTSW AX                           ; 0059f4b1
    SAHF                                ; 0059f4b3
    JNC 0x0059f4c8                      ; 0059f4b4
        ;   XREF to: 0059f4c8 (CONDITIONAL_JUMP)  ; LAB_0059f4c8
    FLD float ptr [EBX + 0xdc94]        ; 0059f4b6
    FSUB float ptr [EBP + 0x92]         ; 0059f4bc
    FSTP float ptr [EBX + 0xdc94]       ; 0059f4c2
    PUSH EBX                            ; 0059f4c8
        ;   Label: LAB_0059f4c8
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 0059f4c9
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059f4ce
    TEST EAX,EAX                        ; 0059f4d1
    JZ 0x0059f5dd                       ; 0059f4d3
        ;   XREF to: 0059f5dd (CONDITIONAL_JUMP)  ; LAB_0059f5dd
    PUSH dword ptr [EBP + 0x92]         ; 0059f4d9
    PUSH EBX                            ; 0059f4df
    LEA ESI,[EBX + 0x2518]              ; 0059f4e0
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0059f4e6
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 0059f4eb
    FMUL float ptr [EBP + 0x92]         ; 0059f4ed
    FLD float ptr [ESI + 0x4]           ; 0059f4f3
    FMUL float ptr [EBP + 0x92]         ; 0059f4f6
    FLD float ptr [ESI + 0x8]           ; 0059f4fc
    FMUL float ptr [EBP + 0x92]         ; 0059f4ff
    LEA EDI,[EBP + -0x36]               ; 0059f505
    LEA ESI,[EBP + -0x1e]               ; 0059f508
    FXCH ST2                            ; 0059f50b
    FSTP float ptr [EBP + -0x1e]        ; 0059f50d
    FSTP float ptr [EBP + -0x1a]        ; 0059f510
    FSTP float ptr [EBP + -0x16]        ; 0059f513
    MOVSD ES:EDI,ESI                    ; 0059f516
    MOVSD ES:EDI,ESI                    ; 0059f517
    MOVSD ES:EDI,ESI                    ; 0059f518
    LEA EDX,[EBX + 0x250c]              ; 0059f519
    FLD float ptr [EBP + -0x36]         ; 0059f51f
    FLD float ptr [EBP + -0x32]         ; 0059f522
    FLD float ptr [EBP + -0x2e]         ; 0059f525
    LEA EDI,[EBP + 0xfffffdd2]          ; 0059f528
    LEA ESI,[EBP + 0xfffffdae]          ; 0059f52e
    FXCH ST2                            ; 0059f534
    FADD float ptr [EDX]                ; 0059f536
    FXCH                                ; 0059f538
    FADD float ptr [EDX + 0x4]          ; 0059f53a
    FXCH ST2                            ; 0059f53d
    FADD float ptr [EDX + 0x8]          ; 0059f53f
    FXCH                                ; 0059f542
    FSTP float ptr [EBP + 0xfffffdae]   ; 0059f544
    FXCH                                ; 0059f54a
    FSTP float ptr [EBP + 0xfffffdb2]   ; 0059f54c
    FSTP float ptr [EBP + 0xfffffdb6]   ; 0059f552
    MOVSD ES:EDI,ESI                    ; 0059f558
    MOVSD ES:EDI,ESI                    ; 0059f559
    MOVSD ES:EDI,ESI                    ; 0059f55a
    LEA EAX,[EBX + 0x249c]              ; 0059f55b
    FLD float ptr [EBP + 0xfffffdd2]    ; 0059f561
    FLD float ptr [EBP + 0xfffffdd6]    ; 0059f567
    FLD float ptr [EBP + 0xfffffdda]    ; 0059f56d
    LEA EDI,[EBP + 0xfffffe0e]          ; 0059f573
    LEA ESI,[EBP + 0xfffffef2]          ; 0059f579
    FXCH ST2                            ; 0059f57f
    FADD float ptr [EAX]                ; 0059f581
    FXCH                                ; 0059f583
    FADD float ptr [EAX + 0x4]          ; 0059f585
    FXCH ST2                            ; 0059f588
    FADD float ptr [EAX + 0x8]          ; 0059f58a
    FXCH                                ; 0059f58d
    FSTP float ptr [EBP + 0xfffffef2]   ; 0059f58f
    FXCH                                ; 0059f595
    FSTP float ptr [EBP + 0xfffffef6]   ; 0059f597
    FSTP float ptr [EBP + 0xfffffefa]   ; 0059f59d
    MOVSD ES:EDI,ESI                    ; 0059f5a3
    MOVSD ES:EDI,ESI                    ; 0059f5a4
    MOVSD ES:EDI,ESI                    ; 0059f5a5
    MOV dword ptr [EDX + 0x8],0x0       ; 0059f5a6
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059f5ad
    MOV dword ptr [EDX + 0x4],ECX       ; 0059f5b0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059f5b3
    MOV dword ptr [EDX],ECX             ; 0059f5b6
    MOV dword ptr [EAX + 0x8],0x0       ; 0059f5b8
    ADD ESP,0x8                         ; 0059f5bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059f5c2
    MOV dword ptr [EAX + 0x4],EDX       ; 0059f5c5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059f5c8
    MOV dword ptr [EAX],EDX             ; 0059f5cb
    LEA EAX,[EBP + 0xfffffe0e]          ; 0059f5cd
    PUSH EAX                            ; 0059f5d3
    PUSH EBX                            ; 0059f5d4
    CALL core_charactr.cpp_FUN_0042c230 ; 0059f5d5
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0059f5da
    PUSH EBX                            ; 0059f5dd
        ;   Label: LAB_0059f5dd
    CALL core_charactr.cpp_FUN_0042cd30 ; 0059f5de
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059f5e3
    LEA EAX,[EBX + 0x158]               ; 0059f5e6
    PUSH EAX                            ; 0059f5ec
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059f5ed
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059f5f2
    PUSH dword ptr [EBP + 0x92]         ; 0059f5f5
    PUSH EBX                            ; 0059f5fb
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0059f5fc
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059f601
    LEA ESP,[EBP + 0x7a]                ; 0059f604
    POP EBP                             ; 0059f607
    POP EDI                             ; 0059f608
    POP ESI                             ; 0059f609
    POP EBX                             ; 0059f60a
    RET                                 ; 0059f60b
    PUSH 0x1                            ; 0059f60c
        ;   Label: LAB_0059f60c
    PUSH 0x0                            ; 0059f60e
    LEA EAX,[EBX + 0x158]               ; 0059f610
    PUSH EAX                            ; 0059f616
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059f617
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059f61c
    PUSH EBX                            ; 0059f61f
    MOV EAX,0x5da498                    ; 0059f620 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 0059f625 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005f1690]      ; 0059f626 | g_CConsolePtr
    PUSH EDI                            ; 0059f62c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0059f62d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0059f46b                      ; 0059f632
        ;   XREF to: 0059f46b (UNCONDITIONAL_JUMP)  ; LAB_0059f46b
    JBE 0x0059f45b                      ; 0059f637
        ;   XREF to: 0059f45b (CONDITIONAL_JUMP)  ; LAB_0059f45b
        ;   Label: LAB_0059f637
    CMP EAX,0x3                         ; 0059f63d
    JZ 0x0059f60c                       ; 0059f640
        ;   XREF to: 0059f60c (CONDITIONAL_JUMP)  ; LAB_0059f60c
    PUSH 0x1                            ; 0059f642
        ;   Label: LAB_0059f642
    PUSH 0x0                            ; 0059f644
    JMP 0x0059f45f                      ; 0059f646
        ;   XREF to: 0059f45f (UNCONDITIONAL_JUMP)  ; LAB_0059f45f
    LEA EAX,[EBX + 0x20]                ; 0059f64b
        ;   Label: caseD_1b
    MOV EDX,dword ptr [EBX + 0xd060]    ; 0059f64e
    MOV ECX,dword ptr [EAX]             ; 0059f654
    MOV dword ptr [EDX + 0x20],ECX      ; 0059f656
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059f659
    MOV dword ptr [EDX + 0x24],ECX      ; 0059f65c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059f65f
    MOV dword ptr [EDX + 0x28],ECX      ; 0059f662
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059f665
    MOV dword ptr [EDX + 0x2c],EAX      ; 0059f668
    MOV EDX,dword ptr [EBX + 0xd060]    ; 0059f66b
    LEA EAX,[EBX + 0x30]                ; 0059f671
    ADD EDX,0x30                        ; 0059f674
    CMP EDX,EAX                         ; 0059f677
    JNZ 0x0059f755                      ; 0059f679
        ;   XREF to: 0059f755 (CONDITIONAL_JUMP)  ; LAB_0059f755
    FLD float ptr [EBP + 0x92]          ; 0059f67f
        ;   Label: LAB_0059f67f
    FMUL double ptr [0x005da4ce]        ; 0059f685 | DAT_005da4ce
    FADD float ptr [EBX + 0xdc98]       ; 0059f68b
    FST float ptr [EBX + 0xdc98]        ; 0059f691
    FLD1                                ; 0059f697
    FCOMPP                              ; 0059f699
    FNSTSW AX                           ; 0059f69b
    SAHF                                ; 0059f69d
    JA 0x0059f6d5                       ; 0059f69e
        ;   XREF to: 0059f6d5 (CONDITIONAL_JUMP)  ; caseD_f
    MOV ESI,dword ptr [EBX + 0xd060]    ; 0059f6a0
    TEST ESI,ESI                        ; 0059f6a6
    JZ 0x0059f6d5                       ; 0059f6a8
        ;   XREF to: 0059f6d5 (CONDITIONAL_JUMP)  ; caseD_f
    PUSH ESI                            ; 0059f6aa
    MOV EAX,[0x00600530]                ; 0059f6ab | DAT_00600530
    PUSH EAX                            ; 0059f6b0 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059f6b1
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059f6b6
    PUSH 0x1                            ; 0059f6b9
    PUSH EBX                            ; 0059f6bb
    MOV EDX,dword ptr [0x00600530]      ; 0059f6bc | DAT_00600530
    PUSH EDX                            ; 0059f6c2 | DAT_01d81080
    MOV dword ptr [EBX + 0xd060],0x0    ; 0059f6c3
    CALL core_mission.cpp_FUN_004f6f10  ; 0059f6cd
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 0059f6d2
    MOV EAX,dword ptr [EBX + 0xcdd0]    ; 0059f6d5
        ;   Label: caseD_6
    TEST EAX,EAX                        ; 0059f6db
    JNZ 0x0059f486                      ; 0059f6dd
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    CMP dword ptr [EBX + 0xdc],0x0      ; 0059f6e3
    JNZ 0x0059f486                      ; 0059f6ea
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    PUSH EAX                            ; 0059f6f0
    LEA EAX,[EBX + 0x158]               ; 0059f6f1
    PUSH EAX                            ; 0059f6f7
    LEA ESI,[EBP + -0x6]                ; 0059f6f8
    LEA EDI,[EBP + -0x5a]               ; 0059f6fb
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0059f6fe
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0059f703
    LEA EAX,[EBP + -0x5a]               ; 0059f706
    LEA ESI,[EBP + -0x6]                ; 0059f709
    PUSH EAX                            ; 0059f70c
    MOVSD ES:EDI,ESI                    ; 0059f70d
    MOVSD ES:EDI,ESI                    ; 0059f70e
    MOVSD ES:EDI,ESI                    ; 0059f70f
    PUSH EBX                            ; 0059f710
    LEA ESI,[EBP + 0xfffffe86]          ; 0059f711
    CALL core_actor.cpp_FUN_00408b80    ; 0059f717
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0059f71c
    PUSH 0x0                            ; 0059f71f
    LEA EAX,[EBP + 0xfffffd66]          ; 0059f721
    LEA EDI,[EBP + 0xfffffd66]          ; 0059f727
    PUSH EAX                            ; 0059f72d
    MOV ECX,dword ptr [0x005fed24]      ; 0059f72e | g_CGorePtr
    LEA ESI,[EBP + 0xfffffe86]          ; 0059f734
    PUSH ECX                            ; 0059f73a
    MOVSD ES:EDI,ESI                    ; 0059f73b
    MOVSD ES:EDI,ESI                    ; 0059f73c
    MOVSD ES:EDI,ESI                    ; 0059f73d
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0059f73e
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0059f743
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0059f746
    JMP 0x0059f486                      ; 0059f750
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV ECX,dword ptr [EAX]             ; 0059f755
        ;   Label: LAB_0059f755
    MOV dword ptr [EDX],ECX             ; 0059f757
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059f759
    MOV dword ptr [EDX + 0x4],ECX       ; 0059f75c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059f75f
    MOV dword ptr [EDX + 0x8],ECX       ; 0059f762
    JMP 0x0059f67f                      ; 0059f765
        ;   XREF to: 0059f67f (UNCONDITIONAL_JUMP)  ; LAB_0059f67f
    MOV EAX,[0x01d5ba14]                ; 0059f76a | DAT_01d5ba14
        ;   Label: caseD_b
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059f76f
    LEA EDI,[EBP + -0x7e]               ; 0059f776
    LEA ESI,[EBP + 0xffffff76]          ; 0059f779
    FLD float ptr [EDX + 0x20]          ; 0059f77f
    FLD float ptr [EDX + 0x24]          ; 0059f782
    LEA EAX,[EBX + 0x20]                ; 0059f785
    FLD float ptr [EDX + 0x28]          ; 0059f788
    FXCH ST2                            ; 0059f78b
    FSUB float ptr [EAX]                ; 0059f78d
    FXCH                                ; 0059f78f
    FSUB float ptr [EAX + 0x4]          ; 0059f791
    FXCH ST2                            ; 0059f794
    FSUB float ptr [EAX + 0x8]          ; 0059f796
    FXCH                                ; 0059f799
    FSTP float ptr [EBP + 0xffffff76]   ; 0059f79b
    FXCH                                ; 0059f7a1
    FSTP float ptr [EBP + 0xffffff7a]   ; 0059f7a3
    FSTP float ptr [EBP + 0xffffff7e]   ; 0059f7a9
    LEA EAX,[EBP + -0x7e]               ; 0059f7af
    MOVSD ES:EDI,ESI                    ; 0059f7b2
    MOVSD ES:EDI,ESI                    ; 0059f7b3
    MOVSD ES:EDI,ESI                    ; 0059f7b4
    PUSH EAX                            ; 0059f7b5
    LEA ESI,[EBP + 0xffffff5e]          ; 0059f7b6
    LEA EDI,[EBP + 0xfffffee6]          ; 0059f7bc
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059f7c2
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xffffff5e]          ; 0059f7c7
    MOVSD ES:EDI,ESI                    ; 0059f7cd
    MOVSD ES:EDI,ESI                    ; 0059f7ce
    MOVSD ES:EDI,ESI                    ; 0059f7cf
    ADD ESP,0x4                         ; 0059f7d0
    FLD float ptr [EBP + 0xfffffeea]    ; 0059f7d3
    FSUB float ptr [EBX + 0x34]         ; 0059f7d9
    SUB ESP,0x4                         ; 0059f7dc
    FSTP float ptr [ESP]                ; 0059f7df
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059f7e2
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBP + 0xfffffee6]    ; 0059f7e7
    ADD ESP,0x4                         ; 0059f7ed
    MOV dword ptr [EBP + 0x76],EAX      ; 0059f7f0
    SUB ESP,0x4                         ; 0059f7f3
    FSUB float ptr [EBX + 0x30]         ; 0059f7f6
    FLD float ptr [EBP + 0x76]          ; 0059f7f9
    FXCH                                ; 0059f7fc
    FSTP float ptr [ESP]                ; 0059f7fe
    FSTP float ptr [EBP + 0x2a]         ; 0059f801
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059f804
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 0059f809
    FLD float ptr [EBX + 0x30]          ; 0059f80c
    MOV dword ptr [EBP + 0x76],EAX      ; 0059f80f
    ADD ESP,0x4                         ; 0059f812
    FLD float ptr [EBP + 0x76]          ; 0059f815
    FXCH ST2                            ; 0059f818
    FADD float ptr [EBP + 0x2a]         ; 0059f81a
    PUSH EBX                            ; 0059f81d
    FXCH                                ; 0059f81e
    FADDP ST2,ST0                       ; 0059f820
    FSTP float ptr [EBX + 0x34]         ; 0059f822
    FSTP float ptr [EBX + 0x30]         ; 0059f825
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0059f828
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059f82d
    MOV dword ptr [EBX + 0xcde0],0x40a00000 ; 0059f830
    JMP 0x0059f486                      ; 0059f83a
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV EAX,[0x01d5ba14]                ; 0059f83f | DAT_01d5ba14
        ;   Label: caseD_c
    LEA EDI,[EBP + -0x42]               ; 0059f844
    LEA EDX,[EBX + 0x20]                ; 0059f847
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059f84a
    LEA ESI,[EBP + 0xfffffe7a]          ; 0059f851
    MOV dword ptr [EBP + 0x3a],EDX      ; 0059f857
    FLD float ptr [EAX + 0x24]          ; 0059f85a
    FLD float ptr [EAX + 0x28]          ; 0059f85d
    FLD float ptr [EAX + 0x20]          ; 0059f860
    LEA EAX,[EBP + -0x42]               ; 0059f863
    FSUB float ptr [EDX]                ; 0059f866
    FXCH ST2                            ; 0059f868
    FSUB float ptr [EDX + 0x4]          ; 0059f86a
    FXCH                                ; 0059f86d
    FSUB float ptr [EDX + 0x8]          ; 0059f86f
    FXCH ST2                            ; 0059f872
    FSTP float ptr [EBP + 0xfffffe7a]   ; 0059f874
    FSTP float ptr [EBP + 0xfffffe7e]   ; 0059f87a
    FSTP float ptr [EBP + 0xfffffe82]   ; 0059f880
    MOVSD ES:EDI,ESI                    ; 0059f886
    MOVSD ES:EDI,ESI                    ; 0059f887
    MOVSD ES:EDI,ESI                    ; 0059f888
    PUSH EAX                            ; 0059f889
    LEA ESI,[EBP + 0xfffffdc6]          ; 0059f88a
    LEA EDI,[EBP + 0xfffffefe]          ; 0059f890
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059f896
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffdc6]          ; 0059f89b
    MOVSD ES:EDI,ESI                    ; 0059f8a1
    MOVSD ES:EDI,ESI                    ; 0059f8a2
    MOVSD ES:EDI,ESI                    ; 0059f8a3
    ADD ESP,0x4                         ; 0059f8a4
    FLD float ptr [EBP + 0xffffff02]    ; 0059f8a7
    FSUB float ptr [EBX + 0x34]         ; 0059f8ad
    SUB ESP,0x4                         ; 0059f8b0
    FSTP float ptr [ESP]                ; 0059f8b3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059f8b6
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBP + 0xfffffefe]    ; 0059f8bb
    ADD ESP,0x4                         ; 0059f8c1
    MOV dword ptr [EBP + 0x76],EAX      ; 0059f8c4
    SUB ESP,0x4                         ; 0059f8c7
    FSUB float ptr [EBX + 0x30]         ; 0059f8ca
    FLD float ptr [EBP + 0x76]          ; 0059f8cd
    FXCH                                ; 0059f8d0
    FSTP float ptr [ESP]                ; 0059f8d2
    FSTP float ptr [EBP + 0x32]         ; 0059f8d5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059f8d8
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 0059f8dd
    FLD float ptr [EBX + 0x30]          ; 0059f8e0
    MOV dword ptr [EBP + 0x76],EAX      ; 0059f8e3
    ADD ESP,0x4                         ; 0059f8e6
    FLD float ptr [EBP + 0x76]          ; 0059f8e9
    FXCH ST2                            ; 0059f8ec
    FADD float ptr [EBP + 0x32]         ; 0059f8ee
    PUSH EBX                            ; 0059f8f1
    FXCH                                ; 0059f8f2
    FADDP ST2,ST0                       ; 0059f8f4
    FSTP float ptr [EBX + 0x34]         ; 0059f8f6
    FSTP float ptr [EBX + 0x30]         ; 0059f8f9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0059f8fc
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    MOV EAX,[0x01d5ba14]                ; 0059f901 | DAT_01d5ba14
    LEA EDI,[EBP + 0xfffffd72]          ; 0059f906
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059f90c
    LEA ESI,[EBP + 0xfffffd96]          ; 0059f913
    MOV EDX,dword ptr [EBP + 0x3a]      ; 0059f919
    FLD float ptr [EAX + 0x20]          ; 0059f91c
    FLD float ptr [EAX + 0x24]          ; 0059f91f
    FLD float ptr [EAX + 0x28]          ; 0059f922
    FXCH ST2                            ; 0059f925
    FSUB float ptr [EDX]                ; 0059f927
    FXCH                                ; 0059f929
    FSUB float ptr [EDX + 0x4]          ; 0059f92b
    FXCH ST2                            ; 0059f92e
    FSUB float ptr [EDX + 0x8]          ; 0059f930
    FXCH                                ; 0059f933
    FSTP float ptr [EBP + 0xfffffd96]   ; 0059f935
    FXCH                                ; 0059f93b
    FSTP float ptr [EBP + 0xfffffd9a]   ; 0059f93d
    FSTP float ptr [EBP + 0xfffffd9e]   ; 0059f943
    MOVSD ES:EDI,ESI                    ; 0059f949
    MOVSD ES:EDI,ESI                    ; 0059f94a
    MOVSD ES:EDI,ESI                    ; 0059f94b
    ADD ESP,0x4                         ; 0059f94c
    MOV EDI,dword ptr [0x02d24cf4]      ; 0059f94f | DAT_02d24cf4
    PUSH EDI                            ; 0059f955
    MOV EAX,dword ptr [EBP + 0x62]      ; 0059f956
    PUSH EAX                            ; 0059f959
    LEA ESI,[EBP + 0xfffffe26]          ; 0059f95a
    LEA EDI,[EBP + 0xfffffd8a]          ; 0059f960
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0059f966
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 0059f96b
    LEA EAX,[EBP + 0xfffffd8a]          ; 0059f96e
    LEA ESI,[EBP + 0xfffffe26]          ; 0059f974
    PUSH EAX                            ; 0059f97a
    MOVSD ES:EDI,ESI                    ; 0059f97b
    MOVSD ES:EDI,ESI                    ; 0059f97c
    MOVSD ES:EDI,ESI                    ; 0059f97d
    PUSH EBX                            ; 0059f97e
    LEA ESI,[EBP + 0xfffffe32]          ; 0059f97f
    CALL core_actor.cpp_FUN_00408b80    ; 0059f985
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    FLD float ptr [EBP + 0xfffffd76]    ; 0059f98a
    FMUL ST0                            ; 0059f990
    FLD float ptr [EBP + 0xfffffd72]    ; 0059f992
    FMUL ST0                            ; 0059f998
    FADDP                               ; 0059f99a
    FLD float ptr [EBP + 0xfffffd7a]    ; 0059f99c
    FMUL ST0                            ; 0059f9a2
    FADDP                               ; 0059f9a4
    FSQRT                               ; 0059f9a6
    LEA EDI,[EBP + 0xfffffd7e]          ; 0059f9a8
    LEA ESI,[EBP + 0xfffffe32]          ; 0059f9ae
    FLDZ                                ; 0059f9b4
    ADD ESP,0x8                         ; 0059f9b6
    MOVSD ES:EDI,ESI                    ; 0059f9b9
    MOVSD ES:EDI,ESI                    ; 0059f9ba
    MOVSD ES:EDI,ESI                    ; 0059f9bb
    FXCH                                ; 0059f9bc
    FSTP float ptr [EBP + 0x5e]         ; 0059f9be
    FCOMP float ptr [EBP + 0x5e]        ; 0059f9c1
    FNSTSW AX                           ; 0059f9c4
    SAHF                                ; 0059f9c6
    JC 0x0059fa37                       ; 0059f9c7
        ;   XREF to: 0059fa37 (CONDITIONAL_JUMP)  ; LAB_0059fa37
    XOR EDX,EDX                         ; 0059f9c9
    MOV dword ptr [EBP + 0xfffffd76],EDX ; 0059f9cb
    MOV dword ptr [EBP + 0xfffffd72],EDX ; 0059f9d1
    MOV dword ptr [EBP + 0xfffffd7a],EDX ; 0059f9d7
    FLD float ptr [0x005da4de]          ; 0059f9dd | DAT_005da4de
        ;   Label: LAB_0059f9dd
    FLD float ptr [EBP + 0xfffffd72]    ; 0059f9e3
    FMUL ST1                            ; 0059f9e9
    FLD float ptr [EBP + 0xfffffd76]    ; 0059f9eb
    FMUL ST2                            ; 0059f9f1
    PUSH 0x0                            ; 0059f9f3
    FLD float ptr [EBP + 0xfffffd7a]    ; 0059f9f5
    PUSH 0x2                            ; 0059f9fb
    FMULP ST3                           ; 0059f9fd
    PUSH 0x1                            ; 0059f9ff
    LEA EAX,[EBP + 0xfffffd72]          ; 0059fa01
    MOV EDI,dword ptr [0x005fc5a0]      ; 0059fa07 | DAT_005fc5a0
    PUSH EAX                            ; 0059fa0d
    LEA EAX,[EBP + 0xfffffd7e]          ; 0059fa0e
    FXCH                                ; 0059fa14
    FSTP float ptr [EBP + 0xfffffd72]   ; 0059fa16
    PUSH EAX                            ; 0059fa1c
    FSTP float ptr [EBP + 0xfffffd76]   ; 0059fa1d
    PUSH EDI                            ; 0059fa23
    FSTP float ptr [EBP + 0xfffffd7a]   ; 0059fa24
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0 ; 0059fa2a
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    ADD ESP,0x18                        ; 0059fa2f
    JMP 0x0059f486                      ; 0059fa32
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    FLD1                                ; 0059fa37
        ;   Label: LAB_0059fa37
    FLD float ptr [EBP + 0xfffffd72]    ; 0059fa39
    FXCH                                ; 0059fa3f
    FDIV float ptr [EBP + 0x5e]         ; 0059fa41
    FXCH                                ; 0059fa44
    FMUL ST1                            ; 0059fa46
    FLD float ptr [EBP + 0xfffffd76]    ; 0059fa48
    FMUL ST2                            ; 0059fa4e
    FLD float ptr [EBP + 0xfffffd7a]    ; 0059fa50
    FMULP ST3                           ; 0059fa56
    FXCH                                ; 0059fa58
    FSTP float ptr [EBP + 0xfffffd72]   ; 0059fa5a
    FSTP float ptr [EBP + 0xfffffd76]   ; 0059fa60
    FSTP float ptr [EBP + 0xfffffd7a]   ; 0059fa66
    JMP 0x0059f9dd                      ; 0059fa6c
        ;   XREF to: 0059f9dd (UNCONDITIONAL_JUMP)  ; LAB_0059f9dd
    MOV dword ptr [EBX + 0xcde0],0x41800000 ; 0059fa71
        ;   Label: caseD_12
    JMP 0x0059f486                      ; 0059fa7b
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV dword ptr [EBX + 0xcde0],0x40c00000 ; 0059fa80
        ;   Label: caseD_14
    JMP 0x0059f486                      ; 0059fa8a
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV EAX,[0x01d5ba14]                ; 0059fa8f | DAT_01d5ba14
        ;   Label: caseD_16
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059fa94
    LEA EDI,[EBP + 0xfffffeb6]          ; 0059fa9b
    LEA ESI,[EBP + 0xffffff46]          ; 0059faa1
    FLD float ptr [EDX + 0x20]          ; 0059faa7
    FLD float ptr [EDX + 0x24]          ; 0059faaa
    LEA EAX,[EBX + 0x20]                ; 0059faad
    FLD float ptr [EDX + 0x28]          ; 0059fab0
    FXCH ST2                            ; 0059fab3
    FSUB float ptr [EAX]                ; 0059fab5
    FXCH                                ; 0059fab7
    FSUB float ptr [EAX + 0x4]          ; 0059fab9
    FXCH ST2                            ; 0059fabc
    FSUB float ptr [EAX + 0x8]          ; 0059fabe
    FXCH                                ; 0059fac1
    FSTP float ptr [EBP + 0xffffff46]   ; 0059fac3
    FXCH                                ; 0059fac9
    FSTP float ptr [EBP + 0xffffff4a]   ; 0059facb
    FSTP float ptr [EBP + 0xffffff4e]   ; 0059fad1
    LEA EAX,[EBP + 0xfffffeb6]          ; 0059fad7
    MOVSD ES:EDI,ESI                    ; 0059fadd
    MOVSD ES:EDI,ESI                    ; 0059fade
    MOVSD ES:EDI,ESI                    ; 0059fadf
    PUSH EAX                            ; 0059fae0
    LEA ESI,[EBP + 0xffffff0a]          ; 0059fae1
    LEA EDI,[EBP + 0xfffffe92]          ; 0059fae7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059faed
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xffffff0a]          ; 0059faf2
    MOVSD ES:EDI,ESI                    ; 0059faf8
    MOVSD ES:EDI,ESI                    ; 0059faf9
    MOVSD ES:EDI,ESI                    ; 0059fafa
    ADD ESP,0x4                         ; 0059fafb
    FLD float ptr [EBP + 0xfffffe96]    ; 0059fafe
    FSUB float ptr [EBX + 0x34]         ; 0059fb04
    SUB ESP,0x4                         ; 0059fb07
    FSTP float ptr [ESP]                ; 0059fb0a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059fb0d
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBP + 0xfffffe92]    ; 0059fb12
    ADD ESP,0x4                         ; 0059fb18
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fb1b
    SUB ESP,0x4                         ; 0059fb1e
    FSUB float ptr [EBX + 0x30]         ; 0059fb21
    FLD float ptr [EBP + 0x76]          ; 0059fb24
    FXCH                                ; 0059fb27
    FSTP float ptr [ESP]                ; 0059fb29
    FSTP float ptr [EBP + 0x42]         ; 0059fb2c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059fb2f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 0059fb34
    FLD float ptr [EBX + 0x30]          ; 0059fb37
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fb3a
    ADD ESP,0x4                         ; 0059fb3d
    FLD float ptr [EBP + 0x76]          ; 0059fb40
    FXCH ST2                            ; 0059fb43
    FADD float ptr [EBP + 0x42]         ; 0059fb45
    PUSH EBX                            ; 0059fb48
    FXCH                                ; 0059fb49
    FADDP ST2,ST0                       ; 0059fb4b
    FSTP float ptr [EBX + 0x34]         ; 0059fb4d
    FSTP float ptr [EBX + 0x30]         ; 0059fb50
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0059fb53
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059fb58
    MOV dword ptr [EBX + 0xcde0],0x40c00000 ; 0059fb5b
    JMP 0x0059f486                      ; 0059fb65
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV EAX,[0x01d5ba14]                ; 0059fb6a | DAT_01d5ba14
        ;   Label: caseD_17
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059fb6f
    LEA EDI,[EBP + 0xffffff6a]          ; 0059fb76
    LEA ESI,[EBP + 0xfffffdea]          ; 0059fb7c
    FLD float ptr [EDX + 0x20]          ; 0059fb82
    FLD float ptr [EDX + 0x24]          ; 0059fb85
    LEA EAX,[EBX + 0x20]                ; 0059fb88
    FLD float ptr [EDX + 0x28]          ; 0059fb8b
    FXCH ST2                            ; 0059fb8e
    FSUB float ptr [EAX]                ; 0059fb90
    FXCH                                ; 0059fb92
    FSUB float ptr [EAX + 0x4]          ; 0059fb94
    FXCH ST2                            ; 0059fb97
    FSUB float ptr [EAX + 0x8]          ; 0059fb99
    FXCH                                ; 0059fb9c
    FSTP float ptr [EBP + 0xfffffdea]   ; 0059fb9e
    FXCH                                ; 0059fba4
    FSTP float ptr [EBP + 0xfffffdee]   ; 0059fba6
    FSTP float ptr [EBP + 0xfffffdf2]   ; 0059fbac
    LEA EAX,[EBP + 0xffffff6a]          ; 0059fbb2
    MOVSD ES:EDI,ESI                    ; 0059fbb8
    MOVSD ES:EDI,ESI                    ; 0059fbb9
    MOVSD ES:EDI,ESI                    ; 0059fbba
    PUSH EAX                            ; 0059fbbb
    LEA ESI,[EBP + 0xfffffe62]          ; 0059fbbc
    LEA EDI,[EBP + 0xffffff52]          ; 0059fbc2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059fbc8
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffe62]          ; 0059fbcd
    MOVSD ES:EDI,ESI                    ; 0059fbd3
    MOVSD ES:EDI,ESI                    ; 0059fbd4
    MOVSD ES:EDI,ESI                    ; 0059fbd5
    ADD ESP,0x4                         ; 0059fbd6
    FLD float ptr [EBP + 0xffffff56]    ; 0059fbd9
    FSUB float ptr [EBX + 0x34]         ; 0059fbdf
    SUB ESP,0x4                         ; 0059fbe2
    FSTP float ptr [ESP]                ; 0059fbe5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059fbe8
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBP + 0xffffff52]    ; 0059fbed
    ADD ESP,0x4                         ; 0059fbf3
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fbf6
    SUB ESP,0x4                         ; 0059fbf9
    FSUB float ptr [EBX + 0x30]         ; 0059fbfc
    FLD float ptr [EBP + 0x76]          ; 0059fbff
    FXCH                                ; 0059fc02
    FSTP float ptr [ESP]                ; 0059fc04
    FSTP float ptr [EBP + 0x4a]         ; 0059fc07
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059fc0a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 0059fc0f
    FLD float ptr [EBX + 0x30]          ; 0059fc12
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fc15
    ADD ESP,0x4                         ; 0059fc18
    FLD float ptr [EBP + 0x76]          ; 0059fc1b
    FXCH ST2                            ; 0059fc1e
    FADD float ptr [EBP + 0x4a]         ; 0059fc20
    PUSH EBX                            ; 0059fc23
    FXCH                                ; 0059fc24
    FADDP ST2,ST0                       ; 0059fc26
    FSTP float ptr [EBX + 0x34]         ; 0059fc28
    FSTP float ptr [EBX + 0x30]         ; 0059fc2b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0059fc2e
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059fc33
    PUSH 0x40a00000                     ; 0059fc36
    PUSH 0x40400000                     ; 0059fc3b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0059fc40
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fc45
    ADD ESP,0x8                         ; 0059fc48
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059fc4b
    MOV dword ptr [EBX + 0xdc9c],EAX    ; 0059fc4e
    JMP 0x0059f486                      ; 0059fc54
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV EAX,[0x01d5ba14]                ; 0059fc59 | DAT_01d5ba14
        ;   Label: caseD_18
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059fc5e
    PUSH EAX                            ; 0059fc65
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059fc66
    CALL dword ptr [EDX + 0x10c]        ; 0059fc6c
    ADD ESP,0x4                         ; 0059fc72
    TEST EAX,EAX                        ; 0059fc75
    JZ 0x0059fc8e                       ; 0059fc77
        ;   XREF to: 0059fc8e (CONDITIONAL_JUMP)  ; LAB_0059fc8e
    PUSH 0x1                            ; 0059fc79
    PUSH 0x7                            ; 0059fc7b
    MOV EAX,dword ptr [EBP + 0x62]      ; 0059fc7d
    PUSH EAX                            ; 0059fc80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059fc81
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059fc86
    JMP 0x0059f486                      ; 0059fc89
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    MOV EAX,[0x01d5ba14]                ; 0059fc8e | DAT_01d5ba14
        ;   Label: LAB_0059fc8e
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059fc93
    LEA EDI,[EBP + -0x72]               ; 0059fc9a
    LEA ESI,[EBP + 0x6]                 ; 0059fc9d
    FLD float ptr [EDX + 0x20]          ; 0059fca0
    FLD float ptr [EDX + 0x24]          ; 0059fca3
    LEA EAX,[EBX + 0x20]                ; 0059fca6
    FLD float ptr [EDX + 0x28]          ; 0059fca9
    FXCH ST2                            ; 0059fcac
    FSUB float ptr [EAX]                ; 0059fcae
    FXCH                                ; 0059fcb0
    FSUB float ptr [EAX + 0x4]          ; 0059fcb2
    FXCH ST2                            ; 0059fcb5
    FSUB float ptr [EAX + 0x8]          ; 0059fcb7
    FXCH                                ; 0059fcba
    FSTP float ptr [EBP + 0x6]          ; 0059fcbc
    FXCH                                ; 0059fcbf
    FSTP float ptr [EBP + 0xa]          ; 0059fcc1
    FSTP float ptr [EBP + 0xe]          ; 0059fcc4
    LEA EAX,[EBP + -0x72]               ; 0059fcc7
    MOVSD ES:EDI,ESI                    ; 0059fcca
    MOVSD ES:EDI,ESI                    ; 0059fccb
    MOVSD ES:EDI,ESI                    ; 0059fccc
    PUSH EAX                            ; 0059fccd
    LEA ESI,[EBP + 0xfffffdf6]          ; 0059fcce
    LEA EDI,[EBP + 0xfffffd5a]          ; 0059fcd4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059fcda
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffdf6]          ; 0059fcdf
    MOVSD ES:EDI,ESI                    ; 0059fce5
    MOVSD ES:EDI,ESI                    ; 0059fce6
    MOVSD ES:EDI,ESI                    ; 0059fce7
    ADD ESP,0x4                         ; 0059fce8
    FLD float ptr [EBP + 0xfffffd5e]    ; 0059fceb
    FSUB float ptr [EBX + 0x34]         ; 0059fcf1
    SUB ESP,0x4                         ; 0059fcf4
    FSTP float ptr [ESP]                ; 0059fcf7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059fcfa
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBP + 0xfffffd5a]    ; 0059fcff
    ADD ESP,0x4                         ; 0059fd05
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fd08
    SUB ESP,0x4                         ; 0059fd0b
    FSUB float ptr [EBX + 0x30]         ; 0059fd0e
    FLD float ptr [EBP + 0x76]          ; 0059fd11
    FXCH                                ; 0059fd14
    FSTP float ptr [ESP]                ; 0059fd16
    FSTP float ptr [EBP + 0x52]         ; 0059fd19
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059fd1c
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 0059fd21
    FLD float ptr [EBX + 0x30]          ; 0059fd24
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fd27
    ADD ESP,0x4                         ; 0059fd2a
    FLD float ptr [EBP + 0x76]          ; 0059fd2d
    FXCH ST2                            ; 0059fd30
    FADD float ptr [EBP + 0x52]         ; 0059fd32
    PUSH EBX                            ; 0059fd35
    FXCH                                ; 0059fd36
    FADDP ST2,ST0                       ; 0059fd38
    FSTP float ptr [EBX + 0x34]         ; 0059fd3a
    FSTP float ptr [EBX + 0x30]         ; 0059fd3d
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0059fd40
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059fd45
    MOV ECX,dword ptr [0x02d0c150]      ; 0059fd48 | g_CWeaponClassInfo.name_hash
    PUSH ECX                            ; 0059fd4e
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 0059fd4f
    PUSH ESI                            ; 0059fd55
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0059fd56
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 0059fd5b
    ADD ESP,0x8                         ; 0059fd5d
    MOV dword ptr [EBP + 0x5a],EAX      ; 0059fd60
    TEST EAX,EAX                        ; 0059fd63
    JZ 0x0059fdb9                       ; 0059fd65
        ;   XREF to: 0059fdb9 (CONDITIONAL_JUMP)  ; LAB_0059fdb9
    MOV EDI,dword ptr [0x00603b28]      ; 0059fd67 | g_CDemonSetPtr
    PUSH EDI                            ; 0059fd6d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0059fd6e
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0059fd73
    MOV EAX,dword ptr [ESI + 0x154]     ; 0059fd76
    MOV dword ptr [ESI + 0x304],EBX     ; 0059fd7c
    PUSH ESI                            ; 0059fd82
    MOV EDI,dword ptr [ESI + 0x568]     ; 0059fd83
    MOV dword ptr [ESI + 0x568],0x64    ; 0059fd89
    CALL dword ptr [EAX + 0xe8]         ; 0059fd93
    ADD ESP,0x4                         ; 0059fd99
    TEST EAX,EAX                        ; 0059fd9c
    JZ 0x0059fdb0                       ; 0059fd9e
        ;   XREF to: 0059fdb0 (CONDITIONAL_JUMP)  ; LAB_0059fdb0
    PUSH ESI                            ; 0059fda0
    MOV EAX,dword ptr [ESI + 0x154]     ; 0059fda1
    CALL dword ptr [EAX + 0xe4]         ; 0059fda7
    ADD ESP,0x4                         ; 0059fdad
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0059fdb0
        ;   Label: LAB_0059fdb0
    MOV dword ptr [EAX + 0x568],EDI     ; 0059fdb3
    FLD float ptr [EBX + 0xdc9c]        ; 0059fdb9
        ;   Label: LAB_0059fdb9
    FSUB float ptr [EBP + 0x92]         ; 0059fdbf
    FST float ptr [EBX + 0xdc9c]        ; 0059fdc5
    FLDZ                                ; 0059fdcb
    FCOMPP                              ; 0059fdcd
    FNSTSW AX                           ; 0059fdcf
    SAHF                                ; 0059fdd1
    JC 0x0059f486                       ; 0059fdd2
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    PUSH 0x1                            ; 0059fdd8
    PUSH 0x7                            ; 0059fdda
    LEA EAX,[EBX + 0x158]               ; 0059fddc
    PUSH EAX                            ; 0059fde2
    MOV dword ptr [EBX + 0xdc9c],0x0    ; 0059fde3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059fded
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059fdf2
    JMP 0x0059f486                      ; 0059fdf5
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    PUSH 0x64                           ; 0059fdfa
        ;   Label: caseD_d
    PUSH EAX                            ; 0059fdfc
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0059fdfd
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0059fe02
    MOV EDX,dword ptr [EBP + 0x62]      ; 0059fe05
    PUSH EDX                            ; 0059fe08
    MOV ESI,EAX                         ; 0059fe09
    CALL core_motion.cpp_FUN_004fc930   ; 0059fe0b
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059fe10
    ADD ESP,0x4                         ; 0059fe13
    FLD float ptr [EBP + 0x76]          ; 0059fe16
    FCOMP double ptr [0x005da4d6]       ; 0059fe19 | DAT_005da4d6
    FNSTSW AX                           ; 0059fe1f
    SAHF                                ; 0059fe21
    JBE 0x0059fe3d                      ; 0059fe22
        ;   XREF to: 0059fe3d (CONDITIONAL_JUMP)  ; caseD_a
    CMP ESI,0x32                        ; 0059fe24
    JGE 0x0059fefc                      ; 0059fe27
        ;   XREF to: 0059fefc (CONDITIONAL_JUMP)  ; LAB_0059fefc
    PUSH 0x1                            ; 0059fe2d
    PUSH 0x1c                           ; 0059fe2f
    MOV ESI,dword ptr [EBP + 0x62]      ; 0059fe31
    PUSH ESI                            ; 0059fe34
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059fe35
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0059fe35
    ADD ESP,0xc                         ; 0059fe3a
    LEA EAX,[EBX + 0x158]               ; 0059fe3d
        ;   Label: caseD_3
    PUSH EAX                            ; 0059fe43
    CALL core_motion.cpp_FUN_004fc930   ; 0059fe44
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059fe49
    LEA EAX,[EBP + 0xfffffd1e]          ; 0059fe4c
    PUSH EAX                            ; 0059fe52
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0059fe53
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 0059fe58
    ADD ESP,0x4                         ; 0059fe5e
    MOV dword ptr [EBP + 0xfffffd22],EAX ; 0059fe61
    LEA EAX,[EBP + 0xfffffd1e]          ; 0059fe67
    MOV EDX,dword ptr [0x02d24cf4]      ; 0059fe6d | DAT_02d24cf4
    PUSH EAX                            ; 0059fe73
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059fe74
    SUB EAX,EDX                         ; 0059fe7b
    MOV dword ptr [EBP + 0xfffffd52],EBX ; 0059fe7d
    MOV EDX,EAX                         ; 0059fe83
    MOV dword ptr [EBP + 0xfffffd56],EBX ; 0059fe85
    SHL EDX,0x4                         ; 0059fe8b
    LEA EAX,[EBX + 0xfd8]               ; 0059fe8e
    ADD EAX,EDX                         ; 0059fe94
    PUSH 0x3f19999a                     ; 0059fe96
    PUSH EAX                            ; 0059fe9b
    PUSH 0x2cfd900                      ; 0059fe9c | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffe4a]          ; 0059fea1
    LEA EDI,[EBP + -0x2a]               ; 0059fea7
    CALL core_xform.cpp_FUN_00583260    ; 0059feaa
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0059feaf
    LEA EAX,[EBP + -0x2a]               ; 0059feb2
    LEA ESI,[EBP + 0xfffffe4a]          ; 0059feb5
    PUSH EAX                            ; 0059febb
    MOVSD ES:EDI,ESI                    ; 0059febc
    MOVSD ES:EDI,ESI                    ; 0059febd
    MOVSD ES:EDI,ESI                    ; 0059febe
    PUSH EBX                            ; 0059febf
    LEA ESI,[EBP + 0xfffffdba]          ; 0059fec0
    CALL core_actor.cpp_FUN_00408b80    ; 0059fec6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0059fecb
    LEA EAX,[EBP + 0xfffffeaa]          ; 0059fece
    PUSH EAX                            ; 0059fed4
    LEA EDI,[EBP + 0xfffffeaa]          ; 0059fed5
    LEA ESI,[EBP + 0xfffffdba]          ; 0059fedb
    PUSH EBX                            ; 0059fee1
    MOVSD ES:EDI,ESI                    ; 0059fee2
    MOVSD ES:EDI,ESI                    ; 0059fee3
    MOVSD ES:EDI,ESI                    ; 0059fee4
    CALL core_enemy.cpp_FUN_004893f0    ; 0059fee5
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0059feea
    MOV dword ptr [EBX + 0xcde0],0x40000000 ; 0059feed
    JMP 0x0059f486                      ; 0059fef7
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    CMP ESI,0x64                        ; 0059fefc
        ;   Label: LAB_0059fefc
    JGE 0x0059fe3d                      ; 0059feff
        ;   XREF to: 0059fe3d (CONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x1                            ; 0059ff05
    PUSH 0x1d                           ; 0059ff07
    MOV ECX,dword ptr [EBP + 0x62]      ; 0059ff09
    PUSH ECX                            ; 0059ff0c
    JMP 0x0059fe35                      ; 0059ff0d
        ;   XREF to: 0059fe35 (UNCONDITIONAL_JUMP)  ; LAB_0059fe35
    MOV EAX,[0x01d5ba14]                ; 0059ff12 | DAT_01d5ba14
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059ff17
    PUSH EAX                            ; 0059ff1e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059ff1f
    CALL dword ptr [EDX + 0x10c]        ; 0059ff25
    ADD ESP,0x4                         ; 0059ff2b
    TEST EAX,EAX                        ; 0059ff2e
    JNZ 0x0059f486                      ; 0059ff30
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [EBP + 0x66]          ; 0059ff36
    CALL crt_math.c_round_FUN_005a3120  ; 0059ff39
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x76]        ; 0059ff3e
    MOV ESI,dword ptr [EBP + 0x76]      ; 0059ff41
    PUSH ESI                            ; 0059ff44
    PUSH EBX                            ; 0059ff45
    CALL core_styldemo.cpp_FUN_005a0480 ; 0059ff46
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)  ; undefined core_styldemo.cpp_FUN_005a0480()
    ADD ESP,0x8                         ; 0059ff4b
    TEST EAX,EAX                        ; 0059ff4e
    JNZ 0x0059f486                      ; 0059ff50
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [EBP + 0x66]          ; 0059ff56
    FCOMP float ptr [0x005e84dc]        ; 0059ff59 | DAT_005e84dc
    FNSTSW AX                           ; 0059ff5f
    SAHF                                ; 0059ff61
    JA 0x0059ff77                       ; 0059ff62
        ;   XREF to: 0059ff77 (CONDITIONAL_JUMP)  ; LAB_0059ff77
    FLD float ptr [EBX + 0xcde0]        ; 0059ff64
    FLDZ                                ; 0059ff6a
    FCOMPP                              ; 0059ff6c
    FNSTSW AX                           ; 0059ff6e
    SAHF                                ; 0059ff70
    JC 0x0059f486                       ; 0059ff71
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [EBP + 0x66]          ; 0059ff77
        ;   Label: LAB_0059ff77
    FCOMP float ptr [EBX + 0xcddc]      ; 0059ff7a
    FNSTSW AX                           ; 0059ff80
    SAHF                                ; 0059ff82
    JNC 0x0059f486                      ; 0059ff83
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [EBP + 0x66]          ; 0059ff89
    LEA EDX,[EBX + 0x158]               ; 0059ff8c
    FCOMP float ptr [0x005e84e8]        ; 0059ff92 | DAT_005e84e8
    FNSTSW AX                           ; 0059ff98
    SAHF                                ; 0059ff9a
    JNC 0x0059ffaf                      ; 0059ff9b
        ;   XREF to: 0059ffaf (CONDITIONAL_JUMP)  ; LAB_0059ffaf
    PUSH 0x1                            ; 0059ff9d
    PUSH 0x1                            ; 0059ff9f
    PUSH EDX                            ; 0059ffa1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059ffa2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ffa7
    JMP 0x0059f486                      ; 0059ffaa
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    PUSH 0x1                            ; 0059ffaf
        ;   Label: LAB_0059ffaf
    PUSH 0x8                            ; 0059ffb1
    PUSH EDX                            ; 0059ffb3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059ffb4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ffb9
    JMP 0x0059f486                      ; 0059ffbc
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0059ffc1
        ;   Label: caseD_1
    JZ 0x0059f486                       ; 0059ffc8
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [EBP + 0x66]          ; 0059ffce
    CALL crt_math.c_round_FUN_005a3120  ; 0059ffd1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x76]        ; 0059ffd6
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059ffd9
    PUSH EAX                            ; 0059ffdc
    PUSH EBX                            ; 0059ffdd
    CALL core_styldemo.cpp_FUN_005a0480 ; 0059ffde
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)  ; undefined core_styldemo.cpp_FUN_005a0480()
    ADD ESP,0x8                         ; 0059ffe3
    TEST EAX,EAX                        ; 0059ffe6
    JNZ 0x0059f486                      ; 0059ffe8
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [0x005e84dc]          ; 0059ffee | DAT_005e84dc
    FADD double ptr [0x005da4e6]        ; 0059fff4 | DAT_005da4e6
    LEA ESI,[EBX + 0x158]               ; 0059fffa
    FLD float ptr [EBP + 0x66]          ; 005a0000
    FCOMPP                              ; 005a0003
    FNSTSW AX                           ; 005a0005
    SAHF                                ; 005a0007
    JBE 0x005a0046                      ; 005a0008
        ;   XREF to: 005a0046 (CONDITIONAL_JUMP)  ; LAB_005a0046
    FLD float ptr [EBX + 0xdc94]        ; 005a000a
    FLDZ                                ; 005a0010
    FCOMPP                              ; 005a0012
    FNSTSW AX                           ; 005a0014
    SAHF                                ; 005a0016
    JC 0x005a0062                       ; 005a0017
        ;   XREF to: 005a0062 (CONDITIONAL_JUMP)  ; LAB_005a0062
    PUSH 0x64                           ; 005a0019
    PUSH 0x0                            ; 005a001b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005a001d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a0022
    CMP EAX,0x55                        ; 005a0025
    JLE 0x005a0062                      ; 005a0028
        ;   XREF to: 005a0062 (CONDITIONAL_JUMP)  ; LAB_005a0062
    PUSH 0x1                            ; 005a002a
    PUSH 0x19                           ; 005a002c
    PUSH ESI                            ; 005a002e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a002f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a0034
    MOV dword ptr [EBX + 0xdc94],0x41700000 ; 005a0037
    JMP 0x0059f486                      ; 005a0041
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    PUSH 0x1                            ; 005a0046
        ;   Label: LAB_005a0046
    PUSH 0x0                            ; 005a0048
    PUSH ESI                            ; 005a004a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a004b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a0050
    MOV dword ptr [EBX + 0xcde0],0x0    ; 005a0053
    JMP 0x0059f486                      ; 005a005d
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    PUSH 0x3e32b8c2                     ; 005a0062
        ;   Label: LAB_005a0062
    FLD float ptr [0x005e84dc]          ; 005a0067 | DAT_005e84dc
    PUSH 0x3e4ccccd                     ; 005a006d
    LEA EAX,[EBX + 0x249c]              ; 005a0072
    XOR EDX,EDX                         ; 005a0078
    FADD double ptr [0x005da4ee]        ; 005a007a | DAT_005da4ee
    MOV dword ptr [EAX + 0x8],0x0       ; 005a0080
    FSTP float ptr [EBP + 0x76]         ; 005a0087
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a008a
    MOV dword ptr [EAX + 0x4],ECX       ; 005a008d
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a0090
    MOV dword ptr [EAX],ECX             ; 005a0093
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a0095
    MOV dword ptr [EBP + -0x66],EDX     ; 005a0098
    MOV dword ptr [EBP + -0x5e],EAX     ; 005a009b
    LEA EAX,[EBP + -0x66]               ; 005a009e
    MOV dword ptr [EBP + -0x62],EDX     ; 005a00a1
    PUSH EAX                            ; 005a00a4
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005a00a5
    PUSH EAX                            ; 005a00ab
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a00ac
    CALL dword ptr [EDX + 0xc4]         ; 005a00b2
    ADD ESP,0x4                         ; 005a00b8
    PUSH EAX                            ; 005a00bb
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005a00bc
    ADD EAX,0x20                        ; 005a00c2
    PUSH EAX                            ; 005a00c5
    PUSH EBX                            ; 005a00c6
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 005a00c7
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005a00cc
    TEST EAX,EAX                        ; 005a00cf
    JL 0x0059f486                       ; 005a00d1
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    FLD float ptr [EBP + 0x66]          ; 005a00d7
    FCOMP float ptr [0x005e84e8]        ; 005a00da | DAT_005e84e8
    FNSTSW AX                           ; 005a00e0
    SAHF                                ; 005a00e2
    JBE 0x005a00fd                      ; 005a00e3
        ;   XREF to: 005a00fd (CONDITIONAL_JUMP)  ; LAB_005a00fd
    CMP EDI,0x8                         ; 005a00e5
    JZ 0x005a00fd                       ; 005a00e8
        ;   XREF to: 005a00fd (CONDITIONAL_JUMP)  ; LAB_005a00fd
    PUSH 0x1                            ; 005a00ea
    PUSH 0x8                            ; 005a00ec
    LEA EAX,[EBX + 0x158]               ; 005a00ee
    PUSH EAX                            ; 005a00f4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a00f5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a00fa
    FLD float ptr [EBP + 0x66]          ; 005a00fd
        ;   Label: LAB_005a00fd
    FCOMP float ptr [EBX + 0xcddc]      ; 005a0100
    FNSTSW AX                           ; 005a0106
    SAHF                                ; 005a0108
    JBE 0x0059f486                      ; 005a0109
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    LEA EAX,[EBX + 0x158]               ; 005a010f
    CMP EDI,0x8                         ; 005a0115
    JZ 0x005a012c                       ; 005a0118
        ;   XREF to: 005a012c (CONDITIONAL_JUMP)  ; LAB_005a012c
    PUSH 0x1                            ; 005a011a
    PUSH 0x0                            ; 005a011c
    PUSH EAX                            ; 005a011e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a011f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a0124
    JMP 0x0059f486                      ; 005a0127
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    PUSH 0x1                            ; 005a012c
        ;   Label: LAB_005a012c
    PUSH 0x7                            ; 005a012e
    PUSH EAX                            ; 005a0130
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a0131
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a0136
    JMP 0x0059f486                      ; 005a0139
        ;   XREF to: 0059f486 (UNCONDITIONAL_JUMP)  ; caseD_1a
    CMP ESI,0x1b                        ; 005a013e
        ;   Label: LAB_005a013e
    JA 0x0059f486                       ; 005a0141
        ;   XREF to: 0059f486 (CONDITIONAL_JUMP)  ; caseD_1a
    JMP dword ptr [ESI*0x4 + 0x59e58c]  ; 005a0147 | caseD_7 | caseD_9 | caseD_a
        ;   Label: switchD

