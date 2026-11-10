; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a590(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 004835df
;   shape_edittool.cpp_FUN_00484f20 at 004850b0
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f8fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a590
        ;   Label: shape_edittool.cpp_FUN_0047a590
    PUSH ESI                            ; 0047a591
    PUSH EDI                            ; 0047a592
    PUSH EBP                            ; 0047a593
    SUB ESP,0xc                         ; 0047a594
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0047a597
    MOV EDI,dword ptr [ESP + 0x30]      ; 0047a59b
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047a59f
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047a5a3
    CMP EDX,ECX                         ; 0047a5a7
    JG 0x0047a6d2                       ; 0047a5a9
        ;   XREF to: 0047a6d2 (CONDITIONAL_JUMP)  ; LAB_0047a6d2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047a5af
        ;   Label: LAB_0047a5af
    CMP EBP,EBX                         ; 0047a5b3
    JGE 0x0047a5bd                      ; 0047a5b5
        ;   XREF to: 0047a5bd (CONDITIONAL_JUMP)  ; LAB_0047a5bd
    MOV dword ptr [ESP + 0x24],EBP      ; 0047a5b7
    MOV EBP,EBX                         ; 0047a5bb
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047a5bd
        ;   Label: LAB_0047a5bd
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047a5c1
    MOV EBX,0x1                         ; 0047a5c5
    CMP ESI,EAX                         ; 0047a5ca
    JGE 0x0047a609                      ; 0047a5cc
        ;   XREF to: 0047a609 (CONDITIONAL_JUMP)  ; LAB_0047a609
    LEA EDX,[EDI + EDI*0x1]             ; 0047a5ce
    MOV dword ptr [ESP],EDX             ; 0047a5d1
    MOV ECX,dword ptr [ESP]             ; 0047a5d4
        ;   Label: LAB_0047a5d4
    MOV EDX,EBX                         ; 0047a5d7
    MOV EAX,EBX                         ; 0047a5d9
    SAR EDX,0x1f                        ; 0047a5db
    IDIV ECX                            ; 0047a5de
    CMP EDX,EDI                         ; 0047a5e0
    JGE 0x0047a5ff                      ; 0047a5e2
        ;   XREF to: 0047a5ff (CONDITIONAL_JUMP)  ; LAB_0047a5ff
    CMP dword ptr [0x01c25f84],0x0      ; 0047a5e4 | DAT_01c25f84
    JZ 0x0047a6df                       ; 0047a5eb
        ;   XREF to: 0047a6df (CONDITIONAL_JUMP)  ; LAB_0047a6df
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047a5f1
    PUSH ECX                            ; 0047a5f5
    PUSH ESI                            ; 0047a5f6
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047a5f7
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047a5fc
        ;   Label: LAB_0047a5fc
    MOV EDX,dword ptr [ESP + 0x28]      ; 0047a5ff
        ;   Label: LAB_0047a5ff
    INC ESI                             ; 0047a603
    INC EBX                             ; 0047a604
    CMP ESI,EDX                         ; 0047a605
    JL 0x0047a5d4                       ; 0047a607
        ;   XREF to: 0047a5d4 (CONDITIONAL_JUMP)  ; LAB_0047a5d4
    MOV ESI,dword ptr [ESP + 0x24]      ; 0047a609
        ;   Label: LAB_0047a609
    CMP EBP,ESI                         ; 0047a60d
    JLE 0x0047a64a                      ; 0047a60f
        ;   XREF to: 0047a64a (CONDITIONAL_JUMP)  ; LAB_0047a64a
    LEA EDX,[EDI + EDI*0x1]             ; 0047a611
    MOV dword ptr [ESP + 0x4],EDX       ; 0047a614
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047a618
        ;   Label: LAB_0047a618
    MOV EDX,EBX                         ; 0047a61c
    MOV EAX,EBX                         ; 0047a61e
    SAR EDX,0x1f                        ; 0047a620
    IDIV ECX                            ; 0047a623
    CMP EDX,EDI                         ; 0047a625
    JGE 0x0047a644                      ; 0047a627
        ;   XREF to: 0047a644 (CONDITIONAL_JUMP)  ; LAB_0047a644
    CMP dword ptr [0x01c25f84],0x0      ; 0047a629 | DAT_01c25f84
    JZ 0x0047a6ef                       ; 0047a630
        ;   XREF to: 0047a6ef (CONDITIONAL_JUMP)  ; LAB_0047a6ef
    PUSH ESI                            ; 0047a636
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047a637
    PUSH ECX                            ; 0047a63b
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047a63c
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047a641
        ;   Label: LAB_0047a641
    INC ESI                             ; 0047a644
        ;   Label: LAB_0047a644
    INC EBX                             ; 0047a645
    CMP ESI,EBP                         ; 0047a646
    JL 0x0047a618                       ; 0047a648
        ;   XREF to: 0047a618 (CONDITIONAL_JUMP)  ; LAB_0047a618
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047a64a
        ;   Label: LAB_0047a64a
    MOV ESI,dword ptr [ESP + 0x28]      ; 0047a64e
    CMP ESI,EAX                         ; 0047a652
    JLE 0x0047a68f                      ; 0047a654
        ;   XREF to: 0047a68f (CONDITIONAL_JUMP)  ; LAB_0047a68f
    LEA EDX,[EDI + EDI*0x1]             ; 0047a656
    MOV dword ptr [ESP + 0x8],EDX       ; 0047a659
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047a65d
        ;   Label: LAB_0047a65d
    MOV EDX,EBX                         ; 0047a661
    MOV EAX,EBX                         ; 0047a663
    SAR EDX,0x1f                        ; 0047a665
    IDIV ECX                            ; 0047a668
    CMP EDX,EDI                         ; 0047a66a
    JGE 0x0047a685                      ; 0047a66c
        ;   XREF to: 0047a685 (CONDITIONAL_JUMP)  ; LAB_0047a685
    CMP dword ptr [0x01c25f84],0x0      ; 0047a66e | DAT_01c25f84
    JZ 0x0047a6ff                       ; 0047a675
        ;   XREF to: 0047a6ff (CONDITIONAL_JUMP)  ; LAB_0047a6ff
    PUSH EBP                            ; 0047a67b
    PUSH ESI                            ; 0047a67c
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047a67d
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047a682
        ;   Label: LAB_0047a682
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047a685
        ;   Label: LAB_0047a685
    DEC ESI                             ; 0047a689
    INC EBX                             ; 0047a68a
    CMP ESI,EAX                         ; 0047a68b
    JG 0x0047a65d                       ; 0047a68d
        ;   XREF to: 0047a65d (CONDITIONAL_JUMP)  ; LAB_0047a65d
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047a68f
        ;   Label: LAB_0047a68f
    MOV ESI,EBP                         ; 0047a693
    CMP EBP,EDX                         ; 0047a695
    JLE 0x0047a6ca                      ; 0047a697
        ;   XREF to: 0047a6ca (CONDITIONAL_JUMP)  ; LAB_0047a6ca
    LEA EBP,[EDI + EDI*0x1]             ; 0047a699
    MOV EDX,EBX                         ; 0047a69c
        ;   Label: LAB_0047a69c
    MOV EAX,EBX                         ; 0047a69e
    SAR EDX,0x1f                        ; 0047a6a0
    IDIV EBP                            ; 0047a6a3
    CMP EDX,EDI                         ; 0047a6a5
    JGE 0x0047a6c0                      ; 0047a6a7
        ;   XREF to: 0047a6c0 (CONDITIONAL_JUMP)  ; LAB_0047a6c0
    CMP dword ptr [0x01c25f84],0x0      ; 0047a6a9 | DAT_01c25f84
    JZ 0x0047a70b                       ; 0047a6b0
        ;   XREF to: 0047a70b (CONDITIONAL_JUMP)  ; LAB_0047a70b
    PUSH ESI                            ; 0047a6b2
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047a6b3
    PUSH EDX                            ; 0047a6b7
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047a6b8
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047a6bd
        ;   Label: LAB_0047a6bd
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047a6c0
        ;   Label: LAB_0047a6c0
    DEC ESI                             ; 0047a6c4
    INC EBX                             ; 0047a6c5
    CMP ESI,EDX                         ; 0047a6c6
    JG 0x0047a69c                       ; 0047a6c8
        ;   XREF to: 0047a69c (CONDITIONAL_JUMP)  ; LAB_0047a69c
    ADD ESP,0xc                         ; 0047a6ca
        ;   Label: LAB_0047a6ca
    POP EBP                             ; 0047a6cd
    POP EDI                             ; 0047a6ce
    POP ESI                             ; 0047a6cf
    POP EBX                             ; 0047a6d0
    RET                                 ; 0047a6d1
    MOV dword ptr [ESP + 0x20],ECX      ; 0047a6d2
        ;   Label: LAB_0047a6d2
    MOV dword ptr [ESP + 0x28],EDX      ; 0047a6d6
    JMP 0x0047a5af                      ; 0047a6da
        ;   XREF to: 0047a5af (UNCONDITIONAL_JUMP)  ; LAB_0047a5af
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047a6df
        ;   Label: LAB_0047a6df
    PUSH EDX                            ; 0047a6e3
    PUSH ESI                            ; 0047a6e4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047a6e5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047a5fc                      ; 0047a6ea
        ;   XREF to: 0047a5fc (UNCONDITIONAL_JUMP)  ; LAB_0047a5fc
    PUSH ESI                            ; 0047a6ef
        ;   Label: LAB_0047a6ef
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0047a6f0
    PUSH EDX                            ; 0047a6f4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047a6f5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047a641                      ; 0047a6fa
        ;   XREF to: 0047a641 (UNCONDITIONAL_JUMP)  ; LAB_0047a641
    PUSH EBP                            ; 0047a6ff
        ;   Label: LAB_0047a6ff
    PUSH ESI                            ; 0047a700
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047a701
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047a682                      ; 0047a706
        ;   XREF to: 0047a682 (UNCONDITIONAL_JUMP)  ; LAB_0047a682
    PUSH ESI                            ; 0047a70b
        ;   Label: LAB_0047a70b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047a70c
    PUSH EAX                            ; 0047a710
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047a711
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047a6bd                      ; 0047a716
        ;   XREF to: 0047a6bd (UNCONDITIONAL_JUMP)  ; LAB_0047a6bd

