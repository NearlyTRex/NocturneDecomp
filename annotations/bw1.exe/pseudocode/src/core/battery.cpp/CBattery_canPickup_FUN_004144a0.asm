; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_battery_cpp_CBattery_canPickup_FUN_004144a0(CBattery *this_ptr,CDemonActor *picker)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5d3ba7                       ; 004144a0
        ;   Label: core_battery.cpp_CBattery_canPickup_FUN_004144a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004144a5
    PUSH EDX                            ; 004144a9
    CALL core_actor.cpp_FUN_0040c550    ; 004144aa
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004144af
    TEST EAX,EAX                        ; 004144b2
    JZ 0x004144bb                       ; 004144b4
        ;   XREF to: 004144bb (CONDITIONAL_JUMP)  ; LAB_004144bb
    MOV EAX,0x2                         ; 004144b6
    RET                                 ; 004144bb
        ;   Label: LAB_004144bb

