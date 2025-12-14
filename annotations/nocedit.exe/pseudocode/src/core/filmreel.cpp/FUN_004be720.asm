; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004be720()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be720
        ;   Label: core_filmreel.cpp_FUN_004be720
    SUB ESP,0x20                        ; 004be721
    MOV EBX,dword ptr [ESP + 0x28]      ; 004be724
    PUSH EBX                            ; 004be728
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004be729
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

