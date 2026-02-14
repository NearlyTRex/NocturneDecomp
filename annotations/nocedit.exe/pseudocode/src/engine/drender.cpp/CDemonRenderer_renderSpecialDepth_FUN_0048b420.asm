; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_water.cpp_CWater_render_FUN_005ea320 at 005ea801
;
; Referenced Globals:
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b420
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
    PUSH EBP                            ; 0048b421
    SUB ESP,0x4                         ; 0048b422
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048b425
    CMP dword ptr [EBX + 0xc],0x0       ; 0048b429
    JNZ 0x0048b4b1                      ; 0048b42d
        ;   XREF to: 0048b4b1 (CONDITIONAL_JUMP)  ; LAB_0048b4b1
    PUSH EDI                            ; 0048b433
        ;   Label: LAB_0048b433
    PUSH ESI                            ; 0048b434
    MOV ECX,dword ptr [EBX + 0x4]       ; 0048b435
    TEST ECX,ECX                        ; 0048b438
    JZ 0x0048b4ca                       ; 0048b43a
        ;   XREF to: 0048b4ca (CONDITIONAL_JUMP)  ; LAB_0048b4ca
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048b440
    MOV EDI,dword ptr [EDX + 0x4]       ; 0048b444
    XOR EAX,EAX                         ; 0048b447
    TEST EDI,EDI                        ; 0048b449
    JLE 0x0048b470                      ; 0048b44b
        ;   XREF to: 0048b470 (CONDITIONAL_JUMP)  ; LAB_0048b470
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0048b44d
    XOR EDX,EDX                         ; 0048b451
    MOV ESI,dword ptr [ECX + 0x18]      ; 0048b453
        ;   Label: LAB_0048b453
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048b456 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b45c
    ADD EDX,0x4                         ; 0048b460
    INC EAX                             ; 0048b463
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b464
    ADD ECX,0xc                         ; 0048b467
    CMP EAX,EBP                         ; 0048b46a
    JL 0x0048b453                       ; 0048b46c
        ;   XREF to: 0048b453 (CONDITIONAL_JUMP)  ; LAB_0048b453
    MOV EAX,EAX                         ; 0048b46e
    CMP dword ptr [EBX + 0x4],0x0       ; 0048b470
        ;   Label: LAB_0048b470
    JZ 0x0048b523                       ; 0048b474
        ;   XREF to: 0048b523 (CONDITIONAL_JUMP)  ; LAB_0048b523
    XOR EBP,EBP                         ; 0048b47a
    MOV EDI,0x49072f                    ; 0048b47c
    MOV dword ptr [0x02d052a0],EBP      ; 0048b481 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0048b487 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],EDI      ; 0048b48d | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b493
        ;   Label: LAB_0048b493
    PUSH 0x2c6d5ac                      ; 0048b497 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048b49c
    PUSH EDX                            ; 0048b49f
    PUSH EBX                            ; 0048b4a0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b4a1
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b4a6
    POP ESI                             ; 0048b4a9
    POP EDI                             ; 0048b4aa
    ADD ESP,0x4                         ; 0048b4ab
        ;   Label: LAB_0048b4ab
    POP EBP                             ; 0048b4ae
    POP EBX                             ; 0048b4af
    RET                                 ; 0048b4b0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048b4b1
        ;   Label: LAB_0048b4b1
    ADD EAX,0x8                         ; 0048b4b5
    PUSH EAX                            ; 0048b4b8
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b4b9
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048b4be
    TEST EAX,EAX                        ; 0048b4c1
    JZ 0x0048b4ab                       ; 0048b4c3
        ;   XREF to: 0048b4ab (CONDITIONAL_JUMP)  ; LAB_0048b4ab
    JMP 0x0048b433                      ; 0048b4c5
        ;   XREF to: 0048b433 (UNCONDITIONAL_JUMP)  ; LAB_0048b433
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b4ca
        ;   Label: LAB_0048b4ca
    CMP dword ptr [EAX + 0x4],0x0       ; 0048b4ce
    JLE 0x0048b470                      ; 0048b4d2
        ;   XREF to: 0048b470 (CONDITIONAL_JUMP)  ; LAB_0048b470
    XOR EDX,EDX                         ; 0048b4d4
    MOV EDI,dword ptr [EBX + 0x20]      ; 0048b4d6
        ;   Label: LAB_0048b4d6
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048b4d9
    TEST EDI,EDI                        ; 0048b4dc
    JZ 0x0048b4fe                       ; 0048b4de
        ;   XREF to: 0048b4fe (CONDITIONAL_JUMP)  ; LAB_0048b4fe
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048b4e0 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048b4e0
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b4e6
    ADD EAX,0xc                         ; 0048b4ea
    INC ECX                             ; 0048b4ed
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b4ee
    ADD EDX,0x4                         ; 0048b4f1
    CMP ECX,EBP                         ; 0048b4f4
    JGE 0x0048b470                      ; 0048b4f6
        ;   XREF to: 0048b470 (CONDITIONAL_JUMP)  ; LAB_0048b470
    JMP 0x0048b4d6                      ; 0048b4fc
        ;   XREF to: 0048b4d6 (UNCONDITIONAL_JUMP)  ; LAB_0048b4d6
    IMUL EDI,ESI,0x30                   ; 0048b4fe
        ;   Label: LAB_0048b4fe
    MOV dword ptr [ESP + 0x8],EDI       ; 0048b501
    MOV EBP,dword ptr [ESP + 0x8]       ; 0048b505
    MOV EDI,dword ptr [EBX]             ; 0048b509
    ADD EBP,EDI                         ; 0048b50b
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0048b50d
    MOV dword ptr [EBP + 0x18],EDI      ; 0048b510
    MOV EDI,dword ptr [ESP + 0x8]       ; 0048b513
    MOV EBP,dword ptr [EBX]             ; 0048b517
    ADD EBP,EDI                         ; 0048b519
    MOV EDI,dword ptr [EAX + 0x20]      ; 0048b51b
    MOV dword ptr [EBP + 0x1c],EDI      ; 0048b51e
    JMP 0x0048b4e0                      ; 0048b521
        ;   XREF to: 0048b4e0 (UNCONDITIONAL_JUMP)  ; LAB_0048b4e0
    MOV ECX,0x41                        ; 0048b523
        ;   Label: LAB_0048b523
    MOV ESI,0x6                         ; 0048b528
    MOV EDX,0x49169d                    ; 0048b52d
    MOV dword ptr [0x02d052a0],ECX      ; 0048b532 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ESI      ; 0048b538 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],EDX      ; 0048b53e | g_ScanlineRenderFunc
    JMP 0x0048b493                      ; 0048b544
        ;   XREF to: 0048b493 (UNCONDITIONAL_JUMP)  ; LAB_0048b493

