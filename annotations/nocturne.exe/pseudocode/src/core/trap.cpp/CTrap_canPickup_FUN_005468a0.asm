; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_canPickup_FUN_005468a0(CTrap *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00596910
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005468a0
        ;   Label: core_trap.cpp_CTrap_canPickup_FUN_005468a0
    CMP dword ptr [EAX + 0x2d0],0x0     ; 005468a4
    JZ 0x005468b3                       ; 005468ab
        ;   XREF to: 005468b3 (CONDITIONAL_JUMP)  ; LAB_005468b3
    LEA EAX,[EAX]                       ; 005468ad
    PUSH 0x596910                       ; 005468b3 | = "CHero"
        ;   Label: LAB_005468b3
    MOV ECX,dword ptr [ESP + 0xc]       ; 005468b8
    PUSH ECX                            ; 005468bc
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 005468bd
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005468c2
    TEST EAX,EAX                        ; 005468c5
    JZ 0x005468b2                       ; 005468c7
        ;   XREF to: 005468b2 (CONDITIONAL_JUMP)  ; LAB_005468b2
    MOV EAX,0x2                         ; 005468c9
    RET                                 ; 005468ce

