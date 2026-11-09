; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004ddb30(CGasMask *this_ptr,CDemonActor *picker)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e3a31                       ; 004ddb30
        ;   Label: core_gasmask.cpp_CGasMask_canPickup_FUN_004ddb30
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ddb35
    PUSH EDX                            ; 004ddb39
    CALL core_actor.cpp_FUN_0040c550    ; 004ddb3a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ddb3f
    TEST EAX,EAX                        ; 004ddb42
    JZ 0x004ddb50                       ; 004ddb44
        ;   XREF to: 004ddb50 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004ddb46
    LEA EAX,[EAX]                       ; 004ddb4b
    MOV ECX,ECX                         ; 004ddb4e

