; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_004226d0(CBoxActor * this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004226d0
        ;   Label: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_004226d0
    MOV EAX,dword ptr [EAX + 0x664]     ; 004226d4
    RET                                 ; 004226da

