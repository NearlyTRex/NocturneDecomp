; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 at 005471d6
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_005419c0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005472d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0
    PUSH ESI                            ; 005472d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005472d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005472d6
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005472da
    JNZ 0x00547305                      ; 005472e0
        ;   XREF to: 00547305 (CONDITIONAL_JUMP)  ; LAB_00547305
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005472e2
        ;   Label: LAB_005472e2
    PUSH ECX                            ; 005472e8
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005472e9
    PUSH ESI                            ; 005472ef
    PUSH EBX                            ; 005472f0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005472f1
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005472f6
    PUSH EAX                            ; 005472f9
    CALL core_skeleton.cpp_CDeformableModel_lightVertices_FUN_005419c0 ; 005472fa
        ;   XREF to: 005419c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_lightVertices_FUN_005419c0(CDeformableModel * this_ptr, int lod_index, CVector3i * skinned_vertices)
    ADD ESP,0xc                         ; 005472ff
    POP ESI                             ; 00547302
    POP EBX                             ; 00547303
    RET                                 ; 00547304
    PUSH EAX                            ; 00547305
        ;   Label: LAB_00547305
    PUSH EBX                            ; 00547306
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 00547307
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054730c
    JMP 0x005472e2                      ; 0054730f
        ;   XREF to: 005472e2 (UNCONDITIONAL_JUMP)  ; LAB_005472e2

