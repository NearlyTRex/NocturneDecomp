; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004dea90(CKeyActor *this_ptr,CDemonActor *picker)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c66df                       ; 004dea90
        ;   Label: core_keyactor.cpp_CKeyActor_canPickup_FUN_004dea90
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dea95
    PUSH EDX                            ; 004dea99
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dea9a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dea9f
    TEST EAX,EAX                        ; 004deaa2
    JZ 0x004deaab                       ; 004deaa4
        ;   XREF to: 004deaab (CONDITIONAL_JUMP)  ; LAB_004deaab
    MOV EAX,0x2                         ; 004deaa6
    RET                                 ; 004deaab
        ;   Label: LAB_004deaab

