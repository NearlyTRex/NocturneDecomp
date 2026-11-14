; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_00484280(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   primitive_stride
; int              Stack[0x14]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00484210 at 0048426b
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0 at 004841fb
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005db3f4
;   TerminatedCString s_CDemonRenderer_demonGZFa_005db40a
;   undefined4 DAT_00612568
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dpart.cpp_FUN_0047a480
;   core_dpart.cpp_FUN_0047ab00
;   core_main.c_FUN_005030e0
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_0053de20
;   engine_special.cpp_drawPolyList_FUN_005823a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484280
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280
    PUSH ESI                            ; 00484281
    PUSH EDI                            ; 00484282
    PUSH EBP                            ; 00484283
    SUB ESP,0x18                        ; 00484284
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00484287
    MOV EBX,dword ptr [ESP + 0x30]      ; 0048428b
    MOV EDI,dword ptr [ESP + 0x34]      ; 0048428f
    MOV EDX,dword ptr [ESI + 0x10]      ; 00484293
    TEST EDX,EDX                        ; 00484296
    JZ 0x004842c8                       ; 00484298
        ;   XREF to: 004842c8 (CONDITIONAL_JUMP)  ; LAB_004842c8
    XOR EBP,EBP                         ; 0048429a
        ;   Label: LAB_0048429a
    TEST EDI,EDI                        ; 0048429c
    JLE 0x004842c0                      ; 0048429e
        ;   XREF to: 004842c0 (CONDITIONAL_JUMP)  ; LAB_004842c0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004842a0
        ;   Label: LAB_004842a0
    PUSH EAX                            ; 004842a4
    PUSH EBX                            ; 004842a5
    PUSH ESI                            ; 004842a6
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 004842a7
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004842ac
    MOV EDX,dword ptr [ESP + 0x38]      ; 004842af
    INC EBP                             ; 004842b3
    ADD EBX,EDX                         ; 004842b4
    CMP EBP,EDI                         ; 004842b6
    JL 0x004842a0                       ; 004842b8
        ;   XREF to: 004842a0 (CONDITIONAL_JUMP)  ; LAB_004842a0
    LEA EAX,[EAX]                       ; 004842ba
    ADD ESP,0x18                        ; 004842c0
        ;   Label: LAB_004842c0
    POP EBP                             ; 004842c3
    POP EDI                             ; 004842c4
    POP ESI                             ; 004842c5
    POP EBX                             ; 004842c6
    RET                                 ; 004842c7
    CMP dword ptr [ESI + 0xc],0x0       ; 004842c8
        ;   Label: LAB_004842c8
    JNZ 0x0048429a                      ; 004842cc
        ;   XREF to: 0048429a (CONDITIONAL_JUMP)  ; LAB_0048429a
    CMP dword ptr [0x00713a7c],0x0      ; 004842ce | DAT_00713a7c
    JZ 0x0048429a                       ; 004842d5
        ;   XREF to: 0048429a (CONDITIONAL_JUMP)  ; LAB_0048429a
    CMP dword ptr [ESI + 0x4],0x0       ; 004842d7
    JZ 0x0048433b                       ; 004842db
        ;   XREF to: 0048433b (CONDITIONAL_JUMP)  ; LAB_0048433b
    MOV ESI,0x486e26                    ; 004842dd
    MOV dword ptr [0x01c51d14],EDX      ; 004842e2 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 004842e8 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ESI      ; 004842ee | DAT_01c4f02c
    TEST EDI,EDI                        ; 004842f4
    JLE 0x004842c0                      ; 004842f6
        ;   XREF to: 004842c0 (CONDITIONAL_JUMP)  ; LAB_004842c0
    MOV ESI,dword ptr [ESP + 0x38]      ; 004842f8
    MOV EAX,dword ptr [EBX + 0x18]      ; 004842fc
        ;   Label: LAB_004842fc
    MOV dword ptr [ESP],EAX             ; 004842ff
    MOV EAX,dword ptr [EBX + 0x24]      ; 00484302
    MOV dword ptr [ESP + 0x4],EAX       ; 00484305
    MOV EAX,dword ptr [EBX + 0x30]      ; 00484309
    MOV dword ptr [ESP + 0x8],EAX       ; 0048430c
    MOV EBP,dword ptr [EBX + 0x4]       ; 00484310
    MOV EDX,EBX                         ; 00484313
    CMP EBP,0x4                         ; 00484315
    JNZ 0x00484321                      ; 00484318
        ;   XREF to: 00484321 (CONDITIONAL_JUMP)  ; LAB_00484321
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0048431a
    MOV dword ptr [ESP + 0xc],EAX       ; 0048431d
    MOV ECX,dword ptr [EDX + 0x4]       ; 00484321
        ;   Label: LAB_00484321
    PUSH ECX                            ; 00484324
    LEA EAX,[ESP + 0x4]                 ; 00484325
    PUSH EAX                            ; 00484329
    DEC EDI                             ; 0048432a
    ADD EBX,ESI                         ; 0048432b
    CALL core_dpart.cpp_FUN_0047ab00    ; 0048432d
        ;   XREF to: 0047ab00 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047ab00(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00484332
    TEST EDI,EDI                        ; 00484335
    JLE 0x004842c0                      ; 00484337
        ;   XREF to: 004842c0 (CONDITIONAL_JUMP)  ; LAB_004842c0
    JMP 0x004842fc                      ; 00484339
        ;   XREF to: 004842fc (UNCONDITIONAL_JUMP)  ; LAB_004842fc
    CMP dword ptr [0x0061b4a0],0x20     ; 0048433b | DAT_0061b4a0
        ;   Label: LAB_0048433b
    JNZ 0x00484440                      ; 00484342
        ;   XREF to: 00484440 (CONDITIONAL_JUMP)  ; LAB_00484440
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00484348 | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00484352
        ;   Label: LAB_00484352
    MOV [0x01c51d14],EAX                ; 00484356 | DAT_01c51d14
    MOV EAX,0x6                         ; 0048435b
    MOV EDX,dword ptr [0x01c50948]      ; 00484360 | DAT_01c50948
    MOV [0x01c51d18],EAX                ; 00484366 | DAT_01c51d18
    TEST EDX,EDX                        ; 0048436b
    JNZ 0x0048444f                      ; 0048436d
        ;   XREF to: 0048444f (CONDITIONAL_JUMP)  ; LAB_0048444f
    TEST EDI,EDI                        ; 00484373
        ;   Label: LAB_00484373
    JLE 0x004842c0                      ; 00484375
        ;   XREF to: 004842c0 (CONDITIONAL_JUMP)  ; LAB_004842c0
    MOV EAX,dword ptr [EBX + 0x18]      ; 0048437b
    MOV dword ptr [ESP],EAX             ; 0048437e
    MOV EAX,dword ptr [EBX + 0x24]      ; 00484381
    MOV dword ptr [ESP + 0x4],EAX       ; 00484384
    MOV EAX,dword ptr [EBX + 0x30]      ; 00484388
    MOV dword ptr [ESP + 0x8],EAX       ; 0048438b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0048438f
    MOV EDX,EBX                         ; 00484392
    CMP ECX,0x4                         ; 00484394
    JZ 0x004844e2                       ; 00484397
        ;   XREF to: 004844e2 (CONDITIONAL_JUMP)  ; LAB_004844e2
    CMP dword ptr [ESI + 0x20],0x0      ; 0048439d
        ;   Label: LAB_0048439d
    JNZ 0x00484423                      ; 004843a1
        ;   XREF to: 00484423 (CONDITIONAL_JUMP)  ; LAB_00484423
    IMUL EAX,dword ptr [ESP],0x30       ; 004843a7
    MOV EBP,dword ptr [ESI]             ; 004843ab
    ADD EAX,EBP                         ; 004843ad
    MOV EBP,dword ptr [EDX + 0x1c]      ; 004843af
    MOV dword ptr [EAX + 0x18],EBP      ; 004843b2
    IMUL EAX,dword ptr [ESP],0x30       ; 004843b5
    MOV EBP,dword ptr [ESI]             ; 004843b9
    ADD EBP,EAX                         ; 004843bb
    MOV EAX,dword ptr [EDX + 0x20]      ; 004843bd
    MOV dword ptr [EBP + 0x1c],EAX      ; 004843c0
    IMUL EAX,dword ptr [ESP + 0x4],0x30 ; 004843c3
    MOV EBP,dword ptr [ESI]             ; 004843c8
    ADD EBP,EAX                         ; 004843ca
    MOV EAX,dword ptr [EDX + 0x28]      ; 004843cc
    MOV dword ptr [EBP + 0x18],EAX      ; 004843cf
    IMUL EBP,dword ptr [ESP + 0x4],0x30 ; 004843d2
    MOV EAX,dword ptr [ESI]             ; 004843d7
    ADD EBP,EAX                         ; 004843d9
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004843db
    MOV dword ptr [EBP + 0x1c],EAX      ; 004843de
    IMUL EAX,dword ptr [ESP + 0x8],0x30 ; 004843e1
    MOV EBP,dword ptr [ESI]             ; 004843e6
    ADD EBP,EAX                         ; 004843e8
    MOV EAX,dword ptr [EDX + 0x34]      ; 004843ea
    MOV dword ptr [EBP + 0x18],EAX      ; 004843ed
    IMUL EBP,dword ptr [ESP + 0x8],0x30 ; 004843f0
    MOV EAX,dword ptr [ESI]             ; 004843f5
    ADD EBP,EAX                         ; 004843f7
    MOV EAX,dword ptr [EDX + 0x38]      ; 004843f9
    MOV dword ptr [EBP + 0x1c],EAX      ; 004843fc
    CMP dword ptr [EDX + 0x4],0x4       ; 004843ff
    JNZ 0x00484423                      ; 00484403
        ;   XREF to: 00484423 (CONDITIONAL_JUMP)  ; LAB_00484423
    IMUL EAX,dword ptr [ESP + 0xc],0x30 ; 00484405
    MOV EBP,dword ptr [ESI]             ; 0048440a
    ADD EBP,EAX                         ; 0048440c
    MOV EAX,dword ptr [EDX + 0x40]      ; 0048440e
    MOV dword ptr [EBP + 0x18],EAX      ; 00484411
    IMUL EBP,dword ptr [ESP + 0xc],0x30 ; 00484414
    MOV EAX,dword ptr [ESI]             ; 00484419
    ADD EBP,EAX                         ; 0048441b
    MOV EAX,dword ptr [EDX + 0x44]      ; 0048441d
    MOV dword ptr [EBP + 0x1c],EAX      ; 00484420
    MOV ECX,dword ptr [EDX + 0x4]       ; 00484423
        ;   Label: LAB_00484423
    PUSH ECX                            ; 00484426
    LEA EAX,[ESP + 0x4]                 ; 00484427
    PUSH EAX                            ; 0048442b
    CALL core_dpart.cpp_FUN_0047a480    ; 0048442c
        ;   XREF to: 0047a480 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047a480(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00484431
    MOV EBP,dword ptr [ESP + 0x38]      ; 00484434
    DEC EDI                             ; 00484438
    ADD EBX,EBP                         ; 00484439
    JMP 0x00484373                      ; 0048443b
        ;   XREF to: 00484373 (UNCONDITIONAL_JUMP)  ; LAB_00484373
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00484440 | DAT_01c4f02c
        ;   Label: LAB_00484440
    JMP 0x00484352                      ; 0048444a
        ;   XREF to: 00484352 (UNCONDITIONAL_JUMP)  ; LAB_00484352
    XOR EBP,EBP                         ; 0048444f
        ;   Label: LAB_0048444f
    MOV dword ptr [ESP + 0x14],EBP      ; 00484451
    TEST EDI,EDI                        ; 00484455
    JLE 0x004844ba                      ; 00484457
        ;   XREF to: 004844ba (CONDITIONAL_JUMP)  ; LAB_004844ba
    MOV dword ptr [ESP + 0x10],EBP      ; 00484459
    PUSH EBX                            ; 0048445d
        ;   Label: LAB_0048445d
    CALL engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_0053de20 ; 0048445e
        ;   XREF to: 0053de20 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_0053de20(SMRGLPrimitiveTriangle * triangle)
    ADD ESP,0x4                         ; 00484463
    TEST EAX,EAX                        ; 00484466
    JZ 0x004844a7                       ; 00484468
        ;   XREF to: 004844a7 (CONDITIONAL_JUMP)  ; LAB_004844a7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048446a
    INC EBP                             ; 0048446e
    LEA EDX,[EAX + 0x4]                 ; 0048446f
    MOV dword ptr [EAX + 0x612568],EBX  ; 00484472 | DAT_00612568
    MOV dword ptr [ESP + 0x10],EDX      ; 00484478
    CMP EBP,0x7d0                       ; 0048447c
    JL 0x004844a7                       ; 00484482
        ;   XREF to: 004844a7 (CONDITIONAL_JUMP)  ; LAB_004844a7
    PUSH EBP                            ; 00484484
    MOV ECX,0x5db3f4                    ; 00484485 | = "..\\engine\\drender.cpp"
    MOV EAX,0x9b6                       ; 0048448a
    PUSH 0x5db40a                       ; 0048448f | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01d1d400],ECX      ; 00484494 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0048449a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048449f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004844a4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004844a7
        ;   Label: LAB_004844a7
    MOV EAX,dword ptr [ESP + 0x38]      ; 004844ab
    INC EDX                             ; 004844af
    ADD EBX,EAX                         ; 004844b0
    MOV dword ptr [ESP + 0x14],EDX      ; 004844b2
    CMP EDI,EDX                         ; 004844b6
    JG 0x0048445d                       ; 004844b8
        ;   XREF to: 0048445d (CONDITIONAL_JUMP)  ; LAB_0048445d
    TEST EBP,EBP                        ; 004844ba
        ;   Label: LAB_004844ba
    JLE 0x004842c0                      ; 004844bc
        ;   XREF to: 004842c0 (CONDITIONAL_JUMP)  ; LAB_004842c0
    MOV EBX,dword ptr [0x01c51d14]      ; 004844c2 | DAT_01c51d14
    PUSH EBX                            ; 004844c8
    PUSH EBP                            ; 004844c9
    PUSH 0x612568                       ; 004844ca | DAT_00612568
    MOV EDI,dword ptr [ESI]             ; 004844cf
    PUSH EDI                            ; 004844d1
    CALL engine_special.cpp_drawPolyList_FUN_005823a0 ; 004844d2
        ;   XREF to: 005823a0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_005823a0(SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 004844d7
    ADD ESP,0x18                        ; 004844da
    POP EBP                             ; 004844dd
    POP EDI                             ; 004844de
    POP ESI                             ; 004844df
    POP EBX                             ; 004844e0
    RET                                 ; 004844e1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004844e2
        ;   Label: LAB_004844e2
    MOV dword ptr [ESP + 0xc],EAX       ; 004844e5
    JMP 0x0048439d                      ; 004844e9
        ;   XREF to: 0048439d (UNCONDITIONAL_JUMP)  ; LAB_0048439d

