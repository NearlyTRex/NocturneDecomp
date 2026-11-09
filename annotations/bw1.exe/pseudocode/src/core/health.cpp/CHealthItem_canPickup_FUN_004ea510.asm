; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004ea510(CHealthItem *this_ptr,CDemonActor *picker)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e45ea                       ; 004ea510
        ;   Label: core_health.cpp_CHealthItem_canPickup_FUN_004ea510
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ea515
    PUSH EDX                            ; 004ea519
    CALL core_actor.cpp_FUN_0040c550    ; 004ea51a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ea51f
    TEST EAX,EAX                        ; 004ea522
    JZ 0x004ea52b                       ; 004ea524
        ;   XREF to: 004ea52b (CONDITIONAL_JUMP)  ; LAB_004ea52b
    MOV EAX,0x2                         ; 004ea526
    RET                                 ; 004ea52b
        ;   Label: LAB_004ea52b

