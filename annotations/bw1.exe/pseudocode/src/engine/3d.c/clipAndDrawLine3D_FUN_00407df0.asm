; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00407df0(uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)
;
;
; XREF[1]:
;   engine_3d.c_drawLine3DFromIndices_FUN_00407d90 at 00407dd5
;
; Referenced Globals:
;   undefined4 DAT_007135bc
;   undefined4 DAT_007135c4
;   undefined4 DAT_007135c8
;   undefined4 DAT_007135ec
;   undefined4 DAT_007135f4
;   undefined4 DAT_007135f8
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401310
;   engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0
;   engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0
;   engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0
;   engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0
;   engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407df0
        ;   Label: engine_3d.c_clipAndDrawLine3D_FUN_00407df0
    PUSH ESI                            ; 00407df1
    PUSH EDI                            ; 00407df2
    PUSH EBP                            ; 00407df3
    SUB ESP,0x30                        ; 00407df4
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407df7
    AND EAX,dword ptr [ESP + 0x84]      ; 00407dfb
    TEST EAX,0x80000000                 ; 00407e02
    JNZ 0x00408001                      ; 00407e07
        ;   XREF to: 00408001 (CONDITIONAL_JUMP)  ; LAB_00408001
    XOR EBX,EBX                         ; 00407e0d
        ;   Label: LAB_00407e0d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407e0f
        ;   Label: LAB_00407e0f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407e13
    JLE 0x00407e40                      ; 00407e17
        ;   XREF to: 00407e40 (CONDITIONAL_JUMP)  ; LAB_00407e40
    MOV EAX,ESP                         ; 00407e19
    PUSH EAX                            ; 00407e1b
    LEA EAX,[ESP + 0x78]                ; 00407e1c
    PUSH EAX                            ; 00407e20
    LEA EAX,[ESP + 0x4c]                ; 00407e21
    PUSH EAX                            ; 00407e25
    LEA EDI,[ESP + 0x80]                ; 00407e26
    LEA ESI,[ESP + 0xc]                 ; 00407e2d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 00407e31
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0()
    MOV ECX,0xc                         ; 00407e36
    ADD ESP,0xc                         ; 00407e3b
    MOVSD.REP ES:EDI,ESI                ; 00407e3e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407e40
        ;   Label: LAB_00407e40
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407e44
    NEG EAX                             ; 00407e48
    CMP EAX,ESI                         ; 00407e4a
    JLE 0x00407e75                      ; 00407e4c
        ;   XREF to: 00407e75 (CONDITIONAL_JUMP)  ; LAB_00407e75
    MOV EAX,ESP                         ; 00407e4e
    PUSH EAX                            ; 00407e50
    LEA EAX,[ESP + 0x78]                ; 00407e51
    PUSH EAX                            ; 00407e55
    LEA EAX,[ESP + 0x4c]                ; 00407e56
    PUSH EAX                            ; 00407e5a
    LEA EDI,[ESP + 0x80]                ; 00407e5b
    LEA ESI,[ESP + 0xc]                 ; 00407e62
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 00407e66
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0()
    MOV ECX,0xc                         ; 00407e6b
    ADD ESP,0xc                         ; 00407e70
    MOVSD.REP ES:EDI,ESI                ; 00407e73
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407e75
        ;   Label: LAB_00407e75
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407e79
    JLE 0x00407ea6                      ; 00407e7d
        ;   XREF to: 00407ea6 (CONDITIONAL_JUMP)  ; LAB_00407ea6
    MOV EAX,ESP                         ; 00407e7f
    PUSH EAX                            ; 00407e81
    LEA EAX,[ESP + 0x78]                ; 00407e82
    PUSH EAX                            ; 00407e86
    LEA EAX,[ESP + 0x4c]                ; 00407e87
    PUSH EAX                            ; 00407e8b
    LEA EDI,[ESP + 0x80]                ; 00407e8c
    LEA ESI,[ESP + 0xc]                 ; 00407e93
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0 ; 00407e97
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0()
    MOV ECX,0xc                         ; 00407e9c
    ADD ESP,0xc                         ; 00407ea1
    MOVSD.REP ES:EDI,ESI                ; 00407ea4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407ea6
        ;   Label: LAB_00407ea6
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407eaa
    NEG EAX                             ; 00407eae
    CMP EAX,EBP                         ; 00407eb0
    JLE 0x00407edb                      ; 00407eb2
        ;   XREF to: 00407edb (CONDITIONAL_JUMP)  ; LAB_00407edb
    MOV EAX,ESP                         ; 00407eb4
    PUSH EAX                            ; 00407eb6
    LEA EAX,[ESP + 0x78]                ; 00407eb7
    PUSH EAX                            ; 00407ebb
    LEA EAX,[ESP + 0x4c]                ; 00407ebc
    PUSH EAX                            ; 00407ec0
    LEA EDI,[ESP + 0x80]                ; 00407ec1
    LEA ESI,[ESP + 0xc]                 ; 00407ec8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 00407ecc
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0()
    MOV ECX,0xc                         ; 00407ed1
    ADD ESP,0xc                         ; 00407ed6
    MOVSD.REP ES:EDI,ESI                ; 00407ed9
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407edb
        ;   Label: LAB_00407edb
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407edf
    JLE 0x00407f09                      ; 00407ee3
        ;   XREF to: 00407f09 (CONDITIONAL_JUMP)  ; LAB_00407f09
    MOV EAX,ESP                         ; 00407ee5
    PUSH EAX                            ; 00407ee7
    LEA EAX,[ESP + 0x48]                ; 00407ee8
    PUSH EAX                            ; 00407eec
    LEA EAX,[ESP + 0x7c]                ; 00407eed
    PUSH EAX                            ; 00407ef1
    LEA EDI,[ESP + 0x50]                ; 00407ef2
    LEA ESI,[ESP + 0xc]                 ; 00407ef6
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 00407efa
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0()
    MOV ECX,0xc                         ; 00407eff
    ADD ESP,0xc                         ; 00407f04
    MOVSD.REP ES:EDI,ESI                ; 00407f07
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407f09
        ;   Label: LAB_00407f09
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407f0d
    NEG EAX                             ; 00407f11
    CMP EAX,ECX                         ; 00407f13
    JLE 0x00407f3b                      ; 00407f15
        ;   XREF to: 00407f3b (CONDITIONAL_JUMP)  ; LAB_00407f3b
    MOV EAX,ESP                         ; 00407f17
    PUSH EAX                            ; 00407f19
    LEA EAX,[ESP + 0x48]                ; 00407f1a
    PUSH EAX                            ; 00407f1e
    LEA EAX,[ESP + 0x7c]                ; 00407f1f
    PUSH EAX                            ; 00407f23
    LEA EDI,[ESP + 0x50]                ; 00407f24
    LEA ESI,[ESP + 0xc]                 ; 00407f28
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 00407f2c
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0()
    MOV ECX,0xc                         ; 00407f31
    ADD ESP,0xc                         ; 00407f36
    MOVSD.REP ES:EDI,ESI                ; 00407f39
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407f3b
        ;   Label: LAB_00407f3b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407f3f
    JLE 0x00407f69                      ; 00407f43
        ;   XREF to: 00407f69 (CONDITIONAL_JUMP)  ; LAB_00407f69
    MOV EAX,ESP                         ; 00407f45
    PUSH EAX                            ; 00407f47
    LEA EAX,[ESP + 0x48]                ; 00407f48
    PUSH EAX                            ; 00407f4c
    LEA EAX,[ESP + 0x7c]                ; 00407f4d
    PUSH EAX                            ; 00407f51
    LEA EDI,[ESP + 0x50]                ; 00407f52
    LEA ESI,[ESP + 0xc]                 ; 00407f56
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0 ; 00407f5a
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0()
    MOV ECX,0xc                         ; 00407f5f
    ADD ESP,0xc                         ; 00407f64
    MOVSD.REP ES:EDI,ESI                ; 00407f67
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407f69
        ;   Label: LAB_00407f69
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407f6d
    NEG EAX                             ; 00407f71
    CMP EAX,EDI                         ; 00407f73
    JLE 0x00407f9b                      ; 00407f75
        ;   XREF to: 00407f9b (CONDITIONAL_JUMP)  ; LAB_00407f9b
    MOV EAX,ESP                         ; 00407f77
    PUSH EAX                            ; 00407f79
    LEA EAX,[ESP + 0x48]                ; 00407f7a
    PUSH EAX                            ; 00407f7e
    LEA EAX,[ESP + 0x7c]                ; 00407f7f
    PUSH EAX                            ; 00407f83
    LEA EDI,[ESP + 0x50]                ; 00407f84
    LEA ESI,[ESP + 0xc]                 ; 00407f88
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 00407f8c
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0()
    MOV ECX,0xc                         ; 00407f91
    ADD ESP,0xc                         ; 00407f96
    MOVSD.REP ES:EDI,ESI                ; 00407f99
    INC EBX                             ; 00407f9b
        ;   Label: LAB_00407f9b
    CMP EBX,0x2                         ; 00407f9c
    JL 0x00407e0f                       ; 00407f9f
        ;   XREF to: 00407e0f (CONDITIONAL_JUMP)  ; LAB_00407e0f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407fa5
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407fa9
    CMP EAX,EBP                         ; 00407fad
    JG 0x00407fef                       ; 00407faf
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    MOV EBX,EBP                         ; 00407fb1
    NEG EBX                             ; 00407fb3
    CMP EBX,EAX                         ; 00407fb5
    JG 0x00407fef                       ; 00407fb7
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407fb9
    CMP EAX,EBP                         ; 00407fbd
    JG 0x00407fef                       ; 00407fbf
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    CMP EBX,EAX                         ; 00407fc1
    JG 0x00407fef                       ; 00407fc3
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407fc5
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00407fc9
    CMP EAX,EBX                         ; 00407fcd
    JG 0x00407fef                       ; 00407fcf
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    NEG EBX                             ; 00407fd1
    CMP EBX,EAX                         ; 00407fd3
    JG 0x00407fef                       ; 00407fd5
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407fd7
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00407fdb
    CMP EAX,EDI                         ; 00407fdf
    JG 0x00407fef                       ; 00407fe1
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    CMP EBX,EAX                         ; 00407fe3
    JG 0x00407fef                       ; 00407fe5
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    TEST EBP,EBP                        ; 00407fe7
    JLE 0x00407fef                      ; 00407fe9
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    TEST EDI,EDI                        ; 00407feb
    JG 0x0040800a                       ; 00407fed
        ;   XREF to: 0040800a (CONDITIONAL_JUMP)  ; LAB_0040800a
    ADD ESP,0x30                        ; 00407fef
        ;   Label: LAB_00407fef
    POP EBP                             ; 00407ff2
    POP EDI                             ; 00407ff3
    POP ESI                             ; 00407ff4
    POP EBX                             ; 00407ff5
    LEA EAX,[EAX]                       ; 00407ff6
    LEA EDX,[EDX]                       ; 00407ffc
    RET                                 ; 00408000
    TEST AL,0xff                        ; 00408001
        ;   Label: LAB_00408001
    JNZ 0x00407fef                      ; 00408003
        ;   XREF to: 00407fef (CONDITIONAL_JUMP)  ; LAB_00407fef
    JMP 0x00407e0d                      ; 00408005
        ;   XREF to: 00407e0d (UNCONDITIONAL_JUMP)  ; LAB_00407e0d
    MOV ECX,0xc                         ; 0040800a
        ;   Label: LAB_0040800a
    LEA ESI,[ESP + 0x44]                ; 0040800f
    MOV EDI,0x7135b4                    ; 00408013
    MOVSD.REP ES:EDI,ESI                ; 00408018
    MOV ECX,0xc                         ; 0040801a
    LEA ESI,[ESP + 0x74]                ; 0040801f
    MOV EDI,0x7135e4                    ; 00408023
    PUSH 0x4e1e                         ; 00408028
    MOVSD.REP ES:EDI,ESI                ; 0040802d
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0 ; 0040802f
        ;   XREF to: 00507bf0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)
    ADD ESP,0x4                         ; 00408034
    PUSH 0x4e1f                         ; 00408037
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0 ; 0040803c
        ;   XREF to: 00507bf0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)
    ADD ESP,0x4                         ; 00408041
    MOV EAX,0x629014                    ; 00408044
    PUSH 0x2                            ; 00408049
    ADD EAX,0xea5a0                     ; 0040804b
    PUSH EAX                            ; 00408050
    CALL engine_prim.c_prepareDepthBuffer_FUN_0053dbc0 ; 00408051
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_0053dbc0()
    ADD ESP,0x8                         ; 00408056
    MOV ECX,dword ptr [0x007135ec]      ; 00408059 | DAT_007135ec
    MOV EAX,[0x007135f8]                ; 0040805f | DAT_007135f8
    PUSH ECX                            ; 00408064
    SAR EAX,0x10                        ; 00408065
    PUSH EAX                            ; 00408068
    MOV EAX,[0x007135f4]                ; 00408069 | DAT_007135f4
    SAR EAX,0x10                        ; 0040806e
    PUSH EAX                            ; 00408071
    MOV EBX,dword ptr [0x007135bc]      ; 00408072 | DAT_007135bc
    MOV EAX,[0x007135c8]                ; 00408078 | DAT_007135c8
    PUSH EBX                            ; 0040807d
    SAR EAX,0x10                        ; 0040807e
    PUSH EAX                            ; 00408081
    MOV EAX,[0x007135c4]                ; 00408082 | DAT_007135c4
    SAR EAX,0x10                        ; 00408087
    PUSH EAX                            ; 0040808a
    CALL engine_2d.c_drawLine3D_FUN_00401310 ; 0040808b
        ;   XREF to: 00401310 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine3D_FUN_00401310(int x1, int y1, uint z1, int x2, ...)
    ADD ESP,0x18                        ; 00408090
    ADD ESP,0x30                        ; 00408093
    POP EBP                             ; 00408096
    POP EDI                             ; 00408097
    POP ESI                             ; 00408098
    POP EBX                             ; 00408099
    RET                                 ; 0040809a

