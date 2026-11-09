; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[13]:
;   core_bugs.cpp_FUN_004203a0 at 004204fc
;   core_bugs.cpp_FUN_00421b10 at 00421c43
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350 at 005b635b
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510 at 005b6522
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130 at 00548193
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0 at 0054823c
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005485c0 at 00548613
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320 at 00547357
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0 at 00547307
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280 at 005472b7
;   ... and 3 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_FUN_00541640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005471f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005471f1
    LEA EAX,[EBX + 0x2140]              ; 005471f5
    PUSH EAX                            ; 005471fb
    MOV EDX,dword ptr [EBX + 0x2234]    ; 005471fc
    PUSH EDX                            ; 00547202
    LEA EAX,[EBX + 0xe80]               ; 00547203
    PUSH EAX                            ; 00547209
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054720a
    PUSH ECX                            ; 0054720e
    PUSH EBX                            ; 0054720f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00547210
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00547215
    PUSH EAX                            ; 00547218
    CALL core_skeleton.cpp_FUN_00541640 ; 00547219
        ;   XREF to: 00541640 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00541640(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer, ...)
    ADD ESP,0x14                        ; 0054721e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00547221
    MOV dword ptr [EBX + 0x2230],EAX    ; 00547225
    POP EBX                             ; 0054722b
    RET                                 ; 0054722c

