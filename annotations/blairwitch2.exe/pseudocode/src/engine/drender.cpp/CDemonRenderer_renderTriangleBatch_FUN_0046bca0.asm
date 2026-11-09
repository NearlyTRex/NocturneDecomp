; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveTriangle * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[2]:
;   core_bodypart.cpp_FUN_004159e0 at 00415a9d
;   core_set.cpp_FUN_00533ece at 00533f12
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bca0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0
    PUSH ESI                            ; 0046bca1
    PUSH EDI                            ; 0046bca2
    PUSH EBP                            ; 0046bca3
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046bca4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046bca8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0046bcac
    CMP EDI,-0x1                        ; 0046bcb0
    JNZ 0x0046bcba                      ; 0046bcb3
        ;   XREF to: 0046bcba (CONDITIONAL_JUMP)  ; LAB_0046bcba
    MOV EDI,0x2cd                       ; 0046bcb5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046bcba
        ;   Label: LAB_0046bcba
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046bcbe
    JZ 0x0046bcf5                       ; 0046bcc2
        ;   XREF to: 0046bcf5 (CONDITIONAL_JUMP)  ; LAB_0046bcf5
    XOR EBX,EBX                         ; 0046bcc4
    TEST EBP,EBP                        ; 0046bcc6
    JLE 0x0046bcf0                      ; 0046bcc8
        ;   XREF to: 0046bcf0 (CONDITIONAL_JUMP)  ; LAB_0046bcf0
    PUSH EDI                            ; 0046bcca
        ;   Label: LAB_0046bcca
    PUSH ESI                            ; 0046bccb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bccc
    PUSH EAX                            ; 0046bcd0
    INC EBX                             ; 0046bcd1
    CALL engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580 ; 0046bcd2
        ;   XREF to: 0046c580 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
    ADD ESI,0x3c                        ; 0046bcd7
    ADD ESP,0xc                         ; 0046bcda
    CMP EBX,EBP                         ; 0046bcdd
    JL 0x0046bcca                       ; 0046bcdf
        ;   XREF to: 0046bcca (CONDITIONAL_JUMP)  ; LAB_0046bcca
    LEA EAX,[EAX]                       ; 0046bce1
    LEA EDX,[EDX]                       ; 0046bce7
    LEA EAX,[EAX]                       ; 0046bced
    POP EBP                             ; 0046bcf0
        ;   Label: LAB_0046bcf0
    POP EDI                             ; 0046bcf1
    POP ESI                             ; 0046bcf2
    POP EBX                             ; 0046bcf3
    RET                                 ; 0046bcf4
    PUSH EDI                            ; 0046bcf5
        ;   Label: LAB_0046bcf5
    PUSH 0x3c                           ; 0046bcf6
    PUSH EBP                            ; 0046bcf8
    PUSH ESI                            ; 0046bcf9
    PUSH EBX                            ; 0046bcfa
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80 ; 0046bcfb
        ;   XREF to: 0046bd80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 0046bd00
    POP EBP                             ; 0046bd03
    POP EDI                             ; 0046bd04
    POP ESI                             ; 0046bd05
    POP EBX                             ; 0046bd06
    RET                                 ; 0046bd07

