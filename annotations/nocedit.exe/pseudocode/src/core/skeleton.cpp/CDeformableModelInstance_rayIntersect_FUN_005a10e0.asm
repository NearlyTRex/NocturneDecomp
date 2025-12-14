; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0(CDeformableModelInstance * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
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
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 00409787
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a10e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
    PUSH ESI                            ; 005a10e1
    PUSH EDI                            ; 005a10e2
    PUSH EBP                            ; 005a10e3
    SUB ESP,0x8                         ; 005a10e4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a10e7
    PUSH ESI                            ; 005a10eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a10ec
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EBX,dword ptr [EAX]             ; 005a10f1
    SUB EBX,0x2                         ; 005a10f3
    ADD ESP,0x4                         ; 005a10f6
    TEST EBX,EBX                        ; 005a10f9
    JL 0x005a1146                       ; 005a10fb
        ;   XREF to: 005a1146 (CONDITIONAL_JUMP)  ; LAB_005a1146
    CMP EBX,dword ptr [ESI + 0x2230]    ; 005a10fd
        ;   Label: LAB_005a10fd
    JNZ 0x005a114a                      ; 005a1103
        ;   XREF to: 005a114a (CONDITIONAL_JUMP)  ; LAB_005a114a
    LEA EAX,[ESI + 0x2140]              ; 005a1105
        ;   Label: LAB_005a1105
    PUSH EAX                            ; 005a110b
    MOV ECX,dword ptr [ESI + 0x2234]    ; 005a110c
    PUSH ECX                            ; 005a1112
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a1113
    PUSH EDI                            ; 005a1117
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005a1118
    PUSH EBP                            ; 005a111c
    PUSH EBX                            ; 005a111d
    PUSH ESI                            ; 005a111e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a111f
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a1124
    PUSH EAX                            ; 005a1127
    CALL core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 ; 005a1128
        ;   XREF to: 0059cba0 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(CDeformableModel * this_ptr, int lod_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a112d
    FLD float ptr [ESP + 0x1c]          ; 005a1131
    ADD ESP,0x18                        ; 005a1135
    FSTP float ptr [ESP]                ; 005a1138
    MOV EAX,dword ptr [ESP]             ; 005a113b
    ADD ESP,0x8                         ; 005a113e
    POP EBP                             ; 005a1141
    POP EDI                             ; 005a1142
    POP ESI                             ; 005a1143
    POP EBX                             ; 005a1144
    RET                                 ; 005a1145
    XOR EBX,EBX                         ; 005a1146
        ;   Label: LAB_005a1146
    JMP 0x005a10fd                      ; 005a1148
        ;   XREF to: 005a10fd (UNCONDITIONAL_JUMP)  ; LAB_005a10fd
    PUSH EBX                            ; 005a114a
        ;   Label: LAB_005a114a
    PUSH ESI                            ; 005a114b
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a114c
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a1151
    JMP 0x005a1105                      ; 005a1154
        ;   XREF to: 005a1105 (UNCONDITIONAL_JUMP)  ; LAB_005a1105

