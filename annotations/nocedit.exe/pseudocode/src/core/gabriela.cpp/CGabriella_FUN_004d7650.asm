; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_FUN_004d7650(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e880
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d7650
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d7650
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d7654
    RET                                 ; 004d765a

