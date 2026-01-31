; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_melee_cpp_CMelee_canPickup_FUN_0050eab0(CMelee *this_ptr,CDemonActor *picker)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00635cdc
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050eab0
        ;   Label: core_melee.cpp_CMelee_canPickup_FUN_0050eab0
    CMP dword ptr [EAX + 0x588],0x0     ; 0050eab4
    JNZ 0x0050eac3                      ; 0050eabb
        ;   XREF to: 0050eac3 (CONDITIONAL_JUMP)  ; LAB_0050eac3
    MOV EAX,0x3                         ; 0050eabd
        ;   Label: LAB_0050eabd
    RET                                 ; 0050eac2
    PUSH 0x635cdc                       ; 0050eac3 | = "CHero"
        ;   Label: LAB_0050eac3
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050eac8
    PUSH ECX                            ; 0050eacc
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0050eacd
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050ead2
    TEST EAX,EAX                        ; 0050ead5
    JZ 0x0050eabd                       ; 0050ead7
        ;   XREF to: 0050eabd (CONDITIONAL_JUMP)  ; LAB_0050eabd
    MOV EAX,0x2                         ; 0050ead9
    RET                                 ; 0050eade

