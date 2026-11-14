; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046b670(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b670
        ;   Label: engine_drender.cpp_FUN_0046b670
    PUSH ESI                            ; 0046b671
    PUSH EDI                            ; 0046b672
    PUSH EBP                            ; 0046b673
    SUB ESP,0x8                         ; 0046b674
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046b677
    CMP dword ptr [EBX + 0xc],0x0       ; 0046b67b
    JNZ 0x0046b741                      ; 0046b67f
        ;   XREF to: 0046b741 (CONDITIONAL_JUMP)  ; LAB_0046b741
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046b685
        ;   Label: LAB_0046b685
    MOV ECX,0xffffffff                  ; 0046b689
    XOR ESI,ESI                         ; 0046b68e
    MOV EDI,dword ptr [EAX + 0x4]       ; 0046b690
    MOV dword ptr [ESP + 0x4],ECX       ; 0046b693
    TEST EDI,EDI                        ; 0046b697
    JLE 0x0046b6e0                      ; 0046b699
        ;   XREF to: 0046b6e0 (CONDITIONAL_JUMP)  ; LAB_0046b6e0
    MOV ECX,EAX                         ; 0046b69b
    XOR EDX,EDX                         ; 0046b69d
    MOV EDI,dword ptr [ECX + 0x18]      ; 0046b69f
        ;   Label: LAB_0046b69f
    MOV dword ptr [EDX + 0x1bdd818],EDI ; 0046b6a2
    LEA EAX,[EDI*0x4 + 0x0]             ; 0046b6a8
    SUB EAX,EDI                         ; 0046b6af
    MOV EDI,dword ptr [EBX]             ; 0046b6b1
    SHL EAX,0x4                         ; 0046b6b3
    MOV EBP,dword ptr [ESP + 0x4]       ; 0046b6b6
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x10] ; 0046b6ba
    ADD EDX,0x4                         ; 0046b6be
    AND EBP,EAX                         ; 0046b6c1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046b6c3
    ADD ECX,0xc                         ; 0046b6c7
    INC ESI                             ; 0046b6ca
    MOV EDI,dword ptr [EAX + 0x4]       ; 0046b6cb
    MOV dword ptr [ESP + 0x4],EBP       ; 0046b6ce
    CMP ESI,EDI                         ; 0046b6d2
    JL 0x0046b69f                       ; 0046b6d4
        ;   XREF to: 0046b69f (CONDITIONAL_JUMP)  ; LAB_0046b69f
    LEA EAX,[EAX]                       ; 0046b6d6
    LEA EDX,[EDX]                       ; 0046b6dc
    TEST byte ptr [ESP + 0x7],0x80      ; 0046b6e0
        ;   Label: LAB_0046b6e0
    JZ 0x0046b6ee                       ; 0046b6e5
        ;   XREF to: 0046b6ee (CONDITIONAL_JUMP)  ; LAB_0046b6ee
    TEST byte ptr [ESP + 0x4],0x1f      ; 0046b6e7
    JNZ 0x0046b739                      ; 0046b6ec
        ;   XREF to: 0046b739 (CONDITIONAL_JUMP)  ; LAB_0046b739
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b6ee
        ;   Label: LAB_0046b6ee
    JZ 0x0046b75a                       ; 0046b6f2
        ;   XREF to: 0046b75a (CONDITIONAL_JUMP)  ; LAB_0046b75a
    LEA EAX,[EAX]                       ; 0046b6f4
    LEA EDX,[EDX]                       ; 0046b6fa
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b700
        ;   Label: LAB_0046b700
    JZ 0x0046b7a9                       ; 0046b704
        ;   XREF to: 0046b7a9 (CONDITIONAL_JUMP)  ; LAB_0046b7a9
    XOR EDI,EDI                         ; 0046b70a
    MOV ESI,0x46f9a6                    ; 0046b70c
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046b711 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046b717 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ESI      ; 0046b71d | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046b723
        ;   Label: LAB_0046b723
    PUSH 0x1bdd818                      ; 0046b727
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046b72c
    PUSH EDX                            ; 0046b72f
    PUSH EBX                            ; 0046b730
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b731
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046b736
    ADD ESP,0x8                         ; 0046b739
        ;   Label: LAB_0046b739
    POP EBP                             ; 0046b73c
    POP EDI                             ; 0046b73d
    POP ESI                             ; 0046b73e
    POP EBX                             ; 0046b73f
    RET                                 ; 0046b740
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046b741
        ;   Label: LAB_0046b741
    ADD EAX,0x8                         ; 0046b745
    PUSH EAX                            ; 0046b748
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b749
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046b74e
    TEST EAX,EAX                        ; 0046b751
    JZ 0x0046b739                       ; 0046b753
        ;   XREF to: 0046b739 (CONDITIONAL_JUMP)  ; LAB_0046b739
    JMP 0x0046b685                      ; 0046b755
        ;   XREF to: 0046b685 (UNCONDITIONAL_JUMP)  ; LAB_0046b685
    CMP dword ptr [EBX + 0x20],0x0      ; 0046b75a
        ;   Label: LAB_0046b75a
    JNZ 0x0046b700                      ; 0046b75e
        ;   XREF to: 0046b700 (CONDITIONAL_JUMP)  ; LAB_0046b700
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046b760
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046b764
    XOR EDX,EDX                         ; 0046b767
    TEST ECX,ECX                        ; 0046b769
    JLE 0x0046b700                      ; 0046b76b
        ;   XREF to: 0046b700 (CONDITIONAL_JUMP)  ; LAB_0046b700
    XOR ECX,ECX                         ; 0046b76d
    MOV ESI,dword ptr [ECX + 0x1bdd818] ; 0046b76f
        ;   Label: LAB_0046b76f
    IMUL ESI,ESI,0x30                   ; 0046b775
    MOV EDI,dword ptr [EBX]             ; 0046b778
    ADD EDI,ESI                         ; 0046b77a
    MOV dword ptr [ESP],EDI             ; 0046b77c
    MOV EBP,dword ptr [ESP]             ; 0046b77f
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0046b782
    MOV dword ptr [EBP + 0x18],EDI      ; 0046b785
    MOV EDI,dword ptr [EBX]             ; 0046b788
    ADD EDI,ESI                         ; 0046b78a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046b78c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046b78f
    MOV ESI,dword ptr [ESP + 0x20]      ; 0046b792
    ADD EAX,0xc                         ; 0046b796
    INC EDX                             ; 0046b799
    MOV EDI,dword ptr [ESI + 0x4]       ; 0046b79a
    ADD ECX,0x4                         ; 0046b79d
    CMP EDX,EDI                         ; 0046b7a0
    JL 0x0046b76f                       ; 0046b7a2
        ;   XREF to: 0046b76f (CONDITIONAL_JUMP)  ; LAB_0046b76f
    JMP 0x0046b700                      ; 0046b7a4
        ;   XREF to: 0046b700 (UNCONDITIONAL_JUMP)  ; LAB_0046b700
    MOV EDX,0xc1                        ; 0046b7a9
        ;   Label: LAB_0046b7a9
    MOV ECX,0x3                         ; 0046b7ae
    MOV EAX,0x470130                    ; 0046b7b3
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046b7b8 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046b7be | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046b7c4 | DAT_01c6b5cc
    JMP 0x0046b723                      ; 0046b7c9
        ;   XREF to: 0046b723 (UNCONDITIONAL_JUMP)  ; LAB_0046b723

