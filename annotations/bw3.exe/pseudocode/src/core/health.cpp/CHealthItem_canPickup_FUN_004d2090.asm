; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004d2090(CHealthItem *this_ptr,CDemonActor *picker)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c4ac9                       ; 004d2090
        ;   Label: core_health.cpp_CHealthItem_canPickup_FUN_004d2090
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d2095
    PUSH EDX                            ; 004d2099
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004d209a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004d209f
    TEST EAX,EAX                        ; 004d20a2
    JZ 0x004d20b8                       ; 004d20a4
        ;   XREF to: 004d20b8 (CONDITIONAL_JUMP)  ; LAB_004d20b8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d20a6
    CMP dword ptr [EAX + 0x2e0],0x0     ; 004d20aa
    JZ 0x004d20b9                       ; 004d20b1
        ;   XREF to: 004d20b9 (CONDITIONAL_JUMP)  ; LAB_004d20b9
    MOV EAX,0x5                         ; 004d20b3
    RET                                 ; 004d20b8
        ;   Label: LAB_004d20b8
    MOV EAX,0x2                         ; 004d20b9
        ;   Label: LAB_004d20b9
    RET                                 ; 004d20be

