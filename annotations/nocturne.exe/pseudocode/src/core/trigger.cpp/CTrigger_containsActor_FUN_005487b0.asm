; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[1]:
;   FUN_00547b30 at 00547ba1
;
; Referenced Globals:
;   TerminatedCString s_core_trigger_cpp_00596b23
;   string s_CTrigger::containsActor_-_invali_00596b37
;   string s_..\\core\\trigger.cpp_00596b71
;   string s_Hell_froze..._00596b85
;   float FLOAT_00596b93 = 0.5
;   double DOUBLE_00596b97 = 0.25
;   undefined4 DAT_00765a98
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005487b0
        ;   Label: core_trigger.cpp_CTrigger_containsActor_FUN_005487b0
    PUSH ESI                            ; 005487b1
    PUSH EBP                            ; 005487b2
    SUB ESP,0x88                        ; 005487b3
    MOV EBX,dword ptr [ESP + 0x98]      ; 005487b9
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005487c0
    TEST ESI,ESI                        ; 005487c7
    JNZ 0x005487d7                      ; 005487c9
        ;   XREF to: 005487d7 (CONDITIONAL_JUMP)  ; LAB_005487d7
    XOR EAX,EAX                         ; 005487cb
        ;   Label: LAB_005487cb
    ADD ESP,0x88                        ; 005487cd
    POP EBP                             ; 005487d3
    POP ESI                             ; 005487d4
    POP EBX                             ; 005487d5
    RET                                 ; 005487d6
    LEA EAX,[ESP + 0x18]                ; 005487d7
        ;   Label: LAB_005487d7
    PUSH EAX                            ; 005487db
    MOV EDX,dword ptr [ESI + 0x14c]     ; 005487dc
    PUSH ESI                            ; 005487e2
    CALL dword ptr [EDX + 0x14]         ; 005487e3
    LEA EDX,[EAX + 0xc]                 ; 005487e6
    FLD float ptr [EAX]                 ; 005487e9
    FADD float ptr [EDX]                ; 005487eb
    ADD ESP,0x8                         ; 005487ed
    FST float ptr [ESP + 0x60]          ; 005487f0
    FLD float ptr [EAX + 0x4]           ; 005487f4
    FADD float ptr [EDX + 0x4]          ; 005487f7
    FXCH                                ; 005487fa
    FLD float ptr [0x00596b93]          ; 005487fc | FLOAT_00596b93
    FXCH                                ; 00548802
    FMUL ST1                            ; 00548804
    FXCH ST2                            ; 00548806
    FST float ptr [ESP + 0x64]          ; 00548808
    FMUL ST1                            ; 0054880c
    FLD float ptr [EAX + 0x8]           ; 0054880e
    FADD float ptr [EDX + 0x8]          ; 00548811
    LEA EAX,[ESP + 0x48]                ; 00548814
    FST float ptr [ESP + 0x68]          ; 00548818
    FMULP ST2                           ; 0054881c
    PUSH EAX                            ; 0054881e
    LEA EAX,[ESP + 0x58]                ; 0054881f
    FXCH ST2                            ; 00548823
    FSTP float ptr [ESP + 0x4c]         ; 00548825
    PUSH EAX                            ; 00548829
    FXCH                                ; 0054882a
    FSTP float ptr [ESP + 0x54]         ; 0054882c
    PUSH ESI                            ; 00548830
    FSTP float ptr [ESP + 0x5c]         ; 00548831
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00548835
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,dword ptr [EBX + 0x210]     ; 0054883a
    ADD ESP,0xc                         ; 00548840
    TEST EDX,EDX                        ; 00548843
    JNZ 0x0054893a                      ; 00548845
        ;   XREF to: 0054893a (CONDITIONAL_JUMP)  ; LAB_0054893a
    LEA EAX,[EBX + 0x20]                ; 0054884b
        ;   Label: LAB_0054884b
    FLD float ptr [ESP + 0x54]          ; 0054884e
    FSUB float ptr [EAX]                ; 00548852
    FMUL ST0                            ; 00548854
    FLD float ptr [ESP + 0x58]          ; 00548856
    FSUB float ptr [EAX + 0x4]          ; 0054885a
    FMUL ST0                            ; 0054885d
    FLD float ptr [ESP + 0x5c]          ; 0054885f
    FXCH                                ; 00548863
    FADDP ST2,ST0                       ; 00548865
    FSUB float ptr [EAX + 0x8]          ; 00548867
    FMUL ST0                            ; 0054886a
    FLD float ptr [EBX + 0x150]         ; 0054886c
    FXCH                                ; 00548872
    FADDP ST2,ST0                       ; 00548874
    FMUL float ptr [EBX + 0x150]        ; 00548876
    FXCH                                ; 0054887c
    FCOMPP                              ; 0054887e
    FNSTSW AX                           ; 00548880
    SAHF                                ; 00548882
    JA 0x005487cb                       ; 00548883
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    LEA EAX,[ESP + 0x54]                ; 00548889
    PUSH EAX                            ; 0054888d
    LEA EAX,[ESP + 0x70]                ; 0054888e
    PUSH EAX                            ; 00548892
    PUSH EBX                            ; 00548893
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00548894
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDX,EAX                         ; 00548899
    LEA EAX,[ESP + 0x60]                ; 0054889b
    ADD ESP,0xc                         ; 0054889f
    CMP EAX,EDX                         ; 005488a2
    JZ 0x005488ba                       ; 005488a4
        ;   XREF to: 005488ba (CONDITIONAL_JUMP)  ; LAB_005488ba
    MOV EAX,dword ptr [EDX]             ; 005488a6
    MOV dword ptr [ESP + 0x54],EAX      ; 005488a8
    MOV EAX,dword ptr [EDX + 0x4]       ; 005488ac
    MOV dword ptr [ESP + 0x58],EAX      ; 005488af
    MOV EAX,dword ptr [EDX + 0x8]       ; 005488b3
    MOV dword ptr [ESP + 0x5c],EAX      ; 005488b6
    MOV EAX,dword ptr [EBX + 0x168]     ; 005488ba
        ;   Label: LAB_005488ba
    TEST EAX,EAX                        ; 005488c0
    JBE 0x00548967                      ; 005488c2
        ;   XREF to: 00548967 (CONDITIONAL_JUMP)  ; LAB_00548967
    CMP EAX,0x1                         ; 005488c8
    JNZ 0x005489e9                      ; 005488cb
        ;   XREF to: 005489e9 (CONDITIONAL_JUMP)  ; LAB_005489e9
    MOV EAX,ESP                         ; 005488d1
    PUSH EAX                            ; 005488d3
    MOV EDX,dword ptr [EBX + 0x14c]     ; 005488d4
    PUSH EBX                            ; 005488da
    CALL dword ptr [EDX + 0x14]         ; 005488db
    ADD ESP,0x8                         ; 005488de
    FLD float ptr [ESP + 0x58]          ; 005488e1
    FCOMP float ptr [ESP + 0x4]         ; 005488e5
    FNSTSW AX                           ; 005488e9
    SAHF                                ; 005488eb
    JC 0x005487cb                       ; 005488ec
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [ESP + 0x58]          ; 005488f2
    FCOMP float ptr [ESP + 0x10]        ; 005488f6
    FNSTSW AX                           ; 005488fa
    SAHF                                ; 005488fc
    JA 0x005487cb                       ; 005488fd
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [ESP + 0x5c]          ; 00548903
    FMUL ST0                            ; 00548907
    FLD float ptr [ESP + 0x54]          ; 00548909
    FMUL ST0                            ; 0054890d
    FADDP                               ; 0054890f
    FLD float ptr [EBX + 0x158]         ; 00548911
    FMUL float ptr [EBX + 0x160]        ; 00548917
    FMUL double ptr [0x00596b97]        ; 0054891d | DOUBLE_00596b97
    FCOMPP                              ; 00548923
    FNSTSW AX                           ; 00548925
    SAHF                                ; 00548927
    JNC 0x005489da                      ; 00548928
        ;   XREF to: 005489da (CONDITIONAL_JUMP)  ; LAB_005489da
    XOR EAX,EAX                         ; 0054892e
    ADD ESP,0x88                        ; 00548930
    POP EBP                             ; 00548936
    POP ESI                             ; 00548937
    POP EBX                             ; 00548938
    RET                                 ; 00548939
    MOV ECX,dword ptr [0x00765a98]      ; 0054893a | DAT_00765a98
        ;   Label: LAB_0054893a
    PUSH ECX                            ; 00548940
    PUSH ESI                            ; 00548941
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00548942
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00548947
    TEST EAX,EAX                        ; 0054894a
    JZ 0x0054895b                       ; 0054894c
        ;   XREF to: 0054895b (CONDITIONAL_JUMP)  ; LAB_0054895b
    CMP dword ptr [EAX + 0x2408],0x0    ; 0054894e
    JZ 0x005487cb                       ; 00548955
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    MOV EAX,dword ptr [ESI + 0x24]      ; 0054895b
        ;   Label: LAB_0054895b
    MOV dword ptr [ESP + 0x58],EAX      ; 0054895e
    JMP 0x0054884b                      ; 00548962
        ;   XREF to: 0054884b (UNCONDITIONAL_JUMP)  ; LAB_0054884b
    LEA EAX,[ESP + 0x30]                ; 00548967
        ;   Label: LAB_00548967
    PUSH EAX                            ; 0054896b
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0054896c
    PUSH EBX                            ; 00548972
    CALL dword ptr [EDX + 0x14]         ; 00548973
    FLD float ptr [EAX]                 ; 00548976
    ADD ESP,0x8                         ; 00548978
    MOV EBX,EAX                         ; 0054897b
    FCOMP float ptr [ESP + 0x54]        ; 0054897d
    FNSTSW AX                           ; 00548981
    SAHF                                ; 00548983
    JA 0x005487cb                       ; 00548984
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [EBX + 0x4]           ; 0054898a
    FCOMP float ptr [ESP + 0x58]        ; 0054898d
    FNSTSW AX                           ; 00548991
    SAHF                                ; 00548993
    JA 0x005487cb                       ; 00548994
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [EBX + 0x8]           ; 0054899a
    FCOMP float ptr [ESP + 0x5c]        ; 0054899d
    FNSTSW AX                           ; 005489a1
    SAHF                                ; 005489a3
    JA 0x005487cb                       ; 005489a4
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [EBX + 0xc]           ; 005489aa
    FCOMP float ptr [ESP + 0x54]        ; 005489ad
    FNSTSW AX                           ; 005489b1
    SAHF                                ; 005489b3
    JC 0x005487cb                       ; 005489b4
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [EBX + 0x10]          ; 005489ba
    FCOMP float ptr [ESP + 0x58]        ; 005489bd
    FNSTSW AX                           ; 005489c1
    SAHF                                ; 005489c3
    JC 0x005487cb                       ; 005489c4
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    FLD float ptr [EBX + 0x14]          ; 005489ca
    FCOMP float ptr [ESP + 0x5c]        ; 005489cd
    FNSTSW AX                           ; 005489d1
    SAHF                                ; 005489d3
    JC 0x005487cb                       ; 005489d4
        ;   XREF to: 005487cb (CONDITIONAL_JUMP)  ; LAB_005487cb
    MOV EAX,0x1                         ; 005489da
        ;   Label: LAB_005489da
    ADD ESP,0x88                        ; 005489df
    POP EBP                             ; 005489e5
    POP ESI                             ; 005489e6
    POP EBX                             ; 005489e7
    RET                                 ; 005489e8
    PUSH EBX                            ; 005489e9
        ;   Label: LAB_005489e9
    MOV EDX,dword ptr [EBX + 0x168]     ; 005489ea
    PUSH EDX                            ; 005489f0
    MOV EBP,0x596b23                    ; 005489f1 | = "..\\core\\trigger.cpp"
    MOV EAX,0x37d                       ; 005489f6
    PUSH 0x596b37                       ; 005489fb | = "CTrigger::containsActor - invalid tri..."
    MOV dword ptr [0x01cc4800],EBP      ; 00548a00 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00548a06 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00548a0b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00548a10
    MOV EBX,0x383                       ; 00548a13
    MOV ECX,0x596b71                    ; 00548a18 | = "..\\core\\trigger.cpp"
    PUSH 0x596b85                       ; 00548a1d | = "Hell froze..."
    MOV dword ptr [0x01cc4804],EBX      ; 00548a22 | DAT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 00548a28 | DAT_01cc4800
    CALL FUN_004c8440                   ; 00548a2e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00548a33
    XOR EAX,EAX                         ; 00548a36
    ADD ESP,0x88                        ; 00548a38
    POP EBP                             ; 00548a3e
    POP ESI                             ; 00548a3f
    POP EBX                             ; 00548a40
    RET                                 ; 00548a41

