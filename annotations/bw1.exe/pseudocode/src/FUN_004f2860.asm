; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2860(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005e5497
;   TerminatedCString s_Bip01_L_ForeArm_005e54a2
;   TerminatedCString s_Bip01_R_ForeArm_005e54b2
;   TerminatedCString s_Bip01_L_UpperArm_005e54c2
;   TerminatedCString s_Bip01_R_UpperArm_005e54d3
;   TerminatedCString s_Bip01_L_Foot_005e54e4
;   TerminatedCString s_Bip01_R_Foot_005e54f1
;   TerminatedCString s_Bip01_L_Hand_005e54fe
;   TerminatedCString s_Bip01_R_Hand_005e550b
;   TerminatedCString s_Bip01_Spine_005e5518
;   TerminatedCString s_Bip01_Spine1_005e5524
;   TerminatedCString s_Bip01_Spine2_005e5531
;   TerminatedCString s_Bip01_Head_005e553e
;   TerminatedCString s_Bip01_L_UpperArm_005e5549
;   TerminatedCString s_Bip01_R_UpperArm_005e555a
;   ... and 25 more
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2860
        ;   Label: FUN_004f2860
    PUSH ESI                            ; 004f2861
    SUB ESP,0x4                         ; 004f2862
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f2865
    PUSH EDI                            ; 004f2869
    PUSH EBX                            ; 004f286a
    CALL FUN_004a0510                   ; 004f286b
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 004f2870
    LEA EDI,[EBX + 0x158]               ; 004f2873
    PUSH EDI                            ; 004f2879
    CALL FUN_00569b20                   ; 004f287a
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004f287f
    PUSH EDI                            ; 004f2882
    CALL FUN_00569f30                   ; 004f2883
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004f2888
    PUSH 0x1                            ; 004f288b
    PUSH 0x5e5497                       ; 004f288d | = "Bip01 Head"
    PUSH EAX                            ; 004f2892
    MOV ESI,EAX                         ; 004f2893
    CALL FUN_005634f0                   ; 004f2895
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f289a
    PUSH 0x1                            ; 004f289d
    PUSH 0x5e54a2                       ; 004f289f | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004f28a4
    MOV [0x01d06cf8],EAX                ; 004f28a5 | DAT_01d06cf8
    CALL FUN_005634f0                   ; 004f28aa
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f28af
    PUSH 0x1                            ; 004f28b2
    PUSH 0x5e54b2                       ; 004f28b4 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004f28b9
    MOV [0x01d06d04],EAX                ; 004f28ba | DAT_01d06d04
    CALL FUN_005634f0                   ; 004f28bf
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f28c4
    PUSH 0x1                            ; 004f28c7
    PUSH 0x5e54c2                       ; 004f28c9 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004f28ce
    MOV [0x01d06d08],EAX                ; 004f28cf | DAT_01d06d08
    CALL FUN_005634f0                   ; 004f28d4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f28d9
    PUSH 0x1                            ; 004f28dc
    PUSH 0x5e54d3                       ; 004f28de | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004f28e3
    MOV [0x01d06d0c],EAX                ; 004f28e4 | DAT_01d06d0c
    CALL FUN_005634f0                   ; 004f28e9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f28ee
    PUSH 0x1                            ; 004f28f1
    PUSH 0x5e54e4                       ; 004f28f3 | = "Bip01 L Foot"
    PUSH ESI                            ; 004f28f8
    MOV [0x01d06d10],EAX                ; 004f28f9 | DAT_01d06d10
    CALL FUN_005634f0                   ; 004f28fe
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f2903
    PUSH 0x1                            ; 004f2906
    PUSH 0x5e54f1                       ; 004f2908 | = "Bip01 R Foot"
    PUSH ESI                            ; 004f290d
    MOV [0x01d06d14],EAX                ; 004f290e | DAT_01d06d14
    CALL FUN_005634f0                   ; 004f2913
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f2918
    PUSH 0x1                            ; 004f291b
    PUSH 0x5e54fe                       ; 004f291d | = "Bip01 L Hand"
    PUSH ESI                            ; 004f2922
    MOV [0x01d06d18],EAX                ; 004f2923 | DAT_01d06d18
    CALL FUN_005634f0                   ; 004f2928
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f292d
    MOV [0x01d06cfc],EAX                ; 004f2930 | DAT_01d06cfc
    PUSH 0x1                            ; 004f2935
    PUSH 0x5e550b                       ; 004f2937 | = "Bip01 R Hand"
    PUSH ESI                            ; 004f293c
    CALL FUN_005634f0                   ; 004f293d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f2942
    PUSH 0x1                            ; 004f2945
    PUSH 0x5e5518                       ; 004f2947 | = "Bip01 Spine"
    PUSH ESI                            ; 004f294c
    MOV [0x01d06d00],EAX                ; 004f294d | DAT_01d06d00
    CALL FUN_005634f0                   ; 004f2952
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f2957
    PUSH 0x1                            ; 004f295a
    PUSH 0x5e5524                       ; 004f295c | = "Bip01 Spine1"
    PUSH ESI                            ; 004f2961
    MOV [0x01d06d1c],EAX                ; 004f2962 | DAT_01d06d1c
    CALL FUN_005634f0                   ; 004f2967
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f296c
    PUSH 0x1                            ; 004f296f
    PUSH 0x5e5531                       ; 004f2971 | = "Bip01 Spine2"
    PUSH ESI                            ; 004f2976
    MOV [0x01d06d20],EAX                ; 004f2977 | DAT_01d06d20
    CALL FUN_005634f0                   ; 004f297c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f2981
    PUSH 0x1                            ; 004f2984
    PUSH 0x5e553e                       ; 004f2986 | = "Bip01 Head"
    PUSH ESI                            ; 004f298b
    MOV [0x01d06d24],EAX                ; 004f298c | DAT_01d06d24
    CALL FUN_005634f0                   ; 004f2991
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f2996
    PUSH 0x1                            ; 004f2999
    PUSH 0x5e5549                       ; 004f299b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004f29a0
    MOV [0x01d06cf8],EAX                ; 004f29a1 | DAT_01d06cf8
    CALL FUN_005634f0                   ; 004f29a6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f29ab
    PUSH 0x1                            ; 004f29ae
    PUSH 0x5e555a                       ; 004f29b0 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004f29b5
    MOV [0x01d06d0c],EAX                ; 004f29b6 | DAT_01d06d0c
    CALL FUN_005634f0                   ; 004f29bb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f29c0
    PUSH 0x1                            ; 004f29c3
    PUSH 0x5e556b                       ; 004f29c5 | = "Bip01 Spine"
    PUSH ESI                            ; 004f29ca
    MOV [0x01d06d10],EAX                ; 004f29cb | DAT_01d06d10
    CALL FUN_005634f0                   ; 004f29d0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f29d5
    PUSH 0x1                            ; 004f29d8
    PUSH 0x5e5577                       ; 004f29da | = "Bip01 Spine2"
    PUSH ESI                            ; 004f29df
    MOV [0x01d06d1c],EAX                ; 004f29e0 | DAT_01d06d1c
    CALL FUN_005634f0                   ; 004f29e5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004f29ea
    PUSH EDI                            ; 004f29ed
    MOV [0x01d06d24],EAX                ; 004f29ee | DAT_01d06d24
    CALL FUN_00569eb0                   ; 004f29f3
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV ESI,EAX                         ; 004f29f8
    ADD ESP,0x4                         ; 004f29fa
    POP EDI                             ; 004f29fd
    PUSH 0x1                            ; 004f29fe
    PUSH 0x5e5584                       ; 004f2a00 | = "larm01"
    PUSH EAX                            ; 004f2a05
    CALL FUN_00565780                   ; 004f2a06
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a0b
    PUSH 0x1                            ; 004f2a0e
    PUSH 0x5e558b                       ; 004f2a10 | = "l4arm01"
    PUSH ESI                            ; 004f2a15
    MOV dword ptr [EBX + 0xc274],EAX    ; 004f2a16
    CALL FUN_00565780                   ; 004f2a1c
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a21
    PUSH 0x1                            ; 004f2a24
    PUSH 0x5e5593                       ; 004f2a26 | = "rarm01"
    PUSH ESI                            ; 004f2a2b
    MOV dword ptr [EBX + 0xc278],EAX    ; 004f2a2c
    CALL FUN_00565780                   ; 004f2a32
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a37
    PUSH 0x1                            ; 004f2a3a
    PUSH 0x5e559a                       ; 004f2a3c | = "r4arm01"
    PUSH ESI                            ; 004f2a41
    MOV dword ptr [EBX + 0xc27c],EAX    ; 004f2a42
    CALL FUN_00565780                   ; 004f2a48
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a4d
    PUSH 0x1                            ; 004f2a50
    PUSH 0x5e55a2                       ; 004f2a52 | = "rthigh01"
    PUSH ESI                            ; 004f2a57
    MOV dword ptr [EBX + 0xc280],EAX    ; 004f2a58
    CALL FUN_00565780                   ; 004f2a5e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a63
    PUSH 0x1                            ; 004f2a66
    PUSH 0x5e55ab                       ; 004f2a68 | = "rshin01"
    PUSH ESI                            ; 004f2a6d
    MOV dword ptr [EBX + 0xc284],EAX    ; 004f2a6e
    CALL FUN_00565780                   ; 004f2a74
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a79
    PUSH 0x1                            ; 004f2a7c
    PUSH 0x5e55b3                       ; 004f2a7e | = "lthigh01"
    PUSH ESI                            ; 004f2a83
    MOV dword ptr [EBX + 0xc288],EAX    ; 004f2a84
    CALL FUN_00565780                   ; 004f2a8a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2a8f
    PUSH 0x1                            ; 004f2a92
    PUSH 0x5e55bc                       ; 004f2a94 | = "lshin01"
    PUSH ESI                            ; 004f2a99
    MOV dword ptr [EBX + 0xc28c],EAX    ; 004f2a9a
    CALL FUN_00565780                   ; 004f2aa0
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2aa5
    PUSH 0x1                            ; 004f2aa8
    PUSH 0x5e55c4                       ; 004f2aaa | = "ass01"
    PUSH ESI                            ; 004f2aaf
    MOV dword ptr [EBX + 0xc290],EAX    ; 004f2ab0
    CALL FUN_00565780                   ; 004f2ab6
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2abb
    MOV dword ptr [EBX + 0xc294],EAX    ; 004f2abe
    PUSH 0x1                            ; 004f2ac4
    PUSH 0x5e55ca                       ; 004f2ac6 | = "torso01"
    PUSH ESI                            ; 004f2acb
    CALL FUN_00565780                   ; 004f2acc
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 004f2ad1
    PUSH 0x1                            ; 004f2ad4
    PUSH 0x5e55d2                       ; 004f2ad6 | = "head01"
    PUSH ESI                            ; 004f2adb
    MOV dword ptr [EBX + 0xc298],EAX    ; 004f2adc
    CALL FUN_00565780                   ; 004f2ae2
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    MOV dword ptr [EBX + 0xc268],0x0    ; 004f2ae7
    MOV dword ptr [EBX + 0xc26c],0x0    ; 004f2af1
    MOV dword ptr [EBX + 0xc29c],EAX    ; 004f2afb
    MOV EAX,[0x01d06cfc]                ; 004f2b01 | DAT_01d06cfc
    MOV dword ptr [EBX + 0x25a8],EAX    ; 004f2b06
    MOV EAX,dword ptr [EBX + 0xc278]    ; 004f2b0c
    MOV dword ptr [EBX + 0x25ac],EAX    ; 004f2b12
    MOV EAX,[0x01d06d00]                ; 004f2b18 | DAT_01d06d00
    ADD ESP,0xc                         ; 004f2b1d
    MOV dword ptr [EBX + 0x2620],EAX    ; 004f2b20
    PUSH 0x41a00000                     ; 004f2b26
    MOV EAX,dword ptr [EBX + 0xc280]    ; 004f2b2b
    PUSH 0x41200000                     ; 004f2b31
    MOV dword ptr [EBX + 0x2624],EAX    ; 004f2b36
    CALL FUN_0040cc00                   ; 004f2b3c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 004f2b41
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f2b45
    MOV dword ptr [EBX + 0xc270],EAX    ; 004f2b49
    ADD ESP,0x8                         ; 004f2b4f
    ADD ESP,0x4                         ; 004f2b52
    POP ESI                             ; 004f2b55
    POP EBX                             ; 004f2b56
    RET                                 ; 004f2b57

