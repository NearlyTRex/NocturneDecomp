; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004eab90(CMelee *this_ptr,CDemonActor *picker)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_005dca3b
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eab90
        ;   Label: core_melee.cpp_CMelee_canPickup_FUN_004eab90
    CMP dword ptr [EAX + 0x6e4],0x0     ; 004eab94
    JNZ 0x004eaba3                      ; 004eab9b
        ;   XREF to: 004eaba3 (CONDITIONAL_JUMP)  ; LAB_004eaba3
    MOV EAX,0x3                         ; 004eab9d
        ;   Label: LAB_004eab9d
    RET                                 ; 004eaba2
    PUSH 0x5dca3b                       ; 004eaba3 | = "CHero"
        ;   Label: LAB_004eaba3
    MOV ECX,dword ptr [ESP + 0xc]       ; 004eaba8
    PUSH ECX                            ; 004eabac
    CALL core_actor.cpp_FUN_0040c840    ; 004eabad
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004eabb2
    TEST EAX,EAX                        ; 004eabb5
    JZ 0x004eab9d                       ; 004eabb7
        ;   XREF to: 004eab9d (CONDITIONAL_JUMP)  ; LAB_004eab9d
    MOV EAX,0x2                         ; 004eabb9
    RET                                 ; 004eabbe

