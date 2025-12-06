; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_health.cpp_FUN_004f2020()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f2020
        ;   Label: core_health.cpp_FUN_004f2020
    PUSH EDX                            ; 004f2024
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f2025
    PUSH ECX                            ; 004f2029
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010 ; 004f202a | void core_actor.cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor * this_ptr, CDemonActor * owner)
        ;   XREF to: 0040a010 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f202f
    RET                                 ; 004f2032

