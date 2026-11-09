; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_0045dd50(CFilterFX *this_ptr)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_0045d6c0 at 0045d721
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045dd50
        ;   Label: core_dfilter.cpp_CFilterFX_ctor_FUN_0045dd50
    MOV dword ptr [EAX],0x0             ; 0045dd54
    MOV dword ptr [EAX + 0x8],0x0       ; 0045dd5a
    MOV dword ptr [EAX + 0x4],0x0       ; 0045dd61
    RET                                 ; 0045dd68

