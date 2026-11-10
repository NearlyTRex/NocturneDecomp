; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_dtor_FUN_0045dd70(CFilterFX *this_ptr,uint flags)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_CFilterFX_free_FUN_0045dd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd70
        ;   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_0045dd70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045dd71
    PUSH EBX                            ; 0045dd75
    CALL core_dfilter.cpp_CFilterFX_free_FUN_0045dd90 ; 0045dd76
        ;   XREF to: 0045dd90 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_free_FUN_0045dd90(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 0045dd7b
    MOV EAX,EBX                         ; 0045dd7e
    POP EBX                             ; 0045dd80
    RET                                 ; 0045dd81

