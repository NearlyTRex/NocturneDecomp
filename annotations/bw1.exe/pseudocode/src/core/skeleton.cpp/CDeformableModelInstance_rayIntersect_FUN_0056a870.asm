; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_FUN_00409170 at 004095ca
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_005660c0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a870
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870
    PUSH ESI                            ; 0056a871
    PUSH EDI                            ; 0056a872
    PUSH EBP                            ; 0056a873
    SUB ESP,0x8                         ; 0056a874
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056a877
    PUSH ESI                            ; 0056a87b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056a87c
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EBX,dword ptr [EAX]             ; 0056a881
    SUB EBX,0x2                         ; 0056a883
    ADD ESP,0x4                         ; 0056a886
    TEST EBX,EBX                        ; 0056a889
    JL 0x0056a8d6                       ; 0056a88b
        ;   XREF to: 0056a8d6 (CONDITIONAL_JUMP)  ; LAB_0056a8d6
    CMP EBX,dword ptr [ESI + 0x2320]    ; 0056a88d
        ;   Label: LAB_0056a88d
    JNZ 0x0056a8da                      ; 0056a893
        ;   XREF to: 0056a8da (CONDITIONAL_JUMP)  ; LAB_0056a8da
    LEA EAX,[ESI + 0x2140]              ; 0056a895
        ;   Label: LAB_0056a895
    PUSH EAX                            ; 0056a89b
    MOV ECX,dword ptr [ESI + 0x2324]    ; 0056a89c
    PUSH ECX                            ; 0056a8a2
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0056a8a3
    PUSH EDI                            ; 0056a8a7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0056a8a8
    PUSH EBP                            ; 0056a8ac
    PUSH EBX                            ; 0056a8ad
    PUSH ESI                            ; 0056a8ae
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056a8af
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056a8b4
    PUSH EAX                            ; 0056a8b7
    CALL core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_005660c0 ; 0056a8b8
        ;   XREF to: 005660c0 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_005660c0(CDeformableModel * this_ptr, int lod_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056a8bd
    FLD float ptr [ESP + 0x1c]          ; 0056a8c1
    ADD ESP,0x18                        ; 0056a8c5
    FSTP float ptr [ESP]                ; 0056a8c8
    MOV EAX,dword ptr [ESP]             ; 0056a8cb
    ADD ESP,0x8                         ; 0056a8ce
    POP EBP                             ; 0056a8d1
    POP EDI                             ; 0056a8d2
    POP ESI                             ; 0056a8d3
    POP EBX                             ; 0056a8d4
    RET                                 ; 0056a8d5
    XOR EBX,EBX                         ; 0056a8d6
        ;   Label: LAB_0056a8d6
    JMP 0x0056a88d                      ; 0056a8d8
        ;   XREF to: 0056a88d (UNCONDITIONAL_JUMP)  ; LAB_0056a88d
    PUSH EBX                            ; 0056a8da
        ;   Label: LAB_0056a8da
    PUSH ESI                            ; 0056a8db
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890 ; 0056a8dc
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0056a8e1
    JMP 0x0056a895                      ; 0056a8e4
        ;   XREF to: 0056a895 (UNCONDITIONAL_JUMP)  ; LAB_0056a895

