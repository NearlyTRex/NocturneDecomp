; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_CKeyActor_onPickup_FUN_004c36f0(CDemonActor *param_1,CDemonActor *param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c36f0
        ;   Label: core_keyactor.cpp_CKeyActor_onPickup_FUN_004c36f0
    PUSH EDX                            ; 004c36f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c36f5
    PUSH ECX                            ; 004c36f9
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0 ; 004c36fa
        ;   XREF to: 0040b1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004c36ff
    RET                                 ; 004c3702

