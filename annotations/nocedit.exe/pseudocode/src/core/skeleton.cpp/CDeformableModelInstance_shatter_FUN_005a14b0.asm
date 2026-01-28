; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0 (CDeformableModelInstance *this_ptr,CVector3f *center_position, CVector3f *orientation_vector,int desired_lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; CVector3f *      Stack[0xc]:4   orientation_vector
; int              Stack[0x10]:4   desired_lod_index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042b8e0 at 0042b91d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a14b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0
    PUSH ESI                            ; 005a14b1
    PUSH EDI                            ; 005a14b2
    PUSH EBP                            ; 005a14b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a14b4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a14b8
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005a14bc
    JNZ 0x005a1501                      ; 005a14c2
        ;   XREF to: 005a1501 (CONDITIONAL_JUMP)  ; LAB_005a1501
    LEA EAX,[EBX + 0x21b8]              ; 005a14c4
        ;   Label: LAB_005a14c4
    PUSH EAX                            ; 005a14ca
    LEA EAX,[EBX + 0x2140]              ; 005a14cb
    PUSH EAX                            ; 005a14d1
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005a14d2
    PUSH ECX                            ; 005a14d8
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005a14d9
    PUSH ESI                            ; 005a14df
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a14e0
    PUSH EDI                            ; 005a14e4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005a14e5
    PUSH EBP                            ; 005a14e9
    PUSH EBX                            ; 005a14ea
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a14eb
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a14f0
    PUSH EAX                            ; 005a14f3
    CALL core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 ; 005a14f4
        ;   XREF to: 0059cec0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int lod_index, ...)
    ADD ESP,0x1c                        ; 005a14f9
    POP EBP                             ; 005a14fc
    POP EDI                             ; 005a14fd
    POP ESI                             ; 005a14fe
    POP EBX                             ; 005a14ff
    RET                                 ; 005a1500
    PUSH EAX                            ; 005a1501
        ;   Label: LAB_005a1501
    PUSH EBX                            ; 005a1502
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a1503
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a1508
    JMP 0x005a14c4                      ; 005a150b
        ;   XREF to: 005a14c4 (UNCONDITIONAL_JUMP)  ; LAB_005a14c4

