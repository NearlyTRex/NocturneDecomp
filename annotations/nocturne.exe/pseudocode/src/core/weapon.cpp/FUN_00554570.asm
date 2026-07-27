; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_00554570(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040b1a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00554570
        ;   Label: core_weapon.cpp_FUN_00554570
    PUSH EDX                            ; 00554574
    MOV ECX,dword ptr [ESP + 0x8]       ; 00554575
    PUSH ECX                            ; 00554579
    CALL core_actor.cpp_FUN_0040b1a0    ; 0055457a
        ;   XREF to: 0040b1a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040b1a0()
    ADD ESP,0x8                         ; 0055457f
    RET                                 ; 00554582

