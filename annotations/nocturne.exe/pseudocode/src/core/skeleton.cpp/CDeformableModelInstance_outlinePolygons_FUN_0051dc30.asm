; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591c2c
;   TerminatedCString s_CDeformableModelInstance_00591c41
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051dc30
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30
    PUSH EDI                            ; 0051dc31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051dc32
    CMP dword ptr [EBX + 0x2230],0x0    ; 0051dc36
    JL 0x0051dc5b                       ; 0051dc3d
        ;   XREF to: 0051dc5b (CONDITIONAL_JUMP)  ; LAB_0051dc5b
    MOV EDI,dword ptr [EBX + 0x2230]    ; 0051dc3f
        ;   Label: LAB_0051dc3f
    PUSH EDI                            ; 0051dc45
    PUSH EBX                            ; 0051dc46
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051dc47
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051dc4c
    PUSH EAX                            ; 0051dc4f
    CALL core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0 ; 0051dc50
        ;   XREF to: 00518ec0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0(CDeformableModel * this_ptr, int lod_level)
    ADD ESP,0x8                         ; 0051dc55
    POP EDI                             ; 0051dc58
    POP EBX                             ; 0051dc59
    RET                                 ; 0051dc5a
    PUSH ESI                            ; 0051dc5b
        ;   Label: LAB_0051dc5b
    MOV ECX,0x591c2c                    ; 0051dc5c | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd33                       ; 0051dc61
    PUSH 0x591c41                       ; 0051dc66 | = "CDeformableModelInstance::outlinePoly..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051dc6b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0051dc71 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0051dc77
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0051dc7c
    POP ESI                             ; 0051dc7f
    JMP 0x0051dc3f                      ; 0051dc80
        ;   XREF to: 0051dc3f (UNCONDITIONAL_JUMP)  ; LAB_0051dc3f

