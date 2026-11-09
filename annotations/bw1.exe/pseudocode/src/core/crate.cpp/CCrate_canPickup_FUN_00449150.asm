; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00449150(CCrate *this_ptr,CDemonActor *picker)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5d733f                       ; 00449150
        ;   Label: core_crate.cpp_CCrate_canPickup_FUN_00449150
    MOV EDX,dword ptr [ESP + 0xc]       ; 00449155
    PUSH EDX                            ; 00449159
    CALL core_actor.cpp_FUN_0040c550    ; 0044915a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0044915f
    TEST EAX,EAX                        ; 00449162
    JZ 0x0044916b                       ; 00449164
        ;   XREF to: 0044916b (CONDITIONAL_JUMP)  ; LAB_0044916b
    MOV EAX,0x4                         ; 00449166
    RET                                 ; 0044916b
        ;   Label: LAB_0044916b

