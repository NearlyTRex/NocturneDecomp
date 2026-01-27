; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_FUN_00424600()
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bride.cpp_FUN_00424830 at 004248a3
;
; Referenced Globals:
;   void* switchdataD_004245e8 = 00424640
;   TerminatedCString s_limb_wav_00616c69
;   double DOUBLE_00616c75 = 0.333000000000000
;   double DOUBLE_00616c7d = 7
;   double DOUBLE_00616c85 = 0.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.unk4
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
;   core_bodypart.cpp_FUN_0041a050
;   core_charactr.cpp_CCharacter_FUN_0042bd30
;   core_charactr.cpp_CCharacter_FUN_0042f300
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424600
        ;   Label: core_bride.cpp_FUN_00424600
    PUSH ESI                            ; 00424601
    PUSH EDI                            ; 00424602
    PUSH EBP                            ; 00424603
    MOV EBP,ESP                         ; 00424604
    SUB ESP,0x10                        ; 00424606
    AND ESP,0xfffffff8                  ; 00424609
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042460c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042460f
    FLD float ptr [EBX + 0x2c]          ; 00424612
    FLDZ                                ; 00424615
    FCOMPP                              ; 00424617
    FNSTSW AX                           ; 00424619
    SAHF                                ; 0042461b
    JNC 0x00424648                      ; 0042461c
        ;   XREF to: 00424648 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX],-0x1            ; 0042461e
    JNZ 0x00424648                      ; 00424621
        ;   XREF to: 00424648 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00424623
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 00424628
    MOV EDI,0x5                         ; 0042462a
    SAR EDX,0x1f                        ; 0042462f
    IDIV EDI                            ; 00424632
    CMP EDX,0x4                         ; 00424634
    JA 0x00424648                       ; 00424637
        ;   XREF to: 00424648 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4245e8]  ; 00424639 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0xbebc]    ; 00424640
        ;   Label: caseD_0
    MOV dword ptr [EBX],EAX             ; 00424646
        ;   Label: LAB_00424646
    MOV ECX,dword ptr [ESI + 0xbebc]    ; 00424648
        ;   Label: default
    MOV EAX,dword ptr [EBX]             ; 0042464e
    CMP EAX,ECX                         ; 00424650
    JNZ 0x004247bc                      ; 00424652
        ;   XREF to: 004247bc (CONDITIONAL_JUMP)  ; LAB_004247bc
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00424658
        ;   Label: LAB_00424658
    MOV EDX,dword ptr [ESI + 0xbedc]    ; 0042465b
    MOV dword ptr [ESP],EAX             ; 00424661
    CMP EDX,dword ptr [EBX]             ; 00424664
    JNZ 0x00424678                      ; 00424666
        ;   XREF to: 00424678 (CONDITIONAL_JUMP)  ; LAB_00424678
    FLD float ptr [ESP]                 ; 00424668
    FLD ST0                             ; 0042466b
    FMUL double ptr [0x00616c75]        ; 0042466d | DOUBLE_00616c75
    FSTP ST1                            ; 00424673
    FSTP float ptr [ESP]                ; 00424675
    MOV EAX,[0x0067b654]                ; 00424678 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00424678
    CMP dword ptr [EAX + 0x1e0],0x0     ; 0042467d | g_CGameInstance.unk4
    JZ 0x0042468d                       ; 00424684
        ;   XREF to: 0042468d (CONDITIONAL_JUMP)  ; LAB_0042468d
    MOV dword ptr [ESP],0x3f800000      ; 00424686
    MOV EAX,[0x0067b654]                ; 0042468d | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_0042468d
    MOV EDX,dword ptr [EAX + 0x14]      ; 00424692 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 00424695
    JNZ 0x0042469c                      ; 00424697
        ;   XREF to: 0042469c (CONDITIONAL_JUMP)  ; LAB_0042469c
    MOV dword ptr [ESP],EDX             ; 00424699
    PUSH dword ptr [ESP]                ; 0042469c
        ;   Label: LAB_0042469c
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0042469f
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004246a4
    TEST EAX,EAX                        ; 004246a7
    JZ 0x0042475f                       ; 004246a9
        ;   XREF to: 0042475f (CONDITIONAL_JUMP)  ; LAB_0042475f
    PUSH 0x0                            ; 004246af
    PUSH 0x0                            ; 004246b1
    PUSH 0x0                            ; 004246b3
    PUSH ESI                            ; 004246b5
    LEA EAX,[EBX + 0xc]                 ; 004246b6
    PUSH EAX                            ; 004246b9
    LEA EAX,[ESI + 0x30]                ; 004246ba
    PUSH EAX                            ; 004246bd
    LEA EAX,[ESI + 0x20]                ; 004246be
    PUSH EAX                            ; 004246c1
    CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10 ; 004246c2
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CreateBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 004246c7
    MOV EDI,EAX                         ; 004246ca
    PUSH 0x0                            ; 004246cc
    MOV dword ptr [ESP + 0x10],EAX      ; 004246ce
    MOV EAX,dword ptr [EBX]             ; 004246d2
    PUSH EAX                            ; 004246d4
    PUSH EDI                            ; 004246d5
    PUSH ESI                            ; 004246d6
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 004246d7
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004246dc
    MOV EDX,dword ptr [ESI + 0xbebc]    ; 004246de
    ADD ESP,0x10                        ; 004246e4
    CMP EAX,EDX                         ; 004246e7
    JNZ 0x004246fe                      ; 004246e9
        ;   XREF to: 004246fe (CONDITIONAL_JUMP)  ; LAB_004246fe
    PUSH 0x0                            ; 004246eb
    MOV ECX,dword ptr [ESI + 0xbec0]    ; 004246ed
    PUSH ECX                            ; 004246f3
    PUSH EDI                            ; 004246f4
    PUSH ESI                            ; 004246f5
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 004246f6
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004246fb
    MOV EDI,dword ptr [ESI + 0xbec4]    ; 004246fe
        ;   Label: LAB_004246fe
    CMP EDI,dword ptr [EBX]             ; 00424704
    JNZ 0x0042471f                      ; 00424706
        ;   XREF to: 0042471f (CONDITIONAL_JUMP)  ; LAB_0042471f
    PUSH 0x0                            ; 00424708
    MOV EAX,dword ptr [ESI + 0xbec8]    ; 0042470a
    PUSH EAX                            ; 00424710
    MOV EDX,dword ptr [ESP + 0x14]      ; 00424711
    PUSH EDX                            ; 00424715
    PUSH ESI                            ; 00424716
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 00424717
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0042471c
    PUSH 0x616c69                       ; 0042471f | = "limb?.wav"
        ;   Label: LAB_0042471f
    PUSH ESI                            ; 00424724
    CALL core_charactr.cpp_CCharacter_FUN_0042f300 ; 00424725
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 0042472a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042472d
    PUSH ECX                            ; 00424731
    CALL core_bodypart.cpp_FUN_0041a050 ; 00424732
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041a050()
    MOV EAX,dword ptr [ESI + 0xbedc]    ; 00424737
    MOV EDI,dword ptr [ESI + EAX*0x4 + 0x2298] ; 0042473d
    ADD ESP,0x4                         ; 00424744
    TEST EDI,EDI                        ; 00424747
    JZ 0x004247f1                       ; 00424749
        ;   XREF to: 004247f1 (CONDITIONAL_JUMP)  ; LAB_004247f1
    FLD float ptr [EBX + 0x8]           ; 0042474f
        ;   Label: LAB_0042474f
    FLD ST0                             ; 00424752
    FMUL double ptr [0x00616c7d]        ; 00424754 | DOUBLE_00616c7d
    FSTP ST1                            ; 0042475a
    FSTP float ptr [EBX + 0x8]          ; 0042475c
    MOV EDX,dword ptr [ESI + 0xbedc]    ; 0042475f
        ;   Label: LAB_0042475f
    MOV EAX,dword ptr [EBX]             ; 00424765
    CMP EAX,EDX                         ; 00424767
    JZ 0x004247fd                       ; 00424769
        ;   XREF to: 004247fd (CONDITIONAL_JUMP)  ; LAB_004247fd
    CMP EAX,dword ptr [ESI + 0xbed8]    ; 0042476f
    JZ 0x00424783                       ; 00424775
        ;   XREF to: 00424783 (CONDITIONAL_JUMP)  ; LAB_00424783
    CMP EAX,dword ptr [ESI + 0xbed4]    ; 00424777
    JNZ 0x00424814                      ; 0042477d
        ;   XREF to: 00424814 (CONDITIONAL_JUMP)  ; LAB_00424814
    MOV EAX,dword ptr [EBX + 0x4]       ; 00424783
        ;   Label: LAB_00424783
    MOV dword ptr [EBX + 0x4],EAX       ; 00424786
    MOV ESP,EBP                         ; 00424789
    POP EBP                             ; 0042478b
    POP EDI                             ; 0042478c
    POP ESI                             ; 0042478d
    POP EBX                             ; 0042478e
    RET                                 ; 0042478f
    MOV EAX,dword ptr [ESI + 0xbec0]    ; 00424790
        ;   Label: caseD_1
    JMP 0x00424646                      ; 00424796
        ;   XREF to: 00424646 (UNCONDITIONAL_JUMP)  ; LAB_00424646
    MOV EAX,dword ptr [ESI + 0xbec4]    ; 0042479b
        ;   Label: caseD_2
    JMP 0x00424646                      ; 004247a1
        ;   XREF to: 00424646 (UNCONDITIONAL_JUMP)  ; LAB_00424646
    MOV EAX,dword ptr [ESI + 0xbec8]    ; 004247a6
        ;   Label: caseD_3
    JMP 0x00424646                      ; 004247ac
        ;   XREF to: 00424646 (UNCONDITIONAL_JUMP)  ; LAB_00424646
    MOV EAX,dword ptr [ESI + 0xbedc]    ; 004247b1
        ;   Label: caseD_4
    JMP 0x00424646                      ; 004247b7
        ;   XREF to: 00424646 (UNCONDITIONAL_JUMP)  ; LAB_00424646
    CMP EAX,dword ptr [ESI + 0xbec0]    ; 004247bc
        ;   Label: LAB_004247bc
    JZ 0x00424658                       ; 004247c2
        ;   XREF to: 00424658 (CONDITIONAL_JUMP)  ; LAB_00424658
    CMP EAX,dword ptr [ESI + 0xbec4]    ; 004247c8
    JZ 0x00424658                       ; 004247ce
        ;   XREF to: 00424658 (CONDITIONAL_JUMP)  ; LAB_00424658
    CMP EAX,dword ptr [ESI + 0xbec8]    ; 004247d4
    JZ 0x00424658                       ; 004247da
        ;   XREF to: 00424658 (CONDITIONAL_JUMP)  ; LAB_00424658
    CMP EAX,dword ptr [ESI + 0xbedc]    ; 004247e0
    JZ 0x00424658                       ; 004247e6
        ;   XREF to: 00424658 (CONDITIONAL_JUMP)  ; LAB_00424658
    JMP 0x0042475f                      ; 004247ec
        ;   XREF to: 0042475f (UNCONDITIONAL_JUMP)  ; LAB_0042475f
    MOV dword ptr [EBX + 0x4],0x461c3c00 ; 004247f1
        ;   Label: LAB_004247f1
    JMP 0x0042474f                      ; 004247f8
        ;   XREF to: 0042474f (UNCONDITIONAL_JUMP)  ; LAB_0042474f
    FLD float ptr [EBX + 0x4]           ; 004247fd
        ;   Label: LAB_004247fd
    FLD float ptr [EBX + 0x4]           ; 00424814
        ;   Label: LAB_00424814
    FLD ST0                             ; 00424817
    FMUL double ptr [0x00616c85]        ; 00424819 | DOUBLE_00616c85
    FSTP ST1                            ; 0042481f
    FSTP float ptr [EBX + 0x4]          ; 00424821
    MOV ESP,EBP                         ; 00424824
    POP EBP                             ; 00424826
    POP EDI                             ; 00424827
    POP ESI                             ; 00424828
    POP EBX                             ; 00424829
    RET                                 ; 0042482a

