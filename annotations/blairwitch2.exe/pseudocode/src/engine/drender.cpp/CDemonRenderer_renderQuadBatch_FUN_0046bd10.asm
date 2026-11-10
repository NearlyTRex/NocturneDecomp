; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0046bd10(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40 at 00533ffe
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bd10
        ;   Label: engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046bd10
    PUSH ESI                            ; 0046bd11
    PUSH EDI                            ; 0046bd12
    PUSH EBP                            ; 0046bd13
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046bd14
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046bd18
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046bd1c
    CMP EDI,-0x1                        ; 0046bd20
    JNZ 0x0046bd2a                      ; 0046bd23
        ;   XREF to: 0046bd2a (CONDITIONAL_JUMP)  ; LAB_0046bd2a
    MOV EDI,0x2cd                       ; 0046bd25
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046bd2a
        ;   Label: LAB_0046bd2a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046bd2e
    JZ 0x0046bd65                       ; 0046bd32
        ;   XREF to: 0046bd65 (CONDITIONAL_JUMP)  ; LAB_0046bd65
    XOR EBX,EBX                         ; 0046bd34
    TEST EBP,EBP                        ; 0046bd36
    JLE 0x0046bd60                      ; 0046bd38
        ;   XREF to: 0046bd60 (CONDITIONAL_JUMP)  ; LAB_0046bd60
    PUSH EDI                            ; 0046bd3a
        ;   Label: LAB_0046bd3a
    PUSH ESI                            ; 0046bd3b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bd3c
    PUSH EAX                            ; 0046bd40
    INC EBX                             ; 0046bd41
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620 ; 0046bd42
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESI,0x48                        ; 0046bd47
    ADD ESP,0xc                         ; 0046bd4a
    CMP EBX,EBP                         ; 0046bd4d
    JL 0x0046bd3a                       ; 0046bd4f
        ;   XREF to: 0046bd3a (CONDITIONAL_JUMP)  ; LAB_0046bd3a
    LEA EAX,[EAX]                       ; 0046bd51
    LEA EDX,[EDX]                       ; 0046bd57
    LEA EAX,[EAX]                       ; 0046bd5d
    POP EBP                             ; 0046bd60
        ;   Label: LAB_0046bd60
    POP EDI                             ; 0046bd61
    POP ESI                             ; 0046bd62
    POP EBX                             ; 0046bd63
    RET                                 ; 0046bd64
    PUSH EDI                            ; 0046bd65
        ;   Label: LAB_0046bd65
    PUSH 0x48                           ; 0046bd66
    PUSH EBP                            ; 0046bd68
    PUSH ESI                            ; 0046bd69
    PUSH EBX                            ; 0046bd6a
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80 ; 0046bd6b
        ;   XREF to: 0046bd80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 0046bd70
    POP EBP                             ; 0046bd73
    POP EDI                             ; 0046bd74
    POP ESI                             ; 0046bd75
    POP EBX                             ; 0046bd76
    RET                                 ; 0046bd77

