; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058c190 at 0058c52e
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051db2e
;   shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50 at 00516f8c
;   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 at 0051ed7a
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_init_FUN_00515880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515840
        ;   Label: shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515841
    PUSH EBX                            ; 00515845
    CALL shape_meshlod.cpp_CLodMesh_init_FUN_00515880 ; 00515846
        ;   XREF to: 00515880 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_init_FUN_00515880(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051584b
    MOV EAX,EBX                         ; 0051584e
    POP EBX                             ; 00515850
    RET                                 ; 00515851

