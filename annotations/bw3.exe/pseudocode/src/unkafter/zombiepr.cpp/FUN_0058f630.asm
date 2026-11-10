; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombiepr_cpp_FUN_0058f630(CCharacter *param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_zombprie.cpp_CZombiePriest_processDamage_FUN_0058f990 at 0058f9ad
;
; Referenced Globals:
;   undefined1* switchdataD_0058f614 = 0058f670
;   TerminatedCString s_limb_wav_005d8cae
;   undefined4 DAT_005d8cb8
;   undefined4 DAT_005d8cc0
;   undefined4 DAT_005d8cc8
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field468_0x204
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f630
        ;   Label: unkafter_zombiepr.cpp_FUN_0058f630
    PUSH ESI                            ; 0058f631
    PUSH EDI                            ; 0058f632
    PUSH EBP                            ; 0058f633
    MOV EBP,ESP                         ; 0058f634
    SUB ESP,0x1c                        ; 0058f636
    AND ESP,0xfffffff8                  ; 0058f639
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058f63c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058f63f
    FLD float ptr [ESI + 0x2c]          ; 0058f642
    FLDZ                                ; 0058f645
    FCOMPP                              ; 0058f647
    FNSTSW AX                           ; 0058f649
    SAHF                                ; 0058f64b
    JNC 0x0058f678                      ; 0058f64c
        ;   XREF to: 0058f678 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0058f64e
    JNZ 0x0058f678                      ; 0058f651
        ;   XREF to: 0058f678 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0058f653
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 0058f658
    MOV EDI,0x6                         ; 0058f65a
    SAR EDX,0x1f                        ; 0058f65f
    IDIV EDI                            ; 0058f662
    CMP EDX,0x5                         ; 0058f664
    JA 0x0058f678                       ; 0058f667
        ;   XREF to: 0058f678 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x58f614]  ; 0058f669 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd0e0]    ; 0058f670
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0058f676
        ;   Label: LAB_0058f676
    MOV ECX,dword ptr [EBX + 0xd0e0]    ; 0058f678
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0058f67e
    CMP EAX,ECX                         ; 0058f680
    JNZ 0x0058f766                      ; 0058f682
        ;   XREF to: 0058f766 (CONDITIONAL_JUMP)  ; LAB_0058f766
    MOV ECX,dword ptr [EBX + 0xd104]    ; 0058f688
        ;   Label: LAB_0058f688
    CMP ECX,dword ptr [ESI]             ; 0058f68e
    JNZ 0x0058f6c3                      ; 0058f690
        ;   XREF to: 0058f6c3 (CONDITIONAL_JUMP)  ; LAB_0058f6c3
    PUSH 0x3f800000                     ; 0058f692
    PUSH 0x0                            ; 0058f697
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0058f699
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0058f69e
    FLD float ptr [ESP + 0x20]          ; 0058f6a2
    ADD ESP,0x8                         ; 0058f6a6
    FST double ptr [ESP]                ; 0058f6a9
    FCOMP double ptr [0x005d8cb8]       ; 0058f6ac | DAT_005d8cb8
    FNSTSW AX                           ; 0058f6b2
    SAHF                                ; 0058f6b4
    JNC 0x0058f7a9                      ; 0058f6b5
        ;   XREF to: 0058f7a9 (CONDITIONAL_JUMP)  ; LAB_0058f7a9
    MOV EAX,dword ptr [EBX + 0xd0e0]    ; 0058f6bb
    MOV dword ptr [ESI],EAX             ; 0058f6c1
        ;   Label: LAB_0058f6c1
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0058f6c3
        ;   Label: LAB_0058f6c3
    MOV EDI,dword ptr [EBX + 0xd108]    ; 0058f6c6
    MOV dword ptr [ESP + 0x14],EAX      ; 0058f6cc
    CMP EDI,dword ptr [ESI]             ; 0058f6d0
    JNZ 0x0058f6dc                      ; 0058f6d2
        ;   XREF to: 0058f6dc (CONDITIONAL_JUMP)  ; LAB_0058f6dc
    MOV dword ptr [ESP + 0x14],0x3d4ccccd ; 0058f6d4
    MOV EDX,dword ptr [EBX + 0xd104]    ; 0058f6dc
        ;   Label: LAB_0058f6dc
    CMP EDX,dword ptr [ESI]             ; 0058f6e2
    JNZ 0x0058f6ee                      ; 0058f6e4
        ;   XREF to: 0058f6ee (CONDITIONAL_JUMP)  ; LAB_0058f6ee
    MOV dword ptr [ESP + 0x14],0x3d75c28f ; 0058f6e6
    MOV EAX,[0x005fe9dc]                ; 0058f6ee | g_CGamePtr
        ;   Label: LAB_0058f6ee
    CMP dword ptr [EAX + 0x204],0x0     ; 0058f6f3 | g_CGameInstance.field468_0x204
    JZ 0x0058f704                       ; 0058f6fa
        ;   XREF to: 0058f704 (CONDITIONAL_JUMP)  ; LAB_0058f704
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 0058f6fc
    MOV EAX,[0x005fe9dc]                ; 0058f704 | g_CGamePtr
        ;   Label: LAB_0058f704
    MOV EDX,dword ptr [EAX + 0x14]      ; 0058f709 | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 0058f70c
    JNZ 0x0058f714                      ; 0058f70e
        ;   XREF to: 0058f714 (CONDITIONAL_JUMP)  ; LAB_0058f714
    MOV dword ptr [ESP + 0x14],EDX      ; 0058f710
    PUSH dword ptr [ESP + 0x14]         ; 0058f714
        ;   Label: LAB_0058f714
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0058f718
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0058f71d
    TEST EAX,EAX                        ; 0058f720
    JNZ 0x0058f7c6                      ; 0058f722
        ;   XREF to: 0058f7c6 (CONDITIONAL_JUMP)  ; LAB_0058f7c6
    MOV ESP,EBP                         ; 0058f728
        ;   Label: LAB_0058f728
    POP EBP                             ; 0058f72a
    POP EDI                             ; 0058f72b
    POP ESI                             ; 0058f72c
    POP EBX                             ; 0058f72d
    RET                                 ; 0058f72e
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 0058f72f
        ;   Label: caseD_1
    JMP 0x0058f676                      ; 0058f735
        ;   XREF to: 0058f676 (UNCONDITIONAL_JUMP)  ; LAB_0058f676
    MOV EAX,dword ptr [EBX + 0xd0e8]    ; 0058f73a
        ;   Label: caseD_2
    JMP 0x0058f676                      ; 0058f740
        ;   XREF to: 0058f676 (UNCONDITIONAL_JUMP)  ; LAB_0058f676
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 0058f745
        ;   Label: caseD_3
    JMP 0x0058f676                      ; 0058f74b
        ;   XREF to: 0058f676 (UNCONDITIONAL_JUMP)  ; LAB_0058f676
    MOV EAX,dword ptr [EBX + 0xd108]    ; 0058f750
        ;   Label: caseD_4
    JMP 0x0058f676                      ; 0058f756
        ;   XREF to: 0058f676 (UNCONDITIONAL_JUMP)  ; LAB_0058f676
    MOV EAX,dword ptr [EBX + 0xd104]    ; 0058f75b
        ;   Label: caseD_5
    JMP 0x0058f676                      ; 0058f761
        ;   XREF to: 0058f676 (UNCONDITIONAL_JUMP)  ; LAB_0058f676
    CMP EAX,dword ptr [EBX + 0xd0e4]    ; 0058f766
        ;   Label: LAB_0058f766
    JZ 0x0058f688                       ; 0058f76c
        ;   XREF to: 0058f688 (CONDITIONAL_JUMP)  ; LAB_0058f688
    CMP EAX,dword ptr [EBX + 0xd0e8]    ; 0058f772
    JZ 0x0058f688                       ; 0058f778
        ;   XREF to: 0058f688 (CONDITIONAL_JUMP)  ; LAB_0058f688
    CMP EAX,dword ptr [EBX + 0xd0ec]    ; 0058f77e
    JZ 0x0058f688                       ; 0058f784
        ;   XREF to: 0058f688 (CONDITIONAL_JUMP)  ; LAB_0058f688
    CMP EAX,dword ptr [EBX + 0xd104]    ; 0058f78a
    JZ 0x0058f688                       ; 0058f790
        ;   XREF to: 0058f688 (CONDITIONAL_JUMP)  ; LAB_0058f688
    CMP EAX,dword ptr [EBX + 0xd108]    ; 0058f796
    JZ 0x0058f688                       ; 0058f79c
        ;   XREF to: 0058f688 (CONDITIONAL_JUMP)  ; LAB_0058f688
    MOV ESP,EBP                         ; 0058f7a2
    POP EBP                             ; 0058f7a4
    POP EDI                             ; 0058f7a5
    POP ESI                             ; 0058f7a6
    POP EBX                             ; 0058f7a7
    RET                                 ; 0058f7a8
    FLD double ptr [ESP]                ; 0058f7a9
        ;   Label: LAB_0058f7a9
    FCOMP double ptr [0x005d8cc0]       ; 0058f7ac | DAT_005d8cc0
    FNSTSW AX                           ; 0058f7b2
    SAHF                                ; 0058f7b4
    JNC 0x0058f6c3                      ; 0058f7b5
        ;   XREF to: 0058f6c3 (CONDITIONAL_JUMP)  ; LAB_0058f6c3
    MOV EAX,dword ptr [EBX + 0xd0e8]    ; 0058f7bb
    JMP 0x0058f6c1                      ; 0058f7c1
        ;   XREF to: 0058f6c1 (UNCONDITIONAL_JUMP)  ; LAB_0058f6c1
    PUSH 0x0                            ; 0058f7c6
        ;   Label: LAB_0058f7c6
    PUSH 0x0                            ; 0058f7c8
    PUSH 0x0                            ; 0058f7ca
    PUSH EBX                            ; 0058f7cc
    LEA EAX,[ESI + 0xc]                 ; 0058f7cd
    PUSH EAX                            ; 0058f7d0
    LEA EAX,[EBX + 0x30]                ; 0058f7d1
    PUSH EAX                            ; 0058f7d4
    LEA EAX,[EBX + 0x20]                ; 0058f7d5
    PUSH EAX                            ; 0058f7d8
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 0058f7d9
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0058f7de
    MOV EDI,EAX                         ; 0058f7e1
    PUSH 0x1                            ; 0058f7e3
    MOV dword ptr [ESP + 0x14],EAX      ; 0058f7e5
    MOV EAX,dword ptr [ESI]             ; 0058f7e9
    PUSH EAX                            ; 0058f7eb
    PUSH EDI                            ; 0058f7ec
    PUSH EBX                            ; 0058f7ed
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 0058f7ee
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0058f7f3
    MOV EDX,dword ptr [EBX + 0xd0e0]    ; 0058f7f5
    ADD ESP,0x10                        ; 0058f7fb
    CMP EAX,EDX                         ; 0058f7fe
    JNZ 0x0058f815                      ; 0058f800
        ;   XREF to: 0058f815 (CONDITIONAL_JUMP)  ; LAB_0058f815
    PUSH 0x1                            ; 0058f802
    MOV ECX,dword ptr [EBX + 0xd0e4]    ; 0058f804
    PUSH ECX                            ; 0058f80a
    PUSH EDI                            ; 0058f80b
    PUSH EBX                            ; 0058f80c
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 0058f80d
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0058f812
    MOV EDI,dword ptr [EBX + 0xd0e8]    ; 0058f815
        ;   Label: LAB_0058f815
    CMP EDI,dword ptr [ESI]             ; 0058f81b
    JNZ 0x0058f836                      ; 0058f81d
        ;   XREF to: 0058f836 (CONDITIONAL_JUMP)  ; LAB_0058f836
    PUSH 0x1                            ; 0058f81f
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 0058f821
    PUSH EAX                            ; 0058f827
    MOV EDX,dword ptr [ESP + 0x18]      ; 0058f828
    PUSH EDX                            ; 0058f82c
    PUSH EBX                            ; 0058f82d
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 0058f82e
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0058f833
    MOV ECX,dword ptr [EBX + 0xd104]    ; 0058f836
        ;   Label: LAB_0058f836
    CMP ECX,dword ptr [ESI]             ; 0058f83c
    JNZ 0x0058f8ce                      ; 0058f83e
        ;   XREF to: 0058f8ce (CONDITIONAL_JUMP)  ; LAB_0058f8ce
    PUSH 0x1                            ; 0058f844
    LEA EDI,[ESI + 0xc]                 ; 0058f846
    PUSH EDI                            ; 0058f849
    MOV EAX,dword ptr [EBX + 0xd0e8]    ; 0058f84a
    PUSH EAX                            ; 0058f850
    PUSH EBX                            ; 0058f851
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0058f852
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0058f857
    PUSH 0x1                            ; 0058f85a
    PUSH EDI                            ; 0058f85c
    MOV EDX,dword ptr [EBX + 0xd0ec]    ; 0058f85d
    PUSH EDX                            ; 0058f863
    PUSH EBX                            ; 0058f864
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0058f865
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0058f86a
    PUSH 0x1                            ; 0058f86d
    PUSH EDI                            ; 0058f86f
    MOV ECX,dword ptr [EBX + 0xd0e0]    ; 0058f870
    PUSH ECX                            ; 0058f876
    PUSH EBX                            ; 0058f877
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0058f878
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0058f87d
    PUSH 0x1                            ; 0058f880
    PUSH EDI                            ; 0058f882
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 0058f883
    PUSH EAX                            ; 0058f889
    PUSH EBX                            ; 0058f88a
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0058f88b
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0058f890
    PUSH 0x1                            ; 0058f893
    PUSH EDI                            ; 0058f895
    MOV EDX,dword ptr [EBX + 0xd108]    ; 0058f896
    PUSH EDX                            ; 0058f89c
    PUSH EBX                            ; 0058f89d
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0058f89e
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0058f8a3
    PUSH 0x0                            ; 0058f8a6
    PUSH 0x1                            ; 0058f8a8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f8aa
    PUSH EBX                            ; 0058f8b0
    CALL dword ptr [EAX + 0x128]        ; 0058f8b1
    ADD ESP,0xc                         ; 0058f8b7
    PUSH 0x0                            ; 0058f8ba
    PUSH 0x0                            ; 0058f8bc
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f8be
    PUSH EBX                            ; 0058f8c4
    CALL dword ptr [EAX + 0x128]        ; 0058f8c5
    ADD ESP,0xc                         ; 0058f8cb
    PUSH 0x5d8cae                       ; 0058f8ce | = "limb?.wav"
        ;   Label: LAB_0058f8ce
    PUSH EBX                            ; 0058f8d3
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810 ; 0058f8d4
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0058f8d9
    MOV ECX,dword ptr [ESP + 0x10]      ; 0058f8dc
    PUSH ECX                            ; 0058f8e0
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 0058f8e1
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd108]    ; 0058f8e6
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058f8ec
    ADD ESP,0x4                         ; 0058f8f3
    TEST EDI,EDI                        ; 0058f8f6
    JZ 0x0058f96f                       ; 0058f8f8
        ;   XREF to: 0058f96f (CONDITIONAL_JUMP)  ; LAB_0058f96f
    FLD float ptr [ESI + 0x8]           ; 0058f8fa
        ;   Label: LAB_0058f8fa
    FLD ST0                             ; 0058f8fd
    FMUL double ptr [0x005d8cc8]        ; 0058f8ff | DAT_005d8cc8
    MOV EAX,dword ptr [ESI]             ; 0058f905
    FSTP ST1                            ; 0058f907
    FSTP float ptr [ESI + 0x8]          ; 0058f909
    CMP EAX,dword ptr [EBX + 0xd0e8]    ; 0058f90c
    JNZ 0x0058f978                      ; 0058f912
        ;   XREF to: 0058f978 (CONDITIONAL_JUMP)  ; LAB_0058f978
    PUSH 0x0                            ; 0058f914
        ;   Label: LAB_0058f914
    PUSH 0x1                            ; 0058f916
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f918
    PUSH EBX                            ; 0058f91e
    CALL dword ptr [EAX + 0x128]        ; 0058f91f
    ADD ESP,0xc                         ; 0058f925
    PUSH 0x0                            ; 0058f928
    PUSH 0x0                            ; 0058f92a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f92c
    PUSH EBX                            ; 0058f932
    CALL dword ptr [EAX + 0x128]        ; 0058f933
    ADD ESP,0xc                         ; 0058f939
    MOV EDI,dword ptr [EBX + 0xd0e0]    ; 0058f93c
        ;   Label: LAB_0058f93c
    MOV EAX,dword ptr [ESI]             ; 0058f942
    CMP EAX,EDI                         ; 0058f944
    JZ 0x0058f954                       ; 0058f946
        ;   XREF to: 0058f954 (CONDITIONAL_JUMP)  ; LAB_0058f954
    CMP EAX,dword ptr [EBX + 0xd0e4]    ; 0058f948
    JNZ 0x0058f728                      ; 0058f94e
        ;   XREF to: 0058f728 (CONDITIONAL_JUMP)  ; LAB_0058f728
    PUSH 0x0                            ; 0058f954
        ;   Label: LAB_0058f954
    PUSH 0x0                            ; 0058f956
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f958
    PUSH EBX                            ; 0058f95e
    CALL dword ptr [EAX + 0x128]        ; 0058f95f
    ADD ESP,0xc                         ; 0058f965
    MOV ESP,EBP                         ; 0058f968
    POP EBP                             ; 0058f96a
    POP EDI                             ; 0058f96b
    POP ESI                             ; 0058f96c
    POP EBX                             ; 0058f96d
    RET                                 ; 0058f96e
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0058f96f
        ;   Label: LAB_0058f96f
    JMP 0x0058f8fa                      ; 0058f976
        ;   XREF to: 0058f8fa (UNCONDITIONAL_JUMP)  ; LAB_0058f8fa
    CMP EAX,dword ptr [EBX + 0xd0ec]    ; 0058f978
        ;   Label: LAB_0058f978
    JZ 0x0058f914                       ; 0058f97e
        ;   XREF to: 0058f914 (CONDITIONAL_JUMP)  ; LAB_0058f914
    JMP 0x0058f93c                      ; 0058f980
        ;   XREF to: 0058f93c (UNCONDITIONAL_JUMP)  ; LAB_0058f93c

