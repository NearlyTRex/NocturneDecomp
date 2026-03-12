; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_findCoplanarPolygons_FUN_005d7460(COptimize *this_ptr,CPoly *polygon,COptimize *search_obj)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   polygon
; COptimize *      Stack[0xc]:4   search_obj
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; double           Stack[-0x40]:8  dStack_40
; uint             Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; uint             Stack[-0x24]:4  uStack_24
; int              Stack[-0x1c]:4  iStack_1c
; undefined4       Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  iStack_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7460
        ;   Label: shape_superopt.cpp_COptimize_findCoplanarPolygons_FUN_005d7460
    PUSH ESI                            ; 005d7461
    PUSH EDI                            ; 005d7462
    PUSH EBP                            ; 005d7463
    MOV EBP,ESP                         ; 005d7464
    SUB ESP,0x48                        ; 005d7466
    AND ESP,0xfffffff8                  ; 005d7469
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d746c
    OR byte ptr [EAX + 0x61],0x20       ; 005d746f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d7473
    FLD1                                ; 005d7476
    FSUB double ptr [EAX + 0x24]        ; 005d7478
    FSTP double ptr [ESP + 0x8]         ; 005d747b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d747f
        ;   Label: LAB_005d747f
    XOR ECX,ECX                         ; 005d7482
    MOV EDX,0x1                         ; 005d7484
    MOV dword ptr [ESP + 0x28],ECX      ; 005d7489
    MOV EBX,dword ptr [EAX + 0x8]       ; 005d748d
    MOV dword ptr [ESP + 0x30],EDX      ; 005d7490
    TEST EBX,EBX                        ; 005d7494
    JBE 0x005d74d2                      ; 005d7496
        ;   XREF to: 005d74d2 (CONDITIONAL_JUMP)  ; LAB_005d74d2
    MOV dword ptr [ESP + 0x2c],ECX      ; 005d7498
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d749c
        ;   Label: LAB_005d749c
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005d749f
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d74a3
    ADD EBX,EAX                         ; 005d74a6
    MOV DH,byte ptr [EBX + 0x61]        ; 005d74a8
    MOV dword ptr [ESP + 0x40],EBX      ; 005d74ab
    TEST DH,0x80                        ; 005d74af
    JZ 0x005d74e0                       ; 005d74b2
        ;   XREF to: 005d74e0 (CONDITIONAL_JUMP)  ; LAB_005d74e0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005d74b4
        ;   Label: LAB_005d74b4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005d74b8
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d74bc
    ADD ESI,0x68                        ; 005d74bf
    INC EDI                             ; 005d74c2
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d74c3
    MOV dword ptr [ESP + 0x2c],ESI      ; 005d74c6
    MOV dword ptr [ESP + 0x28],EDI      ; 005d74ca
    CMP EDI,EDX                         ; 005d74ce
    JC 0x005d749c                       ; 005d74d0
        ;   XREF to: 005d749c (CONDITIONAL_JUMP)  ; LAB_005d749c
    CMP dword ptr [ESP + 0x30],0x0      ; 005d74d2
        ;   Label: LAB_005d74d2
    JZ 0x005d747f                       ; 005d74d7
        ;   XREF to: 005d747f (CONDITIONAL_JUMP)  ; LAB_005d747f
    MOV ESP,EBP                         ; 005d74d9
    POP EBP                             ; 005d74db
    POP EDI                             ; 005d74dc
    POP ESI                             ; 005d74dd
    POP EBX                             ; 005d74de
    RET                                 ; 005d74df
    TEST DH,0x20                        ; 005d74e0
        ;   Label: LAB_005d74e0
    JZ 0x005d74b4                       ; 005d74e3
        ;   XREF to: 005d74b4 (CONDITIONAL_JUMP)  ; LAB_005d74b4
    PUSH EBX                            ; 005d74e5
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d74e6
    CALL dword ptr [EAX + 0x84]         ; 005d74e9
    MOV dword ptr [ESP + 0x24],EAX      ; 005d74ef
    MOV dword ptr [ESP + 0x28],EDX      ; 005d74f3
    FLD double ptr [ESP + 0x24]         ; 005d74f7
    ADD ESP,0x4                         ; 005d74fb
    XOR EDI,EDI                         ; 005d74fe
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d7500
    FSTP double ptr [ESP + 0x10]        ; 005d7503
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d7507
    MOV dword ptr [ESP + 0x34],EDI      ; 005d750a
    TEST EDX,EDX                        ; 005d750e
    JBE 0x005d74b4                      ; 005d7510
        ;   XREF to: 005d74b4 (CONDITIONAL_JUMP)  ; LAB_005d74b4
    LEA EAX,[EBX + 0x40]                ; 005d7512
    MOV dword ptr [ESP + 0x3c],EDI      ; 005d7515
    MOV dword ptr [ESP + 0x38],EAX      ; 005d7519
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d751d
        ;   Label: LAB_005d751d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005d7520
    MOV EBX,dword ptr [EBX + 0xc]       ; 005d7524
    ADD EBX,EAX                         ; 005d7527
    TEST byte ptr [EBX + 0x61],0xa0     ; 005d7529
    JZ 0x005d7555                       ; 005d752d
        ;   XREF to: 005d7555 (CONDITIONAL_JUMP)  ; LAB_005d7555
    MOV EBX,dword ptr [ESP + 0x34]      ; 005d752f
        ;   Label: LAB_005d752f
    INC EBX                             ; 005d7533
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005d7534
    MOV dword ptr [ESP + 0x34],EBX      ; 005d7538
    MOV EAX,EBX                         ; 005d753c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d753e
    ADD ECX,0x68                        ; 005d7541
    MOV ESI,dword ptr [EBX + 0x8]       ; 005d7544
    MOV dword ptr [ESP + 0x3c],ECX      ; 005d7547
    CMP EAX,ESI                         ; 005d754b
    JNC 0x005d74b4                      ; 005d754d
        ;   XREF to: 005d74b4 (CONDITIONAL_JUMP)  ; LAB_005d74b4
    JMP 0x005d751d                      ; 005d7553
        ;   XREF to: 005d751d (UNCONDITIONAL_JUMP)  ; LAB_005d751d
    MOV ESI,dword ptr [ESP + 0x40]      ; 005d7555
        ;   Label: LAB_005d7555
    MOV EAX,dword ptr [EBX + 0x5c]      ; 005d7559
    CMP EAX,dword ptr [ESI + 0x5c]      ; 005d755c
    JNZ 0x005d752f                      ; 005d755f
        ;   XREF to: 005d752f (CONDITIONAL_JUMP)  ; LAB_005d752f
    LEA EAX,[EBX + 0x40]                ; 005d7561
    MOV ESI,dword ptr [ESP + 0x38]      ; 005d7564
    FLD double ptr [EAX + 0x8]          ; 005d7568
    FMUL double ptr [ESI + 0x8]         ; 005d756b
    FLD double ptr [EAX]                ; 005d756e
    FMUL double ptr [ESI]               ; 005d7570
    FADDP                               ; 005d7572
    FLD double ptr [EAX + 0x10]         ; 005d7574
    FMUL double ptr [ESI + 0x10]        ; 005d7577
    FADDP                               ; 005d757a
    FCOMP double ptr [ESP + 0x8]        ; 005d757c
    FNSTSW AX                           ; 005d7580
    SAHF                                ; 005d7582
    JC 0x005d752f                       ; 005d7583
        ;   XREF to: 005d752f (CONDITIONAL_JUMP)  ; LAB_005d752f
    PUSH EBX                            ; 005d7585
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d7586
    CALL dword ptr [EAX + 0x84]         ; 005d7589
    MOV dword ptr [ESP + 0x24],EAX      ; 005d758f
    MOV dword ptr [ESP + 0x28],EDX      ; 005d7593
    FLD double ptr [ESP + 0x24]         ; 005d7597
    ADD ESP,0x4                         ; 005d759b
    FSUB double ptr [ESP + 0x10]        ; 005d759e
    FLDZ                                ; 005d75a2
    FXCH                                ; 005d75a4
    FSTP double ptr [ESP]               ; 005d75a6
    FCOMP double ptr [ESP]              ; 005d75a9
    FNSTSW AX                           ; 005d75ac
    SAHF                                ; 005d75ae
    JA 0x005d7644                       ; 005d75af
        ;   XREF to: 005d7644 (CONDITIONAL_JUMP)  ; LAB_005d7644
    MOV EAX,dword ptr [ESP]             ; 005d75b5
    MOV dword ptr [ESP + 0x18],EAX      ; 005d75b8
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d75bc
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d75c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d75c4
        ;   Label: LAB_005d75c4
    FLD double ptr [ESP + 0x18]         ; 005d75c7
    FCOMP double ptr [EAX + 0x2c]       ; 005d75cb
    FNSTSW AX                           ; 005d75ce
    SAHF                                ; 005d75d0
    JA 0x005d752f                       ; 005d75d1
        ;   XREF to: 005d752f (CONDITIONAL_JUMP)  ; LAB_005d752f
    PUSH EBX                            ; 005d75d7
    MOV ECX,dword ptr [ESP + 0x44]      ; 005d75d8
    MOV EAX,dword ptr [ESP + 0x44]      ; 005d75dc
    PUSH ECX                            ; 005d75e0
    MOV EAX,dword ptr [EAX + 0x64]      ; 005d75e1
    CALL dword ptr [EAX + 0x74]         ; 005d75e4
    ADD ESP,0x8                         ; 005d75e7
    TEST EAX,EAX                        ; 005d75ea
    JZ 0x005d752f                       ; 005d75ec
        ;   XREF to: 005d752f (CONDITIONAL_JUMP)  ; LAB_005d752f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d75f2
    MOV ESI,dword ptr [EAX + 0x8]       ; 005d75f5
    XOR EDI,EDI                         ; 005d75f8
    TEST ESI,ESI                        ; 005d75fa
    JBE 0x005d7624                      ; 005d75fc
        ;   XREF to: 005d7624 (CONDITIONAL_JUMP)  ; LAB_005d7624
    MOV dword ptr [ESP + 0x44],EDI      ; 005d75fe
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005d7602
        ;   Label: LAB_005d7602
    MOV EAX,dword ptr [ESP + 0x44]      ; 005d7605
    MOV ESI,dword ptr [ESI + 0xc]       ; 005d7609
    ADD ESI,EAX                         ; 005d760c
    MOV CH,byte ptr [ESI + 0x61]        ; 005d760e
    TEST CH,0x80                        ; 005d7611
    JZ 0x005d7652                       ; 005d7614
        ;   XREF to: 005d7652 (CONDITIONAL_JUMP)  ; LAB_005d7652
    ADD dword ptr [ESP + 0x44],0x68     ; 005d7616
        ;   Label: LAB_005d7616
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d761b
    INC EDI                             ; 005d761e
    CMP EDI,dword ptr [EAX + 0x8]       ; 005d761f
    JC 0x005d7602                       ; 005d7622
        ;   XREF to: 005d7602 (CONDITIONAL_JUMP)  ; LAB_005d7602
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d7624
        ;   Label: LAB_005d7624
    CMP EDI,dword ptr [EAX + 0x8]       ; 005d7627
    JNZ 0x005d752f                      ; 005d762a
        ;   XREF to: 005d752f (CONDITIONAL_JUMP)  ; LAB_005d752f
    MOV AH,byte ptr [EBX + 0x61]        ; 005d7630
    XOR ECX,ECX                         ; 005d7633
    OR AH,0x20                          ; 005d7635
    MOV dword ptr [ESP + 0x30],ECX      ; 005d7638
    MOV byte ptr [EBX + 0x61],AH        ; 005d763c
    JMP 0x005d752f                      ; 005d763f
        ;   XREF to: 005d752f (UNCONDITIONAL_JUMP)  ; LAB_005d752f
    FLD double ptr [ESP]                ; 005d7644
        ;   Label: LAB_005d7644
    FCHS                                ; 005d7647
    FSTP double ptr [ESP + 0x18]        ; 005d7649
    JMP 0x005d75c4                      ; 005d764d
        ;   XREF to: 005d75c4 (UNCONDITIONAL_JUMP)  ; LAB_005d75c4
    TEST CH,0x20                        ; 005d7652
        ;   Label: LAB_005d7652
    JZ 0x005d7616                       ; 005d7655
        ;   XREF to: 005d7616 (CONDITIONAL_JUMP)  ; LAB_005d7616
    PUSH ESI                            ; 005d7657
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d7658
    PUSH EBX                            ; 005d765b
    CALL dword ptr [EAX + 0x7c]         ; 005d765c
    ADD ESP,0x8                         ; 005d765f
    TEST EAX,EAX                        ; 005d7662
    JNZ 0x005d7624                      ; 005d7664
        ;   XREF to: 005d7624 (CONDITIONAL_JUMP)  ; LAB_005d7624
    PUSH ESI                            ; 005d7666
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d7667
    PUSH EBX                            ; 005d766a
    CALL dword ptr [EAX + 0x78]         ; 005d766b
    ADD ESP,0x8                         ; 005d766e
    TEST EAX,EAX                        ; 005d7671
    JNZ 0x005d7624                      ; 005d7673
        ;   XREF to: 005d7624 (CONDITIONAL_JUMP)  ; LAB_005d7624
    PUSH ESI                            ; 005d7675
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d7676
    PUSH EBX                            ; 005d7679
    CALL dword ptr [EAX + 0x80]         ; 005d767a
    ADD ESP,0x8                         ; 005d7680
    TEST EAX,EAX                        ; 005d7683
    JNZ 0x005d7624                      ; 005d7685
        ;   XREF to: 005d7624 (CONDITIONAL_JUMP)  ; LAB_005d7624
    JMP 0x005d7616                      ; 005d7687
        ;   XREF to: 005d7616 (UNCONDITIONAL_JUMP)  ; LAB_005d7616

