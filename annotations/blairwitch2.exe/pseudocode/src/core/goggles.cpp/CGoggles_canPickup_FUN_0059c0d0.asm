; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_goggles_cpp_CGoggles_canPickup_FUN_0059c0d0(CGoggles *this_ptr,CDemonActor *picker)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5ef5c1                       ; 0059c0d0
        ;   Label: core_goggles.cpp_CGoggles_canPickup_FUN_0059c0d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059c0d5
    PUSH EDX                            ; 0059c0d9
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0059c0da
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0059c0df
    TEST EAX,EAX                        ; 0059c0e2
    JZ 0x0059c0f0                       ; 0059c0e4
        ;   XREF to: 0059c0f0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 0059c0e6
    LEA EAX,[EAX]                       ; 0059c0eb
    MOV ECX,ECX                         ; 0059c0ee

