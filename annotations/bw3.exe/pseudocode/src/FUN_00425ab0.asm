; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425ab0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005b79e5
;   TerminatedCString s_Bip01_L_Forearm_005b79f0
;   TerminatedCString s_Bip01_R_ForeArm_005b7a00
;   TerminatedCString s_Bip01_L_UpperArm_005b7a10
;   TerminatedCString s_Bip01_R_UpperArm_005b7a21
;   TerminatedCString s_Bip01_L_Foot_005b7a32
;   TerminatedCString s_Bip01_R_Foot_005b7a3f
;   TerminatedCString s_Bip01_L_Hand_005b7a4c
;   TerminatedCString s_Bip01_R_Hand_005b7a59
;   TerminatedCString s_Bip01_Spine_005b7a66
;   TerminatedCString s_Bip01_Spine2_005b7a72
;   TerminatedCString s_larm01_005b7a7f
;   TerminatedCString s_l4arm01_005b7a86
;   TerminatedCString s_rarm01_005b7a8e
;   TerminatedCString s_r4arm01_005b7a95
;   ... and 4 more
;
; Called Functions:
;   FUN_00489110
;   FUN_00548090
;   FUN_0054a310
;   FUN_0054e6b0
;   FUN_0054ea40
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425ab0
        ;   Label: FUN_00425ab0
    PUSH ESI                            ; 00425ab1
    PUSH EDI                            ; 00425ab2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00425ab3
    LEA EDI,[EBX + 0x158]               ; 00425ab7
    PUSH EDI                            ; 00425abd
    CALL FUN_0054e6b0                   ; 00425abe
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 00425ac3
    PUSH EDI                            ; 00425ac6
    CALL FUN_0054eac0                   ; 00425ac7
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00425acc
    PUSH 0x1                            ; 00425acf
    PUSH 0x5b79e5                       ; 00425ad1 | = "Bip01 Head"
    PUSH EAX                            ; 00425ad6
    MOV ESI,EAX                         ; 00425ad7
    CALL FUN_00548090                   ; 00425ad9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425ade
    PUSH 0x1                            ; 00425ae1
    PUSH 0x5b79f0                       ; 00425ae3 | = "Bip01 L Forearm"
    PUSH ESI                            ; 00425ae8
    MOV dword ptr [EBX + 0xd078],EAX    ; 00425ae9
    CALL FUN_00548090                   ; 00425aef
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425af4
    PUSH 0x1                            ; 00425af7
    PUSH 0x5b7a00                       ; 00425af9 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00425afe
    MOV dword ptr [EBX + 0xd084],EAX    ; 00425aff
    CALL FUN_00548090                   ; 00425b05
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b0a
    PUSH 0x1                            ; 00425b0d
    PUSH 0x5b7a10                       ; 00425b0f | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00425b14
    MOV dword ptr [EBX + 0xd088],EAX    ; 00425b15
    CALL FUN_00548090                   ; 00425b1b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b20
    PUSH 0x1                            ; 00425b23
    PUSH 0x5b7a21                       ; 00425b25 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00425b2a
    MOV dword ptr [EBX + 0xd08c],EAX    ; 00425b2b
    CALL FUN_00548090                   ; 00425b31
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b36
    PUSH 0x1                            ; 00425b39
    PUSH 0x5b7a32                       ; 00425b3b | = "Bip01 L Foot"
    PUSH ESI                            ; 00425b40
    MOV dword ptr [EBX + 0xd090],EAX    ; 00425b41
    CALL FUN_00548090                   ; 00425b47
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b4c
    PUSH 0x1                            ; 00425b4f
    PUSH 0x5b7a3f                       ; 00425b51 | = "Bip01 R Foot"
    PUSH ESI                            ; 00425b56
    MOV dword ptr [EBX + 0xd094],EAX    ; 00425b57
    CALL FUN_00548090                   ; 00425b5d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b62
    PUSH 0x1                            ; 00425b65
    PUSH 0x5b7a4c                       ; 00425b67 | = "Bip01 L Hand"
    PUSH ESI                            ; 00425b6c
    MOV dword ptr [EBX + 0xd098],EAX    ; 00425b6d
    CALL FUN_00548090                   ; 00425b73
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b78
    MOV dword ptr [EBX + 0xd07c],EAX    ; 00425b7b
    PUSH 0x1                            ; 00425b81
    PUSH 0x5b7a59                       ; 00425b83 | = "Bip01 R Hand"
    PUSH ESI                            ; 00425b88
    CALL FUN_00548090                   ; 00425b89
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425b8e
    PUSH 0x1                            ; 00425b91
    PUSH 0x5b7a66                       ; 00425b93 | = "Bip01 Spine"
    PUSH ESI                            ; 00425b98
    MOV dword ptr [EBX + 0xd080],EAX    ; 00425b99
    CALL FUN_00548090                   ; 00425b9f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425ba4
    PUSH 0x1                            ; 00425ba7
    PUSH 0x5b7a72                       ; 00425ba9 | = "Bip01 Spine2"
    PUSH ESI                            ; 00425bae
    MOV dword ptr [EBX + 0xd09c],EAX    ; 00425baf
    CALL FUN_00548090                   ; 00425bb5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00425bba
    PUSH EDI                            ; 00425bbd
    MOV dword ptr [EBX + 0xd0a0],EAX    ; 00425bbe
    CALL FUN_0054ea40                   ; 00425bc4
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 00425bc9
    PUSH 0x1                            ; 00425bcc
    PUSH 0x5b7a7f                       ; 00425bce | = "larm01"
    PUSH EAX                            ; 00425bd3
    MOV ESI,EAX                         ; 00425bd4
    MOV EDI,EAX                         ; 00425bd6
    CALL FUN_0054a310                   ; 00425bd8
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00425bdd
    PUSH 0x1                            ; 00425be0
    PUSH 0x5b7a86                       ; 00425be2 | = "l4arm01"
    PUSH ESI                            ; 00425be7
    MOV dword ptr [EBX + 0xd0a4],EAX    ; 00425be8
    CALL FUN_0054a310                   ; 00425bee
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00425bf3
    PUSH 0x1                            ; 00425bf6
    PUSH 0x5b7a8e                       ; 00425bf8 | = "rarm01"
    PUSH ESI                            ; 00425bfd
    MOV dword ptr [EBX + 0xd0a8],EAX    ; 00425bfe
    CALL FUN_0054a310                   ; 00425c04
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00425c09
    PUSH 0x0                            ; 00425c0c
    PUSH 0x5b7a95                       ; 00425c0e | = "r4arm01"
    PUSH ESI                            ; 00425c13
    MOV dword ptr [EBX + 0xd0ac],EAX    ; 00425c14
    CALL FUN_0054a310                   ; 00425c1a
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00425c1f
    MOV dword ptr [EBX + 0xd0b0],EAX    ; 00425c22
    TEST EAX,EAX                        ; 00425c28
    JGE 0x00425c36                      ; 00425c2a
        ;   XREF to: 00425c36 (CONDITIONAL_JUMP)  ; LAB_00425c36
    MOV dword ptr [EBX + 0xd0b0],0x3b   ; 00425c2c
    PUSH 0x0                            ; 00425c36
        ;   Label: LAB_00425c36
    PUSH 0x5b7a9d                       ; 00425c38 | = "waist01"
    PUSH EDI                            ; 00425c3d
    CALL FUN_0054a310                   ; 00425c3e
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00425c43
    PUSH 0x1                            ; 00425c46
    PUSH 0x5b7aa5                       ; 00425c48 | = "torso01"
    PUSH EDI                            ; 00425c4d
    MOV dword ptr [EBX + 0xd0b4],EAX    ; 00425c4e
    CALL FUN_0054a310                   ; 00425c54
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00425c59
    PUSH 0x1                            ; 00425c5c
    PUSH 0x5b7aad                       ; 00425c5e | = "head01"
    PUSH EDI                            ; 00425c63
    MOV dword ptr [EBX + 0xd0b8],EAX    ; 00425c64
    CALL FUN_0054a310                   ; 00425c6a
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    MOV dword ptr [EBX + 0x2384],0x0    ; 00425c6f
    MOV dword ptr [EBX + 0xd0bc],EAX    ; 00425c79
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 00425c7f
    MOV dword ptr [EBX + 0x25a8],EAX    ; 00425c85
    MOV EAX,dword ptr [EBX + 0xd0a8]    ; 00425c8b
    MOV dword ptr [EBX + 0x25ac],EAX    ; 00425c91
    MOV EAX,dword ptr [EBX + 0xd080]    ; 00425c97
    MOV dword ptr [EBX + 0x2620],EAX    ; 00425c9d
    ADD ESP,0xc                         ; 00425ca3
    MOV EAX,dword ptr [EBX + 0xd0b0]    ; 00425ca6
    PUSH EBX                            ; 00425cac
    MOV dword ptr [EBX + 0x2624],EAX    ; 00425cad
    CALL FUN_00489110                   ; 00425cb3
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    MOV ECX,dword ptr [EBX + 0xd0b4]    ; 00425cb8
    ADD ESP,0x4                         ; 00425cbe
    TEST ECX,ECX                        ; 00425cc1
    JL 0x00425ce6                       ; 00425cc3
        ;   XREF to: 00425ce6 (CONDITIONAL_JUMP)  ; LAB_00425ce6
    FLD float ptr [EBX + 0x3280]        ; 00425cc5
    FLDZ                                ; 00425ccb
    FCOMPP                              ; 00425ccd
    FNSTSW AX                           ; 00425ccf
    SAHF                                ; 00425cd1
    JBE 0x00425ce6                      ; 00425cd2
        ;   XREF to: 00425ce6 (CONDITIONAL_JUMP)  ; LAB_00425ce6
    FLD float ptr [EBX + 0x2490]        ; 00425cd4
    FADD double ptr [0x005b7ab7]        ; 00425cda | DAT_005b7ab7
    FSTP float ptr [EBX + 0x3280]       ; 00425ce0
    MOV dword ptr [EBX + 0xd074],0x0    ; 00425ce6
        ;   Label: LAB_00425ce6
    MOV dword ptr [EBX + 0xd0c8],0x0    ; 00425cf0
    MOV dword ptr [EBX + 0xd0cc],0x0    ; 00425cfa
    MOV ESI,dword ptr [EBX + 0x3268]    ; 00425d04
    MOV dword ptr [EBX + 0xd0c4],0x0    ; 00425d0a
    TEST ESI,ESI                        ; 00425d14
    JZ 0x00425d1c                       ; 00425d16
        ;   XREF to: 00425d1c (CONDITIONAL_JUMP)  ; LAB_00425d1c
    POP EDI                             ; 00425d18
    POP ESI                             ; 00425d19
    POP EBX                             ; 00425d1a
    RET                                 ; 00425d1b
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00425d1c
        ;   Label: LAB_00425d1c
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 00425d26
    MOV dword ptr [EBX + 0x2538],0x41a00000 ; 00425d30
    POP EDI                             ; 00425d3a
    POP ESI                             ; 00425d3b
    POP EBX                             ; 00425d3c
    RET                                 ; 00425d3d

