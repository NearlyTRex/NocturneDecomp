; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476580(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004759d0 at 00475b2d
;
; Referenced Globals:
;   undefined4 DAT_01bcde24
;   undefined4 DAT_01bcde28
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800
;   shape_edittool.cpp_draw3DBorder_FUN_00476260
;   shape_edittool.cpp_draw3DInsetBorder_FUN_00476310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476580
        ;   Label: FUN_00476580
    PUSH ESI                            ; 00476581
    PUSH EDI                            ; 00476582
    PUSH EBP                            ; 00476583
    MOV EBP,ESP                         ; 00476584
    SUB ESP,0x10                        ; 00476586
    MOV EBX,dword ptr [EBP + 0x14]      ; 00476589
    PUSH EBX                            ; 0047658c
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800 ; 0047658d
        ;   XREF to: 00476800 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800()
    ADD ESP,0x4                         ; 00476592
    PUSH 0x7                            ; 00476595
    MOV EAX,dword ptr [EBX + 0x20]      ; 00476597
    PUSH 0x0                            ; 0047659a
    SUB EAX,0x2                         ; 0047659c
    PUSH EAX                            ; 0047659f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004765a0
    SUB EAX,0x2                         ; 004765a3
    PUSH EAX                            ; 004765a6
    MOV EAX,dword ptr [EBX + 0x18]      ; 004765a7
    INC EAX                             ; 004765aa
    PUSH EAX                            ; 004765ab
    MOV EAX,dword ptr [EBX + 0x14]      ; 004765ac
    INC EAX                             ; 004765af
    PUSH EAX                            ; 004765b0
    CALL engine_2d.c_fillRectWithBorder_FUN_00403ef0 ; 004765b1
        ;   XREF to: 00403ef0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectWithBorder_FUN_00403ef0()
    ADD ESP,0x18                        ; 004765b6
    MOV EAX,dword ptr [EBX + 0x14]      ; 004765b9
    MOV EDI,dword ptr [EBX + 0x18]      ; 004765bc
    MOV ESI,dword ptr [EBX + 0x20]      ; 004765bf
    INC EAX                             ; 004765c2
    MOV EDX,dword ptr [EBX + 0x10]      ; 004765c3
    MOV dword ptr [EBP + -0x8],EAX      ; 004765c6
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004765c9
    INC EDI                             ; 004765cc
    DEC EAX                             ; 004765cd
    DEC ESI                             ; 004765ce
    MOV dword ptr [EBP + -0x4],EAX      ; 004765cf
    TEST EDX,EDX                        ; 004765d2
    JNZ 0x004766eb                      ; 004765d4
        ;   XREF to: 004766eb (CONDITIONAL_JUMP)  ; LAB_004766eb
    MOV EDX,dword ptr [EBP + -0x4]      ; 004765da
    MOV EAX,dword ptr [EBP + -0x8]      ; 004765dd
    MOV dword ptr [EBP + -0x10],EDX     ; 004765e0
    MOV EDX,dword ptr [EBX + 0x30]      ; 004765e3
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004765e6
    MOV dword ptr [EBP + -0xc],EDX      ; 004765e9
    CMP EBX,dword ptr [0x01bcde24]      ; 004765ec | DAT_01bcde24
        ;   Label: LAB_004765ec
    JNZ 0x004766fe                      ; 004765f2
        ;   XREF to: 004766fe (CONDITIONAL_JUMP)  ; LAB_004766fe
    CMP dword ptr [0x01bcde28],0x0      ; 004765f8 | DAT_01bcde28
    JNZ 0x004766fe                      ; 004765ff
        ;   XREF to: 004766fe (CONDITIONAL_JUMP)  ; LAB_004766fe
    MOV EDX,0x1                         ; 00476605
    PUSH EDX                            ; 0047660a
        ;   Label: LAB_0047660a
    MOV EDX,dword ptr [EBP + -0xc]      ; 0047660b
    PUSH EDX                            ; 0047660e
    MOV EDX,dword ptr [EBP + -0x10]     ; 0047660f
    PUSH EDX                            ; 00476612
    PUSH ECX                            ; 00476613
    PUSH EAX                            ; 00476614
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 00476615
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DBorder_FUN_00476260()
    MOV ECX,dword ptr [EBX + 0x10]      ; 0047661a
    ADD ESP,0x14                        ; 0047661d
    TEST ECX,ECX                        ; 00476620
    JZ 0x0047671b                       ; 00476622
        ;   XREF to: 0047671b (CONDITIONAL_JUMP)  ; LAB_0047671b
    CMP EBX,dword ptr [0x01bcde24]      ; 00476628 | DAT_01bcde24
    JNZ 0x00476705                      ; 0047662e
        ;   XREF to: 00476705 (CONDITIONAL_JUMP)  ; LAB_00476705
    MOV ECX,dword ptr [0x01bcde28]      ; 00476634 | DAT_01bcde28
    CMP ECX,0x1                         ; 0047663a
    JNZ 0x00476705                      ; 0047663d
        ;   XREF to: 00476705 (CONDITIONAL_JUMP)  ; LAB_00476705
    MOV EAX,ECX                         ; 00476643
    PUSH EAX                            ; 00476645
        ;   Label: LAB_00476645
    PUSH ESI                            ; 00476646
    MOV EAX,dword ptr [EBX + 0x24]      ; 00476647
    PUSH EAX                            ; 0047664a
    PUSH EDI                            ; 0047664b
    MOV EDX,dword ptr [EBP + -0x8]      ; 0047664c
    PUSH EDX                            ; 0047664f
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 00476650
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DBorder_FUN_00476260()
    ADD ESP,0x14                        ; 00476655
    MOV ECX,dword ptr [0x01bcde24]      ; 00476658 | DAT_01bcde24
    PUSH 0x2                            ; 0047665e
    CMP EBX,ECX                         ; 00476660
    JNZ 0x0047670c                      ; 00476662
        ;   XREF to: 0047670c (CONDITIONAL_JUMP)  ; LAB_0047670c
    MOV EAX,[0x01bcde28]                ; 00476668 | DAT_01bcde28
    CMP EAX,0x1                         ; 0047666d
    JNZ 0x0047670c                      ; 00476670
        ;   XREF to: 0047670c (CONDITIONAL_JUMP)  ; LAB_0047670c
    PUSH EAX                            ; 00476676
        ;   Label: LAB_00476676
    PUSH ESI                            ; 00476677
    MOV EDX,dword ptr [EBX + 0x24]      ; 00476678
    PUSH EDX                            ; 0047667b
    PUSH EDI                            ; 0047667c
    MOV ECX,dword ptr [EBP + -0x8]      ; 0047667d
    PUSH ECX                            ; 00476680
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_00476310 ; 00476681
        ;   XREF to: 00476310 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DInsetBorder_FUN_00476310()
    MOV EAX,[0x01bcde24]                ; 00476686 | DAT_01bcde24
    ADD ESP,0x18                        ; 0047668b
    CMP EBX,EAX                         ; 0047668e
    JNZ 0x00476713                      ; 00476690
        ;   XREF to: 00476713 (CONDITIONAL_JUMP)  ; LAB_00476713
    CMP dword ptr [0x01bcde28],0x2      ; 00476696 | DAT_01bcde28
    JNZ 0x00476713                      ; 0047669d
        ;   XREF to: 00476713 (CONDITIONAL_JUMP)  ; LAB_00476713
    MOV EAX,0x1                         ; 0047669f
    PUSH EAX                            ; 004766a4
        ;   Label: LAB_004766a4
    PUSH ESI                            ; 004766a5
    MOV ECX,dword ptr [EBP + -0x4]      ; 004766a6
    PUSH ECX                            ; 004766a9
    PUSH EDI                            ; 004766aa
    MOV EAX,dword ptr [EBX + 0x28]      ; 004766ab
    PUSH EAX                            ; 004766ae
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 004766af
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DBorder_FUN_00476260()
    ADD ESP,0x14                        ; 004766b4
    MOV EDX,dword ptr [0x01bcde24]      ; 004766b7 | DAT_01bcde24
    PUSH 0x3                            ; 004766bd
    CMP EBX,EDX                         ; 004766bf
    JNZ 0x00476717                      ; 004766c1
        ;   XREF to: 00476717 (CONDITIONAL_JUMP)  ; LAB_00476717
    CMP dword ptr [0x01bcde28],0x2      ; 004766c3 | DAT_01bcde28
    JNZ 0x00476717                      ; 004766ca
        ;   XREF to: 00476717 (CONDITIONAL_JUMP)  ; LAB_00476717
    MOV EAX,0x1                         ; 004766cc
    PUSH EAX                            ; 004766d1
        ;   Label: LAB_004766d1
    PUSH ESI                            ; 004766d2
    MOV ESI,dword ptr [EBP + -0x4]      ; 004766d3
    PUSH ESI                            ; 004766d6
    PUSH EDI                            ; 004766d7
    MOV EDI,dword ptr [EBX + 0x28]      ; 004766d8
    PUSH EDI                            ; 004766db
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_00476310 ; 004766dc
        ;   XREF to: 00476310 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DInsetBorder_FUN_00476310()
    ADD ESP,0x18                        ; 004766e1
    MOV ESP,EBP                         ; 004766e4
    POP EBP                             ; 004766e6
    POP EDI                             ; 004766e7
    POP ESI                             ; 004766e8
    POP EBX                             ; 004766e9
    RET                                 ; 004766ea
    MOV ECX,EDI                         ; 004766eb
        ;   Label: LAB_004766eb
    MOV dword ptr [EBP + -0xc],ESI      ; 004766ed
    MOV EDX,dword ptr [EBX + 0x30]      ; 004766f0
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004766f3
    MOV dword ptr [EBP + -0x10],EDX     ; 004766f6
    JMP 0x004765ec                      ; 004766f9
        ;   XREF to: 004765ec (UNCONDITIONAL_JUMP)  ; LAB_004765ec
    XOR EDX,EDX                         ; 004766fe
        ;   Label: LAB_004766fe
    JMP 0x0047660a                      ; 00476700
        ;   XREF to: 0047660a (UNCONDITIONAL_JUMP)  ; LAB_0047660a
    XOR EAX,EAX                         ; 00476705
        ;   Label: LAB_00476705
    JMP 0x00476645                      ; 00476707
        ;   XREF to: 00476645 (UNCONDITIONAL_JUMP)  ; LAB_00476645
    XOR EAX,EAX                         ; 0047670c
        ;   Label: LAB_0047670c
    JMP 0x00476676                      ; 0047670e
        ;   XREF to: 00476676 (UNCONDITIONAL_JUMP)  ; LAB_00476676
    XOR EAX,EAX                         ; 00476713
        ;   Label: LAB_00476713
    JMP 0x004766a4                      ; 00476715
        ;   XREF to: 004766a4 (UNCONDITIONAL_JUMP)  ; LAB_004766a4
    XOR EAX,EAX                         ; 00476717
        ;   Label: LAB_00476717
    JMP 0x004766d1                      ; 00476719
        ;   XREF to: 004766d1 (UNCONDITIONAL_JUMP)  ; LAB_004766d1
    CMP EBX,dword ptr [0x01bcde24]      ; 0047671b | DAT_01bcde24
        ;   Label: LAB_0047671b
    JNZ 0x004767e6                      ; 00476721
        ;   XREF to: 004767e6 (CONDITIONAL_JUMP)  ; LAB_004767e6
    MOV EDX,dword ptr [0x01bcde28]      ; 00476727 | DAT_01bcde28
    CMP EDX,0x1                         ; 0047672d
    JNZ 0x004767e6                      ; 00476730
        ;   XREF to: 004767e6 (CONDITIONAL_JUMP)  ; LAB_004767e6
    MOV EAX,EDX                         ; 00476736
    PUSH EAX                            ; 00476738
        ;   Label: LAB_00476738
    MOV ECX,dword ptr [EBX + 0x24]      ; 00476739
    PUSH ECX                            ; 0047673c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0047673d
    PUSH EAX                            ; 00476740
    PUSH EDI                            ; 00476741
    MOV EDX,dword ptr [EBP + -0x8]      ; 00476742
    PUSH EDX                            ; 00476745
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 00476746
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DBorder_FUN_00476260()
    ADD ESP,0x14                        ; 0047674b
    MOV ECX,dword ptr [0x01bcde24]      ; 0047674e | DAT_01bcde24
    PUSH 0x0                            ; 00476754
    CMP EBX,ECX                         ; 00476756
    JNZ 0x004767ed                      ; 00476758
        ;   XREF to: 004767ed (CONDITIONAL_JUMP)  ; LAB_004767ed
    MOV EAX,[0x01bcde28]                ; 0047675e | DAT_01bcde28
    CMP EAX,0x1                         ; 00476763
    JNZ 0x004767ed                      ; 00476766
        ;   XREF to: 004767ed (CONDITIONAL_JUMP)  ; LAB_004767ed
    PUSH EAX                            ; 0047676c
        ;   Label: LAB_0047676c
    MOV EDX,dword ptr [EBX + 0x24]      ; 0047676d
    PUSH EDX                            ; 00476770
    MOV ECX,dword ptr [EBP + -0x4]      ; 00476771
    PUSH ECX                            ; 00476774
    PUSH EDI                            ; 00476775
    MOV EDI,dword ptr [EBP + -0x8]      ; 00476776
    PUSH EDI                            ; 00476779
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_00476310 ; 0047677a
        ;   XREF to: 00476310 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DInsetBorder_FUN_00476310()
    MOV EAX,[0x01bcde24]                ; 0047677f | DAT_01bcde24
    ADD ESP,0x18                        ; 00476784
    CMP EBX,EAX                         ; 00476787
    JNZ 0x004767f4                      ; 00476789
        ;   XREF to: 004767f4 (CONDITIONAL_JUMP)  ; LAB_004767f4
    CMP dword ptr [0x01bcde28],0x2      ; 0047678b | DAT_01bcde28
    JNZ 0x004767f4                      ; 00476792
        ;   XREF to: 004767f4 (CONDITIONAL_JUMP)  ; LAB_004767f4
    MOV EAX,0x1                         ; 00476794
    PUSH EAX                            ; 00476799
        ;   Label: LAB_00476799
    PUSH ESI                            ; 0047679a
    MOV ECX,dword ptr [EBP + -0x4]      ; 0047679b
    PUSH ECX                            ; 0047679e
    MOV EDI,dword ptr [EBX + 0x28]      ; 0047679f
    PUSH EDI                            ; 004767a2
    MOV EAX,dword ptr [EBP + -0x8]      ; 004767a3
    PUSH EAX                            ; 004767a6
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 004767a7
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DBorder_FUN_00476260()
    ADD ESP,0x14                        ; 004767ac
    MOV EDX,dword ptr [0x01bcde24]      ; 004767af | DAT_01bcde24
    PUSH 0x1                            ; 004767b5
    CMP EBX,EDX                         ; 004767b7
    JNZ 0x004767f8                      ; 004767b9
        ;   XREF to: 004767f8 (CONDITIONAL_JUMP)  ; LAB_004767f8
    CMP dword ptr [0x01bcde28],0x2      ; 004767bb | DAT_01bcde28
    JNZ 0x004767f8                      ; 004767c2
        ;   XREF to: 004767f8 (CONDITIONAL_JUMP)  ; LAB_004767f8
    MOV EAX,0x1                         ; 004767c4
    PUSH EAX                            ; 004767c9
        ;   Label: LAB_004767c9
    PUSH ESI                            ; 004767ca
    MOV ESI,dword ptr [EBP + -0x4]      ; 004767cb
    PUSH ESI                            ; 004767ce
    MOV EDI,dword ptr [EBX + 0x28]      ; 004767cf
    PUSH EDI                            ; 004767d2
    MOV EAX,dword ptr [EBP + -0x8]      ; 004767d3
    PUSH EAX                            ; 004767d6
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_00476310 ; 004767d7
        ;   XREF to: 00476310 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DInsetBorder_FUN_00476310()
    ADD ESP,0x18                        ; 004767dc
    MOV ESP,EBP                         ; 004767df
    POP EBP                             ; 004767e1
    POP EDI                             ; 004767e2
    POP ESI                             ; 004767e3
    POP EBX                             ; 004767e4
    RET                                 ; 004767e5
    XOR EAX,EAX                         ; 004767e6
        ;   Label: LAB_004767e6
    JMP 0x00476738                      ; 004767e8
        ;   XREF to: 00476738 (UNCONDITIONAL_JUMP)  ; LAB_00476738
    XOR EAX,EAX                         ; 004767ed
        ;   Label: LAB_004767ed
    JMP 0x0047676c                      ; 004767ef
        ;   XREF to: 0047676c (UNCONDITIONAL_JUMP)  ; LAB_0047676c
    XOR EAX,EAX                         ; 004767f4
        ;   Label: LAB_004767f4
    JMP 0x00476799                      ; 004767f6
        ;   XREF to: 00476799 (UNCONDITIONAL_JUMP)  ; LAB_00476799
    XOR EAX,EAX                         ; 004767f8
        ;   Label: LAB_004767f8
    JMP 0x004767c9                      ; 004767fa
        ;   XREF to: 004767c9 (UNCONDITIONAL_JUMP)  ; LAB_004767c9

