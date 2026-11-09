; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00569890(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[13]:
;   core_bugs.cpp_FUN_004263d0 at 0042652c
;   core_bugs.cpp_FUN_00427b40 at 00427c73
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490 at 0052249b
;   core_morph.cpp_FUN_00522650 at 00522662
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0 at 00569d09
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830 at 005658db
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566b08
;   core_skeleton.cpp_FUN_00569920 at 00569957
;   core_skeleton.cpp_FUN_00569970 at 005699a7
;   core_skeleton.cpp_FUN_005699c0 at 005699f7
;   ... and 3 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_00563cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569890
        ;   Label: core_skeleton.cpp_FUN_00569890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00569891
    LEA EAX,[EBX + 0x2140]              ; 00569895
    PUSH EAX                            ; 0056989b
    MOV EDX,dword ptr [EBX + 0x2324]    ; 0056989c
    PUSH EDX                            ; 005698a2
    LEA EAX,[EBX + 0xe80]               ; 005698a3
    PUSH EAX                            ; 005698a9
    MOV ECX,dword ptr [ESP + 0x18]      ; 005698aa
    PUSH ECX                            ; 005698ae
    PUSH EBX                            ; 005698af
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005698b0
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005698b5
    PUSH EAX                            ; 005698b8
    CALL core_skeleton.cpp_FUN_00563cb0 ; 005698b9
        ;   XREF to: 00563cb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00563cb0(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer, ...)
    ADD ESP,0x14                        ; 005698be
    MOV EAX,dword ptr [ESP + 0xc]       ; 005698c1
    MOV dword ptr [EBX + 0x2320],EAX    ; 005698c5
    POP EBX                             ; 005698cb
    RET                                 ; 005698cc

