; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh * this_ptr, CVector3f * offset)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051baa6
;   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10 at 00516ebd
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516570
        ;   Label: shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
    PUSH ESI                            ; 00516571
    MOV ESI,dword ptr [ESP + 0xc]       ; 00516572
    MOV EBX,dword ptr [ESP + 0x10]      ; 00516576
    MOV ECX,dword ptr [ESI]             ; 0051657a
    XOR EDX,EDX                         ; 0051657c
    TEST ECX,ECX                        ; 0051657e
    JLE 0x005165b4                      ; 00516580
        ;   XREF to: 005165b4 (CONDITIONAL_JUMP)  ; LAB_005165b4
    PUSH EDI                            ; 00516582
    XOR ECX,ECX                         ; 00516583
    MOV EAX,dword ptr [ESI + 0x4]       ; 00516585
        ;   Label: LAB_00516585
    FLD float ptr [EBX]                 ; 00516588
    FADD float ptr [ECX + EAX*0x1]      ; 0051658a
    FSTP float ptr [ECX + EAX*0x1]      ; 0051658d
    FLD float ptr [EBX + 0x4]           ; 00516590
    FADD float ptr [ECX + EAX*0x1 + 0x4] ; 00516593
    FSTP float ptr [ECX + EAX*0x1 + 0x4] ; 00516597
    FLD float ptr [EBX + 0x8]           ; 0051659b
    FADD float ptr [ECX + EAX*0x1 + 0x8] ; 0051659e
    INC EDX                             ; 005165a2
    FSTP float ptr [ECX + EAX*0x1 + 0x8] ; 005165a3
    MOV EDI,dword ptr [ESI]             ; 005165a7
    ADD ECX,0x4c4                       ; 005165a9
    CMP EDX,EDI                         ; 005165af
    JL 0x00516585                       ; 005165b1
        ;   XREF to: 00516585 (CONDITIONAL_JUMP)  ; LAB_00516585
    POP EDI                             ; 005165b3
    PUSH ESI                            ; 005165b4
        ;   Label: LAB_005165b4
    CALL shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0 ; 005165b5
        ;   XREF to: 005197c0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 005165ba
    POP ESI                             ; 005165bd
    POP EBX                             ; 005165be
    RET                                 ; 005165bf

