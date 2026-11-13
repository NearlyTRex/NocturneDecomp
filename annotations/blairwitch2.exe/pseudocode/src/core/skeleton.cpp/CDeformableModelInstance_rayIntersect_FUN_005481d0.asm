; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)
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
;   core_actor.cpp_FUN_004093a0 at 00409778
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_00543a40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005481d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0
    PUSH ESI                            ; 005481d1
    PUSH EDI                            ; 005481d2
    PUSH EBP                            ; 005481d3
    SUB ESP,0x8                         ; 005481d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005481d7
    PUSH ESI                            ; 005481db
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005481dc
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EBX,dword ptr [EAX]             ; 005481e1
    SUB EBX,0x2                         ; 005481e3
    ADD ESP,0x4                         ; 005481e6
    TEST EBX,EBX                        ; 005481e9
    JL 0x00548236                       ; 005481eb
        ;   XREF to: 00548236 (CONDITIONAL_JUMP)  ; LAB_00548236
    CMP EBX,dword ptr [ESI + 0x2230]    ; 005481ed
        ;   Label: LAB_005481ed
    JNZ 0x0054823a                      ; 005481f3
        ;   XREF to: 0054823a (CONDITIONAL_JUMP)  ; LAB_0054823a
    LEA EAX,[ESI + 0x2140]              ; 005481f5
        ;   Label: LAB_005481f5
    PUSH EAX                            ; 005481fb
    MOV ECX,dword ptr [ESI + 0x2234]    ; 005481fc
    PUSH ECX                            ; 00548202
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00548203
    PUSH EDI                            ; 00548207
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00548208
    PUSH EBP                            ; 0054820c
    PUSH EBX                            ; 0054820d
    PUSH ESI                            ; 0054820e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0054820f
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00548214
    PUSH EAX                            ; 00548217
    CALL core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_00543a40 ; 00548218
        ;   XREF to: 00543a40 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_00543a40(CDeformableModel * this_ptr, int lod_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054821d
    FLD float ptr [ESP + 0x1c]          ; 00548221
    ADD ESP,0x18                        ; 00548225
    FSTP float ptr [ESP]                ; 00548228
    MOV EAX,dword ptr [ESP]             ; 0054822b
    ADD ESP,0x8                         ; 0054822e
    POP EBP                             ; 00548231
    POP EDI                             ; 00548232
    POP ESI                             ; 00548233
    POP EBX                             ; 00548234
    RET                                 ; 00548235
    XOR EBX,EBX                         ; 00548236
        ;   Label: LAB_00548236
    JMP 0x005481ed                      ; 00548238
        ;   XREF to: 005481ed (UNCONDITIONAL_JUMP)  ; LAB_005481ed
    PUSH EBX                            ; 0054823a
        ;   Label: LAB_0054823a
    PUSH ESI                            ; 0054823b
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 0054823c
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00548241
    JMP 0x005481f5                      ; 00548244
        ;   XREF to: 005481f5 (UNCONDITIONAL_JUMP)  ; LAB_005481f5

