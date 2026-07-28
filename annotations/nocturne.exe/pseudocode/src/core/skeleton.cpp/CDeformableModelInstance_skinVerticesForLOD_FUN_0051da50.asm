; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[13]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 004224bb
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790 at 004238c3
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0 at 004df5bb
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770 at 004df782
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60 at 0051dea9
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0 at 0051e923
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960 at 0051e9cc
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30 at 0051ed83
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70 at 0051dba7
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20 at 0051db57
;   ... and 3 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051da50
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051da51
    LEA EAX,[EBX + 0x2140]              ; 0051da55
    PUSH EAX                            ; 0051da5b
    MOV EDX,dword ptr [EBX + 0x2234]    ; 0051da5c
    PUSH EDX                            ; 0051da62
    LEA EAX,[EBX + 0xe80]               ; 0051da63
    PUSH EAX                            ; 0051da69
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051da6a
    PUSH ECX                            ; 0051da6e
    PUSH EBX                            ; 0051da6f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051da70
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051da75
    PUSH EAX                            ; 0051da78
    CALL core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0 ; 0051da79
        ;   XREF to: 005181a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer, ...)
    ADD ESP,0x14                        ; 0051da7e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051da81
    MOV dword ptr [EBX + 0x2230],EAX    ; 0051da85
    POP EBX                             ; 0051da8b
    RET                                 ; 0051da8c

