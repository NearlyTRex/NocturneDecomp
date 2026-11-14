; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_00420320(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00420320
        ;   Label: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_00420320
    MOV EAX,dword ptr [EAX + 0x6c8]     ; 00420324
    RET                                 ; 0042032a

