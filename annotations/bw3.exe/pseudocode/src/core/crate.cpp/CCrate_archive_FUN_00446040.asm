; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_archive_FUN_00446040(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b99fc
;   TerminatedCString s_lastPlatform_005b9a06
;   int g_CCrateClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446040
        ;   Label: core_crate.cpp_CCrate_archive_FUN_00446040
    MOV EBX,dword ptr [ESP + 0x8]       ; 00446041
    PUSH EBX                            ; 00446045
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00446046
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044604b
    PUSH 0x5b99fc                       ; 0044604e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00446053
    PUSH EAX                            ; 00446059
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0044605a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x005f1770]      ; 0044605f | g_CCrateClassVersion
    ADD ESP,0x8                         ; 00446065
    CMP EDX,0x2                         ; 00446068
    JGE 0x0044606f                      ; 0044606b
        ;   XREF to: 0044606f (CONDITIONAL_JUMP)  ; LAB_0044606f
    POP EBX                             ; 0044606d
    RET                                 ; 0044606e
    PUSH 0x5b9a06                       ; 0044606f | = "lastPlatform"
        ;   Label: LAB_0044606f
    LEA EAX,[EBX + 0x2dc]               ; 00446074
    PUSH EAX                            ; 0044607a
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0044607b
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00446080
    POP EBX                             ; 00446083
    RET                                 ; 00446084

