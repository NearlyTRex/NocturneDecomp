; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_hasDoorTarget_FUN_00432590(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00432590
        ;   Label: core_charactr.cpp_CCharacter_hasDoorTarget_FUN_00432590
    CMP dword ptr [EAX + 0x2740],0x0    ; 00432594
    SETZ AL                             ; 0043259b
    AND EAX,0xff                        ; 0043259e
    RET                                 ; 004325a3

