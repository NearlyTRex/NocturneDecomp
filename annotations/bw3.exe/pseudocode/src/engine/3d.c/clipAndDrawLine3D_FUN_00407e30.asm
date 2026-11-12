; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_3d_c_clipAndDrawLine3D_FUN_00407e30(uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)
;
;
; XREF[1]:
;   engine_3d.c_FUN_00407db0 at 00407e15
;
; Referenced Globals:
;   undefined4 DAT_0072ff3c
;   undefined4 DAT_0072ff44
;   undefined4 DAT_0072ff48
;   undefined4 DAT_0072ff6c
;   undefined4 DAT_0072ff74
;   undefined4 DAT_0072ff78
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401310
;   engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0
;   engine_clipper.c_interpolateVertexRightClip_FUN_004390c0
;   engine_clipper.c_interpolateVertexTopClip_FUN_004392c0
;   engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630
;   engine_prim.c_prepareDepthBuffer_FUN_00515920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407e30
        ;   Label: engine_3d.c_clipAndDrawLine3D_FUN_00407e30
    PUSH ESI                            ; 00407e31
    PUSH EDI                            ; 00407e32
    PUSH EBP                            ; 00407e33
    SUB ESP,0x30                        ; 00407e34
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407e37
    AND EAX,dword ptr [ESP + 0x84]      ; 00407e3b
    TEST EAX,0x80000000                 ; 00407e42
    JNZ 0x00408041                      ; 00407e47
        ;   XREF to: 00408041 (CONDITIONAL_JUMP)  ; LAB_00408041
    XOR EBX,EBX                         ; 00407e4d
        ;   Label: LAB_00407e4d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407e4f
        ;   Label: LAB_00407e4f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407e53
    JLE 0x00407e80                      ; 00407e57
        ;   XREF to: 00407e80 (CONDITIONAL_JUMP)  ; LAB_00407e80
    MOV EAX,ESP                         ; 00407e59
    PUSH EAX                            ; 00407e5b
    LEA EAX,[ESP + 0x78]                ; 00407e5c
    PUSH EAX                            ; 00407e60
    LEA EAX,[ESP + 0x4c]                ; 00407e61
    PUSH EAX                            ; 00407e65
    LEA EDI,[ESP + 0x80]                ; 00407e66
    LEA ESI,[ESP + 0xc]                 ; 00407e6d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 00407e71
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_004390c0()
    MOV ECX,0xc                         ; 00407e76
    ADD ESP,0xc                         ; 00407e7b
    MOVSD.REP ES:EDI,ESI                ; 00407e7e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407e80
        ;   Label: LAB_00407e80
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407e84
    NEG EAX                             ; 00407e88
    CMP EAX,ESI                         ; 00407e8a
    JLE 0x00407eb5                      ; 00407e8c
        ;   XREF to: 00407eb5 (CONDITIONAL_JUMP)  ; LAB_00407eb5
    MOV EAX,ESP                         ; 00407e8e
    PUSH EAX                            ; 00407e90
    LEA EAX,[ESP + 0x78]                ; 00407e91
    PUSH EAX                            ; 00407e95
    LEA EAX,[ESP + 0x4c]                ; 00407e96
    PUSH EAX                            ; 00407e9a
    LEA EDI,[ESP + 0x80]                ; 00407e9b
    LEA ESI,[ESP + 0xc]                 ; 00407ea2
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 00407ea6
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0()
    MOV ECX,0xc                         ; 00407eab
    ADD ESP,0xc                         ; 00407eb0
    MOVSD.REP ES:EDI,ESI                ; 00407eb3
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407eb5
        ;   Label: LAB_00407eb5
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407eb9
    JLE 0x00407ee6                      ; 00407ebd
        ;   XREF to: 00407ee6 (CONDITIONAL_JUMP)  ; LAB_00407ee6
    MOV EAX,ESP                         ; 00407ebf
    PUSH EAX                            ; 00407ec1
    LEA EAX,[ESP + 0x78]                ; 00407ec2
    PUSH EAX                            ; 00407ec6
    LEA EAX,[ESP + 0x4c]                ; 00407ec7
    PUSH EAX                            ; 00407ecb
    LEA EDI,[ESP + 0x80]                ; 00407ecc
    LEA ESI,[ESP + 0xc]                 ; 00407ed3
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_004392c0 ; 00407ed7
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_004392c0()
    MOV ECX,0xc                         ; 00407edc
    ADD ESP,0xc                         ; 00407ee1
    MOVSD.REP ES:EDI,ESI                ; 00407ee4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407ee6
        ;   Label: LAB_00407ee6
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407eea
    NEG EAX                             ; 00407eee
    CMP EAX,EBP                         ; 00407ef0
    JLE 0x00407f1b                      ; 00407ef2
        ;   XREF to: 00407f1b (CONDITIONAL_JUMP)  ; LAB_00407f1b
    MOV EAX,ESP                         ; 00407ef4
    PUSH EAX                            ; 00407ef6
    LEA EAX,[ESP + 0x78]                ; 00407ef7
    PUSH EAX                            ; 00407efb
    LEA EAX,[ESP + 0x4c]                ; 00407efc
    PUSH EAX                            ; 00407f00
    LEA EDI,[ESP + 0x80]                ; 00407f01
    LEA ESI,[ESP + 0xc]                 ; 00407f08
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 00407f0c
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0()
    MOV ECX,0xc                         ; 00407f11
    ADD ESP,0xc                         ; 00407f16
    MOVSD.REP ES:EDI,ESI                ; 00407f19
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407f1b
        ;   Label: LAB_00407f1b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407f1f
    JLE 0x00407f49                      ; 00407f23
        ;   XREF to: 00407f49 (CONDITIONAL_JUMP)  ; LAB_00407f49
    MOV EAX,ESP                         ; 00407f25
    PUSH EAX                            ; 00407f27
    LEA EAX,[ESP + 0x48]                ; 00407f28
    PUSH EAX                            ; 00407f2c
    LEA EAX,[ESP + 0x7c]                ; 00407f2d
    PUSH EAX                            ; 00407f31
    LEA EDI,[ESP + 0x50]                ; 00407f32
    LEA ESI,[ESP + 0xc]                 ; 00407f36
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 00407f3a
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_004390c0()
    MOV ECX,0xc                         ; 00407f3f
    ADD ESP,0xc                         ; 00407f44
    MOVSD.REP ES:EDI,ESI                ; 00407f47
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407f49
        ;   Label: LAB_00407f49
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407f4d
    NEG EAX                             ; 00407f51
    CMP EAX,ECX                         ; 00407f53
    JLE 0x00407f7b                      ; 00407f55
        ;   XREF to: 00407f7b (CONDITIONAL_JUMP)  ; LAB_00407f7b
    MOV EAX,ESP                         ; 00407f57
    PUSH EAX                            ; 00407f59
    LEA EAX,[ESP + 0x48]                ; 00407f5a
    PUSH EAX                            ; 00407f5e
    LEA EAX,[ESP + 0x7c]                ; 00407f5f
    PUSH EAX                            ; 00407f63
    LEA EDI,[ESP + 0x50]                ; 00407f64
    LEA ESI,[ESP + 0xc]                 ; 00407f68
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 00407f6c
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0()
    MOV ECX,0xc                         ; 00407f71
    ADD ESP,0xc                         ; 00407f76
    MOVSD.REP ES:EDI,ESI                ; 00407f79
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407f7b
        ;   Label: LAB_00407f7b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407f7f
    JLE 0x00407fa9                      ; 00407f83
        ;   XREF to: 00407fa9 (CONDITIONAL_JUMP)  ; LAB_00407fa9
    MOV EAX,ESP                         ; 00407f85
    PUSH EAX                            ; 00407f87
    LEA EAX,[ESP + 0x48]                ; 00407f88
    PUSH EAX                            ; 00407f8c
    LEA EAX,[ESP + 0x7c]                ; 00407f8d
    PUSH EAX                            ; 00407f91
    LEA EDI,[ESP + 0x50]                ; 00407f92
    LEA ESI,[ESP + 0xc]                 ; 00407f96
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_004392c0 ; 00407f9a
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_004392c0()
    MOV ECX,0xc                         ; 00407f9f
    ADD ESP,0xc                         ; 00407fa4
    MOVSD.REP ES:EDI,ESI                ; 00407fa7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407fa9
        ;   Label: LAB_00407fa9
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407fad
    NEG EAX                             ; 00407fb1
    CMP EAX,EDI                         ; 00407fb3
    JLE 0x00407fdb                      ; 00407fb5
        ;   XREF to: 00407fdb (CONDITIONAL_JUMP)  ; LAB_00407fdb
    MOV EAX,ESP                         ; 00407fb7
    PUSH EAX                            ; 00407fb9
    LEA EAX,[ESP + 0x48]                ; 00407fba
    PUSH EAX                            ; 00407fbe
    LEA EAX,[ESP + 0x7c]                ; 00407fbf
    PUSH EAX                            ; 00407fc3
    LEA EDI,[ESP + 0x50]                ; 00407fc4
    LEA ESI,[ESP + 0xc]                 ; 00407fc8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 00407fcc
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0()
    MOV ECX,0xc                         ; 00407fd1
    ADD ESP,0xc                         ; 00407fd6
    MOVSD.REP ES:EDI,ESI                ; 00407fd9
    INC EBX                             ; 00407fdb
        ;   Label: LAB_00407fdb
    CMP EBX,0x2                         ; 00407fdc
    JL 0x00407e4f                       ; 00407fdf
        ;   XREF to: 00407e4f (CONDITIONAL_JUMP)  ; LAB_00407e4f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407fe5
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407fe9
    CMP EAX,EBP                         ; 00407fed
    JG 0x0040802f                       ; 00407fef
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    MOV EBX,EBP                         ; 00407ff1
    NEG EBX                             ; 00407ff3
    CMP EBX,EAX                         ; 00407ff5
    JG 0x0040802f                       ; 00407ff7
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407ff9
    CMP EAX,EBP                         ; 00407ffd
    JG 0x0040802f                       ; 00407fff
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    CMP EBX,EAX                         ; 00408001
    JG 0x0040802f                       ; 00408003
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00408005
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00408009
    CMP EAX,EBX                         ; 0040800d
    JG 0x0040802f                       ; 0040800f
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    NEG EBX                             ; 00408011
    CMP EBX,EAX                         ; 00408013
    JG 0x0040802f                       ; 00408015
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00408017
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0040801b
    CMP EAX,EDI                         ; 0040801f
    JG 0x0040802f                       ; 00408021
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    CMP EBX,EAX                         ; 00408023
    JG 0x0040802f                       ; 00408025
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    TEST EBP,EBP                        ; 00408027
    JLE 0x0040802f                      ; 00408029
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    TEST EDI,EDI                        ; 0040802b
    JG 0x0040804a                       ; 0040802d
        ;   XREF to: 0040804a (CONDITIONAL_JUMP)  ; LAB_0040804a
    ADD ESP,0x30                        ; 0040802f
        ;   Label: LAB_0040802f
    POP EBP                             ; 00408032
    POP EDI                             ; 00408033
    POP ESI                             ; 00408034
    POP EBX                             ; 00408035
    LEA EAX,[EAX]                       ; 00408036
    LEA EDX,[EDX]                       ; 0040803c
    RET                                 ; 00408040
    TEST AL,0xff                        ; 00408041
        ;   Label: LAB_00408041
    JNZ 0x0040802f                      ; 00408043
        ;   XREF to: 0040802f (CONDITIONAL_JUMP)  ; LAB_0040802f
    JMP 0x00407e4d                      ; 00408045
        ;   XREF to: 00407e4d (UNCONDITIONAL_JUMP)  ; LAB_00407e4d
    MOV ECX,0xc                         ; 0040804a
        ;   Label: LAB_0040804a
    LEA ESI,[ESP + 0x44]                ; 0040804f
    MOV EDI,0x72ff34                    ; 00408053
    MOVSD.REP ES:EDI,ESI                ; 00408058
    MOV ECX,0xc                         ; 0040805a
    LEA ESI,[ESP + 0x74]                ; 0040805f
    MOV EDI,0x72ff64                    ; 00408063
    PUSH 0x61a6                         ; 00408068
    MOVSD.REP ES:EDI,ESI                ; 0040806d
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630 ; 0040806f
        ;   XREF to: 004e5630 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
    ADD ESP,0x4                         ; 00408074
    PUSH 0x61a7                         ; 00408077
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630 ; 0040807c
        ;   XREF to: 004e5630 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
    ADD ESP,0x4                         ; 00408081
    MOV EAX,0x60b014                    ; 00408084
    PUSH 0x2                            ; 00408089
    ADD EAX,0x124f20                    ; 0040808b
    PUSH EAX                            ; 00408090
    CALL engine_prim.c_prepareDepthBuffer_FUN_00515920 ; 00408091
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_00515920()
    ADD ESP,0x8                         ; 00408096
    MOV ECX,dword ptr [0x0072ff6c]      ; 00408099 | DAT_0072ff6c
    MOV EAX,[0x0072ff78]                ; 0040809f | DAT_0072ff78
    PUSH ECX                            ; 004080a4
    SAR EAX,0x10                        ; 004080a5
    PUSH EAX                            ; 004080a8
    MOV EAX,[0x0072ff74]                ; 004080a9 | DAT_0072ff74
    SAR EAX,0x10                        ; 004080ae
    PUSH EAX                            ; 004080b1
    MOV EBX,dword ptr [0x0072ff3c]      ; 004080b2 | DAT_0072ff3c
    MOV EAX,[0x0072ff48]                ; 004080b8 | DAT_0072ff48
    PUSH EBX                            ; 004080bd
    SAR EAX,0x10                        ; 004080be
    PUSH EAX                            ; 004080c1
    MOV EAX,[0x0072ff44]                ; 004080c2 | DAT_0072ff44
    SAR EAX,0x10                        ; 004080c7
    PUSH EAX                            ; 004080ca
    CALL engine_2d.c_drawLine3D_FUN_00401310 ; 004080cb
        ;   XREF to: 00401310 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine3D_FUN_00401310(int x1, int y1, uint z1, int x2, ...)
    ADD ESP,0x18                        ; 004080d0
    ADD ESP,0x30                        ; 004080d3
    POP EBP                             ; 004080d6
    POP EDI                             ; 004080d7
    POP ESI                             ; 004080d8
    POP EBX                             ; 004080d9
    RET                                 ; 004080da

