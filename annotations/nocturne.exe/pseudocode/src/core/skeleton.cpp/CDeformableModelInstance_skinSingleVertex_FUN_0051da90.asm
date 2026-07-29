; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90(CDeformableModelInstance *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_pos
; int              Stack[0xc]:4   lod_index
; int              Stack[0x10]:4   vertex_index
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00518320
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051da90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90
    PUSH ESI                            ; 0051da91
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051da92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051da96
    LEA EAX,[EDX + 0xe80]               ; 0051da9a
    PUSH EAX                            ; 0051daa0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051daa1
    PUSH ECX                            ; 0051daa5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051daa6
    PUSH ESI                            ; 0051daaa
    PUSH EBX                            ; 0051daab
    PUSH EDX                            ; 0051daac
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051daad
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051dab2
    PUSH EAX                            ; 0051dab5
    CALL core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00518320 ; 0051dab6
        ;   XREF to: 00518320 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00518320(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, ...)
    ADD ESP,0x14                        ; 0051dabb
    MOV EAX,EBX                         ; 0051dabe
    POP ESI                             ; 0051dac0
    POP EBX                             ; 0051dac1
    RET                                 ; 0051dac2

