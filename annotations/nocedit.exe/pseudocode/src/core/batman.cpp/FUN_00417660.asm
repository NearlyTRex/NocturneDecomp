; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batman_cpp_FUN_00417660(void)
;
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_batman.cpp_FUN_004179a0 at 00417a26
;
; Referenced Globals:
;   void* switchdataD_0041763c = 0041769d
;   TerminatedCString s_limb_wav_00615939
;   TerminatedCString s_Shot_thru_the_heart_00615943
;   double DOUBLE_0061595d = 7
;   double DOUBLE_00615965 = 0.5
;   double DOUBLE_0061596d = 2.5
;   double DOUBLE_00615975 = 20
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGame* g_CGamePtr = 02d81a9c
;   CConsole g_ConsolePtr
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.unk4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
;   core_bodypart.cpp_FUN_0041a050
;   core_charactr.cpp_CCharacter_FUN_0042b9e0
;   core_charactr.cpp_CCharacter_FUN_0042bcc0
;   core_charactr.cpp_CCharacter_FUN_0042bd30
;   core_charactr.cpp_CCharacter_FUN_0042f300
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417660
        ;   Label: core_batman.cpp_FUN_00417660
    PUSH ESI                            ; 00417661
    PUSH EDI                            ; 00417662
    PUSH EBP                            ; 00417663
    SUB ESP,0x24                        ; 00417664
    MOV EBX,dword ptr [ESP + 0x38]      ; 00417667
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0041766b
    FLD float ptr [ESI + 0x2c]          ; 0041766f
    FLDZ                                ; 00417672
    FCOMPP                              ; 00417674
    FNSTSW AX                           ; 00417676
    SAHF                                ; 00417678
    JNC 0x004176a5                      ; 00417679
        ;   XREF to: 004176a5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0041767b
    JNZ 0x004176a5                      ; 0041767e
        ;   XREF to: 004176a5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00417680
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 00417685
    MOV EDI,0x6                         ; 00417687
    SAR EDX,0x1f                        ; 0041768c
    IDIV EDI                            ; 0041768f
    CMP EDX,0x5                         ; 00417691
    JA 0x004176a5                       ; 00417694
        ;   XREF to: 004176a5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x41763c]  ; 00417696 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbf28]    ; 0041769d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004176a3
        ;   Label: LAB_004176a3
    MOV ECX,dword ptr [EBX + 0xbf28]    ; 004176a5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004176ab
    CMP EAX,ECX                         ; 004176ad
    JNZ 0x004178a4                      ; 004176af
        ;   XREF to: 004178a4 (CONDITIONAL_JUMP)  ; LAB_004178a4
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004176b5
        ;   Label: LAB_004176b5
    MOV EBP,dword ptr [EBX + 0xbf20]    ; 004176b8
    MOV dword ptr [ESP + 0x20],EAX      ; 004176be
    CMP EBP,dword ptr [ESI]             ; 004176c2
    JNZ 0x004176ce                      ; 004176c4
        ;   XREF to: 004176ce (CONDITIONAL_JUMP)  ; LAB_004176ce
    MOV dword ptr [ESP + 0x20],0x3d4ccccd ; 004176c6
    MOV EDX,dword ptr [EBX + 0xbf24]    ; 004176ce
        ;   Label: LAB_004176ce
    CMP EDX,dword ptr [ESI]             ; 004176d4
    JNZ 0x004176e0                      ; 004176d6
        ;   XREF to: 004176e0 (CONDITIONAL_JUMP)  ; LAB_004176e0
    MOV dword ptr [ESP + 0x20],0x3ca3d70a ; 004176d8
    MOV EAX,[0x0067b654]                ; 004176e0 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004176e0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004176e5 | g_CGameInstance.unk4
    JZ 0x004176f6                       ; 004176ec
        ;   XREF to: 004176f6 (CONDITIONAL_JUMP)  ; LAB_004176f6
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 004176ee
    MOV EAX,[0x0067b654]                ; 004176f6 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004176f6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004176fb | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004176fe
    JNZ 0x00417706                      ; 00417700
        ;   XREF to: 00417706 (CONDITIONAL_JUMP)  ; LAB_00417706
    MOV dword ptr [ESP + 0x20],EDX      ; 00417702
    PUSH dword ptr [ESP + 0x20]         ; 00417706
        ;   Label: LAB_00417706
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0041770a
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0041770f
    TEST EAX,EAX                        ; 00417712
    JZ 0x00417831                       ; 00417714
        ;   XREF to: 00417831 (CONDITIONAL_JUMP)  ; LAB_00417831
    MOV EDI,dword ptr [EBX + 0x2610]    ; 0041771a
    PUSH EDI                            ; 00417720
    PUSH 0x0                            ; 00417721
    PUSH 0x0                            ; 00417723
    PUSH EBX                            ; 00417725
    LEA EAX,[ESI + 0xc]                 ; 00417726
    PUSH EAX                            ; 00417729
    LEA EAX,[EBX + 0x30]                ; 0041772a
    PUSH EAX                            ; 0041772d
    LEA EAX,[EBX + 0x20]                ; 0041772e
    PUSH EAX                            ; 00417731
    CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10 ; 00417732
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CreateBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 00417737
    MOV EDI,EAX                         ; 0041773a
    PUSH 0x0                            ; 0041773c
    MOV EBP,EAX                         ; 0041773e
    MOV EAX,dword ptr [ESI]             ; 00417740
    PUSH EAX                            ; 00417742
    PUSH EDI                            ; 00417743
    PUSH EBX                            ; 00417744
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 00417745
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 0041774a
    MOV EDX,dword ptr [EBX + 0xbf28]    ; 0041774c
    ADD ESP,0x10                        ; 00417752
    CMP EAX,EDX                         ; 00417755
    JNZ 0x0041776c                      ; 00417757
        ;   XREF to: 0041776c (CONDITIONAL_JUMP)  ; LAB_0041776c
    PUSH 0x0                            ; 00417759
    MOV ECX,dword ptr [EBX + 0xbf2c]    ; 0041775b
    PUSH ECX                            ; 00417761
    PUSH EDI                            ; 00417762
    PUSH EBX                            ; 00417763
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 00417764
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00417769
    MOV EDI,dword ptr [EBX + 0xbf30]    ; 0041776c
        ;   Label: LAB_0041776c
    CMP EDI,dword ptr [ESI]             ; 00417772
    JNZ 0x00417789                      ; 00417774
        ;   XREF to: 00417789 (CONDITIONAL_JUMP)  ; LAB_00417789
    PUSH 0x0                            ; 00417776
    MOV EAX,dword ptr [EBX + 0xbf34]    ; 00417778
    PUSH EAX                            ; 0041777e
    PUSH EBP                            ; 0041777f
    PUSH EBX                            ; 00417780
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 00417781
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00417786
    MOV EDX,dword ptr [EBX + 0xbf24]    ; 00417789
        ;   Label: LAB_00417789
    CMP EDX,dword ptr [ESI]             ; 0041778f
    JNZ 0x004177f5                      ; 00417791
        ;   XREF to: 004177f5 (CONDITIONAL_JUMP)  ; LAB_004177f5
    PUSH 0x0                            ; 00417793
    LEA EDI,[ESI + 0xc]                 ; 00417795
    PUSH EDI                            ; 00417798
    MOV ECX,dword ptr [EBX + 0xbf30]    ; 00417799
    PUSH ECX                            ; 0041779f
    PUSH EBX                            ; 004177a0
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004177a1
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004177a6
    PUSH 0x0                            ; 004177a9
    PUSH EDI                            ; 004177ab
    MOV EAX,dword ptr [EBX + 0xbf34]    ; 004177ac
    PUSH EAX                            ; 004177b2
    PUSH EBX                            ; 004177b3
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004177b4
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004177b9
    PUSH 0x0                            ; 004177bc
    PUSH EDI                            ; 004177be
    MOV EDX,dword ptr [EBX + 0xbf28]    ; 004177bf
    PUSH EDX                            ; 004177c5
    PUSH EBX                            ; 004177c6
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004177c7
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004177cc
    PUSH 0x0                            ; 004177cf
    PUSH EDI                            ; 004177d1
    MOV ECX,dword ptr [EBX + 0xbf2c]    ; 004177d2
    PUSH ECX                            ; 004177d8
    PUSH EBX                            ; 004177d9
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004177da
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004177df
    PUSH 0x0                            ; 004177e2
    PUSH EDI                            ; 004177e4
    MOV EDI,dword ptr [EBX + 0xbf20]    ; 004177e5
    PUSH EDI                            ; 004177eb
    PUSH EBX                            ; 004177ec
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 004177ed
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 004177f2
    PUSH 0x615939                       ; 004177f5 | = "limb?.wav"
        ;   Label: LAB_004177f5
    PUSH EBX                            ; 004177fa
    CALL core_charactr.cpp_CCharacter_FUN_0042f300 ; 004177fb
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00417800
    PUSH EBP                            ; 00417803
    CALL core_bodypart.cpp_FUN_0041a050 ; 00417804
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_0041a050()
    MOV EAX,dword ptr [EBX + 0xbf20]    ; 00417809
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0041780f
    ADD ESP,0x4                         ; 00417816
    TEST EBP,EBP                        ; 00417819
    JZ 0x004178e5                       ; 0041781b
        ;   XREF to: 004178e5 (CONDITIONAL_JUMP)  ; LAB_004178e5
    FLD float ptr [ESI + 0x8]           ; 00417821
        ;   Label: LAB_00417821
    FLD ST0                             ; 00417824
    FMUL double ptr [0x0061595d]        ; 00417826 | DOUBLE_0061595d
    FSTP ST1                            ; 0041782c
    FSTP float ptr [ESI + 0x8]          ; 0041782e
    MOV EDX,dword ptr [EBX + 0xbf20]    ; 00417831
        ;   Label: LAB_00417831
    MOV EAX,dword ptr [ESI]             ; 00417837
    CMP EAX,EDX                         ; 00417839
    JNZ 0x004178f1                      ; 0041783b
        ;   XREF to: 004178f1 (CONDITIONAL_JUMP)  ; LAB_004178f1
    FLD float ptr [ESI + 0x4]           ; 00417841
    FLD ST0                             ; 00417844
    FMUL double ptr [0x0061596d]        ; 00417846 | DOUBLE_0061596d
    FSTP ST1                            ; 0041784c
        ;   Label: LAB_0041784c
    FSTP float ptr [ESI + 0x4]          ; 0041784e
    MOV EBP,dword ptr [EBX + 0xbf24]    ; 00417851
        ;   Label: LAB_00417851
    CMP EBP,dword ptr [ESI]             ; 00417857
    JNZ 0x00417865                      ; 00417859
        ;   XREF to: 00417865 (CONDITIONAL_JUMP)  ; LAB_00417865
    CMP dword ptr [ESI + 0x30],0x68     ; 0041785b
    JZ 0x0041791c                       ; 0041785f
        ;   XREF to: 0041791c (CONDITIONAL_JUMP)  ; LAB_0041791c
    ADD ESP,0x24                        ; 00417865
        ;   Label: LAB_00417865
    POP EBP                             ; 00417868
    POP EDI                             ; 00417869
    POP ESI                             ; 0041786a
    POP EBX                             ; 0041786b
    RET                                 ; 0041786c
    MOV EAX,dword ptr [EBX + 0xbf2c]    ; 0041786d
        ;   Label: caseD_1
    JMP 0x004176a3                      ; 00417873
        ;   XREF to: 004176a3 (UNCONDITIONAL_JUMP)  ; LAB_004176a3
    MOV EAX,dword ptr [EBX + 0xbf30]    ; 00417878
        ;   Label: caseD_2
    JMP 0x004176a3                      ; 0041787e
        ;   XREF to: 004176a3 (UNCONDITIONAL_JUMP)  ; LAB_004176a3
    MOV EAX,dword ptr [EBX + 0xbf34]    ; 00417883
        ;   Label: caseD_3
    JMP 0x004176a3                      ; 00417889
        ;   XREF to: 004176a3 (UNCONDITIONAL_JUMP)  ; LAB_004176a3
    MOV EAX,dword ptr [EBX + 0xbf20]    ; 0041788e
        ;   Label: caseD_4
    JMP 0x004176a3                      ; 00417894
        ;   XREF to: 004176a3 (UNCONDITIONAL_JUMP)  ; LAB_004176a3
    MOV EAX,dword ptr [EBX + 0xbf24]    ; 00417899
        ;   Label: caseD_5
    JMP 0x004176a3                      ; 0041789f
        ;   XREF to: 004176a3 (UNCONDITIONAL_JUMP)  ; LAB_004176a3
    CMP EAX,dword ptr [EBX + 0xbf2c]    ; 004178a4
        ;   Label: LAB_004178a4
    JZ 0x004176b5                       ; 004178aa
        ;   XREF to: 004176b5 (CONDITIONAL_JUMP)  ; LAB_004176b5
    CMP EAX,dword ptr [EBX + 0xbf30]    ; 004178b0
    JZ 0x004176b5                       ; 004178b6
        ;   XREF to: 004176b5 (CONDITIONAL_JUMP)  ; LAB_004176b5
    CMP EAX,dword ptr [EBX + 0xbf34]    ; 004178bc
    JZ 0x004176b5                       ; 004178c2
        ;   XREF to: 004176b5 (CONDITIONAL_JUMP)  ; LAB_004176b5
    CMP EAX,dword ptr [EBX + 0xbf24]    ; 004178c8
    JZ 0x004176b5                       ; 004178ce
        ;   XREF to: 004176b5 (CONDITIONAL_JUMP)  ; LAB_004176b5
    CMP EAX,dword ptr [EBX + 0xbf20]    ; 004178d4
    JZ 0x004176b5                       ; 004178da
        ;   XREF to: 004176b5 (CONDITIONAL_JUMP)  ; LAB_004176b5
    JMP 0x00417831                      ; 004178e0
        ;   XREF to: 00417831 (UNCONDITIONAL_JUMP)  ; LAB_00417831
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004178e5
        ;   Label: LAB_004178e5
    JMP 0x00417821                      ; 004178ec
        ;   XREF to: 00417821 (UNCONDITIONAL_JUMP)  ; LAB_00417821
    CMP EAX,dword ptr [EBX + 0xbf38]    ; 004178f1
        ;   Label: LAB_004178f1
    JNZ 0x00417904                      ; 004178f7
        ;   XREF to: 00417904 (CONDITIONAL_JUMP)  ; LAB_00417904
    MOV EAX,dword ptr [ESI + 0x4]       ; 004178f9
        ;   Label: LAB_004178f9
    MOV dword ptr [ESI + 0x4],EAX       ; 004178fc
    JMP 0x00417851                      ; 004178ff
        ;   XREF to: 00417851 (UNCONDITIONAL_JUMP)  ; LAB_00417851
    CMP EAX,dword ptr [EBX + 0xbf24]    ; 00417904
        ;   Label: LAB_00417904
    JZ 0x004178f9                       ; 0041790a
        ;   XREF to: 004178f9 (CONDITIONAL_JUMP)  ; LAB_004178f9
    FLD float ptr [ESI + 0x4]           ; 0041790c
    FLD ST0                             ; 0041790f
    FMUL double ptr [0x00615965]        ; 00417911 | DOUBLE_00615965
    JMP 0x0041784c                      ; 00417917
        ;   XREF to: 0041784c (UNCONDITIONAL_JUMP)  ; LAB_0041784c
    FLD float ptr [ESI + 0x4]           ; 0041791c
        ;   Label: LAB_0041791c
    PUSH 0x615943                       ; 0041791f | = "Shot thru the heart\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 00417924 | g_ConsolePtr | g_CConsolePtr
    FLD ST0                             ; 0041792a
    FMUL double ptr [0x00615975]        ; 0041792c | DOUBLE_00615975
    PUSH EDX                            ; 00417932 | g_ConsolePtr
    FSTP ST1                            ; 00417933
    FSTP float ptr [ESI + 0x4]          ; 00417935
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00417938
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0041793d
    PUSH 0x3f000000                     ; 00417940
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00417945
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0041794a
    TEST EAX,EAX                        ; 0041794d
    JZ 0x00417865                       ; 0041794f
        ;   XREF to: 00417865 (CONDITIONAL_JUMP)  ; LAB_00417865
    LEA EAX,[ESP + 0xc]                 ; 00417955
    PUSH EAX                            ; 00417959
    LEA EAX,[ESP + 0x4]                 ; 0041795a
    XOR ECX,ECX                         ; 0041795e
    PUSH EAX                            ; 00417960
    MOV ESI,0x41a00000                  ; 00417961
    MOV dword ptr [ESP + 0x14],ECX      ; 00417966
    PUSH EBX                            ; 0041796a
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041796b
    MOV dword ptr [ESP + 0x20],ESI      ; 0041796f
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00417973
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00417978
    PUSH 0x1                            ; 0041797b
    LEA EAX,[ESP + 0x4]                 ; 0041797d
    PUSH 0xbf800000                     ; 00417981
    PUSH EAX                            ; 00417986
    PUSH EBX                            ; 00417987
    CALL core_charactr.cpp_CCharacter_FUN_0042b9e0 ; 00417988
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b9e0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0041798d
    ADD ESP,0x24                        ; 00417990
    POP EBP                             ; 00417993
    POP EDI                             ; 00417994
    POP ESI                             ; 00417995
    POP EBX                             ; 00417996
    RET                                 ; 00417997

