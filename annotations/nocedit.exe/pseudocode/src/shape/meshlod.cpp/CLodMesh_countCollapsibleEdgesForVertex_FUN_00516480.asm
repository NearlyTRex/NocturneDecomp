; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_countCollapsibleEdgesForVertex_FUN_00516480(CLodMesh *this_ptr,int vertex_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516480
        ;   Label: shape_meshlod.cpp_CLodMesh_countCollapsibleEdgesForVertex_FUN_00516480
    PUSH ESI                            ; 00516481
    PUSH EDI                            ; 00516482
    SUB ESP,0x4                         ; 00516483
    MOV EDI,dword ptr [ESP + 0x14]      ; 00516486
    IMUL EDX,dword ptr [ESP + 0x18],0x4c4 ; 0051648a
    XOR EAX,EAX                         ; 00516492
    XOR EBX,EBX                         ; 00516494
    MOV dword ptr [ESP],EDX             ; 00516496
    XOR EDX,EDX                         ; 00516499
    MOV ESI,dword ptr [ESP]             ; 0051649b
        ;   Label: LAB_0051649b
    MOV ECX,dword ptr [EDI + 0x4]       ; 0051649e
    ADD ECX,ESI                         ; 005164a1
    CMP EAX,dword ptr [ECX + 0x3f8]     ; 005164a3
    JGE 0x00516469                      ; 005164a9
        ;   XREF to: 00516469 (CONDITIONAL_JUMP)  ; LAB_00516469
    IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0 ; 005164ab
    MOV ESI,dword ptr [EDI + 0x48]      ; 005164b6
    CMP dword ptr [ECX + ESI*0x1 + 0x18],0x1 ; 005164b9
    JG 0x005164c6                       ; 005164be
        ;   XREF to: 005164c6 (CONDITIONAL_JUMP)  ; LAB_005164c6
    INC EAX                             ; 005164c0
    ADD EDX,0x4                         ; 005164c1
    JMP 0x0051649b                      ; 005164c4
        ;   XREF to: 0051649b (UNCONDITIONAL_JUMP)  ; LAB_0051649b
    INC EBX                             ; 005164c6
        ;   Label: LAB_005164c6
    INC EAX                             ; 005164c7
    ADD EDX,0x4                         ; 005164c8
    JMP 0x0051649b                      ; 005164cb
        ;   XREF to: 0051649b (UNCONDITIONAL_JUMP)  ; LAB_0051649b

