; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040ef70(CAmmo *this_ptr,CDemonActor *picker)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_0057833e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x57833e                       ; 0040ef70 | = "CHero"
        ;   Label: core_ammo.cpp_CAmmo_canPickup_FUN_0040ef70
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ef75
    PUSH EDX                            ; 0040ef79
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0040ef7a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040ef7f
    TEST EAX,EAX                        ; 0040ef82
    JZ 0x0040ef8b                       ; 0040ef84
        ;   XREF to: 0040ef8b (CONDITIONAL_JUMP)  ; LAB_0040ef8b
    MOV EAX,0x2                         ; 0040ef86
    RET                                 ; 0040ef8b
        ;   Label: LAB_0040ef8b

