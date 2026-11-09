; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_FUN_00581260(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005834b0 at 00583503
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00581260
        ;   Label: core_tvbat.cpp_FUN_00581260
    MOV dword ptr [EAX + 0x10ca4],0x40400000 ; 00581264
    RET                                 ; 0058126e

