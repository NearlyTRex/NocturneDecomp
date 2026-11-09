; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[1]:
;   core_set.cpp_FUN_0053ab80 at 0053ac3e
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d8f0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0
    PUSH ESI                            ; 0046d8f1
    PUSH EDI                            ; 0046d8f2
    PUSH EBP                            ; 0046d8f3
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046d8f4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046d8f8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046d8fc
    CMP EDI,-0x1                        ; 0046d900
    JNZ 0x0046d90a                      ; 0046d903
        ;   XREF to: 0046d90a (CONDITIONAL_JUMP)  ; LAB_0046d90a
    MOV EDI,0x2cd                       ; 0046d905
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046d90a
        ;   Label: LAB_0046d90a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046d90e
    JZ 0x0046d945                       ; 0046d912
        ;   XREF to: 0046d945 (CONDITIONAL_JUMP)  ; LAB_0046d945
    XOR EBX,EBX                         ; 0046d914
    TEST EBP,EBP                        ; 0046d916
    JLE 0x0046d940                      ; 0046d918
        ;   XREF to: 0046d940 (CONDITIONAL_JUMP)  ; LAB_0046d940
    PUSH EDI                            ; 0046d91a
        ;   Label: LAB_0046d91a
    PUSH ESI                            ; 0046d91b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046d91c
    PUSH EAX                            ; 0046d920
    INC EBX                             ; 0046d921
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200 ; 0046d922
        ;   XREF to: 0046e200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESI,0x48                        ; 0046d927
    ADD ESP,0xc                         ; 0046d92a
    CMP EBX,EBP                         ; 0046d92d
    JL 0x0046d91a                       ; 0046d92f
        ;   XREF to: 0046d91a (CONDITIONAL_JUMP)  ; LAB_0046d91a
    LEA EAX,[EAX]                       ; 0046d931
    LEA EDX,[EDX]                       ; 0046d937
    LEA EAX,[EAX]                       ; 0046d93d
    POP EBP                             ; 0046d940
        ;   Label: LAB_0046d940
    POP EDI                             ; 0046d941
    POP ESI                             ; 0046d942
    POP EBX                             ; 0046d943
    RET                                 ; 0046d944
    PUSH EDI                            ; 0046d945
        ;   Label: LAB_0046d945
    PUSH 0x48                           ; 0046d946
    PUSH EBP                            ; 0046d948
    PUSH ESI                            ; 0046d949
    PUSH EBX                            ; 0046d94a
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 ; 0046d94b
        ;   XREF to: 0046d960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 0046d950
    POP EBP                             ; 0046d953
    POP EDI                             ; 0046d954
    POP ESI                             ; 0046d955
    POP EBX                             ; 0046d956
    RET                                 ; 0046d957

