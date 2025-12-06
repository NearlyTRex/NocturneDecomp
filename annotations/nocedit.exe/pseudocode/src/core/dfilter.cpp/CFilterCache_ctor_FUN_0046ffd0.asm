; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFilterCache * core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0(CFilterCache * this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_0046ff50 at 0046ff97
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046ffd0
        ;   Label: core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
    MOV dword ptr [EAX],0x0             ; 0046ffd4
    RET                                 ; 0046ffda

