; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040e080(CAmmo *this_ptr,CDemonActor *picker)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5b60f4                       ; 0040e080
        ;   Label: core_ammo.cpp_CAmmo_canPickup_FUN_0040e080
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e085
    PUSH EDX                            ; 0040e089
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0040e08a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040e08f
    TEST EAX,EAX                        ; 0040e092
    JZ 0x0040e0af                       ; 0040e094
        ;   XREF to: 0040e0af (CONDITIONAL_JUMP)  ; LAB_0040e0af
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e096
    MOV ECX,dword ptr [EAX + 0x318]     ; 0040e09a
    CMP ECX,0xa                         ; 0040e0a0
    JZ 0x0040e0aa                       ; 0040e0a3
        ;   XREF to: 0040e0aa (CONDITIONAL_JUMP)  ; LAB_0040e0aa
    CMP ECX,0xb                         ; 0040e0a5
    JNZ 0x0040e0b0                      ; 0040e0a8
        ;   XREF to: 0040e0b0 (CONDITIONAL_JUMP)  ; LAB_0040e0b0
    MOV EAX,0x5                         ; 0040e0aa
        ;   Label: LAB_0040e0aa
    RET                                 ; 0040e0af
        ;   Label: LAB_0040e0af
    MOV EAX,0x2                         ; 0040e0b0
        ;   Label: LAB_0040e0b0
    RET                                 ; 0040e0b5

