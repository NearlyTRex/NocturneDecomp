; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(CLodMesh *this_ptr,CVector3f *scale_factors)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   scale_factors
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051ba7d
;   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10 at 00516f40
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005165c0
        ;   Label: shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
    PUSH ESI                            ; 005165c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005165c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005165c6
    MOV EBX,dword ptr [EDX]             ; 005165ca
    XOR ECX,ECX                         ; 005165cc
    TEST EBX,EBX                        ; 005165ce
    JLE 0x00516609                      ; 005165d0
        ;   XREF to: 00516609 (CONDITIONAL_JUMP)  ; LAB_00516609
    PUSH EDI                            ; 005165d2
    XOR EAX,EAX                         ; 005165d3
    MOV EBX,dword ptr [EDX + 0x4]       ; 005165d5
        ;   Label: LAB_005165d5
    FLD float ptr [ESI]                 ; 005165d8
    FMUL float ptr [EBX + EAX*0x1]      ; 005165da
    FSTP float ptr [EBX + EAX*0x1]      ; 005165dd
    MOV EBX,dword ptr [EDX + 0x4]       ; 005165e0
    FLD float ptr [ESI + 0x4]           ; 005165e3
    FMUL float ptr [EBX + EAX*0x1 + 0x4] ; 005165e6
    FSTP float ptr [EBX + EAX*0x1 + 0x4] ; 005165ea
    MOV EBX,dword ptr [EDX + 0x4]       ; 005165ee
    FLD float ptr [ESI + 0x8]           ; 005165f1
    FMUL float ptr [EBX + EAX*0x1 + 0x8] ; 005165f4
    INC ECX                             ; 005165f8
    FSTP float ptr [EBX + EAX*0x1 + 0x8] ; 005165f9
    MOV EDI,dword ptr [EDX]             ; 005165fd
    ADD EAX,0x4c4                       ; 005165ff
    CMP ECX,EDI                         ; 00516604
    JL 0x005165d5                       ; 00516606
        ;   XREF to: 005165d5 (CONDITIONAL_JUMP)  ; LAB_005165d5
    POP EDI                             ; 00516608
    PUSH EDX                            ; 00516609
        ;   Label: LAB_00516609
    CALL shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0 ; 0051660a
        ;   XREF to: 005197c0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051660f
    POP ESI                             ; 00516612
    POP EBX                             ; 00516613
    RET                                 ; 00516614

