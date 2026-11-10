; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0056ac60(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; CVector3f *      Stack[0xc]:4   orientation_vector
; int              Stack[0x10]:4   desired_lod_index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_shatter_FUN_00430c40 at 00430c7d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_00566420
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ac60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0056ac60
    PUSH ESI                            ; 0056ac61
    PUSH EDI                            ; 0056ac62
    PUSH EBP                            ; 0056ac63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056ac64
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056ac68
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0056ac6c
    JNZ 0x0056acb1                      ; 0056ac72
        ;   XREF to: 0056acb1 (CONDITIONAL_JUMP)  ; LAB_0056acb1
    LEA EAX,[EBX + 0x2230]              ; 0056ac74
        ;   Label: LAB_0056ac74
    PUSH EAX                            ; 0056ac7a
    LEA EAX,[EBX + 0x2140]              ; 0056ac7b
    PUSH EAX                            ; 0056ac81
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0056ac82
    PUSH ECX                            ; 0056ac88
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0056ac89
    PUSH ESI                            ; 0056ac8f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0056ac90
    PUSH EDI                            ; 0056ac94
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0056ac95
    PUSH EBP                            ; 0056ac99
    PUSH EBX                            ; 0056ac9a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056ac9b
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056aca0
    PUSH EAX                            ; 0056aca3
    CALL core_skeleton.cpp_CDeformableModel_shatter_FUN_00566420 ; 0056aca4
        ;   XREF to: 00566420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_shatter_FUN_00566420(CDeformableModel * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int lod_index, ...)
    ADD ESP,0x1c                        ; 0056aca9
    POP EBP                             ; 0056acac
    POP EDI                             ; 0056acad
    POP ESI                             ; 0056acae
    POP EBX                             ; 0056acaf
    RET                                 ; 0056acb0
    PUSH EAX                            ; 0056acb1
        ;   Label: LAB_0056acb1
    PUSH EBX                            ; 0056acb2
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890 ; 0056acb3
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0056acb8
    JMP 0x0056ac74                      ; 0056acbb
        ;   XREF to: 0056ac74 (UNCONDITIONAL_JUMP)  ; LAB_0056ac74

