; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_00484210(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0 at 005552ae
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484210
        ;   Label: engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00484210
    PUSH ESI                            ; 00484211
    PUSH EDI                            ; 00484212
    PUSH EBP                            ; 00484213
    MOV ESI,dword ptr [ESP + 0x18]      ; 00484214
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00484218
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048421c
    CMP EDI,-0x1                        ; 00484220
    JNZ 0x0048422a                      ; 00484223
        ;   XREF to: 0048422a (CONDITIONAL_JUMP)  ; LAB_0048422a
    MOV EDI,0x2cd                       ; 00484225
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048422a
        ;   Label: LAB_0048422a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0048422e
    JZ 0x00484265                       ; 00484232
        ;   XREF to: 00484265 (CONDITIONAL_JUMP)  ; LAB_00484265
    XOR EBX,EBX                         ; 00484234
    TEST EBP,EBP                        ; 00484236
    JLE 0x00484260                      ; 00484238
        ;   XREF to: 00484260 (CONDITIONAL_JUMP)  ; LAB_00484260
    PUSH EDI                            ; 0048423a
        ;   Label: LAB_0048423a
    PUSH ESI                            ; 0048423b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048423c
    PUSH EAX                            ; 00484240
    INC EBX                             ; 00484241
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20 ; 00484242
        ;   XREF to: 00484b20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESI,0x48                        ; 00484247
    ADD ESP,0xc                         ; 0048424a
    CMP EBX,EBP                         ; 0048424d
    JL 0x0048423a                       ; 0048424f
        ;   XREF to: 0048423a (CONDITIONAL_JUMP)  ; LAB_0048423a
    LEA EAX,[EAX]                       ; 00484251
    LEA EDX,[EDX]                       ; 00484257
    LEA EAX,[EAX]                       ; 0048425d
    POP EBP                             ; 00484260
        ;   Label: LAB_00484260
    POP EDI                             ; 00484261
    POP ESI                             ; 00484262
    POP EBX                             ; 00484263
    RET                                 ; 00484264
    PUSH EDI                            ; 00484265
        ;   Label: LAB_00484265
    PUSH 0x48                           ; 00484266
    PUSH EBP                            ; 00484268
    PUSH ESI                            ; 00484269
    PUSH EBX                            ; 0048426a
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280 ; 0048426b
        ;   XREF to: 00484280 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 00484270
    POP EBP                             ; 00484273
    POP EDI                             ; 00484274
    POP ESI                             ; 00484275
    POP EBX                             ; 00484276
    RET                                 ; 00484277

