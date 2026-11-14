; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_goggles_cpp_CGoggles_canPickup_FUN_004e3ba0(CGoggles *this_ptr,CDemonActor *picker)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e4005                       ; 004e3ba0
        ;   Label: core_goggles.cpp_CGoggles_canPickup_FUN_004e3ba0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e3ba5
    PUSH EDX                            ; 004e3ba9
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004e3baa
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3baf
    TEST EAX,EAX                        ; 004e3bb2
    JZ 0x004e3bc0                       ; 004e3bb4
        ;   XREF to: 004e3bc0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004e3bb6
    LEA EAX,[EAX]                       ; 004e3bbb
    MOV ECX,ECX                         ; 004e3bbe

