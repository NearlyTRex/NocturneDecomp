; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00(CKeyFramedModel * this_ptr, float weld_tolerance, float angle_threshold_radians)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   weld_tolerance
; float            Stack[0xc]:4   angle_threshold_radians
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dd5d
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047aa00
        ;   Label: core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
    PUSH dword ptr [ESP + 0x8]          ; 0047aa04
    PUSH EDX                            ; 0047aa08
    CALL core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 ; 0047aa09 | void core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel * this_ptr, float weld_tolerance)
        ;   XREF to: 0047ada0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047aa0e
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047aa11
    PUSH dword ptr [ESP + 0xc]          ; 0047aa15
    PUSH ECX                            ; 0047aa19
    CALL core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 ; 0047aa1a | void core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel * this_ptr, float angle_threshold_radians)
        ;   XREF to: 0047b1e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047aa1f
    RET                                 ; 0047aa22

