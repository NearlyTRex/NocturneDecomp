; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_goggles_cpp_CGoggles_archive_FUN_0059c1a0(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ef5c7
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c1a0
        ;   Label: core_goggles.cpp_CGoggles_archive_FUN_0059c1a0
    PUSH EDX                            ; 0059c1a4
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 0059c1a5
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059c1aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c1ad
    PUSH 0x5ef5c7                       ; 0059c1b1 | = "modelName"
    ADD EAX,0x2b4                       ; 0059c1b6
    PUSH EAX                            ; 0059c1bb
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0059c1bc
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 0059c1c1
    RET                                 ; 0059c1c4

