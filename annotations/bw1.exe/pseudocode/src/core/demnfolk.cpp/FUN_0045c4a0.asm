; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_0045c4a0(CCharacter *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_demnfolk.cpp_CDemnfolk_processDamage_FUN_0045c7b0 at 0045c7cb
;
; Referenced Globals:
;   undefined1* switchdataD_0045c484 = 0045c4dd
;   TerminatedCString s_limb_wav_005d8263
;   undefined4 DAT_005d8273
;   undefined4 DAT_005d827b
;   undefined4 DAT_005d8283
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;   undefined4 g_CGameInstance.slow_motion_mode
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c4a0
        ;   Label: core_demnfolk.cpp_FUN_0045c4a0
    PUSH ESI                            ; 0045c4a1
    PUSH EDI                            ; 0045c4a2
    PUSH EBP                            ; 0045c4a3
    SUB ESP,0xc                         ; 0045c4a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045c4a7
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045c4ab
    FLD float ptr [ESI + 0x2c]          ; 0045c4af
    FLDZ                                ; 0045c4b2
    FCOMPP                              ; 0045c4b4
    FNSTSW AX                           ; 0045c4b6
    SAHF                                ; 0045c4b8
    JNC 0x0045c4e5                      ; 0045c4b9
        ;   XREF to: 0045c4e5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0045c4bb
    JNZ 0x0045c4e5                      ; 0045c4be
        ;   XREF to: 0045c4e5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0045c4c0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0045c4c5
    MOV EDI,0x6                         ; 0045c4c7
    SAR EDX,0x1f                        ; 0045c4cc
    IDIV EDI                            ; 0045c4cf
    CMP EDX,0x5                         ; 0045c4d1
    JA 0x0045c4e5                       ; 0045c4d4
        ;   XREF to: 0045c4e5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x45c484]  ; 0045c4d6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc328]    ; 0045c4dd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0045c4e3
        ;   Label: LAB_0045c4e3
    MOV ECX,dword ptr [EBX + 0xc328]    ; 0045c4e5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0045c4eb
    CMP EAX,ECX                         ; 0045c4ed
    JNZ 0x0045c706                      ; 0045c4ef
        ;   XREF to: 0045c706 (CONDITIONAL_JUMP)  ; LAB_0045c706
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0045c4f5
        ;   Label: LAB_0045c4f5
    MOV EBP,dword ptr [EBX + 0xc340]    ; 0045c4f8
    MOV dword ptr [ESP + 0x8],EAX       ; 0045c4fe
    CMP EBP,dword ptr [ESI]             ; 0045c502
    JNZ 0x0045c50e                      ; 0045c504
        ;   XREF to: 0045c50e (CONDITIONAL_JUMP)  ; LAB_0045c50e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 0045c506
    MOV EDX,dword ptr [EBX + 0xc33c]    ; 0045c50e
        ;   Label: LAB_0045c50e
    CMP EDX,dword ptr [ESI]             ; 0045c514
    JNZ 0x0045c520                      ; 0045c516
        ;   XREF to: 0045c520 (CONDITIONAL_JUMP)  ; LAB_0045c520
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 0045c518
    MOV EAX,[0x0061d95c]                ; 0045c520 | g_CGamePtr
        ;   Label: LAB_0045c520
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0045c525 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x0045c536                       ; 0045c52c
        ;   XREF to: 0045c536 (CONDITIONAL_JUMP)  ; LAB_0045c536
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0045c52e
    MOV EAX,[0x0061d95c]                ; 0045c536 | g_CGamePtr
        ;   Label: LAB_0045c536
    MOV EDX,dword ptr [EAX + 0x14]      ; 0045c53b | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 0045c53e
    JNZ 0x0045c546                      ; 0045c540
        ;   XREF to: 0045c546 (CONDITIONAL_JUMP)  ; LAB_0045c546
    MOV dword ptr [ESP + 0x8],EDX       ; 0045c542
    PUSH dword ptr [ESP + 0x8]          ; 0045c546
        ;   Label: LAB_0045c546
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045c54a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045c54f
    TEST EAX,EAX                        ; 0045c552
    JZ 0x0045c69d                       ; 0045c554
        ;   XREF to: 0045c69d (CONDITIONAL_JUMP)  ; LAB_0045c69d
    PUSH 0x0                            ; 0045c55a
    PUSH 0x0                            ; 0045c55c
    PUSH 0x0                            ; 0045c55e
    PUSH EBX                            ; 0045c560
    LEA EAX,[ESI + 0xc]                 ; 0045c561
    PUSH EAX                            ; 0045c564
    LEA EAX,[EBX + 0x30]                ; 0045c565
    PUSH EAX                            ; 0045c568
    LEA EAX,[EBX + 0x20]                ; 0045c569
    PUSH EAX                            ; 0045c56c
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 0045c56d
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0045c572
    MOV EDI,EAX                         ; 0045c575
    PUSH 0x0                            ; 0045c577
    MOV EBP,EAX                         ; 0045c579
    MOV EAX,dword ptr [ESI]             ; 0045c57b
    PUSH EAX                            ; 0045c57d
    PUSH EDI                            ; 0045c57e
    PUSH EBX                            ; 0045c57f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0045c580
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0045c585
    MOV EDX,dword ptr [EBX + 0xc328]    ; 0045c587
    ADD ESP,0x10                        ; 0045c58d
    CMP EAX,EDX                         ; 0045c590
    JNZ 0x0045c5a7                      ; 0045c592
        ;   XREF to: 0045c5a7 (CONDITIONAL_JUMP)  ; LAB_0045c5a7
    PUSH 0x0                            ; 0045c594
    MOV ECX,dword ptr [EBX + 0xc32c]    ; 0045c596
    PUSH ECX                            ; 0045c59c
    PUSH EDI                            ; 0045c59d
    PUSH EBX                            ; 0045c59e
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0045c59f
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0045c5a4
    MOV EDI,dword ptr [EBX + 0xc330]    ; 0045c5a7
        ;   Label: LAB_0045c5a7
    CMP EDI,dword ptr [ESI]             ; 0045c5ad
    JNZ 0x0045c5c4                      ; 0045c5af
        ;   XREF to: 0045c5c4 (CONDITIONAL_JUMP)  ; LAB_0045c5c4
    PUSH 0x0                            ; 0045c5b1
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0045c5b3
    PUSH EAX                            ; 0045c5b9
    PUSH EBP                            ; 0045c5ba
    PUSH EBX                            ; 0045c5bb
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0045c5bc
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0045c5c1
    MOV EDX,dword ptr [EBX + 0xc33c]    ; 0045c5c4
        ;   Label: LAB_0045c5c4
    CMP EDX,dword ptr [ESI]             ; 0045c5ca
    JNZ 0x0045c630                      ; 0045c5cc
        ;   XREF to: 0045c630 (CONDITIONAL_JUMP)  ; LAB_0045c630
    PUSH 0x0                            ; 0045c5ce
    LEA EDI,[ESI + 0xc]                 ; 0045c5d0
    PUSH EDI                            ; 0045c5d3
    MOV ECX,dword ptr [EBX + 0xc330]    ; 0045c5d4
    PUSH ECX                            ; 0045c5da
    PUSH EBX                            ; 0045c5db
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0045c5dc
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0045c5e1
    PUSH 0x0                            ; 0045c5e4
    PUSH EDI                            ; 0045c5e6
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0045c5e7
    PUSH EAX                            ; 0045c5ed
    PUSH EBX                            ; 0045c5ee
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0045c5ef
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0045c5f4
    PUSH 0x0                            ; 0045c5f7
    PUSH EDI                            ; 0045c5f9
    MOV EDX,dword ptr [EBX + 0xc328]    ; 0045c5fa
    PUSH EDX                            ; 0045c600
    PUSH EBX                            ; 0045c601
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0045c602
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0045c607
    PUSH 0x0                            ; 0045c60a
    PUSH EDI                            ; 0045c60c
    MOV ECX,dword ptr [EBX + 0xc32c]    ; 0045c60d
    PUSH ECX                            ; 0045c613
    PUSH EBX                            ; 0045c614
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0045c615
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0045c61a
    PUSH 0x0                            ; 0045c61d
    PUSH EDI                            ; 0045c61f
    MOV EDI,dword ptr [EBX + 0xc340]    ; 0045c620
    PUSH EDI                            ; 0045c626
    PUSH EBX                            ; 0045c627
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0045c628
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0045c62d
    PUSH 0x5d8263                       ; 0045c630 | = "limb?.wav"
        ;   Label: LAB_0045c630
    PUSH EBX                            ; 0045c635
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 0045c636
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0045c63b
    PUSH EBP                            ; 0045c63e
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 0045c63f
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc340]    ; 0045c644
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0045c64a
    ADD ESP,0x4                         ; 0045c651
    TEST EBP,EBP                        ; 0045c654
    JZ 0x0045c747                       ; 0045c656
        ;   XREF to: 0045c747 (CONDITIONAL_JUMP)  ; LAB_0045c747
    FLD float ptr [ESI + 0x8]           ; 0045c65c
        ;   Label: LAB_0045c65c
    FLD ST0                             ; 0045c65f
    FMUL double ptr [0x005d8273]        ; 0045c661 | DAT_005d8273
    PUSH 0x3e4ccccd                     ; 0045c667
    FSTP ST1                            ; 0045c66c
    FSTP float ptr [ESI + 0x8]          ; 0045c66e
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045c671
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045c676
    TEST EAX,EAX                        ; 0045c679
    JZ 0x0045c753                       ; 0045c67b
        ;   XREF to: 0045c753 (CONDITIONAL_JUMP)  ; LAB_0045c753
    MOV EAX,[0x0061d95c]                ; 0045c681 | g_CGamePtr
        ;   Label: LAB_0045c681
    MOV dword ptr [EAX + 0x280],0x1     ; 0045c686 | g_CGameInstance.slow_motion_mode
    CMP dword ptr [EBX + 0xc338],0x0    ; 0045c690
        ;   Label: LAB_0045c690
    JL 0x0045c774                       ; 0045c697
        ;   XREF to: 0045c774 (CONDITIONAL_JUMP)  ; LAB_0045c774
    MOV EBP,dword ptr [EBX + 0xc340]    ; 0045c69d
        ;   Label: LAB_0045c69d
    MOV EAX,dword ptr [ESI]             ; 0045c6a3
    CMP EAX,EBP                         ; 0045c6a5
    JZ 0x0045c780                       ; 0045c6a7
        ;   XREF to: 0045c780 (CONDITIONAL_JUMP)  ; LAB_0045c780
    CMP EAX,dword ptr [EBX + 0xc338]    ; 0045c6ad
    JZ 0x0045c6c1                       ; 0045c6b3
        ;   XREF to: 0045c6c1 (CONDITIONAL_JUMP)  ; LAB_0045c6c1
    CMP EAX,dword ptr [EBX + 0xc33c]    ; 0045c6b5
    JNZ 0x0045c798                      ; 0045c6bb
        ;   XREF to: 0045c798 (CONDITIONAL_JUMP)  ; LAB_0045c798
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045c6c1
        ;   Label: LAB_0045c6c1
    MOV dword ptr [ESI + 0x4],EAX       ; 0045c6c4
    ADD ESP,0xc                         ; 0045c6c7
    POP EBP                             ; 0045c6ca
    POP EDI                             ; 0045c6cb
    POP ESI                             ; 0045c6cc
    POP EBX                             ; 0045c6cd
    RET                                 ; 0045c6ce
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 0045c6cf
        ;   Label: caseD_1
    JMP 0x0045c4e3                      ; 0045c6d5
        ;   XREF to: 0045c4e3 (UNCONDITIONAL_JUMP)  ; LAB_0045c4e3
    MOV EAX,dword ptr [EBX + 0xc330]    ; 0045c6da
        ;   Label: caseD_2
    JMP 0x0045c4e3                      ; 0045c6e0
        ;   XREF to: 0045c4e3 (UNCONDITIONAL_JUMP)  ; LAB_0045c4e3
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0045c6e5
        ;   Label: caseD_3
    JMP 0x0045c4e3                      ; 0045c6eb
        ;   XREF to: 0045c4e3 (UNCONDITIONAL_JUMP)  ; LAB_0045c4e3
    MOV EAX,dword ptr [EBX + 0xc340]    ; 0045c6f0
        ;   Label: caseD_4
    JMP 0x0045c4e3                      ; 0045c6f6
        ;   XREF to: 0045c4e3 (UNCONDITIONAL_JUMP)  ; LAB_0045c4e3
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 0045c6fb
        ;   Label: caseD_5
    JMP 0x0045c4e3                      ; 0045c701
        ;   XREF to: 0045c4e3 (UNCONDITIONAL_JUMP)  ; LAB_0045c4e3
    CMP EAX,dword ptr [EBX + 0xc32c]    ; 0045c706
        ;   Label: LAB_0045c706
    JZ 0x0045c4f5                       ; 0045c70c
        ;   XREF to: 0045c4f5 (CONDITIONAL_JUMP)  ; LAB_0045c4f5
    CMP EAX,dword ptr [EBX + 0xc330]    ; 0045c712
    JZ 0x0045c4f5                       ; 0045c718
        ;   XREF to: 0045c4f5 (CONDITIONAL_JUMP)  ; LAB_0045c4f5
    CMP EAX,dword ptr [EBX + 0xc334]    ; 0045c71e
    JZ 0x0045c4f5                       ; 0045c724
        ;   XREF to: 0045c4f5 (CONDITIONAL_JUMP)  ; LAB_0045c4f5
    CMP EAX,dword ptr [EBX + 0xc33c]    ; 0045c72a
    JZ 0x0045c4f5                       ; 0045c730
        ;   XREF to: 0045c4f5 (CONDITIONAL_JUMP)  ; LAB_0045c4f5
    CMP EAX,dword ptr [EBX + 0xc340]    ; 0045c736
    JZ 0x0045c4f5                       ; 0045c73c
        ;   XREF to: 0045c4f5 (CONDITIONAL_JUMP)  ; LAB_0045c4f5
    JMP 0x0045c69d                      ; 0045c742
        ;   XREF to: 0045c69d (UNCONDITIONAL_JUMP)  ; LAB_0045c69d
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0045c747
        ;   Label: LAB_0045c747
    JMP 0x0045c65c                      ; 0045c74e
        ;   XREF to: 0045c65c (UNCONDITIONAL_JUMP)  ; LAB_0045c65c
    MOV EDX,dword ptr [EBX + 0xc340]    ; 0045c753
        ;   Label: LAB_0045c753
    MOV EAX,dword ptr [ESI]             ; 0045c759
    CMP EAX,EDX                         ; 0045c75b
    JZ 0x0045c681                       ; 0045c75d
        ;   XREF to: 0045c681 (CONDITIONAL_JUMP)  ; LAB_0045c681
    CMP EAX,dword ptr [EBX + 0xc33c]    ; 0045c763
    JZ 0x0045c681                       ; 0045c769
        ;   XREF to: 0045c681 (CONDITIONAL_JUMP)  ; LAB_0045c681
    JMP 0x0045c690                      ; 0045c76f
        ;   XREF to: 0045c690 (UNCONDITIONAL_JUMP)  ; LAB_0045c690
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 0045c774
        ;   Label: LAB_0045c774
    JMP 0x0045c69d                      ; 0045c77b
        ;   XREF to: 0045c69d (UNCONDITIONAL_JUMP)  ; LAB_0045c69d
    FLD float ptr [ESI + 0x4]           ; 0045c780
        ;   Label: LAB_0045c780
    FLD ST0                             ; 0045c783
    FMUL double ptr [0x005d8283]        ; 0045c785 | DAT_005d8283
    FSTP ST1                            ; 0045c78b
    FSTP float ptr [ESI + 0x4]          ; 0045c78d
    ADD ESP,0xc                         ; 0045c790
    POP EBP                             ; 0045c793
    POP EDI                             ; 0045c794
    POP ESI                             ; 0045c795
    POP EBX                             ; 0045c796
    RET                                 ; 0045c797
    FLD float ptr [ESI + 0x4]           ; 0045c798
        ;   Label: LAB_0045c798
    FLD ST0                             ; 0045c79b
    FMUL double ptr [0x005d827b]        ; 0045c79d | DAT_005d827b
    FSTP ST1                            ; 0045c7a3
    FSTP float ptr [ESI + 0x4]          ; 0045c7a5
    ADD ESP,0xc                         ; 0045c7a8
    POP EBP                             ; 0045c7ab
    POP EDI                             ; 0045c7ac
    POP ESI                             ; 0045c7ad
    POP EBX                             ; 0045c7ae
    RET                                 ; 0045c7af

