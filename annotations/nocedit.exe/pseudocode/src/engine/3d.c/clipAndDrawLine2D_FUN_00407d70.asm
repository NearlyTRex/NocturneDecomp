; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex1
; SRenderVertex *  Stack[0x8]:4   vertex2
; Local Variables:
; undefined1       Stack[-0x40]:1  local_40
;
; XREF[17]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040dcef
;   core_actor.cpp_draw3DLineSegment_FUN_0040d330 at 0040d45b
;   core_actor.cpp_drawBoundingBox_FUN_0040d470 at 0040d5fe
;   core_course.cpp_FUN_00443bc0 at 00443e4b
;   core_ladder.cpp_FUN_00502620 at 00502845
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00584184
;   core_setedit.cpp_FUN_00582930 at 00582cfa
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 at 0059b734
;   core_stairs.cpp_FUN_005b9c10 at 005b9fe4
;   engine_3d.c_drawLine2DFromIndices_FUN_00407cf0 at 00407d55
;   ... and 7 more
;
; Referenced Globals:
;   SRenderVertex g_QuadVertex2
;   undefined4 g_QuadVertex2_Y
;   undefined4 g_ProjectedScreenX1
;   undefined4 g_ProjectedScreenY1
;   SRenderVertex g_QuadVertex3
;   undefined4 g_QuadVertex3_Y
;   undefined4 g_ProjectedScreenX2
;   undefined4 g_ProjectedScreenY2
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
;   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
;   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
;   engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407d70
        ;   Label: engine_3d.c_clipAndDrawLine2D_FUN_00407d70
    PUSH ESI                            ; 00407d71
    PUSH EDI                            ; 00407d72
    PUSH EBP                            ; 00407d73
    SUB ESP,0x30                        ; 00407d74
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407d77
    AND EAX,dword ptr [ESP + 0x84]      ; 00407d7b
    TEST EAX,0x80000000                 ; 00407d82
    JNZ 0x00407f77                      ; 00407d87 | LAB_00407f77
        ;   XREF to: 00407f77 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00407d8d
        ;   Label: LAB_00407d8d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407d8f
        ;   Label: LAB_00407d8f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407d93
    JLE 0x00407dc0                      ; 00407d97 | LAB_00407dc0
        ;   XREF to: 00407dc0 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407d99
    PUSH EAX                            ; 00407d9b
    LEA EAX,[ESP + 0x78]                ; 00407d9c
    PUSH EAX                            ; 00407da0
    LEA EAX,[ESP + 0x4c]                ; 00407da1
    PUSH EAX                            ; 00407da5
    LEA EDI,[ESP + 0x80]                ; 00407da6
    LEA ESI,[ESP + 0xc]                 ; 00407dad
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00407db1 | void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407db6
    ADD ESP,0xc                         ; 00407dbb
    MOVSD.REP ES:EDI,ESI                ; 00407dbe
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407dc0
        ;   Label: LAB_00407dc0
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407dc4
    NEG EAX                             ; 00407dc8
    CMP EAX,ESI                         ; 00407dca
    JLE 0x00407df5                      ; 00407dcc | LAB_00407df5
        ;   XREF to: 00407df5 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407dce
    PUSH EAX                            ; 00407dd0
    LEA EAX,[ESP + 0x78]                ; 00407dd1
    PUSH EAX                            ; 00407dd5
    LEA EAX,[ESP + 0x4c]                ; 00407dd6
    PUSH EAX                            ; 00407dda
    LEA EDI,[ESP + 0x80]                ; 00407ddb
    LEA ESI,[ESP + 0xc]                 ; 00407de2
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00407de6 | void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407deb
    ADD ESP,0xc                         ; 00407df0
    MOVSD.REP ES:EDI,ESI                ; 00407df3
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407df5
        ;   Label: LAB_00407df5
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407df9
    JLE 0x00407e26                      ; 00407dfd | LAB_00407e26
        ;   XREF to: 00407e26 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407dff
    PUSH EAX                            ; 00407e01
    LEA EAX,[ESP + 0x78]                ; 00407e02
    PUSH EAX                            ; 00407e06
    LEA EAX,[ESP + 0x4c]                ; 00407e07
    PUSH EAX                            ; 00407e0b
    LEA EDI,[ESP + 0x80]                ; 00407e0c
    LEA ESI,[ESP + 0xc]                 ; 00407e13
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00407e17 | void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407e1c
    ADD ESP,0xc                         ; 00407e21
    MOVSD.REP ES:EDI,ESI                ; 00407e24
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407e26
        ;   Label: LAB_00407e26
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407e2a
    NEG EAX                             ; 00407e2e
    CMP EAX,EBP                         ; 00407e30
    JLE 0x00407e5b                      ; 00407e32 | LAB_00407e5b
        ;   XREF to: 00407e5b (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407e34
    PUSH EAX                            ; 00407e36
    LEA EAX,[ESP + 0x78]                ; 00407e37
    PUSH EAX                            ; 00407e3b
    LEA EAX,[ESP + 0x4c]                ; 00407e3c
    PUSH EAX                            ; 00407e40
    LEA EDI,[ESP + 0x80]                ; 00407e41
    LEA ESI,[ESP + 0xc]                 ; 00407e48
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00407e4c | void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407e51
    ADD ESP,0xc                         ; 00407e56
    MOVSD.REP ES:EDI,ESI                ; 00407e59
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407e5b
        ;   Label: LAB_00407e5b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407e5f
    JLE 0x00407e89                      ; 00407e63 | LAB_00407e89
        ;   XREF to: 00407e89 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407e65
    PUSH EAX                            ; 00407e67
    LEA EAX,[ESP + 0x48]                ; 00407e68
    PUSH EAX                            ; 00407e6c
    LEA EAX,[ESP + 0x7c]                ; 00407e6d
    PUSH EAX                            ; 00407e71
    LEA EDI,[ESP + 0x50]                ; 00407e72
    LEA ESI,[ESP + 0xc]                 ; 00407e76
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00407e7a | void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407e7f
    ADD ESP,0xc                         ; 00407e84
    MOVSD.REP ES:EDI,ESI                ; 00407e87
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407e89
        ;   Label: LAB_00407e89
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407e8d
    NEG EAX                             ; 00407e91
    CMP EAX,ECX                         ; 00407e93
    JLE 0x00407ebb                      ; 00407e95 | LAB_00407ebb
        ;   XREF to: 00407ebb (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407e97
    PUSH EAX                            ; 00407e99
    LEA EAX,[ESP + 0x48]                ; 00407e9a
    PUSH EAX                            ; 00407e9e
    LEA EAX,[ESP + 0x7c]                ; 00407e9f
    PUSH EAX                            ; 00407ea3
    LEA EDI,[ESP + 0x50]                ; 00407ea4
    LEA ESI,[ESP + 0xc]                 ; 00407ea8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00407eac | void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407eb1
    ADD ESP,0xc                         ; 00407eb6
    MOVSD.REP ES:EDI,ESI                ; 00407eb9
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407ebb
        ;   Label: LAB_00407ebb
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407ebf
    JLE 0x00407ee9                      ; 00407ec3 | LAB_00407ee9
        ;   XREF to: 00407ee9 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407ec5
    PUSH EAX                            ; 00407ec7
    LEA EAX,[ESP + 0x48]                ; 00407ec8
    PUSH EAX                            ; 00407ecc
    LEA EAX,[ESP + 0x7c]                ; 00407ecd
    PUSH EAX                            ; 00407ed1
    LEA EDI,[ESP + 0x50]                ; 00407ed2
    LEA ESI,[ESP + 0xc]                 ; 00407ed6
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00407eda | void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407edf
    ADD ESP,0xc                         ; 00407ee4
    MOVSD.REP ES:EDI,ESI                ; 00407ee7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407ee9
        ;   Label: LAB_00407ee9
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407eed
    NEG EAX                             ; 00407ef1
    CMP EAX,EDI                         ; 00407ef3
    JLE 0x00407f1b                      ; 00407ef5 | LAB_00407f1b
        ;   XREF to: 00407f1b (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00407ef7
    PUSH EAX                            ; 00407ef9
    LEA EAX,[ESP + 0x48]                ; 00407efa
    PUSH EAX                            ; 00407efe
    LEA EAX,[ESP + 0x7c]                ; 00407eff
    PUSH EAX                            ; 00407f03
    LEA EDI,[ESP + 0x50]                ; 00407f04
    LEA ESI,[ESP + 0xc]                 ; 00407f08
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00407f0c | void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)
    MOV ECX,0xc                         ; 00407f11
    ADD ESP,0xc                         ; 00407f16
    MOVSD.REP ES:EDI,ESI                ; 00407f19
    INC EBX                             ; 00407f1b
        ;   Label: LAB_00407f1b
    CMP EBX,0x2                         ; 00407f1c
    JL 0x00407d8f                       ; 00407f1f | LAB_00407d8f
        ;   XREF to: 00407d8f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407f25
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407f29
    CMP EAX,EBP                         ; 00407f2d
    JG 0x00407f6f                       ; 00407f2f | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 00407f31
    NEG EBX                             ; 00407f33
    CMP EBX,EAX                         ; 00407f35
    JG 0x00407f6f                       ; 00407f37 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407f39
    CMP EAX,EBP                         ; 00407f3d
    JG 0x00407f6f                       ; 00407f3f | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    CMP EBX,EAX                         ; 00407f41
    JG 0x00407f6f                       ; 00407f43 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407f45
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00407f49
    CMP EAX,EBX                         ; 00407f4d
    JG 0x00407f6f                       ; 00407f4f | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    NEG EBX                             ; 00407f51
    CMP EBX,EAX                         ; 00407f53
    JG 0x00407f6f                       ; 00407f55 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407f57
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00407f5b
    CMP EAX,EDI                         ; 00407f5f
    JG 0x00407f6f                       ; 00407f61 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    CMP EBX,EAX                         ; 00407f63
    JG 0x00407f6f                       ; 00407f65 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 00407f67
    JLE 0x00407f6f                      ; 00407f69 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00407f6b
    JG 0x00407f80                       ; 00407f6d | LAB_00407f80
        ;   XREF to: 00407f80 (CONDITIONAL_JUMP)
    ADD ESP,0x30                        ; 00407f6f
        ;   Label: LAB_00407f6f
    POP EBP                             ; 00407f72
    POP EDI                             ; 00407f73
    POP ESI                             ; 00407f74
    POP EBX                             ; 00407f75
    RET                                 ; 00407f76
    TEST AL,0xff                        ; 00407f77
        ;   Label: LAB_00407f77
    JNZ 0x00407f6f                      ; 00407f79 | LAB_00407f6f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)
    JMP 0x00407d8d                      ; 00407f7b | LAB_00407d8d
        ;   XREF to: 00407d8d (UNCONDITIONAL_JUMP)
    MOV ECX,0xc                         ; 00407f80
        ;   Label: LAB_00407f80
    LEA ESI,[ESP + 0x44]                ; 00407f85
    MOV EDI,0x7725b4                    ; 00407f89 | SRenderVertex g_QuadVertex2
    MOVSD.REP ES:EDI,ESI                ; 00407f8e | SRenderVertex g_QuadVertex2
    MOV ECX,0xc                         ; 00407f90
    LEA ESI,[ESP + 0x74]                ; 00407f95
    MOV EDI,0x7725e4                    ; 00407f99 | SRenderVertex g_QuadVertex3
    PUSH 0x4e1e                         ; 00407f9e
    MOVSD.REP ES:EDI,ESI                ; 00407fa3 | SRenderVertex g_QuadVertex3
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 00407fa5 | void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cacheIndex)
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407faa
    PUSH 0x4e1f                         ; 00407fad
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 00407fb2 | void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cacheIndex)
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
    MOV EAX,[0x007725f8]                ; 00407fb7 | g_ProjectedScreenY2
    ADD ESP,0x4                         ; 00407fbc
    SAR EAX,0x10                        ; 00407fbf
    PUSH EAX                            ; 00407fc2
    MOV EAX,[0x007725f4]                ; 00407fc3 | g_ProjectedScreenX2
    SAR EAX,0x10                        ; 00407fc8
    PUSH EAX                            ; 00407fcb
    MOV EAX,[0x007725c8]                ; 00407fcc | g_ProjectedScreenY1
    SAR EAX,0x10                        ; 00407fd1
    PUSH EAX                            ; 00407fd4
    MOV EAX,[0x007725c4]                ; 00407fd5 | g_ProjectedScreenX1
    SAR EAX,0x10                        ; 00407fda
    PUSH EAX                            ; 00407fdd
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00407fde | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00407fe3
    ADD ESP,0x30                        ; 00407fe6
    POP EBP                             ; 00407fe9
    POP EDI                             ; 00407fea
    POP ESI                             ; 00407feb
    POP EBX                             ; 00407fec
    RET                                 ; 00407fed

