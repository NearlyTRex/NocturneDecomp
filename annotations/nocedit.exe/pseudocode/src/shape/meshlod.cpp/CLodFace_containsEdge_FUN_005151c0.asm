; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0(CLodFace * this_ptr, int edge_index)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005151c0
        ;   Label: shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005151c4
    CMP EDX,dword ptr [EAX + 0x34]      ; 005151c8
    JZ 0x005151d7                       ; 005151cb | LAB_005151d7
        ;   XREF to: 005151d7 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 005151cd
    JZ 0x005151d7                       ; 005151d0 | LAB_005151d7
        ;   XREF to: 005151d7 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x3c]      ; 005151d2
    JNZ 0x005151dd                      ; 005151d5 | LAB_005151dd
        ;   XREF to: 005151dd (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005151d7
        ;   Label: LAB_005151d7
    RET                                 ; 005151dc
    XOR EAX,EAX                         ; 005151dd
        ;   Label: LAB_005151dd
    RET                                 ; 005151df

