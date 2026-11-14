; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004fc770(CKeyActor *this_ptr,CDemonActor *picker)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e69fd                       ; 004fc770
        ;   Label: core_keyactor.cpp_CKeyActor_canPickup_FUN_004fc770
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc775
    PUSH EDX                            ; 004fc779
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fc77a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fc77f
    TEST EAX,EAX                        ; 004fc782
    JZ 0x004fc78b                       ; 004fc784
        ;   XREF to: 004fc78b (CONDITIONAL_JUMP)  ; LAB_004fc78b
    MOV EAX,0x2                         ; 004fc786
    RET                                 ; 004fc78b
        ;   Label: LAB_004fc78b

