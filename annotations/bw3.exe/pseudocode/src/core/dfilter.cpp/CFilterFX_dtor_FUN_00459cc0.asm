; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_dtor_FUN_00459cc0(CFilterFX *this_ptr,uint flags)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_FUN_00459ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459cc0
        ;   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_00459cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459cc1
    PUSH EBX                            ; 00459cc5
    CALL core_dfilter.cpp_FUN_00459ce0  ; 00459cc6
        ;   XREF to: 00459ce0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_FUN_00459ce0(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 00459ccb
    MOV EAX,EBX                         ; 00459cce
    POP EBX                             ; 00459cd0
    RET                                 ; 00459cd1

