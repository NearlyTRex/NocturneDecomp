; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040dfe0(CAmmo *this_ptr,CDemonActor *picker)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5d31ad                       ; 0040dfe0
        ;   Label: core_ammo.cpp_CAmmo_canPickup_FUN_0040dfe0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040dfe5
    PUSH EDX                            ; 0040dfe9
    CALL core_actor.cpp_FUN_0040c550    ; 0040dfea
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040dfef
    TEST EAX,EAX                        ; 0040dff2
    JZ 0x0040dffb                       ; 0040dff4
        ;   XREF to: 0040dffb (CONDITIONAL_JUMP)  ; LAB_0040dffb
    MOV EAX,0x2                         ; 0040dff6
    RET                                 ; 0040dffb
        ;   Label: LAB_0040dffb

