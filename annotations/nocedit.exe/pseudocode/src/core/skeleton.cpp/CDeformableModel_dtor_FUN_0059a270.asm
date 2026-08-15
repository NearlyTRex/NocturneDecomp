; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 at 004be12d
;
; Called Functions:
;   core_curtain.cpp_CVector3f_arrdtor100_FUN_0044baf0
;   core_skeleton.cpp_CBoundingBox3D_arrdtor100_FUN_005a2030
;   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a270
        ;   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a271
    PUSH EBX                            ; 0059a275
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 ; 0059a276
        ;   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059a27b
    PUSH 0x0                            ; 0059a27e
    ADD EBX,0x814c                      ; 0059a280
    PUSH EBX                            ; 0059a286
    CALL core_skeleton.cpp_CBoundingBox3D_arrdtor100_FUN_005a2030 ; 0059a287
        ;   XREF to: 005a2030 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CBoundingBox3D_arrdtor100_FUN_005a2030(CBoundingBox3D * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059a28c
    PUSH 0x0                            ; 0059a28f
    SUB EAX,0x4bc                       ; 0059a291
    PUSH EAX                            ; 0059a296
    CALL core_curtain.cpp_CVector3f_arrdtor100_FUN_0044baf0 ; 0059a297
        ;   XREF to: 0044baf0 (UNCONDITIONAL_CALL)  ; CVector3f * core_curtain.cpp_CVector3f_arrdtor100_FUN_0044baf0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059a29c
    SUB EAX,0x7c90                      ; 0059a29f
    POP EBX                             ; 0059a2a4
    RET                                 ; 0059a2a5

