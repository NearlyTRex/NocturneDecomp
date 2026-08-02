; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_dtor_FUN_0044c2d0(CFilterFX *this_ptr,uint flags)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c2d0
        ;   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_0044c2d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044c2d1
    PUSH EBX                            ; 0044c2d5
    CALL core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0 ; 0044c2d6
        ;   XREF to: 0044c2f0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 0044c2db
    MOV EAX,EBX                         ; 0044c2de
    POP EBX                             ; 0044c2e0
    RET                                 ; 0044c2e1

