; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart * this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b1f0
        ;   Label: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0
    CMP dword ptr [EAX + 0x158],0x0     ; 0041b1f4
    JZ 0x0041b200                       ; 0041b1fb
        ;   XREF to: 0041b200 (CONDITIONAL_JUMP)  ; LAB_0041b200
    XOR EAX,EAX                         ; 0041b1fd
    RET                                 ; 0041b1ff
    PUSH EAX                            ; 0041b200
        ;   Label: LAB_0041b200
    CALL core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0 ; 0041b201
        ;   XREF to: 0040a0f0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041b206
    RET                                 ; 0041b209

