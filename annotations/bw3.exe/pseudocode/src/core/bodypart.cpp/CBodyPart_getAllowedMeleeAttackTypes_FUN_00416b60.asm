; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00416b60(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00409db0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416b60
        ;   Label: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00416b60
    CMP dword ptr [EAX + 0x158],0x0     ; 00416b64
    JZ 0x00416b70                       ; 00416b6b
        ;   XREF to: 00416b70 (CONDITIONAL_JUMP)  ; LAB_00416b70
    XOR EAX,EAX                         ; 00416b6d
    RET                                 ; 00416b6f
    PUSH EAX                            ; 00416b70
        ;   Label: LAB_00416b70
    CALL core_actor.cpp_FUN_00409db0    ; 00416b71
        ;   XREF to: 00409db0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409db0()
    ADD ESP,0x4                         ; 00416b76
    RET                                 ; 00416b79

