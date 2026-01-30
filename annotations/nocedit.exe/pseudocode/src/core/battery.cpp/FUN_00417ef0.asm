; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_battery_cpp_FUN_00417ef0(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417ef0
        ;   Label: core_battery.cpp_FUN_00417ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00417ef1
    PUSH EBX                            ; 00417ef5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00417ef6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

