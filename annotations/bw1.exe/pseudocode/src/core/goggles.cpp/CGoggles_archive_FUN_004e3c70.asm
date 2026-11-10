; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_goggles_cpp_CGoggles_archive_FUN_004e3c70(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e400b
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e3c70
        ;   Label: core_goggles.cpp_CGoggles_archive_FUN_004e3c70
    PUSH EDX                            ; 004e3c74
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004e3c75
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e3c7a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e3c7d
    PUSH 0x5e400b                       ; 004e3c81 | = "modelName"
    ADD EAX,0x158                       ; 004e3c86
    PUSH EAX                            ; 004e3c8b
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004e3c8c
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 004e3c91
    RET                                 ; 004e3c94

