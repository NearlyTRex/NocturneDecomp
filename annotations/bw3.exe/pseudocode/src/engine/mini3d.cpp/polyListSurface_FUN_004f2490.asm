; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_polyListSurface_FUN_004f2490(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_mini3d.cpp_polyListD3DL_FUN_004ee1a0 at 004ee34b
;   engine_mini3d.cpp_polyListD3DTL_FUN_004ee5b0 at 004ee8ac
;   engine_mini3d.cpp_polyListL_FUN_004ee430 at 004ee55c
;   engine_mini3d.cpp_polyList_FUN_004edea0 at 004edfa1
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005c824d
;   TerminatedCString s_CMini3D_polyList_Too_man_005c8262
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c34
;   undefined4 DAT_01d76f64
;   undefined4 DAT_01d7a694
;   undefined4 DAT_01ed3198
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_mini3d.cpp_allocVertexList_FUN_004ede40
;   engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f2a10
;   engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0
;   engine_mini3d.cpp_transformVertexOrtho_FUN_004eec50
;   engine_mini3d.cpp_transformVertexSurface_FUN_004eeb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2490
        ;   Label: engine_mini3d.cpp_polyListSurface_FUN_004f2490
    PUSH ESI                            ; 004f2491
    PUSH EDI                            ; 004f2492
    PUSH EBP                            ; 004f2493
    SUB ESP,0x4                         ; 004f2494
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f2497
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f249b
    MOV EDX,dword ptr [0x01ed3198]      ; 004f249f | DAT_01ed3198
    MOV ECX,dword ptr [0x01d76c34]      ; 004f24a5 | DAT_01d76c34
    ADD EDX,EAX                         ; 004f24ab
    ADD ECX,EBP                         ; 004f24ad
    MOV dword ptr [0x01ed3198],EDX      ; 004f24af | DAT_01ed3198
    MOV dword ptr [0x01d76c34],ECX      ; 004f24b5 | DAT_01d76c34
    CALL engine_mini3d.cpp_allocVertexList_FUN_004ede40 ; 004f24bb
        ;   XREF to: 004ede40 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_allocVertexList_FUN_004ede40()
    CMP EBP,0x2710                      ; 004f24c0
    JG 0x004f2568                       ; 004f24c6
        ;   XREF to: 004f2568 (CONDITIONAL_JUMP)  ; LAB_004f2568
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f24cc
        ;   Label: LAB_004f24cc
    MOV EBX,dword ptr [0x01d76f64]      ; 004f24d0 | DAT_01d76f64
    XOR EDI,EDI                         ; 004f24d6
    MOV EAX,[0x01d7a694]                ; 004f24d8 | DAT_01d7a694
    MOV dword ptr [ESP],EDI             ; 004f24dd
    CMP EAX,0x1                         ; 004f24e0
    JNZ 0x004f2591                      ; 004f24e3
        ;   XREF to: 004f2591 (CONDITIONAL_JUMP)  ; LAB_004f2591
    TEST EBP,EBP                        ; 004f24e9
    JLE 0x004f2510                      ; 004f24eb
        ;   XREF to: 004f2510 (CONDITIONAL_JUMP)  ; LAB_004f2510
    PUSH EBX                            ; 004f24ed
        ;   Label: LAB_004f24ed
    PUSH ESI                            ; 004f24ee
    INC EDI                             ; 004f24ef
    CALL engine_mini3d.cpp_transformVertexSurface_FUN_004eeb40 ; 004f24f0
        ;   XREF to: 004eeb40 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_transformVertexSurface_FUN_004eeb40(CVector3f * point, float * out)
    ADD ESP,0x8                         ; 004f24f5
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f24f8
    MOV EDX,dword ptr [ESP]             ; 004f24fb
    ADD EBX,0x20                        ; 004f24fe
    OR EDX,EAX                          ; 004f2501
    ADD ESI,0x20                        ; 004f2503
    MOV dword ptr [ESP],EDX             ; 004f2506
    CMP EDI,EBP                         ; 004f2509
    JL 0x004f24ed                       ; 004f250b
        ;   XREF to: 004f24ed (CONDITIONAL_JUMP)  ; LAB_004f24ed
    LEA EAX,[EAX]                       ; 004f250d
    CMP dword ptr [ESP],0x0             ; 004f2510
        ;   Label: LAB_004f2510
    JNZ 0x004f25b3                      ; 004f2514
        ;   XREF to: 004f25b3 (CONDITIONAL_JUMP)  ; LAB_004f25b3
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f251a
    XOR EDI,EDI                         ; 004f251e
    TEST ESI,ESI                        ; 004f2520
    JLE 0x004f2560                      ; 004f2522
        ;   XREF to: 004f2560 (CONDITIONAL_JUMP)  ; LAB_004f2560
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f2524
    MOVZX EBP,word ptr [EBX + 0x4]      ; 004f2528
        ;   Label: LAB_004f2528
    MOV ESI,dword ptr [0x01d76f64]      ; 004f252c | DAT_01d76f64
    SHL EBP,0x5                         ; 004f2532
    ADD EBP,ESI                         ; 004f2535
    PUSH EBP                            ; 004f2537
    MOVZX EBP,word ptr [EBX + 0x2]      ; 004f2538
    SHL EBP,0x5                         ; 004f253c
    ADD EBP,ESI                         ; 004f253f
    PUSH EBP                            ; 004f2541
    MOVZX EBP,word ptr [EBX]            ; 004f2542
    SHL EBP,0x5                         ; 004f2545
    ADD ESI,EBP                         ; 004f2548
    PUSH ESI                            ; 004f254a
    CALL engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0 ; 004f254b
        ;   XREF to: 004f27a0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0(float * v0, float * v1, float * v2)
    ADD ESP,0xc                         ; 004f2550
    INC EDI                             ; 004f2553
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f2554
    ADD EBX,0x6                         ; 004f2558
    CMP EDI,EAX                         ; 004f255b
    JL 0x004f2528                       ; 004f255d
        ;   XREF to: 004f2528 (CONDITIONAL_JUMP)  ; LAB_004f2528
    NOP                                 ; 004f255f
    ADD ESP,0x4                         ; 004f2560
        ;   Label: LAB_004f2560
    POP EBP                             ; 004f2563
    POP EDI                             ; 004f2564
    POP ESI                             ; 004f2565
    POP EBX                             ; 004f2566
    RET                                 ; 004f2567
    PUSH EBP                            ; 004f2568
        ;   Label: LAB_004f2568
    MOV EBX,0x5c824d                    ; 004f2569 | = "..\\engine\\mini3d.cpp"
    MOV ESI,0x12de                      ; 004f256e
    PUSH 0x5c8262                       ; 004f2573 | = "CMini3D::polyList - Too many verticie..."
    MOV dword ptr [0x01d71de0],EBX      ; 004f2578 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f257e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f2584
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004f2589
    JMP 0x004f24cc                      ; 004f258c
        ;   XREF to: 004f24cc (UNCONDITIONAL_JUMP)  ; LAB_004f24cc
    TEST EBP,EBP                        ; 004f2591
        ;   Label: LAB_004f2591
    JLE 0x004f2510                      ; 004f2593
        ;   XREF to: 004f2510 (CONDITIONAL_JUMP)  ; LAB_004f2510
    PUSH EBX                            ; 004f2599
        ;   Label: LAB_004f2599
    PUSH ESI                            ; 004f259a
    INC EDI                             ; 004f259b
    CALL engine_mini3d.cpp_transformVertexOrtho_FUN_004eec50 ; 004f259c
        ;   XREF to: 004eec50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_transformVertexOrtho_FUN_004eec50(CVector3f * point, float * out)
    ADD EBX,0x20                        ; 004f25a1
    ADD ESP,0x8                         ; 004f25a4
    ADD ESI,0x20                        ; 004f25a7
    CMP EDI,EBP                         ; 004f25aa
    JL 0x004f2599                       ; 004f25ac
        ;   XREF to: 004f2599 (CONDITIONAL_JUMP)  ; LAB_004f2599
    JMP 0x004f2510                      ; 004f25ae
        ;   XREF to: 004f2510 (UNCONDITIONAL_JUMP)  ; LAB_004f2510
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f25b3
        ;   Label: LAB_004f25b3
    XOR EDI,EDI                         ; 004f25b7
    TEST EBX,EBX                        ; 004f25b9
    JLE 0x004f2560                      ; 004f25bb
        ;   XREF to: 004f2560 (CONDITIONAL_JUMP)  ; LAB_004f2560
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f25bd
    XOR ESI,ESI                         ; 004f25c1
        ;   Label: LAB_004f25c1
    MOV SI,word ptr [EBX + 0x4]         ; 004f25c3
    MOV EBP,ESI                         ; 004f25c7
    MOV ESI,dword ptr [0x01d76f64]      ; 004f25c9 | DAT_01d76f64
    SHL EBP,0x5                         ; 004f25cf
    ADD EBP,ESI                         ; 004f25d2
    PUSH EBP                            ; 004f25d4
    MOVZX EBP,word ptr [EBX + 0x2]      ; 004f25d5
    SHL EBP,0x5                         ; 004f25d9
    ADD EBP,ESI                         ; 004f25dc
    PUSH EBP                            ; 004f25de
    MOVZX EBP,word ptr [EBX]            ; 004f25df
    SHL EBP,0x5                         ; 004f25e2
    ADD ESI,EBP                         ; 004f25e5
    PUSH ESI                            ; 004f25e7
    CALL engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f2a10 ; 004f25e8
        ;   XREF to: 004f2a10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f2a10(float * v0, float * v1, float * v2)
    ADD ESP,0xc                         ; 004f25ed
    INC EDI                             ; 004f25f0
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f25f1
    ADD EBX,0x6                         ; 004f25f5
    CMP EDI,EBP                         ; 004f25f8
    JL 0x004f25c1                       ; 004f25fa
        ;   XREF to: 004f25c1 (CONDITIONAL_JUMP)  ; LAB_004f25c1
    ADD ESP,0x4                         ; 004f25fc
    POP EBP                             ; 004f25ff
    POP EDI                             ; 004f2600
    POP ESI                             ; 004f2601
    POP EBX                             ; 004f2602
    RET                                 ; 004f2603

