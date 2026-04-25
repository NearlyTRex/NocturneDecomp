; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[17]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00425fe0 at 0042612b
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00427400 at 00427533
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870 at 0052a87b
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_0052aa30 at 0052aa42
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052beaa
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597ddc
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e77a
;   core_skeledit.cpp_CDeformableModel_groundBias_FUN_0058e4e0 at 0058e55c
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_005a05e0 at 005a0629
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 at 005a10a3
;   ... and 7 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a01d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a01d1
    LEA EAX,[EBX + 0x2140]              ; 005a01d5
    PUSH EAX                            ; 005a01db
    MOV EDX,dword ptr [EBX + 0x2234]    ; 005a01dc
    PUSH EDX                            ; 005a01e2
    LEA EAX,[EBX + 0xe80]               ; 005a01e3
    PUSH EAX                            ; 005a01e9
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a01ea
    PUSH ECX                            ; 005a01ee
    PUSH EBX                            ; 005a01ef
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a01f0
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a01f5
    PUSH EAX                            ; 005a01f8
    CALL core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880 ; 005a01f9
        ;   XREF to: 0059a880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer, ...)
    ADD ESP,0x14                        ; 005a01fe
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a0201
    MOV dword ptr [EBX + 0x2230],EAX    ; 005a0205
    POP EBX                             ; 005a020b
    RET                                 ; 005a020c

