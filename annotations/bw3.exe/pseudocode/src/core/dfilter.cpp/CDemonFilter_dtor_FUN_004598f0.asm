; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_004598f0(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_free_FUN_004596c0 at 004596f2
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004598f0
        ;   Label: core_dfilter.cpp_CDemonFilter_dtor_FUN_004598f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004598f1
    PUSH EBX                            ; 004598f5
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960 ; 004598f6
        ;   XREF to: 00459960 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004598fb
    MOV EAX,EBX                         ; 004598fe
    POP EBX                             ; 00459900
    RET                                 ; 00459901

