; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_canPickup_FUN_005de710(CTrap *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00655539
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005de710
        ;   Label: core_trap.cpp_CTrap_canPickup_FUN_005de710
    CMP dword ptr [EAX + 0x2d8],0x0     ; 005de714
    JZ 0x005de723                       ; 005de71b
        ;   XREF to: 005de723 (CONDITIONAL_JUMP)  ; LAB_005de723
    LEA EAX,[EAX]                       ; 005de71d
    PUSH 0x655539                       ; 005de723 | = "CHero"
        ;   Label: LAB_005de723
    MOV ECX,dword ptr [ESP + 0xc]       ; 005de728
    PUSH ECX                            ; 005de72c
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005de72d
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005de732
    TEST EAX,EAX                        ; 005de735
    JZ 0x005de722                       ; 005de737
        ;   XREF to: 005de722 (CONDITIONAL_JUMP)  ; LAB_005de722
    MOV EAX,0x2                         ; 005de739
    RET                                 ; 005de73e

