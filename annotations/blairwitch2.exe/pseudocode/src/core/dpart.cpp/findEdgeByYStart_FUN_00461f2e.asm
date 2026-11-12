; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00461f2e(int scanline_y,SSoftwareEdge *exclude_edge)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   exclude_edge
;
; Referenced Globals:
;   undefined4 DAT_01ba51c8
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00461f2e
        ;   Label: core_dpart.cpp_findEdgeByYStart_FUN_00461f2e
    PUSH EBX                            ; 00461f30
    PUSH ESI                            ; 00461f31
    MOV EBX,dword ptr [0x01ba51c8]      ; 00461f32 | DAT_01ba51c8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00461f38
    MOV ESI,dword ptr [ESP + 0x10]      ; 00461f3c
    MOV EAX,0x1ba51cc                   ; 00461f40
    XOR EDX,EDX                         ; 00461f45
    TEST EBX,EBX                        ; 00461f47
    JLE 0x00461f5b                      ; 00461f49
        ;   XREF to: 00461f5b (CONDITIONAL_JUMP)  ; LAB_00461f5b
    CMP ECX,dword ptr [EAX]             ; 00461f4b
        ;   Label: LAB_00461f4b
    JNZ 0x00461f53                      ; 00461f4d
        ;   XREF to: 00461f53 (CONDITIONAL_JUMP)  ; LAB_00461f53
    CMP EAX,ESI                         ; 00461f4f
    JNZ 0x00461f5d                      ; 00461f51
        ;   XREF to: 00461f5d (CONDITIONAL_JUMP)  ; LAB_00461f5d
    INC EDX                             ; 00461f53
        ;   Label: LAB_00461f53
    ADD EAX,0x50                        ; 00461f54
    CMP EDX,EBX                         ; 00461f57
    JL 0x00461f4b                       ; 00461f59
        ;   XREF to: 00461f4b (CONDITIONAL_JUMP)  ; LAB_00461f4b
    XOR EAX,EAX                         ; 00461f5b
        ;   Label: LAB_00461f5b
    MOV dword ptr [0x01ba51c8],EBX      ; 00461f5d | DAT_01ba51c8
        ;   Label: LAB_00461f5d
    POP ESI                             ; 00461f63
    POP EBX                             ; 00461f64
    RET                                 ; 00461f65

