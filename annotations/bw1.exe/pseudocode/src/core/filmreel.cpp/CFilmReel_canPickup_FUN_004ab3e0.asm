; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_004ab3e0(CFilmReel *this_ptr,CDemonActor *picker)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5df0bf                       ; 004ab3e0
        ;   Label: core_filmreel.cpp_CFilmReel_canPickup_FUN_004ab3e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ab3e5
    PUSH EDX                            ; 004ab3e9
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004ab3ea
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ab3ef
    TEST EAX,EAX                        ; 004ab3f2
    JZ 0x004ab3fb                       ; 004ab3f4
        ;   XREF to: 004ab3fb (CONDITIONAL_JUMP)  ; LAB_004ab3fb
    MOV EAX,0x2                         ; 004ab3f6
    RET                                 ; 004ab3fb
        ;   Label: LAB_004ab3fb

