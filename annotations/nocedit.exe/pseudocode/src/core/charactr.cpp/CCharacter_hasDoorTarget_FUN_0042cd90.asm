; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042cd90
        ;   Label: core_charactr.cpp_CCharacter_hasDoorTarget_FUN_0042cd90
    CMP dword ptr [EAX + 0x25b4],0x0    ; 0042cd94
    SETZ AL                             ; 0042cd9b
    AND EAX,0xff                        ; 0042cd9e
    RET                                 ; 0042cda3

