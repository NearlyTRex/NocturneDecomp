; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_00578800(int param_1,CDemonActor *param_2)
;
; Local Variables:
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xb0]:1  local_b0
;
; Referenced Globals:
;   TerminatedCString s_core_trigger_cpp_005ecf0e
;   TerminatedCString s_CTrigger_containsActor_i_005ecf22
;   TerminatedCString s_core_trigger_cpp_005ecf5c
;   TerminatedCString s_Hell_froze_005ecf70
;   undefined4 DAT_005ecf7e
;   undefined4 DAT_005ecf82
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578800
        ;   Label: core_trigger.cpp_FUN_00578800
    PUSH ESI                            ; 00578801
    PUSH EDI                            ; 00578802
    PUSH EBP                            ; 00578803
    SUB ESP,0x100                       ; 00578804
    MOV EBX,dword ptr [ESP + 0x114]     ; 0057880a
    MOV EBP,dword ptr [ESP + 0x118]     ; 00578811
    TEST EBP,EBP                        ; 00578818
    JNZ 0x00578829                      ; 0057881a
        ;   XREF to: 00578829 (CONDITIONAL_JUMP)  ; LAB_00578829
    XOR EAX,EAX                         ; 0057881c
        ;   Label: LAB_0057881c
    ADD ESP,0x100                       ; 0057881e
    POP EBP                             ; 00578824
    POP EDI                             ; 00578825
    POP ESI                             ; 00578826
    POP EBX                             ; 00578827
    RET                                 ; 00578828
    PUSH EBP                            ; 00578829
        ;   Label: LAB_00578829
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0057882a
    LEA ESI,[ESP + 0x34]                ; 00578830
    LEA EDI,[ESP + 0x64]                ; 00578834
    CALL dword ptr [EAX + 0x24]         ; 00578838
    MOV ECX,0x6                         ; 0057883b
    LEA ESI,[ESP + 0x34]                ; 00578840
    ADD ESP,0x4                         ; 00578844
    MOVSD.REP ES:EDI,ESI                ; 00578847
    LEA EAX,[ESP + 0x60]                ; 00578849
    FLD float ptr [ESP + 0x60]          ; 0057884d
    FLD float ptr [ESP + 0x64]          ; 00578851
    FLD float ptr [ESP + 0x68]          ; 00578855
    LEA EDI,[ESP + 0xb4]                ; 00578859
    LEA ESI,[ESP + 0x90]                ; 00578860
    FXCH ST2                            ; 00578867
    FADD float ptr [EAX + 0xc]          ; 00578869
    FXCH                                ; 0057886c
    FADD float ptr [EAX + 0x10]         ; 0057886e
    FXCH ST2                            ; 00578871
    FADD float ptr [EAX + 0x14]         ; 00578873
    FXCH                                ; 00578876
    FSTP float ptr [ESP + 0x90]         ; 00578878
    FXCH                                ; 0057887f
    FSTP float ptr [ESP + 0x94]         ; 00578881
    FSTP float ptr [ESP + 0x98]         ; 00578888
    MOVSD ES:EDI,ESI                    ; 0057888f
    MOVSD ES:EDI,ESI                    ; 00578890
    MOVSD ES:EDI,ESI                    ; 00578891
    FLD float ptr [0x005ecf7e]          ; 00578892 | DAT_005ecf7e
    FLD float ptr [ESP + 0xb4]          ; 00578898
    FMUL ST1                            ; 0057889f
    FLD float ptr [ESP + 0xb8]          ; 005788a1
    FMUL ST2                            ; 005788a8
    LEA EAX,[ESP + 0xc0]                ; 005788aa
    FLD float ptr [ESP + 0xbc]          ; 005788b1
    FMULP ST3                           ; 005788b8
    PUSH EAX                            ; 005788ba
    LEA EDI,[ESP + 0xc4]                ; 005788bb
    LEA ESI,[ESP + 0xe8]                ; 005788c2
    FXCH                                ; 005788c9
    FSTP float ptr [ESP + 0xe8]         ; 005788cb
    FSTP float ptr [ESP + 0xec]         ; 005788d2
    FSTP float ptr [ESP + 0xf0]         ; 005788d9
    MOVSD ES:EDI,ESI                    ; 005788e0
    MOVSD ES:EDI,ESI                    ; 005788e1
    MOVSD ES:EDI,ESI                    ; 005788e2
    PUSH EBP                            ; 005788e3
    LEA ESI,[ESP + 0xe0]                ; 005788e4
    LEA EDI,[ESP + 0xb0]                ; 005788eb
    CALL core_actor.cpp_FUN_00408d70    ; 005788f2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xe0]                ; 005788f7
    ADD ESP,0x8                         ; 005788fe
    MOVSD ES:EDI,ESI                    ; 00578901
    MOVSD ES:EDI,ESI                    ; 00578902
    MOVSD ES:EDI,ESI                    ; 00578903
    CMP dword ptr [EBX + 0x374],0x0     ; 00578904
    JNZ 0x00578a5a                      ; 0057890b
        ;   XREF to: 00578a5a (CONDITIONAL_JUMP)  ; LAB_00578a5a
    LEA EAX,[EBX + 0x20]                ; 00578911
        ;   Label: LAB_00578911
    FLD float ptr [ESP + 0xa8]          ; 00578914
    FSUB float ptr [EAX]                ; 0057891b
    FMUL ST0                            ; 0057891d
    FLD float ptr [ESP + 0xac]          ; 0057891f
    FSUB float ptr [EAX + 0x4]          ; 00578926
    FMUL ST0                            ; 00578929
    FLD float ptr [ESP + 0xb0]          ; 0057892b
    FXCH                                ; 00578932
    FADDP ST2,ST0                       ; 00578934
    FSUB float ptr [EAX + 0x8]          ; 00578936
    FMUL ST0                            ; 00578939
    FLD float ptr [EBX + 0x2b4]         ; 0057893b
    FXCH                                ; 00578941
    FADDP ST2,ST0                       ; 00578943
    FMUL float ptr [EBX + 0x2b4]        ; 00578945
    FXCH                                ; 0057894b
    FCOMPP                              ; 0057894d
    FNSTSW AX                           ; 0057894f
    SAHF                                ; 00578951
    JA 0x0057881c                       ; 00578952
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    LEA EAX,[ESP + 0xa8]                ; 00578958
    PUSH EAX                            ; 0057895f
    PUSH EBX                            ; 00578960
    LEA ESI,[ESP + 0xa4]                ; 00578961
    LEA EDI,[ESP + 0xd4]                ; 00578968
    CALL core_actor.cpp_FUN_00408de0    ; 0057896f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xa4]                ; 00578974
    ADD ESP,0x8                         ; 0057897b
    MOVSD ES:EDI,ESI                    ; 0057897e
    MOVSD ES:EDI,ESI                    ; 0057897f
    MOVSD ES:EDI,ESI                    ; 00578980
    LEA EAX,[ESP + 0xa8]                ; 00578981
    LEA ESI,[ESP + 0xcc]                ; 00578988
    CMP EAX,ESI                         ; 0057898f
    JZ 0x005789bd                       ; 00578991
        ;   XREF to: 005789bd (CONDITIONAL_JUMP)  ; LAB_005789bd
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00578993
    MOV dword ptr [ESP + 0xa8],EAX      ; 0057899a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005789a1
    MOV dword ptr [ESP + 0xac],EAX      ; 005789a8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005789af
    MOV dword ptr [ESP + 0xb0],EAX      ; 005789b6
    MOV EAX,dword ptr [EBX + 0x2cc]     ; 005789bd
        ;   Label: LAB_005789bd
    TEST EAX,EAX                        ; 005789c3
    JBE 0x00578a8a                      ; 005789c5
        ;   XREF to: 00578a8a (CONDITIONAL_JUMP)  ; LAB_00578a8a
    CMP EAX,0x1                         ; 005789cb
    JNZ 0x00578b32                      ; 005789ce
        ;   XREF to: 00578b32 (CONDITIONAL_JUMP)  ; LAB_00578b32
    PUSH EBX                            ; 005789d4
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005789d5
    LEA ESI,[ESP + 0x7c]                ; 005789db
    LEA EDI,[ESP + 0x4]                 ; 005789df
    CALL dword ptr [EAX + 0x24]         ; 005789e3
    MOV ECX,0x6                         ; 005789e6
    LEA ESI,[ESP + 0x7c]                ; 005789eb
    ADD ESP,0x4                         ; 005789ef
    MOVSD.REP ES:EDI,ESI                ; 005789f2
    FLD float ptr [ESP + 0xac]          ; 005789f4
    FCOMP float ptr [ESP + 0x4]         ; 005789fb
    FNSTSW AX                           ; 005789ff
    SAHF                                ; 00578a01
    JC 0x0057881c                       ; 00578a02
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0xac]          ; 00578a08
    FCOMP float ptr [ESP + 0x10]        ; 00578a0f
    FNSTSW AX                           ; 00578a13
    SAHF                                ; 00578a15
    JA 0x0057881c                       ; 00578a16
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0xb0]          ; 00578a1c
    FMUL ST0                            ; 00578a23
    FLD float ptr [ESP + 0xa8]          ; 00578a25
    FMUL ST0                            ; 00578a2c
    FADDP                               ; 00578a2e
    FLD float ptr [EBX + 0x2bc]         ; 00578a30
    FMUL float ptr [EBX + 0x2c4]        ; 00578a36
    FMUL double ptr [0x005ecf82]        ; 00578a3c | DAT_005ecf82
    FCOMPP                              ; 00578a42
    FNSTSW AX                           ; 00578a44
    SAHF                                ; 00578a46
    JNC 0x00578b22                      ; 00578a47
        ;   XREF to: 00578b22 (CONDITIONAL_JUMP)  ; LAB_00578b22
    XOR EAX,EAX                         ; 00578a4d
    ADD ESP,0x100                       ; 00578a4f
    POP EBP                             ; 00578a55
    POP EDI                             ; 00578a56
    POP ESI                             ; 00578a57
    POP EBX                             ; 00578a58
    RET                                 ; 00578a59
    MOV ECX,dword ptr [0x007bdc94]      ; 00578a5a | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00578a5a
    PUSH ECX                            ; 00578a60
    PUSH EBP                            ; 00578a61
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00578a62
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00578a67
    TEST EAX,EAX                        ; 00578a6a
    JZ 0x00578a7b                       ; 00578a6c
        ;   XREF to: 00578a7b (CONDITIONAL_JUMP)  ; LAB_00578a7b
    CMP dword ptr [EAX + 0x2570],0x0    ; 00578a6e
    JZ 0x0057881c                       ; 00578a75
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00578a7b
        ;   Label: LAB_00578a7b
    MOV dword ptr [ESP + 0xac],EAX      ; 00578a7e
    JMP 0x00578911                      ; 00578a85
        ;   XREF to: 00578911 (UNCONDITIONAL_JUMP)  ; LAB_00578911
    PUSH EBX                            ; 00578a8a
        ;   Label: LAB_00578a8a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00578a8b
    LEA ESI,[ESP + 0x4c]                ; 00578a91
    LEA EDI,[ESP + 0x1c]                ; 00578a95
    CALL dword ptr [EAX + 0x24]         ; 00578a99
    MOV ECX,0x6                         ; 00578a9c
    LEA ESI,[ESP + 0x4c]                ; 00578aa1
    ADD ESP,0x4                         ; 00578aa5
    MOVSD.REP ES:EDI,ESI                ; 00578aa8
    FLD float ptr [ESP + 0x18]          ; 00578aaa
    FCOMP float ptr [ESP + 0xa8]        ; 00578aae
    FNSTSW AX                           ; 00578ab5
    SAHF                                ; 00578ab7
    JA 0x0057881c                       ; 00578ab8
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0x1c]          ; 00578abe
    FCOMP float ptr [ESP + 0xac]        ; 00578ac2
    FNSTSW AX                           ; 00578ac9
    SAHF                                ; 00578acb
    JA 0x0057881c                       ; 00578acc
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0x20]          ; 00578ad2
    FCOMP float ptr [ESP + 0xb0]        ; 00578ad6
    FNSTSW AX                           ; 00578add
    SAHF                                ; 00578adf
    JA 0x0057881c                       ; 00578ae0
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0x24]          ; 00578ae6
    FCOMP float ptr [ESP + 0xa8]        ; 00578aea
    FNSTSW AX                           ; 00578af1
    SAHF                                ; 00578af3
    JC 0x0057881c                       ; 00578af4
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0x28]          ; 00578afa
    FCOMP float ptr [ESP + 0xac]        ; 00578afe
    FNSTSW AX                           ; 00578b05
    SAHF                                ; 00578b07
    JC 0x0057881c                       ; 00578b08
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    FLD float ptr [ESP + 0x2c]          ; 00578b0e
    FCOMP float ptr [ESP + 0xb0]        ; 00578b12
    FNSTSW AX                           ; 00578b19
    SAHF                                ; 00578b1b
    JC 0x0057881c                       ; 00578b1c
        ;   XREF to: 0057881c (CONDITIONAL_JUMP)  ; LAB_0057881c
    MOV EAX,0x1                         ; 00578b22
        ;   Label: LAB_00578b22
    ADD ESP,0x100                       ; 00578b27
    POP EBP                             ; 00578b2d
    POP EDI                             ; 00578b2e
    POP ESI                             ; 00578b2f
    POP EBX                             ; 00578b30
    RET                                 ; 00578b31
    PUSH EBX                            ; 00578b32
        ;   Label: LAB_00578b32
    MOV EAX,dword ptr [EBX + 0x2cc]     ; 00578b33
    PUSH EAX                            ; 00578b39
    MOV EDI,0x5ecf0e                    ; 00578b3a | = "..\\core\\trigger.cpp"
    MOV EBP,0x391                       ; 00578b3f
    PUSH 0x5ecf22                       ; 00578b44 | = "CTrigger::containsActor - invalid tri..."
    MOV dword ptr [0x01d046a0],EDI      ; 00578b49 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00578b4f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00578b55
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00578b5a
    MOV EDX,0x5ecf5c                    ; 00578b5d | = "..\\core\\trigger.cpp"
    MOV ECX,0x397                       ; 00578b62
    PUSH 0x5ecf70                       ; 00578b67 | = "Hell froze..."
    MOV dword ptr [0x01d046a0],EDX      ; 00578b6c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00578b72 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00578b78
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00578b7d
    XOR EAX,EAX                         ; 00578b80
    ADD ESP,0x100                       ; 00578b82
    POP EBP                             ; 00578b88
    POP EDI                             ; 00578b89
    POP ESI                             ; 00578b8a
    POP EBX                             ; 00578b8b
    RET                                 ; 00578b8c

