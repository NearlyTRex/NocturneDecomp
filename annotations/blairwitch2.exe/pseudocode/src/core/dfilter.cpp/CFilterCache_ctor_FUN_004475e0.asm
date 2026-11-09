; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_004475e0(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_00447560 at 004475a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004475e0
        ;   Label: core_dfilter.cpp_CFilterCache_ctor_FUN_004475e0
    MOV dword ptr [EAX],0x0             ; 004475e4
    RET                                 ; 004475ea

