; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6770(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005c545d
;   TerminatedCString s_Bip01_L_ForeArm_005c5468
;   TerminatedCString s_Bip01_R_ForeArm_005c5478
;   TerminatedCString s_Bip01_L_UpperArm_005c5488
;   TerminatedCString s_Bip01_R_UpperArm_005c5499
;   TerminatedCString s_Bip01_L_Foot_005c54aa
;   TerminatedCString s_Bip01_R_Foot_005c54b7
;   TerminatedCString s_Bip01_L_Hand_005c54c4
;   TerminatedCString s_Bip01_R_Hand_005c54d1
;   TerminatedCString s_Bip01_Spine_005c54de
;   TerminatedCString s_Bip01_Spine1_005c54ea
;   TerminatedCString s_Bip01_Spine2_005c54f7
;   TerminatedCString s_Bip01_Head_005c5504
;   TerminatedCString s_Bip01_L_UpperArm_005c550f
;   TerminatedCString s_Bip01_R_UpperArm_005c5520
;   ... and 25 more
;
; Called Functions:
;   FUN_0040ce40
;   FUN_00489110
;   FUN_00548090
;   FUN_0054a310
;   FUN_0054e6b0
;   FUN_0054ea40
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6770
        ;   Label: FUN_004d6770
    PUSH ESI                            ; 004d6771
    SUB ESP,0x4                         ; 004d6772
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d6775
    PUSH EDI                            ; 004d6779
    PUSH EBX                            ; 004d677a
    CALL FUN_00489110                   ; 004d677b
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 004d6780
    LEA EDI,[EBX + 0x158]               ; 004d6783
    PUSH EDI                            ; 004d6789
    CALL FUN_0054e6b0                   ; 004d678a
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 004d678f
    PUSH EDI                            ; 004d6792
    CALL FUN_0054eac0                   ; 004d6793
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 004d6798
    PUSH 0x1                            ; 004d679b
    PUSH 0x5c545d                       ; 004d679d | = "Bip01 Head"
    PUSH EAX                            ; 004d67a2
    MOV ESI,EAX                         ; 004d67a3
    CALL FUN_00548090                   ; 004d67a5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d67aa
    PUSH 0x1                            ; 004d67ad
    PUSH 0x5c5468                       ; 004d67af | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004d67b4
    MOV [0x01d5bc0c],EAX                ; 004d67b5 | DAT_01d5bc0c
    CALL FUN_00548090                   ; 004d67ba
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d67bf
    PUSH 0x1                            ; 004d67c2
    PUSH 0x5c5478                       ; 004d67c4 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004d67c9
    MOV [0x01d5bc18],EAX                ; 004d67ca | DAT_01d5bc18
    CALL FUN_00548090                   ; 004d67cf
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d67d4
    PUSH 0x1                            ; 004d67d7
    PUSH 0x5c5488                       ; 004d67d9 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004d67de
    MOV [0x01d5bc1c],EAX                ; 004d67df | DAT_01d5bc1c
    CALL FUN_00548090                   ; 004d67e4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d67e9
    PUSH 0x1                            ; 004d67ec
    PUSH 0x5c5499                       ; 004d67ee | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004d67f3
    MOV [0x01d5bc20],EAX                ; 004d67f4 | DAT_01d5bc20
    CALL FUN_00548090                   ; 004d67f9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d67fe
    PUSH 0x1                            ; 004d6801
    PUSH 0x5c54aa                       ; 004d6803 | = "Bip01 L Foot"
    PUSH ESI                            ; 004d6808
    MOV [0x01d5bc24],EAX                ; 004d6809 | DAT_01d5bc24
    CALL FUN_00548090                   ; 004d680e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d6813
    PUSH 0x1                            ; 004d6816
    PUSH 0x5c54b7                       ; 004d6818 | = "Bip01 R Foot"
    PUSH ESI                            ; 004d681d
    MOV [0x01d5bc28],EAX                ; 004d681e | DAT_01d5bc28
    CALL FUN_00548090                   ; 004d6823
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d6828
    PUSH 0x1                            ; 004d682b
    PUSH 0x5c54c4                       ; 004d682d | = "Bip01 L Hand"
    PUSH ESI                            ; 004d6832
    MOV [0x01d5bc2c],EAX                ; 004d6833 | DAT_01d5bc2c
    CALL FUN_00548090                   ; 004d6838
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d683d
    MOV [0x01d5bc10],EAX                ; 004d6840 | DAT_01d5bc10
    PUSH 0x1                            ; 004d6845
    PUSH 0x5c54d1                       ; 004d6847 | = "Bip01 R Hand"
    PUSH ESI                            ; 004d684c
    CALL FUN_00548090                   ; 004d684d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d6852
    PUSH 0x1                            ; 004d6855
    PUSH 0x5c54de                       ; 004d6857 | = "Bip01 Spine"
    PUSH ESI                            ; 004d685c
    MOV [0x01d5bc14],EAX                ; 004d685d | DAT_01d5bc14
    CALL FUN_00548090                   ; 004d6862
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d6867
    PUSH 0x1                            ; 004d686a
    PUSH 0x5c54ea                       ; 004d686c | = "Bip01 Spine1"
    PUSH ESI                            ; 004d6871
    MOV [0x01d5bc30],EAX                ; 004d6872 | DAT_01d5bc30
    CALL FUN_00548090                   ; 004d6877
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d687c
    PUSH 0x1                            ; 004d687f
    PUSH 0x5c54f7                       ; 004d6881 | = "Bip01 Spine2"
    PUSH ESI                            ; 004d6886
    MOV [0x01d5bc34],EAX                ; 004d6887 | DAT_01d5bc34
    CALL FUN_00548090                   ; 004d688c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d6891
    PUSH 0x1                            ; 004d6894
    PUSH 0x5c5504                       ; 004d6896 | = "Bip01 Head"
    PUSH ESI                            ; 004d689b
    MOV [0x01d5bc38],EAX                ; 004d689c | DAT_01d5bc38
    CALL FUN_00548090                   ; 004d68a1
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d68a6
    PUSH 0x1                            ; 004d68a9
    PUSH 0x5c550f                       ; 004d68ab | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004d68b0
    MOV [0x01d5bc0c],EAX                ; 004d68b1 | DAT_01d5bc0c
    CALL FUN_00548090                   ; 004d68b6
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d68bb
    PUSH 0x1                            ; 004d68be
    PUSH 0x5c5520                       ; 004d68c0 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004d68c5
    MOV [0x01d5bc20],EAX                ; 004d68c6 | DAT_01d5bc20
    CALL FUN_00548090                   ; 004d68cb
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d68d0
    PUSH 0x1                            ; 004d68d3
    PUSH 0x5c5531                       ; 004d68d5 | = "Bip01 Spine"
    PUSH ESI                            ; 004d68da
    MOV [0x01d5bc24],EAX                ; 004d68db | DAT_01d5bc24
    CALL FUN_00548090                   ; 004d68e0
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d68e5
    PUSH 0x1                            ; 004d68e8
    PUSH 0x5c553d                       ; 004d68ea | = "Bip01 Spine2"
    PUSH ESI                            ; 004d68ef
    MOV [0x01d5bc30],EAX                ; 004d68f0 | DAT_01d5bc30
    CALL FUN_00548090                   ; 004d68f5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004d68fa
    PUSH EDI                            ; 004d68fd
    MOV [0x01d5bc38],EAX                ; 004d68fe | DAT_01d5bc38
    CALL FUN_0054ea40                   ; 004d6903
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    MOV ESI,EAX                         ; 004d6908
    ADD ESP,0x4                         ; 004d690a
    POP EDI                             ; 004d690d
    PUSH 0x1                            ; 004d690e
    PUSH 0x5c554a                       ; 004d6910 | = "larm01"
    PUSH EAX                            ; 004d6915
    CALL FUN_0054a310                   ; 004d6916
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d691b
    PUSH 0x1                            ; 004d691e
    PUSH 0x5c5551                       ; 004d6920 | = "l4arm01"
    PUSH ESI                            ; 004d6925
    MOV dword ptr [EBX + 0xd060],EAX    ; 004d6926
    CALL FUN_0054a310                   ; 004d692c
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d6931
    PUSH 0x1                            ; 004d6934
    PUSH 0x5c5559                       ; 004d6936 | = "rarm01"
    PUSH ESI                            ; 004d693b
    MOV dword ptr [EBX + 0xd064],EAX    ; 004d693c
    CALL FUN_0054a310                   ; 004d6942
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d6947
    PUSH 0x1                            ; 004d694a
    PUSH 0x5c5560                       ; 004d694c | = "r4arm01"
    PUSH ESI                            ; 004d6951
    MOV dword ptr [EBX + 0xd068],EAX    ; 004d6952
    CALL FUN_0054a310                   ; 004d6958
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d695d
    PUSH 0x1                            ; 004d6960
    PUSH 0x5c5568                       ; 004d6962 | = "rthigh01"
    PUSH ESI                            ; 004d6967
    MOV dword ptr [EBX + 0xd06c],EAX    ; 004d6968
    CALL FUN_0054a310                   ; 004d696e
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d6973
    PUSH 0x1                            ; 004d6976
    PUSH 0x5c5571                       ; 004d6978 | = "rshin01"
    PUSH ESI                            ; 004d697d
    MOV dword ptr [EBX + 0xd070],EAX    ; 004d697e
    CALL FUN_0054a310                   ; 004d6984
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d6989
    PUSH 0x1                            ; 004d698c
    PUSH 0x5c5579                       ; 004d698e | = "lthigh01"
    PUSH ESI                            ; 004d6993
    MOV dword ptr [EBX + 0xd074],EAX    ; 004d6994
    CALL FUN_0054a310                   ; 004d699a
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d699f
    PUSH 0x1                            ; 004d69a2
    PUSH 0x5c5582                       ; 004d69a4 | = "lshin01"
    PUSH ESI                            ; 004d69a9
    MOV dword ptr [EBX + 0xd078],EAX    ; 004d69aa
    CALL FUN_0054a310                   ; 004d69b0
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d69b5
    PUSH 0x1                            ; 004d69b8
    PUSH 0x5c558a                       ; 004d69ba | = "ass01"
    PUSH ESI                            ; 004d69bf
    MOV dword ptr [EBX + 0xd07c],EAX    ; 004d69c0
    CALL FUN_0054a310                   ; 004d69c6
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d69cb
    MOV dword ptr [EBX + 0xd080],EAX    ; 004d69ce
    PUSH 0x1                            ; 004d69d4
    PUSH 0x5c5590                       ; 004d69d6 | = "torso01"
    PUSH ESI                            ; 004d69db
    CALL FUN_0054a310                   ; 004d69dc
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 004d69e1
    PUSH 0x1                            ; 004d69e4
    PUSH 0x5c5598                       ; 004d69e6 | = "head01"
    PUSH ESI                            ; 004d69eb
    MOV dword ptr [EBX + 0xd084],EAX    ; 004d69ec
    CALL FUN_0054a310                   ; 004d69f2
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    MOV dword ptr [EBX + 0xd054],0x0    ; 004d69f7
    MOV dword ptr [EBX + 0xd058],0x0    ; 004d6a01
    MOV dword ptr [EBX + 0xd088],EAX    ; 004d6a0b
    MOV EAX,[0x01d5bc10]                ; 004d6a11 | DAT_01d5bc10
    MOV dword ptr [EBX + 0x25a8],EAX    ; 004d6a16
    MOV EAX,dword ptr [EBX + 0xd064]    ; 004d6a1c
    MOV dword ptr [EBX + 0x25ac],EAX    ; 004d6a22
    MOV EAX,[0x01d5bc14]                ; 004d6a28 | DAT_01d5bc14
    ADD ESP,0xc                         ; 004d6a2d
    MOV dword ptr [EBX + 0x2620],EAX    ; 004d6a30
    PUSH 0x41a00000                     ; 004d6a36
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 004d6a3b
    PUSH 0x41200000                     ; 004d6a41
    MOV dword ptr [EBX + 0x2624],EAX    ; 004d6a46
    CALL FUN_0040ce40                   ; 004d6a4c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 004d6a51
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d6a55
    MOV dword ptr [EBX + 0xd05c],EAX    ; 004d6a59
    ADD ESP,0x8                         ; 004d6a5f
    ADD ESP,0x4                         ; 004d6a62
    POP ESI                             ; 004d6a65
    POP EBX                             ; 004d6a66
    RET                                 ; 004d6a67

