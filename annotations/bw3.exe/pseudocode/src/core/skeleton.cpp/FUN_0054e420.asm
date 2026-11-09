; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054e420(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[13]:
;   core_bugs.cpp_FUN_00422570 at 004226c2
;   core_bugs.cpp_FUN_00423cd0 at 00423e1b
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90 at 004f9d9b
;   core_morph.cpp_FUN_004f9f50 at 004f9f62
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850 at 0054e899
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0 at 0054a46b
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0 at 0054b698
;   core_skeleton.cpp_FUN_0054e4b0 at 0054e4e7
;   core_skeleton.cpp_FUN_0054e500 at 0054e537
;   core_skeleton.cpp_FUN_0054e550 at 0054e587
;   ... and 3 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_00548850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e420
        ;   Label: core_skeleton.cpp_FUN_0054e420
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054e421
    LEA EAX,[EBX + 0x2140]              ; 0054e425
    PUSH EAX                            ; 0054e42b
    MOV EDX,dword ptr [EBX + 0x2324]    ; 0054e42c
    PUSH EDX                            ; 0054e432
    LEA EAX,[EBX + 0xe80]               ; 0054e433
    PUSH EAX                            ; 0054e439
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054e43a
    PUSH ECX                            ; 0054e43e
    PUSH EBX                            ; 0054e43f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e440
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e445
    PUSH EAX                            ; 0054e448
    CALL core_skeleton.cpp_FUN_00548850 ; 0054e449
        ;   XREF to: 00548850 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00548850(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer, ...)
    ADD ESP,0x14                        ; 0054e44e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054e451
    MOV dword ptr [EBX + 0x2320],EAX    ; 0054e455
    POP EBX                             ; 0054e45b
    RET                                 ; 0054e45c

