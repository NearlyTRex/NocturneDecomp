; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonFilter * core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter * this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_free_FUN_00470000 at 00470049
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470240
        ;   Label: core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
    MOV EBX,dword ptr [ESP + 0x8]       ; 00470241
    PUSH EBX                            ; 00470245
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0 ; 00470246
        ;   XREF to: 004702c0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0047024b
    MOV EAX,EBX                         ; 0047024e
    POP EBX                             ; 00470250
    RET                                 ; 00470251

