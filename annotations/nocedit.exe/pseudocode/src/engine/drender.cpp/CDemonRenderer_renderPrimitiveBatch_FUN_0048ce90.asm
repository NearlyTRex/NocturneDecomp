; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 at 0057082e
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
;   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ce90
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
    PUSH ESI                            ; 0048ce91
    PUSH EDI                            ; 0048ce92
    PUSH EBP                            ; 0048ce93
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048ce94
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048ce98
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048ce9c
    CMP EDI,-0x1                        ; 0048cea0
    JNZ 0x0048ceaa                      ; 0048cea3
        ;   XREF to: 0048ceaa (CONDITIONAL_JUMP)  ; LAB_0048ceaa
    MOV EDI,0x2cd                       ; 0048cea5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048ceaa
        ;   Label: LAB_0048ceaa
    CMP dword ptr [EBX + 0x1c],0x0      ; 0048ceae
    JZ 0x0048cee5                       ; 0048ceb2
        ;   XREF to: 0048cee5 (CONDITIONAL_JUMP)  ; LAB_0048cee5
    XOR EBX,EBX                         ; 0048ceb4
    TEST EBP,EBP                        ; 0048ceb6
    JLE 0x0048cee0                      ; 0048ceb8
        ;   XREF to: 0048cee0 (CONDITIONAL_JUMP)  ; LAB_0048cee0
    PUSH EDI                            ; 0048ceba
        ;   Label: LAB_0048ceba
    PUSH ESI                            ; 0048cebb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048cebc
    PUSH EAX                            ; 0048cec0
    INC EBX                             ; 0048cec1
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0 ; 0048cec2
        ;   XREF to: 0048d7a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESI,0x48                        ; 0048cec7
    ADD ESP,0xc                         ; 0048ceca
    CMP EBX,EBP                         ; 0048cecd
    JL 0x0048ceba                       ; 0048cecf
        ;   XREF to: 0048ceba (CONDITIONAL_JUMP)  ; LAB_0048ceba
    LEA EAX,[EAX]                       ; 0048ced1
    LEA EDX,[EDX]                       ; 0048ced7
    LEA EAX,[EAX]                       ; 0048cedd
    POP EBP                             ; 0048cee0
        ;   Label: LAB_0048cee0
    POP EDI                             ; 0048cee1
    POP ESI                             ; 0048cee2
    POP EBX                             ; 0048cee3
    RET                                 ; 0048cee4
    PUSH EDI                            ; 0048cee5
        ;   Label: LAB_0048cee5
    PUSH 0x48                           ; 0048cee6
    PUSH EBP                            ; 0048cee8
    PUSH ESI                            ; 0048cee9
    PUSH EBX                            ; 0048ceea
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 ; 0048ceeb
        ;   XREF to: 0048cf00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 0048cef0
    POP EBP                             ; 0048cef3
    POP EDI                             ; 0048cef4
    POP ESI                             ; 0048cef5
    POP EBX                             ; 0048cef6
    RET                                 ; 0048cef7

