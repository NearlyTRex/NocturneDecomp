; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_0045d9a0(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_free_FUN_0045d770 at 0045d7a2
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d9a0
        ;   Label: core_dfilter.cpp_CDemonFilter_dtor_FUN_0045d9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d9a1
    PUSH EBX                            ; 0045d9a5
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10 ; 0045d9a6
        ;   XREF to: 0045da10 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0045d9ab
    MOV EAX,EBX                         ; 0045d9ae
    POP EBX                             ; 0045d9b0
    RET                                 ; 0045d9b1

