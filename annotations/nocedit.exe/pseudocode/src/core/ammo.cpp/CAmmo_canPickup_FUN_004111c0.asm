; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_ammo.cpp_CAmmo_canPickup_FUN_004111c0(CAmmo * this_ptr, CDemonActor * picker)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00614a87
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x614a87                       ; 004111c0 | = "CHero" | s_CHero_00614a87 = CHero
        ;   Label: core_ammo.cpp_CAmmo_canPickup_FUN_004111c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004111c5
    PUSH EDX                            ; 004111c9
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004111ca | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004111cf
    TEST EAX,EAX                        ; 004111d2
    JZ 0x004111db                       ; 004111d4 | LAB_004111db
        ;   XREF to: 004111db (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004111d6
    RET                                 ; 004111db
        ;   Label: LAB_004111db

