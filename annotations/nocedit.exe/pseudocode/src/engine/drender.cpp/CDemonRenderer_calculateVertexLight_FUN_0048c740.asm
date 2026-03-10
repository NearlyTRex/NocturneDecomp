; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_calculateVertexLight_FUN_0048c740(CDemonRenderer *this_ptr,int vertex_index,CVector3i *vertex_position)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
; CVector3i *      Stack[0xc]:4   vertex_position
;
; Called Functions:
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0048c740
        ;   Label: engine_drender.cpp_CDemonRenderer_calculateVertexLight_FUN_0048c740
    PUSH EDX                            ; 0048c744
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048c745
    PUSH ECX                            ; 0048c749
    CALL engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850 ; 0048c74a
        ;   XREF to: 00505850 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index, CVector3i * vertex_position)
    ADD ESP,0x8                         ; 0048c74f
    RET                                 ; 0048c752

