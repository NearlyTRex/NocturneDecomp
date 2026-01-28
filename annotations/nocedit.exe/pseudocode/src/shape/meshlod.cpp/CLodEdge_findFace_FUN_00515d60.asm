; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_meshlod_cpp_CLodEdge_findFace_FUN_00515d60(CLodEdge *this_ptr,int tri_index)
;
; Parameters:
; CLodEdge *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_index
;
; XREF[1]:
;   shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10 at 00515d1b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515d60
        ;   Label: shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60
    PUSH ESI                            ; 00515d61
    MOV ECX,dword ptr [ESP + 0xc]       ; 00515d62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00515d66
    MOV EDX,dword ptr [ECX + 0x24]      ; 00515d6a
    XOR EAX,EAX                         ; 00515d6d
    TEST EDX,EDX                        ; 00515d6f
    JLE 0x00515d85                      ; 00515d71
        ;   XREF to: 00515d85 (CONDITIONAL_JUMP)  ; LAB_00515d85
    MOV EDX,ECX                         ; 00515d73
    CMP EBX,dword ptr [EDX + 0x28]      ; 00515d75
        ;   Label: LAB_00515d75
    JZ 0x00515d8a                       ; 00515d78
        ;   XREF to: 00515d8a (CONDITIONAL_JUMP)  ; LAB_00515d8a
    INC EAX                             ; 00515d7a
    MOV ESI,dword ptr [ECX + 0x24]      ; 00515d7b
    ADD EDX,0x4                         ; 00515d7e
    CMP EAX,ESI                         ; 00515d81
    JL 0x00515d75                       ; 00515d83
        ;   XREF to: 00515d75 (CONDITIONAL_JUMP)  ; LAB_00515d75
    MOV EAX,0xffffffff                  ; 00515d85
        ;   Label: LAB_00515d85
    POP ESI                             ; 00515d8a
        ;   Label: LAB_00515d8a
    POP EBX                             ; 00515d8b
    RET                                 ; 00515d8c

