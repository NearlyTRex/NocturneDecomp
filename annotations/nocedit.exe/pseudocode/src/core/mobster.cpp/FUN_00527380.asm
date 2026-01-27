; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mobster.cpp_FUN_00527380()
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_mobster.cpp_FUN_00527740 at 0052776c
;
; Referenced Globals:
;   void* switchdataD_00527364 = 005273c0
;   TerminatedCString s_limb_wav_0063999e
;   double DOUBLE_006399ae = 0.333000000000000
;   double DOUBLE_006399b6 = 0.666000000000000
;   double DOUBLE_006399be = 7
;   double DOUBLE_006399c6 = 0.5
;   double DOUBLE_006399ce = 2.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.unk4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
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

    PUSH EBX                            ; 00527380
        ;   Label: core_mobster.cpp_FUN_00527380
    PUSH ESI                            ; 00527381
    PUSH EDI                            ; 00527382
    PUSH EBP                            ; 00527383
    MOV EBP,ESP                         ; 00527384
    SUB ESP,0x1c                        ; 00527386
    AND ESP,0xfffffff8                  ; 00527389
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052738c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052738f
    FLD float ptr [ESI + 0x2c]          ; 00527392
    FLDZ                                ; 00527395
    FCOMPP                              ; 00527397
    FNSTSW AX                           ; 00527399
    SAHF                                ; 0052739b
    JNC 0x005273c8                      ; 0052739c
        ;   XREF to: 005273c8 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0052739e
    JNZ 0x005273c8                      ; 005273a1
        ;   XREF to: 005273c8 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005273a3
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 005273a8
    MOV EDI,0x6                         ; 005273aa
    SAR EDX,0x1f                        ; 005273af
    IDIV EDI                            ; 005273b2
    CMP EDX,0x5                         ; 005273b4
    JA 0x005273c8                       ; 005273b7
        ;   XREF to: 005273c8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x527364]  ; 005273b9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbf60]    ; 005273c0
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 005273c6
        ;   Label: LAB_005273c6
    MOV ECX,dword ptr [EBX + 0xbf60]    ; 005273c8
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 005273ce
    CMP EAX,ECX                         ; 005273d0
    JNZ 0x00527682                      ; 005273d2
        ;   XREF to: 00527682 (CONDITIONAL_JUMP)  ; LAB_00527682
    MOV ECX,dword ptr [EBX + 0xbf84]    ; 005273d8
        ;   Label: LAB_005273d8
    CMP ECX,dword ptr [ESI]             ; 005273de
    JNZ 0x00527413                      ; 005273e0
        ;   XREF to: 00527413 (CONDITIONAL_JUMP)  ; LAB_00527413
    PUSH 0x3f800000                     ; 005273e2
    PUSH 0x0                            ; 005273e7
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005273e9
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 005273ee
    FLD float ptr [ESP + 0x20]          ; 005273f2
    ADD ESP,0x8                         ; 005273f6
    FST double ptr [ESP]                ; 005273f9
    FCOMP double ptr [0x006399ae]       ; 005273fc | DOUBLE_006399ae
    FNSTSW AX                           ; 00527402
    SAHF                                ; 00527404
    JNC 0x005276c3                      ; 00527405
        ;   XREF to: 005276c3 (CONDITIONAL_JUMP)  ; LAB_005276c3
    MOV EAX,dword ptr [EBX + 0xbf60]    ; 0052740b
    MOV dword ptr [ESI],EAX             ; 00527411
        ;   Label: LAB_00527411
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00527413
        ;   Label: LAB_00527413
    MOV EDI,dword ptr [EBX + 0xbf88]    ; 00527416
    MOV dword ptr [ESP + 0x14],EAX      ; 0052741c
    CMP EDI,dword ptr [ESI]             ; 00527420
    JNZ 0x0052742c                      ; 00527422
        ;   XREF to: 0052742c (CONDITIONAL_JUMP)  ; LAB_0052742c
    MOV dword ptr [ESP + 0x14],0x3d4ccccd ; 00527424
    MOV EDX,dword ptr [EBX + 0xbf84]    ; 0052742c
        ;   Label: LAB_0052742c
    CMP EDX,dword ptr [ESI]             ; 00527432
    JNZ 0x0052743e                      ; 00527434
        ;   XREF to: 0052743e (CONDITIONAL_JUMP)  ; LAB_0052743e
    MOV dword ptr [ESP + 0x14],0x3d75c28f ; 00527436
    MOV EAX,[0x0067b654]                ; 0052743e | g_CGamePtr
        ;   Label: LAB_0052743e
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00527443 | g_CGameInstance.unk4
    JZ 0x00527454                       ; 0052744a
        ;   XREF to: 00527454 (CONDITIONAL_JUMP)  ; LAB_00527454
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 0052744c
    MOV EAX,[0x0067b654]                ; 00527454 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_00527454
    MOV EDX,dword ptr [EAX + 0x14]      ; 00527459 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 0052745c
    JNZ 0x00527464                      ; 0052745e
        ;   XREF to: 00527464 (CONDITIONAL_JUMP)  ; LAB_00527464
    MOV dword ptr [ESP + 0x14],EDX      ; 00527460
    PUSH dword ptr [ESP + 0x14]         ; 00527464
        ;   Label: LAB_00527464
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00527468
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0052746d
    TEST EAX,EAX                        ; 00527470
    JZ 0x0052761a                       ; 00527472
        ;   XREF to: 0052761a (CONDITIONAL_JUMP)  ; LAB_0052761a
    PUSH 0x0                            ; 00527478
    PUSH 0x0                            ; 0052747a
    PUSH 0x0                            ; 0052747c
    PUSH EBX                            ; 0052747e
    LEA EAX,[ESI + 0xc]                 ; 0052747f
    PUSH EAX                            ; 00527482
    LEA EAX,[EBX + 0x30]                ; 00527483
    PUSH EAX                            ; 00527486
    LEA EAX,[EBX + 0x20]                ; 00527487
    PUSH EAX                            ; 0052748a
    CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10 ; 0052748b
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CreateBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 00527490
    MOV EDI,EAX                         ; 00527493
    PUSH 0x0                            ; 00527495
    MOV dword ptr [ESP + 0x14],EAX      ; 00527497
    MOV EAX,dword ptr [ESI]             ; 0052749b
    PUSH EAX                            ; 0052749d
    PUSH EDI                            ; 0052749e
    PUSH EBX                            ; 0052749f
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 005274a0
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 005274a5
    MOV EDX,dword ptr [EBX + 0xbf60]    ; 005274a7
    ADD ESP,0x10                        ; 005274ad
    CMP EAX,EDX                         ; 005274b0
    JNZ 0x005274c7                      ; 005274b2
        ;   XREF to: 005274c7 (CONDITIONAL_JUMP)  ; LAB_005274c7
    PUSH 0x0                            ; 005274b4
    MOV ECX,dword ptr [EBX + 0xbf64]    ; 005274b6
    PUSH ECX                            ; 005274bc
    PUSH EDI                            ; 005274bd
    PUSH EBX                            ; 005274be
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 005274bf
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 005274c4
    MOV EDI,dword ptr [EBX + 0xbf68]    ; 005274c7
        ;   Label: LAB_005274c7
    CMP EDI,dword ptr [ESI]             ; 005274cd
    JNZ 0x005274e8                      ; 005274cf
        ;   XREF to: 005274e8 (CONDITIONAL_JUMP)  ; LAB_005274e8
    PUSH 0x0                            ; 005274d1
    MOV EAX,dword ptr [EBX + 0xbf6c]    ; 005274d3
    PUSH EAX                            ; 005274d9
    MOV EDX,dword ptr [ESP + 0x18]      ; 005274da
    PUSH EDX                            ; 005274de
    PUSH EBX                            ; 005274df
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 005274e0
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 005274e5
    MOV ECX,dword ptr [EBX + 0xbf84]    ; 005274e8
        ;   Label: LAB_005274e8
    CMP ECX,dword ptr [ESI]             ; 005274ee
    JNZ 0x00527580                      ; 005274f0
        ;   XREF to: 00527580 (CONDITIONAL_JUMP)  ; LAB_00527580
    PUSH 0x0                            ; 005274f6
    LEA EDI,[ESI + 0xc]                 ; 005274f8
    PUSH EDI                            ; 005274fb
    MOV EAX,dword ptr [EBX + 0xbf68]    ; 005274fc
    PUSH EAX                            ; 00527502
    PUSH EBX                            ; 00527503
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 00527504
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00527509
    PUSH 0x0                            ; 0052750c
    PUSH EDI                            ; 0052750e
    MOV EDX,dword ptr [EBX + 0xbf6c]    ; 0052750f
    PUSH EDX                            ; 00527515
    PUSH EBX                            ; 00527516
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 00527517
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0052751c
    PUSH 0x0                            ; 0052751f
    PUSH EDI                            ; 00527521
    MOV ECX,dword ptr [EBX + 0xbf60]    ; 00527522
    PUSH ECX                            ; 00527528
    PUSH EBX                            ; 00527529
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 0052752a
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0052752f
    PUSH 0x0                            ; 00527532
    PUSH EDI                            ; 00527534
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 00527535
    PUSH EAX                            ; 0052753b
    PUSH EBX                            ; 0052753c
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 0052753d
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00527542
    PUSH 0x0                            ; 00527545
    PUSH EDI                            ; 00527547
    MOV EDX,dword ptr [EBX + 0xbf88]    ; 00527548
    PUSH EDX                            ; 0052754e
    PUSH EBX                            ; 0052754f
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 00527550
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00527555
    PUSH 0x0                            ; 00527558
    PUSH 0x1                            ; 0052755a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052755c
    PUSH EBX                            ; 00527562
    CALL dword ptr [EAX + 0x13c]        ; 00527563
    ADD ESP,0xc                         ; 00527569
    PUSH 0x0                            ; 0052756c
    PUSH 0x0                            ; 0052756e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00527570
    PUSH EBX                            ; 00527576
    CALL dword ptr [EAX + 0x13c]        ; 00527577
    ADD ESP,0xc                         ; 0052757d
    PUSH 0x63999e                       ; 00527580 | = "limb?.wav"
        ;   Label: LAB_00527580
    PUSH EBX                            ; 00527585
    CALL core_charactr.cpp_CCharacter_FUN_0042f300 ; 00527586
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 0052758b
    MOV ECX,dword ptr [ESP + 0x10]      ; 0052758e
    PUSH ECX                            ; 00527592
    CALL core_bodypart.cpp_FUN_0041a050 ; 00527593
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041a050()
    MOV EAX,dword ptr [EBX + 0xbf88]    ; 00527598
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0052759e
    ADD ESP,0x4                         ; 005275a5
    TEST EDI,EDI                        ; 005275a8
    JZ 0x005276e0                       ; 005275aa
        ;   XREF to: 005276e0 (CONDITIONAL_JUMP)  ; LAB_005276e0
    FLD float ptr [ESI + 0x8]           ; 005275b0
        ;   Label: LAB_005275b0
    FLD ST0                             ; 005275b3
    FMUL double ptr [0x006399be]        ; 005275b5 | DOUBLE_006399be
    MOV EAX,dword ptr [ESI]             ; 005275bb
    FSTP ST1                            ; 005275bd
    FSTP float ptr [ESI + 0x8]          ; 005275bf
    CMP EAX,dword ptr [EBX + 0xbf68]    ; 005275c2
    JNZ 0x005276ec                      ; 005275c8
        ;   XREF to: 005276ec (CONDITIONAL_JUMP)  ; LAB_005276ec
    PUSH 0x0                            ; 005275ce
        ;   Label: LAB_005275ce
    PUSH 0x1                            ; 005275d0
    MOV EAX,dword ptr [EBX + 0x154]     ; 005275d2
    PUSH EBX                            ; 005275d8
    CALL dword ptr [EAX + 0x13c]        ; 005275d9
    ADD ESP,0xc                         ; 005275df
    PUSH 0x0                            ; 005275e2
    PUSH 0x0                            ; 005275e4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005275e6
    PUSH EBX                            ; 005275ec
    CALL dword ptr [EAX + 0x13c]        ; 005275ed
    ADD ESP,0xc                         ; 005275f3
    MOV EDI,dword ptr [EBX + 0xbf60]    ; 005275f6
        ;   Label: LAB_005275f6
    MOV EAX,dword ptr [ESI]             ; 005275fc
    CMP EAX,EDI                         ; 005275fe
    JNZ 0x005276fd                      ; 00527600
        ;   XREF to: 005276fd (CONDITIONAL_JUMP)  ; LAB_005276fd
    PUSH 0x0                            ; 00527606
        ;   Label: LAB_00527606
    PUSH 0x0                            ; 00527608
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052760a
    PUSH EBX                            ; 00527610
    CALL dword ptr [EAX + 0x13c]        ; 00527611
    ADD ESP,0xc                         ; 00527617
    MOV ECX,dword ptr [EBX + 0xbf88]    ; 0052761a
        ;   Label: LAB_0052761a
    MOV EAX,dword ptr [ESI]             ; 00527620
    CMP EAX,ECX                         ; 00527622
    JZ 0x0052770e                       ; 00527624
        ;   XREF to: 0052770e (CONDITIONAL_JUMP)  ; LAB_0052770e
    CMP EAX,dword ptr [EBX + 0xbf80]    ; 0052762a
    JZ 0x0052763e                       ; 00527630
        ;   XREF to: 0052763e (CONDITIONAL_JUMP)  ; LAB_0052763e
    CMP EAX,dword ptr [EBX + 0xbf84]    ; 00527632
    JNZ 0x00527725                      ; 00527638
        ;   XREF to: 00527725 (CONDITIONAL_JUMP)  ; LAB_00527725
    MOV EAX,dword ptr [ESI + 0x4]       ; 0052763e
        ;   Label: LAB_0052763e
    MOV dword ptr [ESI + 0x4],EAX       ; 00527641
    MOV ESP,EBP                         ; 00527644
    POP EBP                             ; 00527646
    POP EDI                             ; 00527647
    POP ESI                             ; 00527648
    POP EBX                             ; 00527649
    RET                                 ; 0052764a
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 0052764b
        ;   Label: caseD_1
    JMP 0x005273c6                      ; 00527651
        ;   XREF to: 005273c6 (UNCONDITIONAL_JUMP)  ; LAB_005273c6
    MOV EAX,dword ptr [EBX + 0xbf68]    ; 00527656
        ;   Label: caseD_2
    JMP 0x005273c6                      ; 0052765c
        ;   XREF to: 005273c6 (UNCONDITIONAL_JUMP)  ; LAB_005273c6
    MOV EAX,dword ptr [EBX + 0xbf6c]    ; 00527661
        ;   Label: caseD_3
    JMP 0x005273c6                      ; 00527667
        ;   XREF to: 005273c6 (UNCONDITIONAL_JUMP)  ; LAB_005273c6
    MOV EAX,dword ptr [EBX + 0xbf88]    ; 0052766c
        ;   Label: caseD_4
    JMP 0x005273c6                      ; 00527672
        ;   XREF to: 005273c6 (UNCONDITIONAL_JUMP)  ; LAB_005273c6
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 00527677
        ;   Label: caseD_5
    JMP 0x005273c6                      ; 0052767d
        ;   XREF to: 005273c6 (UNCONDITIONAL_JUMP)  ; LAB_005273c6
    CMP EAX,dword ptr [EBX + 0xbf64]    ; 00527682
        ;   Label: LAB_00527682
    JZ 0x005273d8                       ; 00527688
        ;   XREF to: 005273d8 (CONDITIONAL_JUMP)  ; LAB_005273d8
    CMP EAX,dword ptr [EBX + 0xbf68]    ; 0052768e
    JZ 0x005273d8                       ; 00527694
        ;   XREF to: 005273d8 (CONDITIONAL_JUMP)  ; LAB_005273d8
    CMP EAX,dword ptr [EBX + 0xbf6c]    ; 0052769a
    JZ 0x005273d8                       ; 005276a0
        ;   XREF to: 005273d8 (CONDITIONAL_JUMP)  ; LAB_005273d8
    CMP EAX,dword ptr [EBX + 0xbf84]    ; 005276a6
    JZ 0x005273d8                       ; 005276ac
        ;   XREF to: 005273d8 (CONDITIONAL_JUMP)  ; LAB_005273d8
    CMP EAX,dword ptr [EBX + 0xbf88]    ; 005276b2
    JZ 0x005273d8                       ; 005276b8
        ;   XREF to: 005273d8 (CONDITIONAL_JUMP)  ; LAB_005273d8
    JMP 0x0052761a                      ; 005276be
        ;   XREF to: 0052761a (UNCONDITIONAL_JUMP)  ; LAB_0052761a
    FLD double ptr [ESP]                ; 005276c3
        ;   Label: LAB_005276c3
    FCOMP double ptr [0x006399b6]       ; 005276c6 | DOUBLE_006399b6
    FNSTSW AX                           ; 005276cc
    SAHF                                ; 005276ce
    JNC 0x00527413                      ; 005276cf
        ;   XREF to: 00527413 (CONDITIONAL_JUMP)  ; LAB_00527413
    MOV EAX,dword ptr [EBX + 0xbf68]    ; 005276d5
    JMP 0x00527411                      ; 005276db
        ;   XREF to: 00527411 (UNCONDITIONAL_JUMP)  ; LAB_00527411
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 005276e0
        ;   Label: LAB_005276e0
    JMP 0x005275b0                      ; 005276e7
        ;   XREF to: 005275b0 (UNCONDITIONAL_JUMP)  ; LAB_005275b0
    CMP EAX,dword ptr [EBX + 0xbf6c]    ; 005276ec
        ;   Label: LAB_005276ec
    JZ 0x005275ce                       ; 005276f2
        ;   XREF to: 005275ce (CONDITIONAL_JUMP)  ; LAB_005275ce
    JMP 0x005275f6                      ; 005276f8
        ;   XREF to: 005275f6 (UNCONDITIONAL_JUMP)  ; LAB_005275f6
    CMP EAX,dword ptr [EBX + 0xbf64]    ; 005276fd
        ;   Label: LAB_005276fd
    JZ 0x00527606                       ; 00527703
        ;   XREF to: 00527606 (CONDITIONAL_JUMP)  ; LAB_00527606
    JMP 0x0052761a                      ; 00527709
        ;   XREF to: 0052761a (UNCONDITIONAL_JUMP)  ; LAB_0052761a
    FLD float ptr [ESI + 0x4]           ; 0052770e
        ;   Label: LAB_0052770e
    FLD ST0                             ; 00527711
    FMUL double ptr [0x006399ce]        ; 00527713 | DOUBLE_006399ce
    FSTP ST1                            ; 00527719
    FSTP float ptr [ESI + 0x4]          ; 0052771b
    MOV ESP,EBP                         ; 0052771e
    POP EBP                             ; 00527720
    POP EDI                             ; 00527721
    POP ESI                             ; 00527722
    POP EBX                             ; 00527723
    RET                                 ; 00527724
    FLD float ptr [ESI + 0x4]           ; 00527725
        ;   Label: LAB_00527725
    FLD ST0                             ; 00527728
    FMUL double ptr [0x006399c6]        ; 0052772a | DOUBLE_006399c6
    FSTP ST1                            ; 00527730
    FSTP float ptr [ESI + 0x4]          ; 00527732
    MOV ESP,EBP                         ; 00527735
    POP EBP                             ; 00527737
    POP EDI                             ; 00527738
    POP ESI                             ; 00527739
    POP EBX                             ; 0052773a
    RET                                 ; 0052773b

