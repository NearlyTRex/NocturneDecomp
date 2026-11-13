; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveTriangle * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 at 00418f0d
;   core_set.cpp_FUN_00555180 at 005551c2
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004841a0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
    PUSH ESI                            ; 004841a1
    PUSH EDI                            ; 004841a2
    PUSH EBP                            ; 004841a3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004841a4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004841a8
    MOV EDI,dword ptr [ESP + 0x20]      ; 004841ac
    CMP EDI,-0x1                        ; 004841b0
    JNZ 0x004841ba                      ; 004841b3
        ;   XREF to: 004841ba (CONDITIONAL_JUMP)  ; LAB_004841ba
    MOV EDI,0x2cd                       ; 004841b5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004841ba
        ;   Label: LAB_004841ba
    CMP dword ptr [EBX + 0x1c],0x0      ; 004841be
    JZ 0x004841f5                       ; 004841c2
        ;   XREF to: 004841f5 (CONDITIONAL_JUMP)  ; LAB_004841f5
    XOR EBX,EBX                         ; 004841c4
    TEST EBP,EBP                        ; 004841c6
    JLE 0x004841f0                      ; 004841c8
        ;   XREF to: 004841f0 (CONDITIONAL_JUMP)  ; LAB_004841f0
    PUSH EDI                            ; 004841ca
        ;   Label: LAB_004841ca
    PUSH ESI                            ; 004841cb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004841cc
    PUSH EAX                            ; 004841d0
    INC EBX                             ; 004841d1
    CALL engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80 ; 004841d2
        ;   XREF to: 00484a80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
    ADD ESI,0x3c                        ; 004841d7
    ADD ESP,0xc                         ; 004841da
    CMP EBX,EBP                         ; 004841dd
    JL 0x004841ca                       ; 004841df
        ;   XREF to: 004841ca (CONDITIONAL_JUMP)  ; LAB_004841ca
    LEA EAX,[EAX]                       ; 004841e1
    LEA EDX,[EDX]                       ; 004841e7
    LEA EAX,[EAX]                       ; 004841ed
    POP EBP                             ; 004841f0
        ;   Label: LAB_004841f0
    POP EDI                             ; 004841f1
    POP ESI                             ; 004841f2
    POP EBX                             ; 004841f3
    RET                                 ; 004841f4
    PUSH EDI                            ; 004841f5
        ;   Label: LAB_004841f5
    PUSH 0x3c                           ; 004841f6
    PUSH EBP                            ; 004841f8
    PUSH ESI                            ; 004841f9
    PUSH EBX                            ; 004841fa
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280 ; 004841fb
        ;   XREF to: 00484280 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 00484200
    POP EBP                             ; 00484203
    POP EDI                             ; 00484204
    POP ESI                             ; 00484205
    POP EBX                             ; 00484206
    RET                                 ; 00484207

