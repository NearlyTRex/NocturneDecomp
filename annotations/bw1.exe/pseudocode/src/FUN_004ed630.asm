; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ed630(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_hickboy_dfm_005e4c79
;   TerminatedCString s_depute_dfm_005e4c85
;   TerminatedCString s_hickho_dfm_005e4c90
;   TerminatedCString s_hickgirl_dfm_005e4c9b
;   TerminatedCString s_hickdad_dfm_005e4ca8
;   TerminatedCString s_preacher_dfm_005e4cb4
;   TerminatedCString s_Bip01_R_UpperArm_005e4cc1
;   TerminatedCString s_Bip01_Head_005e4cd2
;   TerminatedCString s_Bip01_L_Foot_005e4cdd
;   TerminatedCString s_Bip01_R_Foot_005e4cea
;   TerminatedCString s_Bip01_R_Hand_005e4cf7
;   TerminatedCString s_Bip01_L_Hand_005e4d04
;   TerminatedCString s_Bip01_Spine1_005e4d11
;   TerminatedCString s_gunup_005e4d1e
;   undefined4 DAT_01d06b8c
;
; Called Functions:
;   FUN_005240c0
;   FUN_00524a00
;   FUN_00531720
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569f30
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed630
        ;   Label: FUN_004ed630
    PUSH ESI                            ; 004ed631
    PUSH EDI                            ; 004ed632
    PUSH EBP                            ; 004ed633
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ed634
    LEA EAX,[EBX + 0x158]               ; 004ed638
    PUSH EAX                            ; 004ed63e
    CALL FUN_00569b20                   ; 004ed63f
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004ed644
    PUSH 0x5e4c79                       ; 004ed647 | = "hickboy.dfm"
    LEA EAX,[EBX + 0x24a8]              ; 004ed64c
    PUSH EAX                            ; 004ed652
    MOV dword ptr [EBX + 0x1fe68],0x6   ; 004ed653
    MOV ESI,EAX                         ; 004ed65d
    CALL FUN_005c04e0                   ; 004ed65f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004ed664
    TEST EAX,EAX                        ; 004ed667
    JNZ 0x004ed671                      ; 004ed669
        ;   XREF to: 004ed671 (CONDITIONAL_JUMP)  ; LAB_004ed671
    MOV dword ptr [EBX + 0x1fe68],EAX   ; 004ed66b
    PUSH 0x5e4c85                       ; 004ed671 | = "depute.dfm"
        ;   Label: LAB_004ed671
    PUSH ESI                            ; 004ed676
    CALL FUN_005c04e0                   ; 004ed677
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004ed67c
    TEST EAX,EAX                        ; 004ed67f
    JNZ 0x004ed68d                      ; 004ed681
        ;   XREF to: 004ed68d (CONDITIONAL_JUMP)  ; LAB_004ed68d
    MOV dword ptr [EBX + 0x1fe68],0x1   ; 004ed683
    PUSH 0x5e4c90                       ; 004ed68d | = "hickho.dfm"
        ;   Label: LAB_004ed68d
    PUSH ESI                            ; 004ed692
    CALL FUN_005c04e0                   ; 004ed693
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004ed698
    TEST EAX,EAX                        ; 004ed69b
    JNZ 0x004ed6a9                      ; 004ed69d
        ;   XREF to: 004ed6a9 (CONDITIONAL_JUMP)  ; LAB_004ed6a9
    MOV dword ptr [EBX + 0x1fe68],0x2   ; 004ed69f
    PUSH 0x5e4c9b                       ; 004ed6a9 | = "hickgirl.dfm"
        ;   Label: LAB_004ed6a9
    PUSH ESI                            ; 004ed6ae
    CALL FUN_005c04e0                   ; 004ed6af
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004ed6b4
    TEST EAX,EAX                        ; 004ed6b7
    JNZ 0x004ed6c5                      ; 004ed6b9
        ;   XREF to: 004ed6c5 (CONDITIONAL_JUMP)  ; LAB_004ed6c5
    MOV dword ptr [EBX + 0x1fe68],0x4   ; 004ed6bb
    PUSH 0x5e4ca8                       ; 004ed6c5 | = "hickdad.dfm"
        ;   Label: LAB_004ed6c5
    PUSH ESI                            ; 004ed6ca
    CALL FUN_005c04e0                   ; 004ed6cb
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004ed6d0
    TEST EAX,EAX                        ; 004ed6d3
    JNZ 0x004ed6e1                      ; 004ed6d5
        ;   XREF to: 004ed6e1 (CONDITIONAL_JUMP)  ; LAB_004ed6e1
    MOV dword ptr [EBX + 0x1fe68],0x5   ; 004ed6d7
    PUSH 0x5e4cb4                       ; 004ed6e1 | = "preacher.dfm"
        ;   Label: LAB_004ed6e1
    PUSH ESI                            ; 004ed6e6
    CALL FUN_005c04e0                   ; 004ed6e7
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004ed6ec
    TEST EAX,EAX                        ; 004ed6ef
    JNZ 0x004ed6fd                      ; 004ed6f1
        ;   XREF to: 004ed6fd (CONDITIONAL_JUMP)  ; LAB_004ed6fd
    MOV dword ptr [EBX + 0x1fe68],0x3   ; 004ed6f3
    LEA EDI,[EBX + 0x158]               ; 004ed6fd
        ;   Label: LAB_004ed6fd
    PUSH EDI                            ; 004ed703
    CALL FUN_00569f30                   ; 004ed704
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004ed709
    PUSH EDI                            ; 004ed70c
    MOV ESI,EAX                         ; 004ed70d
    MOV EBP,EAX                         ; 004ed70f
    CALL FUN_00524a00                   ; 004ed711
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 004ed716
    PUSH 0x1                            ; 004ed719
    PUSH 0x5e4cc1                       ; 004ed71b | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004ed720
    MOV EDI,EAX                         ; 004ed721
    CALL FUN_005634f0                   ; 004ed723
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed728
    PUSH 0x1                            ; 004ed72b
    PUSH 0x5e4cd2                       ; 004ed72d | = "Bip01 Head"
    PUSH ESI                            ; 004ed732
    MOV dword ptr [EBX + 0x1fe80],EAX   ; 004ed733
    CALL FUN_005634f0                   ; 004ed739
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed73e
    PUSH 0x1                            ; 004ed741
    PUSH 0x5e4cdd                       ; 004ed743 | = "Bip01 L Foot"
    PUSH ESI                            ; 004ed748
    MOV dword ptr [EBX + 0x1fe7c],EAX   ; 004ed749
    CALL FUN_005634f0                   ; 004ed74f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed754
    PUSH 0x1                            ; 004ed757
    PUSH 0x5e4cea                       ; 004ed759 | = "Bip01 R Foot"
    PUSH ESI                            ; 004ed75e
    MOV dword ptr [EBX + 0x1fe84],EAX   ; 004ed75f
    CALL FUN_005634f0                   ; 004ed765
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed76a
    PUSH 0x1                            ; 004ed76d
    PUSH 0x5e4cf7                       ; 004ed76f | = "Bip01 R Hand"
    PUSH ESI                            ; 004ed774
    MOV dword ptr [EBX + 0x1fe88],EAX   ; 004ed775
    CALL FUN_005634f0                   ; 004ed77b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed780
    MOV EDX,dword ptr [EBX + 0x1fe68]   ; 004ed783
    MOV dword ptr [EBX + 0x2620],EAX    ; 004ed789
    CMP EDX,0x1                         ; 004ed78f
    JZ 0x004ed7aa                       ; 004ed792
        ;   XREF to: 004ed7aa (CONDITIONAL_JUMP)  ; LAB_004ed7aa
    PUSH 0x1                            ; 004ed794
    PUSH 0x5e4d04                       ; 004ed796 | = "Bip01 L Hand"
    PUSH ESI                            ; 004ed79b
    CALL FUN_005634f0                   ; 004ed79c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed7a1
    MOV dword ptr [EBX + 0x25a8],EAX    ; 004ed7a4
    PUSH 0x1                            ; 004ed7aa
        ;   Label: LAB_004ed7aa
    PUSH 0x5e4d11                       ; 004ed7ac | = "Bip01 Spine1"
    PUSH EBP                            ; 004ed7b1
    CALL FUN_005634f0                   ; 004ed7b2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004ed7b7
    MOV ECX,dword ptr [EBX + 0x1fe68]   ; 004ed7ba
    MOV dword ptr [EBX + 0x2750],EAX    ; 004ed7c0
    CMP ECX,0x1                         ; 004ed7c6
    JZ 0x004ed7e3                       ; 004ed7c9
        ;   XREF to: 004ed7e3 (CONDITIONAL_JUMP)  ; LAB_004ed7e3
    PUSH EBX                            ; 004ed7cb
        ;   Label: LAB_004ed7cb
    CALL FUN_00531720                   ; 004ed7cc
        ;   XREF to: 00531720 (UNCONDITIONAL_CALL)  ; undefined FUN_00531720()
    ADD ESP,0x4                         ; 004ed7d1
    MOV dword ptr [EBX + 0x1fe60],0x0   ; 004ed7d4
    POP EBP                             ; 004ed7de
    POP EDI                             ; 004ed7df
    POP ESI                             ; 004ed7e0
    POP EBX                             ; 004ed7e1
    RET                                 ; 004ed7e2
    PUSH ECX                            ; 004ed7e3
        ;   Label: LAB_004ed7e3
    PUSH 0x5e4d1e                       ; 004ed7e4 | = "gunup"
    PUSH EDI                            ; 004ed7e9
    CALL FUN_005240c0                   ; 004ed7ea
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 004ed7ef
    MOV [0x01d06b8c],EAX                ; 004ed7f2 | DAT_01d06b8c
    JMP 0x004ed7cb                      ; 004ed7f7
        ;   XREF to: 004ed7cb (UNCONDITIONAL_JUMP)  ; LAB_004ed7cb

