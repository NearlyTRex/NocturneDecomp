; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_canPickup_FUN_005764d0(CTrap *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005764d0
        ;   Label: core_trap.cpp_CTrap_canPickup_FUN_005764d0
    CMP dword ptr [EAX + 0x434],0x0     ; 005764d4
    JZ 0x005764e3                       ; 005764db
        ;   XREF to: 005764e3 (CONDITIONAL_JUMP)  ; LAB_005764e3
    LEA EAX,[EAX]                       ; 005764dd
    PUSH 0x5ecceb                       ; 005764e3
        ;   Label: LAB_005764e3
    MOV ECX,dword ptr [ESP + 0xc]       ; 005764e8
    PUSH ECX                            ; 005764ec
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 005764ed
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005764f2
    TEST EAX,EAX                        ; 005764f5
    JZ 0x005764e2                       ; 005764f7
        ;   XREF to: 005764e2 (CONDITIONAL_JUMP)  ; LAB_005764e2
    MOV EAX,0x2                         ; 005764f9
    RET                                 ; 005764fe

