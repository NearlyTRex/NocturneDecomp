; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060 at 0043014f
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 at 00569823
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00564000
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569920
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920
    PUSH ESI                            ; 00569921
    MOV EBX,dword ptr [ESP + 0xc]       ; 00569922
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569926
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0056992a
    JNZ 0x00569955                      ; 00569930
        ;   XREF to: 00569955 (CONDITIONAL_JUMP)  ; LAB_00569955
    MOV ECX,dword ptr [EBX + 0x2324]    ; 00569932
        ;   Label: LAB_00569932
    PUSH ECX                            ; 00569938
    MOV ESI,dword ptr [EBX + 0x2320]    ; 00569939
    PUSH ESI                            ; 0056993f
    PUSH EBX                            ; 00569940
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00569941
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569946
    PUSH EAX                            ; 00569949
    CALL core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00564000 ; 0056994a
        ;   XREF to: 00564000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00564000(CDeformableModel * this_ptr, int lod_index, int * input_vertices)
    ADD ESP,0xc                         ; 0056994f
    POP ESI                             ; 00569952
    POP EBX                             ; 00569953
    RET                                 ; 00569954
    PUSH EAX                            ; 00569955
        ;   Label: LAB_00569955
    PUSH EBX                            ; 00569956
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890 ; 00569957
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0056995c
    JMP 0x00569932                      ; 0056995f
        ;   XREF to: 00569932 (UNCONDITIONAL_JUMP)  ; LAB_00569932

