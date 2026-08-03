; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_hasDoorTarget_FUN_00428f20(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428f20
        ;   Label: core_charactr.cpp_CCharacter_hasDoorTarget_FUN_00428f20
    CMP dword ptr [EAX + 0x25ac],0x0    ; 00428f24
    SETZ AL                             ; 00428f2b
    AND EAX,0xff                        ; 00428f2e
    RET                                 ; 00428f33

