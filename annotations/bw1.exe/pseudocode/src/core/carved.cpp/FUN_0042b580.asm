; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_0042b580(CCharacter *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_carved.cpp_CCarved_processDamage_FUN_0042b850 at 0042b86a
;
; Referenced Globals:
;   undefined1* switchdataD_0042b564 = 0042b5bd
;   TerminatedCString s_limb_wav_005d562d
;   undefined4 DAT_005d563d
;   undefined4 DAT_005d5645
;   undefined4 DAT_005d564d
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
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

    PUSH EBX                            ; 0042b580
        ;   Label: core_carved.cpp_FUN_0042b580
    PUSH ESI                            ; 0042b581
    PUSH EDI                            ; 0042b582
    PUSH EBP                            ; 0042b583
    SUB ESP,0xc                         ; 0042b584
    MOV EBX,dword ptr [ESP + 0x20]      ; 0042b587
    MOV ESI,dword ptr [ESP + 0x24]      ; 0042b58b
    FLD float ptr [ESI + 0x2c]          ; 0042b58f
    FLDZ                                ; 0042b592
    FCOMPP                              ; 0042b594
    FNSTSW AX                           ; 0042b596
    SAHF                                ; 0042b598
    JNC 0x0042b5c5                      ; 0042b599
        ;   XREF to: 0042b5c5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0042b59b
    JNZ 0x0042b5c5                      ; 0042b59e
        ;   XREF to: 0042b5c5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0042b5a0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0042b5a5
    MOV EDI,0x6                         ; 0042b5a7
    SAR EDX,0x1f                        ; 0042b5ac
    IDIV EDI                            ; 0042b5af
    CMP EDX,0x5                         ; 0042b5b1
    JA 0x0042b5c5                       ; 0042b5b4
        ;   XREF to: 0042b5c5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x42b564]  ; 0042b5b6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc2b8]    ; 0042b5bd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0042b5c3
        ;   Label: LAB_0042b5c3
    MOV ECX,dword ptr [EBX + 0xc2b8]    ; 0042b5c5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0042b5cb
    CMP EAX,ECX                         ; 0042b5cd
    JNZ 0x0042b7c2                      ; 0042b5cf
        ;   XREF to: 0042b7c2 (CONDITIONAL_JUMP)  ; LAB_0042b7c2
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0042b5d5
        ;   Label: LAB_0042b5d5
    MOV EBP,dword ptr [EBX + 0xc2d0]    ; 0042b5d8
    MOV dword ptr [ESP + 0x8],EAX       ; 0042b5de
    CMP EBP,dword ptr [ESI]             ; 0042b5e2
    JNZ 0x0042b5ee                      ; 0042b5e4
        ;   XREF to: 0042b5ee (CONDITIONAL_JUMP)  ; LAB_0042b5ee
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 0042b5e6
    MOV EDX,dword ptr [EBX + 0xc2cc]    ; 0042b5ee
        ;   Label: LAB_0042b5ee
    CMP EDX,dword ptr [ESI]             ; 0042b5f4
    JNZ 0x0042b600                      ; 0042b5f6
        ;   XREF to: 0042b600 (CONDITIONAL_JUMP)  ; LAB_0042b600
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 0042b5f8
    MOV EAX,[0x0061d95c]                ; 0042b600 | g_CGamePtr
        ;   Label: LAB_0042b600
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0042b605 | g_CGameInstance.field460_0x1fc
    JZ 0x0042b616                       ; 0042b60c
        ;   XREF to: 0042b616 (CONDITIONAL_JUMP)  ; LAB_0042b616
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0042b60e
    MOV EAX,[0x0061d95c]                ; 0042b616 | g_CGamePtr
        ;   Label: LAB_0042b616
    MOV EDX,dword ptr [EAX + 0x14]      ; 0042b61b | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 0042b61e
    JNZ 0x0042b626                      ; 0042b620
        ;   XREF to: 0042b626 (CONDITIONAL_JUMP)  ; LAB_0042b626
    MOV dword ptr [ESP + 0x8],EDX       ; 0042b622
    PUSH dword ptr [ESP + 0x8]          ; 0042b626
        ;   Label: LAB_0042b626
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0042b62a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0042b62f
    TEST EAX,EAX                        ; 0042b632
    JZ 0x0042b759                       ; 0042b634
        ;   XREF to: 0042b759 (CONDITIONAL_JUMP)  ; LAB_0042b759
    PUSH 0x0                            ; 0042b63a
    PUSH 0x0                            ; 0042b63c
    PUSH 0x0                            ; 0042b63e
    PUSH EBX                            ; 0042b640
    LEA EAX,[ESI + 0xc]                 ; 0042b641
    PUSH EAX                            ; 0042b644
    LEA EAX,[EBX + 0x30]                ; 0042b645
    PUSH EAX                            ; 0042b648
    LEA EAX,[EBX + 0x20]                ; 0042b649
    PUSH EAX                            ; 0042b64c
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 0042b64d
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0042b652
    MOV EDI,EAX                         ; 0042b655
    PUSH 0x0                            ; 0042b657
    MOV EBP,EAX                         ; 0042b659
    MOV EAX,dword ptr [ESI]             ; 0042b65b
    PUSH EAX                            ; 0042b65d
    PUSH EDI                            ; 0042b65e
    PUSH EBX                            ; 0042b65f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0042b660
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0042b665
    MOV EDX,dword ptr [EBX + 0xc2b8]    ; 0042b667
    ADD ESP,0x10                        ; 0042b66d
    CMP EAX,EDX                         ; 0042b670
    JNZ 0x0042b687                      ; 0042b672
        ;   XREF to: 0042b687 (CONDITIONAL_JUMP)  ; LAB_0042b687
    PUSH 0x0                            ; 0042b674
    MOV ECX,dword ptr [EBX + 0xc2bc]    ; 0042b676
    PUSH ECX                            ; 0042b67c
    PUSH EDI                            ; 0042b67d
    PUSH EBX                            ; 0042b67e
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0042b67f
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0042b684
    MOV EDI,dword ptr [EBX + 0xc2c0]    ; 0042b687
        ;   Label: LAB_0042b687
    CMP EDI,dword ptr [ESI]             ; 0042b68d
    JNZ 0x0042b6a4                      ; 0042b68f
        ;   XREF to: 0042b6a4 (CONDITIONAL_JUMP)  ; LAB_0042b6a4
    PUSH 0x0                            ; 0042b691
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 0042b693
    PUSH EAX                            ; 0042b699
    PUSH EBP                            ; 0042b69a
    PUSH EBX                            ; 0042b69b
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0042b69c
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0042b6a1
    MOV EDX,dword ptr [EBX + 0xc2cc]    ; 0042b6a4
        ;   Label: LAB_0042b6a4
    CMP EDX,dword ptr [ESI]             ; 0042b6aa
    JNZ 0x0042b710                      ; 0042b6ac
        ;   XREF to: 0042b710 (CONDITIONAL_JUMP)  ; LAB_0042b710
    PUSH 0x0                            ; 0042b6ae
    LEA EDI,[ESI + 0xc]                 ; 0042b6b0
    PUSH EDI                            ; 0042b6b3
    MOV ECX,dword ptr [EBX + 0xc2c0]    ; 0042b6b4
    PUSH ECX                            ; 0042b6ba
    PUSH EBX                            ; 0042b6bb
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0042b6bc
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0042b6c1
    PUSH 0x0                            ; 0042b6c4
    PUSH EDI                            ; 0042b6c6
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 0042b6c7
    PUSH EAX                            ; 0042b6cd
    PUSH EBX                            ; 0042b6ce
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0042b6cf
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0042b6d4
    PUSH 0x0                            ; 0042b6d7
    PUSH EDI                            ; 0042b6d9
    MOV EDX,dword ptr [EBX + 0xc2b8]    ; 0042b6da
    PUSH EDX                            ; 0042b6e0
    PUSH EBX                            ; 0042b6e1
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0042b6e2
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0042b6e7
    PUSH 0x0                            ; 0042b6ea
    PUSH EDI                            ; 0042b6ec
    MOV ECX,dword ptr [EBX + 0xc2bc]    ; 0042b6ed
    PUSH ECX                            ; 0042b6f3
    PUSH EBX                            ; 0042b6f4
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0042b6f5
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0042b6fa
    PUSH 0x0                            ; 0042b6fd
    PUSH EDI                            ; 0042b6ff
    MOV EDI,dword ptr [EBX + 0xc2d0]    ; 0042b700
    PUSH EDI                            ; 0042b706
    PUSH EBX                            ; 0042b707
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0042b708
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0042b70d
    PUSH 0x5d562d                       ; 0042b710 | = "limb?.wav"
        ;   Label: LAB_0042b710
    PUSH EBX                            ; 0042b715
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 0042b716
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0042b71b
    PUSH EBP                            ; 0042b71e
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 0042b71f
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 0042b724
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0042b72a
    ADD ESP,0x4                         ; 0042b731
    TEST EBP,EBP                        ; 0042b734
    JZ 0x0042b803                       ; 0042b736
        ;   XREF to: 0042b803 (CONDITIONAL_JUMP)  ; LAB_0042b803
    FLD float ptr [ESI + 0x8]           ; 0042b73c
        ;   Label: LAB_0042b73c
    FLD ST0                             ; 0042b73f
    FMUL double ptr [0x005d563d]        ; 0042b741 | DAT_005d563d
    FSTP ST1                            ; 0042b747
    FSTP float ptr [ESI + 0x8]          ; 0042b749
    CMP dword ptr [EBX + 0xc2c8],0x0    ; 0042b74c
    JL 0x0042b80f                       ; 0042b753
        ;   XREF to: 0042b80f (CONDITIONAL_JUMP)  ; LAB_0042b80f
    MOV EDX,dword ptr [EBX + 0xc2d0]    ; 0042b759
        ;   Label: LAB_0042b759
    MOV EAX,dword ptr [ESI]             ; 0042b75f
    CMP EAX,EDX                         ; 0042b761
    JZ 0x0042b81b                       ; 0042b763
        ;   XREF to: 0042b81b (CONDITIONAL_JUMP)  ; LAB_0042b81b
    CMP EAX,dword ptr [EBX + 0xc2c8]    ; 0042b769
    JZ 0x0042b77d                       ; 0042b76f
        ;   XREF to: 0042b77d (CONDITIONAL_JUMP)  ; LAB_0042b77d
    CMP EAX,dword ptr [EBX + 0xc2cc]    ; 0042b771
    JNZ 0x0042b833                      ; 0042b777
        ;   XREF to: 0042b833 (CONDITIONAL_JUMP)  ; LAB_0042b833
    MOV EAX,dword ptr [ESI + 0x4]       ; 0042b77d
        ;   Label: LAB_0042b77d
    MOV dword ptr [ESI + 0x4],EAX       ; 0042b780
    ADD ESP,0xc                         ; 0042b783
    POP EBP                             ; 0042b786
    POP EDI                             ; 0042b787
    POP ESI                             ; 0042b788
    POP EBX                             ; 0042b789
    RET                                 ; 0042b78a
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 0042b78b
        ;   Label: caseD_1
    JMP 0x0042b5c3                      ; 0042b791
        ;   XREF to: 0042b5c3 (UNCONDITIONAL_JUMP)  ; LAB_0042b5c3
    MOV EAX,dword ptr [EBX + 0xc2c0]    ; 0042b796
        ;   Label: caseD_2
    JMP 0x0042b5c3                      ; 0042b79c
        ;   XREF to: 0042b5c3 (UNCONDITIONAL_JUMP)  ; LAB_0042b5c3
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 0042b7a1
        ;   Label: caseD_3
    JMP 0x0042b5c3                      ; 0042b7a7
        ;   XREF to: 0042b5c3 (UNCONDITIONAL_JUMP)  ; LAB_0042b5c3
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 0042b7ac
        ;   Label: caseD_4
    JMP 0x0042b5c3                      ; 0042b7b2
        ;   XREF to: 0042b5c3 (UNCONDITIONAL_JUMP)  ; LAB_0042b5c3
    MOV EAX,dword ptr [EBX + 0xc2cc]    ; 0042b7b7
        ;   Label: caseD_5
    JMP 0x0042b5c3                      ; 0042b7bd
        ;   XREF to: 0042b5c3 (UNCONDITIONAL_JUMP)  ; LAB_0042b5c3
    CMP EAX,dword ptr [EBX + 0xc2bc]    ; 0042b7c2
        ;   Label: LAB_0042b7c2
    JZ 0x0042b5d5                       ; 0042b7c8
        ;   XREF to: 0042b5d5 (CONDITIONAL_JUMP)  ; LAB_0042b5d5
    CMP EAX,dword ptr [EBX + 0xc2c0]    ; 0042b7ce
    JZ 0x0042b5d5                       ; 0042b7d4
        ;   XREF to: 0042b5d5 (CONDITIONAL_JUMP)  ; LAB_0042b5d5
    CMP EAX,dword ptr [EBX + 0xc2c4]    ; 0042b7da
    JZ 0x0042b5d5                       ; 0042b7e0
        ;   XREF to: 0042b5d5 (CONDITIONAL_JUMP)  ; LAB_0042b5d5
    CMP EAX,dword ptr [EBX + 0xc2cc]    ; 0042b7e6
    JZ 0x0042b5d5                       ; 0042b7ec
        ;   XREF to: 0042b5d5 (CONDITIONAL_JUMP)  ; LAB_0042b5d5
    CMP EAX,dword ptr [EBX + 0xc2d0]    ; 0042b7f2
    JZ 0x0042b5d5                       ; 0042b7f8
        ;   XREF to: 0042b5d5 (CONDITIONAL_JUMP)  ; LAB_0042b5d5
    JMP 0x0042b759                      ; 0042b7fe
        ;   XREF to: 0042b759 (UNCONDITIONAL_JUMP)  ; LAB_0042b759
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0042b803
        ;   Label: LAB_0042b803
    JMP 0x0042b73c                      ; 0042b80a
        ;   XREF to: 0042b73c (UNCONDITIONAL_JUMP)  ; LAB_0042b73c
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 0042b80f
        ;   Label: LAB_0042b80f
    JMP 0x0042b759                      ; 0042b816
        ;   XREF to: 0042b759 (UNCONDITIONAL_JUMP)  ; LAB_0042b759
    FLD float ptr [ESI + 0x4]           ; 0042b81b
        ;   Label: LAB_0042b81b
    FLD ST0                             ; 0042b81e
    FMUL double ptr [0x005d564d]        ; 0042b820 | DAT_005d564d
    FSTP ST1                            ; 0042b826
    FSTP float ptr [ESI + 0x4]          ; 0042b828
    ADD ESP,0xc                         ; 0042b82b
    POP EBP                             ; 0042b82e
    POP EDI                             ; 0042b82f
    POP ESI                             ; 0042b830
    POP EBX                             ; 0042b831
    RET                                 ; 0042b832
    FLD float ptr [ESI + 0x4]           ; 0042b833
        ;   Label: LAB_0042b833
    FLD ST0                             ; 0042b836
    FMUL double ptr [0x005d5645]        ; 0042b838 | DAT_005d5645
    FSTP ST1                            ; 0042b83e
    FSTP float ptr [ESI + 0x4]          ; 0042b840
    ADD ESP,0xc                         ; 0042b843
    POP EBP                             ; 0042b846
    POP EDI                             ; 0042b847
    POP ESI                             ; 0042b848
    POP EBX                             ; 0042b849
    RET                                 ; 0042b84a

