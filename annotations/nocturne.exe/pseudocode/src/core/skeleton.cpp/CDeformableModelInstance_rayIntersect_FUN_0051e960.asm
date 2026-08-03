; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)
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
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040aa57
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e960
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960
    PUSH ESI                            ; 0051e961
    PUSH EDI                            ; 0051e962
    PUSH EBP                            ; 0051e963
    SUB ESP,0x8                         ; 0051e964
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051e967
    PUSH ESI                            ; 0051e96b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051e96c
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV EBX,dword ptr [EAX]             ; 0051e971
    SUB EBX,0x2                         ; 0051e973
    ADD ESP,0x4                         ; 0051e976
    TEST EBX,EBX                        ; 0051e979
    JL 0x0051e9c6                       ; 0051e97b
        ;   XREF to: 0051e9c6 (CONDITIONAL_JUMP)  ; LAB_0051e9c6
    CMP EBX,dword ptr [ESI + 0x2230]    ; 0051e97d
        ;   Label: LAB_0051e97d
    JNZ 0x0051e9ca                      ; 0051e983
        ;   XREF to: 0051e9ca (CONDITIONAL_JUMP)  ; LAB_0051e9ca
    LEA EAX,[ESI + 0x2140]              ; 0051e985
        ;   Label: LAB_0051e985
    PUSH EAX                            ; 0051e98b
    MOV ECX,dword ptr [ESI + 0x2234]    ; 0051e98c
    PUSH ECX                            ; 0051e992
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051e993
    PUSH EDI                            ; 0051e997
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051e998
    PUSH EBP                            ; 0051e99c
    PUSH EBX                            ; 0051e99d
    PUSH ESI                            ; 0051e99e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051e99f
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051e9a4
    PUSH EAX                            ; 0051e9a7
    CALL core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470 ; 0051e9a8
        ;   XREF to: 0051a470 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470(CDeformableModel * this_ptr, int lod_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051e9ad
    FLD float ptr [ESP + 0x1c]          ; 0051e9b1
    ADD ESP,0x18                        ; 0051e9b5
    FSTP float ptr [ESP]                ; 0051e9b8
    MOV EAX,dword ptr [ESP]             ; 0051e9bb
    ADD ESP,0x8                         ; 0051e9be
    POP EBP                             ; 0051e9c1
    POP EDI                             ; 0051e9c2
    POP ESI                             ; 0051e9c3
    POP EBX                             ; 0051e9c4
    RET                                 ; 0051e9c5
    XOR EBX,EBX                         ; 0051e9c6
        ;   Label: LAB_0051e9c6
    JMP 0x0051e97d                      ; 0051e9c8
        ;   XREF to: 0051e97d (UNCONDITIONAL_JUMP)  ; LAB_0051e97d
    PUSH EBX                            ; 0051e9ca
        ;   Label: LAB_0051e9ca
    PUSH ESI                            ; 0051e9cb
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 0051e9cc
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0051e9d1
    JMP 0x0051e985                      ; 0051e9d4
        ;   XREF to: 0051e985 (UNCONDITIONAL_JUMP)  ; LAB_0051e985

