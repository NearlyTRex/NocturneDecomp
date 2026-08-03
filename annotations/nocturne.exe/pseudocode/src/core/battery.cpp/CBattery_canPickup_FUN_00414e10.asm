; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_battery_cpp_CBattery_canPickup_FUN_00414e10(CBattery *this_ptr,CDemonActor *picker)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00578d6d
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x578d6d                       ; 00414e10 | = "CHero"
        ;   Label: core_battery.cpp_CBattery_canPickup_FUN_00414e10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00414e15
    PUSH EDX                            ; 00414e19
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00414e1a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00414e1f
    TEST EAX,EAX                        ; 00414e22
    JZ 0x00414e2b                       ; 00414e24
        ;   XREF to: 00414e2b (CONDITIONAL_JUMP)  ; LAB_00414e2b
    MOV EAX,0x2                         ; 00414e26
    RET                                 ; 00414e2b
        ;   Label: LAB_00414e2b

