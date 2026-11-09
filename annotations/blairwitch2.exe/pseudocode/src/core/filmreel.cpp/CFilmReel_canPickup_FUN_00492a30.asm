; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_00492a30(CFilmReel *this_ptr,CDemonActor *picker)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5d527d                       ; 00492a30
        ;   Label: core_filmreel.cpp_CFilmReel_canPickup_FUN_00492a30
    MOV EDX,dword ptr [ESP + 0xc]       ; 00492a35
    PUSH EDX                            ; 00492a39
    CALL core_actor.cpp_FUN_0040c840    ; 00492a3a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00492a3f
    TEST EAX,EAX                        ; 00492a42
    JZ 0x00492a4b                       ; 00492a44
        ;   XREF to: 00492a4b (CONDITIONAL_JUMP)  ; LAB_00492a4b
    MOV EAX,0x2                         ; 00492a46
    RET                                 ; 00492a4b
        ;   Label: LAB_00492a4b

