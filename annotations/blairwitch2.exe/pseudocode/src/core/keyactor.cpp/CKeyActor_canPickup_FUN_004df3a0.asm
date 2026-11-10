; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004df3a0(CKeyActor *this_ptr,CDemonActor *picker)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5dbbf0                       ; 004df3a0
        ;   Label: core_keyactor.cpp_CKeyActor_canPickup_FUN_004df3a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df3a5
    PUSH EDX                            ; 004df3a9
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004df3aa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004df3af
    TEST EAX,EAX                        ; 004df3b2
    JZ 0x004df3bb                       ; 004df3b4
        ;   XREF to: 004df3bb (CONDITIONAL_JUMP)  ; LAB_004df3bb
    MOV EAX,0x2                         ; 004df3b6
    RET                                 ; 004df3bb
        ;   Label: LAB_004df3bb

