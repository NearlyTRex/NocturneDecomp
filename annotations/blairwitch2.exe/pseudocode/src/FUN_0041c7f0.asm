; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041c7f0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_0041d270 at 0041d27a
;   FUN_00562460 at 00562465
;   FUN_005ad9f0 at 005ad9f6
;
; Referenced Globals:
;   undefined4 s_L_modelName_005cc52b+2
;   TerminatedCString s_weightInPounds_005cc537
;   undefined4 DAT_005cc546
;   undefined4 DAT_005cc54a
;   TerminatedCString s_loopWavName_005cc54e
;   TerminatedCString s_collisionWavName_005cc55a
;   TerminatedCString s_canBeCarried_005cc56b
;   TerminatedCString s_pickupType_005cc578
;   TerminatedCString s_carriedByActor_005cc583
;   TerminatedCString s_canBePushed_005cc592
;   TerminatedCString s_pushedByActor_005cc59e
;   TerminatedCString s_groundType_005cc5ac
;   TerminatedCString s_simBox_005cc5b7
;   TerminatedCString s_plotInShadowFlag_005cc5be
;   TerminatedCString s_collisionFlag_005cc5cf
;   ... and 10 more
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b550
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040ba60
;   FUN_0040bee0
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c7f0
        ;   Label: FUN_0041c7f0
    PUSH ESI                            ; 0041c7f1
    SUB ESP,0x104                       ; 0041c7f2
    MOV EBX,dword ptr [ESP + 0x110]     ; 0041c7f8
    PUSH EBX                            ; 0041c7ff
    CALL FUN_0040c330                   ; 0041c800
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0041c805
    PUSH 0x5cc52d                       ; 0041c808 | s_L_modelName_005cc52b+2
    LEA EAX,[EBX + 0x2b4]               ; 0041c80d
    PUSH EAX                            ; 0041c813
    CALL FUN_0040ba60                   ; 0041c814
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 0041c819
    PUSH 0x5cc537                       ; 0041c81c | = "weightInPounds"
    LEA EAX,[EBX + 0x4ec]               ; 0041c821
    PUSH EAX                            ; 0041c827
    CALL FUN_0040b8e0                   ; 0041c828
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041c82d
    PUSH 0x5cc546                       ; 0041c830 | DAT_005cc546
    LEA EAX,[EBX + 0x468]               ; 0041c835
    PUSH EAX                            ; 0041c83b
    CALL FUN_0040b8e0                   ; 0041c83c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041c841
    PUSH 0x5cc54a                       ; 0041c844 | DAT_005cc54a
    LEA EAX,[EBX + 0x45c]               ; 0041c849
    PUSH EAX                            ; 0041c84f
    CALL FUN_0040b4b0                   ; 0041c850
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 0041c855
    PUSH 0x5cc54e                       ; 0041c858 | = "loopWavName"
    LEA EAX,[EBX + 0x430]               ; 0041c85d
    PUSH EAX                            ; 0041c863
    CALL FUN_0040b730                   ; 0041c864
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0041c869
    PUSH 0x5cc55a                       ; 0041c86c | = "collisionWavName"
    LEA EAX,[EBX + 0x444]               ; 0041c871
    PUSH EAX                            ; 0041c877
    CALL FUN_0040b730                   ; 0041c878
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    MOV EDX,dword ptr [0x0060995c]      ; 0041c87d | DAT_0060995c
    ADD ESP,0x8                         ; 0041c883
    CMP EDX,0x7                         ; 0041c886
    JL 0x0041ca59                       ; 0041c889
        ;   XREF to: 0041ca59 (CONDITIONAL_JUMP)  ; LAB_0041ca59
    PUSH 0x5cc578                       ; 0041c88f | = "pickupType"
    LEA EAX,[EBX + 0x470]               ; 0041c894
    PUSH EAX                            ; 0041c89a
    CALL FUN_0040b960                   ; 0041c89b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c8a0
    PUSH 0x5cc583                       ; 0041c8a3 | = "carriedByActor"
        ;   Label: LAB_0041c8a3
    LEA EAX,[EBX + 0x474]               ; 0041c8a8
    PUSH EAX                            ; 0041c8ae
    CALL FUN_0040b9e0                   ; 0041c8af
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    MOV ESI,dword ptr [0x0060995c]      ; 0041c8b4 | DAT_0060995c
    ADD ESP,0x8                         ; 0041c8ba
    CMP ESI,0x2                         ; 0041c8bd
    JL 0x0041c8ea                       ; 0041c8c0
        ;   XREF to: 0041c8ea (CONDITIONAL_JUMP)  ; LAB_0041c8ea
    PUSH 0x5cc592                       ; 0041c8c2 | = "canBePushed"
    LEA EAX,[EBX + 0x478]               ; 0041c8c7
    PUSH EAX                            ; 0041c8cd
    CALL FUN_0040b960                   ; 0041c8ce
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c8d3
    PUSH 0x5cc59e                       ; 0041c8d6 | = "pushedByActor"
    LEA EAX,[EBX + 0x47c]               ; 0041c8db
    PUSH EAX                            ; 0041c8e1
    CALL FUN_0040b9e0                   ; 0041c8e2
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0041c8e7
    CMP dword ptr [0x0060995c],0x3      ; 0041c8ea | DAT_0060995c
        ;   Label: LAB_0041c8ea
    JL 0x0041c907                       ; 0041c8f1
        ;   XREF to: 0041c907 (CONDITIONAL_JUMP)  ; LAB_0041c907
    PUSH 0x5cc5ac                       ; 0041c8f3 | = "groundType"
    LEA EAX,[EBX + 0x74c]               ; 0041c8f8
    PUSH EAX                            ; 0041c8fe
    CALL FUN_0040b960                   ; 0041c8ff
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c904
    CMP dword ptr [0x0060995c],0x4      ; 0041c907 | DAT_0060995c
        ;   Label: LAB_0041c907
    JL 0x0041ca93                       ; 0041c90e
        ;   XREF to: 0041ca93 (CONDITIONAL_JUMP)  ; LAB_0041ca93
    PUSH 0x5cc5b7                       ; 0041c914 | = "simBox"
    LEA EAX,[EBX + 0x4f0]               ; 0041c919
    PUSH EAX                            ; 0041c91f
    CALL FUN_0040bee0                   ; 0041c920
        ;   XREF to: 0040bee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bee0()
    ADD ESP,0x8                         ; 0041c925
    CMP dword ptr [0x0060995c],0x5      ; 0041c928 | DAT_0060995c
        ;   Label: LAB_0041c928
    JL 0x0041caa2                       ; 0041c92f
        ;   XREF to: 0041caa2 (CONDITIONAL_JUMP)  ; LAB_0041caa2
    PUSH 0x5cc5be                       ; 0041c935 | = "plotInShadowFlag"
    LEA EAX,[EBX + 0x750]               ; 0041c93a
    PUSH EAX                            ; 0041c940
    CALL FUN_0040b960                   ; 0041c941
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c946
    CMP dword ptr [0x0060995c],0x6      ; 0041c949 | DAT_0060995c
        ;   Label: LAB_0041c949
    JL 0x0041cab1                       ; 0041c950
        ;   XREF to: 0041cab1 (CONDITIONAL_JUMP)  ; LAB_0041cab1
    PUSH 0x5cc5cf                       ; 0041c956 | = "collisionFlag"
    LEA EAX,[EBX + 0x754]               ; 0041c95b
    PUSH EAX                            ; 0041c961
    CALL FUN_0040b960                   ; 0041c962
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c967
    CMP dword ptr [0x0060995c],0x8      ; 0041c96a | DAT_0060995c
        ;   Label: LAB_0041c96a
    JL 0x0041c99b                       ; 0041c971
        ;   XREF to: 0041c99b (CONDITIONAL_JUMP)  ; LAB_0041c99b
    PUSH 0x5cc5dd                       ; 0041c973 | = "isTransparent"
    LEA EAX,[EBX + 0xfc]                ; 0041c978
    PUSH EAX                            ; 0041c97e
    CALL FUN_0040b960                   ; 0041c97f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c984
    PUSH 0x5cc5eb                       ; 0041c987 | = "dontUseNormals"
    LEA EAX,[EBX + 0x758]               ; 0041c98c
    PUSH EAX                            ; 0041c992
    CALL FUN_0040b960                   ; 0041c993
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041c998
    CMP dword ptr [0x0060995c],0x9      ; 0041c99b | DAT_0060995c
        ;   Label: LAB_0041c99b
    JNZ 0x0041c9b6                      ; 0041c9a2
        ;   XREF to: 0041c9b6 (CONDITIONAL_JUMP)  ; LAB_0041c9b6
    PUSH 0x5cc5fa                       ; 0041c9a4 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 0041c9a9
    PUSH EAX                            ; 0041c9ad
    CALL FUN_0040b730                   ; 0041c9ae
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0041c9b3
    CMP dword ptr [0x0060995c],0xb      ; 0041c9b6 | DAT_0060995c
        ;   Label: LAB_0041c9b6
    JL 0x0041c9d3                       ; 0041c9bd
        ;   XREF to: 0041c9d3 (CONDITIONAL_JUMP)  ; LAB_0041c9d3
    PUSH 0x5cc60a                       ; 0041c9bf | = "constrainExtentsActor"
    LEA EAX,[EBX + 0x480]               ; 0041c9c4
    PUSH EAX                            ; 0041c9ca
    CALL FUN_0040b9e0                   ; 0041c9cb
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0041c9d0
    CMP dword ptr [0x0060995c],0xc      ; 0041c9d3 | DAT_0060995c
        ;   Label: LAB_0041c9d3
    JL 0x0041c9f0                       ; 0041c9da
        ;   XREF to: 0041c9f0 (CONDITIONAL_JUMP)  ; LAB_0041c9f0
    PUSH 0x5cc620                       ; 0041c9dc | = "useEvent"
    LEA EAX,[EBX + 0x75c]               ; 0041c9e1
    PUSH EAX                            ; 0041c9e7
    CALL FUN_0040b730                   ; 0041c9e8
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0041c9ed
    CMP dword ptr [0x0060995c],0xd      ; 0041c9f0 | DAT_0060995c
        ;   Label: LAB_0041c9f0
    JL 0x0041ca0d                       ; 0041c9f7
        ;   XREF to: 0041ca0d (CONDITIONAL_JUMP)  ; LAB_0041ca0d
    PUSH 0x5cc629                       ; 0041c9f9 | = "allowedMeleeAttackTypes"
    LEA EAX,[EBX + 0x7c0]               ; 0041c9fe
    PUSH EAX                            ; 0041ca04
    CALL FUN_0040b960                   ; 0041ca05
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041ca0a
    CMP dword ptr [0x0060995c],0xe      ; 0041ca0d | DAT_0060995c
        ;   Label: LAB_0041ca0d
    JL 0x0041ca2a                       ; 0041ca14
        ;   XREF to: 0041ca2a (CONDITIONAL_JUMP)  ; LAB_0041ca2a
    PUSH 0x5cc641                       ; 0041ca16 | = "pushSound"
    LEA EAX,[EBX + 0x488]               ; 0041ca1b
    PUSH EAX                            ; 0041ca21
    CALL FUN_0040b730                   ; 0041ca22
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0041ca27
    CMP dword ptr [0x0060995c],0xf      ; 0041ca2a | DAT_0060995c
        ;   Label: LAB_0041ca2a
    JL 0x0041ca47                       ; 0041ca31
        ;   XREF to: 0041ca47 (CONDITIONAL_JUMP)  ; LAB_0041ca47
    PUSH 0x5cc64b                       ; 0041ca33 | = "blockVirtualDirectorFlag"
    LEA EAX,[EBX + 0x7c4]               ; 0041ca38
    PUSH EAX                            ; 0041ca3e
    CALL FUN_0040b960                   ; 0041ca3f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041ca44
    CMP dword ptr [0x0060995c],0x10     ; 0041ca47 | DAT_0060995c
        ;   Label: LAB_0041ca47
    JGE 0x0041cac0                      ; 0041ca4e
        ;   XREF to: 0041cac0 (CONDITIONAL_JUMP)  ; LAB_0041cac0
    ADD ESP,0x104                       ; 0041ca50
    POP ESI                             ; 0041ca56
    POP EBX                             ; 0041ca57
    RET                                 ; 0041ca58
    PUSH 0x5cc56b                       ; 0041ca59 | = "canBeCarried"
        ;   Label: LAB_0041ca59
    LEA EAX,[ESP + 0x104]               ; 0041ca5e
    PUSH EAX                            ; 0041ca65
    CALL FUN_0040b960                   ; 0041ca66
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041ca6b
    MOV ECX,dword ptr [ESP + 0x100]     ; 0041ca6e
    TEST ECX,ECX                        ; 0041ca75
    JZ 0x0041ca88                       ; 0041ca77
        ;   XREF to: 0041ca88 (CONDITIONAL_JUMP)  ; LAB_0041ca88
    MOV dword ptr [EBX + 0x470],0x3     ; 0041ca79
    JMP 0x0041c8a3                      ; 0041ca83
        ;   XREF to: 0041c8a3 (UNCONDITIONAL_JUMP)  ; LAB_0041c8a3
    MOV dword ptr [EBX + 0x470],ECX     ; 0041ca88
        ;   Label: LAB_0041ca88
    JMP 0x0041c8a3                      ; 0041ca8e
        ;   XREF to: 0041c8a3 (UNCONDITIONAL_JUMP)  ; LAB_0041c8a3
    MOV dword ptr [EBX + 0x744],0xffffffff ; 0041ca93
        ;   Label: LAB_0041ca93
    JMP 0x0041c928                      ; 0041ca9d
        ;   XREF to: 0041c928 (UNCONDITIONAL_JUMP)  ; LAB_0041c928
    MOV dword ptr [EBX + 0x750],0x1     ; 0041caa2
        ;   Label: LAB_0041caa2
    JMP 0x0041c949                      ; 0041caac
        ;   XREF to: 0041c949 (UNCONDITIONAL_JUMP)  ; LAB_0041c949
    MOV dword ptr [EBX + 0x754],0x1     ; 0041cab1
        ;   Label: LAB_0041cab1
    JMP 0x0041c96a                      ; 0041cabb
        ;   XREF to: 0041c96a (UNCONDITIONAL_JUMP)  ; LAB_0041c96a
    PUSH 0x5cc664                       ; 0041cac0 | = "camOrient"
        ;   Label: LAB_0041cac0
    ADD EBX,0x7c8                       ; 0041cac5
    PUSH EBX                            ; 0041cacb
    CALL FUN_0040b550                   ; 0041cacc
        ;   XREF to: 0040b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b550()
    ADD ESP,0x8                         ; 0041cad1
    ADD ESP,0x104                       ; 0041cad4
    POP ESI                             ; 0041cada
    POP EBX                             ; 0041cadb
    RET                                 ; 0041cadc

