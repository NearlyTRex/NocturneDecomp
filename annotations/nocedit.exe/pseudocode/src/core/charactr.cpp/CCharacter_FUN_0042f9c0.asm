; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_0042f9c0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_FUN_00562920 at 00563ed3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f9c0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042f9c0
    MOV EAX,dword ptr [EAX + 0x7140]    ; 0042f9c4
    RET                                 ; 0042f9ca

