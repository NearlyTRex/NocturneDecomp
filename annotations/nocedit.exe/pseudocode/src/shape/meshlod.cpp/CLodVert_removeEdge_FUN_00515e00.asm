; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert *this_ptr,int edge_index)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_index
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 00517764
;   shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0 at 00518462
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515e00
        ;   Label: shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515e01
    MOV EDX,dword ptr [ESP + 0xc]       ; 00515e05
    PUSH EDX                            ; 00515e09
    PUSH EBX                            ; 00515e0a
    CALL shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50 ; 00515e0b
        ;   XREF to: 00515e50 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50(CLodVert * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 00515e10
    TEST EAX,EAX                        ; 00515e13
    JGE 0x00515e19                      ; 00515e15
        ;   XREF to: 00515e19 (CONDITIONAL_JUMP)  ; LAB_00515e19
    POP EBX                             ; 00515e17
    RET                                 ; 00515e18
    MOV ECX,dword ptr [EBX + 0x3f8]     ; 00515e19
        ;   Label: LAB_00515e19
    DEC ECX                             ; 00515e1f
    MOV EDX,ECX                         ; 00515e20
    SUB EDX,EAX                         ; 00515e22
    ADD EBX,0x3fc                       ; 00515e24
    SHL EDX,0x2                         ; 00515e2a
    SHL EAX,0x2                         ; 00515e2d
    PUSH EDX                            ; 00515e30
    LEA EDX,[EAX + 0x4]                 ; 00515e31
    ADD EDX,EBX                         ; 00515e34
    PUSH EDX                            ; 00515e36
    ADD EAX,EBX                         ; 00515e37
    PUSH EAX                            ; 00515e39
    MOV dword ptr [EBX + -0x4],ECX      ; 00515e3a
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00515e3d
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00515e42
    POP EBX                             ; 00515e45
    RET                                 ; 00515e46

