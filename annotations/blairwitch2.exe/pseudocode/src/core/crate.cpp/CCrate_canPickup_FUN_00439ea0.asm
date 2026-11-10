; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00439ea0(CCrate *this_ptr,CDemonActor *picker)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5ce1d3                       ; 00439ea0
        ;   Label: core_crate.cpp_CCrate_canPickup_FUN_00439ea0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439ea5
    PUSH EDX                            ; 00439ea9
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00439eaa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00439eaf
    TEST EAX,EAX                        ; 00439eb2
    JZ 0x00439ebb                       ; 00439eb4
        ;   XREF to: 00439ebb (CONDITIONAL_JUMP)  ; LAB_00439ebb
    MOV EAX,0x4                         ; 00439eb6
    RET                                 ; 00439ebb
        ;   Label: LAB_00439ebb

