; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge *this_ptr,int tri_index)
;
; Parameters:
; CLodEdge *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_index
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0 at 00518419
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515d10
        ;   Label: shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515d11
    MOV EDX,dword ptr [ESP + 0xc]       ; 00515d15
    PUSH EDX                            ; 00515d19
    PUSH EBX                            ; 00515d1a
    CALL shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60 ; 00515d1b
        ;   XREF to: 00515d60 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60(CLodEdge * this_ptr, int tri_index)
    ADD ESP,0x8                         ; 00515d20
    TEST EAX,EAX                        ; 00515d23
    JGE 0x00515d29                      ; 00515d25
        ;   XREF to: 00515d29 (CONDITIONAL_JUMP)  ; LAB_00515d29
    POP EBX                             ; 00515d27
    RET                                 ; 00515d28
    MOV ECX,dword ptr [EBX + 0x24]      ; 00515d29
        ;   Label: LAB_00515d29
    DEC ECX                             ; 00515d2c
    MOV EDX,ECX                         ; 00515d2d
    SUB EDX,EAX                         ; 00515d2f
    ADD EBX,0x28                        ; 00515d31
    SHL EDX,0x2                         ; 00515d34
    SHL EAX,0x2                         ; 00515d37
    PUSH EDX                            ; 00515d3a
    LEA EDX,[EAX + 0x4]                 ; 00515d3b
    ADD EDX,EBX                         ; 00515d3e
    PUSH EDX                            ; 00515d40
    ADD EAX,EBX                         ; 00515d41
    PUSH EAX                            ; 00515d43
    MOV dword ptr [EBX + -0x4],ECX      ; 00515d44
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00515d47
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00515d4c
    POP EBX                             ; 00515d4f
    RET                                 ; 00515d50

