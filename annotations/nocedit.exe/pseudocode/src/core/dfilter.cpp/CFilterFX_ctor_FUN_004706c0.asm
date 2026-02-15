; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx *this_ptr)
;
; Parameters:
; CFilterFx *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_0046ff50 at 0046ffb1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004706c0
        ;   Label: core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
    MOV dword ptr [EAX],0x0             ; 004706c4
    MOV dword ptr [EAX + 0x8],0x0       ; 004706ca
    MOV dword ptr [EAX + 0x4],0x0       ; 004706d1
    RET                                 ; 004706d8

