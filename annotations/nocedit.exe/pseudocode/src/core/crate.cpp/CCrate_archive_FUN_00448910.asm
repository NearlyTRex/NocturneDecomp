; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_archive_FUN_00448910(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00619b10
;   TerminatedCString s_lastPlatform_00619b1a
;   int g_CCrateClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448910
        ;   Label: core_crate.cpp_CCrate_archive_FUN_00448910
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448911
    PUSH EBX                            ; 00448915
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 00448916
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044891b
    PUSH 0x619b10                       ; 0044891e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00448923
    PUSH EAX                            ; 00448929
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 0044892a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0066ec78]      ; 0044892f | g_CCrateClassVersion
    ADD ESP,0x8                         ; 00448935
    CMP EDX,0x2                         ; 00448938
    JGE 0x0044893f                      ; 0044893b
        ;   XREF to: 0044893f (CONDITIONAL_JUMP)  ; LAB_0044893f
    POP EBX                             ; 0044893d
    RET                                 ; 0044893e
    PUSH 0x619b1a                       ; 0044893f | = "lastPlatform"
        ;   Label: LAB_0044893f
    LEA EAX,[EBX + 0x2dc]               ; 00448944
    PUSH EAX                            ; 0044894a
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0044894b
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448950
    POP EBX                             ; 00448953
    RET                                 ; 00448954

