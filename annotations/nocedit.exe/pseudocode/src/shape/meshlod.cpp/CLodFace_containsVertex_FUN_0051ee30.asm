; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodFace_containsVertex_FUN_0051ee30(CLodFace * this_ptr, int vertex_index)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
;
; Called Functions:
;   shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0051ee30
        ;   Label: shape_meshlod.cpp_CLodFace_containsVertex_FUN_0051ee30
    PUSH EDX                            ; 0051ee34
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051ee35
    PUSH ECX                            ; 0051ee39
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 0051ee3a
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 0051ee3f
    TEST EAX,EAX                        ; 0051ee42
    SETGE AL                            ; 0051ee44
    AND EAX,0xff                        ; 0051ee47
    RET                                 ; 0051ee4c

