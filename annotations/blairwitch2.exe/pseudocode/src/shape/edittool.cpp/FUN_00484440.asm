; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00484440(CEdScrollBar *param_1)
;
; Local Variables:
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
;   shape_edittool.cpp_FUN_004831d0 at 004833e0
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263ec
;   undefined4 DAT_01c263f0
;   undefined4 DAT_01c26410
;   undefined4 DAT_01c26414
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;   engine_mini3d.cpp_FUN_004f9340
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0
;   shape_edittool.cpp_FUN_00483ea0
;   shape_edittool.cpp_FUN_004840f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484440
        ;   Label: shape_edittool.cpp_FUN_00484440
    PUSH ESI                            ; 00484441
    PUSH EDI                            ; 00484442
    PUSH EBP                            ; 00484443
    MOV EBP,ESP                         ; 00484444
    SUB ESP,0x24                        ; 00484446
    MOV EBX,dword ptr [EBP + 0x14]      ; 00484449
    PUSH EBX                            ; 0048444c
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0 ; 0048444d
        ;   XREF to: 004847e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar * this_ptr)
    MOV EDI,dword ptr [0x01c263ec]      ; 00484452 | DAT_01c263ec
    ADD ESP,0x4                         ; 00484458
    MOV ESI,dword ptr [EBX + 0x20]      ; 0048445b
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0048445e
    MOV EDX,dword ptr [EBX + 0x18]      ; 00484461
    MOV EAX,dword ptr [EBX + 0x14]      ; 00484464
    SUB ESI,0x2                         ; 00484467
    SUB ECX,0x2                         ; 0048446a
    INC EAX                             ; 0048446d
    INC EDX                             ; 0048446e
    MOV dword ptr [EBP + -0x10],EAX     ; 0048446f
    MOV dword ptr [EBP + -0xc],EAX      ; 00484472
    MOV dword ptr [EBP + -0x24],EDX     ; 00484475
    MOV dword ptr [EBP + -0x20],ECX     ; 00484478
    MOV dword ptr [EBP + -0x1c],ESI     ; 0048447b
    MOV EAX,[0x01c263f0]                ; 0048447e | DAT_01c263f0
    CMP dword ptr [0x01c25f84],0x0      ; 00484483 | DAT_01c25f84
    JZ 0x004846ad                       ; 0048448a
        ;   XREF to: 004846ad (CONDITIONAL_JUMP)  ; LAB_004846ad
    CMP dword ptr [0x01c25f84],0x0      ; 00484490 | DAT_01c25f84
    JZ 0x00484698                       ; 00484497
        ;   XREF to: 00484698 (CONDITIONAL_JUMP)  ; LAB_00484698
    AND EAX,0xff                        ; 0048449d
    LEA ESI,[EAX*0x4 + 0x0]             ; 004844a2
    SUB ESI,EAX                         ; 004844a9
    XOR EAX,EAX                         ; 004844ab
    MOV AL,byte ptr [ESI + 0x1c35839]   ; 004844ad | DAT_01c35839
    MOV EDX,EAX                         ; 004844b3
    XOR EAX,EAX                         ; 004844b5
    MOV AL,byte ptr [ESI + 0x1c35838]   ; 004844b7 | DAT_01c35838
    SHL EDX,0x8                         ; 004844bd
    SHL EAX,0x10                        ; 004844c0
    OR EAX,EDX                          ; 004844c3
    XOR EDX,EDX                         ; 004844c5
    MOV DL,byte ptr [ESI + 0x1c3583a]   ; 004844c7 | DAT_01c3583a
    OR EAX,EDX                          ; 004844cd
    PUSH EAX                            ; 004844cf
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 004844d0
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 004844d5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004844d8
        ;   Label: LAB_004844d8
    INC EAX                             ; 004844db
    PUSH EAX                            ; 004844dc
    MOV EAX,dword ptr [EBP + -0x20]     ; 004844dd
    INC EAX                             ; 004844e0
    PUSH EAX                            ; 004844e1
    MOV EAX,dword ptr [EBP + -0x24]     ; 004844e2
    DEC EAX                             ; 004844e5
    PUSH EAX                            ; 004844e6
    MOV EAX,dword ptr [EBP + -0xc]      ; 004844e7
    DEC EAX                             ; 004844ea
    PUSH EAX                            ; 004844eb
    CALL engine_mini3d.cpp_FUN_004f9340 ; 004844ec
        ;   XREF to: 004f9340 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9340()
    MOV ESI,dword ptr [0x01c25f84]      ; 004844f1 | DAT_01c25f84
    ADD ESP,0x10                        ; 004844f7
    TEST ESI,ESI                        ; 004844fa
    JZ 0x004846a2                       ; 004844fc
        ;   XREF to: 004846a2 (CONDITIONAL_JUMP)  ; LAB_004846a2
    MOV EAX,EDI                         ; 00484502
    AND EAX,0xff                        ; 00484504
    LEA ESI,[EAX*0x4 + 0x0]             ; 00484509
    SUB ESI,EAX                         ; 00484510
    XOR EDX,EDX                         ; 00484512
    XOR EAX,EAX                         ; 00484514
    MOV DL,byte ptr [ESI + 0x1c35838]   ; 00484516 | DAT_01c35838
    MOV AL,byte ptr [ESI + 0x1c35839]   ; 0048451c | DAT_01c35839
    SHL EDX,0x10                        ; 00484522
    SHL EAX,0x8                         ; 00484525
    OR EDX,EAX                          ; 00484528
    XOR EAX,EAX                         ; 0048452a
    MOV AL,byte ptr [ESI + 0x1c3583a]   ; 0048452c | DAT_01c3583a
    OR EAX,EDX                          ; 00484532
    PUSH EAX                            ; 00484534
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 00484535
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0048453a
    MOV EDI,dword ptr [EBP + -0x1c]     ; 0048453d
        ;   Label: LAB_0048453d
    PUSH EDI                            ; 00484540
    MOV EAX,dword ptr [EBP + -0x20]     ; 00484541
    PUSH EAX                            ; 00484544
    MOV EDX,dword ptr [EBP + -0x24]     ; 00484545
    PUSH EDX                            ; 00484548
    MOV ECX,dword ptr [EBP + -0xc]      ; 00484549
    PUSH ECX                            ; 0048454c
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0048454d
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 00484552
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00484555
        ;   Label: LAB_00484555
    DEC EAX                             ; 00484558
    MOV EDI,dword ptr [EBX + 0x18]      ; 00484559
    MOV dword ptr [EBP + -0x4],EAX      ; 0048455c
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048455f
    MOV ESI,dword ptr [EBX + 0x14]      ; 00484562
    DEC EAX                             ; 00484565
    INC EDI                             ; 00484566
    MOV dword ptr [EBP + -0x8],EAX      ; 00484567
    MOV EAX,dword ptr [EBX + 0x10]      ; 0048456a
    INC ESI                             ; 0048456d
    TEST EAX,EAX                        ; 0048456e
    JZ 0x004846c3                       ; 00484570
        ;   XREF to: 004846c3 (CONDITIONAL_JUMP)  ; LAB_004846c3
    MOV EDX,dword ptr [EBX + 0x30]      ; 00484576
    MOV ECX,EDI                         ; 00484579
    MOV dword ptr [EBP + -0x18],EDX     ; 0048457b
    MOV EDX,dword ptr [EBP + -0x8]      ; 0048457e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00484581
    MOV dword ptr [EBP + -0x14],EDX     ; 00484584
        ;   Label: LAB_00484584
    CMP EBX,dword ptr [0x01c26410]      ; 00484587 | DAT_01c26410
    JNZ 0x004846d6                      ; 0048458d
        ;   XREF to: 004846d6 (CONDITIONAL_JUMP)  ; LAB_004846d6
    CMP dword ptr [0x01c26414],0x0      ; 00484593 | DAT_01c26414
    JNZ 0x004846d6                      ; 0048459a
        ;   XREF to: 004846d6 (CONDITIONAL_JUMP)  ; LAB_004846d6
    MOV EDX,0x1                         ; 004845a0
    PUSH EDX                            ; 004845a5
        ;   Label: LAB_004845a5
    MOV EDX,dword ptr [EBP + -0x14]     ; 004845a6
    PUSH EDX                            ; 004845a9
    MOV EDX,dword ptr [EBP + -0x18]     ; 004845aa
    PUSH EDX                            ; 004845ad
    PUSH ECX                            ; 004845ae
    PUSH EAX                            ; 004845af
    CALL shape_edittool.cpp_FUN_00483ea0 ; 004845b0
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    MOV ECX,dword ptr [EBX + 0x10]      ; 004845b5
    ADD ESP,0x14                        ; 004845b8
    TEST ECX,ECX                        ; 004845bb
    JZ 0x004846f6                       ; 004845bd
        ;   XREF to: 004846f6 (CONDITIONAL_JUMP)  ; LAB_004846f6
    CMP EBX,dword ptr [0x01c26410]      ; 004845c3 | DAT_01c26410
    JNZ 0x004846dd                      ; 004845c9
        ;   XREF to: 004846dd (CONDITIONAL_JUMP)  ; LAB_004846dd
    MOV EDX,dword ptr [0x01c26414]      ; 004845cf | DAT_01c26414
    CMP EDX,0x1                         ; 004845d5
    JNZ 0x004846dd                      ; 004845d8
        ;   XREF to: 004846dd (CONDITIONAL_JUMP)  ; LAB_004846dd
    MOV EAX,EDX                         ; 004845de
    PUSH EAX                            ; 004845e0
        ;   Label: LAB_004845e0
    MOV ECX,dword ptr [EBP + -0x8]      ; 004845e1
    PUSH ECX                            ; 004845e4
    MOV EAX,dword ptr [EBX + 0x24]      ; 004845e5
    PUSH EAX                            ; 004845e8
    PUSH EDI                            ; 004845e9
    PUSH ESI                            ; 004845ea
    CALL shape_edittool.cpp_FUN_00483ea0 ; 004845eb
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    ADD ESP,0x14                        ; 004845f0
    MOV EDX,dword ptr [0x01c26410]      ; 004845f3 | DAT_01c26410
    PUSH 0x2                            ; 004845f9
    CMP EBX,EDX                         ; 004845fb
    JNZ 0x004846e4                      ; 004845fd
        ;   XREF to: 004846e4 (CONDITIONAL_JUMP)  ; LAB_004846e4
    MOV ECX,dword ptr [0x01c26414]      ; 00484603 | DAT_01c26414
    CMP ECX,0x1                         ; 00484609
    JNZ 0x004846e4                      ; 0048460c
        ;   XREF to: 004846e4 (CONDITIONAL_JUMP)  ; LAB_004846e4
    MOV EAX,ECX                         ; 00484612
    PUSH EAX                            ; 00484614
        ;   Label: LAB_00484614
    MOV EAX,dword ptr [EBP + -0x8]      ; 00484615
    PUSH EAX                            ; 00484618
    MOV EDX,dword ptr [EBX + 0x24]      ; 00484619
    PUSH EDX                            ; 0048461c
    PUSH EDI                            ; 0048461d
    PUSH ESI                            ; 0048461e
    CALL shape_edittool.cpp_FUN_004840f0 ; 0048461f
        ;   XREF to: 004840f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004840f0()
    MOV ECX,dword ptr [0x01c26410]      ; 00484624 | DAT_01c26410
    ADD ESP,0x18                        ; 0048462a
    CMP EBX,ECX                         ; 0048462d
    JNZ 0x004846eb                      ; 0048462f
        ;   XREF to: 004846eb (CONDITIONAL_JUMP)  ; LAB_004846eb
    CMP dword ptr [0x01c26414],0x2      ; 00484635 | DAT_01c26414
    JNZ 0x004846eb                      ; 0048463c
        ;   XREF to: 004846eb (CONDITIONAL_JUMP)  ; LAB_004846eb
    MOV EAX,0x1                         ; 00484642
    PUSH EAX                            ; 00484647
        ;   Label: LAB_00484647
    MOV EAX,dword ptr [EBP + -0x8]      ; 00484648
    PUSH EAX                            ; 0048464b
    MOV EDX,dword ptr [EBP + -0x4]      ; 0048464c
    PUSH EDX                            ; 0048464f
    PUSH EDI                            ; 00484650
    MOV ECX,dword ptr [EBX + 0x28]      ; 00484651
    PUSH ECX                            ; 00484654
    CALL shape_edittool.cpp_FUN_00483ea0 ; 00484655
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    ADD ESP,0x14                        ; 0048465a
    MOV ESI,dword ptr [0x01c26410]      ; 0048465d | DAT_01c26410
    PUSH 0x3                            ; 00484663
    CMP EBX,ESI                         ; 00484665
    JNZ 0x004846f2                      ; 00484667
        ;   XREF to: 004846f2 (CONDITIONAL_JUMP)  ; LAB_004846f2
    CMP dword ptr [0x01c26414],0x2      ; 0048466d | DAT_01c26414
    JNZ 0x004846f2                      ; 00484674
        ;   XREF to: 004846f2 (CONDITIONAL_JUMP)  ; LAB_004846f2
    MOV EAX,0x1                         ; 00484676
    PUSH EAX                            ; 0048467b
        ;   Label: LAB_0048467b
    MOV EDX,dword ptr [EBP + -0x8]      ; 0048467c
    PUSH EDX                            ; 0048467f
    MOV ECX,dword ptr [EBP + -0x4]      ; 00484680
    PUSH ECX                            ; 00484683
    PUSH EDI                            ; 00484684
    MOV ESI,dword ptr [EBX + 0x28]      ; 00484685
    PUSH ESI                            ; 00484688
    CALL shape_edittool.cpp_FUN_004840f0 ; 00484689
        ;   XREF to: 004840f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004840f0()
    ADD ESP,0x18                        ; 0048468e
    MOV ESP,EBP                         ; 00484691
    POP EBP                             ; 00484693
    POP EDI                             ; 00484694
    POP ESI                             ; 00484695
    POP EBX                             ; 00484696
    RET                                 ; 00484697
    MOV [0x01c35e60],EAX                ; 00484698 | DAT_01c35e60
        ;   Label: LAB_00484698
    JMP 0x004844d8                      ; 0048469d
        ;   XREF to: 004844d8 (UNCONDITIONAL_JUMP)  ; LAB_004844d8
    MOV dword ptr [0x01c35e60],EDI      ; 004846a2 | DAT_01c35e60
        ;   Label: LAB_004846a2
    JMP 0x0048453d                      ; 004846a8
        ;   XREF to: 0048453d (UNCONDITIONAL_JUMP)  ; LAB_0048453d
    PUSH EAX                            ; 004846ad
        ;   Label: LAB_004846ad
    PUSH EDI                            ; 004846ae
    PUSH ESI                            ; 004846af
    PUSH ECX                            ; 004846b0
    PUSH EDX                            ; 004846b1
    MOV EDX,dword ptr [EBP + -0x10]     ; 004846b2
    PUSH EDX                            ; 004846b5
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004846b6
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004846bb
    JMP 0x00484555                      ; 004846be
        ;   XREF to: 00484555 (UNCONDITIONAL_JUMP)  ; LAB_00484555
    MOV EDX,dword ptr [EBP + -0x4]      ; 004846c3
        ;   Label: LAB_004846c3
    MOV EAX,ESI                         ; 004846c6
    MOV dword ptr [EBP + -0x18],EDX     ; 004846c8
    MOV EDX,dword ptr [EBX + 0x30]      ; 004846cb
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004846ce
    JMP 0x00484584                      ; 004846d1
        ;   XREF to: 00484584 (UNCONDITIONAL_JUMP)  ; LAB_00484584
    XOR EDX,EDX                         ; 004846d6
        ;   Label: LAB_004846d6
    JMP 0x004845a5                      ; 004846d8
        ;   XREF to: 004845a5 (UNCONDITIONAL_JUMP)  ; LAB_004845a5
    XOR EAX,EAX                         ; 004846dd
        ;   Label: LAB_004846dd
    JMP 0x004845e0                      ; 004846df
        ;   XREF to: 004845e0 (UNCONDITIONAL_JUMP)  ; LAB_004845e0
    XOR EAX,EAX                         ; 004846e4
        ;   Label: LAB_004846e4
    JMP 0x00484614                      ; 004846e6
        ;   XREF to: 00484614 (UNCONDITIONAL_JUMP)  ; LAB_00484614
    XOR EAX,EAX                         ; 004846eb
        ;   Label: LAB_004846eb
    JMP 0x00484647                      ; 004846ed
        ;   XREF to: 00484647 (UNCONDITIONAL_JUMP)  ; LAB_00484647
    XOR EAX,EAX                         ; 004846f2
        ;   Label: LAB_004846f2
    JMP 0x0048467b                      ; 004846f4
        ;   XREF to: 0048467b (UNCONDITIONAL_JUMP)  ; LAB_0048467b
    CMP EBX,dword ptr [0x01c26410]      ; 004846f6 | DAT_01c26410
        ;   Label: LAB_004846f6
    JNZ 0x004847bf                      ; 004846fc
        ;   XREF to: 004847bf (CONDITIONAL_JUMP)  ; LAB_004847bf
    MOV EDX,dword ptr [0x01c26414]      ; 00484702 | DAT_01c26414
    CMP EDX,0x1                         ; 00484708
    JNZ 0x004847bf                      ; 0048470b
        ;   XREF to: 004847bf (CONDITIONAL_JUMP)  ; LAB_004847bf
    MOV EAX,EDX                         ; 00484711
    PUSH EAX                            ; 00484713
        ;   Label: LAB_00484713
    MOV ECX,dword ptr [EBX + 0x24]      ; 00484714
    PUSH ECX                            ; 00484717
    MOV EAX,dword ptr [EBP + -0x4]      ; 00484718
    PUSH EAX                            ; 0048471b
    PUSH EDI                            ; 0048471c
    PUSH ESI                            ; 0048471d
    CALL shape_edittool.cpp_FUN_00483ea0 ; 0048471e
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    ADD ESP,0x14                        ; 00484723
    MOV EDX,dword ptr [0x01c26410]      ; 00484726 | DAT_01c26410
    PUSH 0x0                            ; 0048472c
    CMP EBX,EDX                         ; 0048472e
    JNZ 0x004847c6                      ; 00484730
        ;   XREF to: 004847c6 (CONDITIONAL_JUMP)  ; LAB_004847c6
    MOV ECX,dword ptr [0x01c26414]      ; 00484736 | DAT_01c26414
    CMP ECX,0x1                         ; 0048473c
    JNZ 0x004847c6                      ; 0048473f
        ;   XREF to: 004847c6 (CONDITIONAL_JUMP)  ; LAB_004847c6
    MOV EAX,ECX                         ; 00484745
    PUSH EAX                            ; 00484747
        ;   Label: LAB_00484747
    MOV EAX,dword ptr [EBX + 0x24]      ; 00484748
    PUSH EAX                            ; 0048474b
    MOV EDX,dword ptr [EBP + -0x4]      ; 0048474c
    PUSH EDX                            ; 0048474f
    PUSH EDI                            ; 00484750
    PUSH ESI                            ; 00484751
    CALL shape_edittool.cpp_FUN_004840f0 ; 00484752
        ;   XREF to: 004840f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004840f0()
    MOV ECX,dword ptr [0x01c26410]      ; 00484757 | DAT_01c26410
    ADD ESP,0x18                        ; 0048475d
    CMP EBX,ECX                         ; 00484760
    JNZ 0x004847cd                      ; 00484762
        ;   XREF to: 004847cd (CONDITIONAL_JUMP)  ; LAB_004847cd
    CMP dword ptr [0x01c26414],0x2      ; 00484764 | DAT_01c26414
    JNZ 0x004847cd                      ; 0048476b
        ;   XREF to: 004847cd (CONDITIONAL_JUMP)  ; LAB_004847cd
    MOV EAX,0x1                         ; 0048476d
    PUSH EAX                            ; 00484772
        ;   Label: LAB_00484772
    MOV EAX,dword ptr [EBP + -0x8]      ; 00484773
    PUSH EAX                            ; 00484776
    MOV EDX,dword ptr [EBP + -0x4]      ; 00484777
    PUSH EDX                            ; 0048477a
    MOV ECX,dword ptr [EBX + 0x28]      ; 0048477b
    PUSH ECX                            ; 0048477e
    PUSH ESI                            ; 0048477f
    CALL shape_edittool.cpp_FUN_00483ea0 ; 00484780
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    ADD ESP,0x14                        ; 00484785
    MOV EDI,dword ptr [0x01c26410]      ; 00484788 | DAT_01c26410
    PUSH 0x1                            ; 0048478e
    CMP EBX,EDI                         ; 00484790
    JNZ 0x004847d1                      ; 00484792
        ;   XREF to: 004847d1 (CONDITIONAL_JUMP)  ; LAB_004847d1
    CMP dword ptr [0x01c26414],0x2      ; 00484794 | DAT_01c26414
    JNZ 0x004847d1                      ; 0048479b
        ;   XREF to: 004847d1 (CONDITIONAL_JUMP)  ; LAB_004847d1
    MOV EAX,0x1                         ; 0048479d
    PUSH EAX                            ; 004847a2
        ;   Label: LAB_004847a2
    MOV EDX,dword ptr [EBP + -0x8]      ; 004847a3
    PUSH EDX                            ; 004847a6
    MOV ECX,dword ptr [EBP + -0x4]      ; 004847a7
    PUSH ECX                            ; 004847aa
    MOV EDI,dword ptr [EBX + 0x28]      ; 004847ab
    PUSH EDI                            ; 004847ae
    PUSH ESI                            ; 004847af
    CALL shape_edittool.cpp_FUN_004840f0 ; 004847b0
        ;   XREF to: 004840f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004840f0()
    ADD ESP,0x18                        ; 004847b5
    MOV ESP,EBP                         ; 004847b8
    POP EBP                             ; 004847ba
    POP EDI                             ; 004847bb
    POP ESI                             ; 004847bc
    POP EBX                             ; 004847bd
    RET                                 ; 004847be
    XOR EAX,EAX                         ; 004847bf
        ;   Label: LAB_004847bf
    JMP 0x00484713                      ; 004847c1
        ;   XREF to: 00484713 (UNCONDITIONAL_JUMP)  ; LAB_00484713
    XOR EAX,EAX                         ; 004847c6
        ;   Label: LAB_004847c6
    JMP 0x00484747                      ; 004847c8
        ;   XREF to: 00484747 (UNCONDITIONAL_JUMP)  ; LAB_00484747
    XOR EAX,EAX                         ; 004847cd
        ;   Label: LAB_004847cd
    JMP 0x00484772                      ; 004847cf
        ;   XREF to: 00484772 (UNCONDITIONAL_JUMP)  ; LAB_00484772
    XOR EAX,EAX                         ; 004847d1
        ;   Label: LAB_004847d1
    JMP 0x004847a2                      ; 004847d3
        ;   XREF to: 004847a2 (UNCONDITIONAL_JUMP)  ; LAB_004847a2

