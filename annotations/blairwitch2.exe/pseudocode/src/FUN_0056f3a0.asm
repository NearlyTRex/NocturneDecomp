; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f3a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_succubusx_dfm_005ebfb9
;   TerminatedCString s_hotdemonx_dfm_005ebfc7
;   TerminatedCString s_succubus_dfm_005ebfd5
;   TerminatedCString s_hotdemon_dfm_005ebfe2
;   TerminatedCString s_Bip01_Head_005ebfef
;   TerminatedCString s_Bip01_L_ForeArm_005ebffa
;   TerminatedCString s_Bip01_R_ForeArm_005ec00a
;   TerminatedCString s_Bip01_L_UpperArm_005ec01a
;   TerminatedCString s_Bip01_R_UpperArm_005ec02b
;   TerminatedCString s_Bip01_L_Foot_005ec03c
;   TerminatedCString s_Bip01_R_Foot_005ec049
;   TerminatedCString s_Bip01_L_Hand_005ec056
;   TerminatedCString s_Bip01_R_Hand_005ec063
;   TerminatedCString s_Bip01_Spine_005ec070
;   TerminatedCString s_Bip01_Spine1_005ec07c
;   ... and 22 more
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00540e80
;   FUN_00544e60
;   FUN_00544ee0
;   FUN_00546ae0
;   FUN_00547480
;   FUN_00547890
;   FUN_005478b0
;   FUN_005b14a0
;   FUN_005b1740
;   FUN_005b1780
;   FUN_005b6f80
;   FUN_005b70d0
;   FUN_005b71d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f3a0
        ;   Label: FUN_0056f3a0
    PUSH ESI                            ; 0056f3a1
    PUSH EDI                            ; 0056f3a2
    PUSH EBP                            ; 0056f3a3
    SUB ESP,0x8                         ; 0056f3a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0056f3a7
    MOV EDI,dword ptr [0x00616494]      ; 0056f3ab | DAT_00616494
    LEA ESI,[EBX + 0x10af8]             ; 0056f3b1
    MOV EDX,dword ptr [EDI + 0x18]      ; 0056f3b7 | DAT_01cb6918
    LEA EAX,[EBX + 0x2b4]               ; 0056f3ba
    TEST EDX,EDX                        ; 0056f3c0
    JZ 0x0056f6ae                       ; 0056f3c2
        ;   XREF to: 0056f6ae (CONDITIONAL_JUMP)  ; LAB_0056f6ae
    PUSH 0x5ebfd5                       ; 0056f3c8 | = "succubus.dfm"
    PUSH EAX                            ; 0056f3cd
    CALL FUN_005478b0                   ; 0056f3ce
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 0056f3d3
    PUSH 0x5ebfe2                       ; 0056f3d6 | = "hotdemon.dfm"
    PUSH ESI                            ; 0056f3db
        ;   Label: LAB_0056f3db
    CALL FUN_005478b0                   ; 0056f3dc
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 0056f3e1
    PUSH EBX                            ; 0056f3e4
    CALL FUN_00487eb0                   ; 0056f3e5
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 0056f3ea
    LEA EBP,[EBX + 0x2b4]               ; 0056f3ed
    PUSH EBP                            ; 0056f3f3
    CALL FUN_00547480                   ; 0056f3f4
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0056f3f9
    LEA EDI,[EBX + 0x10af8]             ; 0056f3fc
    PUSH EDI                            ; 0056f402
    CALL FUN_00547480                   ; 0056f403
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0056f408
    LEA ESI,[EBX + 0x12dac]             ; 0056f40b
    PUSH ESI                            ; 0056f411
    CALL FUN_005b14a0                   ; 0056f412
        ;   XREF to: 005b14a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b14a0()
    ADD ESP,0x4                         ; 0056f417
    PUSH EDI                            ; 0056f41a
    LEA EAX,[EBX + 0x30]                ; 0056f41b
    PUSH EAX                            ; 0056f41e
    MOV dword ptr [ESP + 0x8],EAX       ; 0056f41f
    LEA EAX,[EBX + 0x20]                ; 0056f423
    PUSH EAX                            ; 0056f426
    PUSH ESI                            ; 0056f427
    MOV dword ptr [ESP + 0x14],EAX      ; 0056f428
    CALL FUN_005b1740                   ; 0056f42c
        ;   XREF to: 005b1740 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1740()
    ADD ESP,0x10                        ; 0056f431
    PUSH EDI                            ; 0056f434
    PUSH dword ptr [EBX + 0x2574]       ; 0056f435
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056f43b
    PUSH 0x3d4ccccd                     ; 0056f43f
    PUSH EDX                            ; 0056f444
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056f445
    PUSH ECX                            ; 0056f449
    LEA EAX,[EBX + 0x2d0c]              ; 0056f44a
    PUSH EAX                            ; 0056f450
    CALL FUN_005b1780                   ; 0056f451
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1780()
    ADD ESP,0x18                        ; 0056f456
    PUSH EBP                            ; 0056f459
    CALL FUN_00547890                   ; 0056f45a
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0056f45f
    PUSH 0x1                            ; 0056f462
    PUSH 0x5ebfef                       ; 0056f464 | = "Bip01 Head"
    PUSH EAX                            ; 0056f469
    MOV ESI,EAX                         ; 0056f46a
    CALL FUN_00540e80                   ; 0056f46c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f471
    PUSH 0x1                            ; 0056f474
    PUSH 0x5ebffa                       ; 0056f476 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0056f47b
    MOV [0x0264becc],EAX                ; 0056f47c | DAT_0264becc
    CALL FUN_00540e80                   ; 0056f481
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f486
    PUSH 0x1                            ; 0056f489
    PUSH 0x5ec00a                       ; 0056f48b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0056f490
    MOV [0x0264bed8],EAX                ; 0056f491 | DAT_0264bed8
    CALL FUN_00540e80                   ; 0056f496
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f49b
    PUSH 0x1                            ; 0056f49e
    PUSH 0x5ec01a                       ; 0056f4a0 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0056f4a5
    MOV [0x0264bedc],EAX                ; 0056f4a6 | DAT_0264bedc
    CALL FUN_00540e80                   ; 0056f4ab
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f4b0
    PUSH 0x1                            ; 0056f4b3
    PUSH 0x5ec02b                       ; 0056f4b5 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0056f4ba
    MOV [0x0264bee0],EAX                ; 0056f4bb | DAT_0264bee0
    CALL FUN_00540e80                   ; 0056f4c0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f4c5
    MOV [0x0264bee4],EAX                ; 0056f4c8 | DAT_0264bee4
    PUSH 0x1                            ; 0056f4cd
    PUSH 0x5ec03c                       ; 0056f4cf | = "Bip01 L Foot"
    PUSH ESI                            ; 0056f4d4
    CALL FUN_00540e80                   ; 0056f4d5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f4da
    PUSH 0x1                            ; 0056f4dd
    PUSH 0x5ec049                       ; 0056f4df | = "Bip01 R Foot"
    PUSH ESI                            ; 0056f4e4
    MOV [0x0264bee8],EAX                ; 0056f4e5 | DAT_0264bee8
    CALL FUN_00540e80                   ; 0056f4ea
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f4ef
    PUSH 0x1                            ; 0056f4f2
    PUSH 0x5ec056                       ; 0056f4f4 | = "Bip01 L Hand"
    PUSH ESI                            ; 0056f4f9
    MOV [0x0264beec],EAX                ; 0056f4fa | DAT_0264beec
    CALL FUN_00540e80                   ; 0056f4ff
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f504
    PUSH 0x1                            ; 0056f507
    PUSH 0x5ec063                       ; 0056f509 | = "Bip01 R Hand"
    PUSH ESI                            ; 0056f50e
    MOV [0x0264bed0],EAX                ; 0056f50f | DAT_0264bed0
    CALL FUN_00540e80                   ; 0056f514
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f519
    PUSH 0x1                            ; 0056f51c
    PUSH 0x5ec070                       ; 0056f51e | = "Bip01 Spine"
    PUSH ESI                            ; 0056f523
    MOV [0x0264bed4],EAX                ; 0056f524 | DAT_0264bed4
    CALL FUN_00540e80                   ; 0056f529
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f52e
    PUSH 0x1                            ; 0056f531
    PUSH 0x5ec07c                       ; 0056f533 | = "Bip01 Spine1"
    PUSH ESI                            ; 0056f538
    MOV [0x0264bef0],EAX                ; 0056f539 | DAT_0264bef0
    CALL FUN_00540e80                   ; 0056f53e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f543
    PUSH 0x1                            ; 0056f546
    PUSH 0x5ec089                       ; 0056f548 | = "Bip01 Spine2"
    PUSH ESI                            ; 0056f54d
    MOV [0x0264bef4],EAX                ; 0056f54e | DAT_0264bef4
    CALL FUN_00540e80                   ; 0056f553
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f558
    PUSH 0x1                            ; 0056f55b
    PUSH 0x5ec096                       ; 0056f55d | = "Bip01 Head"
    PUSH ESI                            ; 0056f562
    MOV [0x0264bef8],EAX                ; 0056f563 | DAT_0264bef8
    CALL FUN_00540e80                   ; 0056f568
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f56d
    PUSH 0x1                            ; 0056f570
    PUSH 0x5ec0a1                       ; 0056f572 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0056f577
    MOV [0x0264becc],EAX                ; 0056f578 | DAT_0264becc
    CALL FUN_00540e80                   ; 0056f57d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f582
    PUSH 0x1                            ; 0056f585
    PUSH 0x5ec0b2                       ; 0056f587 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0056f58c
    MOV [0x0264bee0],EAX                ; 0056f58d | DAT_0264bee0
    CALL FUN_00540e80                   ; 0056f592
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f597
    MOV [0x0264bee4],EAX                ; 0056f59a | DAT_0264bee4
    PUSH 0x1                            ; 0056f59f
    PUSH 0x5ec0c3                       ; 0056f5a1 | = "Bip01 Spine"
    PUSH ESI                            ; 0056f5a6
    CALL FUN_00540e80                   ; 0056f5a7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f5ac
    PUSH 0x1                            ; 0056f5af
    PUSH 0x5ec0cf                       ; 0056f5b1 | = "Bip01 Spine2"
    PUSH ESI                            ; 0056f5b6
    MOV [0x0264bef0],EAX                ; 0056f5b7 | DAT_0264bef0
    CALL FUN_00540e80                   ; 0056f5bc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0056f5c1
    PUSH EDI                            ; 0056f5c4
    MOV [0x0264bef8],EAX                ; 0056f5c5 | DAT_0264bef8
    CALL FUN_00544e60                   ; 0056f5ca
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 0056f5cf
    PUSH EBP                            ; 0056f5d2
    CALL FUN_00544e60                   ; 0056f5d3
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    FLD float ptr [EBX + 0x960]         ; 0056f5d8
    ADD ESP,0x4                         ; 0056f5de
    FADD float ptr [0x005ec0de]         ; 0056f5e1 | DAT_005ec0de
    PUSH EBP                            ; 0056f5e7
    FSTP float ptr [EBX + 0x960]        ; 0056f5e8
    CALL FUN_00546ae0                   ; 0056f5ee
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 0056f5f3
    PUSH EDI                            ; 0056f5f6
    CALL FUN_00546ae0                   ; 0056f5f7
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 0056f5fc
    PUSH EBP                            ; 0056f5ff
    PUSH 0x0                            ; 0056f600
    LEA ESI,[EBX + 0x12f78]             ; 0056f602
    PUSH ESI                            ; 0056f608
    CALL FUN_005b6f80                   ; 0056f609
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 0056f60e
    PUSH EDI                            ; 0056f611
    PUSH 0x1                            ; 0056f612
    PUSH ESI                            ; 0056f614
    CALL FUN_005b6f80                   ; 0056f615
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 0056f61a
    XOR EAX,EAX                         ; 0056f61d
    PUSH EAX                            ; 0056f61f
    MOV EDX,dword ptr [EBX + 0x12f40]   ; 0056f620
    PUSH EDX                            ; 0056f626
    PUSH 0x1                            ; 0056f627
    PUSH ESI                            ; 0056f629
    MOV [0x0268014c],EAX                ; 0056f62a | DAT_0268014c
    CALL FUN_005b70d0                   ; 0056f62f
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 0056f634
    PUSH 0x0                            ; 0056f637
    MOV EAX,dword ptr [EBX + 0x12f40]   ; 0056f639
    PUSH EAX                            ; 0056f63f
    MOV ECX,0x1                         ; 0056f640
    PUSH ECX                            ; 0056f645
    PUSH ESI                            ; 0056f646
    MOV dword ptr [0x0268014c],ECX      ; 0056f647 | DAT_0268014c
    CALL FUN_005b70d0                   ; 0056f64d
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 0056f652
    XOR EDX,EDX                         ; 0056f655
    PUSH ESI                            ; 0056f657
    MOV dword ptr [0x0268014c],EDX      ; 0056f658 | DAT_0268014c
    MOV dword ptr [EBX + 0x13ba0],EDX   ; 0056f65e
    CALL FUN_005b71d0                   ; 0056f664
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b71d0()
    MOV dword ptr [EBX + 0x12f70],0x0   ; 0056f669
    MOV dword ptr [EBX + 0x12f74],0x0   ; 0056f673
    ADD ESP,0x4                         ; 0056f67d
    MOV dword ptr [EBX + 0x12f68],0x0   ; 0056f680
    PUSH EDI                            ; 0056f68a
    MOV dword ptr [EBX + 0x12f6c],0x40a00000 ; 0056f68b
    CALL FUN_00544ee0                   ; 0056f695
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 0056f69a
    PUSH EBP                            ; 0056f69d
    CALL FUN_00544ee0                   ; 0056f69e
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 0056f6a3
    ADD ESP,0x8                         ; 0056f6a6
    POP EBP                             ; 0056f6a9
    POP EDI                             ; 0056f6aa
    POP ESI                             ; 0056f6ab
    POP EBX                             ; 0056f6ac
    RET                                 ; 0056f6ad
    PUSH 0x5ebfb9                       ; 0056f6ae | = "succubusx.dfm"
        ;   Label: LAB_0056f6ae
    PUSH EAX                            ; 0056f6b3
    CALL FUN_005478b0                   ; 0056f6b4
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 0056f6b9
    PUSH 0x5ebfc7                       ; 0056f6bc | = "hotdemonx.dfm"
    JMP 0x0056f3db                      ; 0056f6c1
        ;   XREF to: 0056f3db (UNCONDITIONAL_JUMP)  ; LAB_0056f3db

