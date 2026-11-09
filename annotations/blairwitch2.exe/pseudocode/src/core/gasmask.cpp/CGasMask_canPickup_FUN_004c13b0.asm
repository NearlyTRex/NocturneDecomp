; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004c13b0(CGasMask *this_ptr,CDemonActor *picker)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5d8e77                       ; 004c13b0
        ;   Label: core_gasmask.cpp_CGasMask_canPickup_FUN_004c13b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c13b5
    PUSH EDX                            ; 004c13b9
    CALL core_actor.cpp_FUN_0040c840    ; 004c13ba
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c13bf
    TEST EAX,EAX                        ; 004c13c2
    JZ 0x004c13d0                       ; 004c13c4
        ;   XREF to: 004c13d0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004c13c6
    LEA EAX,[EAX]                       ; 004c13cb
    MOV ECX,ECX                         ; 004c13ce

