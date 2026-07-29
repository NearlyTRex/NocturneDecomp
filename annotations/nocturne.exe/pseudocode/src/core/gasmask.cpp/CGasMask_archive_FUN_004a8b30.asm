; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004a8b30(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00584ab3
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a8b30
        ;   Label: core_gasmask.cpp_CGasMask_archive_FUN_004a8b30
    PUSH EDX                            ; 004a8b34
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004a8b35
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a8b3a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8b3d
    PUSH 0x584ab3                       ; 004a8b41 | = "modelName"
    ADD EAX,0x150                       ; 004a8b46
    PUSH EAX                            ; 004a8b4b
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004a8b4c
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a8b51
    RET                                 ; 004a8b54

