; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_hasDoorTarget_FUN_004319b0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004319b0
        ;   Label: core_charactr.cpp_CCharacter_hasDoorTarget_FUN_004319b0
    CMP dword ptr [EAX + 0x2740],0x0    ; 004319b4
    SETZ AL                             ; 004319bb
    AND EAX,0xff                        ; 004319be
    RET                                 ; 004319c3

