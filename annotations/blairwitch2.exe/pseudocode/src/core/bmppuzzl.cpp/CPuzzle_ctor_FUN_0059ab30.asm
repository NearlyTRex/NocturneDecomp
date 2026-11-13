; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(CPuzzle *this_ptr)
;
; Parameters:
; CPuzzle *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_0059be60 at 0059be65
;   core_bmppuzzl.cpp_CExamplePuzzle_ctor_FUN_0059bf50 at 0059bf55
;   core_bmppuzzl.cpp_staticInit_FUN_0059aa80 at 0059aaa6
;
; Referenced Globals:
;   undefined4 DAT_026677b4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x026677b4]      ; 0059ab30 | DAT_026677b4
        ;   Label: core_bmppuzzl.cpp_CPuzzle_ctor_FUN_0059ab30
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ab36
    INC ECX                             ; 0059ab3a
    MOV dword ptr [EAX],0x5fe4f4        ; 0059ab3b
    MOV dword ptr [0x026677b4],ECX      ; 0059ab41 | DAT_026677b4
    MOV dword ptr [ECX*0x4 + 0x26677b4],EAX ; 0059ab47
    RET                                 ; 0059ab4e

