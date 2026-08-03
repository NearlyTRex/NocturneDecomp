; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   x1
; int *            Stack[0xc]:4   y1
; int *            Stack[0x10]:4   x2
; int *            Stack[0x14]:4   y2
; int              Stack[0x18]:4   clip_left
; int              Stack[0x1c]:4   clip_top
; int              Stack[0x20]:4   clip_right
; int              Stack[0x24]:4   clip_bottom
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0 at 0045c011
;   cockpit_drawsurf.cpp_FUN_0045c050 at 0045c0b1
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d97e
;   TerminatedCString s_s_2d_line_clipping_excee_0057d996
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c440
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
    PUSH ESI                            ; 0045c441
    PUSH EDI                            ; 0045c442
    PUSH EBP                            ; 0045c443
    SUB ESP,0x48                        ; 0045c444
    MOV EBP,dword ptr [ESP + 0x60]      ; 0045c447
    MOV EDI,dword ptr [ESP + 0x64]      ; 0045c44b
    MOV ECX,dword ptr [ESP + 0x70]      ; 0045c44f
    MOV dword ptr [ESP + 0xc],ECX       ; 0045c453
    MOV ECX,dword ptr [ESP + 0x74]      ; 0045c457
    MOV EBX,dword ptr [EDI]             ; 0045c45b
    MOV dword ptr [ESP + 0x4],ECX       ; 0045c45d
    MOV ECX,dword ptr [ESP + 0x78]      ; 0045c461
    MOV ESI,dword ptr [EBP]             ; 0045c465
    MOV dword ptr [ESP + 0x14],ECX      ; 0045c468
    XOR ECX,ECX                         ; 0045c46c
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0045c46e
    JLE 0x0045c479                      ; 0045c472
        ;   XREF to: 0045c479 (CONDITIONAL_JUMP)  ; LAB_0045c479
    MOV ECX,0x1                         ; 0045c474
    CMP EBX,dword ptr [ESP + 0x4]       ; 0045c479
        ;   Label: LAB_0045c479
    JGE 0x0045c482                      ; 0045c47d
        ;   XREF to: 0045c482 (CONDITIONAL_JUMP)  ; LAB_0045c482
    OR CL,0x2                           ; 0045c47f
    CMP ESI,dword ptr [ESP + 0x14]      ; 0045c482
        ;   Label: LAB_0045c482
    JLE 0x0045c48b                      ; 0045c486
        ;   XREF to: 0045c48b (CONDITIONAL_JUMP)  ; LAB_0045c48b
    OR CL,0x4                           ; 0045c488
    CMP ESI,dword ptr [ESP + 0xc]       ; 0045c48b
        ;   Label: LAB_0045c48b
    JGE 0x0045c494                      ; 0045c48f
        ;   XREF to: 0045c494 (CONDITIONAL_JUMP)  ; LAB_0045c494
    OR CL,0x8                           ; 0045c491
    MOV ESI,dword ptr [ESP + 0x68]      ; 0045c494
        ;   Label: LAB_0045c494
    MOV dword ptr [ESP + 0x44],ECX      ; 0045c498
    MOV ECX,dword ptr [ESP + 0x70]      ; 0045c49c
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0045c4a0
    MOV dword ptr [ESP + 0x8],ECX       ; 0045c4a4
    MOV ECX,dword ptr [ESP + 0x74]      ; 0045c4a8
    MOV ESI,dword ptr [ESI]             ; 0045c4ac
    MOV dword ptr [ESP + 0x10],ECX      ; 0045c4ae
    MOV ECX,dword ptr [ESP + 0x78]      ; 0045c4b2
    MOV EBX,dword ptr [EBX]             ; 0045c4b6
    MOV dword ptr [ESP],ECX             ; 0045c4b8
    XOR ECX,ECX                         ; 0045c4bb
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0045c4bd
    JLE 0x0045c4c8                      ; 0045c4c1
        ;   XREF to: 0045c4c8 (CONDITIONAL_JUMP)  ; LAB_0045c4c8
    MOV ECX,0x1                         ; 0045c4c3
    CMP EBX,dword ptr [ESP + 0x10]      ; 0045c4c8
        ;   Label: LAB_0045c4c8
    JGE 0x0045c4d1                      ; 0045c4cc
        ;   XREF to: 0045c4d1 (CONDITIONAL_JUMP)  ; LAB_0045c4d1
    OR CL,0x2                           ; 0045c4ce
    CMP ESI,dword ptr [ESP]             ; 0045c4d1
        ;   Label: LAB_0045c4d1
    JLE 0x0045c4d9                      ; 0045c4d4
        ;   XREF to: 0045c4d9 (CONDITIONAL_JUMP)  ; LAB_0045c4d9
    OR CL,0x4                           ; 0045c4d6
    CMP ESI,dword ptr [ESP + 0x8]       ; 0045c4d9
        ;   Label: LAB_0045c4d9
    JL 0x0045c52a                       ; 0045c4dd
        ;   XREF to: 0045c52a (CONDITIONAL_JUMP)  ; LAB_0045c52a
    XOR ESI,ESI                         ; 0045c4df
        ;   Label: LAB_0045c4df
    MOV dword ptr [ESP + 0x3c],ECX      ; 0045c4e1
    MOV dword ptr [ESP + 0x38],ESI      ; 0045c4e5
    MOV ECX,dword ptr [ESP + 0x68]      ; 0045c4e9
        ;   Label: LAB_0045c4e9
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0045c4ed
    MOV EBX,dword ptr [EBP]             ; 0045c4f1
    MOV ECX,dword ptr [ECX]             ; 0045c4f4
    MOV ESI,dword ptr [ESI]             ; 0045c4f6
    SUB ECX,EBX                         ; 0045c4f8
    SUB ESI,dword ptr [EDI]             ; 0045c4fa
    CMP dword ptr [ESP + 0x44],0x0      ; 0045c4fc
    JZ 0x0045c52f                       ; 0045c501
        ;   XREF to: 0045c52f (CONDITIONAL_JUMP)  ; LAB_0045c52f
    MOV EBX,dword ptr [ESP + 0x44]      ; 0045c503
        ;   Label: LAB_0045c503
    TEST dword ptr [ESP + 0x3c],EBX     ; 0045c507
    JZ 0x0045c540                       ; 0045c50b
        ;   XREF to: 0045c540 (CONDITIONAL_JUMP)  ; LAB_0045c540
    XOR ESI,ESI                         ; 0045c50d
    MOV dword ptr [ESP + 0x18],ESI      ; 0045c50f
    CMP dword ptr [ESP + 0x38],0x64     ; 0045c513
        ;   Label: LAB_0045c513
    JZ 0x0045c6f3                       ; 0045c518
        ;   XREF to: 0045c6f3 (CONDITIONAL_JUMP)  ; LAB_0045c6f3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045c51e
    ADD ESP,0x48                        ; 0045c522
    POP EBP                             ; 0045c525
    POP EDI                             ; 0045c526
    POP ESI                             ; 0045c527
    POP EBX                             ; 0045c528
    RET                                 ; 0045c529
    OR CL,0x8                           ; 0045c52a
        ;   Label: LAB_0045c52a
    JMP 0x0045c4df                      ; 0045c52d
        ;   XREF to: 0045c4df (UNCONDITIONAL_JUMP)  ; LAB_0045c4df
    CMP dword ptr [ESP + 0x3c],0x0      ; 0045c52f
        ;   Label: LAB_0045c52f
    JNZ 0x0045c503                      ; 0045c534
        ;   XREF to: 0045c503 (CONDITIONAL_JUMP)  ; LAB_0045c503
    MOV dword ptr [ESP + 0x18],0x1      ; 0045c536
    JMP 0x0045c513                      ; 0045c53e
        ;   XREF to: 0045c513 (UNCONDITIONAL_JUMP)  ; LAB_0045c513
    TEST EBX,EBX                        ; 0045c540
        ;   Label: LAB_0045c540
    JZ 0x0045c5df                       ; 0045c542
        ;   XREF to: 0045c5df (CONDITIONAL_JUMP)  ; LAB_0045c5df
    MOV dword ptr [ESP + 0x40],EBX      ; 0045c548
        ;   Label: LAB_0045c548
    MOV BL,byte ptr [ESP + 0x40]        ; 0045c54c
    TEST BL,0x1                         ; 0045c550
    JZ 0x0045c5e8                       ; 0045c553
        ;   XREF to: 0045c5e8 (CONDITIONAL_JUMP)  ; LAB_0045c5e8
    TEST ESI,ESI                        ; 0045c559
    JZ 0x0045c57d                       ; 0045c55b
        ;   XREF to: 0045c57d (CONDITIONAL_JUMP)  ; LAB_0045c57d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045c55d
    MOV EBX,dword ptr [EDI]             ; 0045c561
    MOV EDX,0x10000                     ; 0045c563
    SUB EAX,EBX                         ; 0045c568
    MOV EBX,ESI                         ; 0045c56a
    IMUL EDX                            ; 0045c56c
    IDIV EBX                            ; 0045c56e
    MOV EDX,ECX                         ; 0045c570
    IMUL EDX                            ; 0045c572
    SHRD EAX,EDX,0x10                   ; 0045c574
    MOV EDX,dword ptr [EBP]             ; 0045c578
    ADD EDX,EAX                         ; 0045c57b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045c57d
        ;   Label: LAB_0045c57d
    CMP dword ptr [ESP + 0x44],0x0      ; 0045c581
        ;   Label: LAB_0045c581
    JZ 0x0045c67e                       ; 0045c586
        ;   XREF to: 0045c67e (CONDITIONAL_JUMP)  ; LAB_0045c67e
    MOV ECX,dword ptr [ESP + 0x70]      ; 0045c58c
    MOV ESI,EAX                         ; 0045c590
    MOV dword ptr [EBP],EDX             ; 0045c592
    MOV dword ptr [ESP + 0x24],ECX      ; 0045c595
    MOV ECX,dword ptr [ESP + 0x74]      ; 0045c599
    MOV dword ptr [EDI],EAX             ; 0045c59d
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045c59f
    MOV ECX,dword ptr [ESP + 0x78]      ; 0045c5a3
    MOV EBX,dword ptr [EBP]             ; 0045c5a7
    MOV dword ptr [ESP + 0x2c],ECX      ; 0045c5aa
    XOR ECX,ECX                         ; 0045c5ae
    CMP EAX,dword ptr [ESP + 0x7c]      ; 0045c5b0
    JLE 0x0045c5bb                      ; 0045c5b4
        ;   XREF to: 0045c5bb (CONDITIONAL_JUMP)  ; LAB_0045c5bb
    MOV ECX,0x1                         ; 0045c5b6
    CMP ESI,dword ptr [ESP + 0x1c]      ; 0045c5bb
        ;   Label: LAB_0045c5bb
    JGE 0x0045c5c4                      ; 0045c5bf
        ;   XREF to: 0045c5c4 (CONDITIONAL_JUMP)  ; LAB_0045c5c4
    OR CL,0x2                           ; 0045c5c1
    CMP EBX,dword ptr [ESP + 0x2c]      ; 0045c5c4
        ;   Label: LAB_0045c5c4
    JLE 0x0045c5cd                      ; 0045c5c8
        ;   XREF to: 0045c5cd (CONDITIONAL_JUMP)  ; LAB_0045c5cd
    OR CL,0x4                           ; 0045c5ca
    CMP EBX,dword ptr [ESP + 0x24]      ; 0045c5cd
        ;   Label: LAB_0045c5cd
    JGE 0x0045c5d6                      ; 0045c5d1
        ;   XREF to: 0045c5d6 (CONDITIONAL_JUMP)  ; LAB_0045c5d6
    OR CL,0x8                           ; 0045c5d3
    MOV dword ptr [ESP + 0x44],ECX      ; 0045c5d6
        ;   Label: LAB_0045c5d6
    JMP 0x0045c6dc                      ; 0045c5da
        ;   XREF to: 0045c6dc (UNCONDITIONAL_JUMP)  ; LAB_0045c6dc
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0045c5df
        ;   Label: LAB_0045c5df
    JMP 0x0045c548                      ; 0045c5e3
        ;   XREF to: 0045c548 (UNCONDITIONAL_JUMP)  ; LAB_0045c548
    TEST BL,0x2                         ; 0045c5e8
        ;   Label: LAB_0045c5e8
    JZ 0x0045c61a                       ; 0045c5eb
        ;   XREF to: 0045c61a (CONDITIONAL_JUMP)  ; LAB_0045c61a
    TEST ESI,ESI                        ; 0045c5ed
    JZ 0x0045c611                       ; 0045c5ef
        ;   XREF to: 0045c611 (CONDITIONAL_JUMP)  ; LAB_0045c611
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045c5f1
    MOV EDX,dword ptr [EDI]             ; 0045c5f5
    MOV EBX,ESI                         ; 0045c5f7
    SUB EAX,EDX                         ; 0045c5f9
    MOV EDX,0x10000                     ; 0045c5fb
    IMUL EDX                            ; 0045c600
    IDIV EBX                            ; 0045c602
    MOV EDX,ECX                         ; 0045c604
    IMUL EDX                            ; 0045c606
    SHRD EAX,EDX,0x10                   ; 0045c608
    MOV EDX,dword ptr [EBP]             ; 0045c60c
    ADD EDX,EAX                         ; 0045c60f
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045c611
        ;   Label: LAB_0045c611
    JMP 0x0045c581                      ; 0045c615
        ;   XREF to: 0045c581 (UNCONDITIONAL_JUMP)  ; LAB_0045c581
    TEST BL,0x4                         ; 0045c61a
        ;   Label: LAB_0045c61a
    JZ 0x0045c64a                       ; 0045c61d
        ;   XREF to: 0045c64a (CONDITIONAL_JUMP)  ; LAB_0045c64a
    TEST ECX,ECX                        ; 0045c61f
    JZ 0x0045c641                       ; 0045c621
        ;   XREF to: 0045c641 (CONDITIONAL_JUMP)  ; LAB_0045c641
    MOV EAX,dword ptr [ESP + 0x78]      ; 0045c623
    MOV EBX,dword ptr [EBP]             ; 0045c627
    MOV EDX,0x10000                     ; 0045c62a
    SUB EAX,EBX                         ; 0045c62f
    MOV EBX,ECX                         ; 0045c631
    IMUL EDX                            ; 0045c633
    IDIV EBX                            ; 0045c635
    MOV EDX,ESI                         ; 0045c637
    IMUL EDX                            ; 0045c639
    SHRD EAX,EDX,0x10                   ; 0045c63b
    ADD EAX,dword ptr [EDI]             ; 0045c63f
    MOV EDX,dword ptr [ESP + 0x78]      ; 0045c641
        ;   Label: LAB_0045c641
    JMP 0x0045c581                      ; 0045c645
        ;   XREF to: 0045c581 (UNCONDITIONAL_JUMP)  ; LAB_0045c581
    TEST BL,0x8                         ; 0045c64a
        ;   Label: LAB_0045c64a
    JZ 0x0045c581                       ; 0045c64d
        ;   XREF to: 0045c581 (CONDITIONAL_JUMP)  ; LAB_0045c581
    TEST ECX,ECX                        ; 0045c653
    JZ 0x0045c675                       ; 0045c655
        ;   XREF to: 0045c675 (CONDITIONAL_JUMP)  ; LAB_0045c675
    MOV EAX,dword ptr [ESP + 0x70]      ; 0045c657
    MOV EDX,dword ptr [EBP]             ; 0045c65b
    MOV EBX,ECX                         ; 0045c65e
    SUB EAX,EDX                         ; 0045c660
    MOV EDX,0x10000                     ; 0045c662
    IMUL EDX                            ; 0045c667
    IDIV EBX                            ; 0045c669
    MOV EDX,ESI                         ; 0045c66b
    IMUL EDX                            ; 0045c66d
    SHRD EAX,EDX,0x10                   ; 0045c66f
    ADD EAX,dword ptr [EDI]             ; 0045c673
    MOV EDX,dword ptr [ESP + 0x70]      ; 0045c675
        ;   Label: LAB_0045c675
    JMP 0x0045c581                      ; 0045c679
        ;   XREF to: 0045c581 (UNCONDITIONAL_JUMP)  ; LAB_0045c581
    MOV ECX,dword ptr [ESP + 0x68]      ; 0045c67e
        ;   Label: LAB_0045c67e
    MOV dword ptr [ECX],EDX             ; 0045c682
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0045c684
    MOV dword ptr [ECX],EAX             ; 0045c688
    MOV ECX,dword ptr [ESP + 0x70]      ; 0045c68a
    MOV EBX,dword ptr [ESP + 0x68]      ; 0045c68e
    MOV dword ptr [ESP + 0x20],ECX      ; 0045c692
    MOV ECX,dword ptr [ESP + 0x74]      ; 0045c696
    MOV dword ptr [ESP + 0x34],EAX      ; 0045c69a
    MOV dword ptr [ESP + 0x28],ECX      ; 0045c69e
    MOV ECX,dword ptr [ESP + 0x78]      ; 0045c6a2
    MOV EBX,dword ptr [EBX]             ; 0045c6a6
    MOV dword ptr [ESP + 0x30],ECX      ; 0045c6a8
    XOR ECX,ECX                         ; 0045c6ac
    CMP EAX,dword ptr [ESP + 0x7c]      ; 0045c6ae
    JLE 0x0045c6b9                      ; 0045c6b2
        ;   XREF to: 0045c6b9 (CONDITIONAL_JUMP)  ; LAB_0045c6b9
    MOV ECX,0x1                         ; 0045c6b4
    MOV ESI,dword ptr [ESP + 0x34]      ; 0045c6b9
        ;   Label: LAB_0045c6b9
    CMP ESI,dword ptr [ESP + 0x28]      ; 0045c6bd
    JGE 0x0045c6c6                      ; 0045c6c1
        ;   XREF to: 0045c6c6 (CONDITIONAL_JUMP)  ; LAB_0045c6c6
    OR CL,0x2                           ; 0045c6c3
    CMP EBX,dword ptr [ESP + 0x30]      ; 0045c6c6
        ;   Label: LAB_0045c6c6
    JLE 0x0045c6cf                      ; 0045c6ca
        ;   XREF to: 0045c6cf (CONDITIONAL_JUMP)  ; LAB_0045c6cf
    OR CL,0x4                           ; 0045c6cc
    CMP EBX,dword ptr [ESP + 0x20]      ; 0045c6cf
        ;   Label: LAB_0045c6cf
    JGE 0x0045c6d8                      ; 0045c6d3
        ;   XREF to: 0045c6d8 (CONDITIONAL_JUMP)  ; LAB_0045c6d8
    OR CL,0x8                           ; 0045c6d5
    MOV dword ptr [ESP + 0x3c],ECX      ; 0045c6d8
        ;   Label: LAB_0045c6d8
    MOV ECX,dword ptr [ESP + 0x38]      ; 0045c6dc
        ;   Label: LAB_0045c6dc
    INC ECX                             ; 0045c6e0
    MOV dword ptr [ESP + 0x38],ECX      ; 0045c6e1
    CMP ECX,0x64                        ; 0045c6e5
    JL 0x0045c4e9                       ; 0045c6e8
        ;   XREF to: 0045c4e9 (CONDITIONAL_JUMP)  ; LAB_0045c4e9
    JMP 0x0045c513                      ; 0045c6ee
        ;   XREF to: 0045c513 (UNCONDITIONAL_JUMP)  ; LAB_0045c513
    MOV EBP,0x57d97e                    ; 0045c6f3 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045c6f3
    MOV EAX,0x369                       ; 0045c6f8
    PUSH 0x57d996                       ; 0045c6fd | = "2d line clipping exceeded max iterations"
    MOV dword ptr [0x01cc4800],EBP      ; 0045c702 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0045c708 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045c70d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0045c712
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045c715
    ADD ESP,0x48                        ; 0045c719
    POP EBP                             ; 0045c71c
    POP EDI                             ; 0045c71d
    POP ESI                             ; 0045c71e
    POP EBX                             ; 0045c71f
    RET                                 ; 0045c720

