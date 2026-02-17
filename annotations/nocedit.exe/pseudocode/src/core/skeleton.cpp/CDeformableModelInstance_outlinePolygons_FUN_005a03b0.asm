; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052c292
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ee91
;   TerminatedCString s_CDeformableModelInstance_0064eea6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a03b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
    PUSH EDI                            ; 005a03b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a03b2
    CMP dword ptr [EBX + 0x2230],0x0    ; 005a03b6
    JL 0x005a03db                       ; 005a03bd
        ;   XREF to: 005a03db (CONDITIONAL_JUMP)  ; LAB_005a03db
    MOV EDI,dword ptr [EBX + 0x2230]    ; 005a03bf
        ;   Label: LAB_005a03bf
    PUSH EDI                            ; 005a03c5
    PUSH EBX                            ; 005a03c6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a03c7
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a03cc
    PUSH EAX                            ; 005a03cf
    CALL core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0 ; 005a03d0
        ;   XREF to: 0059b5a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(CDeformableModel * this_ptr, int lod_level)
    ADD ESP,0x8                         ; 005a03d5
    POP EDI                             ; 005a03d8
    POP EBX                             ; 005a03d9
    RET                                 ; 005a03da
    PUSH ESI                            ; 005a03db
        ;   Label: LAB_005a03db
    MOV ECX,0x64ee91                    ; 005a03dc | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd33                       ; 005a03e1
    PUSH 0x64eea6                       ; 005a03e6 | = "CDeformableModelInstance::outlinePoly..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a03eb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a03f1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a03f7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a03fc
    POP ESI                             ; 005a03ff
    JMP 0x005a03bf                      ; 005a0400
        ;   XREF to: 005a03bf (UNCONDITIONAL_JUMP)  ; LAB_005a03bf

