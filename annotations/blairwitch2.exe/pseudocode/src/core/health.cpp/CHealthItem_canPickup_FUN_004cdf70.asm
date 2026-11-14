; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004cdf70(CHealthItem *this_ptr,CDemonActor *picker)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5d99ee                       ; 004cdf70
        ;   Label: core_health.cpp_CHealthItem_canPickup_FUN_004cdf70
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cdf75
    PUSH EDX                            ; 004cdf79
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004cdf7a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004cdf7f
    TEST EAX,EAX                        ; 004cdf82
    JZ 0x004cdf8b                       ; 004cdf84
        ;   XREF to: 004cdf8b (CONDITIONAL_JUMP)  ; LAB_004cdf8b
    MOV EAX,0x2                         ; 004cdf86
    RET                                 ; 004cdf8b
        ;   Label: LAB_004cdf8b

