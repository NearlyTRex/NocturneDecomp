; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004e05b0(CGhoul *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004e0870 at 004e08ae
;
; Referenced Globals:
;   undefined1* switchdataD_004e058c = 004e05ed
;   TerminatedCString s_limb_wav_005e3d95
;   undefined4 DAT_005e3da1
;   undefined4 DAT_005e3da9
;   undefined4 DAT_005e3db1
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

    PUSH EBX                            ; 004e05b0
        ;   Label: core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e05b0
    PUSH ESI                            ; 004e05b1
    PUSH EDI                            ; 004e05b2
    PUSH EBP                            ; 004e05b3
    SUB ESP,0xc                         ; 004e05b4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e05b7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004e05bb
    FLD float ptr [ESI + 0x2c]          ; 004e05bf
    FLDZ                                ; 004e05c2
    FCOMPP                              ; 004e05c4
    FNSTSW AX                           ; 004e05c6
    SAHF                                ; 004e05c8
    JNC 0x004e05f5                      ; 004e05c9
        ;   XREF to: 004e05f5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004e05cb
    JNZ 0x004e05f5                      ; 004e05ce
        ;   XREF to: 004e05f5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004e05d0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 004e05d5
    MOV EDI,0x6                         ; 004e05d7
    SAR EDX,0x1f                        ; 004e05dc
    IDIV EDI                            ; 004e05df
    CMP EDX,0x5                         ; 004e05e1
    JA 0x004e05f5                       ; 004e05e4
        ;   XREF to: 004e05f5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4e058c]  ; 004e05e6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 004e05ed
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004e05f3
        ;   Label: LAB_004e05f3
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 004e05f5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004e05fb
    CMP EAX,ECX                         ; 004e05fd
    JNZ 0x004e07e5                      ; 004e05ff
        ;   XREF to: 004e07e5 (CONDITIONAL_JUMP)  ; LAB_004e07e5
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004e0605
        ;   Label: LAB_004e0605
    MOV EBP,dword ptr [EBX + 0xc2b4]    ; 004e0608
    MOV dword ptr [ESP + 0x8],EAX       ; 004e060e
    CMP EBP,dword ptr [ESI]             ; 004e0612
    JNZ 0x004e061e                      ; 004e0614
        ;   XREF to: 004e061e (CONDITIONAL_JUMP)  ; LAB_004e061e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004e0616
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 004e061e
        ;   Label: LAB_004e061e
    CMP EDX,dword ptr [ESI]             ; 004e0624
    JNZ 0x004e0630                      ; 004e0626
        ;   XREF to: 004e0630 (CONDITIONAL_JUMP)  ; LAB_004e0630
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004e0628
    MOV EAX,[0x0061d95c]                ; 004e0630 | g_CGamePtr
        ;   Label: LAB_004e0630
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004e0635 | g_CGameInstance.field460_0x1fc
    JZ 0x004e0646                       ; 004e063c
        ;   XREF to: 004e0646 (CONDITIONAL_JUMP)  ; LAB_004e0646
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004e063e
    MOV EAX,[0x0061d95c]                ; 004e0646 | g_CGamePtr
        ;   Label: LAB_004e0646
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e064b | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 004e064e
    JNZ 0x004e0656                      ; 004e0650
        ;   XREF to: 004e0656 (CONDITIONAL_JUMP)  ; LAB_004e0656
    MOV dword ptr [ESP + 0x8],EDX       ; 004e0652
    PUSH dword ptr [ESP + 0x8]          ; 004e0656
        ;   Label: LAB_004e0656
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004e065a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004e065f
    TEST EAX,EAX                        ; 004e0662
    JZ 0x004e077c                       ; 004e0664
        ;   XREF to: 004e077c (CONDITIONAL_JUMP)  ; LAB_004e077c
    PUSH 0x0                            ; 004e066a
    PUSH 0x0                            ; 004e066c
    PUSH 0x0                            ; 004e066e
    PUSH EBX                            ; 004e0670
    LEA EAX,[ESI + 0xc]                 ; 004e0671
    PUSH EAX                            ; 004e0674
    LEA EAX,[EBX + 0x30]                ; 004e0675
    PUSH EAX                            ; 004e0678
    LEA EAX,[EBX + 0x20]                ; 004e0679
    PUSH EAX                            ; 004e067c
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 004e067d
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004e0682
    MOV EDI,EAX                         ; 004e0685
    PUSH 0x0                            ; 004e0687
    MOV EBP,EAX                         ; 004e0689
    MOV EAX,dword ptr [ESI]             ; 004e068b
    PUSH EAX                            ; 004e068d
    PUSH EDI                            ; 004e068e
    PUSH EBX                            ; 004e068f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004e0690
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004e0695
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 004e0697
    ADD ESP,0x10                        ; 004e069d
    CMP EAX,EDX                         ; 004e06a0
    JNZ 0x004e06b7                      ; 004e06a2
        ;   XREF to: 004e06b7 (CONDITIONAL_JUMP)  ; LAB_004e06b7
    PUSH 0x0                            ; 004e06a4
    MOV ECX,dword ptr [EBX + 0xc290]    ; 004e06a6
    PUSH ECX                            ; 004e06ac
    PUSH EDI                            ; 004e06ad
    PUSH EBX                            ; 004e06ae
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004e06af
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004e06b4
    MOV EDI,dword ptr [EBX + 0xc294]    ; 004e06b7
        ;   Label: LAB_004e06b7
    CMP EDI,dword ptr [ESI]             ; 004e06bd
    JNZ 0x004e06d4                      ; 004e06bf
        ;   XREF to: 004e06d4 (CONDITIONAL_JUMP)  ; LAB_004e06d4
    PUSH 0x0                            ; 004e06c1
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004e06c3
    PUSH EAX                            ; 004e06c9
    PUSH EBP                            ; 004e06ca
    PUSH EBX                            ; 004e06cb
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004e06cc
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004e06d1
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 004e06d4
        ;   Label: LAB_004e06d4
    CMP EDX,dword ptr [ESI]             ; 004e06da
    JNZ 0x004e0740                      ; 004e06dc
        ;   XREF to: 004e0740 (CONDITIONAL_JUMP)  ; LAB_004e0740
    PUSH 0x0                            ; 004e06de
    LEA EDI,[ESI + 0xc]                 ; 004e06e0
    PUSH EDI                            ; 004e06e3
    MOV ECX,dword ptr [EBX + 0xc294]    ; 004e06e4
    PUSH ECX                            ; 004e06ea
    PUSH EBX                            ; 004e06eb
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004e06ec
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004e06f1
    PUSH 0x0                            ; 004e06f4
    PUSH EDI                            ; 004e06f6
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004e06f7
    PUSH EAX                            ; 004e06fd
    PUSH EBX                            ; 004e06fe
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004e06ff
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004e0704
    PUSH 0x0                            ; 004e0707
    PUSH EDI                            ; 004e0709
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 004e070a
    PUSH EDX                            ; 004e0710
    PUSH EBX                            ; 004e0711
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004e0712
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004e0717
    PUSH 0x0                            ; 004e071a
    PUSH EDI                            ; 004e071c
    MOV ECX,dword ptr [EBX + 0xc290]    ; 004e071d
    PUSH ECX                            ; 004e0723
    PUSH EBX                            ; 004e0724
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004e0725
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004e072a
    PUSH 0x0                            ; 004e072d
    PUSH EDI                            ; 004e072f
    MOV EDI,dword ptr [EBX + 0xc2b4]    ; 004e0730
    PUSH EDI                            ; 004e0736
    PUSH EBX                            ; 004e0737
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004e0738
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004e073d
    PUSH 0x5e3d95                       ; 004e0740 | = "limb?.wav"
        ;   Label: LAB_004e0740
    PUSH EBX                            ; 004e0745
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 004e0746
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004e074b
    PUSH EBP                            ; 004e074e
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 004e074f
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc2b4]    ; 004e0754
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e075a
    ADD ESP,0x4                         ; 004e0761
    TEST EBP,EBP                        ; 004e0764
    JZ 0x004e0826                       ; 004e0766
        ;   XREF to: 004e0826 (CONDITIONAL_JUMP)  ; LAB_004e0826
    FLD float ptr [ESI + 0x8]           ; 004e076c
        ;   Label: LAB_004e076c
    FLD ST0                             ; 004e076f
    FMUL double ptr [0x005e3da1]        ; 004e0771 | DAT_005e3da1
    FSTP ST1                            ; 004e0777
    FSTP float ptr [ESI + 0x8]          ; 004e0779
    MOV EDX,dword ptr [EBX + 0xc2b4]    ; 004e077c
        ;   Label: LAB_004e077c
    MOV EAX,dword ptr [ESI]             ; 004e0782
    CMP EAX,EDX                         ; 004e0784
    JZ 0x004e0832                       ; 004e0786
        ;   XREF to: 004e0832 (CONDITIONAL_JUMP)  ; LAB_004e0832
    CMP EAX,dword ptr [EBX + 0xc2ac]    ; 004e078c
    JZ 0x004e07a0                       ; 004e0792
        ;   XREF to: 004e07a0 (CONDITIONAL_JUMP)  ; LAB_004e07a0
    CMP EAX,dword ptr [EBX + 0xc2b0]    ; 004e0794
    JNZ 0x004e084a                      ; 004e079a
        ;   XREF to: 004e084a (CONDITIONAL_JUMP)  ; LAB_004e084a
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e07a0
        ;   Label: LAB_004e07a0
    MOV dword ptr [ESI + 0x4],EAX       ; 004e07a3
    ADD ESP,0xc                         ; 004e07a6
    POP EBP                             ; 004e07a9
    POP EDI                             ; 004e07aa
    POP ESI                             ; 004e07ab
    POP EBX                             ; 004e07ac
    RET                                 ; 004e07ad
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004e07ae
        ;   Label: caseD_1
    JMP 0x004e05f3                      ; 004e07b4
        ;   XREF to: 004e05f3 (UNCONDITIONAL_JUMP)  ; LAB_004e05f3
    MOV EAX,dword ptr [EBX + 0xc294]    ; 004e07b9
        ;   Label: caseD_2
    JMP 0x004e05f3                      ; 004e07bf
        ;   XREF to: 004e05f3 (UNCONDITIONAL_JUMP)  ; LAB_004e05f3
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004e07c4
        ;   Label: caseD_3
    JMP 0x004e05f3                      ; 004e07ca
        ;   XREF to: 004e05f3 (UNCONDITIONAL_JUMP)  ; LAB_004e05f3
    MOV EAX,dword ptr [EBX + 0xc2b4]    ; 004e07cf
        ;   Label: caseD_4
    JMP 0x004e05f3                      ; 004e07d5
        ;   XREF to: 004e05f3 (UNCONDITIONAL_JUMP)  ; LAB_004e05f3
    MOV EAX,dword ptr [EBX + 0xc2b0]    ; 004e07da
        ;   Label: caseD_5
    JMP 0x004e05f3                      ; 004e07e0
        ;   XREF to: 004e05f3 (UNCONDITIONAL_JUMP)  ; LAB_004e05f3
    CMP EAX,dword ptr [EBX + 0xc290]    ; 004e07e5
        ;   Label: LAB_004e07e5
    JZ 0x004e0605                       ; 004e07eb
        ;   XREF to: 004e0605 (CONDITIONAL_JUMP)  ; LAB_004e0605
    CMP EAX,dword ptr [EBX + 0xc294]    ; 004e07f1
    JZ 0x004e0605                       ; 004e07f7
        ;   XREF to: 004e0605 (CONDITIONAL_JUMP)  ; LAB_004e0605
    CMP EAX,dword ptr [EBX + 0xc298]    ; 004e07fd
    JZ 0x004e0605                       ; 004e0803
        ;   XREF to: 004e0605 (CONDITIONAL_JUMP)  ; LAB_004e0605
    CMP EAX,dword ptr [EBX + 0xc2b0]    ; 004e0809
    JZ 0x004e0605                       ; 004e080f
        ;   XREF to: 004e0605 (CONDITIONAL_JUMP)  ; LAB_004e0605
    CMP EAX,dword ptr [EBX + 0xc2b4]    ; 004e0815
    JZ 0x004e0605                       ; 004e081b
        ;   XREF to: 004e0605 (CONDITIONAL_JUMP)  ; LAB_004e0605
    JMP 0x004e077c                      ; 004e0821
        ;   XREF to: 004e077c (UNCONDITIONAL_JUMP)  ; LAB_004e077c
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004e0826
        ;   Label: LAB_004e0826
    JMP 0x004e076c                      ; 004e082d
        ;   XREF to: 004e076c (UNCONDITIONAL_JUMP)  ; LAB_004e076c
    FLD float ptr [ESI + 0x4]           ; 004e0832
        ;   Label: LAB_004e0832
    FLD ST0                             ; 004e0835
    FMUL double ptr [0x005e3db1]        ; 004e0837 | DAT_005e3db1
    FSTP ST1                            ; 004e083d
    FSTP float ptr [ESI + 0x4]          ; 004e083f
    ADD ESP,0xc                         ; 004e0842
    POP EBP                             ; 004e0845
    POP EDI                             ; 004e0846
    POP ESI                             ; 004e0847
    POP EBX                             ; 004e0848
    RET                                 ; 004e0849
    FLD float ptr [ESI + 0x4]           ; 004e084a
        ;   Label: LAB_004e084a
    FLD ST0                             ; 004e084d
    FMUL double ptr [0x005e3da9]        ; 004e084f | DAT_005e3da9
    FSTP ST1                            ; 004e0855
    FSTP float ptr [ESI + 0x4]          ; 004e0857
    ADD ESP,0xc                         ; 004e085a
    POP EBP                             ; 004e085d
    POP EDI                             ; 004e085e
    POP ESI                             ; 004e085f
    POP EBX                             ; 004e0860
    RET                                 ; 004e0861

