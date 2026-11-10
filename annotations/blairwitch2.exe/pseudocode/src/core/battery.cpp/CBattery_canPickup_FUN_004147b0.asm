; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_battery_cpp_CBattery_canPickup_FUN_004147b0(CBattery *this_ptr,CDemonActor *picker)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5cbc2c                       ; 004147b0
        ;   Label: core_battery.cpp_CBattery_canPickup_FUN_004147b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004147b5
    PUSH EDX                            ; 004147b9
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004147ba
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004147bf
    TEST EAX,EAX                        ; 004147c2
    JZ 0x004147cb                       ; 004147c4
        ;   XREF to: 004147cb (CONDITIONAL_JUMP)  ; LAB_004147cb
    MOV EAX,0x2                         ; 004147c6
    RET                                 ; 004147cb
        ;   Label: LAB_004147cb

