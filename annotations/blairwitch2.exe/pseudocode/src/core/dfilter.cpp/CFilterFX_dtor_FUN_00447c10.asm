; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilterFX * __cdecl core_dfilter_cpp_CFilterFX_dtor_FUN_00447c10(CFilterFX *this_ptr,uint flags)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dfilter.cpp_FUN_00447c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447c10
        ;   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_00447c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447c11
    PUSH EBX                            ; 00447c15
    CALL core_dfilter.cpp_FUN_00447c30  ; 00447c16
        ;   XREF to: 00447c30 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_FUN_00447c30(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 00447c1b
    MOV EAX,EBX                         ; 00447c1e
    POP EBX                             ; 00447c20
    RET                                 ; 00447c21

