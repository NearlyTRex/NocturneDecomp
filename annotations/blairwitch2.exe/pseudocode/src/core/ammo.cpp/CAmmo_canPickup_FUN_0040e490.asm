; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040e490(CAmmo *this_ptr,CDemonActor *picker)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5cb242                       ; 0040e490
        ;   Label: core_ammo.cpp_CAmmo_canPickup_FUN_0040e490
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e495
    PUSH EDX                            ; 0040e499
    CALL core_actor.cpp_FUN_0040c840    ; 0040e49a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040e49f
    TEST EAX,EAX                        ; 0040e4a2
    JZ 0x0040e4ab                       ; 0040e4a4
        ;   XREF to: 0040e4ab (CONDITIONAL_JUMP)  ; LAB_0040e4ab
    MOV EAX,0x2                         ; 0040e4a6
    RET                                 ; 0040e4ab
        ;   Label: LAB_0040e4ab

