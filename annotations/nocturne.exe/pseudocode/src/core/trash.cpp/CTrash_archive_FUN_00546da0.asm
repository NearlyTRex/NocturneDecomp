; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_archive_FUN_00546da0(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_0059693f
;   TerminatedCString s_homePos_00596949
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546da0
        ;   Label: core_trash.cpp_CTrash_archive_FUN_00546da0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546da1
    PUSH EBX                            ; 00546da5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00546da6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00546dab
    PUSH 0x59693f                       ; 00546dae | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00546db3
    PUSH EAX                            ; 00546db9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00546dba
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546dbf
    PUSH 0x596949                       ; 00546dc2 | = "homePos"
    LEA EAX,[EBX + 0x2cc]               ; 00546dc7
    PUSH EAX                            ; 00546dcd
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00546dce
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546dd3
    POP EBX                             ; 00546dd6
    RET                                 ; 00546dd7

