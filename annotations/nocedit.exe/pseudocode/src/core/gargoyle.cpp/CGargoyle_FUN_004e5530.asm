; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e5530(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gargoyle.cpp_CGargoyle_processDamage_FUN_004e57d0 at 004e583d
;
; Referenced Globals:
;   void* switchdataD_004e5518 = 004e556d
;   double DOUBLE_0062da07 = 7
;   double DOUBLE_0062da0f = 0.5
;   double DOUBLE_0062da17 = 2.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CBodyPart_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5530
        ;   Label: core_gargoyle.cpp_CGargoyle_FUN_004e5530
    PUSH ESI                            ; 004e5531
    PUSH EDI                            ; 004e5532
    PUSH EBP                            ; 004e5533
    SUB ESP,0xc                         ; 004e5534
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e5537
    MOV ESI,dword ptr [ESP + 0x24]      ; 004e553b
    FLD float ptr [ESI + 0x2c]          ; 004e553f
    FLDZ                                ; 004e5542
    FCOMPP                              ; 004e5544
    FNSTSW AX                           ; 004e5546
    SAHF                                ; 004e5548
    JNC 0x004e5575                      ; 004e5549
        ;   XREF to: 004e5575 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004e554b
    JNZ 0x004e5575                      ; 004e554e
        ;   XREF to: 004e5575 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004e5550
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 004e5555
    MOV EDI,0x6                         ; 004e5557
    SAR EDX,0x1f                        ; 004e555c
    IDIV EDI                            ; 004e555f
    CMP EDX,0x5                         ; 004e5561
    JA 0x004e5575                       ; 004e5564
        ;   XREF to: 004e5575 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4e5518]  ; 004e5566 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 004e556d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004e5573
        ;   Label: LAB_004e5573
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 004e5575
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004e557b
    CMP EAX,ECX                         ; 004e557d
    JNZ 0x004e574c                      ; 004e557f
        ;   XREF to: 004e574c (CONDITIONAL_JUMP)  ; LAB_004e574c
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004e5585
        ;   Label: LAB_004e5585
    MOV EBP,dword ptr [EBX + 0xbee4]    ; 004e5588
    MOV dword ptr [ESP + 0x8],EAX       ; 004e558e
    CMP EBP,dword ptr [ESI]             ; 004e5592
    JNZ 0x004e559e                      ; 004e5594
        ;   XREF to: 004e559e (CONDITIONAL_JUMP)  ; LAB_004e559e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004e5596
    MOV EDX,dword ptr [EBX + 0xbee0]    ; 004e559e
        ;   Label: LAB_004e559e
    CMP EDX,dword ptr [ESI]             ; 004e55a4
    JNZ 0x004e55b0                      ; 004e55a6
        ;   XREF to: 004e55b0 (CONDITIONAL_JUMP)  ; LAB_004e55b0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004e55a8
    MOV EAX,[0x0067b654]                ; 004e55b0 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e55b0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004e55b5 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004e55c6                       ; 004e55bc
        ;   XREF to: 004e55c6 (CONDITIONAL_JUMP)  ; LAB_004e55c6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004e55be
    PUSH dword ptr [ESP + 0x8]          ; 004e55c6
        ;   Label: LAB_004e55c6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e55ca
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e55cf
    TEST EAX,EAX                        ; 004e55d2
    JZ 0x004e56e3                       ; 004e55d4
        ;   XREF to: 004e56e3 (CONDITIONAL_JUMP)  ; LAB_004e56e3
    MOV EAX,dword ptr [EBX + 0x2610]    ; 004e55da
    PUSH EAX                            ; 004e55e0
    PUSH 0x0                            ; 004e55e1
    PUSH 0x0                            ; 004e55e3
    PUSH EBX                            ; 004e55e5
    LEA EAX,[ESI + 0xc]                 ; 004e55e6
    PUSH EAX                            ; 004e55e9
    LEA EAX,[EBX + 0x30]                ; 004e55ea
    PUSH EAX                            ; 004e55ed
    LEA EAX,[EBX + 0x20]                ; 004e55ee
    PUSH EAX                            ; 004e55f1
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 004e55f2
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 004e55f7
    PUSH 0x1                            ; 004e55fa
    MOV EDX,dword ptr [ESI]             ; 004e55fc
    PUSH EDX                            ; 004e55fe
    PUSH EAX                            ; 004e55ff
    PUSH EBX                            ; 004e5600
    MOV EDI,EAX                         ; 004e5601
    MOV EBP,EAX                         ; 004e5603
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 004e5605
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004e560a
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 004e560c
    ADD ESP,0x10                        ; 004e5612
    CMP EAX,ECX                         ; 004e5615
    JNZ 0x004e562c                      ; 004e5617
        ;   XREF to: 004e562c (CONDITIONAL_JUMP)  ; LAB_004e562c
    PUSH 0x1                            ; 004e5619
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 004e561b
    PUSH EAX                            ; 004e5621
    PUSH EDI                            ; 004e5622
    PUSH EBX                            ; 004e5623
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 004e5624
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004e5629
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 004e562c
        ;   Label: LAB_004e562c
    CMP EDX,dword ptr [ESI]             ; 004e5632
    JNZ 0x004e5649                      ; 004e5634
        ;   XREF to: 004e5649 (CONDITIONAL_JUMP)  ; LAB_004e5649
    PUSH 0x1                            ; 004e5636
    MOV ECX,dword ptr [EBX + 0xbec8]    ; 004e5638
    PUSH ECX                            ; 004e563e
    PUSH EBP                            ; 004e563f
    PUSH EBX                            ; 004e5640
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 004e5641
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004e5646
    MOV EDI,dword ptr [EBX + 0xbee0]    ; 004e5649
        ;   Label: LAB_004e5649
    CMP EDI,dword ptr [ESI]             ; 004e564f
    JNZ 0x004e56b5                      ; 004e5651
        ;   XREF to: 004e56b5 (CONDITIONAL_JUMP)  ; LAB_004e56b5
    PUSH 0x1                            ; 004e5653
    LEA EDI,[ESI + 0xc]                 ; 004e5655
    PUSH EDI                            ; 004e5658
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 004e5659
    PUSH EAX                            ; 004e565f
    PUSH EBX                            ; 004e5660
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004e5661
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004e5666
    PUSH 0x1                            ; 004e5669
    PUSH EDI                            ; 004e566b
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 004e566c
    PUSH EDX                            ; 004e5672
    PUSH EBX                            ; 004e5673
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004e5674
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004e5679
    PUSH 0x1                            ; 004e567c
    PUSH EDI                            ; 004e567e
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 004e567f
    PUSH ECX                            ; 004e5685
    PUSH EBX                            ; 004e5686
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004e5687
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004e568c
    PUSH 0x1                            ; 004e568f
    PUSH EDI                            ; 004e5691
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 004e5692
    PUSH EAX                            ; 004e5698
    PUSH EBX                            ; 004e5699
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004e569a
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004e569f
    PUSH 0x1                            ; 004e56a2
    PUSH EDI                            ; 004e56a4
    MOV EDX,dword ptr [EBX + 0xbee4]    ; 004e56a5
    PUSH EDX                            ; 004e56ab
    PUSH EBX                            ; 004e56ac
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004e56ad
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004e56b2
    PUSH EBP                            ; 004e56b5
        ;   Label: LAB_004e56b5
    CALL core_bodypart.cpp_CBodyPart_FUN_0041a050 ; 004e56b6
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041a050(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 004e56bb
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e56c1
    ADD ESP,0x4                         ; 004e56c8
    TEST ECX,ECX                        ; 004e56cb
    JZ 0x004e578d                       ; 004e56cd
        ;   XREF to: 004e578d (CONDITIONAL_JUMP)  ; LAB_004e578d
    FLD float ptr [ESI + 0x8]           ; 004e56d3
        ;   Label: LAB_004e56d3
    FLD ST0                             ; 004e56d6
    FMUL double ptr [0x0062da07]        ; 004e56d8 | DOUBLE_0062da07
    FSTP ST1                            ; 004e56de
    FSTP float ptr [ESI + 0x8]          ; 004e56e0
    MOV EDI,dword ptr [EBX + 0xbee4]    ; 004e56e3
        ;   Label: LAB_004e56e3
    MOV EAX,dword ptr [ESI]             ; 004e56e9
    CMP EAX,EDI                         ; 004e56eb
    JZ 0x004e5799                       ; 004e56ed
        ;   XREF to: 004e5799 (CONDITIONAL_JUMP)  ; LAB_004e5799
    CMP EAX,dword ptr [EBX + 0xbedc]    ; 004e56f3
    JZ 0x004e5707                       ; 004e56f9
        ;   XREF to: 004e5707 (CONDITIONAL_JUMP)  ; LAB_004e5707
    CMP EAX,dword ptr [EBX + 0xbee0]    ; 004e56fb
    JNZ 0x004e57b1                      ; 004e5701
        ;   XREF to: 004e57b1 (CONDITIONAL_JUMP)  ; LAB_004e57b1
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e5707
        ;   Label: LAB_004e5707
    MOV dword ptr [ESI + 0x4],EAX       ; 004e570a
    ADD ESP,0xc                         ; 004e570d
    POP EBP                             ; 004e5710
    POP EDI                             ; 004e5711
    POP ESI                             ; 004e5712
    POP EBX                             ; 004e5713
    RET                                 ; 004e5714
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 004e5715
        ;   Label: caseD_1
    JMP 0x004e5573                      ; 004e571b
        ;   XREF to: 004e5573 (UNCONDITIONAL_JUMP)  ; LAB_004e5573
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 004e5720
        ;   Label: caseD_2
    JMP 0x004e5573                      ; 004e5726
        ;   XREF to: 004e5573 (UNCONDITIONAL_JUMP)  ; LAB_004e5573
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 004e572b
        ;   Label: caseD_3
    JMP 0x004e5573                      ; 004e5731
        ;   XREF to: 004e5573 (UNCONDITIONAL_JUMP)  ; LAB_004e5573
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 004e5736
        ;   Label: caseD_4
    JMP 0x004e5573                      ; 004e573c
        ;   XREF to: 004e5573 (UNCONDITIONAL_JUMP)  ; LAB_004e5573
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 004e5741
        ;   Label: caseD_5
    JMP 0x004e5573                      ; 004e5747
        ;   XREF to: 004e5573 (UNCONDITIONAL_JUMP)  ; LAB_004e5573
    CMP EAX,dword ptr [EBX + 0xbec0]    ; 004e574c
        ;   Label: LAB_004e574c
    JZ 0x004e5585                       ; 004e5752
        ;   XREF to: 004e5585 (CONDITIONAL_JUMP)  ; LAB_004e5585
    CMP EAX,dword ptr [EBX + 0xbec4]    ; 004e5758
    JZ 0x004e5585                       ; 004e575e
        ;   XREF to: 004e5585 (CONDITIONAL_JUMP)  ; LAB_004e5585
    CMP EAX,dword ptr [EBX + 0xbec8]    ; 004e5764
    JZ 0x004e5585                       ; 004e576a
        ;   XREF to: 004e5585 (CONDITIONAL_JUMP)  ; LAB_004e5585
    CMP EAX,dword ptr [EBX + 0xbee0]    ; 004e5770
    JZ 0x004e5585                       ; 004e5776
        ;   XREF to: 004e5585 (CONDITIONAL_JUMP)  ; LAB_004e5585
    CMP EAX,dword ptr [EBX + 0xbee4]    ; 004e577c
    JZ 0x004e5585                       ; 004e5782
        ;   XREF to: 004e5585 (CONDITIONAL_JUMP)  ; LAB_004e5585
    JMP 0x004e56e3                      ; 004e5788
        ;   XREF to: 004e56e3 (UNCONDITIONAL_JUMP)  ; LAB_004e56e3
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004e578d
        ;   Label: LAB_004e578d
    JMP 0x004e56d3                      ; 004e5794
        ;   XREF to: 004e56d3 (UNCONDITIONAL_JUMP)  ; LAB_004e56d3
    FLD float ptr [ESI + 0x4]           ; 004e5799
        ;   Label: LAB_004e5799
    FLD ST0                             ; 004e579c
    FMUL double ptr [0x0062da17]        ; 004e579e | DOUBLE_0062da17
    FSTP ST1                            ; 004e57a4
    FSTP float ptr [ESI + 0x4]          ; 004e57a6
    ADD ESP,0xc                         ; 004e57a9
    POP EBP                             ; 004e57ac
    POP EDI                             ; 004e57ad
    POP ESI                             ; 004e57ae
    POP EBX                             ; 004e57af
    RET                                 ; 004e57b0
    FLD float ptr [ESI + 0x4]           ; 004e57b1
        ;   Label: LAB_004e57b1
    FLD ST0                             ; 004e57b4
    FMUL double ptr [0x0062da0f]        ; 004e57b6 | DOUBLE_0062da0f
    FSTP ST1                            ; 004e57bc
    FSTP float ptr [ESI + 0x4]          ; 004e57be
    ADD ESP,0xc                         ; 004e57c1
    POP EBP                             ; 004e57c4
    POP EDI                             ; 004e57c5
    POP ESI                             ; 004e57c6
    POP EBX                             ; 004e57c7
    RET                                 ; 004e57c8

