; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_0045d740(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_0045d6c0 at 0045d707
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d740
        ;   Label: core_dfilter.cpp_CFilterCache_ctor_FUN_0045d740
    MOV dword ptr [EAX],0x0             ; 0045d744
    RET                                 ; 0045d74a

