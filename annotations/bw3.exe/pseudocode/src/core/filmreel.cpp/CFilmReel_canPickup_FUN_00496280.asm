; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_00496280(CFilmReel *this_ptr,CDemonActor *picker)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c03fb                       ; 00496280
        ;   Label: core_filmreel.cpp_CFilmReel_canPickup_FUN_00496280
    MOV EDX,dword ptr [ESP + 0xc]       ; 00496285
    PUSH EDX                            ; 00496289
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0049628a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0049628f
    TEST EAX,EAX                        ; 00496292
    JZ 0x0049629b                       ; 00496294
        ;   XREF to: 0049629b (CONDITIONAL_JUMP)  ; LAB_0049629b
    MOV EAX,0x2                         ; 00496296
    RET                                 ; 0049629b
        ;   Label: LAB_0049629b

