; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveTriangle * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414b1d
;   core_set.cpp_FUN_0053ab0e at 0053ab52
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046e160
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d880
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
    PUSH ESI                            ; 0046d881
    PUSH EDI                            ; 0046d882
    PUSH EBP                            ; 0046d883
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046d884
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046d888
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046d88c
    CMP EDI,-0x1                        ; 0046d890
    JNZ 0x0046d89a                      ; 0046d893
        ;   XREF to: 0046d89a (CONDITIONAL_JUMP)  ; LAB_0046d89a
    MOV EDI,0x2cd                       ; 0046d895
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046d89a
        ;   Label: LAB_0046d89a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046d89e
    JZ 0x0046d8d5                       ; 0046d8a2
        ;   XREF to: 0046d8d5 (CONDITIONAL_JUMP)  ; LAB_0046d8d5
    XOR EBX,EBX                         ; 0046d8a4
    TEST EBP,EBP                        ; 0046d8a6
    JLE 0x0046d8d0                      ; 0046d8a8
        ;   XREF to: 0046d8d0 (CONDITIONAL_JUMP)  ; LAB_0046d8d0
    PUSH EDI                            ; 0046d8aa
        ;   Label: LAB_0046d8aa
    PUSH ESI                            ; 0046d8ab
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046d8ac
    PUSH EAX                            ; 0046d8b0
    INC EBX                             ; 0046d8b1
    CALL engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046e160 ; 0046d8b2
        ;   XREF to: 0046e160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046e160(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
    ADD ESI,0x3c                        ; 0046d8b7
    ADD ESP,0xc                         ; 0046d8ba
    CMP EBX,EBP                         ; 0046d8bd
    JL 0x0046d8aa                       ; 0046d8bf
        ;   XREF to: 0046d8aa (CONDITIONAL_JUMP)  ; LAB_0046d8aa
    LEA EAX,[EAX]                       ; 0046d8c1
    LEA EDX,[EDX]                       ; 0046d8c7
    LEA EAX,[EAX]                       ; 0046d8cd
    POP EBP                             ; 0046d8d0
        ;   Label: LAB_0046d8d0
    POP EDI                             ; 0046d8d1
    POP ESI                             ; 0046d8d2
    POP EBX                             ; 0046d8d3
    RET                                 ; 0046d8d4
    PUSH EDI                            ; 0046d8d5
        ;   Label: LAB_0046d8d5
    PUSH 0x3c                           ; 0046d8d6
    PUSH EBP                            ; 0046d8d8
    PUSH ESI                            ; 0046d8d9
    PUSH EBX                            ; 0046d8da
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 ; 0046d8db
        ;   XREF to: 0046d960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 0046d8e0
    POP EBP                             ; 0046d8e3
    POP EDI                             ; 0046d8e4
    POP ESI                             ; 0046d8e5
    POP EBX                             ; 0046d8e6
    RET                                 ; 0046d8e7

