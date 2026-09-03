; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_reset_FUN_004c5630(CLevelLoader *this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_level.cpp_staticInit_FUN_004c5600 at 004c5605
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5630
        ;   Label: core_level.cpp_CLevelLoader_reset_FUN_004c5630
    MOV dword ptr [EAX + 0xc],0x0       ; 004c5634
    RET                                 ; 004c563b

