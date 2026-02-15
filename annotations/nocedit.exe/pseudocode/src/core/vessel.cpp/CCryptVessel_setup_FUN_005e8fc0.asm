; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_005e8fc0(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8fc0
        ;   Label: core_vessel.cpp_CCryptVessel_setup_FUN_005e8fc0
    SUB ESP,0x24                        ; 005e8fc1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005e8fc4
    PUSH EBX                            ; 005e8fc8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005e8fc9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

