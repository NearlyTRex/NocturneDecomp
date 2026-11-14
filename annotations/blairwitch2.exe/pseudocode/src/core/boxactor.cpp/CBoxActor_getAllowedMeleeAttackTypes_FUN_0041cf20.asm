; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_0041cf20(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041cf20
        ;   Label: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_0041cf20
    MOV EAX,dword ptr [EAX + 0x7c0]     ; 0041cf24
    RET                                 ; 0041cf2a

