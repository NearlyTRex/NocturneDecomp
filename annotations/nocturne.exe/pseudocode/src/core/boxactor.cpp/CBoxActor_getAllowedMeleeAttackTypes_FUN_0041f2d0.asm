; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_0041f2d0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f2d0
        ;   Label: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_0041f2d0
    MOV EAX,dword ptr [EAX + 0x65c]     ; 0041f2d4
    RET                                 ; 0041f2da

