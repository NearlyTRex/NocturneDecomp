; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492970(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_drawPixel_FUN_00517f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492970
        ;   Label: shape_edittool.cpp_FUN_00492970
    MOV EDX,dword ptr [ESP + 0x8]       ; 00492974
    TEST EAX,EAX                        ; 00492978
    JL 0x004929ca                       ; 0049297a
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    TEST EDX,EDX                        ; 0049297c
    JL 0x004929ca                       ; 0049297e
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP EAX,dword ptr [0x0061b498]      ; 00492980 | DAT_0061b498
    JGE 0x004929ca                      ; 00492986
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP EDX,dword ptr [0x0061b49c]      ; 00492988 | DAT_0061b49c
    JGE 0x004929ca                      ; 0049298e
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP dword ptr [ESP + 0xc],0x0       ; 00492990
    JZ 0x004929b7                       ; 00492995
        ;   XREF to: 004929b7 (CONDITIONAL_JUMP)  ; LAB_004929b7
    CMP EAX,dword ptr [0x01c4f008]      ; 00492997 | DAT_01c4f008
    JL 0x004929ca                       ; 0049299d
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP EAX,dword ptr [0x01c4f010]      ; 0049299f | DAT_01c4f010
    JGE 0x004929ca                      ; 004929a5
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP EDX,dword ptr [0x01c4f00c]      ; 004929a7 | DAT_01c4f00c
    JL 0x004929ca                       ; 004929ad
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP EDX,dword ptr [0x01c4f014]      ; 004929af | DAT_01c4f014
    JGE 0x004929ca                      ; 004929b5
        ;   XREF to: 004929ca (CONDITIONAL_JUMP)  ; LAB_004929ca
    CMP dword ptr [0x01c3f544],0x0      ; 004929b7 | DAT_01c3f544
        ;   Label: LAB_004929b7
    JZ 0x004929cb                       ; 004929be
        ;   XREF to: 004929cb (CONDITIONAL_JUMP)  ; LAB_004929cb
    PUSH EDX                            ; 004929c0
    PUSH EAX                            ; 004929c1
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 004929c2
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 004929c7
    RET                                 ; 004929ca
        ;   Label: LAB_004929ca
    PUSH EDX                            ; 004929cb
        ;   Label: LAB_004929cb
    PUSH EAX                            ; 004929cc
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004929cd
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004929d2
    RET                                 ; 004929d5

