; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004ddc00(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e3a37
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ddc00
        ;   Label: core_gasmask.cpp_CGasMask_archive_FUN_004ddc00
    PUSH EDX                            ; 004ddc04
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004ddc05
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ddc0a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ddc0d
    PUSH 0x5e3a37                       ; 004ddc11 | = "modelName"
    ADD EAX,0x158                       ; 004ddc16
    PUSH EAX                            ; 004ddc1b
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004ddc1c
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 004ddc21
    RET                                 ; 004ddc24

