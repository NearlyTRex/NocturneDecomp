; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004808b0(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00480b6e at 00480bd6
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f8fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004808b0
        ;   Label: shape_edittool.cpp_FUN_004808b0
    PUSH ESI                            ; 004808b1
    PUSH EDI                            ; 004808b2
    PUSH EBP                            ; 004808b3
    SUB ESP,0x4                         ; 004808b4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004808b7
    TEST EBX,EBX                        ; 004808bb
    JL 0x004808d3                       ; 004808bd
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    MOV EDX,dword ptr [ESP + 0x20]      ; 004808bf
    TEST EDX,EDX                        ; 004808c3
    JL 0x004808d3                       ; 004808c5
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    CMP EBX,dword ptr [0x006141b8]      ; 004808c7 | DAT_006141b8
    JL 0x0048095c                       ; 004808cd
        ;   XREF to: 0048095c (CONDITIONAL_JUMP)  ; LAB_0048095c
    MOV ESI,dword ptr [ESP + 0x24]      ; 004808d3
        ;   Label: LAB_004808d3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004808d7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004808db
    MOV EAX,dword ptr [ESP + 0x20]      ; 004808df
    NEG ESI                             ; 004808e3
    ADD EBP,EBX                         ; 004808e5
    ADD EDI,ESI                         ; 004808e7
    ADD ESI,EBX                         ; 004808e9
    MOV EBX,dword ptr [ESP + 0x24]      ; 004808eb
    MOV dword ptr [ESP],EAX             ; 004808ef
    ADD EBX,EAX                         ; 004808f2
    CMP EBX,dword ptr [ESP]             ; 004808f4
        ;   Label: LAB_004808f4
    JLE 0x0047f12a                      ; 004808f7
        ;   XREF to: 0047f12a (CONDITIONAL_JUMP)  ; LAB_0047f12a
    TEST ESI,ESI                        ; 004808fd
    JL 0x00480911                       ; 004808ff
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    TEST EDI,EDI                        ; 00480901
    JL 0x00480911                       ; 00480903
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    CMP ESI,dword ptr [0x006141b8]      ; 00480905 | DAT_006141b8
    JL 0x004809c5                       ; 0048090b
        ;   XREF to: 004809c5 (CONDITIONAL_JUMP)  ; LAB_004809c5
    TEST EBP,EBP                        ; 00480911
        ;   Label: LAB_00480911
    JL 0x00480925                       ; 00480913
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    TEST EDI,EDI                        ; 00480915
    JL 0x00480925                       ; 00480917
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    CMP EBP,dword ptr [0x006141b8]      ; 00480919 | DAT_006141b8
    JL 0x00480a28                       ; 0048091f
        ;   XREF to: 00480a28 (CONDITIONAL_JUMP)  ; LAB_00480a28
    TEST ESI,ESI                        ; 00480925
        ;   Label: LAB_00480925
    JL 0x00480939                       ; 00480927
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    TEST EBX,EBX                        ; 00480929
    JL 0x00480939                       ; 0048092b
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    CMP ESI,dword ptr [0x006141b8]      ; 0048092d | DAT_006141b8
    JL 0x00480a8b                       ; 00480933
        ;   XREF to: 00480a8b (CONDITIONAL_JUMP)  ; LAB_00480a8b
    TEST EBP,EBP                        ; 00480939
        ;   Label: LAB_00480939
    JL 0x0048094d                       ; 0048093b
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    TEST EBX,EBX                        ; 0048093d
    JL 0x0048094d                       ; 0048093f
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    CMP EBP,dword ptr [0x006141b8]      ; 00480941 | DAT_006141b8
    JL 0x00480aee                       ; 00480947
        ;   XREF to: 00480aee (CONDITIONAL_JUMP)  ; LAB_00480aee
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048094d
        ;   Label: LAB_0048094d
    INC ESI                             ; 00480951
    DEC EBP                             ; 00480952
    DEC EBX                             ; 00480953
    DEC EAX                             ; 00480954
    INC EDI                             ; 00480955
    MOV dword ptr [ESP + 0x24],EAX      ; 00480956
    JMP 0x004808f4                      ; 0048095a
        ;   XREF to: 004808f4 (UNCONDITIONAL_JUMP)  ; LAB_004808f4
    CMP EDX,dword ptr [0x006141bc]      ; 0048095c | DAT_006141bc
        ;   Label: LAB_0048095c
    JGE 0x004808d3                      ; 00480962
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    CMP EBX,dword ptr [0x01c35e48]      ; 00480968 | DAT_01c35e48
    JL 0x004808d3                       ; 0048096e
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    CMP EBX,dword ptr [0x01c35e50]      ; 00480974 | DAT_01c35e50
    JGE 0x004808d3                      ; 0048097a
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    MOV EAX,EDX                         ; 00480980
    CMP EAX,dword ptr [0x01c35e4c]      ; 00480982 | DAT_01c35e4c
    JL 0x004808d3                       ; 00480988
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    CMP EAX,dword ptr [0x01c35e54]      ; 0048098e | DAT_01c35e54
    JGE 0x004808d3                      ; 00480994
        ;   XREF to: 004808d3 (CONDITIONAL_JUMP)  ; LAB_004808d3
    CMP dword ptr [0x01c25f84],0x0      ; 0048099a | DAT_01c25f84
    JZ 0x004809b4                       ; 004809a1
        ;   XREF to: 004809b4 (CONDITIONAL_JUMP)  ; LAB_004809b4
    MOV EBP,EAX                         ; 004809a3
    PUSH EBP                            ; 004809a5
    PUSH EBX                            ; 004809a6
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 004809a7
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 004809ac
    JMP 0x004808d3                      ; 004809af
        ;   XREF to: 004808d3 (UNCONDITIONAL_JUMP)  ; LAB_004808d3
    MOV EDI,EAX                         ; 004809b4
        ;   Label: LAB_004809b4
    PUSH EDI                            ; 004809b6
    PUSH EBX                            ; 004809b7
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004809b8
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004809bd
    JMP 0x004808d3                      ; 004809c0
        ;   XREF to: 004808d3 (UNCONDITIONAL_JUMP)  ; LAB_004808d3
    CMP EDI,dword ptr [0x006141bc]      ; 004809c5 | DAT_006141bc
        ;   Label: LAB_004809c5
    JGE 0x00480911                      ; 004809cb
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    CMP ESI,dword ptr [0x01c35e48]      ; 004809d1 | DAT_01c35e48
    JL 0x00480911                       ; 004809d7
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    CMP ESI,dword ptr [0x01c35e50]      ; 004809dd | DAT_01c35e50
    JGE 0x00480911                      ; 004809e3
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    CMP EDI,dword ptr [0x01c35e4c]      ; 004809e9 | DAT_01c35e4c
    JL 0x00480911                       ; 004809ef
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    CMP EDI,dword ptr [0x01c35e54]      ; 004809f5 | DAT_01c35e54
    JGE 0x00480911                      ; 004809fb
        ;   XREF to: 00480911 (CONDITIONAL_JUMP)  ; LAB_00480911
    CMP dword ptr [0x01c25f84],0x0      ; 00480a01 | DAT_01c25f84
    JZ 0x00480a19                       ; 00480a08
        ;   XREF to: 00480a19 (CONDITIONAL_JUMP)  ; LAB_00480a19
    PUSH EDI                            ; 00480a0a
    PUSH ESI                            ; 00480a0b
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 00480a0c
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 00480a11
    JMP 0x00480911                      ; 00480a14
        ;   XREF to: 00480911 (UNCONDITIONAL_JUMP)  ; LAB_00480911
    PUSH EDI                            ; 00480a19
        ;   Label: LAB_00480a19
    PUSH ESI                            ; 00480a1a
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480a1b
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480a20
    JMP 0x00480911                      ; 00480a23
        ;   XREF to: 00480911 (UNCONDITIONAL_JUMP)  ; LAB_00480911
    CMP EDI,dword ptr [0x006141bc]      ; 00480a28 | DAT_006141bc
        ;   Label: LAB_00480a28
    JGE 0x00480925                      ; 00480a2e
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    CMP EBP,dword ptr [0x01c35e48]      ; 00480a34 | DAT_01c35e48
    JL 0x00480925                       ; 00480a3a
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    CMP EBP,dword ptr [0x01c35e50]      ; 00480a40 | DAT_01c35e50
    JGE 0x00480925                      ; 00480a46
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    CMP EDI,dword ptr [0x01c35e4c]      ; 00480a4c | DAT_01c35e4c
    JL 0x00480925                       ; 00480a52
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    CMP EDI,dword ptr [0x01c35e54]      ; 00480a58 | DAT_01c35e54
    JGE 0x00480925                      ; 00480a5e
        ;   XREF to: 00480925 (CONDITIONAL_JUMP)  ; LAB_00480925
    CMP dword ptr [0x01c25f84],0x0      ; 00480a64 | DAT_01c25f84
    JZ 0x00480a7c                       ; 00480a6b
        ;   XREF to: 00480a7c (CONDITIONAL_JUMP)  ; LAB_00480a7c
    PUSH EDI                            ; 00480a6d
    PUSH EBP                            ; 00480a6e
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 00480a6f
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 00480a74
    JMP 0x00480925                      ; 00480a77
        ;   XREF to: 00480925 (UNCONDITIONAL_JUMP)  ; LAB_00480925
    PUSH EDI                            ; 00480a7c
        ;   Label: LAB_00480a7c
    PUSH EBP                            ; 00480a7d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480a7e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480a83
    JMP 0x00480925                      ; 00480a86
        ;   XREF to: 00480925 (UNCONDITIONAL_JUMP)  ; LAB_00480925
    CMP EBX,dword ptr [0x006141bc]      ; 00480a8b | DAT_006141bc
        ;   Label: LAB_00480a8b
    JGE 0x00480939                      ; 00480a91
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    CMP ESI,dword ptr [0x01c35e48]      ; 00480a97 | DAT_01c35e48
    JL 0x00480939                       ; 00480a9d
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    CMP ESI,dword ptr [0x01c35e50]      ; 00480aa3 | DAT_01c35e50
    JGE 0x00480939                      ; 00480aa9
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    CMP EBX,dword ptr [0x01c35e4c]      ; 00480aaf | DAT_01c35e4c
    JL 0x00480939                       ; 00480ab5
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    CMP EBX,dword ptr [0x01c35e54]      ; 00480abb | DAT_01c35e54
    JGE 0x00480939                      ; 00480ac1
        ;   XREF to: 00480939 (CONDITIONAL_JUMP)  ; LAB_00480939
    CMP dword ptr [0x01c25f84],0x0      ; 00480ac7 | DAT_01c25f84
    JZ 0x00480adf                       ; 00480ace
        ;   XREF to: 00480adf (CONDITIONAL_JUMP)  ; LAB_00480adf
    PUSH EBX                            ; 00480ad0
    PUSH ESI                            ; 00480ad1
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 00480ad2
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 00480ad7
    JMP 0x00480939                      ; 00480ada
        ;   XREF to: 00480939 (UNCONDITIONAL_JUMP)  ; LAB_00480939
    PUSH EBX                            ; 00480adf
        ;   Label: LAB_00480adf
    PUSH ESI                            ; 00480ae0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480ae1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480ae6
    JMP 0x00480939                      ; 00480ae9
        ;   XREF to: 00480939 (UNCONDITIONAL_JUMP)  ; LAB_00480939
    CMP EBX,dword ptr [0x006141bc]      ; 00480aee | DAT_006141bc
        ;   Label: LAB_00480aee
    JGE 0x0048094d                      ; 00480af4
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    CMP EBP,dword ptr [0x01c35e48]      ; 00480afa | DAT_01c35e48
    JL 0x0048094d                       ; 00480b00
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    CMP EBP,dword ptr [0x01c35e50]      ; 00480b06 | DAT_01c35e50
    JGE 0x0048094d                      ; 00480b0c
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    CMP EBX,dword ptr [0x01c35e4c]      ; 00480b12 | DAT_01c35e4c
    JL 0x0048094d                       ; 00480b18
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    CMP EBX,dword ptr [0x01c35e54]      ; 00480b1e | DAT_01c35e54
    JGE 0x0048094d                      ; 00480b24
        ;   XREF to: 0048094d (CONDITIONAL_JUMP)  ; LAB_0048094d
    CMP dword ptr [0x01c25f84],0x0      ; 00480b2a | DAT_01c25f84
    JZ 0x00480b4f                       ; 00480b31
        ;   XREF to: 00480b4f (CONDITIONAL_JUMP)  ; LAB_00480b4f
    PUSH EBX                            ; 00480b33
    PUSH EBP                            ; 00480b34
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 00480b35
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 00480b3a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00480b3d
    INC ESI                             ; 00480b41
    DEC EBP                             ; 00480b42
    DEC EBX                             ; 00480b43
    DEC EAX                             ; 00480b44
    INC EDI                             ; 00480b45
    MOV dword ptr [ESP + 0x24],EAX      ; 00480b46
    JMP 0x004808f4                      ; 00480b4a
        ;   XREF to: 004808f4 (UNCONDITIONAL_JUMP)  ; LAB_004808f4
    PUSH EBX                            ; 00480b4f
        ;   Label: LAB_00480b4f
    PUSH EBP                            ; 00480b50
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00480b51
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00480b56
    MOV EAX,dword ptr [ESP + 0x24]      ; 00480b59
    INC ESI                             ; 00480b5d
    DEC EBP                             ; 00480b5e
    DEC EBX                             ; 00480b5f
    DEC EAX                             ; 00480b60
    INC EDI                             ; 00480b61
    MOV dword ptr [ESP + 0x24],EAX      ; 00480b62
    JMP 0x004808f4                      ; 00480b66
        ;   XREF to: 004808f4 (UNCONDITIONAL_JUMP)  ; LAB_004808f4

