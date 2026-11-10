; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_canPickup_FUN_00599d90(CTrap *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599d90
        ;   Label: core_trap.cpp_CTrap_canPickup_FUN_00599d90
    CMP dword ptr [EAX + 0x2d8],0x0     ; 00599d94
    JZ 0x00599da3                       ; 00599d9b
        ;   XREF to: 00599da3 (CONDITIONAL_JUMP)  ; LAB_00599da3
    LEA EAX,[EAX]                       ; 00599d9d
    PUSH 0x5f8005                       ; 00599da3
        ;   Label: LAB_00599da3
    MOV ECX,dword ptr [ESP + 0xc]       ; 00599da8
    PUSH ECX                            ; 00599dac
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00599dad
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00599db2
    TEST EAX,EAX                        ; 00599db5
    JZ 0x00599da2                       ; 00599db7
        ;   XREF to: 00599da2 (CONDITIONAL_JUMP)  ; LAB_00599da2
    MOV EAX,0x2                         ; 00599db9
    RET                                 ; 00599dbe

