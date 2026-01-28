; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_FUN_0042f9e0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_process_FUN_00559960 at 005599a6
;   core_script.cpp_FUN_00559b20 at 00559d48
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f9e0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042f9e0
    MOV EAX,dword ptr [EAX + 0x264]     ; 0042f9e4
    RET                                 ; 0042f9ea

