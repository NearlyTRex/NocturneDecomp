; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004287e0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005d51f4
;   TerminatedCString s_Bip01_Head_005d5203
;   TerminatedCString s_Bip01_L_Forearm_005d520e
;   TerminatedCString s_Bip01_R_ForeArm_005d521e
;   TerminatedCString s_Bip01_L_UpperArm_005d522e
;   TerminatedCString s_Bip01_R_UpperArm_005d523f
;   TerminatedCString s_Bip01_L_Foot_005d5250
;   TerminatedCString s_Bip01_R_Foot_005d525d
;   TerminatedCString s_Bip01_L_Hand_005d526a
;   TerminatedCString s_Bip01_R_Hand_005d5277
;   TerminatedCString s_Bip01_Spine_005d5284
;   TerminatedCString s_Bip01_Spine2_005d5290
;   TerminatedCString s_larm01_005d529d
;   TerminatedCString s_l4arm01_005d52a4
;   TerminatedCString s_rarm01_005d52ac
;   ... and 6 more
;
; Called Functions:
;   FUN_004a0510
;   FUN_004a6c30
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004287e0
        ;   Label: FUN_004287e0
    PUSH ESI                            ; 004287e1
    PUSH EDI                            ; 004287e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004287e3
    LEA EAX,[EBX + 0x158]               ; 004287e7
    PUSH EAX                            ; 004287ed
    CALL FUN_00569b20                   ; 004287ee
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004287f3
    PUSH 0x5d51f4                       ; 004287f6 | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 004287fb | DAT_0061b4d0
    PUSH EDX                            ; 00428801
    CALL FUN_004a6c30                   ; 00428802
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00428807
    TEST EAX,EAX                        ; 0042880a
    JNZ 0x00428a5c                      ; 0042880c
        ;   XREF to: 00428a5c (CONDITIONAL_JUMP)  ; LAB_00428a5c
    MOV dword ptr [EBX + 0xc2f0],0x3f400000 ; 00428812
    LEA EDI,[EBX + 0x158]               ; 0042881c
        ;   Label: LAB_0042881c
    PUSH EDI                            ; 00428822
    CALL FUN_00569f30                   ; 00428823
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00428828
    PUSH 0x1                            ; 0042882b
    PUSH 0x5d5203                       ; 0042882d | = "Bip01 Head"
    PUSH EAX                            ; 00428832
    MOV ESI,EAX                         ; 00428833
    CALL FUN_005634f0                   ; 00428835
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0042883a
    PUSH 0x1                            ; 0042883d
    PUSH 0x5d520e                       ; 0042883f | = "Bip01 L Forearm"
    PUSH ESI                            ; 00428844
    MOV dword ptr [EBX + 0xc28c],EAX    ; 00428845
    CALL FUN_005634f0                   ; 0042884b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00428850
    PUSH 0x1                            ; 00428853
    PUSH 0x5d521e                       ; 00428855 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0042885a
    MOV dword ptr [EBX + 0xc298],EAX    ; 0042885b
    CALL FUN_005634f0                   ; 00428861
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00428866
    PUSH 0x1                            ; 00428869
    PUSH 0x5d522e                       ; 0042886b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00428870
    MOV dword ptr [EBX + 0xc29c],EAX    ; 00428871
    CALL FUN_005634f0                   ; 00428877
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0042887c
    PUSH 0x1                            ; 0042887f
    PUSH 0x5d523f                       ; 00428881 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00428886
    MOV dword ptr [EBX + 0xc2a0],EAX    ; 00428887
    CALL FUN_005634f0                   ; 0042888d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00428892
    PUSH 0x1                            ; 00428895
    PUSH 0x5d5250                       ; 00428897 | = "Bip01 L Foot"
    PUSH ESI                            ; 0042889c
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 0042889d
    CALL FUN_005634f0                   ; 004288a3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004288a8
    PUSH 0x1                            ; 004288ab
    PUSH 0x5d525d                       ; 004288ad | = "Bip01 R Foot"
    PUSH ESI                            ; 004288b2
    MOV dword ptr [EBX + 0xc2a8],EAX    ; 004288b3
    CALL FUN_005634f0                   ; 004288b9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004288be
    PUSH 0x1                            ; 004288c1
    PUSH 0x5d526a                       ; 004288c3 | = "Bip01 L Hand"
    PUSH ESI                            ; 004288c8
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004288c9
    CALL FUN_005634f0                   ; 004288cf
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004288d4
    MOV dword ptr [EBX + 0xc290],EAX    ; 004288d7
    PUSH 0x1                            ; 004288dd
    PUSH 0x5d5277                       ; 004288df | = "Bip01 R Hand"
    PUSH ESI                            ; 004288e4
    CALL FUN_005634f0                   ; 004288e5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004288ea
    PUSH 0x1                            ; 004288ed
    PUSH 0x5d5284                       ; 004288ef | = "Bip01 Spine"
    PUSH ESI                            ; 004288f4
    MOV dword ptr [EBX + 0xc294],EAX    ; 004288f5
    CALL FUN_005634f0                   ; 004288fb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00428900
    PUSH 0x1                            ; 00428903
    PUSH 0x5d5290                       ; 00428905 | = "Bip01 Spine2"
    PUSH ESI                            ; 0042890a
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 0042890b
    CALL FUN_005634f0                   ; 00428911
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00428916
    PUSH EDI                            ; 00428919
    MOV dword ptr [EBX + 0xc2b4],EAX    ; 0042891a
    CALL FUN_00569eb0                   ; 00428920
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00428925
    PUSH 0x1                            ; 00428928
    PUSH 0x5d529d                       ; 0042892a | = "larm01"
    PUSH EAX                            ; 0042892f
    MOV ESI,EAX                         ; 00428930
    MOV EDI,EAX                         ; 00428932
    CALL FUN_00565780                   ; 00428934
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00428939
    PUSH 0x1                            ; 0042893c
    PUSH 0x5d52a4                       ; 0042893e | = "l4arm01"
    PUSH ESI                            ; 00428943
    MOV dword ptr [EBX + 0xc2b8],EAX    ; 00428944
    CALL FUN_00565780                   ; 0042894a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0042894f
    PUSH 0x1                            ; 00428952
    PUSH 0x5d52ac                       ; 00428954 | = "rarm01"
    PUSH ESI                            ; 00428959
    MOV dword ptr [EBX + 0xc2bc],EAX    ; 0042895a
    CALL FUN_00565780                   ; 00428960
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00428965
    PUSH 0x0                            ; 00428968
    PUSH 0x5d52b3                       ; 0042896a | = "r4arm01"
    PUSH ESI                            ; 0042896f
    MOV dword ptr [EBX + 0xc2c0],EAX    ; 00428970
    CALL FUN_00565780                   ; 00428976
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0042897b
    MOV dword ptr [EBX + 0xc2c4],EAX    ; 0042897e
    TEST EAX,EAX                        ; 00428984
    JGE 0x00428992                      ; 00428986
        ;   XREF to: 00428992 (CONDITIONAL_JUMP)  ; LAB_00428992
    MOV dword ptr [EBX + 0xc2c4],0x3b   ; 00428988
    PUSH 0x0                            ; 00428992
        ;   Label: LAB_00428992
    PUSH 0x5d52bb                       ; 00428994 | = "waist01"
    PUSH EDI                            ; 00428999
    CALL FUN_00565780                   ; 0042899a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0042899f
    PUSH 0x1                            ; 004289a2
    PUSH 0x5d52c3                       ; 004289a4 | = "torso01"
    PUSH EDI                            ; 004289a9
    MOV dword ptr [EBX + 0xc2c8],EAX    ; 004289aa
    CALL FUN_00565780                   ; 004289b0
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004289b5
    PUSH 0x1                            ; 004289b8
    PUSH 0x5d52cb                       ; 004289ba | = "head01"
    PUSH EDI                            ; 004289bf
    MOV dword ptr [EBX + 0xc2cc],EAX    ; 004289c0
    CALL FUN_00565780                   ; 004289c6
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    MOV dword ptr [EBX + 0x2384],0x0    ; 004289cb
    MOV dword ptr [EBX + 0xc2d0],EAX    ; 004289d5
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004289db
    MOV dword ptr [EBX + 0x25a8],EAX    ; 004289e1
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 004289e7
    MOV dword ptr [EBX + 0x25ac],EAX    ; 004289ed
    MOV EAX,dword ptr [EBX + 0xc294]    ; 004289f3
    MOV dword ptr [EBX + 0x2620],EAX    ; 004289f9
    ADD ESP,0xc                         ; 004289ff
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 00428a02
    PUSH EBX                            ; 00428a08
    MOV dword ptr [EBX + 0x2624],EAX    ; 00428a09
    CALL FUN_004a0510                   ; 00428a0f
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    MOV ESI,dword ptr [EBX + 0xc2c8]    ; 00428a14
    ADD ESP,0x4                         ; 00428a1a
    TEST ESI,ESI                        ; 00428a1d
    JL 0x00428a30                       ; 00428a1f
        ;   XREF to: 00428a30 (CONDITIONAL_JUMP)  ; LAB_00428a30
    FLD float ptr [EBX + 0x3000]        ; 00428a21
    FLDZ                                ; 00428a27
    FCOMPP                              ; 00428a29
    FNSTSW AX                           ; 00428a2b
    SAHF                                ; 00428a2d
    JA 0x00428a6b                       ; 00428a2e
        ;   XREF to: 00428a6b (CONDITIONAL_JUMP)  ; LAB_00428a6b
    MOV dword ptr [EBX + 0xc288],0x0    ; 00428a30
        ;   Label: LAB_00428a30
    MOV dword ptr [EBX + 0xc2dc],0x0    ; 00428a3a
    MOV dword ptr [EBX + 0xc2e0],0x0    ; 00428a44
    MOV dword ptr [EBX + 0xc2d8],0x0    ; 00428a4e
    POP EDI                             ; 00428a58
    POP ESI                             ; 00428a59
    POP EBX                             ; 00428a5a
    RET                                 ; 00428a5b
    MOV dword ptr [EBX + 0xc2f0],0x3f800000 ; 00428a5c
        ;   Label: LAB_00428a5c
    JMP 0x0042881c                      ; 00428a66
        ;   XREF to: 0042881c (UNCONDITIONAL_JUMP)  ; LAB_0042881c
    FLD float ptr [EBX + 0x2490]        ; 00428a6b
        ;   Label: LAB_00428a6b
    FADD double ptr [0x005d52d5]        ; 00428a71 | DAT_005d52d5
    FSTP float ptr [EBX + 0x3000]       ; 00428a77
    JMP 0x00428a30                      ; 00428a7d
        ;   XREF to: 00428a30 (UNCONDITIONAL_JUMP)  ; LAB_00428a30

