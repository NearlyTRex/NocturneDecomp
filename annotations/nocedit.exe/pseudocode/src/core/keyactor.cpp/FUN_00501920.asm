; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_keyactor_cpp_FUN_00501920(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00501920
        ;   Label: core_keyactor.cpp_FUN_00501920
    PUSH EDX                            ; 00501924
    MOV ECX,dword ptr [ESP + 0x8]       ; 00501925
    PUSH ECX                            ; 00501929
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010 ; 0050192a
        ;   XREF to: 0040a010 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0050192f
    RET                                 ; 00501932

