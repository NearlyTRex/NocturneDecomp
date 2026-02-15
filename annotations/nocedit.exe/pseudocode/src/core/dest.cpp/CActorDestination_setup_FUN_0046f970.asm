; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0046f970(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_setup_FUN_004beb00 at 004beb06
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f970
        ;   Label: core_dest.cpp_CActorDestination_setup_FUN_0046f970
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f971
    PUSH EBX                            ; 0046f975
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0046f976
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

