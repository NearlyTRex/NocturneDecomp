; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0 (CLodMesh *this_ptr,int tri_index,int edge_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_index
; int              Stack[0xc]:4   edge_index
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 00517acf
;
; Called Functions:
;   shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10
;   shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005183e0
        ;   Label: shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
    PUSH ESI                            ; 005183e1
    PUSH EDI                            ; 005183e2
    PUSH EBP                            ; 005183e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005183e4
    MOV ECX,dword ptr [ESP + 0x18]      ; 005183e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005183ec
    LEA EAX,[ECX*0x8 + 0x0]             ; 005183f0
    ADD EAX,ECX                         ; 005183f7
    SHL EAX,0x2                         ; 005183f9
    SUB EAX,ECX                         ; 005183fc
    MOV EDI,dword ptr [EBP + 0xc]       ; 005183fe
    SHL EAX,0x2                         ; 00518401
    ADD EDI,EAX                         ; 00518404
    MOV EAX,EBX                         ; 00518406
    SHL EAX,0x4                         ; 00518408
    MOV EDX,EAX                         ; 0051840b
    SHL EAX,0x4                         ; 0051840d
    MOV ESI,dword ptr [EBP + 0x48]      ; 00518410
    SUB EAX,EDX                         ; 00518413
    PUSH ECX                            ; 00518415
    ADD ESI,EAX                         ; 00518416
    PUSH ESI                            ; 00518418
    CALL shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10 ; 00518419
        ;   XREF to: 00515d10 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge * this_ptr, int tri_index)
    MOV EDX,dword ptr [ESI + 0x24]      ; 0051841e
    ADD ESP,0x8                         ; 00518421
    TEST EDX,EDX                        ; 00518424
    JZ 0x0051844e                       ; 00518426
        ;   XREF to: 0051844e (CONDITIONAL_JUMP)  ; LAB_0051844e
    MOV EDX,EDI                         ; 00518428
        ;   Label: LAB_00518428
    MOV ECX,dword ptr [EDI + 0x34]      ; 0051842a
    XOR EAX,EAX                         ; 0051842d
    CMP EBX,ECX                         ; 0051842f
    JZ 0x00518441                       ; 00518431
        ;   XREF to: 00518441 (CONDITIONAL_JUMP)  ; LAB_00518441
    INC EAX                             ; 00518433
        ;   Label: LAB_00518433
    ADD EDX,0x4                         ; 00518434
    CMP EAX,0x3                         ; 00518437
    JGE 0x00518441                      ; 0051843a
        ;   XREF to: 00518441 (CONDITIONAL_JUMP)  ; LAB_00518441
    CMP EBX,dword ptr [EDX + 0x34]      ; 0051843c
    JNZ 0x00518433                      ; 0051843f
        ;   XREF to: 00518433 (CONDITIONAL_JUMP)  ; LAB_00518433
    MOV dword ptr [EDI + EAX*0x4 + 0x34],0xffffffff ; 00518441
        ;   Label: LAB_00518441
    POP EBP                             ; 00518449
    POP EDI                             ; 0051844a
    POP ESI                             ; 0051844b
    POP EBX                             ; 0051844c
    RET                                 ; 0051844d
    IMUL EDX,dword ptr [ESI],0x4c4      ; 0051844e
        ;   Label: LAB_0051844e
    MOV dword ptr [ESI + 0x14],0x1      ; 00518454
    MOV EAX,dword ptr [EBP + 0x4]       ; 0051845b
    PUSH EBX                            ; 0051845e
    ADD EAX,EDX                         ; 0051845f
    PUSH EAX                            ; 00518461
    CALL shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00 ; 00518462
        ;   XREF to: 00515e00 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert * this_ptr, int edge_index)
    IMUL EAX,dword ptr [ESI + 0x4],0x4c4 ; 00518467
    ADD ESP,0x8                         ; 0051846e
    MOV EDX,dword ptr [EBP + 0x4]       ; 00518471
    PUSH EBX                            ; 00518474
    ADD EAX,EDX                         ; 00518475
    PUSH EAX                            ; 00518477
    CALL shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00 ; 00518478
        ;   XREF to: 00515e00 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 0051847d
    JMP 0x00518428                      ; 00518480
        ;   XREF to: 00518428 (UNCONDITIONAL_JUMP)  ; LAB_00518428

