; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_archive_FUN_0056d2f0(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d65a3
;   TerminatedCString s_homePos_005d65ad
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d2f0
        ;   Label: core_trash.cpp_CTrash_archive_FUN_0056d2f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d2f1
    PUSH EBX                            ; 0056d2f5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0056d2f6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056d2fb
    PUSH 0x5d65a3                       ; 0056d2fe | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0056d303
    PUSH EAX                            ; 0056d309
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0056d30a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056d30f
    PUSH 0x5d65ad                       ; 0056d312 | = "homePos"
    LEA EAX,[EBX + 0x2d4]               ; 0056d317
    PUSH EAX                            ; 0056d31d
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0056d31e
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056d323
    POP EBX                             ; 0056d326
    RET                                 ; 0056d327

