; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_setup_FUN_005debc0(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005debc0
        ;   Label: core_trash.cpp_CTrash_setup_FUN_005debc0
    SUB ESP,0x4                         ; 005debc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005debc4
    PUSH EBX                            ; 005debc8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005debc9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

