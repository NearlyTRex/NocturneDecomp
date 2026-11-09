; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_00459ca0(CFilterFX *this_ptr)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_00459610 at 00459671
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00459ca0
        ;   Label: core_dfilter.cpp_CFilterFX_ctor_FUN_00459ca0
    MOV dword ptr [EAX],0x0             ; 00459ca4
    MOV dword ptr [EAX + 0x8],0x0       ; 00459caa
    MOV dword ptr [EAX + 0x4],0x0       ; 00459cb1
    RET                                 ; 00459cb8

