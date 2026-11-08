; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f780(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005cb436
;   TerminatedCString s_Bip01_L_Clavicle_005cb441
;   TerminatedCString s_Bip01_R_Clavicle_005cb452
;   TerminatedCString s_Bip01_L_UpperArm_005cb463
;   TerminatedCString s_Bip01_R_UpperArm_005cb474
;   TerminatedCString s_Bip01_L_ForeArm_005cb485
;   TerminatedCString s_Bip01_R_ForeArm_005cb495
;   TerminatedCString s_Bip01_L_Foot_005cb4a5
;   TerminatedCString s_Bip01_R_Foot_005cb4b2
;   TerminatedCString s_Bip01_L_Thigh_005cb4bf
;   TerminatedCString s_Bip01_R_Thigh_005cb4cd
;   TerminatedCString s_Bip01_L_Calf_005cb4db
;   TerminatedCString s_Bip01_R_Calf_005cb4e8
;   TerminatedCString s_Bip01_L_Hand_005cb4f5
;   TerminatedCString s_Bip01_R_Hand_005cb502
;   ... and 21 more
;
; Called Functions:
;   FUN_0044fd00
;   FUN_004ce4a0
;   FUN_00540e80
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f780
        ;   Label: FUN_0040f780
    PUSH ESI                            ; 0040f781
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040f782
    PUSH ESI                            ; 0040f786
    CALL FUN_004ce4a0                   ; 0040f787
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce4a0()
    ADD ESP,0x4                         ; 0040f78c
    LEA EAX,[ESI + 0x2b4]               ; 0040f78f
    PUSH EAX                            ; 0040f795
    CALL FUN_00547890                   ; 0040f796
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0040f79b
    PUSH 0x1                            ; 0040f79e
    PUSH 0x5cb436                       ; 0040f7a0 | = "Bip01 head"
    PUSH EAX                            ; 0040f7a5
    MOV EBX,EAX                         ; 0040f7a6
    CALL FUN_00540e80                   ; 0040f7a8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f7ad
    PUSH 0x1                            ; 0040f7b0
    PUSH 0x5cb441                       ; 0040f7b2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 0040f7b7
    MOV [0x007bc498],EAX                ; 0040f7b8 | DAT_007bc498
    CALL FUN_00540e80                   ; 0040f7bd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f7c2
    PUSH 0x1                            ; 0040f7c5
    PUSH 0x5cb452                       ; 0040f7c7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 0040f7cc
    MOV [0x007bc49c],EAX                ; 0040f7cd | DAT_007bc49c
    CALL FUN_00540e80                   ; 0040f7d2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f7d7
    PUSH 0x1                            ; 0040f7da
    PUSH 0x5cb463                       ; 0040f7dc | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0040f7e1
    MOV [0x007bc4a0],EAX                ; 0040f7e2 | DAT_007bc4a0
    CALL FUN_00540e80                   ; 0040f7e7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f7ec
    PUSH 0x1                            ; 0040f7ef
    PUSH 0x5cb474                       ; 0040f7f1 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0040f7f6
    MOV [0x007bc4a4],EAX                ; 0040f7f7 | DAT_007bc4a4
    CALL FUN_00540e80                   ; 0040f7fc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f801
    PUSH 0x1                            ; 0040f804
    PUSH 0x5cb485                       ; 0040f806 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0040f80b
    MOV [0x007bc4a8],EAX                ; 0040f80c | DAT_007bc4a8
    CALL FUN_00540e80                   ; 0040f811
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f816
    PUSH 0x1                            ; 0040f819
    PUSH 0x5cb495                       ; 0040f81b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0040f820
    MOV [0x007bc4ac],EAX                ; 0040f821 | DAT_007bc4ac
    CALL FUN_00540e80                   ; 0040f826
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f82b
    PUSH 0x1                            ; 0040f82e
    PUSH 0x5cb4a5                       ; 0040f830 | = "Bip01 L Foot"
    PUSH EBX                            ; 0040f835
    MOV [0x007bc4b0],EAX                ; 0040f836 | DAT_007bc4b0
    CALL FUN_00540e80                   ; 0040f83b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f840
    PUSH 0x1                            ; 0040f843
    PUSH 0x5cb4b2                       ; 0040f845 | = "Bip01 R Foot"
    PUSH EBX                            ; 0040f84a
    MOV [0x007bc4b4],EAX                ; 0040f84b | DAT_007bc4b4
    CALL FUN_00540e80                   ; 0040f850
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f855
    MOV [0x007bc4b8],EAX                ; 0040f858 | DAT_007bc4b8
    PUSH 0x1                            ; 0040f85d
    PUSH 0x5cb4bf                       ; 0040f85f | = "Bip01 L Thigh"
    PUSH EBX                            ; 0040f864
    CALL FUN_00540e80                   ; 0040f865
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f86a
    PUSH 0x1                            ; 0040f86d
    PUSH 0x5cb4cd                       ; 0040f86f | = "Bip01 R Thigh"
    PUSH EBX                            ; 0040f874
    MOV [0x007bc4bc],EAX                ; 0040f875 | DAT_007bc4bc
    CALL FUN_00540e80                   ; 0040f87a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f87f
    PUSH 0x1                            ; 0040f882
    PUSH 0x5cb4db                       ; 0040f884 | = "Bip01 L Calf"
    PUSH EBX                            ; 0040f889
    MOV [0x007bc4c0],EAX                ; 0040f88a | DAT_007bc4c0
    CALL FUN_00540e80                   ; 0040f88f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f894
    PUSH 0x1                            ; 0040f897
    PUSH 0x5cb4e8                       ; 0040f899 | = "Bip01 R Calf"
    PUSH EBX                            ; 0040f89e
    MOV [0x007bc4c4],EAX                ; 0040f89f | DAT_007bc4c4
    CALL FUN_00540e80                   ; 0040f8a4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f8a9
    PUSH 0x1                            ; 0040f8ac
    PUSH 0x5cb4f5                       ; 0040f8ae | = "Bip01 L Hand"
    PUSH EBX                            ; 0040f8b3
    MOV [0x007bc4c8],EAX                ; 0040f8b4 | DAT_007bc4c8
    CALL FUN_00540e80                   ; 0040f8b9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f8be
    PUSH 0x1                            ; 0040f8c1
    PUSH 0x5cb502                       ; 0040f8c3 | = "Bip01 R Hand"
    PUSH EBX                            ; 0040f8c8
    MOV [0x007bc4cc],EAX                ; 0040f8c9 | DAT_007bc4cc
    CALL FUN_00540e80                   ; 0040f8ce
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f8d3
    PUSH 0x1                            ; 0040f8d6
    PUSH 0x5cb50f                       ; 0040f8d8 | = "Bip01 Spine2"
    PUSH EBX                            ; 0040f8dd
    MOV [0x007bc4d0],EAX                ; 0040f8de | DAT_007bc4d0
    CALL FUN_00540e80                   ; 0040f8e3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f8e8
    PUSH 0x1                            ; 0040f8eb
    PUSH 0x5cb51c                       ; 0040f8ed | = "Bip01 Spine"
    PUSH EBX                            ; 0040f8f2
    MOV [0x007bc4d4],EAX                ; 0040f8f3 | DAT_007bc4d4
    CALL FUN_00540e80                   ; 0040f8f8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f8fd
    PUSH 0x1                            ; 0040f900
    PUSH 0x5cb528                       ; 0040f902 | = "Bip01 Spine1"
    PUSH EBX                            ; 0040f907
    MOV [0x007bc4d8],EAX                ; 0040f908 | DAT_007bc4d8
    CALL FUN_00540e80                   ; 0040f90d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0040f912
    MOV dword ptr [ESI + 0x25718],0x0   ; 0040f915
    PUSH 0x7bc51c                       ; 0040f91f | DAT_007bc51c
    MOV dword ptr [ESI + 0x27c0],EAX    ; 0040f924
    CALL FUN_0044fd00                   ; 0040f92a
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0040f92f
    POP ESI                             ; 0040f932
    POP EBX                             ; 0040f933
    RET                                 ; 0040f934

