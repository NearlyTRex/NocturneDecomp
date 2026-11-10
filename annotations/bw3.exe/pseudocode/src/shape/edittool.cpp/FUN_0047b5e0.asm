; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b5e0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 004847df
;   shape_edittool.cpp_FUN_00486120 at 004862b0
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f36e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b5e0
        ;   Label: shape_edittool.cpp_FUN_0047b5e0
    PUSH ESI                            ; 0047b5e1
    PUSH EDI                            ; 0047b5e2
    PUSH EBP                            ; 0047b5e3
    SUB ESP,0xc                         ; 0047b5e4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0047b5e7
    MOV EDI,dword ptr [ESP + 0x30]      ; 0047b5eb
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047b5ef
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047b5f3
    CMP EDX,ECX                         ; 0047b5f7
    JG 0x0047b722                       ; 0047b5f9
        ;   XREF to: 0047b722 (CONDITIONAL_JUMP)  ; LAB_0047b722
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047b5ff
        ;   Label: LAB_0047b5ff
    CMP EBP,EBX                         ; 0047b603
    JGE 0x0047b60d                      ; 0047b605
        ;   XREF to: 0047b60d (CONDITIONAL_JUMP)  ; LAB_0047b60d
    MOV dword ptr [ESP + 0x24],EBP      ; 0047b607
    MOV EBP,EBX                         ; 0047b60b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047b60d
        ;   Label: LAB_0047b60d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047b611
    MOV EBX,0x1                         ; 0047b615
    CMP ESI,EAX                         ; 0047b61a
    JGE 0x0047b659                      ; 0047b61c
        ;   XREF to: 0047b659 (CONDITIONAL_JUMP)  ; LAB_0047b659
    LEA EDX,[EDI + EDI*0x1]             ; 0047b61e
    MOV dword ptr [ESP],EDX             ; 0047b621
    MOV ECX,dword ptr [ESP]             ; 0047b624
        ;   Label: LAB_0047b624
    MOV EDX,EBX                         ; 0047b627
    MOV EAX,EBX                         ; 0047b629
    SAR EDX,0x1f                        ; 0047b62b
    IDIV ECX                            ; 0047b62e
    CMP EDX,EDI                         ; 0047b630
    JGE 0x0047b64f                      ; 0047b632
        ;   XREF to: 0047b64f (CONDITIONAL_JUMP)  ; LAB_0047b64f
    CMP dword ptr [0x01c5baec],0x0      ; 0047b634 | DAT_01c5baec
    JZ 0x0047b72f                       ; 0047b63b
        ;   XREF to: 0047b72f (CONDITIONAL_JUMP)  ; LAB_0047b72f
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047b641
    PUSH ECX                            ; 0047b645
    PUSH ESI                            ; 0047b646
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0047b647
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0047b64c
        ;   Label: LAB_0047b64c
    MOV EDX,dword ptr [ESP + 0x28]      ; 0047b64f
        ;   Label: LAB_0047b64f
    INC ESI                             ; 0047b653
    INC EBX                             ; 0047b654
    CMP ESI,EDX                         ; 0047b655
    JL 0x0047b624                       ; 0047b657
        ;   XREF to: 0047b624 (CONDITIONAL_JUMP)  ; LAB_0047b624
    MOV ESI,dword ptr [ESP + 0x24]      ; 0047b659
        ;   Label: LAB_0047b659
    CMP EBP,ESI                         ; 0047b65d
    JLE 0x0047b69a                      ; 0047b65f
        ;   XREF to: 0047b69a (CONDITIONAL_JUMP)  ; LAB_0047b69a
    LEA EDX,[EDI + EDI*0x1]             ; 0047b661
    MOV dword ptr [ESP + 0x4],EDX       ; 0047b664
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047b668
        ;   Label: LAB_0047b668
    MOV EDX,EBX                         ; 0047b66c
    MOV EAX,EBX                         ; 0047b66e
    SAR EDX,0x1f                        ; 0047b670
    IDIV ECX                            ; 0047b673
    CMP EDX,EDI                         ; 0047b675
    JGE 0x0047b694                      ; 0047b677
        ;   XREF to: 0047b694 (CONDITIONAL_JUMP)  ; LAB_0047b694
    CMP dword ptr [0x01c5baec],0x0      ; 0047b679 | DAT_01c5baec
    JZ 0x0047b73f                       ; 0047b680
        ;   XREF to: 0047b73f (CONDITIONAL_JUMP)  ; LAB_0047b73f
    PUSH ESI                            ; 0047b686
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047b687
    PUSH ECX                            ; 0047b68b
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0047b68c
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0047b691
        ;   Label: LAB_0047b691
    INC ESI                             ; 0047b694
        ;   Label: LAB_0047b694
    INC EBX                             ; 0047b695
    CMP ESI,EBP                         ; 0047b696
    JL 0x0047b668                       ; 0047b698
        ;   XREF to: 0047b668 (CONDITIONAL_JUMP)  ; LAB_0047b668
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047b69a
        ;   Label: LAB_0047b69a
    MOV ESI,dword ptr [ESP + 0x28]      ; 0047b69e
    CMP ESI,EAX                         ; 0047b6a2
    JLE 0x0047b6df                      ; 0047b6a4
        ;   XREF to: 0047b6df (CONDITIONAL_JUMP)  ; LAB_0047b6df
    LEA EDX,[EDI + EDI*0x1]             ; 0047b6a6
    MOV dword ptr [ESP + 0x8],EDX       ; 0047b6a9
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047b6ad
        ;   Label: LAB_0047b6ad
    MOV EDX,EBX                         ; 0047b6b1
    MOV EAX,EBX                         ; 0047b6b3
    SAR EDX,0x1f                        ; 0047b6b5
    IDIV ECX                            ; 0047b6b8
    CMP EDX,EDI                         ; 0047b6ba
    JGE 0x0047b6d5                      ; 0047b6bc
        ;   XREF to: 0047b6d5 (CONDITIONAL_JUMP)  ; LAB_0047b6d5
    CMP dword ptr [0x01c5baec],0x0      ; 0047b6be | DAT_01c5baec
    JZ 0x0047b74f                       ; 0047b6c5
        ;   XREF to: 0047b74f (CONDITIONAL_JUMP)  ; LAB_0047b74f
    PUSH EBP                            ; 0047b6cb
    PUSH ESI                            ; 0047b6cc
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0047b6cd
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0047b6d2
        ;   Label: LAB_0047b6d2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047b6d5
        ;   Label: LAB_0047b6d5
    DEC ESI                             ; 0047b6d9
    INC EBX                             ; 0047b6da
    CMP ESI,EAX                         ; 0047b6db
    JG 0x0047b6ad                       ; 0047b6dd
        ;   XREF to: 0047b6ad (CONDITIONAL_JUMP)  ; LAB_0047b6ad
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047b6df
        ;   Label: LAB_0047b6df
    MOV ESI,EBP                         ; 0047b6e3
    CMP EBP,EDX                         ; 0047b6e5
    JLE 0x0047b71a                      ; 0047b6e7
        ;   XREF to: 0047b71a (CONDITIONAL_JUMP)  ; LAB_0047b71a
    LEA EBP,[EDI + EDI*0x1]             ; 0047b6e9
    MOV EDX,EBX                         ; 0047b6ec
        ;   Label: LAB_0047b6ec
    MOV EAX,EBX                         ; 0047b6ee
    SAR EDX,0x1f                        ; 0047b6f0
    IDIV EBP                            ; 0047b6f3
    CMP EDX,EDI                         ; 0047b6f5
    JGE 0x0047b710                      ; 0047b6f7
        ;   XREF to: 0047b710 (CONDITIONAL_JUMP)  ; LAB_0047b710
    CMP dword ptr [0x01c5baec],0x0      ; 0047b6f9 | DAT_01c5baec
    JZ 0x0047b75b                       ; 0047b700
        ;   XREF to: 0047b75b (CONDITIONAL_JUMP)  ; LAB_0047b75b
    PUSH ESI                            ; 0047b702
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047b703
    PUSH EDX                            ; 0047b707
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0047b708
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0047b70d
        ;   Label: LAB_0047b70d
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047b710
        ;   Label: LAB_0047b710
    DEC ESI                             ; 0047b714
    INC EBX                             ; 0047b715
    CMP ESI,EDX                         ; 0047b716
    JG 0x0047b6ec                       ; 0047b718
        ;   XREF to: 0047b6ec (CONDITIONAL_JUMP)  ; LAB_0047b6ec
    ADD ESP,0xc                         ; 0047b71a
        ;   Label: LAB_0047b71a
    POP EBP                             ; 0047b71d
    POP EDI                             ; 0047b71e
    POP ESI                             ; 0047b71f
    POP EBX                             ; 0047b720
    RET                                 ; 0047b721
    MOV dword ptr [ESP + 0x20],ECX      ; 0047b722
        ;   Label: LAB_0047b722
    MOV dword ptr [ESP + 0x28],EDX      ; 0047b726
    JMP 0x0047b5ff                      ; 0047b72a
        ;   XREF to: 0047b5ff (UNCONDITIONAL_JUMP)  ; LAB_0047b5ff
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047b72f
        ;   Label: LAB_0047b72f
    PUSH EDX                            ; 0047b733
    PUSH ESI                            ; 0047b734
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047b735
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047b64c                      ; 0047b73a
        ;   XREF to: 0047b64c (UNCONDITIONAL_JUMP)  ; LAB_0047b64c
    PUSH ESI                            ; 0047b73f
        ;   Label: LAB_0047b73f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0047b740
    PUSH EDX                            ; 0047b744
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047b745
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047b691                      ; 0047b74a
        ;   XREF to: 0047b691 (UNCONDITIONAL_JUMP)  ; LAB_0047b691
    PUSH EBP                            ; 0047b74f
        ;   Label: LAB_0047b74f
    PUSH ESI                            ; 0047b750
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047b751
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047b6d2                      ; 0047b756
        ;   XREF to: 0047b6d2 (UNCONDITIONAL_JUMP)  ; LAB_0047b6d2
    PUSH ESI                            ; 0047b75b
        ;   Label: LAB_0047b75b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047b75c
    PUSH EAX                            ; 0047b760
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047b761
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x0047b70d                      ; 0047b766
        ;   XREF to: 0047b70d (UNCONDITIONAL_JUMP)  ; LAB_0047b70d

