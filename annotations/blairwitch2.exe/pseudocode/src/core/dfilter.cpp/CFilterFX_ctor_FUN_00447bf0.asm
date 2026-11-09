; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_00447bf0(CFilterFX *this_ptr)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_00447560 at 004475c1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00447bf0
        ;   Label: core_dfilter.cpp_CFilterFX_ctor_FUN_00447bf0
    MOV dword ptr [EAX],0x0             ; 00447bf4
    MOV dword ptr [EAX + 0x8],0x0       ; 00447bfa
    MOV dword ptr [EAX + 0x4],0x0       ; 00447c01
    RET                                 ; 00447c08

