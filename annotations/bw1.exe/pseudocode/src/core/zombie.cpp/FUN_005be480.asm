; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_FUN_005be480(CZombie *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_zombie.cpp_FUN_005be750 at 005be75d
;
; Referenced Globals:
;   undefined1* switchdataD_005be464 = 005be4bd
;   TerminatedCString s_limb_wav_005fa930
;   undefined4 DAT_005fa93c
;   undefined4 DAT_005fa944
;   undefined4 DAT_005fa94c
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field20_0x14
;   undefined4 g_CGameInstance.field508_0x1fc
;
; Called Functions:
;   core_actor.cpp_FUN_0040cd00
;   core_bodypart.cpp_FUN_00418940
;   core_bodypart.cpp_FUN_00419b90
;   core_charactr.cpp_FUN_004311a0
;   core_charactr.cpp_FUN_00431210
;   core_charactr.cpp_FUN_004352e0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be480
        ;   Label: core_zombie.cpp_FUN_005be480
    PUSH ESI                            ; 005be481
    PUSH EDI                            ; 005be482
    PUSH EBP                            ; 005be483
    SUB ESP,0xc                         ; 005be484
    MOV EBX,dword ptr [ESP + 0x20]      ; 005be487
    MOV ESI,dword ptr [ESP + 0x24]      ; 005be48b
    FLD float ptr [ESI + 0x2c]          ; 005be48f
    FLDZ                                ; 005be492
    FCOMPP                              ; 005be494
    FNSTSW AX                           ; 005be496
    SAHF                                ; 005be498
    JNC 0x005be4c5                      ; 005be499
        ;   XREF to: 005be4c5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 005be49b
    JNZ 0x005be4c5                      ; 005be49e
        ;   XREF to: 005be4c5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 005be4a0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 005be4a5
    MOV EDI,0x6                         ; 005be4a7
    SAR EDX,0x1f                        ; 005be4ac
    IDIV EDI                            ; 005be4af
    CMP EDX,0x5                         ; 005be4b1
    JA 0x005be4c5                       ; 005be4b4
        ;   XREF to: 005be4c5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5be464]  ; 005be4b6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc324]    ; 005be4bd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 005be4c3
        ;   Label: LAB_005be4c3
    MOV ECX,dword ptr [EBX + 0xc324]    ; 005be4c5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 005be4cb
    CMP EAX,ECX                         ; 005be4cd
    JNZ 0x005be6c2                      ; 005be4cf
        ;   XREF to: 005be6c2 (CONDITIONAL_JUMP)  ; LAB_005be6c2
    MOV EAX,dword ptr [ESI + 0x2c]      ; 005be4d5
        ;   Label: LAB_005be4d5
    MOV EBP,dword ptr [EBX + 0xc33c]    ; 005be4d8
    MOV dword ptr [ESP + 0x8],EAX       ; 005be4de
    CMP EBP,dword ptr [ESI]             ; 005be4e2
    JNZ 0x005be4ee                      ; 005be4e4
        ;   XREF to: 005be4ee (CONDITIONAL_JUMP)  ; LAB_005be4ee
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 005be4e6
    MOV EDX,dword ptr [EBX + 0xc338]    ; 005be4ee
        ;   Label: LAB_005be4ee
    CMP EDX,dword ptr [ESI]             ; 005be4f4
    JNZ 0x005be500                      ; 005be4f6
        ;   XREF to: 005be500 (CONDITIONAL_JUMP)  ; LAB_005be500
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 005be4f8
    MOV EAX,[0x0061d95c]                ; 005be500 | g_CGamePtr
        ;   Label: LAB_005be500
    CMP dword ptr [EAX + 0x1fc],0x0     ; 005be505 | g_CGameInstance.field508_0x1fc
    JZ 0x005be516                       ; 005be50c
        ;   XREF to: 005be516 (CONDITIONAL_JUMP)  ; LAB_005be516
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005be50e
    MOV EAX,[0x0061d95c]                ; 005be516 | g_CGamePtr
        ;   Label: LAB_005be516
    MOV EDX,dword ptr [EAX + 0x14]      ; 005be51b | g_CGameInstance.field20_0x14
    TEST EDX,EDX                        ; 005be51e
    JNZ 0x005be526                      ; 005be520
        ;   XREF to: 005be526 (CONDITIONAL_JUMP)  ; LAB_005be526
    MOV dword ptr [ESP + 0x8],EDX       ; 005be522
    PUSH dword ptr [ESP + 0x8]          ; 005be526
        ;   Label: LAB_005be526
    CALL core_actor.cpp_FUN_0040cd00    ; 005be52a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005be52f
    TEST EAX,EAX                        ; 005be532
    JZ 0x005be659                       ; 005be534
        ;   XREF to: 005be659 (CONDITIONAL_JUMP)  ; LAB_005be659
    PUSH 0x0                            ; 005be53a
    PUSH 0x0                            ; 005be53c
    PUSH 0x0                            ; 005be53e
    PUSH EBX                            ; 005be540
    LEA EAX,[ESI + 0xc]                 ; 005be541
    PUSH EAX                            ; 005be544
    LEA EAX,[EBX + 0x30]                ; 005be545
    PUSH EAX                            ; 005be548
    LEA EAX,[EBX + 0x20]                ; 005be549
    PUSH EAX                            ; 005be54c
    CALL core_bodypart.cpp_FUN_00418940 ; 005be54d
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 005be552
    MOV EDI,EAX                         ; 005be555
    PUSH 0x0                            ; 005be557
    MOV EBP,EAX                         ; 005be559
    MOV EAX,dword ptr [ESI]             ; 005be55b
    PUSH EAX                            ; 005be55d
    PUSH EDI                            ; 005be55e
    PUSH EBX                            ; 005be55f
    CALL core_charactr.cpp_FUN_00431210 ; 005be560
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 005be565
    MOV EDX,dword ptr [EBX + 0xc324]    ; 005be567
    ADD ESP,0x10                        ; 005be56d
    CMP EAX,EDX                         ; 005be570
    JNZ 0x005be587                      ; 005be572
        ;   XREF to: 005be587 (CONDITIONAL_JUMP)  ; LAB_005be587
    PUSH 0x0                            ; 005be574
    MOV ECX,dword ptr [EBX + 0xc328]    ; 005be576
    PUSH ECX                            ; 005be57c
    PUSH EDI                            ; 005be57d
    PUSH EBX                            ; 005be57e
    CALL core_charactr.cpp_FUN_00431210 ; 005be57f
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 005be584
    MOV EDI,dword ptr [EBX + 0xc32c]    ; 005be587
        ;   Label: LAB_005be587
    CMP EDI,dword ptr [ESI]             ; 005be58d
    JNZ 0x005be5a4                      ; 005be58f
        ;   XREF to: 005be5a4 (CONDITIONAL_JUMP)  ; LAB_005be5a4
    PUSH 0x0                            ; 005be591
    MOV EAX,dword ptr [EBX + 0xc330]    ; 005be593
    PUSH EAX                            ; 005be599
    PUSH EBP                            ; 005be59a
    PUSH EBX                            ; 005be59b
    CALL core_charactr.cpp_FUN_00431210 ; 005be59c
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 005be5a1
    MOV EDX,dword ptr [EBX + 0xc338]    ; 005be5a4
        ;   Label: LAB_005be5a4
    CMP EDX,dword ptr [ESI]             ; 005be5aa
    JNZ 0x005be610                      ; 005be5ac
        ;   XREF to: 005be610 (CONDITIONAL_JUMP)  ; LAB_005be610
    PUSH 0x0                            ; 005be5ae
    LEA EDI,[ESI + 0xc]                 ; 005be5b0
    PUSH EDI                            ; 005be5b3
    MOV ECX,dword ptr [EBX + 0xc32c]    ; 005be5b4
    PUSH ECX                            ; 005be5ba
    PUSH EBX                            ; 005be5bb
    CALL core_charactr.cpp_FUN_004311a0 ; 005be5bc
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005be5c1
    PUSH 0x0                            ; 005be5c4
    PUSH EDI                            ; 005be5c6
    MOV EAX,dword ptr [EBX + 0xc330]    ; 005be5c7
    PUSH EAX                            ; 005be5cd
    PUSH EBX                            ; 005be5ce
    CALL core_charactr.cpp_FUN_004311a0 ; 005be5cf
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005be5d4
    PUSH 0x0                            ; 005be5d7
    PUSH EDI                            ; 005be5d9
    MOV EDX,dword ptr [EBX + 0xc324]    ; 005be5da
    PUSH EDX                            ; 005be5e0
    PUSH EBX                            ; 005be5e1
    CALL core_charactr.cpp_FUN_004311a0 ; 005be5e2
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005be5e7
    PUSH 0x0                            ; 005be5ea
    PUSH EDI                            ; 005be5ec
    MOV ECX,dword ptr [EBX + 0xc328]    ; 005be5ed
    PUSH ECX                            ; 005be5f3
    PUSH EBX                            ; 005be5f4
    CALL core_charactr.cpp_FUN_004311a0 ; 005be5f5
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005be5fa
    PUSH 0x0                            ; 005be5fd
    PUSH EDI                            ; 005be5ff
    MOV EDI,dword ptr [EBX + 0xc33c]    ; 005be600
    PUSH EDI                            ; 005be606
    PUSH EBX                            ; 005be607
    CALL core_charactr.cpp_FUN_004311a0 ; 005be608
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005be60d
    PUSH 0x5fa930                       ; 005be610 | = "limb?.wav"
        ;   Label: LAB_005be610
    PUSH EBX                            ; 005be615
    CALL core_charactr.cpp_FUN_004352e0 ; 005be616
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 005be61b
    PUSH EBP                            ; 005be61e
    CALL core_bodypart.cpp_FUN_00419b90 ; 005be61f
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005be624
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005be62a
    ADD ESP,0x4                         ; 005be631
    TEST EBP,EBP                        ; 005be634
    JZ 0x005be703                       ; 005be636
        ;   XREF to: 005be703 (CONDITIONAL_JUMP)  ; LAB_005be703
    FLD float ptr [ESI + 0x8]           ; 005be63c
        ;   Label: LAB_005be63c
    FLD ST0                             ; 005be63f
    FMUL double ptr [0x005fa93c]        ; 005be641 | DAT_005fa93c
    FSTP ST1                            ; 005be647
    FSTP float ptr [ESI + 0x8]          ; 005be649
    CMP dword ptr [EBX + 0xc334],0x0    ; 005be64c
    JL 0x005be70f                       ; 005be653
        ;   XREF to: 005be70f (CONDITIONAL_JUMP)  ; LAB_005be70f
    MOV EDX,dword ptr [EBX + 0xc33c]    ; 005be659
        ;   Label: LAB_005be659
    MOV EAX,dword ptr [ESI]             ; 005be65f
    CMP EAX,EDX                         ; 005be661
    JZ 0x005be71b                       ; 005be663
        ;   XREF to: 005be71b (CONDITIONAL_JUMP)  ; LAB_005be71b
    CMP EAX,dword ptr [EBX + 0xc334]    ; 005be669
    JZ 0x005be67d                       ; 005be66f
        ;   XREF to: 005be67d (CONDITIONAL_JUMP)  ; LAB_005be67d
    CMP EAX,dword ptr [EBX + 0xc338]    ; 005be671
    JNZ 0x005be733                      ; 005be677
        ;   XREF to: 005be733 (CONDITIONAL_JUMP)  ; LAB_005be733
    MOV EAX,dword ptr [ESI + 0x4]       ; 005be67d
        ;   Label: LAB_005be67d
    MOV dword ptr [ESI + 0x4],EAX       ; 005be680
    ADD ESP,0xc                         ; 005be683
    POP EBP                             ; 005be686
    POP EDI                             ; 005be687
    POP ESI                             ; 005be688
    POP EBX                             ; 005be689
    RET                                 ; 005be68a
    MOV EAX,dword ptr [EBX + 0xc328]    ; 005be68b
        ;   Label: caseD_1
    JMP 0x005be4c3                      ; 005be691
        ;   XREF to: 005be4c3 (UNCONDITIONAL_JUMP)  ; LAB_005be4c3
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 005be696
        ;   Label: caseD_2
    JMP 0x005be4c3                      ; 005be69c
        ;   XREF to: 005be4c3 (UNCONDITIONAL_JUMP)  ; LAB_005be4c3
    MOV EAX,dword ptr [EBX + 0xc330]    ; 005be6a1
        ;   Label: caseD_3
    JMP 0x005be4c3                      ; 005be6a7
        ;   XREF to: 005be4c3 (UNCONDITIONAL_JUMP)  ; LAB_005be4c3
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005be6ac
        ;   Label: caseD_4
    JMP 0x005be4c3                      ; 005be6b2
        ;   XREF to: 005be4c3 (UNCONDITIONAL_JUMP)  ; LAB_005be4c3
    MOV EAX,dword ptr [EBX + 0xc338]    ; 005be6b7
        ;   Label: caseD_5
    JMP 0x005be4c3                      ; 005be6bd
        ;   XREF to: 005be4c3 (UNCONDITIONAL_JUMP)  ; LAB_005be4c3
    CMP EAX,dword ptr [EBX + 0xc328]    ; 005be6c2
        ;   Label: LAB_005be6c2
    JZ 0x005be4d5                       ; 005be6c8
        ;   XREF to: 005be4d5 (CONDITIONAL_JUMP)  ; LAB_005be4d5
    CMP EAX,dword ptr [EBX + 0xc32c]    ; 005be6ce
    JZ 0x005be4d5                       ; 005be6d4
        ;   XREF to: 005be4d5 (CONDITIONAL_JUMP)  ; LAB_005be4d5
    CMP EAX,dword ptr [EBX + 0xc330]    ; 005be6da
    JZ 0x005be4d5                       ; 005be6e0
        ;   XREF to: 005be4d5 (CONDITIONAL_JUMP)  ; LAB_005be4d5
    CMP EAX,dword ptr [EBX + 0xc338]    ; 005be6e6
    JZ 0x005be4d5                       ; 005be6ec
        ;   XREF to: 005be4d5 (CONDITIONAL_JUMP)  ; LAB_005be4d5
    CMP EAX,dword ptr [EBX + 0xc33c]    ; 005be6f2
    JZ 0x005be4d5                       ; 005be6f8
        ;   XREF to: 005be4d5 (CONDITIONAL_JUMP)  ; LAB_005be4d5
    JMP 0x005be659                      ; 005be6fe
        ;   XREF to: 005be659 (UNCONDITIONAL_JUMP)  ; LAB_005be659
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 005be703
        ;   Label: LAB_005be703
    JMP 0x005be63c                      ; 005be70a
        ;   XREF to: 005be63c (UNCONDITIONAL_JUMP)  ; LAB_005be63c
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 005be70f
        ;   Label: LAB_005be70f
    JMP 0x005be659                      ; 005be716
        ;   XREF to: 005be659 (UNCONDITIONAL_JUMP)  ; LAB_005be659
    FLD float ptr [ESI + 0x4]           ; 005be71b
        ;   Label: LAB_005be71b
    FLD ST0                             ; 005be71e
    FMUL double ptr [0x005fa94c]        ; 005be720 | DAT_005fa94c
    FSTP ST1                            ; 005be726
    FSTP float ptr [ESI + 0x4]          ; 005be728
    ADD ESP,0xc                         ; 005be72b
    POP EBP                             ; 005be72e
    POP EDI                             ; 005be72f
    POP ESI                             ; 005be730
    POP EBX                             ; 005be731
    RET                                 ; 005be732
    FLD float ptr [ESI + 0x4]           ; 005be733
        ;   Label: LAB_005be733
    FLD ST0                             ; 005be736
    FMUL double ptr [0x005fa944]        ; 005be738 | DAT_005fa944
    FSTP ST1                            ; 005be73e
    FSTP float ptr [ESI + 0x4]          ; 005be740
    ADD ESP,0xc                         ; 005be743
    POP EBP                             ; 005be746
    POP EDI                             ; 005be747
    POP ESI                             ; 005be748
    POP EBX                             ; 005be749
    RET                                 ; 005be74a

