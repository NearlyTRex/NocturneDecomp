; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_00483970(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_FUN_004b7f90 at 004b8546
;   shape_edittool.cpp_FUN_00483450 at 004834d6
;
; Referenced Globals:
;   undefined4 DAT_005bd74d
;   undefined4 DAT_01c5bb70
;   undefined4 DAT_01c5bb74
;   undefined4 DAT_01c5bb78
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;   undefined4 DAT_02d21b80
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
;   shape_edittool.cpp_FUN_004849f0
;   shape_edittool.cpp_FUN_00484b50
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483970
        ;   Label: shape_edittool.cpp_FUN_00483970
    PUSH ESI                            ; 00483971
    PUSH EDI                            ; 00483972
    PUSH EBP                            ; 00483973
    MOV EBP,ESP                         ; 00483974
    SUB ESP,0x4                         ; 00483976
    AND ESP,0xfffffff8                  ; 00483979
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048397c
    PUSH EBX                            ; 0048397f
    CALL shape_edittool.cpp_FUN_004849f0 ; 00483980
        ;   XREF to: 004849f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004849f0(CPickList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x188]     ; 00483985
    ADD ESP,0x4                         ; 0048398b
    TEST EDX,EDX                        ; 0048398e
    JNZ 0x004839a7                      ; 00483990
        ;   XREF to: 004839a7 (CONDITIONAL_JUMP)  ; LAB_004839a7
    CMP dword ptr [0x02d21b80],0x0      ; 00483992 | DAT_02d21b80
        ;   Label: LAB_00483992
    JZ 0x004839cb                       ; 00483999
        ;   XREF to: 004839cb (CONDITIONAL_JUMP)  ; LAB_004839cb
    MOV EAX,0xffffffff                  ; 0048399b
        ;   Label: LAB_0048399b
    MOV ESP,EBP                         ; 004839a0
        ;   Label: LAB_004839a0
    POP EBP                             ; 004839a2
    POP EDI                             ; 004839a3
    POP ESI                             ; 004839a4
    POP EBX                             ; 004839a5
    RET                                 ; 004839a6
    MOV ECX,dword ptr [EBX + 0x194]     ; 004839a7
        ;   Label: LAB_004839a7
    PUSH ECX                            ; 004839ad
    PUSH EBX                            ; 004839ae
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0 ; 004839af
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 004839b4
    TEST EAX,EAX                        ; 004839b7
    JNZ 0x004839c3                      ; 004839b9
        ;   XREF to: 004839c3 (CONDITIONAL_JUMP)  ; LAB_004839c3
    MOV dword ptr [EBX + 0x188],EAX     ; 004839bb
    JMP 0x00483992                      ; 004839c1
        ;   XREF to: 00483992 (UNCONDITIONAL_JUMP)  ; LAB_00483992
    MOV EAX,dword ptr [EBX + 0x194]     ; 004839c3
        ;   Label: LAB_004839c3
    JMP 0x004839a0                      ; 004839c9
        ;   XREF to: 004839a0 (UNCONDITIONAL_JUMP)  ; LAB_004839a0
    PUSH EBX                            ; 004839cb
        ;   Label: LAB_004839cb
    MOV EAX,dword ptr [EBX + 0xc]       ; 004839cc
    CALL dword ptr [EAX + 0x18]         ; 004839cf
    ADD ESP,0x4                         ; 004839d2
    TEST EAX,EAX                        ; 004839d5
    JL 0x0048399b                       ; 004839d7
        ;   XREF to: 0048399b (CONDITIONAL_JUMP)  ; LAB_0048399b
    PUSH EBX                            ; 004839d9
    CALL shape_edittool.cpp_FUN_004849f0 ; 004839da
        ;   XREF to: 004849f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004849f0(CPickList * this_ptr)
    MOV EDI,dword ptr [EBX + 0x58]      ; 004839df
    ADD ESP,0x4                         ; 004839e2
    TEST EDI,EDI                        ; 004839e5
    JNZ 0x00483b5b                      ; 004839e7
        ;   XREF to: 00483b5b (CONDITIONAL_JUMP)  ; LAB_00483b5b
    MOV EAX,dword ptr [EBX + 0x1f0]     ; 004839ed
    LEA ECX,[EBX + 0x1bc]               ; 004839f3
    CMP EAX,0x1                         ; 004839f9
    JNZ 0x00483b67                      ; 004839fc
        ;   XREF to: 00483b67 (CONDITIONAL_JUMP)  ; LAB_00483b67
    MOV EAX,dword ptr [EBX + 0x198]     ; 00483a02
    MOV dword ptr [EBX + 0x1bc],EAX     ; 00483a08
    MOV EAX,dword ptr [EBX]             ; 00483a0e
    MOV dword ptr [EBX + 0x1c0],EAX     ; 00483a10
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00483a16
    PUSH ECX                            ; 00483a1c
    MOV dword ptr [EBX + 0x1c4],EAX     ; 00483a1d
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00 ; 00483a23
        ;   XREF to: 00485b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1bc]     ; 00483a28
    ADD ESP,0x4                         ; 00483a2e
        ;   Label: LAB_00483a2e
    MOV dword ptr [EBX + 0x198],EAX     ; 00483a31
    MOV ECX,dword ptr [EBX + 0x1a8]     ; 00483a37
        ;   Label: LAB_00483a37
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00483a3d
    IMUL EAX,ECX                        ; 00483a43
    MOV ESI,dword ptr [EBX + 0x198]     ; 00483a46
    MOV EDI,dword ptr [EBX + 0x194]     ; 00483a4c
    ADD EAX,ESI                         ; 00483a52
    CMP EAX,EDI                         ; 00483a54
    JG 0x00483a5f                       ; 00483a56
        ;   XREF to: 00483a5f (CONDITIONAL_JUMP)  ; LAB_00483a5f
    DEC EAX                             ; 00483a58
    MOV dword ptr [EBX + 0x194],EAX     ; 00483a59
    MOV EDX,dword ptr [EBX + 0x198]     ; 00483a5f
        ;   Label: LAB_00483a5f
    CMP EDX,dword ptr [EBX + 0x194]     ; 00483a65
    JLE 0x00483a73                      ; 00483a6b
        ;   XREF to: 00483a73 (CONDITIONAL_JUMP)  ; LAB_00483a73
    MOV dword ptr [EBX + 0x194],EDX     ; 00483a6d
    CMP byte ptr [EBX + 0x5c],0x0       ; 00483a73
        ;   Label: LAB_00483a73
    JZ 0x00483ab0                       ; 00483a77
        ;   XREF to: 00483ab0 (CONDITIONAL_JUMP)  ; LAB_00483ab0
    LEA EAX,[EBX + 0x1f4]               ; 00483a79
    PUSH EAX                            ; 00483a7f
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440 ; 00483a80
        ;   XREF to: 00486440 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00483a85
    TEST EAX,EAX                        ; 00483a88
    JZ 0x00483a96                       ; 00483a8a
        ;   XREF to: 00483a96 (CONDITIONAL_JUMP)  ; LAB_00483a96
    MOV dword ptr [EBX + 0x188],0x1     ; 00483a8c
    MOV ECX,dword ptr [0x01c5bb78]      ; 00483a96 | DAT_01c5bb78
        ;   Label: LAB_00483a96
    LEA EAX,[EBX + 0x1f4]               ; 00483a9c
    CMP EAX,ECX                         ; 00483aa2
    JNZ 0x00483ab0                      ; 00483aa4
        ;   XREF to: 00483ab0 (CONDITIONAL_JUMP)  ; LAB_00483ab0
    MOV dword ptr [EBX + 0x3bc],0x0     ; 00483aa6
    CMP byte ptr [EBX + 0xc0],0x0       ; 00483ab0
        ;   Label: LAB_00483ab0
    JNZ 0x00483bc7                      ; 00483ab7
        ;   XREF to: 00483bc7 (CONDITIONAL_JUMP)  ; LAB_00483bc7
    TEST byte ptr [0x01c5fae4],0x1      ; 00483abd | DAT_01c5fae4
        ;   Label: LAB_00483abd
    JZ 0x00483b5b                       ; 00483ac4
        ;   XREF to: 00483b5b (CONDITIONAL_JUMP)  ; LAB_00483b5b
    CMP dword ptr [0x01c5bb78],0x0      ; 00483aca | DAT_01c5bb78
    JNZ 0x00483b5b                      ; 00483ad1
        ;   XREF to: 00483b5b (CONDITIONAL_JUMP)  ; LAB_00483b5b
    MOV EDX,dword ptr [0x01c5fae0]      ; 00483ad7 | DAT_01c5fae0
    PUSH EDX                            ; 00483add
    MOV ECX,dword ptr [0x01c5fadc]      ; 00483ade | DAT_01c5fadc
    PUSH ECX                            ; 00483ae4
    PUSH EBX                            ; 00483ae5
    CALL shape_edittool.cpp_FUN_00484b50 ; 00483ae6
        ;   XREF to: 00484b50 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00484b50(CPickList * this_ptr, int mouse_x, int mouse_y)
    ADD ESP,0xc                         ; 00483aeb
    MOV ESI,EAX                         ; 00483aee
    TEST EAX,EAX                        ; 00483af0
    JL 0x00483b55                       ; 00483af2
        ;   XREF to: 00483b55 (CONDITIONAL_JUMP)  ; LAB_00483b55
    MOV CL,byte ptr [0x01c5fae4]        ; 00483af4 | DAT_01c5fae4
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 00483afa
    AND CL,0xfe                         ; 00483b04
    MOV dword ptr [EBX + 0x194],EAX     ; 00483b07
    MOV byte ptr [0x01c5fae4],CL        ; 00483b0d | DAT_01c5fae4
    CALL wincore_winrun.cpp_FUN_005806a0 ; 00483b13
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
    MOV EDI,dword ptr [0x01c5bb70]      ; 00483b18 | DAT_01c5bb70
    MOV EDX,EAX                         ; 00483b1e
    SUB EAX,EDI                         ; 00483b20
    TEST EAX,EAX                        ; 00483b22
    JLE 0x00483b4f                      ; 00483b24
        ;   XREF to: 00483b4f (CONDITIONAL_JUMP)  ; LAB_00483b4f
    MOV dword ptr [ESP],EAX             ; 00483b26
    FILD dword ptr [ESP]                ; 00483b29
    FCOMP double ptr [0x005bd74d]       ; 00483b2c | DAT_005bd74d
    FNSTSW AX                           ; 00483b32
    SAHF                                ; 00483b34
    JNC 0x00483b4f                      ; 00483b35
        ;   XREF to: 00483b4f (CONDITIONAL_JUMP)  ; LAB_00483b4f
    MOV ECX,dword ptr [0x01c5bb74]      ; 00483b37 | DAT_01c5bb74
    CMP ECX,dword ptr [EBX + 0x194]     ; 00483b3d
    JNZ 0x00483b4f                      ; 00483b43
        ;   XREF to: 00483b4f (CONDITIONAL_JUMP)  ; LAB_00483b4f
    MOV dword ptr [EBX + 0x188],0x1     ; 00483b45
    MOV dword ptr [0x01c5bb70],EDX      ; 00483b4f | DAT_01c5bb70
        ;   Label: LAB_00483b4f
    MOV dword ptr [0x01c5bb74],ESI      ; 00483b55 | DAT_01c5bb74
        ;   Label: LAB_00483b55
    MOV EAX,0xfffffffe                  ; 00483b5b
        ;   Label: LAB_00483b5b
    MOV ESP,EBP                         ; 00483b60
    POP EBP                             ; 00483b62
    POP EDI                             ; 00483b63
    POP ESI                             ; 00483b64
    POP EBX                             ; 00483b65
    RET                                 ; 00483b66
    CMP EAX,0x2                         ; 00483b67
        ;   Label: LAB_00483b67
    JNZ 0x00483a37                      ; 00483b6a
        ;   XREF to: 00483a37 (CONDITIONAL_JUMP)  ; LAB_00483a37
    MOV EDX,dword ptr [EBX + 0x198]     ; 00483b70
    MOV ESI,dword ptr [EBX + 0x1a0]     ; 00483b76
    MOV EAX,EDX                         ; 00483b7c
    SAR EDX,0x1f                        ; 00483b7e
    IDIV ESI                            ; 00483b81
    MOV dword ptr [EBX + 0x1bc],EAX     ; 00483b83
    MOV EDI,dword ptr [EBX + 0x1a0]     ; 00483b89
    MOV EAX,dword ptr [EBX]             ; 00483b8f
    ADD EAX,EDI                         ; 00483b91
    LEA EDX,[EAX + -0x1]                ; 00483b93
    MOV EAX,EDX                         ; 00483b96
    SAR EDX,0x1f                        ; 00483b98
    IDIV EDI                            ; 00483b9b
    MOV dword ptr [EBX + 0x1c0],EAX     ; 00483b9d
    MOV EAX,dword ptr [EBX + 0x1a8]     ; 00483ba3
    PUSH ECX                            ; 00483ba9
    MOV dword ptr [EBX + 0x1c4],EAX     ; 00483baa
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00 ; 00483bb0
        ;   XREF to: 00485b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1bc]     ; 00483bb5
    IMUL EAX,dword ptr [EBX + 0x1a0]    ; 00483bbb
    JMP 0x00483a2e                      ; 00483bc2
        ;   XREF to: 00483a2e (UNCONDITIONAL_JUMP)  ; LAB_00483a2e
    LEA ESI,[EBX + 0x2d8]               ; 00483bc7
        ;   Label: LAB_00483bc7
    PUSH ESI                            ; 00483bcd
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440 ; 00483bce
        ;   XREF to: 00486440 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00483bd3
    TEST EAX,EAX                        ; 00483bd6
    JNZ 0x0048399b                      ; 00483bd8
        ;   XREF to: 0048399b (CONDITIONAL_JUMP)  ; LAB_0048399b
    CMP ESI,dword ptr [0x01c5bb78]      ; 00483bde | DAT_01c5bb78
    JNZ 0x00483abd                      ; 00483be4
        ;   XREF to: 00483abd (CONDITIONAL_JUMP)  ; LAB_00483abd
    MOV dword ptr [EBX + 0x3bc],0x1     ; 00483bea
    JMP 0x00483abd                      ; 00483bf4
        ;   XREF to: 00483abd (UNCONDITIONAL_JUMP)  ; LAB_00483abd

