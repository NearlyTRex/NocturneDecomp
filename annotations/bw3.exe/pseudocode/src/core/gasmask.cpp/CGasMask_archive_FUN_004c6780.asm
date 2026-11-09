; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004c6780(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005c4043
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c6780
        ;   Label: core_gasmask.cpp_CGasMask_archive_FUN_004c6780
    PUSH EDX                            ; 004c6784
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004c6785
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c678a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c678d
    PUSH 0x5c4043                       ; 004c6791 | = "modelName"
    ADD EAX,0x158                       ; 004c6796
    PUSH EAX                            ; 004c679b
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 004c679c
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 004c67a1
    RET                                 ; 004c67a4

