; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1,SRenderVertex vertex2)
;
; Parameters:
; SRenderVertex    Stack[0x4]:48   vertex1
; SRenderVertex    Stack[0x34]:48   vertex2
; Local Variables:
; SRenderVertex    Stack[-0x40]:48  local_40
;
; XREF[17]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040dcef
;   core_actor.cpp_draw3DLineSegment_FUN_0040d330 at 0040d45b
;   core_actor.cpp_drawBoundingBox_FUN_0040d470 at 0040d5fe
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443e4b
;   core_ladder.cpp_CLadder_renderOpaque_FUN_00502620 at 00502845
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 00584184
;   core_setedit.cpp_drawCameraFrustum_FUN_00582930 at 00582cfa
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 at 0059b734
;   core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10 at 005b9fe4
;   engine_3d.c_drawLine2DFromIndices_FUN_00407cf0 at 00407d55
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 g_RenderVertexBuffer[19998].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[19998].projected_vertex.screen_y
;   undefined4 g_RenderVertexBuffer[19999].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[19999].projected_vertex.screen_y
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
    JNZ 0x00407f77                      ; 00407d87
        ;   XREF to: 00407f77 (CONDITIONAL_JUMP)  ; LAB_00407f77
    XOR EBX,EBX                         ; 00407d8d
        ;   Label: LAB_00407d8d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407d8f
        ;   Label: LAB_00407d8f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407d93
    JLE 0x00407dc0                      ; 00407d97
        ;   XREF to: 00407dc0 (CONDITIONAL_JUMP)  ; LAB_00407dc0
    MOV EAX,ESP                         ; 00407d99
    PUSH EAX                            ; 00407d9b
    LEA EAX,[ESP + 0x78]                ; 00407d9c
    PUSH EAX                            ; 00407da0
    LEA EAX,[ESP + 0x4c]                ; 00407da1
    PUSH EAX                            ; 00407da5
    LEA EDI,[ESP + 0x80]                ; 00407da6
    LEA ESI,[ESP + 0xc]                 ; 00407dad
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00407db1
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc0eb0                      ; 00407db6
        ;   XREF to: 03fc0eb0 (UNCONDITIONAL_JUMP)  ; LAB_03fc0eb0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407dc0
        ;   Label: LAB_00407dc0
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407dc4
    NEG EAX                             ; 00407dc8
    CMP EAX,ESI                         ; 00407dca
    JLE 0x00407df5                      ; 00407dcc
        ;   XREF to: 00407df5 (CONDITIONAL_JUMP)  ; LAB_00407df5
    MOV EAX,ESP                         ; 00407dce
    PUSH EAX                            ; 00407dd0
    LEA EAX,[ESP + 0x78]                ; 00407dd1
    PUSH EAX                            ; 00407dd5
    LEA EAX,[ESP + 0x4c]                ; 00407dd6
    PUSH EAX                            ; 00407dda
    LEA EDI,[ESP + 0x80]                ; 00407ddb
    LEA ESI,[ESP + 0xc]                 ; 00407de2
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00407de6
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc0f0b                      ; 00407deb
        ;   XREF to: 03fc0f0b (UNCONDITIONAL_JUMP)  ; LAB_03fc0f0b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407df5
        ;   Label: LAB_00407df5
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407df9
    JLE 0x00407e26                      ; 00407dfd
        ;   XREF to: 00407e26 (CONDITIONAL_JUMP)  ; LAB_00407e26
    MOV EAX,ESP                         ; 00407dff
    PUSH EAX                            ; 00407e01
    LEA EAX,[ESP + 0x78]                ; 00407e02
    PUSH EAX                            ; 00407e06
    LEA EAX,[ESP + 0x4c]                ; 00407e07
    PUSH EAX                            ; 00407e0b
    LEA EDI,[ESP + 0x80]                ; 00407e0c
    LEA ESI,[ESP + 0xc]                 ; 00407e13
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00407e17
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc0f66                      ; 00407e1c
        ;   XREF to: 03fc0f66 (UNCONDITIONAL_JUMP)  ; LAB_03fc0f66
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407e26
        ;   Label: LAB_00407e26
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407e2a
    NEG EAX                             ; 00407e2e
    CMP EAX,EBP                         ; 00407e30
    JLE 0x00407e5b                      ; 00407e32
        ;   XREF to: 00407e5b (CONDITIONAL_JUMP)  ; LAB_00407e5b
    MOV EAX,ESP                         ; 00407e34
    PUSH EAX                            ; 00407e36
    LEA EAX,[ESP + 0x78]                ; 00407e37
    PUSH EAX                            ; 00407e3b
    LEA EAX,[ESP + 0x4c]                ; 00407e3c
    PUSH EAX                            ; 00407e40
    LEA EDI,[ESP + 0x80]                ; 00407e41
    LEA ESI,[ESP + 0xc]                 ; 00407e48
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00407e4c
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc0fc1                      ; 00407e51
        ;   XREF to: 03fc0fc1 (UNCONDITIONAL_JUMP)  ; LAB_03fc0fc1
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407e5b
        ;   Label: LAB_00407e5b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407e5f
    JLE 0x00407e89                      ; 00407e63
        ;   XREF to: 00407e89 (CONDITIONAL_JUMP)  ; LAB_00407e89
    MOV EAX,ESP                         ; 00407e65
    PUSH EAX                            ; 00407e67
    LEA EAX,[ESP + 0x48]                ; 00407e68
    PUSH EAX                            ; 00407e6c
    LEA EAX,[ESP + 0x7c]                ; 00407e6d
    PUSH EAX                            ; 00407e71
    LEA EDI,[ESP + 0x50]                ; 00407e72
    LEA ESI,[ESP + 0xc]                 ; 00407e76
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00407e7a
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc101c                      ; 00407e7f
        ;   XREF to: 03fc101c (UNCONDITIONAL_JUMP)  ; LAB_03fc101c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407e89
        ;   Label: LAB_00407e89
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407e8d
    NEG EAX                             ; 00407e91
    CMP EAX,ECX                         ; 00407e93
    JLE 0x00407ebb                      ; 00407e95
        ;   XREF to: 00407ebb (CONDITIONAL_JUMP)  ; LAB_00407ebb
    MOV EAX,ESP                         ; 00407e97
    PUSH EAX                            ; 00407e99
    LEA EAX,[ESP + 0x48]                ; 00407e9a
    PUSH EAX                            ; 00407e9e
    LEA EAX,[ESP + 0x7c]                ; 00407e9f
    PUSH EAX                            ; 00407ea3
    LEA EDI,[ESP + 0x50]                ; 00407ea4
    LEA ESI,[ESP + 0xc]                 ; 00407ea8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00407eac
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc1077                      ; 00407eb1
        ;   XREF to: 03fc1077 (UNCONDITIONAL_JUMP)  ; LAB_03fc1077
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407ebb
        ;   Label: LAB_00407ebb
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407ebf
    JLE 0x00407ee9                      ; 00407ec3
        ;   XREF to: 00407ee9 (CONDITIONAL_JUMP)  ; LAB_00407ee9
    MOV EAX,ESP                         ; 00407ec5
    PUSH EAX                            ; 00407ec7
    LEA EAX,[ESP + 0x48]                ; 00407ec8
    PUSH EAX                            ; 00407ecc
    LEA EAX,[ESP + 0x7c]                ; 00407ecd
    PUSH EAX                            ; 00407ed1
    LEA EDI,[ESP + 0x50]                ; 00407ed2
    LEA ESI,[ESP + 0xc]                 ; 00407ed6
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00407eda
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc10d2                      ; 00407edf
        ;   XREF to: 03fc10d2 (UNCONDITIONAL_JUMP)  ; LAB_03fc10d2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407ee9
        ;   Label: LAB_00407ee9
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407eed
    NEG EAX                             ; 00407ef1
    CMP EAX,EDI                         ; 00407ef3
    JLE 0x00407f1b                      ; 00407ef5
        ;   XREF to: 00407f1b (CONDITIONAL_JUMP)  ; LAB_00407f1b
    MOV EAX,ESP                         ; 00407ef7
    PUSH EAX                            ; 00407ef9
    LEA EAX,[ESP + 0x48]                ; 00407efa
    PUSH EAX                            ; 00407efe
    LEA EAX,[ESP + 0x7c]                ; 00407eff
    PUSH EAX                            ; 00407f03
    LEA EDI,[ESP + 0x50]                ; 00407f04
    LEA ESI,[ESP + 0xc]                 ; 00407f08
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00407f0c
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc112d                      ; 00407f11
        ;   XREF to: 03fc112d (UNCONDITIONAL_JUMP)  ; LAB_03fc112d
    INC EBX                             ; 00407f1b
        ;   Label: LAB_00407f1b
    CMP EBX,0x2                         ; 00407f1c
    JL 0x00407d8f                       ; 00407f1f
        ;   XREF to: 00407d8f (CONDITIONAL_JUMP)  ; LAB_00407d8f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407f25
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407f29
    CMP EAX,EBP                         ; 00407f2d
    JG 0x00407f6f                       ; 00407f2f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    MOV EBX,EBP                         ; 00407f31
    NEG EBX                             ; 00407f33
    CMP EBX,EAX                         ; 00407f35
    JG 0x00407f6f                       ; 00407f37
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407f39
    CMP EAX,EBP                         ; 00407f3d
    JG 0x00407f6f                       ; 00407f3f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    CMP EBX,EAX                         ; 00407f41
    JG 0x00407f6f                       ; 00407f43
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407f45
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00407f49
    CMP EAX,EBX                         ; 00407f4d
    JG 0x00407f6f                       ; 00407f4f
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    NEG EBX                             ; 00407f51
    CMP EBX,EAX                         ; 00407f53
    JG 0x00407f6f                       ; 00407f55
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407f57
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00407f5b
    CMP EAX,EDI                         ; 00407f5f
    JG 0x00407f6f                       ; 00407f61
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    CMP EBX,EAX                         ; 00407f63
    JG 0x00407f6f                       ; 00407f65
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    TEST EBP,EBP                        ; 00407f67
    JLE 0x00407f6f                      ; 00407f69
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    TEST EDI,EDI                        ; 00407f6b
    JG 0x00407f80                       ; 00407f6d
        ;   XREF to: 00407f80 (CONDITIONAL_JUMP)  ; LAB_00407f80
    ADD ESP,0x30                        ; 00407f6f
        ;   Label: LAB_00407f6f
    POP EBP                             ; 00407f72
    POP EDI                             ; 00407f73
    POP ESI                             ; 00407f74
    POP EBX                             ; 00407f75
    RET                                 ; 00407f76
    TEST AL,0xff                        ; 00407f77
        ;   Label: LAB_00407f77
    JNZ 0x00407f6f                      ; 00407f79
        ;   XREF to: 00407f6f (CONDITIONAL_JUMP)  ; LAB_00407f6f
    JMP 0x00407d8d                      ; 00407f7b
        ;   XREF to: 00407d8d (UNCONDITIONAL_JUMP)  ; LAB_00407d8d
    JMP 0x03fc1188                      ; 00407f80
        ;   XREF to: 03fc1188 (UNCONDITIONAL_JUMP)  ; LAB_03fc1188
        ;   Label: LAB_00407f80
    JMP 0x03fc11e9                      ; 00407f90
        ;   XREF to: 03fc11e9 (UNCONDITIONAL_JUMP)  ; LAB_03fc11e9
        ;   Label: LAB_00407f90
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 00407fa5
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
        ;   Label: LAB_00407fa5
    ADD ESP,0x4                         ; 00407faa
    PUSH 0x4e1f                         ; 00407fad
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 00407fb2
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
    MOV EAX,[0x007725f8]                ; 00407fb7 | g_RenderVertexBuffer[19999].projected_vertex.screen_y
    ADD ESP,0x4                         ; 00407fbc
    SAR EAX,0x10                        ; 00407fbf
    PUSH EAX                            ; 00407fc2
    MOV EAX,[0x007725f4]                ; 00407fc3 | g_RenderVertexBuffer[19999].projected_vertex.screen_x
    SAR EAX,0x10                        ; 00407fc8
    PUSH EAX                            ; 00407fcb
    MOV EAX,[0x007725c8]                ; 00407fcc | g_RenderVertexBuffer[19998].projected_vertex.screen_y
    SAR EAX,0x10                        ; 00407fd1
    PUSH EAX                            ; 00407fd4
    MOV EAX,[0x007725c4]                ; 00407fd5 | g_RenderVertexBuffer[19998].projected_vertex.screen_x
    SAR EAX,0x10                        ; 00407fda
    PUSH EAX                            ; 00407fdd
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00407fde
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00407fe3
    ADD ESP,0x30                        ; 00407fe6
    POP EBP                             ; 00407fe9
    POP EDI                             ; 00407fea
    POP ESI                             ; 00407feb
    POP EBX                             ; 00407fec
    RET                                 ; 00407fed
    MOV ECX,0xc                         ; 03fc0eb0
        ;   Label: LAB_03fc0eb0
    ADD ESP,0xc                         ; 03fc0eb5
    MOV ECX,dword ptr [ESI]             ; 03fc0eb8
    MOV dword ptr [EDI],ECX             ; 03fc0eba
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0ebc
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0ebf
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0ec2
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0ec5
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0ec8
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0ecb
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0ece
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0ed1
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0ed4
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0ed7
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0eda
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0edd
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0ee0
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0ee3
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0ee6
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0ee9
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0eec
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0eef
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0ef2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0ef5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0ef8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0efb
    ADD ESI,0x30                        ; 03fc0efe
    ADD EDI,0x30                        ; 03fc0f01
    XOR ECX,ECX                         ; 03fc0f04
    JMP 0x00407dc0                      ; 03fc0f06
        ;   XREF to: 00407dc0 (UNCONDITIONAL_JUMP)  ; LAB_00407dc0
    MOV ECX,0xc                         ; 03fc0f0b
        ;   Label: LAB_03fc0f0b
    ADD ESP,0xc                         ; 03fc0f10
    MOV ECX,dword ptr [ESI]             ; 03fc0f13
    MOV dword ptr [EDI],ECX             ; 03fc0f15
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0f17
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0f1a
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0f1d
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0f20
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0f23
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0f26
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0f29
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0f2c
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0f2f
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0f32
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0f35
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0f38
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0f3b
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0f3e
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0f41
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0f44
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0f47
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0f4a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0f4d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0f50
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0f53
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0f56
    ADD ESI,0x30                        ; 03fc0f59
    ADD EDI,0x30                        ; 03fc0f5c
    XOR ECX,ECX                         ; 03fc0f5f
    JMP 0x00407df5                      ; 03fc0f61
        ;   XREF to: 00407df5 (UNCONDITIONAL_JUMP)  ; LAB_00407df5
    MOV ECX,0xc                         ; 03fc0f66
        ;   Label: LAB_03fc0f66
    ADD ESP,0xc                         ; 03fc0f6b
    MOV ECX,dword ptr [ESI]             ; 03fc0f6e
    MOV dword ptr [EDI],ECX             ; 03fc0f70
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0f72
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0f75
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0f78
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0f7b
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0f7e
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0f81
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0f84
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0f87
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0f8a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0f8d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0f90
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0f93
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0f96
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0f99
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0f9c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0f9f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0fa2
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0fa5
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0fa8
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0fab
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0fae
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0fb1
    ADD ESI,0x30                        ; 03fc0fb4
    ADD EDI,0x30                        ; 03fc0fb7
    XOR ECX,ECX                         ; 03fc0fba
    JMP 0x00407e26                      ; 03fc0fbc
        ;   XREF to: 00407e26 (UNCONDITIONAL_JUMP)  ; LAB_00407e26
    MOV ECX,0xc                         ; 03fc0fc1
        ;   Label: LAB_03fc0fc1
    ADD ESP,0xc                         ; 03fc0fc6
    MOV ECX,dword ptr [ESI]             ; 03fc0fc9
    MOV dword ptr [EDI],ECX             ; 03fc0fcb
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0fcd
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0fd0
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0fd3
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0fd6
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0fd9
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0fdc
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0fdf
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0fe2
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0fe5
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0fe8
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0feb
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0fee
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0ff1
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0ff4
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0ff7
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0ffa
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0ffd
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1000
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1003
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1006
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1009
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc100c
    ADD ESI,0x30                        ; 03fc100f
    ADD EDI,0x30                        ; 03fc1012
    XOR ECX,ECX                         ; 03fc1015
    JMP 0x00407e5b                      ; 03fc1017
        ;   XREF to: 00407e5b (UNCONDITIONAL_JUMP)  ; LAB_00407e5b
    MOV ECX,0xc                         ; 03fc101c
        ;   Label: LAB_03fc101c
    ADD ESP,0xc                         ; 03fc1021
    MOV ECX,dword ptr [ESI]             ; 03fc1024
    MOV dword ptr [EDI],ECX             ; 03fc1026
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1028
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc102b
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc102e
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1031
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1034
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1037
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc103a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc103d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1040
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1043
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1046
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1049
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc104c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc104f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1052
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1055
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1058
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc105b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc105e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1061
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1064
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1067
    ADD ESI,0x30                        ; 03fc106a
    ADD EDI,0x30                        ; 03fc106d
    XOR ECX,ECX                         ; 03fc1070
    JMP 0x00407e89                      ; 03fc1072
        ;   XREF to: 00407e89 (UNCONDITIONAL_JUMP)  ; LAB_00407e89
    MOV ECX,0xc                         ; 03fc1077
        ;   Label: LAB_03fc1077
    ADD ESP,0xc                         ; 03fc107c
    MOV ECX,dword ptr [ESI]             ; 03fc107f
    MOV dword ptr [EDI],ECX             ; 03fc1081
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1083
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1086
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1089
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc108c
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc108f
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1092
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1095
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1098
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc109b
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc109e
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc10a1
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc10a4
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc10a7
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc10aa
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc10ad
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc10b0
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc10b3
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc10b6
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc10b9
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc10bc
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc10bf
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc10c2
    ADD ESI,0x30                        ; 03fc10c5
    ADD EDI,0x30                        ; 03fc10c8
    XOR ECX,ECX                         ; 03fc10cb
    JMP 0x00407ebb                      ; 03fc10cd
        ;   XREF to: 00407ebb (UNCONDITIONAL_JUMP)  ; LAB_00407ebb
    MOV ECX,0xc                         ; 03fc10d2
        ;   Label: LAB_03fc10d2
    ADD ESP,0xc                         ; 03fc10d7
    MOV ECX,dword ptr [ESI]             ; 03fc10da
    MOV dword ptr [EDI],ECX             ; 03fc10dc
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc10de
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc10e1
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc10e4
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc10e7
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc10ea
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc10ed
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc10f0
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc10f3
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc10f6
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc10f9
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc10fc
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc10ff
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1102
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1105
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1108
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc110b
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc110e
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1111
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1114
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1117
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc111a
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc111d
    ADD ESI,0x30                        ; 03fc1120
    ADD EDI,0x30                        ; 03fc1123
    XOR ECX,ECX                         ; 03fc1126
    JMP 0x00407ee9                      ; 03fc1128
        ;   XREF to: 00407ee9 (UNCONDITIONAL_JUMP)  ; LAB_00407ee9
    MOV ECX,0xc                         ; 03fc112d
        ;   Label: LAB_03fc112d
    ADD ESP,0xc                         ; 03fc1132
    MOV ECX,dword ptr [ESI]             ; 03fc1135
    MOV dword ptr [EDI],ECX             ; 03fc1137
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1139
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc113c
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc113f
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1142
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1145
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1148
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc114b
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc114e
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1151
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1154
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1157
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc115a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc115d
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1160
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1163
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1166
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1169
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc116c
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc116f
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1172
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1175
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1178
    ADD ESI,0x30                        ; 03fc117b
    ADD EDI,0x30                        ; 03fc117e
    XOR ECX,ECX                         ; 03fc1181
    JMP 0x00407f1b                      ; 03fc1183
        ;   XREF to: 00407f1b (UNCONDITIONAL_JUMP)  ; LAB_00407f1b
    MOV ECX,0xc                         ; 03fc1188
        ;   Label: LAB_03fc1188
    LEA ESI,[ESP + 0x44]                ; 03fc118d
    MOV EDI,0x7725b4                    ; 03fc1191
    MOV ECX,dword ptr [ESI]             ; 03fc1196
    MOV dword ptr [EDI],ECX             ; 03fc1198
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc119a
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc119d
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc11a0
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc11a3
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc11a6
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc11a9
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc11ac
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc11af
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc11b2
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc11b5
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc11b8
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc11bb
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc11be
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc11c1
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc11c4
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc11c7
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc11ca
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc11cd
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc11d0
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc11d3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc11d6
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc11d9
    ADD ESI,0x30                        ; 03fc11dc
    ADD EDI,0x30                        ; 03fc11df
    XOR ECX,ECX                         ; 03fc11e2
    JMP 0x00407f90                      ; 03fc11e4
        ;   XREF to: 00407f90 (UNCONDITIONAL_JUMP)  ; LAB_00407f90
    MOV ECX,0xc                         ; 03fc11e9
        ;   Label: LAB_03fc11e9
    LEA ESI,[ESP + 0x74]                ; 03fc11ee
    MOV EDI,0x7725e4                    ; 03fc11f2
    PUSH 0x4e1e                         ; 03fc11f7
    MOV ECX,dword ptr [ESI]             ; 03fc11fc
    MOV dword ptr [EDI],ECX             ; 03fc11fe
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1200
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1203
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1206
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1209
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc120c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc120f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1212
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1215
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1218
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc121b
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc121e
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1221
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1224
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1227
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc122a
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc122d
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1230
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1233
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1236
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1239
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc123c
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc123f
    ADD ESI,0x30                        ; 03fc1242
    ADD EDI,0x30                        ; 03fc1245
    XOR ECX,ECX                         ; 03fc1248
    JMP 0x00407fa5                      ; 03fc124a
        ;   XREF to: 00407fa5 (UNCONDITIONAL_JUMP)  ; LAB_00407fa5

