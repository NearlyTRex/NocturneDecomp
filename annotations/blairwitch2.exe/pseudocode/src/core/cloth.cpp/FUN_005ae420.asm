; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_005ae420(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_cloth.cpp_CCloth_load_FUN_005adeb0 at 005ae161
;   core_cloth.cpp_FUN_005ae680 at 005ae93b
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f107c
;   TerminatedCString s_Too_many_connecting_vert_005f108e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae420
        ;   Label: core_cloth.cpp_FUN_005ae420
    PUSH ESI                            ; 005ae421
    PUSH EDI                            ; 005ae422
    PUSH EBP                            ; 005ae423
    MOV EBP,ESP                         ; 005ae424
    SUB ESP,0x44                        ; 005ae426
    AND ESP,0xfffffff8                  ; 005ae429
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae42c
    XOR EDX,EDX                         ; 005ae42f
    MOV ECX,dword ptr [EAX + 0x104]     ; 005ae431
    MOV dword ptr [ESP + 0x34],EDX      ; 005ae437
    TEST ECX,ECX                        ; 005ae43b
    JLE 0x005ae523                      ; 005ae43d
        ;   XREF to: 005ae523 (CONDITIONAL_JUMP)  ; LAB_005ae523
    ADD EAX,0x398                       ; 005ae443
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ae448
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ae44c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae450
    MOV dword ptr [ESP + 0x20],EAX      ; 005ae453
    IMUL EAX,dword ptr [ESP + 0x34],0x11c ; 005ae457
        ;   Label: LAB_005ae457
    MOV EDX,dword ptr [ESP + 0x20]      ; 005ae45f
    MOV dword ptr [EDX + 0x3c8],0x0     ; 005ae463
    XOR ESI,ESI                         ; 005ae46d
    MOV dword ptr [EDX + 0x40c],0x0     ; 005ae46f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ae479
    MOV dword ptr [ESP + 0x24],ESI      ; 005ae47c
    MOV EDI,dword ptr [EDX + 0x110]     ; 005ae480
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ae486
    TEST EDI,EDI                        ; 005ae48a
    JLE 0x005ae4ed                      ; 005ae48c
        ;   XREF to: 005ae4ed (CONDITIONAL_JUMP)  ; LAB_005ae4ed
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005ae48e
    ADD EDX,EAX                         ; 005ae492
    MOV dword ptr [ESP + 0x28],ESI      ; 005ae494
    MOV dword ptr [ESP + 0x30],EDX      ; 005ae498
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae49c
        ;   Label: LAB_005ae49c
    MOV EDX,dword ptr [ESP + 0x28]      ; 005ae49f
    MOV EAX,dword ptr [EAX + 0x114]     ; 005ae4a3
    ADD EDX,EAX                         ; 005ae4a9
    MOV dword ptr [ESP + 0x40],EDX      ; 005ae4ab
    MOV EDI,dword ptr [EDX + 0x4]       ; 005ae4af
    XOR EAX,EAX                         ; 005ae4b2
    TEST EDI,EDI                        ; 005ae4b4
    JLE 0x005ae4c1                      ; 005ae4b6
        ;   XREF to: 005ae4c1 (CONDITIONAL_JUMP)  ; LAB_005ae4c1
    MOV EDI,dword ptr [ESP + 0x34]      ; 005ae4b8
    CMP EDI,dword ptr [EDX + 0x18]      ; 005ae4bc
        ;   Label: LAB_005ae4bc
    JNZ 0x005ae52a                      ; 005ae4bf
        ;   XREF to: 005ae52a (CONDITIONAL_JUMP)  ; LAB_005ae52a
    MOV EDX,dword ptr [ESP + 0x40]      ; 005ae4c1
        ;   Label: LAB_005ae4c1
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ae4c5
    CMP EAX,ECX                         ; 005ae4c8
    JNZ 0x005ae53b                      ; 005ae4ca
        ;   XREF to: 005ae53b (CONDITIONAL_JUMP)  ; LAB_005ae53b
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ae4cc
        ;   Label: LAB_005ae4cc
    MOV EDX,dword ptr [ESP + 0x24]      ; 005ae4d0
    ADD EAX,0x48                        ; 005ae4d4
    INC EDX                             ; 005ae4d7
    MOV dword ptr [ESP + 0x28],EAX      ; 005ae4d8
    MOV dword ptr [ESP + 0x24],EDX      ; 005ae4dc
    MOV EAX,EDX                         ; 005ae4e0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ae4e2
    CMP EAX,dword ptr [EDX + 0x110]     ; 005ae4e5
    JL 0x005ae49c                       ; 005ae4eb
        ;   XREF to: 005ae49c (CONDITIONAL_JUMP)  ; LAB_005ae49c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ae4ed
        ;   Label: LAB_005ae4ed
    MOV ESI,dword ptr [ESP + 0x20]      ; 005ae4f1
    MOV EDI,dword ptr [ESP + 0x34]      ; 005ae4f5
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ae4f9
    ADD EBX,0x11c                       ; 005ae4fc
    ADD ESI,0x11c                       ; 005ae502
    INC EDI                             ; 005ae508
    MOV ECX,dword ptr [EDX + 0x104]     ; 005ae509
    MOV dword ptr [ESP + 0x1c],EBX      ; 005ae50f
    MOV dword ptr [ESP + 0x20],ESI      ; 005ae513
    MOV dword ptr [ESP + 0x34],EDI      ; 005ae517
    CMP EDI,ECX                         ; 005ae51b
    JL 0x005ae457                       ; 005ae51d
        ;   XREF to: 005ae457 (CONDITIONAL_JUMP)  ; LAB_005ae457
    MOV ESP,EBP                         ; 005ae523
        ;   Label: LAB_005ae523
    POP EBP                             ; 005ae525
    POP EDI                             ; 005ae526
    POP ESI                             ; 005ae527
    POP EBX                             ; 005ae528
    RET                                 ; 005ae529
    MOV ECX,dword ptr [ESP + 0x40]      ; 005ae52a
        ;   Label: LAB_005ae52a
    INC EAX                             ; 005ae52e
    MOV ESI,dword ptr [ECX + 0x4]       ; 005ae52f
    ADD EDX,0xc                         ; 005ae532
    CMP EAX,ESI                         ; 005ae535
    JL 0x005ae4bc                       ; 005ae537
        ;   XREF to: 005ae4bc (CONDITIONAL_JUMP)  ; LAB_005ae4bc
    JMP 0x005ae4c1                      ; 005ae539
        ;   XREF to: 005ae4c1 (UNCONDITIONAL_JUMP)  ; LAB_005ae4c1
    XOR ESI,ESI                         ; 005ae53b
        ;   Label: LAB_005ae53b
    MOV dword ptr [ESP + 0x3c],ESI      ; 005ae53d
    TEST ECX,ECX                        ; 005ae541
    JLE 0x005ae4cc                      ; 005ae543
        ;   XREF to: 005ae4cc (CONDITIONAL_JUMP)  ; LAB_005ae4cc
    MOV dword ptr [ESP + 0x38],EDX      ; 005ae545
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005ae549
        ;   Label: LAB_005ae549
    MOV ECX,dword ptr [ESP + 0x40]      ; 005ae54d
    INC EDX                             ; 005ae551
    MOV EDI,dword ptr [ECX + 0x4]       ; 005ae552
    MOV EAX,EDX                         ; 005ae555
    SAR EDX,0x1f                        ; 005ae557
    IDIV EDI                            ; 005ae55a
    IMUL EDX,EDX,0xc                    ; 005ae55c
    MOV ESI,dword ptr [ESP + 0x38]      ; 005ae55f
    ADD EDX,ECX                         ; 005ae563
    MOV ESI,dword ptr [ESI + 0x18]      ; 005ae565
    MOV ECX,dword ptr [EDX + 0x18]      ; 005ae568
    MOV EDX,dword ptr [ESP + 0x34]      ; 005ae56b
    CMP ESI,EDX                         ; 005ae56f
    JNZ 0x005ae5ad                      ; 005ae571
        ;   XREF to: 005ae5ad (CONDITIONAL_JUMP)  ; LAB_005ae5ad
    MOV EDX,dword ptr [EBX + 0x30]      ; 005ae573
        ;   Label: LAB_005ae573
    XOR EAX,EAX                         ; 005ae576
    TEST EDX,EDX                        ; 005ae578
    JLE 0x005ae583                      ; 005ae57a
        ;   XREF to: 005ae583 (CONDITIONAL_JUMP)  ; LAB_005ae583
    MOV EDX,EBX                         ; 005ae57c
    CMP ECX,dword ptr [EDX + 0x34]      ; 005ae57e
        ;   Label: LAB_005ae57e
    JNZ 0x005ae5b5                      ; 005ae581
        ;   XREF to: 005ae5b5 (CONDITIONAL_JUMP)  ; LAB_005ae5b5
    CMP EAX,dword ptr [EBX + 0x30]      ; 005ae583
        ;   Label: LAB_005ae583
    JZ 0x005ae5c2                       ; 005ae586
        ;   XREF to: 005ae5c2 (CONDITIONAL_JUMP)  ; LAB_005ae5c2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005ae588
        ;   Label: LAB_005ae588
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005ae58c
    ADD EAX,0xc                         ; 005ae590
    INC EDX                             ; 005ae593
    MOV dword ptr [ESP + 0x38],EAX      ; 005ae594
    MOV dword ptr [ESP + 0x3c],EDX      ; 005ae598
    MOV EAX,EDX                         ; 005ae59c
    MOV EDX,dword ptr [ESP + 0x40]      ; 005ae59e
    CMP EAX,dword ptr [EDX + 0x4]       ; 005ae5a2
    JGE 0x005ae4cc                      ; 005ae5a5
        ;   XREF to: 005ae4cc (CONDITIONAL_JUMP)  ; LAB_005ae4cc
    JMP 0x005ae549                      ; 005ae5ab
        ;   XREF to: 005ae549 (UNCONDITIONAL_JUMP)  ; LAB_005ae549
    CMP ECX,EDX                         ; 005ae5ad
        ;   Label: LAB_005ae5ad
    JNZ 0x005ae588                      ; 005ae5af
        ;   XREF to: 005ae588 (CONDITIONAL_JUMP)  ; LAB_005ae588
    MOV ECX,ESI                         ; 005ae5b1
    JMP 0x005ae573                      ; 005ae5b3
        ;   XREF to: 005ae573 (UNCONDITIONAL_JUMP)  ; LAB_005ae573
    INC EAX                             ; 005ae5b5
        ;   Label: LAB_005ae5b5
    MOV ESI,dword ptr [EBX + 0x30]      ; 005ae5b6
    ADD EDX,0x4                         ; 005ae5b9
    CMP EAX,ESI                         ; 005ae5bc
    JL 0x005ae57e                       ; 005ae5be
        ;   XREF to: 005ae57e (CONDITIONAL_JUMP)  ; LAB_005ae57e
    JMP 0x005ae583                      ; 005ae5c0
        ;   XREF to: 005ae583 (UNCONDITIONAL_JUMP)  ; LAB_005ae583
    IMUL EDX,ECX,0x11c                  ; 005ae5c2
        ;   Label: LAB_005ae5c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae5c8
    FLD float ptr [EBX + 0xc4]          ; 005ae5cb
    FCOMP float ptr [EDX + EAX*0x1 + 0x45c] ; 005ae5d1
    FNSTSW AX                           ; 005ae5d8
    SAHF                                ; 005ae5da
    JA 0x005ae588                       ; 005ae5db
        ;   XREF to: 005ae588 (CONDITIONAL_JUMP)  ; LAB_005ae588
    MOV EAX,dword ptr [EBX + 0x30]      ; 005ae5dd
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ECX ; 005ae5e0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005ae5e4
    ADD EAX,EDX                         ; 005ae5e8
    MOV EDX,dword ptr [ESP + 0x30]      ; 005ae5ea
    MOV EDI,ESP                         ; 005ae5ee
    LEA ESI,[ESP + 0xc]                 ; 005ae5f0
    FLD float ptr [EDX]                 ; 005ae5f4
    FLD float ptr [EDX + 0x4]           ; 005ae5f6
    FLD float ptr [EDX + 0x8]           ; 005ae5f9
    FXCH ST2                            ; 005ae5fc
    FSUB float ptr [EAX]                ; 005ae5fe
    FXCH                                ; 005ae600
    FSUB float ptr [EAX + 0x4]          ; 005ae602
    FXCH ST2                            ; 005ae605
    FSUB float ptr [EAX + 0x8]          ; 005ae607
    FXCH                                ; 005ae60a
    FSTP float ptr [ESP + 0xc]          ; 005ae60c
    FXCH                                ; 005ae610
    FSTP float ptr [ESP + 0x10]         ; 005ae612
    FSTP float ptr [ESP + 0x14]         ; 005ae616
    MOVSD ES:EDI,ESI                    ; 005ae61a
    MOVSD ES:EDI,ESI                    ; 005ae61b
    MOVSD ES:EDI,ESI                    ; 005ae61c
    FLD float ptr [ESP + 0x4]           ; 005ae61d
    FMUL ST0                            ; 005ae621
    FLD float ptr [ESP]                 ; 005ae623
    FMUL ST0                            ; 005ae626
    FADDP                               ; 005ae628
    FLD float ptr [ESP + 0x8]           ; 005ae62a
    FMUL ST0                            ; 005ae62e
    FADDP                               ; 005ae630
    FSQRT                               ; 005ae632
    MOV EAX,dword ptr [EBX + 0x30]      ; 005ae634
    FSTP float ptr [ESP + 0x18]         ; 005ae637
    MOV EDX,dword ptr [ESP + 0x18]      ; 005ae63b
    MOV dword ptr [EBX + EAX*0x4 + 0x78],EDX ; 005ae63f
    MOV ECX,dword ptr [EBX + 0x30]      ; 005ae643
    INC ECX                             ; 005ae646
    MOV dword ptr [EBX + 0x30],ECX      ; 005ae647
    CMP ECX,0xf                         ; 005ae64a
    JLE 0x005ae588                      ; 005ae64d
        ;   XREF to: 005ae588 (CONDITIONAL_JUMP)  ; LAB_005ae588
    MOV EDI,0x5f107c                    ; 005ae653 | = "..\\core\\cloth.cpp"
    MOV EAX,0x1c3                       ; 005ae658
    PUSH 0x5f108e                       ; 005ae65d | = "Too many connecting verticies"
    MOV dword ptr [0x01d046a0],EDI      ; 005ae662 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005ae668 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005ae66d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005ae672
    JMP 0x005ae588                      ; 005ae675
        ;   XREF to: 005ae588 (UNCONDITIONAL_JUMP)  ; LAB_005ae588

