; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v0
; SRenderVertex *  Stack[0x8]:4   v1
; SRenderVertex *  Stack[0xc]:4   v2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[13]:
;   engine_3d.c_rasterizePolygon_FUN_005fd4e0 at 005fd743
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 at 005fd281
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 at 00437d5c
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 00436804
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 004384ec
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d525
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 at 00483acd
;   engine_drender.cpp_renderTriangleTextured_FUN_00483370 at 00483451
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553c45
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 at 00552a8d
;   ... and 3 more
;
; Referenced Globals:
;   int g_CullingMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552150
        ;   Label: engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
    PUSH ESI                            ; 00552151
    PUSH EDI                            ; 00552152
    PUSH EBP                            ; 00552153
    MOV EBP,ESP                         ; 00552154
    SUB ESP,0x14                        ; 00552156
    MOV EBX,dword ptr [EBP + 0x14]      ; 00552159
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055215c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0055215f
    CMP dword ptr [0x00772a7c],0x1      ; 00552162 | g_CullingMode
    JNZ 0x005521d3                      ; 00552169
        ;   XREF to: 005521d3 (CONDITIONAL_JUMP)  ; LAB_005521d3
    MOV EDI,dword ptr [EBX + 0x10]      ; 0055216b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0055216e
    SUB EDX,EDI                         ; 00552171
    MOV dword ptr [EBP + -0x14],EDX     ; 00552173
    MOV EDX,dword ptr [EAX + 0x14]      ; 00552176
    MOV ESI,dword ptr [EBX + 0x14]      ; 00552179
    SUB EDX,ESI                         ; 0055217c
    MOV dword ptr [EBP + -0x10],EDX     ; 0055217e
    MOV EDX,dword ptr [ECX + 0x10]      ; 00552181
    MOV EDI,dword ptr [EAX + 0x10]      ; 00552184
    SUB EDX,EDI                         ; 00552187
    MOV dword ptr [EBP + -0xc],EDX      ; 00552189
    MOV EDX,dword ptr [ECX + 0x14]      ; 0055218c
    MOV ECX,dword ptr [EAX + 0x14]      ; 0055218f
    SUB EDX,ECX                         ; 00552192
    MOV dword ptr [EBP + -0x8],EDX      ; 00552194
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00552197
        ;   Label: LAB_00552197
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0055219d
    MOV EBX,EAX                         ; 005521a3
    MOV ECX,EDX                         ; 005521a5
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 005521a7
    IMUL dword ptr [EBP + 0xfffffff4]   ; 005521ad
    SUB EAX,EBX                         ; 005521b3
    SBB EDX,ECX                         ; 005521b5
    MOV EAX,0x0                         ; 005521b7
    JGE 0x005521c3                      ; 005521bc
        ;   XREF to: 005521c3 (CONDITIONAL_JUMP)  ; LAB_005521c3
    MOV EAX,0x1                         ; 005521be
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 005521c3
        ;   Label: LAB_005521c3
    MOV EAX,dword ptr [EBP + -0x4]      ; 005521c9
    MOV ESP,EBP                         ; 005521cc
    POP EBP                             ; 005521ce
    POP EDI                             ; 005521cf
    POP ESI                             ; 005521d0
    POP EBX                             ; 005521d1
    RET                                 ; 005521d2
    MOV ESI,dword ptr [EBX + 0x10]      ; 005521d3
        ;   Label: LAB_005521d3
    MOV EDX,dword ptr [EAX + 0x10]      ; 005521d6
    SUB EDX,ESI                         ; 005521d9
    MOV dword ptr [EBP + -0xc],EDX      ; 005521db
    MOV EDX,dword ptr [EAX + 0x14]      ; 005521de
    MOV EDI,dword ptr [EBX + 0x14]      ; 005521e1
    SUB EDX,EDI                         ; 005521e4
    MOV dword ptr [EBP + -0x8],EDX      ; 005521e6
    MOV EDX,dword ptr [ECX + 0x10]      ; 005521e9
    MOV EBX,dword ptr [EAX + 0x10]      ; 005521ec
    SUB EDX,EBX                         ; 005521ef
    MOV dword ptr [EBP + -0x14],EDX     ; 005521f1
    MOV EDX,dword ptr [ECX + 0x14]      ; 005521f4
    MOV ESI,dword ptr [EAX + 0x14]      ; 005521f7
    SUB EDX,ESI                         ; 005521fa
    MOV dword ptr [EBP + -0x10],EDX     ; 005521fc
    JMP 0x00552197                      ; 005521ff
        ;   XREF to: 00552197 (UNCONDITIONAL_JUMP)  ; LAB_00552197

