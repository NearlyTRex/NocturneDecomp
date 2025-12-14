; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50(CLodVert * this_ptr, int edge_index)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_index
;
; XREF[1]:
;   shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00 at 00515e0b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515e50
        ;   Label: shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50
    PUSH ESI                            ; 00515e51
    MOV ECX,dword ptr [ESP + 0xc]       ; 00515e52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00515e56
    MOV EDX,dword ptr [ECX + 0x3f8]     ; 00515e5a
    XOR EAX,EAX                         ; 00515e60
    TEST EDX,EDX                        ; 00515e62
    JLE 0x00515e7e                      ; 00515e64
        ;   XREF to: 00515e7e (CONDITIONAL_JUMP)  ; LAB_00515e7e
    MOV EDX,ECX                         ; 00515e66
    CMP EBX,dword ptr [EDX + 0x3fc]     ; 00515e68
        ;   Label: LAB_00515e68
    JZ 0x00515e83                       ; 00515e6e
        ;   XREF to: 00515e83 (CONDITIONAL_JUMP)  ; LAB_00515e83
    INC EAX                             ; 00515e70
    MOV ESI,dword ptr [ECX + 0x3f8]     ; 00515e71
    ADD EDX,0x4                         ; 00515e77
    CMP EAX,ESI                         ; 00515e7a
    JL 0x00515e68                       ; 00515e7c
        ;   XREF to: 00515e68 (CONDITIONAL_JUMP)  ; LAB_00515e68
    MOV EAX,0xffffffff                  ; 00515e7e
        ;   Label: LAB_00515e7e
    POP ESI                             ; 00515e83
        ;   Label: LAB_00515e83
    POP EBX                             ; 00515e84
    RET                                 ; 00515e85

