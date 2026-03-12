; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; SExpandedEdge *  Stack[0x8]:4   buf_a
; SExpandedEdge *  Stack[0xc]:4   buf_b
; Local Variables:
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  uStack_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  uStack_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  uStack_b8
; CVector3d        Stack[-0xb4]:24  local_b4
; double           Stack[-0x9c]:8  local_9c
; double           Stack[-0x94]:8  local_94
; double           Stack[-0x8c]:8  local_8c
; double           Stack[-0x84]:8  local_84
; double           Stack[-0x7c]:8  local_7c
; double           Stack[-0x74]:8  local_74
; CVector3d        Stack[-0x6c]:24  local_6c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  uStack_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  uStack_40
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  uStack_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; uint             Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; CVector3d *      Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0 at 005c8554
;
; Called Functions:
;   shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
;   shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100
;   shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
;   shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8b50
        ;   Label: shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
    PUSH ESI                            ; 005c8b51
    PUSH EDI                            ; 005c8b52
    PUSH EBP                            ; 005c8b53
    MOV EBP,ESP                         ; 005c8b54
    SUB ESP,0xd4                        ; 005c8b56
    SUB EBP,0x76                        ; 005c8b5c
    MOV EBX,dword ptr [EBP + 0x8a]      ; 005c8b5f
    XOR EDX,EDX                         ; 005c8b65
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c8b67
    MOV dword ptr [EBP + 0x6a],EDX      ; 005c8b6a
    MOV dword ptr [EBP + 0x66],EDX      ; 005c8b6d
    MOV dword ptr [EBP + 0x42],EDX      ; 005c8b70
    MOV dword ptr [EBP + 0x46],EDX      ; 005c8b73
    TEST EAX,EAX                        ; 005c8b76
    JBE 0x005c8ce0                      ; 005c8b78
        ;   XREF to: 005c8ce0 (CONDITIONAL_JUMP)  ; LAB_005c8ce0
    LEA EAX,[EBX + 0x14]                ; 005c8b7e
    MOV dword ptr [EBP + 0x62],EDX      ; 005c8b81
    MOV dword ptr [EBP + 0x72],EAX      ; 005c8b84
    MOV ESI,dword ptr [EBP + 0x62]      ; 005c8b87
        ;   Label: LAB_005c8b87
    MOV EAX,dword ptr [EBX + 0x30]      ; 005c8b8a
    MOV ECX,0x6                         ; 005c8b8d
    ADD ESI,EAX                         ; 005c8b92
    LEA EDI,[EBP + 0x1a]                ; 005c8b94
    MOV dword ptr [EBP + 0x6e],ESI      ; 005c8b97
    LEA ESI,[ESI + 0x10]                ; 005c8b9a
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8b9d
    MOVSD.REP ES:EDI,ESI                ; 005c8ba0
    FLD double ptr [EAX + 0x28]         ; 005c8ba2
    FLD double ptr [EAX + 0x30]         ; 005c8ba5
    FLD double ptr [EAX + 0x38]         ; 005c8ba8
    MOV ECX,0x6                         ; 005c8bab
    LEA EDI,[EBP + -0x46]               ; 005c8bb0
    LEA ESI,[EBP + 0x2]                 ; 005c8bb3
    FXCH ST2                            ; 005c8bb6
    FSUB double ptr [EAX + 0x10]        ; 005c8bb8
    FXCH                                ; 005c8bbb
    FSUB double ptr [EAX + 0x18]        ; 005c8bbd
    FXCH ST2                            ; 005c8bc0
    FSUB double ptr [EAX + 0x20]        ; 005c8bc2
    FXCH                                ; 005c8bc5
    FSTP double ptr [EBP + 0x2]         ; 005c8bc7
    FXCH                                ; 005c8bca
    FSTP double ptr [EBP + 0xa]         ; 005c8bcc
    FSTP double ptr [EBP + 0x12]        ; 005c8bcf
    MOVSD.REP ES:EDI,ESI                ; 005c8bd2
    MOV EAX,dword ptr [EBP + -0x46]     ; 005c8bd4
    MOV dword ptr [EBP + -0x5e],EAX     ; 005c8bd7
    MOV EAX,dword ptr [EBP + -0x42]     ; 005c8bda
    MOV dword ptr [EBP + -0x5a],EAX     ; 005c8bdd
    MOV EAX,dword ptr [EBP + -0x3e]     ; 005c8be0
    MOV dword ptr [EBP + -0x56],EAX     ; 005c8be3
    MOV EAX,dword ptr [EBP + -0x3a]     ; 005c8be6
    MOV dword ptr [EBP + -0x52],EAX     ; 005c8be9
    MOV EAX,dword ptr [EBP + -0x36]     ; 005c8bec
    MOV dword ptr [EBP + -0x4e],EAX     ; 005c8bef
    MOV EAX,dword ptr [EBP + -0x32]     ; 005c8bf2
    MOV dword ptr [EBP + -0x4a],EAX     ; 005c8bf5
    MOV EAX,dword ptr [EBP + 0x72]      ; 005c8bf8
    FLD double ptr [EBP + -0x3e]        ; 005c8bfb
    FMUL double ptr [EAX + 0x10]        ; 005c8bfe
    FLD double ptr [EBP + -0x36]        ; 005c8c01
    FMUL double ptr [EAX + 0x8]         ; 005c8c04
    FSUBP                               ; 005c8c07
    FLD double ptr [EBP + -0x36]        ; 005c8c09
    FXCH                                ; 005c8c0c
    FSTP double ptr [EBP + -0x16]       ; 005c8c0e
    FMUL double ptr [EAX]               ; 005c8c11
    FLD double ptr [EBP + -0x46]        ; 005c8c13
    FMUL double ptr [EAX + 0x10]        ; 005c8c16
    FSUBP                               ; 005c8c19
    FLD double ptr [EBP + -0x46]        ; 005c8c1b
    FXCH                                ; 005c8c1e
    FSTP double ptr [EBP + -0xe]        ; 005c8c20
    FMUL double ptr [EAX + 0x8]         ; 005c8c23
    FLD double ptr [EBP + -0xe]         ; 005c8c26
    FMUL ST0                            ; 005c8c29
    FLD double ptr [EBP + -0x3e]        ; 005c8c2b
    FMUL double ptr [EAX]               ; 005c8c2e
    FLD double ptr [EBP + -0x16]        ; 005c8c30
    FMUL ST0                            ; 005c8c33
    FXCH                                ; 005c8c35
    FSUBP ST3,ST0                       ; 005c8c37
    FADDP                               ; 005c8c39
    FXCH                                ; 005c8c3b
    FST double ptr [EBP + -0x6]         ; 005c8c3d
    FMUL double ptr [EBP + -0x6]        ; 005c8c40
    FADDP                               ; 005c8c43
    FSQRT                               ; 005c8c45
    FLD double ptr [EBP + -0x16]        ; 005c8c47
    FLD1                                ; 005c8c4a
    FDIVRP ST2,ST0                      ; 005c8c4c
    FMUL ST1                            ; 005c8c4e
    FLD double ptr [EBP + -0xe]         ; 005c8c50
    XOR EAX,EAX                         ; 005c8c53
    FMUL ST2                            ; 005c8c55
    MOV dword ptr [EBP + 0x5a],EAX      ; 005c8c57
    MOV dword ptr [EBP + 0x5e],EAX      ; 005c8c5a
    LEA EAX,[EBP + 0x5e]                ; 005c8c5d
    FLD double ptr [EBP + -0x6]         ; 005c8c60
    PUSH EAX                            ; 005c8c63
    LEA EAX,[EBP + 0x5a]                ; 005c8c64
    FMULP ST3                           ; 005c8c67
    PUSH EAX                            ; 005c8c69
    FXCH                                ; 005c8c6a
    FSTP double ptr [EBP + -0x16]       ; 005c8c6c
    MOV EAX,dword ptr [EBP + -0x16]     ; 005c8c6f
    MOV ECX,dword ptr [EBP + 0x92]      ; 005c8c72
    MOV dword ptr [EBP + -0x2e],EAX     ; 005c8c78
    MOV EAX,dword ptr [EBP + -0x12]     ; 005c8c7b
    FSTP double ptr [EBP + -0xe]        ; 005c8c7e
    MOV dword ptr [EBP + -0x2a],EAX     ; 005c8c81
    MOV EAX,dword ptr [EBP + -0xe]      ; 005c8c84
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005c8c87
    MOV dword ptr [EBP + -0x26],EAX     ; 005c8c8d
    MOV EAX,dword ptr [EBP + -0xa]      ; 005c8c90
    FSTP double ptr [EBP + -0x6]        ; 005c8c93
    MOV dword ptr [EBP + -0x22],EAX     ; 005c8c96
    MOV EAX,dword ptr [EBP + -0x6]      ; 005c8c99
    PUSH ECX                            ; 005c8c9c
    MOV dword ptr [EBP + -0x1e],EAX     ; 005c8c9d
    MOV EAX,dword ptr [EBP + -0x2]      ; 005c8ca0
    PUSH ESI                            ; 005c8ca3
    MOV dword ptr [EBP + -0x1a],EAX     ; 005c8ca4
    LEA EAX,[EBP + -0x2e]               ; 005c8ca7
    PUSH EAX                            ; 005c8caa
    LEA EAX,[EBP + 0x1a]                ; 005c8cab
    PUSH EAX                            ; 005c8cae
    PUSH EBX                            ; 005c8caf
    CALL shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0 ; 005c8cb0
        ;   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0(CComplexPolygon * this_ptr, CVector3d * plane_normal, CVector3d * plane_point, SExpandedEdge * buf_a, ...)
    MOV EDI,dword ptr [EBP + 0x5a]      ; 005c8cb5
    ADD ESP,0x1c                        ; 005c8cb8
    TEST EDI,EDI                        ; 005c8cbb
    JZ 0x005c8cc5                       ; 005c8cbd
        ;   XREF to: 005c8cc5 (CONDITIONAL_JUMP)  ; LAB_005c8cc5
    CMP dword ptr [EBP + 0x5e],0x0      ; 005c8cbf
    JNZ 0x005c8ceb                      ; 005c8cc3
        ;   XREF to: 005c8ceb (CONDITIONAL_JUMP)  ; LAB_005c8ceb
    MOV EDX,dword ptr [EBP + 0x62]      ; 005c8cc5
        ;   Label: LAB_005c8cc5
    MOV ECX,dword ptr [EBP + 0x66]      ; 005c8cc8
    MOV ESI,dword ptr [EBX + 0x2c]      ; 005c8ccb
    ADD EDX,0x60                        ; 005c8cce
    INC ECX                             ; 005c8cd1
    MOV dword ptr [EBP + 0x62],EDX      ; 005c8cd2
    MOV dword ptr [EBP + 0x66],ECX      ; 005c8cd5
    CMP ECX,ESI                         ; 005c8cd8
    JC 0x005c8b87                       ; 005c8cda
        ;   XREF to: 005c8b87 (CONDITIONAL_JUMP)  ; LAB_005c8b87
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005c8ce0
        ;   Label: LAB_005c8ce0
    LEA ESP,[EBP + 0x76]                ; 005c8ce3
    POP EBP                             ; 005c8ce6
    POP EDI                             ; 005c8ce7
    POP ESI                             ; 005c8ce8
    POP EBX                             ; 005c8ce9
    RET                                 ; 005c8cea
    MOV ESI,0x1                         ; 005c8ceb
        ;   Label: LAB_005c8ceb
    PUSH ESI                            ; 005c8cf0
    LEA EAX,[EBP + 0x5a]                ; 005c8cf1
    PUSH EAX                            ; 005c8cf4
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005c8cf5
    PUSH EDX                            ; 005c8cfb
    PUSH EBX                            ; 005c8cfc
    MOV EDI,ESI                         ; 005c8cfd
    CALL shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590 ; 005c8cff
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon * this_ptr, SExpandedEdge * edges, int * edge_count_ptr, int is_secondary)
    ADD ESP,0x10                        ; 005c8d04
    TEST EAX,EAX                        ; 005c8d07
    JZ 0x005c8dd9                       ; 005c8d09
        ;   XREF to: 005c8dd9 (CONDITIONAL_JUMP)  ; LAB_005c8dd9
    PUSH 0x1                            ; 005c8d0f
        ;   Label: LAB_005c8d0f
    LEA EAX,[EBP + 0x5e]                ; 005c8d11
    PUSH EAX                            ; 005c8d14
    MOV ECX,dword ptr [EBP + 0x92]      ; 005c8d15
    PUSH ECX                            ; 005c8d1b
    PUSH EBX                            ; 005c8d1c
    CALL shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590 ; 005c8d1d
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon * this_ptr, SExpandedEdge * edges, int * edge_count_ptr, int is_secondary)
    ADD ESP,0x10                        ; 005c8d22
    TEST EAX,EAX                        ; 005c8d25
    JZ 0x005c8de0                       ; 005c8d27
        ;   XREF to: 005c8de0 (CONDITIONAL_JUMP)  ; LAB_005c8de0
    TEST ESI,ESI                        ; 005c8d2d
        ;   Label: LAB_005c8d2d
    JZ 0x005c8de7                       ; 005c8d2f
        ;   XREF to: 005c8de7 (CONDITIONAL_JUMP)  ; LAB_005c8de7
    TEST ESI,ESI                        ; 005c8d35
        ;   Label: LAB_005c8d35
    JZ 0x005c8df9                       ; 005c8d37
        ;   XREF to: 005c8df9 (CONDITIONAL_JUMP)  ; LAB_005c8df9
    MOV ESI,dword ptr [EBP + 0x5a]      ; 005c8d3d
    PUSH ESI                            ; 005c8d40
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005c8d41
    PUSH EAX                            ; 005c8d47
    PUSH EBX                            ; 005c8d48
    CALL shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0 ; 005c8d49
        ;   XREF to: 005cb3a0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    ADD ESP,0xc                         ; 005c8d4e
    MOV ESI,EAX                         ; 005c8d51
        ;   Label: LAB_005c8d51
    TEST EDI,EDI                        ; 005c8d53
    JZ 0x005c8e00                       ; 005c8d55
        ;   XREF to: 005c8e00 (CONDITIONAL_JUMP)  ; LAB_005c8e00
    MOV EDX,dword ptr [EBP + 0x5e]      ; 005c8d5b
    PUSH EDX                            ; 005c8d5e
    MOV ECX,dword ptr [EBP + 0x92]      ; 005c8d5f
    PUSH ECX                            ; 005c8d65
    PUSH EBX                            ; 005c8d66
    CALL shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0 ; 005c8d67
        ;   XREF to: 005cb3a0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    ADD ESP,0xc                         ; 005c8d6c
    MOV EDI,EAX                         ; 005c8d6f
        ;   Label: LAB_005c8d6f
    TEST ESI,ESI                        ; 005c8d71
    JZ 0x005c8e07                       ; 005c8d73
        ;   XREF to: 005c8e07 (CONDITIONAL_JUMP)  ; LAB_005c8e07
    TEST ESI,ESI                        ; 005c8d79
        ;   Label: LAB_005c8d79
    JZ 0x005c8d85                       ; 005c8d7b
        ;   XREF to: 005c8d85 (CONDITIONAL_JUMP)  ; LAB_005c8d85
    TEST EDI,EDI                        ; 005c8d7d
    JNZ 0x005c8e14                      ; 005c8d7f
        ;   XREF to: 005c8e14 (CONDITIONAL_JUMP)  ; LAB_005c8e14
    TEST ESI,ESI                        ; 005c8d85
        ;   Label: LAB_005c8d85
    JZ 0x005c8e1f                       ; 005c8d87
        ;   XREF to: 005c8e1f (CONDITIONAL_JUMP)  ; LAB_005c8e1f
    MOV EAX,dword ptr [EBP + 0x5a]      ; 005c8d8d
    PUSH EAX                            ; 005c8d90
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005c8d91
    PUSH EDX                            ; 005c8d97
    PUSH EBX                            ; 005c8d98
    CALL shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100 ; 005c8d99
        ;   XREF to: 005c9100 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    MOV dword ptr [EBP + 0x4a],EAX      ; 005c8d9e
    MOV dword ptr [EBP + 0x4e],EDX      ; 005c8da1
    ADD ESP,0xc                         ; 005c8da4
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005c8da7
    MOV dword ptr [EBP + 0x52],EAX      ; 005c8daa
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005c8dad
    MOV dword ptr [EBP + 0x56],EAX      ; 005c8db0
    FLD double ptr [EBP + 0x52]         ; 005c8db3
    FCOMP double ptr [EBP + 0x42]       ; 005c8db6
    FNSTSW AX                           ; 005c8db9
    SAHF                                ; 005c8dbb
    JBE 0x005c8cc5                      ; 005c8dbc
        ;   XREF to: 005c8cc5 (CONDITIONAL_JUMP)  ; LAB_005c8cc5
    MOV EAX,dword ptr [EBP + 0x52]      ; 005c8dc2
    MOV dword ptr [EBP + 0x42],EAX      ; 005c8dc5
    MOV EAX,dword ptr [EBP + 0x56]      ; 005c8dc8
    MOV dword ptr [EBP + 0x46],EAX      ; 005c8dcb
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8dce
    MOV dword ptr [EBP + 0x6a],EAX      ; 005c8dd1
    JMP 0x005c8cc5                      ; 005c8dd4
        ;   XREF to: 005c8cc5 (UNCONDITIONAL_JUMP)  ; LAB_005c8cc5
    XOR ESI,ESI                         ; 005c8dd9
        ;   Label: LAB_005c8dd9
    JMP 0x005c8d0f                      ; 005c8ddb
        ;   XREF to: 005c8d0f (UNCONDITIONAL_JUMP)  ; LAB_005c8d0f
    XOR EDI,EDI                         ; 005c8de0
        ;   Label: LAB_005c8de0
    JMP 0x005c8d2d                      ; 005c8de2
        ;   XREF to: 005c8d2d (UNCONDITIONAL_JUMP)  ; LAB_005c8d2d
    TEST EDI,EDI                        ; 005c8de7
        ;   Label: LAB_005c8de7
    JNZ 0x005c8d35                      ; 005c8de9
        ;   XREF to: 005c8d35 (CONDITIONAL_JUMP)  ; LAB_005c8d35
    XOR EAX,EAX                         ; 005c8def
    LEA ESP,[EBP + 0x76]                ; 005c8df1
    POP EBP                             ; 005c8df4
    POP EDI                             ; 005c8df5
    POP ESI                             ; 005c8df6
    POP EBX                             ; 005c8df7
    RET                                 ; 005c8df8
    XOR EAX,EAX                         ; 005c8df9
        ;   Label: LAB_005c8df9
    JMP 0x005c8d51                      ; 005c8dfb
        ;   XREF to: 005c8d51 (UNCONDITIONAL_JUMP)  ; LAB_005c8d51
    XOR EAX,EAX                         ; 005c8e00
        ;   Label: LAB_005c8e00
    JMP 0x005c8d6f                      ; 005c8e02
        ;   XREF to: 005c8d6f (UNCONDITIONAL_JUMP)  ; LAB_005c8d6f
    TEST EAX,EAX                        ; 005c8e07
        ;   Label: LAB_005c8e07
    JNZ 0x005c8d79                      ; 005c8e09
        ;   XREF to: 005c8d79 (CONDITIONAL_JUMP)  ; LAB_005c8d79
    JMP 0x005c8cc5                      ; 005c8e0f
        ;   XREF to: 005c8cc5 (UNCONDITIONAL_JUMP)  ; LAB_005c8cc5
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8e14
        ;   Label: LAB_005c8e14
    LEA ESP,[EBP + 0x76]                ; 005c8e17
    POP EBP                             ; 005c8e1a
    POP EDI                             ; 005c8e1b
    POP ESI                             ; 005c8e1c
    POP EBX                             ; 005c8e1d
    RET                                 ; 005c8e1e
    MOV ESI,dword ptr [EBP + 0x5e]      ; 005c8e1f
        ;   Label: LAB_005c8e1f
    PUSH ESI                            ; 005c8e22
    MOV EDI,dword ptr [EBP + 0x92]      ; 005c8e23
    PUSH EDI                            ; 005c8e29
    PUSH EBX                            ; 005c8e2a
    CALL shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100 ; 005c8e2b
        ;   XREF to: 005c9100 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    MOV dword ptr [EBP + 0x4a],EAX      ; 005c8e30
    MOV dword ptr [EBP + 0x4e],EDX      ; 005c8e33
    ADD ESP,0xc                         ; 005c8e36
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005c8e39
    MOV dword ptr [EBP + 0x32],EAX      ; 005c8e3c
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005c8e3f
    MOV dword ptr [EBP + 0x36],EAX      ; 005c8e42
    FLD double ptr [EBP + 0x32]         ; 005c8e45
    FCOMP double ptr [EBP + 0x42]       ; 005c8e48
    FNSTSW AX                           ; 005c8e4b
    SAHF                                ; 005c8e4d
    JBE 0x005c8cc5                      ; 005c8e4e
        ;   XREF to: 005c8cc5 (CONDITIONAL_JUMP)  ; LAB_005c8cc5
    MOV EAX,dword ptr [EBP + 0x32]      ; 005c8e54
    MOV dword ptr [EBP + 0x42],EAX      ; 005c8e57
    MOV EAX,dword ptr [EBP + 0x36]      ; 005c8e5a
    MOV dword ptr [EBP + 0x46],EAX      ; 005c8e5d
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8e60
    MOV dword ptr [EBP + 0x6a],EAX      ; 005c8e63
    JMP 0x005c8cc5                      ; 005c8e66
        ;   XREF to: 005c8cc5 (UNCONDITIONAL_JUMP)  ; LAB_005c8cc5

