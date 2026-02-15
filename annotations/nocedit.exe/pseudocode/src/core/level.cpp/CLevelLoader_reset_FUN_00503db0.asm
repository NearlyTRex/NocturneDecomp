; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_reset_FUN_00503db0(CLevelLoader *this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_level.cpp_staticInit_FUN_00503d80 at 00503d85
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00503db0
        ;   Label: core_level.cpp_CLevelLoader_reset_FUN_00503db0
    MOV dword ptr [EAX + 0xc],0x0       ; 00503db4
    RET                                 ; 00503dbb

