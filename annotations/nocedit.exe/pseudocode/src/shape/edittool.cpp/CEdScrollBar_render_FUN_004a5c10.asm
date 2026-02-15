; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005075f5
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 0050720a
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c674
;   core_msnedit.cpp_FUN_00535e70 at 00536a77
;   core_script.cpp_CScript_drawEditor_FUN_005645d0 at 00564660
;   core_setedit.cpp_CDemonSet_FUN_00577af0 at 00577bde
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a4f11
;
; Referenced Globals:
;   int g_ShadowColor
;   int g_ShadowHighlightColor
;   void* g_ActiveControl
;   int g_ScrollAction
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
;   shape_edittool.cpp_draw3DBorder_FUN_004a58f0
;   shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5c10
        ;   Label: shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
    PUSH ESI                            ; 004a5c11
    PUSH EDI                            ; 004a5c12
    PUSH EBP                            ; 004a5c13
    MOV EBP,ESP                         ; 004a5c14
    SUB ESP,0x10                        ; 004a5c16
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a5c19
    PUSH EBX                            ; 004a5c1c
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0 ; 004a5c1d
        ;   XREF to: 004a5ea0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a5c22
    MOV EDX,dword ptr [0x02cf2ae0]      ; 004a5c25 | g_ShadowHighlightColor
    PUSH EDX                            ; 004a5c2b
    MOV ECX,dword ptr [0x02cf2adc]      ; 004a5c2c | g_ShadowColor
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a5c32
    PUSH ECX                            ; 004a5c35
    SUB EAX,0x2                         ; 004a5c36
    PUSH EAX                            ; 004a5c39
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a5c3a
    SUB EAX,0x2                         ; 004a5c3d
    PUSH EAX                            ; 004a5c40
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a5c41
    INC EAX                             ; 004a5c44
    PUSH EAX                            ; 004a5c45
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a5c46
    INC EAX                             ; 004a5c49
    PUSH EAX                            ; 004a5c4a
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 004a5c4b
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a5c50
    ADD ESP,0x18                        ; 004a5c53
    INC EAX                             ; 004a5c56
    MOV EDI,dword ptr [EBX + 0x18]      ; 004a5c57
    MOV dword ptr [EBP + -0x8],EAX      ; 004a5c5a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a5c5d
    MOV ESI,dword ptr [EBX + 0x20]      ; 004a5c60
    DEC EAX                             ; 004a5c63
    INC EDI                             ; 004a5c64
    MOV dword ptr [EBP + -0x4],EAX      ; 004a5c65
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a5c68
    DEC ESI                             ; 004a5c6b
    TEST EAX,EAX                        ; 004a5c6c
    JNZ 0x004a5d88                      ; 004a5c6e
        ;   XREF to: 004a5d88 (CONDITIONAL_JUMP)  ; LAB_004a5d88
    MOV EDX,dword ptr [EBP + -0x4]      ; 004a5c74
    MOV EAX,dword ptr [EBP + -0x8]      ; 004a5c77
    MOV ECX,dword ptr [EBX + 0x30]      ; 004a5c7a
    MOV dword ptr [EBP + -0x10],EDX     ; 004a5c7d
    MOV dword ptr [EBP + -0xc],ECX      ; 004a5c80
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a5c83
    CMP EBX,dword ptr [0x02cf2b00]      ; 004a5c86 | g_ActiveControl
        ;   Label: LAB_004a5c86
    JNZ 0x004a5d9b                      ; 004a5c8c
        ;   XREF to: 004a5d9b (CONDITIONAL_JUMP)  ; LAB_004a5d9b
    CMP dword ptr [0x02cf2b04],0x0      ; 004a5c92 | g_ScrollAction
    JNZ 0x004a5d9b                      ; 004a5c99
        ;   XREF to: 004a5d9b (CONDITIONAL_JUMP)  ; LAB_004a5d9b
    MOV ECX,0x1                         ; 004a5c9f
    PUSH ECX                            ; 004a5ca4
        ;   Label: LAB_004a5ca4
    MOV ECX,dword ptr [EBP + -0xc]      ; 004a5ca5
    PUSH ECX                            ; 004a5ca8
    MOV ECX,dword ptr [EBP + -0x10]     ; 004a5ca9
    PUSH ECX                            ; 004a5cac
    PUSH EDX                            ; 004a5cad
    PUSH EAX                            ; 004a5cae
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a5caf
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a5cb4
    ADD ESP,0x14                        ; 004a5cb7
    TEST EAX,EAX                        ; 004a5cba
    JZ 0x004a5db8                       ; 004a5cbc
        ;   XREF to: 004a5db8 (CONDITIONAL_JUMP)  ; LAB_004a5db8
    CMP EBX,dword ptr [0x02cf2b00]      ; 004a5cc2 | g_ActiveControl
    JNZ 0x004a5da2                      ; 004a5cc8
        ;   XREF to: 004a5da2 (CONDITIONAL_JUMP)  ; LAB_004a5da2
    MOV EDX,dword ptr [0x02cf2b04]      ; 004a5cce | g_ScrollAction
    CMP EDX,0x1                         ; 004a5cd4
    JNZ 0x004a5da2                      ; 004a5cd7
        ;   XREF to: 004a5da2 (CONDITIONAL_JUMP)  ; LAB_004a5da2
    MOV EAX,EDX                         ; 004a5cdd
    PUSH EAX                            ; 004a5cdf
        ;   Label: LAB_004a5cdf
    PUSH ESI                            ; 004a5ce0
    MOV ECX,dword ptr [EBX + 0x24]      ; 004a5ce1
    PUSH ECX                            ; 004a5ce4
    PUSH EDI                            ; 004a5ce5
    MOV EAX,dword ptr [EBP + -0x8]      ; 004a5ce6
    PUSH EAX                            ; 004a5ce9
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a5cea
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
    ADD ESP,0x14                        ; 004a5cef
    MOV EDX,dword ptr [0x02cf2b00]      ; 004a5cf2 | g_ActiveControl
    PUSH 0x2                            ; 004a5cf8
    CMP EBX,EDX                         ; 004a5cfa
    JNZ 0x004a5da9                      ; 004a5cfc
        ;   XREF to: 004a5da9 (CONDITIONAL_JUMP)  ; LAB_004a5da9
    MOV ECX,dword ptr [0x02cf2b04]      ; 004a5d02 | g_ScrollAction
    CMP ECX,0x1                         ; 004a5d08
    JNZ 0x004a5da9                      ; 004a5d0b
        ;   XREF to: 004a5da9 (CONDITIONAL_JUMP)  ; LAB_004a5da9
    MOV EAX,ECX                         ; 004a5d11
    PUSH EAX                            ; 004a5d13
        ;   Label: LAB_004a5d13
    PUSH ESI                            ; 004a5d14
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a5d15
    PUSH EAX                            ; 004a5d18
    PUSH EDI                            ; 004a5d19
    MOV EDX,dword ptr [EBP + -0x8]      ; 004a5d1a
    PUSH EDX                            ; 004a5d1d
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 ; 004a5d1e
        ;   XREF to: 004a59a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0(int left, int top, int right, int bottom, ...)
    MOV ECX,dword ptr [0x02cf2b00]      ; 004a5d23 | g_ActiveControl
    ADD ESP,0x18                        ; 004a5d29
    CMP EBX,ECX                         ; 004a5d2c
    JNZ 0x004a5db0                      ; 004a5d2e
        ;   XREF to: 004a5db0 (CONDITIONAL_JUMP)  ; LAB_004a5db0
    CMP dword ptr [0x02cf2b04],0x2      ; 004a5d34 | g_ScrollAction
    JNZ 0x004a5db0                      ; 004a5d3b
        ;   XREF to: 004a5db0 (CONDITIONAL_JUMP)  ; LAB_004a5db0
    MOV EAX,0x1                         ; 004a5d3d
    PUSH EAX                            ; 004a5d42
        ;   Label: LAB_004a5d42
    PUSH ESI                            ; 004a5d43
    MOV EDX,dword ptr [EBP + -0x4]      ; 004a5d44
    PUSH EDX                            ; 004a5d47
    PUSH EDI                            ; 004a5d48
    MOV ECX,dword ptr [EBX + 0x28]      ; 004a5d49
    PUSH ECX                            ; 004a5d4c
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a5d4d
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
    ADD ESP,0x14                        ; 004a5d52
    MOV EAX,[0x02cf2b00]                ; 004a5d55 | g_ActiveControl
    PUSH 0x3                            ; 004a5d5a
    CMP EBX,EAX                         ; 004a5d5c
    JNZ 0x004a5db4                      ; 004a5d5e
        ;   XREF to: 004a5db4 (CONDITIONAL_JUMP)  ; LAB_004a5db4
    CMP dword ptr [0x02cf2b04],0x2      ; 004a5d60 | g_ScrollAction
    JNZ 0x004a5db4                      ; 004a5d67
        ;   XREF to: 004a5db4 (CONDITIONAL_JUMP)  ; LAB_004a5db4
    MOV EAX,0x1                         ; 004a5d69
    PUSH EAX                            ; 004a5d6e
        ;   Label: LAB_004a5d6e
    PUSH ESI                            ; 004a5d6f
    MOV ECX,dword ptr [EBP + -0x4]      ; 004a5d70
    PUSH ECX                            ; 004a5d73
    PUSH EDI                            ; 004a5d74
    MOV ESI,dword ptr [EBX + 0x28]      ; 004a5d75
    PUSH ESI                            ; 004a5d78
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 ; 004a5d79
        ;   XREF to: 004a59a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0(int left, int top, int right, int bottom, ...)
    ADD ESP,0x18                        ; 004a5d7e
    MOV ESP,EBP                         ; 004a5d81
    POP EBP                             ; 004a5d83
    POP EDI                             ; 004a5d84
    POP ESI                             ; 004a5d85
    POP EBX                             ; 004a5d86
    RET                                 ; 004a5d87
    MOV dword ptr [EBP + -0xc],ESI      ; 004a5d88
        ;   Label: LAB_004a5d88
    MOV EDX,dword ptr [EBX + 0x30]      ; 004a5d8b
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004a5d8e
    MOV dword ptr [EBP + -0x10],EDX     ; 004a5d91
    MOV EDX,EDI                         ; 004a5d94
    JMP 0x004a5c86                      ; 004a5d96
        ;   XREF to: 004a5c86 (UNCONDITIONAL_JUMP)  ; LAB_004a5c86
    XOR ECX,ECX                         ; 004a5d9b
        ;   Label: LAB_004a5d9b
    JMP 0x004a5ca4                      ; 004a5d9d
        ;   XREF to: 004a5ca4 (UNCONDITIONAL_JUMP)  ; LAB_004a5ca4
    XOR EAX,EAX                         ; 004a5da2
        ;   Label: LAB_004a5da2
    JMP 0x004a5cdf                      ; 004a5da4
        ;   XREF to: 004a5cdf (UNCONDITIONAL_JUMP)  ; LAB_004a5cdf
    XOR EAX,EAX                         ; 004a5da9
        ;   Label: LAB_004a5da9
    JMP 0x004a5d13                      ; 004a5dab
        ;   XREF to: 004a5d13 (UNCONDITIONAL_JUMP)  ; LAB_004a5d13
    XOR EAX,EAX                         ; 004a5db0
        ;   Label: LAB_004a5db0
    JMP 0x004a5d42                      ; 004a5db2
        ;   XREF to: 004a5d42 (UNCONDITIONAL_JUMP)  ; LAB_004a5d42
    XOR EAX,EAX                         ; 004a5db4
        ;   Label: LAB_004a5db4
    JMP 0x004a5d6e                      ; 004a5db6
        ;   XREF to: 004a5d6e (UNCONDITIONAL_JUMP)  ; LAB_004a5d6e
    CMP EBX,dword ptr [0x02cf2b00]      ; 004a5db8 | g_ActiveControl
        ;   Label: LAB_004a5db8
    JNZ 0x004a5e86                      ; 004a5dbe
        ;   XREF to: 004a5e86 (CONDITIONAL_JUMP)  ; LAB_004a5e86
    MOV ECX,dword ptr [0x02cf2b04]      ; 004a5dc4 | g_ScrollAction
    CMP ECX,0x1                         ; 004a5dca
    JNZ 0x004a5e86                      ; 004a5dcd
        ;   XREF to: 004a5e86 (CONDITIONAL_JUMP)  ; LAB_004a5e86
    MOV EAX,ECX                         ; 004a5dd3
    PUSH EAX                            ; 004a5dd5
        ;   Label: LAB_004a5dd5
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a5dd6
    PUSH EAX                            ; 004a5dd9
    MOV EDX,dword ptr [EBP + -0x4]      ; 004a5dda
    PUSH EDX                            ; 004a5ddd
    PUSH EDI                            ; 004a5dde
    MOV ECX,dword ptr [EBP + -0x8]      ; 004a5ddf
    PUSH ECX                            ; 004a5de2
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a5de3
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
    ADD ESP,0x14                        ; 004a5de8
    MOV EAX,[0x02cf2b00]                ; 004a5deb | g_ActiveControl
    PUSH 0x0                            ; 004a5df0
    CMP EBX,EAX                         ; 004a5df2
    JNZ 0x004a5e8d                      ; 004a5df4
        ;   XREF to: 004a5e8d (CONDITIONAL_JUMP)  ; LAB_004a5e8d
    MOV EDX,dword ptr [0x02cf2b04]      ; 004a5dfa | g_ScrollAction
    CMP EDX,0x1                         ; 004a5e00
    JNZ 0x004a5e8d                      ; 004a5e03
        ;   XREF to: 004a5e8d (CONDITIONAL_JUMP)  ; LAB_004a5e8d
    MOV EAX,EDX                         ; 004a5e09
    PUSH EAX                            ; 004a5e0b
        ;   Label: LAB_004a5e0b
    MOV ECX,dword ptr [EBX + 0x24]      ; 004a5e0c
    PUSH ECX                            ; 004a5e0f
    MOV EAX,dword ptr [EBP + -0x4]      ; 004a5e10
    PUSH EAX                            ; 004a5e13
    PUSH EDI                            ; 004a5e14
    MOV EDX,dword ptr [EBP + -0x8]      ; 004a5e15
    PUSH EDX                            ; 004a5e18
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 ; 004a5e19
        ;   XREF to: 004a59a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0(int left, int top, int right, int bottom, ...)
    MOV ECX,dword ptr [0x02cf2b00]      ; 004a5e1e | g_ActiveControl
    ADD ESP,0x18                        ; 004a5e24
    CMP EBX,ECX                         ; 004a5e27
    JNZ 0x004a5e94                      ; 004a5e29
        ;   XREF to: 004a5e94 (CONDITIONAL_JUMP)  ; LAB_004a5e94
    CMP dword ptr [0x02cf2b04],0x2      ; 004a5e2b | g_ScrollAction
    JNZ 0x004a5e94                      ; 004a5e32
        ;   XREF to: 004a5e94 (CONDITIONAL_JUMP)  ; LAB_004a5e94
    MOV EAX,0x1                         ; 004a5e34
    PUSH EAX                            ; 004a5e39
        ;   Label: LAB_004a5e39
    PUSH ESI                            ; 004a5e3a
    MOV EAX,dword ptr [EBP + -0x4]      ; 004a5e3b
    PUSH EAX                            ; 004a5e3e
    MOV EDX,dword ptr [EBX + 0x28]      ; 004a5e3f
    PUSH EDX                            ; 004a5e42
    MOV ECX,dword ptr [EBP + -0x8]      ; 004a5e43
    PUSH ECX                            ; 004a5e46
    CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0 ; 004a5e47
        ;   XREF to: 004a58f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, ...)
    ADD ESP,0x14                        ; 004a5e4c
    MOV EDI,dword ptr [0x02cf2b00]      ; 004a5e4f | g_ActiveControl
    PUSH 0x1                            ; 004a5e55
    CMP EBX,EDI                         ; 004a5e57
    JNZ 0x004a5e98                      ; 004a5e59
        ;   XREF to: 004a5e98 (CONDITIONAL_JUMP)  ; LAB_004a5e98
    CMP dword ptr [0x02cf2b04],0x2      ; 004a5e5b | g_ScrollAction
    JNZ 0x004a5e98                      ; 004a5e62
        ;   XREF to: 004a5e98 (CONDITIONAL_JUMP)  ; LAB_004a5e98
    MOV EAX,0x1                         ; 004a5e64
    PUSH EAX                            ; 004a5e69
        ;   Label: LAB_004a5e69
    PUSH ESI                            ; 004a5e6a
    MOV EDX,dword ptr [EBP + -0x4]      ; 004a5e6b
    PUSH EDX                            ; 004a5e6e
    MOV ECX,dword ptr [EBX + 0x28]      ; 004a5e6f
    PUSH ECX                            ; 004a5e72
    MOV EBX,dword ptr [EBP + -0x8]      ; 004a5e73
    PUSH EBX                            ; 004a5e76
    CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 ; 004a5e77
        ;   XREF to: 004a59a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0(int left, int top, int right, int bottom, ...)
    ADD ESP,0x18                        ; 004a5e7c
    MOV ESP,EBP                         ; 004a5e7f
    POP EBP                             ; 004a5e81
    POP EDI                             ; 004a5e82
    POP ESI                             ; 004a5e83
    POP EBX                             ; 004a5e84
    RET                                 ; 004a5e85
    XOR EAX,EAX                         ; 004a5e86
        ;   Label: LAB_004a5e86
    JMP 0x004a5dd5                      ; 004a5e88
        ;   XREF to: 004a5dd5 (UNCONDITIONAL_JUMP)  ; LAB_004a5dd5
    XOR EAX,EAX                         ; 004a5e8d
        ;   Label: LAB_004a5e8d
    JMP 0x004a5e0b                      ; 004a5e8f
        ;   XREF to: 004a5e0b (UNCONDITIONAL_JUMP)  ; LAB_004a5e0b
    XOR EAX,EAX                         ; 004a5e94
        ;   Label: LAB_004a5e94
    JMP 0x004a5e39                      ; 004a5e96
        ;   XREF to: 004a5e39 (UNCONDITIONAL_JUMP)  ; LAB_004a5e39
    XOR EAX,EAX                         ; 004a5e98
        ;   Label: LAB_004a5e98
    JMP 0x004a5e69                      ; 004a5e9a
        ;   XREF to: 004a5e69 (UNCONDITIONAL_JUMP)  ; LAB_004a5e69

