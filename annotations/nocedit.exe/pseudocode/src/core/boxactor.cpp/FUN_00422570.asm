; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_00422570()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00422570
        ;   Label: core_boxactor.cpp_FUN_00422570
    PUSH EDX                            ; 00422574
    MOV ECX,dword ptr [ESP + 0x8]       ; 00422575
    PUSH ECX                            ; 00422579
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010 ; 0042257a
        ;   XREF to: 0040a010 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0042257f
    RET                                 ; 00422582

