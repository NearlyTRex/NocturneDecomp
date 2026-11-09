; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_00459690(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_00459610 at 00459657
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00459690
        ;   Label: core_dfilter.cpp_CFilterCache_ctor_FUN_00459690
    MOV dword ptr [EAX],0x0             ; 00459694
    RET                                 ; 0045969a

