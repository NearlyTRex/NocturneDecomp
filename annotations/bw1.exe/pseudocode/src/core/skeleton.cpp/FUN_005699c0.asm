; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_005699c0(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 at 00569882
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00564070
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005699c0
        ;   Label: core_skeleton.cpp_FUN_005699c0
    PUSH ESI                            ; 005699c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005699c2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005699c6
    CMP EAX,dword ptr [EBX + 0x2320]    ; 005699ca
    JNZ 0x005699f5                      ; 005699d0
        ;   XREF to: 005699f5 (CONDITIONAL_JUMP)  ; LAB_005699f5
    MOV ECX,dword ptr [EBX + 0x2324]    ; 005699d2
        ;   Label: LAB_005699d2
    PUSH ECX                            ; 005699d8
    MOV ESI,dword ptr [EBX + 0x2320]    ; 005699d9
    PUSH ESI                            ; 005699df
    PUSH EBX                            ; 005699e0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005699e1
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005699e6
    PUSH EAX                            ; 005699e9
    CALL core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00564070 ; 005699ea
        ;   XREF to: 00564070 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00564070(CDeformableModel * this_ptr, int lod_index, CVector3i * lod_vertices)
    ADD ESP,0xc                         ; 005699ef
    POP ESI                             ; 005699f2
    POP EBX                             ; 005699f3
    RET                                 ; 005699f4
    PUSH EAX                            ; 005699f5
        ;   Label: LAB_005699f5
    PUSH EBX                            ; 005699f6
    CALL core_skeleton.cpp_FUN_00569890 ; 005699f7
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005699fc
    JMP 0x005699d2                      ; 005699ff
        ;   XREF to: 005699d2 (UNCONDITIONAL_JUMP)  ; LAB_005699d2

