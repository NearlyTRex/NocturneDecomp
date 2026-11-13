; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_FUN_005619f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005eb0f0
;   undefined4 DAT_005eb0f8
;   undefined4 DAT_005eb100
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0
;   shape_spotview.cpp_CSpotView_reset_FUN_005619a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005619f0
        ;   Label: shape_spotview.cpp_FUN_005619f0
    PUSH EBP                            ; 005619f1
    MOV EBP,ESP                         ; 005619f2
    SUB ESP,0x18                        ; 005619f4
    AND ESP,0xfffffff8                  ; 005619f7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005619fa
    PUSH 0x38                           ; 005619fd
    MOV EAX,[0x00617dd4]                ; 005619ff | DAT_00617dd4
    MOV EDX,0x3f800000                  ; 00561a04
    PUSH EAX                            ; 00561a09
    MOV dword ptr [ESP + 0x8],EDX       ; 00561a0a
    MOV EDX,dword ptr [EAX]             ; 00561a0e
    CALL dword ptr [EDX]                ; 00561a10
    ADD ESP,0x8                         ; 00561a12
    TEST EAX,EAX                        ; 00561a15
    JZ 0x00561c8f                       ; 00561a17
        ;   XREF to: 00561c8f (CONDITIONAL_JUMP)  ; LAB_00561c8f
    MOV dword ptr [ESP],0x3d4ccccd      ; 00561a1d
    MOV EAX,[0x00616494]                ; 00561a24 | g_CGamePtr
        ;   Label: LAB_00561a24
    FLD float ptr [ESP]                 ; 00561a29
    FLD ST0                             ; 00561a2c
    FMUL double ptr [0x005eb0f8]        ; 00561a2e | DAT_005eb0f8
    FLD float ptr [EAX + 0x284]         ; 00561a34
    FMULP ST2                           ; 00561a3a
    FLD float ptr [EBX + 0x2c]          ; 00561a3c
    FMUL double ptr [0x005eb100]        ; 00561a3f | DAT_005eb100
    FXCH ST2                            ; 00561a45
    FST float ptr [ESP + 0xc]           ; 00561a47
    FMUL float ptr [0x005eb0f0]         ; 00561a4b | DAT_005eb0f0
    FXCH                                ; 00561a51
    FSTP float ptr [ESP + 0x8]          ; 00561a53
    FXCH                                ; 00561a57
    FST float ptr [ESP + 0x4]           ; 00561a59
    FLD1                                ; 00561a5d
    FXCH ST2                            ; 00561a5f
    FSTP float ptr [ESP + 0x10]         ; 00561a61
    FXCH                                ; 00561a65
    FCOMPP                              ; 00561a67
    FNSTSW AX                           ; 00561a69
    SAHF                                ; 00561a6b
    JBE 0x00561a76                      ; 00561a6c
        ;   XREF to: 00561a76 (CONDITIONAL_JUMP)  ; LAB_00561a76
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 00561a6e
    FLD float ptr [ESP + 0x4]           ; 00561a76
        ;   Label: LAB_00561a76
    FMUL float ptr [ESP + 0xc]          ; 00561a7a
    FLD float ptr [EBX + 0x2c]          ; 00561a7e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00561a81
    FLD1                                ; 00561a84
    MOV dword ptr [ESP + 0x14],EAX      ; 00561a86
    FXCH ST2                            ; 00561a8a
    FSTP float ptr [ESP + 0x4]          ; 00561a8c
    FXCH                                ; 00561a90
    FCOMPP                              ; 00561a92
    FNSTSW AX                           ; 00561a94
    SAHF                                ; 00561a96
    JBE 0x00561aa1                      ; 00561a97
        ;   XREF to: 00561aa1 (CONDITIONAL_JUMP)  ; LAB_00561aa1
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00561a99
    FLD float ptr [ESP + 0x14]          ; 00561aa1
        ;   Label: LAB_00561aa1
    FMUL float ptr [ESP + 0xc]          ; 00561aa5
    MOV AH,byte ptr [EBP + 0x10]        ; 00561aa9
    FSTP float ptr [ESP + 0x14]         ; 00561aac
    TEST AH,0x2                         ; 00561ab0
    JZ 0x00561b2d                       ; 00561ab3
        ;   XREF to: 00561b2d (CONDITIONAL_JUMP)  ; LAB_00561b2d
    PUSH 0x52                           ; 00561ab9
    MOV EAX,[0x00617dd4]                ; 00561abb | DAT_00617dd4
    PUSH EAX                            ; 00561ac0
    MOV EDX,dword ptr [EAX]             ; 00561ac1
    CALL dword ptr [EDX]                ; 00561ac3
    ADD ESP,0x8                         ; 00561ac5
    TEST EAX,EAX                        ; 00561ac8
    JZ 0x00561ad6                       ; 00561aca
        ;   XREF to: 00561ad6 (CONDITIONAL_JUMP)  ; LAB_00561ad6
    FLD float ptr [EBX + 0x28]          ; 00561acc
    FADD float ptr [ESP + 0x10]         ; 00561acf
    FSTP float ptr [EBX + 0x28]         ; 00561ad3
    PUSH 0x53                           ; 00561ad6
        ;   Label: LAB_00561ad6
    MOV EAX,[0x00617dd4]                ; 00561ad8 | DAT_00617dd4
    PUSH EAX                            ; 00561add
    MOV EDX,dword ptr [EAX]             ; 00561ade
    CALL dword ptr [EDX]                ; 00561ae0
    ADD ESP,0x8                         ; 00561ae2
    TEST EAX,EAX                        ; 00561ae5
    JZ 0x00561af3                       ; 00561ae7
        ;   XREF to: 00561af3 (CONDITIONAL_JUMP)  ; LAB_00561af3
    FLD float ptr [EBX + 0x28]          ; 00561ae9
    FSUB float ptr [ESP + 0x10]         ; 00561aec
    FSTP float ptr [EBX + 0x28]         ; 00561af0
    PUSH 0x35                           ; 00561af3
        ;   Label: LAB_00561af3
    MOV EAX,[0x00617dd4]                ; 00561af5 | DAT_00617dd4
    PUSH EAX                            ; 00561afa
    MOV EDX,dword ptr [EAX]             ; 00561afb
    CALL dword ptr [EDX]                ; 00561afd
    ADD ESP,0x8                         ; 00561aff
    TEST EAX,EAX                        ; 00561b02
    JZ 0x00561b10                       ; 00561b04
        ;   XREF to: 00561b10 (CONDITIONAL_JUMP)  ; LAB_00561b10
    FLD float ptr [EBX + 0x28]          ; 00561b06
    FADD float ptr [ESP + 0x10]         ; 00561b09
    FSTP float ptr [EBX + 0x28]         ; 00561b0d
    PUSH 0x37                           ; 00561b10
        ;   Label: LAB_00561b10
    MOV EAX,[0x00617dd4]                ; 00561b12 | DAT_00617dd4
    PUSH EAX                            ; 00561b17
    MOV EDX,dword ptr [EAX]             ; 00561b18
    CALL dword ptr [EDX]                ; 00561b1a
    ADD ESP,0x8                         ; 00561b1c
    TEST EAX,EAX                        ; 00561b1f
    JZ 0x00561b2d                       ; 00561b21
        ;   XREF to: 00561b2d (CONDITIONAL_JUMP)  ; LAB_00561b2d
    FLD float ptr [EBX + 0x28]          ; 00561b23
    FSUB float ptr [ESP + 0x10]         ; 00561b26
    FSTP float ptr [EBX + 0x28]         ; 00561b2a
    TEST byte ptr [EBP + 0x10],0x1      ; 00561b2d
        ;   Label: LAB_00561b2d
    JZ 0x00561b6d                       ; 00561b31
        ;   XREF to: 00561b6d (CONDITIONAL_JUMP)  ; LAB_00561b6d
    PUSH 0x4a                           ; 00561b33
    MOV EAX,[0x00617dd4]                ; 00561b35 | DAT_00617dd4
    PUSH EAX                            ; 00561b3a
    MOV EDX,dword ptr [EAX]             ; 00561b3b
    CALL dword ptr [EDX]                ; 00561b3d
    ADD ESP,0x8                         ; 00561b3f
    TEST EAX,EAX                        ; 00561b42
    JZ 0x00561b50                       ; 00561b44
        ;   XREF to: 00561b50 (CONDITIONAL_JUMP)  ; LAB_00561b50
    FLD float ptr [EBX + 0x24]          ; 00561b46
    FADD float ptr [ESP + 0x10]         ; 00561b49
    FSTP float ptr [EBX + 0x24]         ; 00561b4d
    PUSH 0x4e                           ; 00561b50
        ;   Label: LAB_00561b50
    MOV EAX,[0x00617dd4]                ; 00561b52 | DAT_00617dd4
    PUSH EAX                            ; 00561b57
    MOV EDX,dword ptr [EAX]             ; 00561b58
    CALL dword ptr [EDX]                ; 00561b5a
    ADD ESP,0x8                         ; 00561b5c
    TEST EAX,EAX                        ; 00561b5f
    JZ 0x00561b6d                       ; 00561b61
        ;   XREF to: 00561b6d (CONDITIONAL_JUMP)  ; LAB_00561b6d
    FLD float ptr [EBX + 0x24]          ; 00561b63
    FSUB float ptr [ESP + 0x10]         ; 00561b66
    FSTP float ptr [EBX + 0x24]         ; 00561b6a
    TEST byte ptr [EBP + 0x10],0x8      ; 00561b6d
        ;   Label: LAB_00561b6d
    JZ 0x00561beb                       ; 00561b71
        ;   XREF to: 00561beb (CONDITIONAL_JUMP)  ; LAB_00561beb
    PUSH 0x4b                           ; 00561b77
    MOV EAX,[0x00617dd4]                ; 00561b79 | DAT_00617dd4
    PUSH EAX                            ; 00561b7e
    MOV EDX,dword ptr [EAX]             ; 00561b7f
    CALL dword ptr [EDX]                ; 00561b81
    ADD ESP,0x8                         ; 00561b83
    TEST EAX,EAX                        ; 00561b86
    JZ 0x00561b94                       ; 00561b88
        ;   XREF to: 00561b94 (CONDITIONAL_JUMP)  ; LAB_00561b94
    FLD float ptr [EBX + 0x30]          ; 00561b8a
    FSUB float ptr [ESP + 0x14]         ; 00561b8d
    FSTP float ptr [EBX + 0x30]         ; 00561b91
    PUSH 0x4d                           ; 00561b94
        ;   Label: LAB_00561b94
    MOV EAX,[0x00617dd4]                ; 00561b96 | DAT_00617dd4
    PUSH EAX                            ; 00561b9b
    MOV EDX,dword ptr [EAX]             ; 00561b9c
    CALL dword ptr [EDX]                ; 00561b9e
    ADD ESP,0x8                         ; 00561ba0
    TEST EAX,EAX                        ; 00561ba3
    JZ 0x00561bb1                       ; 00561ba5
        ;   XREF to: 00561bb1 (CONDITIONAL_JUMP)  ; LAB_00561bb1
    FLD float ptr [EBX + 0x30]          ; 00561ba7
    FADD float ptr [ESP + 0x14]         ; 00561baa
    FSTP float ptr [EBX + 0x30]         ; 00561bae
    PUSH 0x10                           ; 00561bb1
        ;   Label: LAB_00561bb1
    MOV EAX,[0x00617dd4]                ; 00561bb3 | DAT_00617dd4
    PUSH EAX                            ; 00561bb8
    MOV EDX,dword ptr [EAX]             ; 00561bb9
    CALL dword ptr [EDX]                ; 00561bbb
    ADD ESP,0x8                         ; 00561bbd
    TEST EAX,EAX                        ; 00561bc0
    JZ 0x00561bce                       ; 00561bc2
        ;   XREF to: 00561bce (CONDITIONAL_JUMP)  ; LAB_00561bce
    FLD float ptr [EBX + 0x34]          ; 00561bc4
    FADD float ptr [ESP + 0x14]         ; 00561bc7
    FSTP float ptr [EBX + 0x34]         ; 00561bcb
    PUSH 0x1e                           ; 00561bce
        ;   Label: LAB_00561bce
    MOV EAX,[0x00617dd4]                ; 00561bd0 | DAT_00617dd4
    PUSH EAX                            ; 00561bd5
    MOV EDX,dword ptr [EAX]             ; 00561bd6
    CALL dword ptr [EDX]                ; 00561bd8
    ADD ESP,0x8                         ; 00561bda
    TEST EAX,EAX                        ; 00561bdd
    JZ 0x00561beb                       ; 00561bdf
        ;   XREF to: 00561beb (CONDITIONAL_JUMP)  ; LAB_00561beb
    FLD float ptr [EBX + 0x34]          ; 00561be1
    FSUB float ptr [ESP + 0x14]         ; 00561be4
    FSTP float ptr [EBX + 0x34]         ; 00561be8
    TEST byte ptr [EBP + 0x10],0x4      ; 00561beb
        ;   Label: LAB_00561beb
    JZ 0x00561c2b                       ; 00561bef
        ;   XREF to: 00561c2b (CONDITIONAL_JUMP)  ; LAB_00561c2b
    PUSH 0x48                           ; 00561bf1
    MOV EAX,[0x00617dd4]                ; 00561bf3 | DAT_00617dd4
    PUSH EAX                            ; 00561bf8
    MOV EDX,dword ptr [EAX]             ; 00561bf9
    CALL dword ptr [EDX]                ; 00561bfb
    ADD ESP,0x8                         ; 00561bfd
    TEST EAX,EAX                        ; 00561c00
    JZ 0x00561c0e                       ; 00561c02
        ;   XREF to: 00561c0e (CONDITIONAL_JUMP)  ; LAB_00561c0e
    FLD float ptr [EBX + 0x2c]          ; 00561c04
    FSUB float ptr [ESP + 0x4]          ; 00561c07
    FSTP float ptr [EBX + 0x2c]         ; 00561c0b
    PUSH 0x50                           ; 00561c0e
        ;   Label: LAB_00561c0e
    MOV EAX,[0x00617dd4]                ; 00561c10 | DAT_00617dd4
    PUSH EAX                            ; 00561c15
    MOV EDX,dword ptr [EAX]             ; 00561c16
    CALL dword ptr [EDX]                ; 00561c18
    ADD ESP,0x8                         ; 00561c1a
    TEST EAX,EAX                        ; 00561c1d
    JZ 0x00561c2b                       ; 00561c1f
        ;   XREF to: 00561c2b (CONDITIONAL_JUMP)  ; LAB_00561c2b
    FLD float ptr [EBX + 0x2c]          ; 00561c21
    FADD float ptr [ESP + 0x4]          ; 00561c24
    FSTP float ptr [EBX + 0x2c]         ; 00561c28
    TEST byte ptr [EBP + 0x10],0x10     ; 00561c2b
        ;   Label: LAB_00561c2b
    JZ 0x00561c6d                       ; 00561c2f
        ;   XREF to: 00561c6d (CONDITIONAL_JUMP)  ; LAB_00561c6d
    PUSH 0xd                            ; 00561c31
    MOV EAX,[0x00617dd4]                ; 00561c33 | DAT_00617dd4
    PUSH EAX                            ; 00561c38
    MOV EDX,dword ptr [EAX]             ; 00561c39
    CALL dword ptr [EDX + 0x4]          ; 00561c3b
    ADD ESP,0x8                         ; 00561c3e
    TEST EAX,EAX                        ; 00561c41
    JZ 0x00561c4f                       ; 00561c43
        ;   XREF to: 00561c4f (CONDITIONAL_JUMP)  ; LAB_00561c4f
    FLD float ptr [EBX + 0x38]          ; 00561c45
    FDIV float ptr [ESP + 0x8]          ; 00561c48
    FSTP float ptr [EBX + 0x38]         ; 00561c4c
    PUSH 0xc                            ; 00561c4f
        ;   Label: LAB_00561c4f
    MOV EAX,[0x00617dd4]                ; 00561c51 | DAT_00617dd4
    PUSH EAX                            ; 00561c56
    MOV EDX,dword ptr [EAX]             ; 00561c57
    CALL dword ptr [EDX + 0x4]          ; 00561c59
    ADD ESP,0x8                         ; 00561c5c
    TEST EAX,EAX                        ; 00561c5f
    JZ 0x00561c6d                       ; 00561c61
        ;   XREF to: 00561c6d (CONDITIONAL_JUMP)  ; LAB_00561c6d
    FLD float ptr [EBX + 0x38]          ; 00561c63
    FMUL float ptr [ESP + 0x8]          ; 00561c66
    FSTP float ptr [EBX + 0x38]         ; 00561c6a
    PUSH 0x4c                           ; 00561c6d
        ;   Label: LAB_00561c6d
    MOV EAX,[0x00617dd4]                ; 00561c6f | DAT_00617dd4
    PUSH EAX                            ; 00561c74
    MOV EDX,dword ptr [EAX]             ; 00561c75
    CALL dword ptr [EDX + 0x4]          ; 00561c77
    ADD ESP,0x8                         ; 00561c7a
    TEST EAX,EAX                        ; 00561c7d
    JNZ 0x00561cb2                      ; 00561c7f
        ;   XREF to: 00561cb2 (CONDITIONAL_JUMP)  ; LAB_00561cb2
    PUSH EBX                            ; 00561c81
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0 ; 00561c82
        ;   XREF to: 00561cd0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00561c87
    MOV ESP,EBP                         ; 00561c8a
    POP EBP                             ; 00561c8c
    POP EBX                             ; 00561c8d
    RET                                 ; 00561c8e
    PUSH 0x2a                           ; 00561c8f
        ;   Label: LAB_00561c8f
    MOV EAX,[0x00617dd4]                ; 00561c91 | DAT_00617dd4
    PUSH EAX                            ; 00561c96
    MOV EDX,dword ptr [EAX]             ; 00561c97
    CALL dword ptr [EDX]                ; 00561c99
    ADD ESP,0x8                         ; 00561c9b
    TEST EAX,EAX                        ; 00561c9e
    JZ 0x00561a24                       ; 00561ca0
        ;   XREF to: 00561a24 (CONDITIONAL_JUMP)  ; LAB_00561a24
    MOV dword ptr [ESP],0x40800000      ; 00561ca6
    JMP 0x00561a24                      ; 00561cad
        ;   XREF to: 00561a24 (UNCONDITIONAL_JUMP)  ; LAB_00561a24
    MOV EDX,dword ptr [EBP + 0x10]      ; 00561cb2
        ;   Label: LAB_00561cb2
    PUSH EDX                            ; 00561cb5
    PUSH EBX                            ; 00561cb6
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005619a0 ; 00561cb7
        ;   XREF to: 005619a0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005619a0(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 00561cbc
    PUSH EBX                            ; 00561cbf
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0 ; 00561cc0
        ;   XREF to: 00561cd0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00561cc5
    MOV ESP,EBP                         ; 00561cc8
    POP EBP                             ; 00561cca
    POP EBX                             ; 00561ccb
    RET                                 ; 00561ccc

