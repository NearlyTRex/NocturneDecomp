; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_archive_FUN_0059a300(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005f8034
;   TerminatedCString s_homePos_005f803e
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a300
        ;   Label: core_trash.cpp_CTrash_archive_FUN_0059a300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a301
    PUSH EBX                            ; 0059a305
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0059a306
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a30b
    PUSH 0x5f8034                       ; 0059a30e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0059a313
    PUSH EAX                            ; 0059a319
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 0059a31a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059a31f
    PUSH 0x5f803e                       ; 0059a322 | = "homePos"
    LEA EAX,[EBX + 0x2d4]               ; 0059a327
    PUSH EAX                            ; 0059a32d
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0059a32e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059a333
    POP EBX                             ; 0059a336
    RET                                 ; 0059a337

