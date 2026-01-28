; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_ghoul_cpp_FUN_004e8520(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_FUN_004e87e0 at 004e881e
;
; Referenced Globals:
;   void* switchdataD_004e8504 = 004e855d
;   TerminatedCString s_limb_wav_0062de5e
;   double DOUBLE_0062de6a = 7
;   double DOUBLE_0062de72 = 0.5
;   double DOUBLE_0062de7a = 2.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.unk4
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
;   core_bodypart.cpp_FUN_0041a050
;   core_charactr.cpp_CCharacter_FUN_0042bcc0
;   core_charactr.cpp_CCharacter_FUN_0042bd30
;   core_charactr.cpp_CCharacter_FUN_0042f300
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8520
        ;   Label: core_ghoul.cpp_FUN_004e8520
    PUSH ESI                            ; 004e8521
    PUSH EDI                            ; 004e8522
    PUSH EBP                            ; 004e8523
    SUB ESP,0xc                         ; 004e8524
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e8527
    MOV ESI,dword ptr [ESP + 0x24]      ; 004e852b
    FLD float ptr [ESI + 0x2c]          ; 004e852f
    FLDZ                                ; 004e8532
    FCOMPP                              ; 004e8534
    FNSTSW AX                           ; 004e8536
    SAHF                                ; 004e8538
    JNC 0x004e8565                      ; 004e8539
        ;   XREF to: 004e8565 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004e853b
    JNZ 0x004e8565                      ; 004e853e
        ;   XREF to: 004e8565 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004e8540
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 004e8545
    MOV EDI,0x6                         ; 004e8547
    SAR EDX,0x1f                        ; 004e854c
    IDIV EDI                            ; 004e854f
    CMP EDX,0x5                         ; 004e8551
    JA 0x004e8565                       ; 004e8554
        ;   XREF to: 004e8565 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4e8504]  ; 004e8556 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 004e855d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004e8563
        ;   Label: LAB_004e8563
    MOV ECX,dword ptr [EBX + 0xbee0]    ; 004e8565
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004e856b
    CMP EAX,ECX                         ; 004e856d
    JNZ 0x004e8755                      ; 004e856f
        ;   XREF to: 004e8755 (CONDITIONAL_JUMP)  ; LAB_004e8755
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004e8575
        ;   Label: LAB_004e8575
    MOV EBP,dword ptr [EBX + 0xbf08]    ; 004e8578
    MOV dword ptr [ESP + 0x8],EAX       ; 004e857e
    CMP EBP,dword ptr [ESI]             ; 004e8582
    JNZ 0x004e858e                      ; 004e8584
        ;   XREF to: 004e858e (CONDITIONAL_JUMP)  ; LAB_004e858e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004e8586
    MOV EDX,dword ptr [EBX + 0xbf04]    ; 004e858e
        ;   Label: LAB_004e858e
    CMP EDX,dword ptr [ESI]             ; 004e8594
    JNZ 0x004e85a0                      ; 004e8596
        ;   XREF to: 004e85a0 (CONDITIONAL_JUMP)  ; LAB_004e85a0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004e8598
    MOV EAX,[0x0067b654]                ; 004e85a0 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e85a0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004e85a5 | g_CGameInstance.unk4
    JZ 0x004e85b6                       ; 004e85ac
        ;   XREF to: 004e85b6 (CONDITIONAL_JUMP)  ; LAB_004e85b6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004e85ae
    MOV EAX,[0x0067b654]                ; 004e85b6 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e85b6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e85bb | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004e85be
    JNZ 0x004e85c6                      ; 004e85c0
        ;   XREF to: 004e85c6 (CONDITIONAL_JUMP)  ; LAB_004e85c6
    MOV dword ptr [ESP + 0x8],EDX       ; 004e85c2
    PUSH dword ptr [ESP + 0x8]          ; 004e85c6
        ;   Label: LAB_004e85c6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e85ca
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e85cf
    TEST EAX,EAX                        ; 004e85d2
    JZ 0x004e86ec                       ; 004e85d4
        ;   XREF to: 004e86ec (CONDITIONAL_JUMP)  ; LAB_004e86ec
    PUSH 0x0                            ; 004e85da
    PUSH 0x0                            ; 004e85dc
    PUSH 0x0                            ; 004e85de
    PUSH EBX                            ; 004e85e0
    LEA EAX,[ESI + 0xc]                 ; 004e85e1
    PUSH EAX                            ; 004e85e4
    LEA EAX,[EBX + 0x30]                ; 004e85e5
    PUSH EAX                            ; 004e85e8
    LEA EAX,[EBX + 0x20]                ; 004e85e9
    PUSH EAX                            ; 004e85ec
    CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10 ; 004e85ed
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CreateBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 004e85f2
    MOV EDI,EAX                         ; 004e85f5
    PUSH 0x0                            ; 004e85f7
    MOV EBP,EAX                         ; 004e85f9
    MOV EAX,dword ptr [ESI]             ; 004e85fb
    PUSH EAX                            ; 004e85fd
    PUSH EDI                            ; 004e85fe
    PUSH EBX                            ; 004e85ff
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 004e8600
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 004e8605
    MOV EDX,dword ptr [EBX + 0xbee0]    ; 004e8607
    ADD ESP,0x10                        ; 004e860d
    CMP EAX,EDX                         ; 004e8610
    JNZ 0x004e8627                      ; 004e8612
        ;   XREF to: 004e8627 (CONDITIONAL_JUMP)  ; LAB_004e8627
    PUSH 0x0                            ; 004e8614
    MOV ECX,dword ptr [EBX + 0xbee4]    ; 004e8616
    PUSH ECX                            ; 004e861c
    PUSH EDI                            ; 004e861d
    PUSH EBX                            ; 004e861e
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 004e861f
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e8624
    MOV EDI,dword ptr [EBX + 0xbee8]    ; 004e8627
        ;   Label: LAB_004e8627
    CMP EDI,dword ptr [ESI]             ; 004e862d
    JNZ 0x004e8644                      ; 004e862f
        ;   XREF to: 004e8644 (CONDITIONAL_JUMP)  ; LAB_004e8644
    PUSH 0x0                            ; 004e8631
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e8633
    PUSH EAX                            ; 004e8639
    PUSH EBP                            ; 004e863a
    PUSH EBX                            ; 004e863b
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 004e863c
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e8641
    MOV EDX,dword ptr [EBX + 0xbf04]    ; 004e8644
        ;   Label: LAB_004e8644
    CMP EDX,dword ptr [ESI]             ; 004e864a
    JNZ 0x004e86b0                      ; 004e864c
        ;   XREF to: 004e86b0 (CONDITIONAL_JUMP)  ; LAB_004e86b0
    PUSH 0x0                            ; 004e864e
    LEA EDI,[ESI + 0xc]                 ; 004e8650
    PUSH EDI                            ; 004e8653
    MOV ECX,dword ptr [EBX + 0xbee8]    ; 004e8654
    PUSH ECX                            ; 004e865a
    PUSH EBX                            ; 004e865b
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004e865c
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e8661
    PUSH 0x0                            ; 004e8664
    PUSH EDI                            ; 004e8666
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e8667
    PUSH EAX                            ; 004e866d
    PUSH EBX                            ; 004e866e
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004e866f
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e8674
    PUSH 0x0                            ; 004e8677
    PUSH EDI                            ; 004e8679
    MOV EDX,dword ptr [EBX + 0xbee0]    ; 004e867a
    PUSH EDX                            ; 004e8680
    PUSH EBX                            ; 004e8681
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004e8682
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e8687
    PUSH 0x0                            ; 004e868a
    PUSH EDI                            ; 004e868c
    MOV ECX,dword ptr [EBX + 0xbee4]    ; 004e868d
    PUSH ECX                            ; 004e8693
    PUSH EBX                            ; 004e8694
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004e8695
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e869a
    PUSH 0x0                            ; 004e869d
    PUSH EDI                            ; 004e869f
    MOV EDI,dword ptr [EBX + 0xbf08]    ; 004e86a0
    PUSH EDI                            ; 004e86a6
    PUSH EBX                            ; 004e86a7
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004e86a8
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004e86ad
    PUSH 0x62de5e                       ; 004e86b0 | = "limb?.wav"
        ;   Label: LAB_004e86b0
    PUSH EBX                            ; 004e86b5
    CALL core_charactr.cpp_CCharacter_FUN_0042f300 ; 004e86b6
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004e86bb
    PUSH EBP                            ; 004e86be
    CALL core_bodypart.cpp_FUN_0041a050 ; 004e86bf
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041a050()
    MOV EAX,dword ptr [EBX + 0xbf08]    ; 004e86c4
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e86ca
    ADD ESP,0x4                         ; 004e86d1
    TEST EBP,EBP                        ; 004e86d4
    JZ 0x004e8796                       ; 004e86d6
        ;   XREF to: 004e8796 (CONDITIONAL_JUMP)  ; LAB_004e8796
    FLD float ptr [ESI + 0x8]           ; 004e86dc
        ;   Label: LAB_004e86dc
    FLD ST0                             ; 004e86df
    FMUL double ptr [0x0062de6a]        ; 004e86e1 | DOUBLE_0062de6a
    FSTP ST1                            ; 004e86e7
    FSTP float ptr [ESI + 0x8]          ; 004e86e9
    MOV EDX,dword ptr [EBX + 0xbf08]    ; 004e86ec
        ;   Label: LAB_004e86ec
    MOV EAX,dword ptr [ESI]             ; 004e86f2
    CMP EAX,EDX                         ; 004e86f4
    JZ 0x004e87a2                       ; 004e86f6
        ;   XREF to: 004e87a2 (CONDITIONAL_JUMP)  ; LAB_004e87a2
    CMP EAX,dword ptr [EBX + 0xbf00]    ; 004e86fc
    JZ 0x004e8710                       ; 004e8702
        ;   XREF to: 004e8710 (CONDITIONAL_JUMP)  ; LAB_004e8710
    CMP EAX,dword ptr [EBX + 0xbf04]    ; 004e8704
    JNZ 0x004e87ba                      ; 004e870a
        ;   XREF to: 004e87ba (CONDITIONAL_JUMP)  ; LAB_004e87ba
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e8710
        ;   Label: LAB_004e8710
    MOV dword ptr [ESI + 0x4],EAX       ; 004e8713
    ADD ESP,0xc                         ; 004e8716
    POP EBP                             ; 004e8719
    POP EDI                             ; 004e871a
    POP ESI                             ; 004e871b
    POP EBX                             ; 004e871c
    RET                                 ; 004e871d
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 004e871e
        ;   Label: caseD_1
    JMP 0x004e8563                      ; 004e8724
        ;   XREF to: 004e8563 (UNCONDITIONAL_JUMP)  ; LAB_004e8563
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 004e8729
        ;   Label: caseD_2
    JMP 0x004e8563                      ; 004e872f
        ;   XREF to: 004e8563 (UNCONDITIONAL_JUMP)  ; LAB_004e8563
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e8734
        ;   Label: caseD_3
    JMP 0x004e8563                      ; 004e873a
        ;   XREF to: 004e8563 (UNCONDITIONAL_JUMP)  ; LAB_004e8563
    MOV EAX,dword ptr [EBX + 0xbf08]    ; 004e873f
        ;   Label: caseD_4
    JMP 0x004e8563                      ; 004e8745
        ;   XREF to: 004e8563 (UNCONDITIONAL_JUMP)  ; LAB_004e8563
    MOV EAX,dword ptr [EBX + 0xbf04]    ; 004e874a
        ;   Label: caseD_5
    JMP 0x004e8563                      ; 004e8750
        ;   XREF to: 004e8563 (UNCONDITIONAL_JUMP)  ; LAB_004e8563
    CMP EAX,dword ptr [EBX + 0xbee4]    ; 004e8755
        ;   Label: LAB_004e8755
    JZ 0x004e8575                       ; 004e875b
        ;   XREF to: 004e8575 (CONDITIONAL_JUMP)  ; LAB_004e8575
    CMP EAX,dword ptr [EBX + 0xbee8]    ; 004e8761
    JZ 0x004e8575                       ; 004e8767
        ;   XREF to: 004e8575 (CONDITIONAL_JUMP)  ; LAB_004e8575
    CMP EAX,dword ptr [EBX + 0xbeec]    ; 004e876d
    JZ 0x004e8575                       ; 004e8773
        ;   XREF to: 004e8575 (CONDITIONAL_JUMP)  ; LAB_004e8575
    CMP EAX,dword ptr [EBX + 0xbf04]    ; 004e8779
    JZ 0x004e8575                       ; 004e877f
        ;   XREF to: 004e8575 (CONDITIONAL_JUMP)  ; LAB_004e8575
    CMP EAX,dword ptr [EBX + 0xbf08]    ; 004e8785
    JZ 0x004e8575                       ; 004e878b
        ;   XREF to: 004e8575 (CONDITIONAL_JUMP)  ; LAB_004e8575
    JMP 0x004e86ec                      ; 004e8791
        ;   XREF to: 004e86ec (UNCONDITIONAL_JUMP)  ; LAB_004e86ec
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004e8796
        ;   Label: LAB_004e8796
    JMP 0x004e86dc                      ; 004e879d
        ;   XREF to: 004e86dc (UNCONDITIONAL_JUMP)  ; LAB_004e86dc
    FLD float ptr [ESI + 0x4]           ; 004e87a2
        ;   Label: LAB_004e87a2
    FLD ST0                             ; 004e87a5
    FMUL double ptr [0x0062de7a]        ; 004e87a7 | DOUBLE_0062de7a
    FSTP ST1                            ; 004e87ad
    FSTP float ptr [ESI + 0x4]          ; 004e87af
    ADD ESP,0xc                         ; 004e87b2
    POP EBP                             ; 004e87b5
    POP EDI                             ; 004e87b6
    POP ESI                             ; 004e87b7
    POP EBX                             ; 004e87b8
    RET                                 ; 004e87b9
    FLD float ptr [ESI + 0x4]           ; 004e87ba
        ;   Label: LAB_004e87ba
    FLD ST0                             ; 004e87bd
    FMUL double ptr [0x0062de72]        ; 004e87bf | DOUBLE_0062de72
    FSTP ST1                            ; 004e87c5
    FSTP float ptr [ESI + 0x4]          ; 004e87c7
    ADD ESP,0xc                         ; 004e87ca
    POP EBP                             ; 004e87cd
    POP EDI                             ; 004e87ce
    POP ESI                             ; 004e87cf
    POP EBX                             ; 004e87d0
    RET                                 ; 004e87d1

