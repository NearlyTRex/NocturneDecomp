; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_0044bca0(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_0044bc20 at 0044bc67
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044bca0
        ;   Label: core_dfilter.cpp_CFilterCache_ctor_FUN_0044bca0
    MOV dword ptr [EAX],0x0             ; 0044bca4
    RET                                 ; 0044bcaa

