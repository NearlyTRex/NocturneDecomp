; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_dtor_FUN_004706e0(CFilterFx *this_ptr)
;
; Parameters:
; CFilterFx *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dfilter.cpp_CFilterFX_free_FUN_00470700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004706e0
        ;   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004706e1
    PUSH EBX                            ; 004706e5
    CALL core_dfilter.cpp_CFilterFX_free_FUN_00470700 ; 004706e6
        ;   XREF to: 00470700 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_free_FUN_00470700(CFilterFx * this_ptr)
    ADD ESP,0x4                         ; 004706eb
    MOV EAX,EBX                         ; 004706ee
    POP EBX                             ; 004706f0
    RET                                 ; 004706f1

