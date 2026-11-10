; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480410(CEditorTools *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_game.cpp_FUN_004b6f30 at 004b796c
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 004849d2
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047cb5a
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d897
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c4ff
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd2dd
;   TerminatedCString s_CEditorTools_setMousePoi_005bd2f3
;   undefined4 DAT_005fb144
;   undefined4 DAT_005fb148
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5bae8
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f3520
;   engine_mini3d.cpp_FUN_004f36e0
;   shape_edittool.cpp_FUN_004803d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480410
        ;   Label: shape_edittool.cpp_FUN_00480410
    PUSH ESI                            ; 00480411
    PUSH EDI                            ; 00480412
    PUSH EBP                            ; 00480413
    SUB ESP,0x10                        ; 00480414
    MOV EBX,dword ptr [ESP + 0x28]      ; 00480417
    MOV EDX,dword ptr [ESP + 0x24]      ; 0048041b
    PUSH EDX                            ; 0048041f
    CALL shape_edittool.cpp_FUN_004803d0 ; 00480420
        ;   XREF to: 004803d0 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_FUN_004803d0(CEditorTools * this_ptr)
    MOV ECX,dword ptr [0x01c5baec]      ; 00480425 | DAT_01c5baec
    ADD ESP,0x4                         ; 0048042b
    TEST ECX,ECX                        ; 0048042e
    JNZ 0x004804f3                      ; 00480430
        ;   XREF to: 004804f3 (CONDITIONAL_JUMP)  ; LAB_004804f3
    MOV [0x01c6b5c0],EAX                ; 00480436 | DAT_01c6b5c0
    MOV EAX,[0x01c5bae8]                ; 0048043b | DAT_01c5bae8
        ;   Label: LAB_0048043b
    CMP EAX,0x1                         ; 00480440
    JNC 0x00480d6f                      ; 00480443
        ;   XREF to: 00480d6f (CONDITIONAL_JUMP)  ; LAB_00480d6f
    TEST EAX,EAX                        ; 00480449
    JNZ 0x00480d7e                      ; 0048044b
        ;   XREF to: 00480d7e (CONDITIONAL_JUMP)  ; LAB_00480d7e
    MOV EDX,dword ptr [0x01c5fadc]      ; 00480451 | DAT_01c5fadc
    MOV EAX,[0x01c5fae0]                ; 00480457 | DAT_01c5fae0
    TEST EDX,EDX                        ; 0048045c
    JL 0x00480470                       ; 0048045e
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    TEST EAX,EAX                        ; 00480460
    JL 0x00480470                       ; 00480462
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    CMP EDX,dword ptr [0x005fba18]      ; 00480464 | DAT_005fba18
    JL 0x00480534                       ; 0048046a
        ;   XREF to: 00480534 (CONDITIONAL_JUMP)  ; LAB_00480534
    MOV EDI,0x1                         ; 00480470
        ;   Label: LAB_00480470
    XOR EBP,EBP                         ; 00480475
    MOV EAX,[0x005fb144]                ; 00480477 | DAT_005fb144
        ;   Label: LAB_00480477
    MOV EDX,EAX                         ; 0048047c
    SAR EDX,0x1f                        ; 0048047e
    SUB EAX,EDX                         ; 00480481
    SAR EAX,0x1                         ; 00480483
    CMP EDI,EAX                         ; 00480485
    JLE 0x0048059b                      ; 00480487
        ;   XREF to: 0048059b (CONDITIONAL_JUMP)  ; LAB_0048059b
    MOV EDI,0x1                         ; 0048048d
    XOR EBP,EBP                         ; 00480492
    MOV EAX,[0x005fb148]                ; 00480494 | DAT_005fb148
        ;   Label: LAB_00480494
    MOV EDX,EAX                         ; 00480499
    SAR EDX,0x1f                        ; 0048049b
    SUB EAX,EDX                         ; 0048049e
    SAR EAX,0x1                         ; 004804a0
    CMP EDI,EAX                         ; 004804a2
    JG 0x00480da0                       ; 004804a4
        ;   XREF to: 00480da0 (CONDITIONAL_JUMP)  ; LAB_00480da0
    MOV ESI,dword ptr [0x01c5fae0]      ; 004804aa | DAT_01c5fae0
    SUB ESI,EDI                         ; 004804b0
    MOV EAX,[0x01c5fadc]                ; 004804b2 | DAT_01c5fadc
    MOV EDX,ESI                         ; 004804b7
    TEST EAX,EAX                        ; 004804b9
    JL 0x004804cd                       ; 004804bb
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    TEST ESI,ESI                        ; 004804bd
    JL 0x004804cd                       ; 004804bf
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    CMP EAX,dword ptr [0x005fba18]      ; 004804c1 | DAT_005fba18
    JL 0x004806b3                       ; 004804c7
        ;   XREF to: 004806b3 (CONDITIONAL_JUMP)  ; LAB_004806b3
    MOV ESI,dword ptr [0x01c5fae0]      ; 004804cd | DAT_01c5fae0
        ;   Label: LAB_004804cd
    ADD ESI,EDI                         ; 004804d3
    MOV EAX,[0x01c5fadc]                ; 004804d5 | DAT_01c5fadc
    MOV EDX,ESI                         ; 004804da
    TEST EAX,EAX                        ; 004804dc
    JL 0x004804f0                       ; 004804de
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    TEST ESI,ESI                        ; 004804e0
    JL 0x004804f0                       ; 004804e2
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    CMP EAX,dword ptr [0x005fba18]      ; 004804e4 | DAT_005fba18
    JL 0x00480719                       ; 004804ea
        ;   XREF to: 00480719 (CONDITIONAL_JUMP)  ; LAB_00480719
    INC EDI                             ; 004804f0
        ;   Label: LAB_004804f0
    JMP 0x00480494                      ; 004804f1
        ;   XREF to: 00480494 (UNCONDITIONAL_JUMP)  ; LAB_00480494
    AND EAX,0xff                        ; 004804f3
        ;   Label: LAB_004804f3
    MOV EDX,EAX                         ; 004804f8
    SHL EAX,0x2                         ; 004804fa
    SUB EAX,EDX                         ; 004804fd
    XOR EDX,EDX                         ; 004804ff
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 00480501 | DAT_01c6af99
    MOV ESI,EDX                         ; 00480507
    XOR EDX,EDX                         ; 00480509
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0048050b | DAT_01c6af98
    SHL ESI,0x8                         ; 00480511
    SHL EDX,0x10                        ; 00480514
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00480517 | DAT_01c6af9a
    OR EDX,ESI                          ; 0048051d
    AND EAX,0xff                        ; 0048051f
    OR EAX,EDX                          ; 00480524
    PUSH EAX                            ; 00480526
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00480527
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0048052c
    JMP 0x0048043b                      ; 0048052f
        ;   XREF to: 0048043b (UNCONDITIONAL_JUMP)  ; LAB_0048043b
    CMP EAX,dword ptr [0x005fba1c]      ; 00480534 | DAT_005fba1c
        ;   Label: LAB_00480534
    JGE 0x00480470                      ; 0048053a
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    TEST EBX,EBX                        ; 00480540
    JZ 0x00480574                       ; 00480542
        ;   XREF to: 00480574 (CONDITIONAL_JUMP)  ; LAB_00480574
    CMP EDX,dword ptr [0x01c6b5a8]      ; 00480544 | DAT_01c6b5a8
    JL 0x00480470                       ; 0048054a
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    CMP EDX,dword ptr [0x01c6b5b0]      ; 00480550 | DAT_01c6b5b0
    JGE 0x00480470                      ; 00480556
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    CMP EAX,dword ptr [0x01c6b5ac]      ; 0048055c | DAT_01c6b5ac
    JL 0x00480470                       ; 00480562
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    CMP EAX,dword ptr [0x01c6b5b4]      ; 00480568 | DAT_01c6b5b4
    JGE 0x00480470                      ; 0048056e
        ;   XREF to: 00480470 (CONDITIONAL_JUMP)  ; LAB_00480470
    CMP dword ptr [0x01c5baec],0x0      ; 00480574 | DAT_01c5baec
        ;   Label: LAB_00480574
    JZ 0x0048058c                       ; 0048057b
        ;   XREF to: 0048058c (CONDITIONAL_JUMP)  ; LAB_0048058c
    PUSH EAX                            ; 0048057d
    PUSH EDX                            ; 0048057e
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0048057f
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480584
    JMP 0x00480470                      ; 00480587
        ;   XREF to: 00480470 (UNCONDITIONAL_JUMP)  ; LAB_00480470
    PUSH EAX                            ; 0048058c
        ;   Label: LAB_0048058c
    PUSH EDX                            ; 0048058d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0048058e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480593
    JMP 0x00480470                      ; 00480596
        ;   XREF to: 00480470 (UNCONDITIONAL_JUMP)  ; LAB_00480470
    MOV ESI,dword ptr [0x01c5fadc]      ; 0048059b | DAT_01c5fadc
        ;   Label: LAB_0048059b
    SUB ESI,EDI                         ; 004805a1
    MOV EAX,[0x01c5fae0]                ; 004805a3 | DAT_01c5fae0
    MOV EDX,ESI                         ; 004805a8
    TEST ESI,ESI                        ; 004805aa
    JL 0x004805be                       ; 004805ac
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    TEST EAX,EAX                        ; 004805ae
    JL 0x004805be                       ; 004805b0
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    CMP ESI,dword ptr [0x005fba18]      ; 004805b2 | DAT_005fba18
    JL 0x0048063d                       ; 004805b8
        ;   XREF to: 0048063d (CONDITIONAL_JUMP)  ; LAB_0048063d
    MOV ESI,dword ptr [0x01c5fadc]      ; 004805be | DAT_01c5fadc
        ;   Label: LAB_004805be
    ADD ESI,EDI                         ; 004805c4
    MOV EAX,[0x01c5fae0]                ; 004805c6 | DAT_01c5fae0
    MOV EDX,ESI                         ; 004805cb
    TEST ESI,ESI                        ; 004805cd
    JL 0x004806ad                       ; 004805cf
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    TEST EAX,EAX                        ; 004805d5
    JL 0x004806ad                       ; 004805d7
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    CMP ESI,dword ptr [0x005fba18]      ; 004805dd | DAT_005fba18
    JGE 0x004806ad                      ; 004805e3
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    CMP EAX,dword ptr [0x005fba1c]      ; 004805e9 | DAT_005fba1c
    JGE 0x004806ad                      ; 004805ef
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    TEST EBX,EBX                        ; 004805f5
    JZ 0x00480629                       ; 004805f7
        ;   XREF to: 00480629 (CONDITIONAL_JUMP)  ; LAB_00480629
    CMP ESI,dword ptr [0x01c6b5a8]      ; 004805f9 | DAT_01c6b5a8
    JL 0x004806ad                       ; 004805ff
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    CMP ESI,dword ptr [0x01c6b5b0]      ; 00480605 | DAT_01c6b5b0
    JGE 0x004806ad                      ; 0048060b
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    CMP EAX,dword ptr [0x01c6b5ac]      ; 00480611 | DAT_01c6b5ac
    JL 0x004806ad                       ; 00480617
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    CMP EAX,dword ptr [0x01c6b5b4]      ; 0048061d | DAT_01c6b5b4
    JGE 0x004806ad                      ; 00480623
        ;   XREF to: 004806ad (CONDITIONAL_JUMP)  ; LAB_004806ad
    CMP EBP,dword ptr [0x01c5baec]      ; 00480629 | DAT_01c5baec
        ;   Label: LAB_00480629
    JZ 0x004806a3                       ; 0048062f
        ;   XREF to: 004806a3 (CONDITIONAL_JUMP)  ; LAB_004806a3
    PUSH EAX                            ; 00480631
    PUSH EDX                            ; 00480632
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480633
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480638
    JMP 0x004806ad                      ; 0048063b
        ;   XREF to: 004806ad (UNCONDITIONAL_JUMP)  ; LAB_004806ad
    CMP EAX,dword ptr [0x005fba1c]      ; 0048063d | DAT_005fba1c
        ;   Label: LAB_0048063d
    JGE 0x004805be                      ; 00480643
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    TEST EBX,EBX                        ; 00480649
    JZ 0x0048067d                       ; 0048064b
        ;   XREF to: 0048067d (CONDITIONAL_JUMP)  ; LAB_0048067d
    CMP ESI,dword ptr [0x01c6b5a8]      ; 0048064d | DAT_01c6b5a8
    JL 0x004805be                       ; 00480653
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    CMP ESI,dword ptr [0x01c6b5b0]      ; 00480659 | DAT_01c6b5b0
    JGE 0x004805be                      ; 0048065f
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    CMP EAX,dword ptr [0x01c6b5ac]      ; 00480665 | DAT_01c6b5ac
    JL 0x004805be                       ; 0048066b
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    CMP EAX,dword ptr [0x01c6b5b4]      ; 00480671 | DAT_01c6b5b4
    JGE 0x004805be                      ; 00480677
        ;   XREF to: 004805be (CONDITIONAL_JUMP)  ; LAB_004805be
    CMP EBP,dword ptr [0x01c5baec]      ; 0048067d | DAT_01c5baec
        ;   Label: LAB_0048067d
    JZ 0x00480694                       ; 00480683
        ;   XREF to: 00480694 (CONDITIONAL_JUMP)  ; LAB_00480694
    PUSH EAX                            ; 00480685
    PUSH EDX                            ; 00480686
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480687
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0048068c
    JMP 0x004805be                      ; 0048068f
        ;   XREF to: 004805be (UNCONDITIONAL_JUMP)  ; LAB_004805be
    PUSH EAX                            ; 00480694
        ;   Label: LAB_00480694
    PUSH EDX                            ; 00480695
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480696
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0048069b
    JMP 0x004805be                      ; 0048069e
        ;   XREF to: 004805be (UNCONDITIONAL_JUMP)  ; LAB_004805be
    PUSH EAX                            ; 004806a3
        ;   Label: LAB_004806a3
    PUSH EDX                            ; 004806a4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004806a5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004806aa
    INC EDI                             ; 004806ad
        ;   Label: LAB_004806ad
    JMP 0x00480477                      ; 004806ae
        ;   XREF to: 00480477 (UNCONDITIONAL_JUMP)  ; LAB_00480477
    CMP ESI,dword ptr [0x005fba1c]      ; 004806b3 | DAT_005fba1c
        ;   Label: LAB_004806b3
    JGE 0x004804cd                      ; 004806b9
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    TEST EBX,EBX                        ; 004806bf
    JZ 0x004806f3                       ; 004806c1
        ;   XREF to: 004806f3 (CONDITIONAL_JUMP)  ; LAB_004806f3
    CMP EAX,dword ptr [0x01c6b5a8]      ; 004806c3 | DAT_01c6b5a8
    JL 0x004804cd                       ; 004806c9
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    CMP EAX,dword ptr [0x01c6b5b0]      ; 004806cf | DAT_01c6b5b0
    JGE 0x004804cd                      ; 004806d5
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    CMP ESI,dword ptr [0x01c6b5ac]      ; 004806db | DAT_01c6b5ac
    JL 0x004804cd                       ; 004806e1
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    CMP ESI,dword ptr [0x01c6b5b4]      ; 004806e7 | DAT_01c6b5b4
    JGE 0x004804cd                      ; 004806ed
        ;   XREF to: 004804cd (CONDITIONAL_JUMP)  ; LAB_004804cd
    CMP EBP,dword ptr [0x01c5baec]      ; 004806f3 | DAT_01c5baec
        ;   Label: LAB_004806f3
    JZ 0x0048070a                       ; 004806f9
        ;   XREF to: 0048070a (CONDITIONAL_JUMP)  ; LAB_0048070a
    PUSH EDX                            ; 004806fb
    PUSH EAX                            ; 004806fc
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 004806fd
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480702
    JMP 0x004804cd                      ; 00480705
        ;   XREF to: 004804cd (UNCONDITIONAL_JUMP)  ; LAB_004804cd
    PUSH EDX                            ; 0048070a
        ;   Label: LAB_0048070a
    PUSH EAX                            ; 0048070b
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0048070c
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480711
    JMP 0x004804cd                      ; 00480714
        ;   XREF to: 004804cd (UNCONDITIONAL_JUMP)  ; LAB_004804cd
    CMP ESI,dword ptr [0x005fba1c]      ; 00480719 | DAT_005fba1c
        ;   Label: LAB_00480719
    JGE 0x004804f0                      ; 0048071f
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    TEST EBX,EBX                        ; 00480725
    JZ 0x00480759                       ; 00480727
        ;   XREF to: 00480759 (CONDITIONAL_JUMP)  ; LAB_00480759
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480729 | DAT_01c6b5a8
    JL 0x004804f0                       ; 0048072f
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480735 | DAT_01c6b5b0
    JGE 0x004804f0                      ; 0048073b
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    CMP ESI,dword ptr [0x01c6b5ac]      ; 00480741 | DAT_01c6b5ac
    JL 0x004804f0                       ; 00480747
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    CMP ESI,dword ptr [0x01c6b5b4]      ; 0048074d | DAT_01c6b5b4
    JGE 0x004804f0                      ; 00480753
        ;   XREF to: 004804f0 (CONDITIONAL_JUMP)  ; LAB_004804f0
    CMP EBP,dword ptr [0x01c5baec]      ; 00480759 | DAT_01c5baec
        ;   Label: LAB_00480759
    JZ 0x00480771                       ; 0048075f
        ;   XREF to: 00480771 (CONDITIONAL_JUMP)  ; LAB_00480771
    PUSH EDX                            ; 00480761
    PUSH EAX                            ; 00480762
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480763
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480768
    INC EDI                             ; 0048076b
    JMP 0x00480494                      ; 0048076c
        ;   XREF to: 00480494 (UNCONDITIONAL_JUMP)  ; LAB_00480494
    PUSH EDX                            ; 00480771
        ;   Label: LAB_00480771
    PUSH EAX                            ; 00480772
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480773
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480778
    INC EDI                             ; 0048077b
    JMP 0x00480494                      ; 0048077c
        ;   XREF to: 00480494 (UNCONDITIONAL_JUMP)  ; LAB_00480494
    MOV EAX,[0x01c5fadc]                ; 00480781 | DAT_01c5fadc
        ;   Label: LAB_00480781
    MOV EDX,dword ptr [0x01c5fae0]      ; 00480786 | DAT_01c5fae0
    TEST EAX,EAX                        ; 0048078c
    JL 0x004807a0                       ; 0048078e
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    TEST EDX,EDX                        ; 00480790
    JL 0x004807a0                       ; 00480792
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    CMP EAX,dword ptr [0x005fba18]      ; 00480794 | DAT_005fba18
    JL 0x0048085d                       ; 0048079a
        ;   XREF to: 0048085d (CONDITIONAL_JUMP)  ; LAB_0048085d
    MOV ESI,0x1                         ; 004807a0
        ;   Label: LAB_004807a0
    MOV EAX,[0x005fb144]                ; 004807a5 | DAT_005fb144
        ;   Label: LAB_004807a5
    MOV EDX,EAX                         ; 004807aa
    SAR EDX,0x1f                        ; 004807ac
    SUB EAX,EDX                         ; 004807af
    SAR EAX,0x1                         ; 004807b1
    CMP ESI,EAX                         ; 004807b3
    JG 0x00480da0                       ; 004807b5
        ;   XREF to: 00480da0 (CONDITIONAL_JUMP)  ; LAB_00480da0
    MOV EDI,dword ptr [0x01c5fadc]      ; 004807bb | DAT_01c5fadc
    MOV EAX,[0x01c5fae0]                ; 004807c1 | DAT_01c5fae0
    SUB EDI,ESI                         ; 004807c6
    SUB EAX,ESI                         ; 004807c8
    MOV EBP,EDI                         ; 004807ca
    MOV EDX,EAX                         ; 004807cc
    TEST EDI,EDI                        ; 004807ce
    JL 0x004807e2                       ; 004807d0
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    TEST EAX,EAX                        ; 004807d2
    JL 0x004807e2                       ; 004807d4
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    CMP EDI,dword ptr [0x005fba18]      ; 004807d6 | DAT_005fba18
    JL 0x004808c4                       ; 004807dc
        ;   XREF to: 004808c4 (CONDITIONAL_JUMP)  ; LAB_004808c4
    MOV EAX,[0x01c5fadc]                ; 004807e2 | DAT_01c5fadc
        ;   Label: LAB_004807e2
    MOV EDI,dword ptr [0x01c5fae0]      ; 004807e7 | DAT_01c5fae0
    ADD EAX,ESI                         ; 004807ed
    SUB EDI,ESI                         ; 004807ef
    MOV EDX,EAX                         ; 004807f1
    MOV EBP,EDI                         ; 004807f3
    TEST EAX,EAX                        ; 004807f5
    JL 0x00480809                       ; 004807f7
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    TEST EDI,EDI                        ; 004807f9
    JL 0x00480809                       ; 004807fb
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    CMP EAX,dword ptr [0x005fba18]      ; 004807fd | DAT_005fba18
    JL 0x0048092b                       ; 00480803
        ;   XREF to: 0048092b (CONDITIONAL_JUMP)  ; LAB_0048092b
    MOV EDI,dword ptr [0x01c5fadc]      ; 00480809 | DAT_01c5fadc
        ;   Label: LAB_00480809
    MOV EAX,[0x01c5fae0]                ; 0048080f | DAT_01c5fae0
    SUB EDI,ESI                         ; 00480814
    ADD EAX,ESI                         ; 00480816
    MOV EDX,EDI                         ; 00480818
    MOV EBP,EAX                         ; 0048081a
    TEST EDI,EDI                        ; 0048081c
    JL 0x00480830                       ; 0048081e
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    TEST EAX,EAX                        ; 00480820
    JL 0x00480830                       ; 00480822
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    CMP EDI,dword ptr [0x005fba18]      ; 00480824 | DAT_005fba18
    JL 0x00480992                       ; 0048082a
        ;   XREF to: 00480992 (CONDITIONAL_JUMP)  ; LAB_00480992
    MOV EAX,[0x01c5fadc]                ; 00480830 | DAT_01c5fadc
        ;   Label: LAB_00480830
    MOV EDI,dword ptr [0x01c5fae0]      ; 00480835 | DAT_01c5fae0
    ADD EAX,ESI                         ; 0048083b
    ADD EDI,ESI                         ; 0048083d
    MOV EDX,EAX                         ; 0048083f
    MOV EBP,EDI                         ; 00480841
    TEST EAX,EAX                        ; 00480843
    JL 0x00480857                       ; 00480845
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    TEST EDI,EDI                        ; 00480847
    JL 0x00480857                       ; 00480849
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    CMP EAX,dword ptr [0x005fba18]      ; 0048084b | DAT_005fba18
    JL 0x004809f9                       ; 00480851
        ;   XREF to: 004809f9 (CONDITIONAL_JUMP)  ; LAB_004809f9
    INC ESI                             ; 00480857
        ;   Label: LAB_00480857
    JMP 0x004807a5                      ; 00480858
        ;   XREF to: 004807a5 (UNCONDITIONAL_JUMP)  ; LAB_004807a5
    CMP EDX,dword ptr [0x005fba1c]      ; 0048085d | DAT_005fba1c
        ;   Label: LAB_0048085d
    JGE 0x004807a0                      ; 00480863
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    TEST EBX,EBX                        ; 00480869
    JZ 0x0048089d                       ; 0048086b
        ;   XREF to: 0048089d (CONDITIONAL_JUMP)  ; LAB_0048089d
    CMP EAX,dword ptr [0x01c6b5a8]      ; 0048086d | DAT_01c6b5a8
    JL 0x004807a0                       ; 00480873
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480879 | DAT_01c6b5b0
    JGE 0x004807a0                      ; 0048087f
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    CMP EDX,dword ptr [0x01c6b5ac]      ; 00480885 | DAT_01c6b5ac
    JL 0x004807a0                       ; 0048088b
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    CMP EDX,dword ptr [0x01c6b5b4]      ; 00480891 | DAT_01c6b5b4
    JGE 0x004807a0                      ; 00480897
        ;   XREF to: 004807a0 (CONDITIONAL_JUMP)  ; LAB_004807a0
    CMP dword ptr [0x01c5baec],0x0      ; 0048089d | DAT_01c5baec
        ;   Label: LAB_0048089d
    JZ 0x004808b5                       ; 004808a4
        ;   XREF to: 004808b5 (CONDITIONAL_JUMP)  ; LAB_004808b5
    PUSH EDX                            ; 004808a6
    PUSH EAX                            ; 004808a7
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 004808a8
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 004808ad
    JMP 0x004807a0                      ; 004808b0
        ;   XREF to: 004807a0 (UNCONDITIONAL_JUMP)  ; LAB_004807a0
    PUSH EDX                            ; 004808b5
        ;   Label: LAB_004808b5
    PUSH EAX                            ; 004808b6
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004808b7
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004808bc
    JMP 0x004807a0                      ; 004808bf
        ;   XREF to: 004807a0 (UNCONDITIONAL_JUMP)  ; LAB_004807a0
    CMP EAX,dword ptr [0x005fba1c]      ; 004808c4 | DAT_005fba1c
        ;   Label: LAB_004808c4
    JGE 0x004807e2                      ; 004808ca
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    TEST EBX,EBX                        ; 004808d0
    JZ 0x00480904                       ; 004808d2
        ;   XREF to: 00480904 (CONDITIONAL_JUMP)  ; LAB_00480904
    CMP EDI,dword ptr [0x01c6b5a8]      ; 004808d4 | DAT_01c6b5a8
    JL 0x004807e2                       ; 004808da
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    CMP EDI,dword ptr [0x01c6b5b0]      ; 004808e0 | DAT_01c6b5b0
    JGE 0x004807e2                      ; 004808e6
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    CMP EAX,dword ptr [0x01c6b5ac]      ; 004808ec | DAT_01c6b5ac
    JL 0x004807e2                       ; 004808f2
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    CMP EAX,dword ptr [0x01c6b5b4]      ; 004808f8 | DAT_01c6b5b4
    JGE 0x004807e2                      ; 004808fe
        ;   XREF to: 004807e2 (CONDITIONAL_JUMP)  ; LAB_004807e2
    CMP dword ptr [0x01c5baec],0x0      ; 00480904 | DAT_01c5baec
        ;   Label: LAB_00480904
    JZ 0x0048091c                       ; 0048090b
        ;   XREF to: 0048091c (CONDITIONAL_JUMP)  ; LAB_0048091c
    PUSH EDX                            ; 0048090d
    PUSH EBP                            ; 0048090e
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0048090f
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480914
    JMP 0x004807e2                      ; 00480917
        ;   XREF to: 004807e2 (UNCONDITIONAL_JUMP)  ; LAB_004807e2
    PUSH EDX                            ; 0048091c
        ;   Label: LAB_0048091c
    PUSH EBP                            ; 0048091d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0048091e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480923
    JMP 0x004807e2                      ; 00480926
        ;   XREF to: 004807e2 (UNCONDITIONAL_JUMP)  ; LAB_004807e2
    CMP EDI,dword ptr [0x005fba1c]      ; 0048092b | DAT_005fba1c
        ;   Label: LAB_0048092b
    JGE 0x00480809                      ; 00480931
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    TEST EBX,EBX                        ; 00480937
    JZ 0x0048096b                       ; 00480939
        ;   XREF to: 0048096b (CONDITIONAL_JUMP)  ; LAB_0048096b
    CMP EAX,dword ptr [0x01c6b5a8]      ; 0048093b | DAT_01c6b5a8
    JL 0x00480809                       ; 00480941
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480947 | DAT_01c6b5b0
    JGE 0x00480809                      ; 0048094d
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00480953 | DAT_01c6b5ac
    JL 0x00480809                       ; 00480959
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    CMP EDI,dword ptr [0x01c6b5b4]      ; 0048095f | DAT_01c6b5b4
    JGE 0x00480809                      ; 00480965
        ;   XREF to: 00480809 (CONDITIONAL_JUMP)  ; LAB_00480809
    CMP dword ptr [0x01c5baec],0x0      ; 0048096b | DAT_01c5baec
        ;   Label: LAB_0048096b
    JZ 0x00480983                       ; 00480972
        ;   XREF to: 00480983 (CONDITIONAL_JUMP)  ; LAB_00480983
    PUSH EBP                            ; 00480974
    PUSH EDX                            ; 00480975
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480976
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0048097b
    JMP 0x00480809                      ; 0048097e
        ;   XREF to: 00480809 (UNCONDITIONAL_JUMP)  ; LAB_00480809
    PUSH EBP                            ; 00480983
        ;   Label: LAB_00480983
    PUSH EDX                            ; 00480984
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480985
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0048098a
    JMP 0x00480809                      ; 0048098d
        ;   XREF to: 00480809 (UNCONDITIONAL_JUMP)  ; LAB_00480809
    CMP EAX,dword ptr [0x005fba1c]      ; 00480992 | DAT_005fba1c
        ;   Label: LAB_00480992
    JGE 0x00480830                      ; 00480998
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    TEST EBX,EBX                        ; 0048099e
    JZ 0x004809d2                       ; 004809a0
        ;   XREF to: 004809d2 (CONDITIONAL_JUMP)  ; LAB_004809d2
    CMP EDI,dword ptr [0x01c6b5a8]      ; 004809a2 | DAT_01c6b5a8
    JL 0x00480830                       ; 004809a8
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    CMP EDI,dword ptr [0x01c6b5b0]      ; 004809ae | DAT_01c6b5b0
    JGE 0x00480830                      ; 004809b4
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    CMP EAX,dword ptr [0x01c6b5ac]      ; 004809ba | DAT_01c6b5ac
    JL 0x00480830                       ; 004809c0
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    CMP EAX,dword ptr [0x01c6b5b4]      ; 004809c6 | DAT_01c6b5b4
    JGE 0x00480830                      ; 004809cc
        ;   XREF to: 00480830 (CONDITIONAL_JUMP)  ; LAB_00480830
    CMP dword ptr [0x01c5baec],0x0      ; 004809d2 | DAT_01c5baec
        ;   Label: LAB_004809d2
    JZ 0x004809ea                       ; 004809d9
        ;   XREF to: 004809ea (CONDITIONAL_JUMP)  ; LAB_004809ea
    PUSH EBP                            ; 004809db
    PUSH EDX                            ; 004809dc
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 004809dd
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 004809e2
    JMP 0x00480830                      ; 004809e5
        ;   XREF to: 00480830 (UNCONDITIONAL_JUMP)  ; LAB_00480830
    PUSH EBP                            ; 004809ea
        ;   Label: LAB_004809ea
    PUSH EDX                            ; 004809eb
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004809ec
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004809f1
    JMP 0x00480830                      ; 004809f4
        ;   XREF to: 00480830 (UNCONDITIONAL_JUMP)  ; LAB_00480830
    CMP EDI,dword ptr [0x005fba1c]      ; 004809f9 | DAT_005fba1c
        ;   Label: LAB_004809f9
    JGE 0x00480857                      ; 004809ff
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    TEST EBX,EBX                        ; 00480a05
    JZ 0x00480a39                       ; 00480a07
        ;   XREF to: 00480a39 (CONDITIONAL_JUMP)  ; LAB_00480a39
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480a09 | DAT_01c6b5a8
    JL 0x00480857                       ; 00480a0f
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480a15 | DAT_01c6b5b0
    JGE 0x00480857                      ; 00480a1b
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00480a21 | DAT_01c6b5ac
    JL 0x00480857                       ; 00480a27
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    CMP EDI,dword ptr [0x01c6b5b4]      ; 00480a2d | DAT_01c6b5b4
    JGE 0x00480857                      ; 00480a33
        ;   XREF to: 00480857 (CONDITIONAL_JUMP)  ; LAB_00480857
    CMP dword ptr [0x01c5baec],0x0      ; 00480a39 | DAT_01c5baec
        ;   Label: LAB_00480a39
    JZ 0x00480a52                       ; 00480a40
        ;   XREF to: 00480a52 (CONDITIONAL_JUMP)  ; LAB_00480a52
    PUSH EBP                            ; 00480a42
    PUSH EDX                            ; 00480a43
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480a44
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480a49
    INC ESI                             ; 00480a4c
    JMP 0x004807a5                      ; 00480a4d
        ;   XREF to: 004807a5 (UNCONDITIONAL_JUMP)  ; LAB_004807a5
    PUSH EBP                            ; 00480a52
        ;   Label: LAB_00480a52
    PUSH EDX                            ; 00480a53
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480a54
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480a59
    INC ESI                             ; 00480a5c
    JMP 0x004807a5                      ; 00480a5d
        ;   XREF to: 004807a5 (UNCONDITIONAL_JUMP)  ; LAB_004807a5
    MOV EAX,[0x005fb148]                ; 00480a62 | DAT_005fb148
        ;   Label: LAB_00480a62
    MOV EDX,EAX                         ; 00480a67
    SAR EDX,0x1f                        ; 00480a69
    SUB EAX,EDX                         ; 00480a6c
    SAR EAX,0x1                         ; 00480a6e
    MOV EDI,dword ptr [0x01c5fae0]      ; 00480a70 | DAT_01c5fae0
    MOV ESI,dword ptr [0x005fb148]      ; 00480a76 | DAT_005fb148
    SUB EDI,EAX                         ; 00480a7c
    ADD ESI,EDI                         ; 00480a7e
    DEC ESI                             ; 00480a80
    LEA EBP,[EDI + 0x1]                 ; 00480a81
    CMP EBP,ESI                         ; 00480a84
    JGE 0x00480aa8                      ; 00480a86
        ;   XREF to: 00480aa8 (CONDITIONAL_JUMP)  ; LAB_00480aa8
    MOV EAX,[0x01c5fadc]                ; 00480a88 | DAT_01c5fadc
        ;   Label: LAB_00480a88
    MOV EDX,EBP                         ; 00480a8d
    TEST EAX,EAX                        ; 00480a8f
    JL 0x00480aa3                       ; 00480a91
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    TEST EBP,EBP                        ; 00480a93
    JL 0x00480aa3                       ; 00480a95
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    CMP EAX,dword ptr [0x005fba18]      ; 00480a97 | DAT_005fba18
    JL 0x00480b4c                       ; 00480a9d
        ;   XREF to: 00480b4c (CONDITIONAL_JUMP)  ; LAB_00480b4c
    INC EBP                             ; 00480aa3
        ;   Label: LAB_00480aa3
    CMP EBP,ESI                         ; 00480aa4
    JL 0x00480a88                       ; 00480aa6
        ;   XREF to: 00480a88 (CONDITIONAL_JUMP)  ; LAB_00480a88
    MOV EBP,0x1                         ; 00480aa8
        ;   Label: LAB_00480aa8
    MOV EAX,[0x005fb144]                ; 00480aad | DAT_005fb144
        ;   Label: LAB_00480aad
    MOV EDX,EAX                         ; 00480ab2
    SAR EDX,0x1f                        ; 00480ab4
    SUB EAX,EDX                         ; 00480ab7
    SAR EAX,0x1                         ; 00480ab9
    CMP EBP,EAX                         ; 00480abb
    JG 0x00480da0                       ; 00480abd
        ;   XREF to: 00480da0 (CONDITIONAL_JUMP)  ; LAB_00480da0
    MOV EAX,[0x01c5fadc]                ; 00480ac3 | DAT_01c5fadc
    SUB EAX,EBP                         ; 00480ac8
    MOV dword ptr [ESP + 0xc],EDI       ; 00480aca
    MOV EDX,EAX                         ; 00480ace
    TEST EAX,EAX                        ; 00480ad0
    JL 0x00480ae4                       ; 00480ad2
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    TEST EDI,EDI                        ; 00480ad4
    JL 0x00480ae4                       ; 00480ad6
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    CMP EAX,dword ptr [0x005fba18]      ; 00480ad8 | DAT_005fba18
    JL 0x00480bb3                       ; 00480ade
        ;   XREF to: 00480bb3 (CONDITIONAL_JUMP)  ; LAB_00480bb3
    MOV EAX,[0x01c5fadc]                ; 00480ae4 | DAT_01c5fadc
        ;   Label: LAB_00480ae4
    ADD EAX,EBP                         ; 00480ae9
    MOV EDX,EDI                         ; 00480aeb
    MOV dword ptr [ESP + 0x8],EAX       ; 00480aed
    TEST EAX,EAX                        ; 00480af1
    JL 0x00480b05                       ; 00480af3
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    TEST EDI,EDI                        ; 00480af5
    JL 0x00480b05                       ; 00480af7
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    CMP EAX,dword ptr [0x005fba18]      ; 00480af9 | DAT_005fba18
    JL 0x00480c22                       ; 00480aff
        ;   XREF to: 00480c22 (CONDITIONAL_JUMP)  ; LAB_00480c22
    MOV EAX,[0x01c5fadc]                ; 00480b05 | DAT_01c5fadc
        ;   Label: LAB_00480b05
    SUB EAX,EBP                         ; 00480b0a
    MOV dword ptr [ESP],ESI             ; 00480b0c
    MOV EDX,EAX                         ; 00480b0f
    TEST EAX,EAX                        ; 00480b11
    JL 0x00480b25                       ; 00480b13
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    TEST ESI,ESI                        ; 00480b15
    JL 0x00480b25                       ; 00480b17
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    CMP EAX,dword ptr [0x005fba18]      ; 00480b19 | DAT_005fba18
    JL 0x00480c91                       ; 00480b1f
        ;   XREF to: 00480c91 (CONDITIONAL_JUMP)  ; LAB_00480c91
    MOV EAX,[0x01c5fadc]                ; 00480b25 | DAT_01c5fadc
        ;   Label: LAB_00480b25
    ADD EAX,EBP                         ; 00480b2a
    MOV dword ptr [ESP + 0x4],ESI       ; 00480b2c
    MOV EDX,EAX                         ; 00480b30
    TEST EAX,EAX                        ; 00480b32
    JL 0x00480b46                       ; 00480b34
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    TEST ESI,ESI                        ; 00480b36
    JL 0x00480b46                       ; 00480b38
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    CMP EAX,dword ptr [0x005fba18]      ; 00480b3a | DAT_005fba18
    JL 0x00480cfe                       ; 00480b40
        ;   XREF to: 00480cfe (CONDITIONAL_JUMP)  ; LAB_00480cfe
    INC EBP                             ; 00480b46
        ;   Label: LAB_00480b46
    JMP 0x00480aad                      ; 00480b47
        ;   XREF to: 00480aad (UNCONDITIONAL_JUMP)  ; LAB_00480aad
    CMP EBP,dword ptr [0x005fba1c]      ; 00480b4c | DAT_005fba1c
        ;   Label: LAB_00480b4c
    JGE 0x00480aa3                      ; 00480b52
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    TEST EBX,EBX                        ; 00480b58
    JZ 0x00480b8c                       ; 00480b5a
        ;   XREF to: 00480b8c (CONDITIONAL_JUMP)  ; LAB_00480b8c
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480b5c | DAT_01c6b5a8
    JL 0x00480aa3                       ; 00480b62
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480b68 | DAT_01c6b5b0
    JGE 0x00480aa3                      ; 00480b6e
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    CMP EBP,dword ptr [0x01c6b5ac]      ; 00480b74 | DAT_01c6b5ac
    JL 0x00480aa3                       ; 00480b7a
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    CMP EBP,dword ptr [0x01c6b5b4]      ; 00480b80 | DAT_01c6b5b4
    JGE 0x00480aa3                      ; 00480b86
        ;   XREF to: 00480aa3 (CONDITIONAL_JUMP)  ; LAB_00480aa3
    CMP dword ptr [0x01c5baec],0x0      ; 00480b8c | DAT_01c5baec
        ;   Label: LAB_00480b8c
    JZ 0x00480ba4                       ; 00480b93
        ;   XREF to: 00480ba4 (CONDITIONAL_JUMP)  ; LAB_00480ba4
    PUSH EDX                            ; 00480b95
    PUSH EAX                            ; 00480b96
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480b97
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480b9c
    JMP 0x00480aa3                      ; 00480b9f
        ;   XREF to: 00480aa3 (UNCONDITIONAL_JUMP)  ; LAB_00480aa3
    PUSH EDX                            ; 00480ba4
        ;   Label: LAB_00480ba4
    PUSH EAX                            ; 00480ba5
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480ba6
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480bab
    JMP 0x00480aa3                      ; 00480bae
        ;   XREF to: 00480aa3 (UNCONDITIONAL_JUMP)  ; LAB_00480aa3
    CMP EDI,dword ptr [0x005fba1c]      ; 00480bb3 | DAT_005fba1c
        ;   Label: LAB_00480bb3
    JGE 0x00480ae4                      ; 00480bb9
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    TEST EBX,EBX                        ; 00480bbf
    JZ 0x00480bf3                       ; 00480bc1
        ;   XREF to: 00480bf3 (CONDITIONAL_JUMP)  ; LAB_00480bf3
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480bc3 | DAT_01c6b5a8
    JL 0x00480ae4                       ; 00480bc9
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480bcf | DAT_01c6b5b0
    JGE 0x00480ae4                      ; 00480bd5
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00480bdb | DAT_01c6b5ac
    JL 0x00480ae4                       ; 00480be1
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    CMP EDI,dword ptr [0x01c6b5b4]      ; 00480be7 | DAT_01c6b5b4
    JGE 0x00480ae4                      ; 00480bed
        ;   XREF to: 00480ae4 (CONDITIONAL_JUMP)  ; LAB_00480ae4
    CMP dword ptr [0x01c5baec],0x0      ; 00480bf3 | DAT_01c5baec
        ;   Label: LAB_00480bf3
    JZ 0x00480c0f                       ; 00480bfa
        ;   XREF to: 00480c0f (CONDITIONAL_JUMP)  ; LAB_00480c0f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00480bfc
    PUSH EAX                            ; 00480c00
    PUSH EDX                            ; 00480c01
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480c02
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480c07
    JMP 0x00480ae4                      ; 00480c0a
        ;   XREF to: 00480ae4 (UNCONDITIONAL_JUMP)  ; LAB_00480ae4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00480c0f
        ;   Label: LAB_00480c0f
    PUSH ECX                            ; 00480c13
    PUSH EDX                            ; 00480c14
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480c15
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480c1a
    JMP 0x00480ae4                      ; 00480c1d
        ;   XREF to: 00480ae4 (UNCONDITIONAL_JUMP)  ; LAB_00480ae4
    CMP EDI,dword ptr [0x005fba1c]      ; 00480c22 | DAT_005fba1c
        ;   Label: LAB_00480c22
    JGE 0x00480b05                      ; 00480c28
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    TEST EBX,EBX                        ; 00480c2e
    JZ 0x00480c62                       ; 00480c30
        ;   XREF to: 00480c62 (CONDITIONAL_JUMP)  ; LAB_00480c62
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480c32 | DAT_01c6b5a8
    JL 0x00480b05                       ; 00480c38
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480c3e | DAT_01c6b5b0
    JGE 0x00480b05                      ; 00480c44
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00480c4a | DAT_01c6b5ac
    JL 0x00480b05                       ; 00480c50
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    CMP EDI,dword ptr [0x01c6b5b4]      ; 00480c56 | DAT_01c6b5b4
    JGE 0x00480b05                      ; 00480c5c
        ;   XREF to: 00480b05 (CONDITIONAL_JUMP)  ; LAB_00480b05
    CMP dword ptr [0x01c5baec],0x0      ; 00480c62 | DAT_01c5baec
        ;   Label: LAB_00480c62
    JZ 0x00480c7e                       ; 00480c69
        ;   XREF to: 00480c7e (CONDITIONAL_JUMP)  ; LAB_00480c7e
    PUSH EDX                            ; 00480c6b
    MOV ECX,dword ptr [ESP + 0xc]       ; 00480c6c
    PUSH ECX                            ; 00480c70
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480c71
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480c76
    JMP 0x00480b05                      ; 00480c79
        ;   XREF to: 00480b05 (UNCONDITIONAL_JUMP)  ; LAB_00480b05
    PUSH EDX                            ; 00480c7e
        ;   Label: LAB_00480c7e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00480c7f
    PUSH EDX                            ; 00480c83
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480c84
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480c89
    JMP 0x00480b05                      ; 00480c8c
        ;   XREF to: 00480b05 (UNCONDITIONAL_JUMP)  ; LAB_00480b05
    CMP ESI,dword ptr [0x005fba1c]      ; 00480c91 | DAT_005fba1c
        ;   Label: LAB_00480c91
    JGE 0x00480b25                      ; 00480c97
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    TEST EBX,EBX                        ; 00480c9d
    JZ 0x00480cd1                       ; 00480c9f
        ;   XREF to: 00480cd1 (CONDITIONAL_JUMP)  ; LAB_00480cd1
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480ca1 | DAT_01c6b5a8
    JL 0x00480b25                       ; 00480ca7
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480cad | DAT_01c6b5b0
    JGE 0x00480b25                      ; 00480cb3
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    CMP ESI,dword ptr [0x01c6b5ac]      ; 00480cb9 | DAT_01c6b5ac
    JL 0x00480b25                       ; 00480cbf
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    CMP ESI,dword ptr [0x01c6b5b4]      ; 00480cc5 | DAT_01c6b5b4
    JGE 0x00480b25                      ; 00480ccb
        ;   XREF to: 00480b25 (CONDITIONAL_JUMP)  ; LAB_00480b25
    CMP dword ptr [0x01c5baec],0x0      ; 00480cd1 | DAT_01c5baec
        ;   Label: LAB_00480cd1
    JZ 0x00480cec                       ; 00480cd8
        ;   XREF to: 00480cec (CONDITIONAL_JUMP)  ; LAB_00480cec
    MOV EAX,dword ptr [ESP]             ; 00480cda
    PUSH EAX                            ; 00480cdd
    PUSH EDX                            ; 00480cde
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480cdf
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480ce4
    JMP 0x00480b25                      ; 00480ce7
        ;   XREF to: 00480b25 (UNCONDITIONAL_JUMP)  ; LAB_00480b25
    MOV ECX,dword ptr [ESP]             ; 00480cec
        ;   Label: LAB_00480cec
    PUSH ECX                            ; 00480cef
    PUSH EDX                            ; 00480cf0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480cf1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480cf6
    JMP 0x00480b25                      ; 00480cf9
        ;   XREF to: 00480b25 (UNCONDITIONAL_JUMP)  ; LAB_00480b25
    CMP ESI,dword ptr [0x005fba1c]      ; 00480cfe | DAT_005fba1c
        ;   Label: LAB_00480cfe
    JGE 0x00480b46                      ; 00480d04
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    TEST EBX,EBX                        ; 00480d0a
    JZ 0x00480d3e                       ; 00480d0c
        ;   XREF to: 00480d3e (CONDITIONAL_JUMP)  ; LAB_00480d3e
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00480d0e | DAT_01c6b5a8
    JL 0x00480b46                       ; 00480d14
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00480d1a | DAT_01c6b5b0
    JGE 0x00480b46                      ; 00480d20
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    CMP ESI,dword ptr [0x01c6b5ac]      ; 00480d26 | DAT_01c6b5ac
    JL 0x00480b46                       ; 00480d2c
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    CMP ESI,dword ptr [0x01c6b5b4]      ; 00480d32 | DAT_01c6b5b4
    JGE 0x00480b46                      ; 00480d38
        ;   XREF to: 00480b46 (CONDITIONAL_JUMP)  ; LAB_00480b46
    CMP dword ptr [0x01c5baec],0x0      ; 00480d3e | DAT_01c5baec
        ;   Label: LAB_00480d3e
    JZ 0x00480d5b                       ; 00480d45
        ;   XREF to: 00480d5b (CONDITIONAL_JUMP)  ; LAB_00480d5b
    MOV EAX,dword ptr [ESP + 0x4]       ; 00480d47
    PUSH EAX                            ; 00480d4b
    PUSH EDX                            ; 00480d4c
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 00480d4d
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 00480d52
    INC EBP                             ; 00480d55
    JMP 0x00480aad                      ; 00480d56
        ;   XREF to: 00480aad (UNCONDITIONAL_JUMP)  ; LAB_00480aad
    MOV ECX,dword ptr [ESP + 0x4]       ; 00480d5b
        ;   Label: LAB_00480d5b
    PUSH ECX                            ; 00480d5f
    PUSH EDX                            ; 00480d60
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480d61
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480d66
    INC EBP                             ; 00480d69
    JMP 0x00480aad                      ; 00480d6a
        ;   XREF to: 00480aad (UNCONDITIONAL_JUMP)  ; LAB_00480aad
    JBE 0x00480a62                      ; 00480d6f
        ;   XREF to: 00480a62 (CONDITIONAL_JUMP)  ; LAB_00480a62
        ;   Label: LAB_00480d6f
    CMP EAX,0x2                         ; 00480d75
    JZ 0x00480781                       ; 00480d78
        ;   XREF to: 00480781 (CONDITIONAL_JUMP)  ; LAB_00480781
    MOV EAX,0x5bd2dd                    ; 00480d7e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00480d7e
    MOV EDX,0xa10                       ; 00480d83
    PUSH 0x5bd2f3                       ; 00480d88 | = "CEditorTools::setMousePointerType - i..."
    MOV [0x01d71de0],EAX                ; 00480d8d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00480d92 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00480d98
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00480d9d
    ADD ESP,0x10                        ; 00480da0
        ;   Label: LAB_00480da0
    POP EBP                             ; 00480da3
    POP EDI                             ; 00480da4
    POP ESI                             ; 00480da5
    POP EBX                             ; 00480da6
    RET                                 ; 00480da7

