; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_getNextTriangleVertexIndex_FUN_0051eed0(int vertex_index)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051eed0
        ;   Label: shape_meshlod.cpp_getNextTriangleVertexIndex_FUN_0051eed0
    INC EAX                             ; 0051eed4
    CMP EAX,0x3                         ; 0051eed5
    JL 0x0051eedc                       ; 0051eed8
        ;   XREF to: 0051eedc (CONDITIONAL_JUMP)  ; LAB_0051eedc
    XOR EAX,EAX                         ; 0051eeda
    RET                                 ; 0051eedc
        ;   Label: LAB_0051eedc

