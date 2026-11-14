; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_reset_FUN_004e1470(CLevelLoader *this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_level.cpp_staticInit_FUN_004e1440 at 004e1445
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1470
        ;   Label: core_level.cpp_CLevelLoader_reset_FUN_004e1470
    MOV dword ptr [EAX + 0xc],0x0       ; 004e1474
    RET                                 ; 004e147b

