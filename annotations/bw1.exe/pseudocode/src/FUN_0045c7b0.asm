; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c7b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005d828a+1
;   TerminatedCString s_D_SHERIFF_dfm_005d829c
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_0040cc60
;   FUN_0040cd00
;   FUN_0045bfa0
;   FUN_0045c4a0
;   FUN_004a0f00
;   FUN_004a1b70
;   FUN_00524770
;   FUN_005247c0
;   FUN_005735a0
;   FUN_00573a80
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c7b0
        ;   Label: FUN_0045c7b0
    PUSH ESI                            ; 0045c7b1
    PUSH EDI                            ; 0045c7b2
    PUSH EBP                            ; 0045c7b3
    MOV EBP,ESP                         ; 0045c7b4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045c7b6
    MOV EDI,dword ptr [EBP + 0x18]      ; 0045c7b9
    CMP dword ptr [EBX + 0x27b0],0x0    ; 0045c7bc
    JNZ 0x0045c8dc                      ; 0045c7c3
        ;   XREF to: 0045c8dc (CONDITIONAL_JUMP)  ; LAB_0045c8dc
    PUSH EDI                            ; 0045c7c9
    PUSH EBX                            ; 0045c7ca
    CALL FUN_0045c4a0                   ; 0045c7cb
        ;   XREF to: 0045c4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c4a0()
    ADD ESP,0x8                         ; 0045c7d0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045c7d3
    PUSH EBX                            ; 0045c7d9
    CALL dword ptr [EAX + 0xf8]         ; 0045c7da
    FLD float ptr [EDI + 0x4]           ; 0045c7e0
    FSUBR float ptr [EBX + 0x2538]      ; 0045c7e3
    MOV EAX,dword ptr [EBX + 0xc340]    ; 0045c7e9
    FSTP float ptr [EBX + 0x2538]       ; 0045c7ef
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0045c7f5
    ADD ESP,0x4                         ; 0045c7fc
    TEST ECX,ECX                        ; 0045c7ff
    JZ 0x0045c8f5                       ; 0045c801
        ;   XREF to: 0045c8f5 (CONDITIONAL_JUMP)  ; LAB_0045c8f5
    FLD float ptr [EBX + 0x2538]        ; 0045c807
        ;   Label: LAB_0045c807
    FLDZ                                ; 0045c80d
    MOV dword ptr [EBX + 0xc1e4],0x3f99999a ; 0045c80f
    FCOMPP                              ; 0045c819
    FNSTSW AX                           ; 0045c81b
    SAHF                                ; 0045c81d
    JC 0x0045c91e                       ; 0045c81e
        ;   XREF to: 0045c91e (CONDITIONAL_JUMP)  ; LAB_0045c91e
    LEA EAX,[EBX + 0x158]               ; 0045c824
    PUSH EAX                            ; 0045c82a
    MOV dword ptr [EBX + 0x2538],0x0    ; 0045c82b
    CALL FUN_00524770                   ; 0045c835
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045c83a
    ADD ESP,0x4                         ; 0045c83d
    CMP EAX,0x1a                        ; 0045c840
    JZ 0x0045c8cd                       ; 0045c843
        ;   XREF to: 0045c8cd (CONDITIONAL_JUMP)  ; LAB_0045c8cd
    CMP EAX,0x19                        ; 0045c849
    JZ 0x0045c8cd                       ; 0045c84c
        ;   XREF to: 0045c8cd (CONDITIONAL_JUMP)  ; LAB_0045c8cd
    PUSH EBX                            ; 0045c852
    CALL FUN_0045bfa0                   ; 0045c853
        ;   XREF to: 0045bfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045bfa0()
    ADD ESP,0x4                         ; 0045c858
    PUSH 0x4                            ; 0045c85b
    PUSH 0x0                            ; 0045c85d
    CALL FUN_0040cc60                   ; 0045c85f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    LEA ESI,[EAX + 0x14]                ; 0045c864
    MOV EAX,dword ptr [EBX + 0xc340]    ; 0045c867
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0045c86d
    ADD ESP,0x8                         ; 0045c874
    TEST ECX,ECX                        ; 0045c877
    JZ 0x0045c900                       ; 0045c879
        ;   XREF to: 0045c900 (CONDITIONAL_JUMP)  ; LAB_0045c900
    PUSH 0x5d829c                       ; 0045c87f | = "D_SHERIFF.dfm"
        ;   Label: LAB_0045c87f
    LEA EAX,[EBX + 0x24a8]              ; 0045c884
    PUSH EAX                            ; 0045c88a
    CALL FUN_005c04e0                   ; 0045c88b
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0045c890
    TEST EAX,EAX                        ; 0045c893
    JNZ 0x0045c89c                      ; 0045c895
        ;   XREF to: 0045c89c (CONDITIONAL_JUMP)  ; LAB_0045c89c
    MOV ESI,0x18                        ; 0045c897
    PUSH 0x1                            ; 0045c89c
        ;   Label: LAB_0045c89c
    PUSH ESI                            ; 0045c89e
    LEA EAX,[EBX + 0x158]               ; 0045c89f
    PUSH EAX                            ; 0045c8a5
    CALL FUN_005247c0                   ; 0045c8a6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0045c8ab
    MOV ECX,dword ptr [EBX + 0xc34c]    ; 0045c8ae
    PUSH ECX                            ; 0045c8b4
    CALL FUN_00573a80                   ; 0045c8b5
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0045c8ba
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045c8bd
    PUSH EBX                            ; 0045c8c3
    CALL dword ptr [EAX + 0x150]        ; 0045c8c4
    ADD ESP,0x4                         ; 0045c8ca
    PUSH EDI                            ; 0045c8cd
        ;   Label: LAB_0045c8cd
    PUSH EBX                            ; 0045c8ce
    CALL FUN_004a0f00                   ; 0045c8cf
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 0045c8d4
    POP EBP                             ; 0045c8d7
    POP EDI                             ; 0045c8d8
    POP ESI                             ; 0045c8d9
    POP EBX                             ; 0045c8da
    RET                                 ; 0045c8db
    PUSH 0x5d828b                       ; 0045c8dc | s_ShotInvulnerable_005d828a+1
        ;   Label: LAB_0045c8dc
    MOV EBX,dword ptr [0x0061b4d0]      ; 0045c8e1 | DAT_0061b4d0
    PUSH EBX                            ; 0045c8e7
    CALL FUN_004a1b70                   ; 0045c8e8
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 0045c8ed
    POP EBP                             ; 0045c8f0
    POP EDI                             ; 0045c8f1
    POP ESI                             ; 0045c8f2
    POP EBX                             ; 0045c8f3
    RET                                 ; 0045c8f4
    MOV dword ptr [EBX + 0x2538],ECX    ; 0045c8f5
        ;   Label: LAB_0045c8f5
    JMP 0x0045c807                      ; 0045c8fb
        ;   XREF to: 0045c807 (UNCONDITIONAL_JUMP)  ; LAB_0045c807
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 0045c900
        ;   Label: LAB_0045c900
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045c906
    JZ 0x0045c87f                       ; 0045c90e
        ;   XREF to: 0045c87f (CONDITIONAL_JUMP)  ; LAB_0045c87f
    MOV ESI,0x1f                        ; 0045c914
    JMP 0x0045c87f                      ; 0045c919
        ;   XREF to: 0045c87f (UNCONDITIONAL_JUMP)  ; LAB_0045c87f
    PUSH 0x3                            ; 0045c91e
        ;   Label: LAB_0045c91e
    PUSH 0x0                            ; 0045c920
    CALL FUN_0040cc60                   ; 0045c922
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    LEA ESI,[EAX + 0xf]                 ; 0045c927
    ADD ESP,0x8                         ; 0045c92a
    CMP ESI,0x12                        ; 0045c92d
    JNZ 0x0045c948                      ; 0045c930
        ;   XREF to: 0045c948 (CONDITIONAL_JUMP)  ; LAB_0045c948
    PUSH 0x4                            ; 0045c932
    PUSH 0x0                            ; 0045c934
    CALL FUN_0040cc60                   ; 0045c936
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0045c93b
    CMP EAX,0x1                         ; 0045c93e
    JZ 0x0045c948                       ; 0045c941
        ;   XREF to: 0045c948 (CONDITIONAL_JUMP)  ; LAB_0045c948
    MOV ESI,0xf                         ; 0045c943
    CMP dword ptr [EDI + 0x28],0x4      ; 0045c948
        ;   Label: LAB_0045c948
    JNZ 0x0045c96e                      ; 0045c94c
        ;   XREF to: 0045c96e (CONDITIONAL_JUMP)  ; LAB_0045c96e
    PUSH 0x3f19999a                     ; 0045c94e
    CALL FUN_0040cd00                   ; 0045c953
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0045c958
    TEST EAX,EAX                        ; 0045c95b
    JZ 0x0045c96e                       ; 0045c95d
        ;   XREF to: 0045c96e (CONDITIONAL_JUMP)  ; LAB_0045c96e
    PUSH 0x1                            ; 0045c95f
    PUSH 0x0                            ; 0045c961
    CALL FUN_0040cc60                   ; 0045c963
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0045c968
    LEA ESI,[EAX + 0x9]                 ; 0045c96b
    PUSH 0x1                            ; 0045c96e
        ;   Label: LAB_0045c96e
    PUSH ESI                            ; 0045c970
    LEA EAX,[EBX + 0x158]               ; 0045c971
    PUSH EAX                            ; 0045c977
    CALL FUN_005247c0                   ; 0045c978
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    FLD float ptr [EBX + 0xc344]        ; 0045c97d
    FLDZ                                ; 0045c983
    ADD ESP,0xc                         ; 0045c985
    FCOMPP                              ; 0045c988
    FNSTSW AX                           ; 0045c98a
    SAHF                                ; 0045c98c
    JC 0x0045c8cd                       ; 0045c98d
        ;   XREF to: 0045c8cd (CONDITIONAL_JUMP)  ; LAB_0045c8cd
    MOV EDX,dword ptr [EBX + 0xc34c]    ; 0045c993
    PUSH EDX                            ; 0045c999
    MOV dword ptr [EBX + 0xc344],0x40000000 ; 0045c99a
    CALL FUN_005735a0                   ; 0045c9a4
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 0045c9a9
    TEST EAX,EAX                        ; 0045c9ac
    JNZ 0x0045c8cd                      ; 0045c9ae
        ;   XREF to: 0045c8cd (CONDITIONAL_JUMP)  ; LAB_0045c8cd
    PUSH EBX                            ; 0045c9b4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045c9b5
    CALL dword ptr [EAX + 0x14c]        ; 0045c9bb
    ADD ESP,0x4                         ; 0045c9c1
    PUSH EDI                            ; 0045c9c4
    PUSH EBX                            ; 0045c9c5
    CALL FUN_004a0f00                   ; 0045c9c6
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 0045c9cb
    POP EBP                             ; 0045c9ce
    POP EDI                             ; 0045c9cf
    POP ESI                             ; 0045c9d0
    POP EBX                             ; 0045c9d1
    RET                                 ; 0045c9d2

