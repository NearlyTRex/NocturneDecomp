; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_00461440(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0 at 0050de8e
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461440
        ;   Label: engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440
    PUSH ESI                            ; 00461441
    PUSH EDI                            ; 00461442
    PUSH EBP                            ; 00461443
    MOV ESI,dword ptr [ESP + 0x18]      ; 00461444
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00461448
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046144c
    CMP EDI,-0x1                        ; 00461450
    JNZ 0x0046145a                      ; 00461453
        ;   XREF to: 0046145a (CONDITIONAL_JUMP)  ; LAB_0046145a
    MOV EDI,0x2cd                       ; 00461455
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046145a
        ;   Label: LAB_0046145a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046145e
    JZ 0x00461495                       ; 00461462
        ;   XREF to: 00461495 (CONDITIONAL_JUMP)  ; LAB_00461495
    XOR EBX,EBX                         ; 00461464
    TEST EBP,EBP                        ; 00461466
    JLE 0x00461490                      ; 00461468
        ;   XREF to: 00461490 (CONDITIONAL_JUMP)  ; LAB_00461490
    PUSH EDI                            ; 0046146a
        ;   Label: LAB_0046146a
    PUSH ESI                            ; 0046146b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046146c
    PUSH EAX                            ; 00461470
    INC EBX                             ; 00461471
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0 ; 00461472
        ;   XREF to: 00461ad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESI,0x48                        ; 00461477
    ADD ESP,0xc                         ; 0046147a
    CMP EBX,EBP                         ; 0046147d
    JL 0x0046146a                       ; 0046147f
        ;   XREF to: 0046146a (CONDITIONAL_JUMP)  ; LAB_0046146a
    LEA EAX,[EAX]                       ; 00461481
    LEA EDX,[EDX]                       ; 00461487
    LEA EAX,[EAX]                       ; 0046148d
    POP EBP                             ; 00461490
        ;   Label: LAB_00461490
    POP EDI                             ; 00461491
    POP ESI                             ; 00461492
    POP EBX                             ; 00461493
    RET                                 ; 00461494
    PUSH EDI                            ; 00461495
        ;   Label: LAB_00461495
    PUSH 0x48                           ; 00461496
    PUSH EBP                            ; 00461498
    PUSH ESI                            ; 00461499
    PUSH EBX                            ; 0046149a
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 ; 0046149b
        ;   XREF to: 004614b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 004614a0
    POP EBP                             ; 004614a3
    POP EDI                             ; 004614a4
    POP ESI                             ; 004614a5
    POP EBX                             ; 004614a6
    RET                                 ; 004614a7

