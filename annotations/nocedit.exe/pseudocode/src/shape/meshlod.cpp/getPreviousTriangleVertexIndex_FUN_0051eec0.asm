; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_getPreviousTriangleVertexIndex_FUN_0051eec0(int vertex_index)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051eec0
        ;   Label: shape_meshlod.cpp_getPreviousTriangleVertexIndex_FUN_0051eec0
    DEC EAX                             ; 0051eec4
    TEST EAX,EAX                        ; 0051eec5
    JL 0x0051eeca                       ; 0051eec7
        ;   XREF to: 0051eeca (CONDITIONAL_JUMP)  ; LAB_0051eeca
    RET                                 ; 0051eec9
    MOV EAX,0x2                         ; 0051eeca
        ;   Label: LAB_0051eeca
    RET                                 ; 0051eecf

