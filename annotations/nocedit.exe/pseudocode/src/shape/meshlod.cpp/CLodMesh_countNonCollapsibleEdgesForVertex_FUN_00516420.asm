; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420(CLodMesh *this_ptr,int vertex_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 at 00518686
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516420
        ;   Label: shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
    PUSH ESI                            ; 00516421
    PUSH EDI                            ; 00516422
    SUB ESP,0x4                         ; 00516423
    MOV EDI,dword ptr [ESP + 0x14]      ; 00516426
    IMUL EDX,dword ptr [ESP + 0x18],0x4c4 ; 0051642a
    XOR EAX,EAX                         ; 00516432
    XOR EBX,EBX                         ; 00516434
    MOV dword ptr [ESP],EDX             ; 00516436
    XOR EDX,EDX                         ; 00516439
    MOV ESI,dword ptr [ESP]             ; 0051643b
        ;   Label: LAB_0051643b
    MOV ECX,dword ptr [EDI + 0x4]       ; 0051643e
    ADD ECX,ESI                         ; 00516441
    CMP EAX,dword ptr [ECX + 0x3f8]     ; 00516443
    JGE 0x00516469                      ; 00516449
        ;   XREF to: 00516469 (CONDITIONAL_JUMP)  ; LAB_00516469
    IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0 ; 0051644b
    MOV ESI,dword ptr [EDI + 0x48]      ; 00516456
    CMP dword ptr [ECX + ESI*0x1 + 0x18],0x0 ; 00516459
    JNZ 0x00516466                      ; 0051645e
        ;   XREF to: 00516466 (CONDITIONAL_JUMP)  ; LAB_00516466
    INC EAX                             ; 00516460
        ;   Label: LAB_00516460
    ADD EDX,0x4                         ; 00516461
    JMP 0x0051643b                      ; 00516464
        ;   XREF to: 0051643b (UNCONDITIONAL_JUMP)  ; LAB_0051643b
    INC EBX                             ; 00516466
        ;   Label: LAB_00516466
    JMP 0x00516460                      ; 00516467
        ;   XREF to: 00516460 (UNCONDITIONAL_JUMP)  ; LAB_00516460
    MOV EAX,EBX                         ; 00516469
        ;   Label: LAB_00516469
    ADD ESP,0x4                         ; 0051646b
    POP EDI                             ; 0051646e
    POP ESI                             ; 0051646f
    POP EBX                             ; 00516470
    RET                                 ; 00516471

