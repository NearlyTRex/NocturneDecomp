; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh * this_ptr, CLodFace * face)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CLodFace *       Stack[0x8]:4   face
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 0051827a
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 at 0051926b
;   shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0 at 005197f9
;
; Called Functions:
;   shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00519830
        ;   Label: shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
    PUSH EDI                            ; 00519831
    MOV EDX,dword ptr [ESP + 0x10]      ; 00519832
    IMUL ECX,dword ptr [EDX + 0x18],0x4c4 ; 00519836
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051983d
    MOV EAX,dword ptr [EAX + 0x4]       ; 00519841
    ADD ECX,EAX                         ; 00519844
    MOV ESI,dword ptr [EDX + 0x14]      ; 00519846
    PUSH ECX                            ; 00519849
    IMUL ECX,ESI,0x4c4                  ; 0051984a
    ADD ECX,EAX                         ; 00519850
    MOV EDI,dword ptr [EDX + 0x10]      ; 00519852
    PUSH ECX                            ; 00519855
    IMUL ECX,EDI,0x4c4                  ; 00519856
    ADD EAX,ECX                         ; 0051985c
    PUSH EAX                            ; 0051985e
    PUSH EDX                            ; 0051985f
    CALL shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870 ; 00519860 | int shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870(CLodFace * this_ptr, CVector3f * vertex0_pos, CVector3f * vertex1_pos, CVector3f * vertex2_pos)
        ;   XREF to: 00519870 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00519865
    POP EDI                             ; 00519868
    POP ESI                             ; 00519869
    RET                                 ; 0051986a

