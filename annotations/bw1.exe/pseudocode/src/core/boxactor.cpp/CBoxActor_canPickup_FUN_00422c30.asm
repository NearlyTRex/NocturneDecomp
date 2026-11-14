; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_00422c30(CBoxActor *this_ptr,CDemonActor *picker)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422c30
        ;   Label: core_boxactor.cpp_CBoxActor_canPickup_FUN_00422c30
    CMP dword ptr [EAX + 0x314],0x3     ; 00422c34
    JNZ 0x00422c48                      ; 00422c3b
        ;   XREF to: 00422c48 (CONDITIONAL_JUMP)  ; LAB_00422c48
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422c3d
        ;   Label: LAB_00422c3d
    MOV EAX,dword ptr [EAX + 0x314]     ; 00422c41
    RET                                 ; 00422c47
    PUSH 0x5d4d68                       ; 00422c48
        ;   Label: LAB_00422c48
    MOV ECX,dword ptr [ESP + 0xc]       ; 00422c4d
    PUSH ECX                            ; 00422c51
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00422c52
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00422c57
    TEST EAX,EAX                        ; 00422c5a
    JNZ 0x00422c3d                      ; 00422c5c
        ;   XREF to: 00422c3d (CONDITIONAL_JUMP)  ; LAB_00422c3d
    RET                                 ; 00422c5e

