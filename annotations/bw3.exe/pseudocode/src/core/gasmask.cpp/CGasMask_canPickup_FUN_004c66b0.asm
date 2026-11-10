; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004c66b0(CGasMask *this_ptr,CDemonActor *picker)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c403d                       ; 004c66b0
        ;   Label: core_gasmask.cpp_CGasMask_canPickup_FUN_004c66b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c66b5
    PUSH EDX                            ; 004c66b9
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004c66ba
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c66bf
    TEST EAX,EAX                        ; 004c66c2
    JZ 0x004c66d0                       ; 004c66c4
        ;   XREF to: 004c66d0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004c66c6
    LEA EAX,[EAX]                       ; 004c66cb
    MOV ECX,ECX                         ; 004c66ce

