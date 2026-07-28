; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_0044c2b0(CFilterFx *this_ptr)
;
; Parameters:
; CFilterFx *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_staticInit_FUN_0044bc20 at 0044bc81
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c2b0
        ;   Label: core_dfilter.cpp_CFilterFX_ctor_FUN_0044c2b0
    MOV dword ptr [EAX],0x0             ; 0044c2b4
    MOV dword ptr [EAX + 0x8],0x0       ; 0044c2ba
    MOV dword ptr [EAX + 0x4],0x0       ; 0044c2c1
    RET                                 ; 0044c2c8

