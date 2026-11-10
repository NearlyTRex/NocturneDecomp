; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_0055b4f0(int *param_1)
;
; Local Variables:
; undefined8       Stack[-0xcc]:8  local_cc
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00550580 at 00550ba7
;
; Referenced Globals:
;   undefined4 DAT_005f106c
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4368c
;   undefined4 DAT_01c4dacf
;   undefined4 DAT_01c4f020
;   undefined4 DAT_0268e900
;   undefined4 DAT_0269c7b4
;   undefined4 DAT_0269c7b8
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b4f0
        ;   Label: core_setdir.cpp_FUN_0055b4f0
    PUSH ESI                            ; 0055b4f1
    PUSH EDI                            ; 0055b4f2
    PUSH EBP                            ; 0055b4f3
    SUB ESP,0xb4                        ; 0055b4f4
    MOV EDI,dword ptr [ESP + 0xc8]      ; 0055b4fa
    MOV EDX,0x2                         ; 0055b501
    MOV EAX,[0x0061b49c]                ; 0055b506 | DAT_0061b49c
    MOV ECX,dword ptr [EDI]             ; 0055b50b
    XOR EBP,EBP                         ; 0055b50d
    SUB EAX,0x78                        ; 0055b50f
    MOV dword ptr [ESP + 0x98],EDX      ; 0055b512
    MOV dword ptr [ESP + 0x84],EAX      ; 0055b519
    TEST ECX,ECX                        ; 0055b520
    JLE 0x0055b540                      ; 0055b522
        ;   XREF to: 0055b540 (CONDITIONAL_JUMP)  ; LAB_0055b540
    XOR EAX,EAX                         ; 0055b524
    MOV dword ptr [EAX + 0x269c7b0],EBP ; 0055b526 | DAT_0269c7b4
        ;   Label: LAB_0055b526
    INC EBP                             ; 0055b52c
    MOV EBX,dword ptr [EDI]             ; 0055b52d
    ADD EAX,0x4                         ; 0055b52f
    CMP EBP,EBX                         ; 0055b532
    JL 0x0055b526                       ; 0055b534
        ;   XREF to: 0055b526 (CONDITIONAL_JUMP)  ; LAB_0055b526
    LEA EAX,[EAX]                       ; 0055b536
    LEA EDX,[EDX]                       ; 0055b53c
    XOR EBP,EBP                         ; 0055b540
        ;   Label: LAB_0055b540
    MOV dword ptr [ESP + 0x74],EBP      ; 0055b542
    MOV EAX,dword ptr [EDI]             ; 0055b546
        ;   Label: LAB_0055b546
    DEC EAX                             ; 0055b548
    CMP EBP,EAX                         ; 0055b549
    JGE 0x0055b5a8                      ; 0055b54b
        ;   XREF to: 0055b5a8 (CONDITIONAL_JUMP)  ; LAB_0055b5a8
    LEA ECX,[EBP + 0x1]                 ; 0055b54d
    CMP ECX,dword ptr [EDI]             ; 0055b550
    JGE 0x0055b59a                      ; 0055b552
        ;   XREF to: 0055b59a (CONDITIONAL_JUMP)  ; LAB_0055b59a
    MOV EBX,dword ptr [ESP + 0x74]      ; 0055b554
    LEA EDX,[ECX*0x4 + 0x0]             ; 0055b558
    MOV ESI,dword ptr [EBX + 0x269c7b0] ; 0055b55f | DAT_0269c7b4
        ;   Label: LAB_0055b55f
    MOV EAX,dword ptr [EDX + 0x269c7b0] ; 0055b565 | DAT_0269c7b4 | DAT_0269c7b8
    FLD float ptr [ESI*0x4 + 0x268e900] ; 0055b56b | DAT_0268e900
    FCOMP float ptr [EAX*0x4 + 0x268e900] ; 0055b572 | DAT_0268e900
    FNSTSW AX                           ; 0055b579
    SAHF                                ; 0055b57b
    JNC 0x0055b590                      ; 0055b57c
        ;   XREF to: 0055b590 (CONDITIONAL_JUMP)  ; LAB_0055b590
    MOV EAX,dword ptr [EDX + 0x269c7b0] ; 0055b57e | DAT_0269c7b4 | DAT_0269c7b8
    MOV dword ptr [EBX + 0x269c7b0],EAX ; 0055b584
    MOV dword ptr [EDX + 0x269c7b0],ESI ; 0055b58a | DAT_0269c7b4 | DAT_0269c7b8
    INC ECX                             ; 0055b590
        ;   Label: LAB_0055b590
    MOV ESI,dword ptr [EDI]             ; 0055b591
    ADD EDX,0x4                         ; 0055b593
    CMP ECX,ESI                         ; 0055b596
    JL 0x0055b55f                       ; 0055b598
        ;   XREF to: 0055b55f (CONDITIONAL_JUMP)  ; LAB_0055b55f
    MOV EAX,dword ptr [ESP + 0x74]      ; 0055b59a
        ;   Label: LAB_0055b59a
    ADD EAX,0x4                         ; 0055b59e
    INC EBP                             ; 0055b5a1
    MOV dword ptr [ESP + 0x74],EAX      ; 0055b5a2
    JMP 0x0055b546                      ; 0055b5a6
        ;   XREF to: 0055b546 (UNCONDITIONAL_JUMP)  ; LAB_0055b546
    MOV EDX,0x9                         ; 0055b5a8
        ;   Label: LAB_0055b5a8
    MOV EBP,dword ptr [EDI]             ; 0055b5ad
    CMP EBP,EDX                         ; 0055b5af
    JGE 0x0055b5b5                      ; 0055b5b1
        ;   XREF to: 0055b5b5 (CONDITIONAL_JUMP)  ; LAB_0055b5b5
    MOV EDX,EBP                         ; 0055b5b3
    TEST EDX,EDX                        ; 0055b5b5
        ;   Label: LAB_0055b5b5
    JLE 0x0055b82f                      ; 0055b5b7
        ;   XREF to: 0055b82f (CONDITIONAL_JUMP)  ; LAB_0055b82f
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055b5bd
    SHL EAX,0x2                         ; 0055b5c4
    LEA ECX,[EAX + 0xc0]                ; 0055b5c7
    SHL EDX,0x2                         ; 0055b5cd
    MOV dword ptr [ESP + 0x7c],EAX      ; 0055b5d0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055b5d4
    ADD EDI,0x4                         ; 0055b5db
    SUB EAX,0xb                         ; 0055b5de
    XOR EBX,EBX                         ; 0055b5e1
    MOV dword ptr [ESP + 0x78],EAX      ; 0055b5e3
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055b5e7
    MOV dword ptr [ESP + 0x8c],EBX      ; 0055b5ee
    ADD EAX,0x30                        ; 0055b5f5
    MOV dword ptr [ESP + 0x68],EDX      ; 0055b5f8
    MOV dword ptr [ESP + 0x80],EAX      ; 0055b5fc
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055b603
    MOV dword ptr [ESP + 0x64],EDI      ; 0055b60a
    ADD EAX,0x6c                        ; 0055b60e
    MOV dword ptr [ESP + 0x6c],ECX      ; 0055b611
    MOV dword ptr [ESP + 0x70],EAX      ; 0055b615
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0055b619
        ;   Label: LAB_0055b619
    MOV EAX,dword ptr [EAX + 0x269c7b0] ; 0055b620 | DAT_0269c7b4
    MOV dword ptr [ESP + 0x88],EAX      ; 0055b626
    IMUL EAX,EAX,0x3000                 ; 0055b62d
    CMP dword ptr [0x0061b4a0],0x20     ; 0055b633 | DAT_0061b4a0
    JZ 0x0055b83a                       ; 0055b63a
        ;   XREF to: 0055b83a (CONDITIONAL_JUMP)  ; LAB_0055b83a
    MOV dword ptr [ESP + 0x94],EAX      ; 0055b640
    XOR EBP,EBP                         ; 0055b647
    ADD EAX,0x100                       ; 0055b649
    MOV dword ptr [ESP + 0xac],EBP      ; 0055b64e
    MOV dword ptr [ESP + 0xa4],EAX      ; 0055b655
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055b65c
    MOV EBP,0xff                        ; 0055b663
    MOV dword ptr [ESP + 0x9c],EAX      ; 0055b668
    MOV EBX,dword ptr [ESP + 0xac]      ; 0055b66f
        ;   Label: LAB_0055b66f
    MOV EAX,dword ptr [ESP + 0x94]      ; 0055b676
    SHL EBX,0x8                         ; 0055b67d
    MOV ESI,dword ptr [ESP + 0x98]      ; 0055b680
    ADD EBX,EAX                         ; 0055b687
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0055b689
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0055b690
    MOV dword ptr [ESP + 0xb0],EAX      ; 0055b697
    MOV EAX,0xffffff                    ; 0055b69e
        ;   Label: LAB_0055b69e
    MOV ECX,dword ptr [EBX + 0x23a08f4] ; 0055b6a3
    XOR EDX,EDX                         ; 0055b6a9
    INC ECX                             ; 0055b6ab
    DIV ECX                             ; 0055b6ac
    CMP EAX,0xff                        ; 0055b6ae
    JBE 0x0055b6b7                      ; 0055b6b3
        ;   XREF to: 0055b6b7 (CONDITIONAL_JUMP)  ; LAB_0055b6b7
    MOV EAX,EBP                         ; 0055b6b5
    SHR EAX,0x3                         ; 0055b6b7
        ;   Label: LAB_0055b6b7
    MOV EDX,EAX                         ; 0055b6ba
    MOV ECX,EAX                         ; 0055b6bc
    SHL EDX,0xa                         ; 0055b6be
    SHL ECX,0x5                         ; 0055b6c1
    ADD ECX,EDX                         ; 0055b6c4
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1c45ad0] ; 0055b6c6 | DAT_01c4dacf
    PUSH EDI                            ; 0055b6cd
    AND EAX,0xff                        ; 0055b6ce
    PUSH ESI                            ; 0055b6d3
    MOV [0x01c4f020],EAX                ; 0055b6d4 | DAT_01c4f020
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0055b6d9
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0055b6de
    ADD EBX,0x4                         ; 0055b6e1
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0055b6e4
    INC ESI                             ; 0055b6eb
    CMP EBX,EDX                         ; 0055b6ec
    JNZ 0x0055b69e                      ; 0055b6ee
        ;   XREF to: 0055b69e (CONDITIONAL_JUMP)  ; LAB_0055b69e
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0055b6f0
    MOV ESI,dword ptr [ESP + 0xac]      ; 0055b6f7
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0055b6fe
    INC EBX                             ; 0055b705
    INC ESI                             ; 0055b706
    ADD ECX,0x100                       ; 0055b707
    MOV dword ptr [ESP + 0x9c],EBX      ; 0055b70d
    MOV dword ptr [ESP + 0xac],ESI      ; 0055b714
    MOV dword ptr [ESP + 0xa4],ECX      ; 0055b71b
    CMP ESI,0x30                        ; 0055b722
    JL 0x0055b66f                       ; 0055b725
        ;   XREF to: 0055b66f (CONDITIONAL_JUMP)  ; LAB_0055b66f
    MOV EAX,dword ptr [ESP + 0x88]      ; 0055b72b
        ;   Label: LAB_0055b72b
    SUB ESP,0x8                         ; 0055b732
    FLD float ptr [EAX*0x4 + 0x268e900] ; 0055b735 | DAT_0268e900
    FSTP double ptr [ESP]               ; 0055b73c
    PUSH 0x5f106c                       ; 0055b73f | DAT_005f106c
    LEA EAX,[ESP + 0xc]                 ; 0055b744
    PUSH EAX                            ; 0055b748
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0055b749
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055b74e
    MOV ECX,dword ptr [ESP + 0x80]      ; 0055b751
    PUSH ECX                            ; 0055b758
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0055b759
    PUSH EBX                            ; 0055b760
    LEA EAX,[ESP + 0x8]                 ; 0055b761
    PUSH EAX                            ; 0055b765
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0055b766
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0055b76b
    IMUL EAX,dword ptr [ESP + 0x88],0x1a4 ; 0055b76e
    MOV ESI,dword ptr [ESP + 0x78]      ; 0055b779
    PUSH ESI                            ; 0055b77d
    MOV EDX,dword ptr [ESP + 0x68]      ; 0055b77e
    PUSH EBX                            ; 0055b782
    ADD EAX,EDX                         ; 0055b783
    PUSH EAX                            ; 0055b785
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0055b786
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    LEA EAX,[EBX + 0x81]                ; 0055b78b
    LEA ECX,[EBX + 0x41]                ; 0055b791
    ADD ESP,0xc                         ; 0055b794
    MOV EBX,dword ptr [0x0061b498]      ; 0055b797 | DAT_0061b498
    MOV dword ptr [ESP + 0x98],ECX      ; 0055b79d
    CMP EAX,EBX                         ; 0055b7a4
    JLE 0x0055b812                      ; 0055b7a6
        ;   XREF to: 0055b812 (CONDITIONAL_JUMP)  ; LAB_0055b812
    MOV ESI,0x2                         ; 0055b7a8
    MOV EAX,dword ptr [ESP + 0x70]      ; 0055b7ad
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0055b7b1
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0055b7b5
    MOV EDX,dword ptr [ESP + 0x78]      ; 0055b7b9
    MOV ECX,dword ptr [ESP + 0x80]      ; 0055b7bd
    MOV dword ptr [ESP + 0x98],ESI      ; 0055b7c4
    ADD EDI,0xf0                        ; 0055b7cb
    ADD EBP,0xf0                        ; 0055b7d1
    ADD EDX,0x3c                        ; 0055b7d7
    ADD ECX,0x3c                        ; 0055b7da
    LEA EBX,[EAX + 0x3c]                ; 0055b7dd
    MOV ESI,dword ptr [ESP + 0x84]      ; 0055b7e0
    MOV dword ptr [ESP + 0x6c],EDI      ; 0055b7e7
    MOV dword ptr [ESP + 0x7c],EBP      ; 0055b7eb
    MOV dword ptr [ESP + 0x78],EDX      ; 0055b7ef
    MOV dword ptr [ESP + 0x80],ECX      ; 0055b7f3
    MOV dword ptr [ESP + 0x70],EBX      ; 0055b7fa
    ADD ESI,0x3c                        ; 0055b7fe
    MOV EDI,dword ptr [0x0061b49c]      ; 0055b801 | DAT_0061b49c
    MOV dword ptr [ESP + 0x84],ESI      ; 0055b807
    CMP EAX,EDI                         ; 0055b80e
    JG 0x0055b82f                       ; 0055b810
        ;   XREF to: 0055b82f (CONDITIONAL_JUMP)  ; LAB_0055b82f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0055b812
        ;   Label: LAB_0055b812
    ADD EDX,0x4                         ; 0055b819
    MOV ECX,dword ptr [ESP + 0x68]      ; 0055b81c
    MOV dword ptr [ESP + 0x8c],EDX      ; 0055b820
    CMP EDX,ECX                         ; 0055b827
    JL 0x0055b619                       ; 0055b829
        ;   XREF to: 0055b619 (CONDITIONAL_JUMP)  ; LAB_0055b619
    ADD ESP,0xb4                        ; 0055b82f
        ;   Label: LAB_0055b82f
    POP EBP                             ; 0055b835
    POP EDI                             ; 0055b836
    POP ESI                             ; 0055b837
    POP EBX                             ; 0055b838
    RET                                 ; 0055b839
    MOV dword ptr [ESP + 0xa0],EAX      ; 0055b83a
        ;   Label: LAB_0055b83a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055b841
    MOV dword ptr [ESP + 0xa8],EAX      ; 0055b845
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0055b84c
    MOV dword ptr [ESP + 0x90],EAX      ; 0055b850
    MOV EDI,dword ptr [ESP + 0x98]      ; 0055b857
        ;   Label: LAB_0055b857
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0055b85e
    SHL EDI,0x2                         ; 0055b865
    MOV EBP,dword ptr [ESP + 0xa8]      ; 0055b868
    MOV ECX,EDI                         ; 0055b86f
    ADD EDI,0x100                       ; 0055b871
    MOV EAX,0xffffff                    ; 0055b877
        ;   Label: LAB_0055b877
    MOV ESI,dword ptr [EBX + 0x23a08f4] ; 0055b87c
    XOR EDX,EDX                         ; 0055b882
    INC ESI                             ; 0055b884
    DIV ESI                             ; 0055b885
    CMP EAX,0xff                        ; 0055b887
    JBE 0x0055b893                      ; 0055b88c
        ;   XREF to: 0055b893 (CONDITIONAL_JUMP)  ; LAB_0055b893
    MOV EAX,0xff                        ; 0055b88e
    MOV EDX,EAX                         ; 0055b893
        ;   Label: LAB_0055b893
    SHL EDX,0x8                         ; 0055b895
    ADD ECX,0x4                         ; 0055b898
    ADD EDX,EAX                         ; 0055b89b
    SHL EAX,0x10                        ; 0055b89d
    MOV ESI,dword ptr [EBP + 0x1c4354c] ; 0055b8a0 | DAT_01c4368c
    ADD EDX,EAX                         ; 0055b8a6
    ADD EBX,0x4                         ; 0055b8a8
    MOV dword ptr [ECX + ESI*0x1 + -0x4],EDX ; 0055b8ab
    CMP ECX,EDI                         ; 0055b8af
    JNZ 0x0055b877                      ; 0055b8b1
        ;   XREF to: 0055b877 (CONDITIONAL_JUMP)  ; LAB_0055b877
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0055b8b3
    MOV EBP,dword ptr [ESP + 0xa0]      ; 0055b8ba
    MOV EDX,dword ptr [ESP + 0x90]      ; 0055b8c1
    ADD EAX,0x4                         ; 0055b8c8
    ADD EBP,0x100                       ; 0055b8cb
    MOV dword ptr [ESP + 0xa8],EAX      ; 0055b8d1
    MOV dword ptr [ESP + 0xa0],EBP      ; 0055b8d8
    CMP EAX,EDX                         ; 0055b8df
    JZ 0x0055b72b                       ; 0055b8e1
        ;   XREF to: 0055b72b (CONDITIONAL_JUMP)  ; LAB_0055b72b
    JMP 0x0055b857                      ; 0055b8e7
        ;   XREF to: 0055b857 (UNCONDITIONAL_JUMP)  ; LAB_0055b857

