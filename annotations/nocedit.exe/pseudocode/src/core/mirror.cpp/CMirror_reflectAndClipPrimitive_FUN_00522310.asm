; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560 at 0052256a
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0 at 0052263e
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0 at 005225aa
;
; Referenced Globals:
;   float g_MirrorProjectionScale = 256
;   float g_MirrorIntToFloat_Coarse = 0.00390625
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_MirrorInputVertexCount
;   CVector3f[32] g_MirrorInputVertices
;   undefined4 DAT_02f3340c
;   undefined4 DAT_02f33410
;   undefined4 DAT_02f33414
;   undefined4 DAT_02f33418
;   undefined4 DAT_02f3341c
;   int g_MirrorOutputVertexCount
;   CVector3f[32] g_MirrorOutputVertices
;   undefined4 DAT_02f33590
;   undefined4 DAT_02f33594
;   ... and 3 more
;
; Called Functions:
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
;   engine_matrix.c_projectCachedPoint_FUN_0050cda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522310
        ;   Label: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
    PUSH ESI                            ; 00522311
    PUSH EDI                            ; 00522312
    PUSH EBP                            ; 00522313
    SUB ESP,0x4                         ; 00522314
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00522317
    MOV EAX,dword ptr [EAX + 0x4]       ; 0052231b
    MOV [0x02f33404],EAX                ; 0052231e | g_MirrorInputVertexCount
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00522323
    MOV EDX,dword ptr [EAX + 0x4]       ; 00522327
    XOR EDI,EDI                         ; 0052232a
    TEST EDX,EDX                        ; 0052232c
    JLE 0x00522390                      ; 0052232e
        ;   XREF to: 00522390 (CONDITIONAL_JUMP)  ; LAB_00522390
    MOV ESI,0x2f33408                   ; 00522330 | g_MirrorInputVertices
    MOV EBP,EAX                         ; 00522335
    MOV EDX,dword ptr [EBP + 0x18]      ; 00522337
        ;   Label: LAB_00522337
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052233a
    SUB EAX,EDX                         ; 00522341
    MOV EDX,EAX                         ; 00522343
    MOV EAX,[0x006703ec]                ; 00522345 | g_CDemonRendererPtr2
    SHL EDX,0x4                         ; 0052234a
    MOV EAX,dword ptr [EAX]             ; 0052234d | g_CDemonRendererInstance
    MOV EBX,ESI                         ; 0052234f
    ADD EAX,EDX                         ; 00522351
    FILD dword ptr [EAX]                ; 00522353
    FMUL float ptr [0x006616e8]         ; 00522355 | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX]                ; 0052235b | g_MirrorInputVertices | DAT_02f33414
    FILD dword ptr [EAX + 0x4]          ; 0052235d
    FMUL float ptr [0x006616e8]         ; 00522360 | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX + 0x4]          ; 00522366 | DAT_02f3340c | DAT_02f33418
    FILD dword ptr [EAX + 0x8]          ; 00522369
    FMUL float ptr [0x006616e8]         ; 0052236c | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX + 0x8]          ; 00522372 | DAT_02f33410 | DAT_02f3341c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00522375
    ADD EBP,0x4                         ; 00522379
    INC EDI                             ; 0052237c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0052237d
    ADD ESI,0xc                         ; 00522380
    CMP EDI,ECX                         ; 00522383
    JL 0x00522337                       ; 00522385
        ;   XREF to: 00522337 (CONDITIONAL_JUMP)  ; LAB_00522337
    LEA EAX,[EAX]                       ; 00522387
    LEA EDX,[EDX]                       ; 0052238d
    PUSH 0x2f33588                      ; 00522390 | g_MirrorOutputVertexCount
        ;   Label: LAB_00522390
    PUSH 0x2f3358c                      ; 00522395 | g_MirrorOutputVertices
    MOV EBX,dword ptr [0x02f33404]      ; 0052239a | g_MirrorInputVertexCount
    PUSH EBX                            ; 005223a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005223a1
    PUSH 0x2f33408                      ; 005223a5 | g_MirrorInputVertices
    ADD EAX,0x98                        ; 005223aa
    PUSH EAX                            ; 005223af
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 ; 005223b0
        ;   XREF to: 00521290 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ESI,dword ptr [0x02f33588]      ; 005223b5 | g_MirrorOutputVertexCount
    ADD ESP,0x14                        ; 005223bb
    CMP ESI,0x3                         ; 005223be
    JGE 0x005223cd                      ; 005223c1
        ;   XREF to: 005223cd (CONDITIONAL_JUMP)  ; LAB_005223cd
    XOR EAX,EAX                         ; 005223c3
        ;   Label: LAB_005223c3
    ADD ESP,0x4                         ; 005223c5
    POP EBP                             ; 005223c8
    POP EDI                             ; 005223c9
    POP ESI                             ; 005223ca
    POP EBX                             ; 005223cb
    RET                                 ; 005223cc
    PUSH 0x2f33404                      ; 005223cd | g_MirrorInputVertexCount
        ;   Label: LAB_005223cd
    PUSH 0x2f33408                      ; 005223d2 | g_MirrorInputVertices
    PUSH ESI                            ; 005223d7
    MOV EAX,dword ptr [ESP + 0x24]      ; 005223d8
    PUSH 0x2f3358c                      ; 005223dc | g_MirrorOutputVertices
    ADD EAX,0xa8                        ; 005223e1
    PUSH EAX                            ; 005223e6
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 ; 005223e7
        ;   XREF to: 00521290 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EBP,dword ptr [0x02f33404]      ; 005223ec | g_MirrorInputVertexCount
    ADD ESP,0x14                        ; 005223f2
    CMP EBP,0x3                         ; 005223f5
    JL 0x005223c3                       ; 005223f8
        ;   XREF to: 005223c3 (CONDITIONAL_JUMP)  ; LAB_005223c3
    PUSH 0x2f33588                      ; 005223fa | g_MirrorOutputVertexCount
    PUSH 0x2f3358c                      ; 005223ff | g_MirrorOutputVertices
    PUSH EBP                            ; 00522404
    MOV EAX,dword ptr [ESP + 0x24]      ; 00522405
    PUSH 0x2f33408                      ; 00522409 | g_MirrorInputVertices
    ADD EAX,0xb8                        ; 0052240e
    PUSH EAX                            ; 00522413
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 ; 00522414
        ;   XREF to: 00521290 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EDX,dword ptr [0x02f33588]      ; 00522419 | g_MirrorOutputVertexCount
    ADD ESP,0x14                        ; 0052241f
    CMP EDX,0x3                         ; 00522422
    JL 0x005223c3                       ; 00522425
        ;   XREF to: 005223c3 (CONDITIONAL_JUMP)  ; LAB_005223c3
    PUSH 0x2f33404                      ; 00522427 | g_MirrorInputVertexCount
    PUSH 0x2f33408                      ; 0052242c | g_MirrorInputVertices
    PUSH EDX                            ; 00522431
    MOV EAX,dword ptr [ESP + 0x24]      ; 00522432
    PUSH 0x2f3358c                      ; 00522436 | g_MirrorOutputVertices
    ADD EAX,0xc8                        ; 0052243b
    PUSH EAX                            ; 00522440
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 ; 00522441
        ;   XREF to: 00521290 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EBX,dword ptr [0x02f33404]      ; 00522446 | g_MirrorInputVertexCount
    ADD ESP,0x14                        ; 0052244c
    CMP EBX,0x3                         ; 0052244f
    JL 0x005223c3                       ; 00522452
        ;   XREF to: 005223c3 (CONDITIONAL_JUMP)  ; LAB_005223c3
    PUSH 0x2f33588                      ; 00522458 | g_MirrorOutputVertexCount
    PUSH 0x2f3358c                      ; 0052245d | g_MirrorOutputVertices
    PUSH EBX                            ; 00522462
    MOV EAX,dword ptr [ESP + 0x24]      ; 00522463
    PUSH 0x2f33408                      ; 00522467 | g_MirrorInputVertices
    ADD EAX,0xd8                        ; 0052246c
    PUSH EAX                            ; 00522471
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 ; 00522472
        ;   XREF to: 00521290 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EDI,dword ptr [0x02f33588]      ; 00522477 | g_MirrorOutputVertexCount
    ADD ESP,0x14                        ; 0052247d
    CMP EDI,0x3                         ; 00522480
    JL 0x005223c3                       ; 00522483
        ;   XREF to: 005223c3 (CONDITIONAL_JUMP)  ; LAB_005223c3
    MOV EDX,dword ptr [ESP + 0x18]      ; 00522489
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052248d
    MOV dword ptr [EDX + 0xec],EDI      ; 00522491
    MOV EAX,dword ptr [EAX + 0x8]       ; 00522497
    MOV dword ptr [EDX + 0xf0],EAX      ; 0052249a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005224a0
    MOV EAX,dword ptr [EAX + 0xc]       ; 005224a4
    MOV dword ptr [EDX + 0xf4],EAX      ; 005224a7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005224ad
    MOV EAX,dword ptr [EAX + 0x10]      ; 005224b1
    MOV dword ptr [EDX + 0xf8],EAX      ; 005224b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005224ba
    XOR EBP,EBP                         ; 005224be
    MOV EAX,dword ptr [EAX + 0x14]      ; 005224c0
    MOV dword ptr [ESP],EBP             ; 005224c3
    MOV dword ptr [EDX + 0xfc],EAX      ; 005224c6
    TEST EDI,EDI                        ; 005224cc
    JLE 0x00522550                      ; 005224ce
        ;   XREF to: 00522550 (CONDITIONAL_JUMP)  ; LAB_00522550
    MOV EDI,0x2f3358c                   ; 005224d4 | g_MirrorOutputVertices
    MOV EBP,0xea000                     ; 005224d9
    MOV ESI,EDX                         ; 005224de
    MOV EAX,[0x006703ec]                ; 005224e0 | g_CDemonRendererPtr2
        ;   Label: LAB_005224e0
    MOV EBX,dword ptr [EAX]             ; 005224e5 | g_CDemonRendererInstance
    MOV EAX,EDI                         ; 005224e7
    ADD EBX,EBP                         ; 005224e9
    FLD float ptr [EAX]                 ; 005224eb | g_MirrorOutputVertices | DAT_02f33598
    FMUL float ptr [0x006616e0]         ; 005224ed | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 005224f3
    FLD float ptr [EAX + 0x4]           ; 005224f5 | DAT_02f33590 | DAT_02f3359c
    FMUL float ptr [0x006616e0]         ; 005224f8 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 005224fe
    FLD float ptr [EAX + 0x8]           ; 00522501 | DAT_02f33594 | DAT_02f335a0
    FMUL float ptr [0x006616e0]         ; 00522504 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 0052250a
    MOV EAX,[0x006703ec]                ; 0052250d | g_CDemonRendererPtr2
    MOV EDX,dword ptr [ESP]             ; 00522512
    MOV EAX,dword ptr [EAX]             ; 00522515 | g_CDemonRendererInstance
    ADD ESI,0x4                         ; 00522517
    ADD EDX,0x4e00                      ; 0052251a
    MOV dword ptr [EAX + EBP*0x1 + 0x10],0xffffffff ; 00522520
    PUSH EDX                            ; 00522528
    MOV dword ptr [ESI + 0xfc],EDX      ; 00522529
    CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0 ; 0052252f
        ;   XREF to: 0050cda0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
    ADD ESP,0x4                         ; 00522534
    ADD EDI,0xc                         ; 00522537
    MOV EDX,dword ptr [ESP]             ; 0052253a
    ADD EBP,0x30                        ; 0052253d
    INC EDX                             ; 00522540
    MOV ECX,dword ptr [0x02f33588]      ; 00522541 | g_MirrorOutputVertexCount
    MOV dword ptr [ESP],EDX             ; 00522547
    CMP EDX,ECX                         ; 0052254a
    JL 0x005224e0                       ; 0052254c
        ;   XREF to: 005224e0 (CONDITIONAL_JUMP)  ; LAB_005224e0
    MOV EAX,EAX                         ; 0052254e
    MOV EAX,0x1                         ; 00522550
        ;   Label: LAB_00522550
    ADD ESP,0x4                         ; 00522555
    POP EBP                             ; 00522558
    POP EDI                             ; 00522559
    POP ESI                             ; 0052255a
    POP EBX                             ; 0052255b
    RET                                 ; 0052255c

