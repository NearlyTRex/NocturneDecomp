; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_00422e90(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422e90
        ;   Label: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_00422e90
    MOV EAX,dword ptr [EAX + 0x664]     ; 00422e94
    RET                                 ; 00422e9a

