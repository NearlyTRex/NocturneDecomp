; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421830(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_setup_FUN_00422a20 at 00422a2f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421830
        ;   Label: core_boxactor.cpp_CBoxActor_setup_FUN_00421830
    PUSH ESI                            ; 00421831
    SUB ESP,0x4                         ; 00421832
    MOV EBX,dword ptr [ESP + 0x10]      ; 00421835
    PUSH EBX                            ; 00421839
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0042183a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

